

#ifndef WEBSOCKETPP_CONFIG_ASIO_HPP
#define WEBSOCKETPP_CONFIG_ASIO_HPP

#include <websocketpp/config/core.hpp>
#include <websocketpp/transport/asio/endpoint.hpp>

namespace websocketpp {
namespace config {

/// Server config with asio transport and TLS disabled
struct asio : public core {
    typedef asio type;
    typedef core base;

    typedef base::concurrency_type concurrency_type;

    typedef base::request_type request_type;
    typedef base::response_type response_type;

    typedef base::message_type message_type;
    typedef base::con_msg_manager_type con_msg_manager_type;
    typedef base::endpoint_msg_manager_type endpoint_msg_manager_type;

    typedef base::alog_type alog_type;
    typedef base::elog_type elog_type;

    typedef base::rng_type rng_type;

    struct transport_config : public base::transport_config {
        typedef type::concurrency_type concurrency_type;
        typedef type::alog_type alog_type;
        typedef type::elog_type elog_type;
        typedef type::request_type request_type;
        typedef type::response_type response_type;
        typedef websocketpp::transport::asio::basic_socket::endpoint
            socket_type;
    };

    typedef websocketpp::transport::asio::endpoint<transport_config>
        transport_type;
};

} // namespace config
} // namespace websocketpp

#endif // WEBSOCKETPP_CONFIG_ASIO_HPP
