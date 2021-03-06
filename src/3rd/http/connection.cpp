
#include "connection.hpp"
#include <utility>
#include <vector>
#include "connection_manager.hpp"
#include "server.hpp"

namespace http
{
namespace server
{

connection::connection(asio::ip::tcp::socket* socket,
                       connection_manager& manager, server& handler)
    : connection_manager_(manager)
    , request_handler_(handler)
	, ssl_(false)
{
	socket_ = socket;
	sslsocket_ = NULL;

	request_.peer_address_ = utils::InetAddress(socket_->remote_endpoint());
	request_.local_address_ = utils::InetAddress(socket_->local_endpoint());
}

connection::connection(SslSocket *socket,
	connection_manager& manager, server& handler)
	: connection_manager_(manager)
	, request_handler_(handler)
	, ssl_(true)
{
	sslsocket_ = socket;
	socket_ = NULL;
	request_.peer_address_ = utils::InetAddress(sslsocket_->lowest_layer().remote_endpoint());
	request_.local_address_ = utils::InetAddress(sslsocket_->lowest_layer().local_endpoint());
}

connection::~connection() {
	if (socket_) {
		socket_->close();
		delete socket_;
		socket_ = nullptr;
	}

	if (sslsocket_) {
		sslsocket_->lowest_layer().close();
		delete sslsocket_;
		sslsocket_ = nullptr;
	}
}

void
connection::start()
{
	if (ssl_){
		do_shakehand();
	}
	else
	{
		do_read();
	}
}

void
connection::stop()
{
	if (socket_){
		socket_->close();
		delete socket_;
		socket_ = nullptr;
	}

	if (sslsocket_){
		sslsocket_->lowest_layer().close();
		delete sslsocket_;
		sslsocket_ = nullptr;
	}
}

void
connection::do_shakehand(){
	auto self(shared_from_this());
	sslsocket_->async_handshake(asio::ssl::stream_base::server,
		[this](asio::error_code ec)
	{
		if (!ec){
			do_read();
		}
		else if(ec != asio::error::operation_aborted)
		{
			connection_manager_.stop(shared_from_this());
		}
	});
}

void
connection::do_read()
{
    auto self(shared_from_this());
	if (ssl_){
	 sslsocket_->async_read_some(asio::buffer(buffer_),
			[this, self](asio::error_code ec,
			std::size_t bytes_transferred)
		{
			if (!ec)
			{
				request_parser::result_type result;
				std::tie(result, std::ignore) = request_parser_.parse(
					request_, buffer_.data(), buffer_.data() + bytes_transferred);

				if (result == request_parser::good)
				{
					request_handler_.handle_request(request_, reply_);
					do_write();
				}
				else if (result == request_parser::bad)
				{
					reply_ = reply::stock_reply(reply::bad_request);
					do_write();
				}
				else
				{
					do_read();
				}
			}
			else if (ec != asio::error::operation_aborted)
			{
				connection_manager_.stop(shared_from_this());
			}
		});
	}
	else
	{
		socket_->async_read_some(asio::buffer(buffer_),
								[this, self](asio::error_code ec,
											 std::size_t bytes_transferred)
								{
			if (!ec)
			{
				request_parser::result_type result;
				std::tie(result, std::ignore) = request_parser_.parse(
					request_, buffer_.data(), buffer_.data() + bytes_transferred);

				if (result == request_parser::good)
				{
					request_handler_.handle_request(request_, reply_);
					do_write();
				}
				else if (result == request_parser::bad)
				{
					reply_ = reply::stock_reply(reply::bad_request);
					do_write();
				}
				else
				{
					do_read();
				}
			}
			else if (ec != asio::error::operation_aborted)
			{
				connection_manager_.stop(shared_from_this());
			}
		});
	}
}

void
connection::do_write()
{
    auto self(shared_from_this());
	if (ssl_){
		asio::async_write(*sslsocket_, reply_.to_buffers(),
			[this, self](asio::error_code ec, std::size_t)
		{
			if (!ec)
			{
				// Initiate graceful connection closure.
				asio::error_code ignored_ec;
				sslsocket_->lowest_layer().shutdown(asio::ip::tcp::socket::shutdown_both, ignored_ec);
			}

			if (ec != asio::error::operation_aborted)
			{
				connection_manager_.stop(shared_from_this());
			}
		});
	}
	else{
		asio::async_write(*socket_, reply_.to_buffers(),
			[this, self](asio::error_code ec, std::size_t)
		{
			if (!ec)
			{
				// Initiate graceful connection closure.
				asio::error_code ignored_ec;
				socket_->shutdown(asio::ip::tcp::socket::shutdown_both, ignored_ec);
			}

			if (ec != asio::error::operation_aborted)
			{
				connection_manager_.stop(shared_from_this());
			}
		});
	}
}

} // namespace server
} // namespace http
