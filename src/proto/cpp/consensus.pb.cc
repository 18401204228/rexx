

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "consensus.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protocol {

namespace {

const ::google::protobuf::Descriptor* PbftPrePrepare_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PbftPrePrepare_reflection_ = NULL;
const ::google::protobuf::Descriptor* PbftPrepare_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PbftPrepare_reflection_ = NULL;
const ::google::protobuf::Descriptor* PbftCommit_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PbftCommit_reflection_ = NULL;
const ::google::protobuf::Descriptor* PbftPreparedSet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PbftPreparedSet_reflection_ = NULL;
const ::google::protobuf::Descriptor* PbftViewChange_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PbftViewChange_reflection_ = NULL;
const ::google::protobuf::Descriptor* PbftViewChangeWithRawValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PbftViewChangeWithRawValue_reflection_ = NULL;
const ::google::protobuf::Descriptor* PbftNewView_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PbftNewView_reflection_ = NULL;
const ::google::protobuf::Descriptor* Pbft_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Pbft_reflection_ = NULL;
const ::google::protobuf::Descriptor* PbftEnv_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PbftEnv_reflection_ = NULL;
const ::google::protobuf::Descriptor* Validator_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Validator_reflection_ = NULL;
const ::google::protobuf::Descriptor* ValidatorSet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ValidatorSet_reflection_ = NULL;
const ::google::protobuf::Descriptor* PbftProof_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PbftProof_reflection_ = NULL;
const ::google::protobuf::Descriptor* FeeConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FeeConfig_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* FeeConfig_Type_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* PbftMessageType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* PbftValueType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_consensus_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_consensus_2eproto() {
  protobuf_AddDesc_consensus_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "consensus.proto");
  GOOGLE_CHECK(file != NULL);
  PbftPrePrepare_descriptor_ = file->message_type(0);
  static const int PbftPrePrepare_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrePrepare, view_number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrePrepare, sequence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrePrepare, replica_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrePrepare, value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrePrepare, value_digest_),
  };
  PbftPrePrepare_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PbftPrePrepare_descriptor_,
      PbftPrePrepare::default_instance_,
      PbftPrePrepare_offsets_,
      -1,
      -1,
      -1,
      sizeof(PbftPrePrepare),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrePrepare, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrePrepare, _is_default_instance_));
  PbftPrepare_descriptor_ = file->message_type(1);
  static const int PbftPrepare_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrepare, view_number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrepare, sequence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrepare, replica_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrepare, value_digest_),
  };
  PbftPrepare_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PbftPrepare_descriptor_,
      PbftPrepare::default_instance_,
      PbftPrepare_offsets_,
      -1,
      -1,
      -1,
      sizeof(PbftPrepare),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrepare, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPrepare, _is_default_instance_));
  PbftCommit_descriptor_ = file->message_type(2);
  static const int PbftCommit_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftCommit, view_number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftCommit, sequence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftCommit, replica_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftCommit, value_digest_),
  };
  PbftCommit_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PbftCommit_descriptor_,
      PbftCommit::default_instance_,
      PbftCommit_offsets_,
      -1,
      -1,
      -1,
      sizeof(PbftCommit),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftCommit, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftCommit, _is_default_instance_));
  PbftPreparedSet_descriptor_ = file->message_type(3);
  static const int PbftPreparedSet_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPreparedSet, pre_prepare_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPreparedSet, prepare_),
  };
  PbftPreparedSet_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PbftPreparedSet_descriptor_,
      PbftPreparedSet::default_instance_,
      PbftPreparedSet_offsets_,
      -1,
      -1,
      -1,
      sizeof(PbftPreparedSet),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPreparedSet, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftPreparedSet, _is_default_instance_));
  PbftViewChange_descriptor_ = file->message_type(4);
  static const int PbftViewChange_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftViewChange, view_number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftViewChange, sequence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftViewChange, prepred_value_digest_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftViewChange, replica_id_),
  };
  PbftViewChange_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PbftViewChange_descriptor_,
      PbftViewChange::default_instance_,
      PbftViewChange_offsets_,
      -1,
      -1,
      -1,
      sizeof(PbftViewChange),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftViewChange, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftViewChange, _is_default_instance_));
  PbftViewChangeWithRawValue_descriptor_ = file->message_type(5);
  static const int PbftViewChangeWithRawValue_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftViewChangeWithRawValue, view_change_env_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftViewChangeWithRawValue, prepared_set_),
  };
  PbftViewChangeWithRawValue_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PbftViewChangeWithRawValue_descriptor_,
      PbftViewChangeWithRawValue::default_instance_,
      PbftViewChangeWithRawValue_offsets_,
      -1,
      -1,
      -1,
      sizeof(PbftViewChangeWithRawValue),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftViewChangeWithRawValue, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftViewChangeWithRawValue, _is_default_instance_));
  PbftNewView_descriptor_ = file->message_type(6);
  static const int PbftNewView_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftNewView, view_number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftNewView, sequence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftNewView, replica_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftNewView, view_changes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftNewView, pre_prepare_),
  };
  PbftNewView_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PbftNewView_descriptor_,
      PbftNewView::default_instance_,
      PbftNewView_offsets_,
      -1,
      -1,
      -1,
      sizeof(PbftNewView),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftNewView, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftNewView, _is_default_instance_));
  Pbft_descriptor_ = file->message_type(7);
  static const int Pbft_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pbft, round_number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pbft, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pbft, pre_prepare_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pbft, prepare_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pbft, commit_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pbft, view_change_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pbft, new_view_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pbft, view_change_with_rawvalue_),
  };
  Pbft_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Pbft_descriptor_,
      Pbft::default_instance_,
      Pbft_offsets_,
      -1,
      -1,
      -1,
      sizeof(Pbft),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pbft, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pbft, _is_default_instance_));
  PbftEnv_descriptor_ = file->message_type(8);
  static const int PbftEnv_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftEnv, pbft_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftEnv, signature_),
  };
  PbftEnv_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PbftEnv_descriptor_,
      PbftEnv::default_instance_,
      PbftEnv_offsets_,
      -1,
      -1,
      -1,
      sizeof(PbftEnv),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftEnv, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftEnv, _is_default_instance_));
  Validator_descriptor_ = file->message_type(9);
  static const int Validator_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Validator, address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Validator, pledge_coin_amount_),
  };
  Validator_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Validator_descriptor_,
      Validator::default_instance_,
      Validator_offsets_,
      -1,
      -1,
      -1,
      sizeof(Validator),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Validator, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Validator, _is_default_instance_));
  ValidatorSet_descriptor_ = file->message_type(10);
  static const int ValidatorSet_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValidatorSet, validators_),
  };
  ValidatorSet_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ValidatorSet_descriptor_,
      ValidatorSet::default_instance_,
      ValidatorSet_offsets_,
      -1,
      -1,
      -1,
      sizeof(ValidatorSet),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValidatorSet, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValidatorSet, _is_default_instance_));
  PbftProof_descriptor_ = file->message_type(11);
  static const int PbftProof_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftProof, commits_),
  };
  PbftProof_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PbftProof_descriptor_,
      PbftProof::default_instance_,
      PbftProof_offsets_,
      -1,
      -1,
      -1,
      sizeof(PbftProof),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftProof, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbftProof, _is_default_instance_));
  FeeConfig_descriptor_ = file->message_type(12);
  static const int FeeConfig_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FeeConfig, gas_price_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FeeConfig, base_reserve_),
  };
  FeeConfig_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FeeConfig_descriptor_,
      FeeConfig::default_instance_,
      FeeConfig_offsets_,
      -1,
      -1,
      -1,
      sizeof(FeeConfig),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FeeConfig, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FeeConfig, _is_default_instance_));
  FeeConfig_Type_descriptor_ = FeeConfig_descriptor_->enum_type(0);
  PbftMessageType_descriptor_ = file->enum_type(0);
  PbftValueType_descriptor_ = file->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_consensus_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PbftPrePrepare_descriptor_, &PbftPrePrepare::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PbftPrepare_descriptor_, &PbftPrepare::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PbftCommit_descriptor_, &PbftCommit::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PbftPreparedSet_descriptor_, &PbftPreparedSet::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PbftViewChange_descriptor_, &PbftViewChange::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PbftViewChangeWithRawValue_descriptor_, &PbftViewChangeWithRawValue::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PbftNewView_descriptor_, &PbftNewView::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Pbft_descriptor_, &Pbft::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PbftEnv_descriptor_, &PbftEnv::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Validator_descriptor_, &Validator::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ValidatorSet_descriptor_, &ValidatorSet::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PbftProof_descriptor_, &PbftProof::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FeeConfig_descriptor_, &FeeConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_consensus_2eproto() {
  delete PbftPrePrepare::default_instance_;
  delete PbftPrePrepare_reflection_;
  delete PbftPrepare::default_instance_;
  delete PbftPrepare_reflection_;
  delete PbftCommit::default_instance_;
  delete PbftCommit_reflection_;
  delete PbftPreparedSet::default_instance_;
  delete PbftPreparedSet_reflection_;
  delete PbftViewChange::default_instance_;
  delete PbftViewChange_reflection_;
  delete PbftViewChangeWithRawValue::default_instance_;
  delete PbftViewChangeWithRawValue_reflection_;
  delete PbftNewView::default_instance_;
  delete PbftNewView_reflection_;
  delete Pbft::default_instance_;
  delete Pbft_reflection_;
  delete PbftEnv::default_instance_;
  delete PbftEnv_reflection_;
  delete Validator::default_instance_;
  delete Validator_reflection_;
  delete ValidatorSet::default_instance_;
  delete ValidatorSet_reflection_;
  delete PbftProof::default_instance_;
  delete PbftProof_reflection_;
  delete FeeConfig::default_instance_;
  delete FeeConfig_reflection_;
}

void protobuf_AddDesc_consensus_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_consensus_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protocol::protobuf_AddDesc_common_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017consensus.proto\022\010protocol\032\014common.prot"
    "o\"p\n\016PbftPrePrepare\022\023\n\013view_number\030\001 \001(\003"
    "\022\020\n\010sequence\030\002 \001(\003\022\022\n\nreplica_id\030\003 \001(\003\022\r"
    "\n\005value\030\004 \001(\014\022\024\n\014value_digest\030\005 \001(\014\"^\n\013P"
    "bftPrepare\022\023\n\013view_number\030\001 \001(\003\022\020\n\010seque"
    "nce\030\002 \001(\003\022\022\n\nreplica_id\030\003 \001(\003\022\024\n\014value_d"
    "igest\030\004 \001(\014\"]\n\nPbftCommit\022\023\n\013view_number"
    "\030\001 \001(\003\022\020\n\010sequence\030\002 \001(\003\022\022\n\nreplica_id\030\003"
    " \001(\003\022\024\n\014value_digest\030\004 \001(\014\"]\n\017PbftPrepar"
    "edSet\022&\n\013pre_prepare\030\001 \001(\0132\021.protocol.Pb"
    "ftEnv\022\"\n\007prepare\030\002 \003(\0132\021.protocol.PbftEn"
    "v\"i\n\016PbftViewChange\022\023\n\013view_number\030\001 \001(\003"
    "\022\020\n\010sequence\030\002 \001(\003\022\034\n\024prepred_value_dige"
    "st\030\003 \001(\014\022\022\n\nreplica_id\030\004 \001(\003\"y\n\032PbftView"
    "ChangeWithRawValue\022*\n\017view_change_env\030\001 "
    "\001(\0132\021.protocol.PbftEnv\022/\n\014prepared_set\030\002"
    " \001(\0132\031.protocol.PbftPreparedSet\"\231\001\n\013Pbft"
    "NewView\022\023\n\013view_number\030\001 \001(\003\022\020\n\010sequence"
    "\030\002 \001(\003\022\022\n\nreplica_id\030\003 \001(\003\022\'\n\014view_chang"
    "es\030\004 \003(\0132\021.protocol.PbftEnv\022&\n\013pre_prepa"
    "re\030\005 \001(\0132\021.protocol.PbftEnv\"\343\002\n\004Pbft\022\024\n\014"
    "round_number\030\001 \001(\003\022\'\n\004type\030\002 \001(\0162\031.proto"
    "col.PbftMessageType\022-\n\013pre_prepare\030\003 \001(\013"
    "2\030.protocol.PbftPrePrepare\022&\n\007prepare\030\004 "
    "\001(\0132\025.protocol.PbftPrepare\022$\n\006commit\030\005 \001"
    "(\0132\024.protocol.PbftCommit\022-\n\013view_change\030"
    "\006 \001(\0132\030.protocol.PbftViewChange\022\'\n\010new_v"
    "iew\030\007 \001(\0132\025.protocol.PbftNewView\022G\n\031view"
    "_change_with_rawvalue\030\010 \001(\0132$.protocol.P"
    "bftViewChangeWithRawValue\"O\n\007PbftEnv\022\034\n\004"
    "pbft\030\001 \001(\0132\016.protocol.Pbft\022&\n\tsignature\030"
    "\002 \001(\0132\023.protocol.Signature\"8\n\tValidator\022"
    "\017\n\007address\030\001 \001(\t\022\032\n\022pledge_coin_amount\030\002"
    " \001(\003\"7\n\014ValidatorSet\022\'\n\nvalidators\030\001 \003(\013"
    "2\023.protocol.Validator\"/\n\tPbftProof\022\"\n\007co"
    "mmits\030\001 \003(\0132\021.protocol.PbftEnv\"j\n\tFeeCon"
    "fig\022\021\n\tgas_price\030\001 \001(\003\022\024\n\014base_reserve\030\002"
    " \001(\003\"4\n\004Type\022\013\n\007UNKNOWN\020\000\022\r\n\tGAS_PRICE\020\001"
    "\022\020\n\014BASE_RESERVE\020\002*\260\001\n\017PbftMessageType\022\030"
    "\n\024PBFT_TYPE_PREPREPARE\020\000\022\025\n\021PBFT_TYPE_PR"
    "EPARE\020\001\022\024\n\020PBFT_TYPE_COMMIT\020\002\022\030\n\024PBFT_TY"
    "PE_VIEWCHANGE\020\003\022\025\n\021PBFT_TYPE_NEWVIEW\020\004\022%"
    "\n!PBFT_TYPE_VIEWCHANG_WITH_RAWVALUE\020\005*8\n"
    "\rPbftValueType\022\021\n\rPBFT_VALUE_TX\020\000\022\024\n\020PBF"
    "T_VALUE_TXSET\020\001b\006proto3", 1783);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "consensus.proto", &protobuf_RegisterTypes);
  PbftPrePrepare::default_instance_ = new PbftPrePrepare();
  PbftPrepare::default_instance_ = new PbftPrepare();
  PbftCommit::default_instance_ = new PbftCommit();
  PbftPreparedSet::default_instance_ = new PbftPreparedSet();
  PbftViewChange::default_instance_ = new PbftViewChange();
  PbftViewChangeWithRawValue::default_instance_ = new PbftViewChangeWithRawValue();
  PbftNewView::default_instance_ = new PbftNewView();
  Pbft::default_instance_ = new Pbft();
  PbftEnv::default_instance_ = new PbftEnv();
  Validator::default_instance_ = new Validator();
  ValidatorSet::default_instance_ = new ValidatorSet();
  PbftProof::default_instance_ = new PbftProof();
  FeeConfig::default_instance_ = new FeeConfig();
  PbftPrePrepare::default_instance_->InitAsDefaultInstance();
  PbftPrepare::default_instance_->InitAsDefaultInstance();
  PbftCommit::default_instance_->InitAsDefaultInstance();
  PbftPreparedSet::default_instance_->InitAsDefaultInstance();
  PbftViewChange::default_instance_->InitAsDefaultInstance();
  PbftViewChangeWithRawValue::default_instance_->InitAsDefaultInstance();
  PbftNewView::default_instance_->InitAsDefaultInstance();
  Pbft::default_instance_->InitAsDefaultInstance();
  PbftEnv::default_instance_->InitAsDefaultInstance();
  Validator::default_instance_->InitAsDefaultInstance();
  ValidatorSet::default_instance_->InitAsDefaultInstance();
  PbftProof::default_instance_->InitAsDefaultInstance();
  FeeConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_consensus_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_consensus_2eproto {
  StaticDescriptorInitializer_consensus_2eproto() {
    protobuf_AddDesc_consensus_2eproto();
  }
} static_descriptor_initializer_consensus_2eproto_;
const ::google::protobuf::EnumDescriptor* PbftMessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftMessageType_descriptor_;
}
bool PbftMessageType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* PbftValueType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftValueType_descriptor_;
}
bool PbftValueType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PbftPrePrepare::kViewNumberFieldNumber;
const int PbftPrePrepare::kSequenceFieldNumber;
const int PbftPrePrepare::kReplicaIdFieldNumber;
const int PbftPrePrepare::kValueFieldNumber;
const int PbftPrePrepare::kValueDigestFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PbftPrePrepare::PbftPrePrepare()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.PbftPrePrepare)
}

void PbftPrePrepare::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PbftPrePrepare::PbftPrePrepare(const PbftPrePrepare& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.PbftPrePrepare)
}

void PbftPrePrepare::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  view_number_ = GOOGLE_LONGLONG(0);
  sequence_ = GOOGLE_LONGLONG(0);
  replica_id_ = GOOGLE_LONGLONG(0);
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_digest_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PbftPrePrepare::~PbftPrePrepare() {
  // @@protoc_insertion_point(destructor:protocol.PbftPrePrepare)
  SharedDtor();
}

void PbftPrePrepare::SharedDtor() {
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_digest_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PbftPrePrepare::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PbftPrePrepare::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftPrePrepare_descriptor_;
}

const PbftPrePrepare& PbftPrePrepare::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

PbftPrePrepare* PbftPrePrepare::default_instance_ = NULL;

PbftPrePrepare* PbftPrePrepare::New(::google::protobuf::Arena* arena) const {
  PbftPrePrepare* n = new PbftPrePrepare;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PbftPrePrepare::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.PbftPrePrepare)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PbftPrePrepare, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PbftPrePrepare*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(view_number_, replica_id_);
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_digest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool PbftPrePrepare::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.PbftPrePrepare)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 view_number = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &view_number_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sequence;
        break;
      }

      // optional int64 sequence = 2;
      case 2: {
        if (tag == 16) {
         parse_sequence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sequence_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_replica_id;
        break;
      }

      // optional int64 replica_id = 3;
      case 3: {
        if (tag == 24) {
         parse_replica_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &replica_id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_value;
        break;
      }

      // optional bytes value = 4;
      case 4: {
        if (tag == 34) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_value_digest;
        break;
      }

      // optional bytes value_digest = 5;
      case 5: {
        if (tag == 42) {
         parse_value_digest:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value_digest()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.PbftPrePrepare)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.PbftPrePrepare)
  return false;
#undef DO_
}

void PbftPrePrepare::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.PbftPrePrepare)
  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->view_number(), output);
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->sequence(), output);
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->replica_id(), output);
  }

  // optional bytes value = 4;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->value(), output);
  }

  // optional bytes value_digest = 5;
  if (this->value_digest().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->value_digest(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.PbftPrePrepare)
}

::google::protobuf::uint8* PbftPrePrepare::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.PbftPrePrepare)
  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->view_number(), target);
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->sequence(), target);
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->replica_id(), target);
  }

  // optional bytes value = 4;
  if (this->value().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->value(), target);
  }

  // optional bytes value_digest = 5;
  if (this->value_digest().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->value_digest(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.PbftPrePrepare)
  return target;
}

int PbftPrePrepare::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.PbftPrePrepare)
  int total_size = 0;

  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->view_number());
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->sequence());
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->replica_id());
  }

  // optional bytes value = 4;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value());
  }

  // optional bytes value_digest = 5;
  if (this->value_digest().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value_digest());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PbftPrePrepare::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.PbftPrePrepare)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PbftPrePrepare* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PbftPrePrepare>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.PbftPrePrepare)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.PbftPrePrepare)
    MergeFrom(*source);
  }
}

void PbftPrePrepare::MergeFrom(const PbftPrePrepare& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.PbftPrePrepare)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.view_number() != 0) {
    set_view_number(from.view_number());
  }
  if (from.sequence() != 0) {
    set_sequence(from.sequence());
  }
  if (from.replica_id() != 0) {
    set_replica_id(from.replica_id());
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  if (from.value_digest().size() > 0) {

    value_digest_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_digest_);
  }
}

void PbftPrePrepare::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.PbftPrePrepare)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbftPrePrepare::CopyFrom(const PbftPrePrepare& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.PbftPrePrepare)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbftPrePrepare::IsInitialized() const {

  return true;
}

void PbftPrePrepare::Swap(PbftPrePrepare* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PbftPrePrepare::InternalSwap(PbftPrePrepare* other) {
  std::swap(view_number_, other->view_number_);
  std::swap(sequence_, other->sequence_);
  std::swap(replica_id_, other->replica_id_);
  value_.Swap(&other->value_);
  value_digest_.Swap(&other->value_digest_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PbftPrePrepare::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PbftPrePrepare_descriptor_;
  metadata.reflection = PbftPrePrepare_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PbftPrePrepare

// optional int64 view_number = 1;
void PbftPrePrepare::clear_view_number() {
  view_number_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftPrePrepare::view_number() const {
  // @@protoc_insertion_point(field_get:protocol.PbftPrePrepare.view_number)
  return view_number_;
}
 void PbftPrePrepare::set_view_number(::google::protobuf::int64 value) {
  
  view_number_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftPrePrepare.view_number)
}

// optional int64 sequence = 2;
void PbftPrePrepare::clear_sequence() {
  sequence_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftPrePrepare::sequence() const {
  // @@protoc_insertion_point(field_get:protocol.PbftPrePrepare.sequence)
  return sequence_;
}
 void PbftPrePrepare::set_sequence(::google::protobuf::int64 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftPrePrepare.sequence)
}

// optional int64 replica_id = 3;
void PbftPrePrepare::clear_replica_id() {
  replica_id_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftPrePrepare::replica_id() const {
  // @@protoc_insertion_point(field_get:protocol.PbftPrePrepare.replica_id)
  return replica_id_;
}
 void PbftPrePrepare::set_replica_id(::google::protobuf::int64 value) {
  
  replica_id_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftPrePrepare.replica_id)
}

// optional bytes value = 4;
void PbftPrePrepare::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PbftPrePrepare::value() const {
  // @@protoc_insertion_point(field_get:protocol.PbftPrePrepare.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PbftPrePrepare::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.PbftPrePrepare.value)
}
 void PbftPrePrepare::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.PbftPrePrepare.value)
}
 void PbftPrePrepare::set_value(const void* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.PbftPrePrepare.value)
}
 ::std::string* PbftPrePrepare::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:protocol.PbftPrePrepare.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PbftPrePrepare::release_value() {
  // @@protoc_insertion_point(field_release:protocol.PbftPrePrepare.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PbftPrePrepare::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftPrePrepare.value)
}

// optional bytes value_digest = 5;
void PbftPrePrepare::clear_value_digest() {
  value_digest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PbftPrePrepare::value_digest() const {
  // @@protoc_insertion_point(field_get:protocol.PbftPrePrepare.value_digest)
  return value_digest_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PbftPrePrepare::set_value_digest(const ::std::string& value) {
  
  value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.PbftPrePrepare.value_digest)
}
 void PbftPrePrepare::set_value_digest(const char* value) {
  
  value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.PbftPrePrepare.value_digest)
}
 void PbftPrePrepare::set_value_digest(const void* value, size_t size) {
  
  value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.PbftPrePrepare.value_digest)
}
 ::std::string* PbftPrePrepare::mutable_value_digest() {
  
  // @@protoc_insertion_point(field_mutable:protocol.PbftPrePrepare.value_digest)
  return value_digest_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PbftPrePrepare::release_value_digest() {
  // @@protoc_insertion_point(field_release:protocol.PbftPrePrepare.value_digest)
  
  return value_digest_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PbftPrePrepare::set_allocated_value_digest(::std::string* value_digest) {
  if (value_digest != NULL) {
    
  } else {
    
  }
  value_digest_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value_digest);
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftPrePrepare.value_digest)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PbftPrepare::kViewNumberFieldNumber;
const int PbftPrepare::kSequenceFieldNumber;
const int PbftPrepare::kReplicaIdFieldNumber;
const int PbftPrepare::kValueDigestFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PbftPrepare::PbftPrepare()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.PbftPrepare)
}

void PbftPrepare::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PbftPrepare::PbftPrepare(const PbftPrepare& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.PbftPrepare)
}

void PbftPrepare::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  view_number_ = GOOGLE_LONGLONG(0);
  sequence_ = GOOGLE_LONGLONG(0);
  replica_id_ = GOOGLE_LONGLONG(0);
  value_digest_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PbftPrepare::~PbftPrepare() {
  // @@protoc_insertion_point(destructor:protocol.PbftPrepare)
  SharedDtor();
}

void PbftPrepare::SharedDtor() {
  value_digest_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PbftPrepare::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PbftPrepare::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftPrepare_descriptor_;
}

const PbftPrepare& PbftPrepare::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

PbftPrepare* PbftPrepare::default_instance_ = NULL;

PbftPrepare* PbftPrepare::New(::google::protobuf::Arena* arena) const {
  PbftPrepare* n = new PbftPrepare;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PbftPrepare::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.PbftPrepare)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PbftPrepare, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PbftPrepare*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(view_number_, replica_id_);
  value_digest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool PbftPrepare::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.PbftPrepare)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 view_number = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &view_number_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sequence;
        break;
      }

      // optional int64 sequence = 2;
      case 2: {
        if (tag == 16) {
         parse_sequence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sequence_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_replica_id;
        break;
      }

      // optional int64 replica_id = 3;
      case 3: {
        if (tag == 24) {
         parse_replica_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &replica_id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_value_digest;
        break;
      }

      // optional bytes value_digest = 4;
      case 4: {
        if (tag == 34) {
         parse_value_digest:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value_digest()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.PbftPrepare)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.PbftPrepare)
  return false;
#undef DO_
}

void PbftPrepare::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.PbftPrepare)
  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->view_number(), output);
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->sequence(), output);
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->replica_id(), output);
  }

  // optional bytes value_digest = 4;
  if (this->value_digest().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->value_digest(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.PbftPrepare)
}

::google::protobuf::uint8* PbftPrepare::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.PbftPrepare)
  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->view_number(), target);
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->sequence(), target);
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->replica_id(), target);
  }

  // optional bytes value_digest = 4;
  if (this->value_digest().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->value_digest(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.PbftPrepare)
  return target;
}

int PbftPrepare::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.PbftPrepare)
  int total_size = 0;

  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->view_number());
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->sequence());
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->replica_id());
  }

  // optional bytes value_digest = 4;
  if (this->value_digest().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value_digest());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PbftPrepare::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.PbftPrepare)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PbftPrepare* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PbftPrepare>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.PbftPrepare)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.PbftPrepare)
    MergeFrom(*source);
  }
}

void PbftPrepare::MergeFrom(const PbftPrepare& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.PbftPrepare)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.view_number() != 0) {
    set_view_number(from.view_number());
  }
  if (from.sequence() != 0) {
    set_sequence(from.sequence());
  }
  if (from.replica_id() != 0) {
    set_replica_id(from.replica_id());
  }
  if (from.value_digest().size() > 0) {

    value_digest_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_digest_);
  }
}

void PbftPrepare::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.PbftPrepare)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbftPrepare::CopyFrom(const PbftPrepare& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.PbftPrepare)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbftPrepare::IsInitialized() const {

  return true;
}

void PbftPrepare::Swap(PbftPrepare* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PbftPrepare::InternalSwap(PbftPrepare* other) {
  std::swap(view_number_, other->view_number_);
  std::swap(sequence_, other->sequence_);
  std::swap(replica_id_, other->replica_id_);
  value_digest_.Swap(&other->value_digest_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PbftPrepare::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PbftPrepare_descriptor_;
  metadata.reflection = PbftPrepare_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PbftPrepare

// optional int64 view_number = 1;
void PbftPrepare::clear_view_number() {
  view_number_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftPrepare::view_number() const {
  // @@protoc_insertion_point(field_get:protocol.PbftPrepare.view_number)
  return view_number_;
}
 void PbftPrepare::set_view_number(::google::protobuf::int64 value) {
  
  view_number_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftPrepare.view_number)
}

// optional int64 sequence = 2;
void PbftPrepare::clear_sequence() {
  sequence_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftPrepare::sequence() const {
  // @@protoc_insertion_point(field_get:protocol.PbftPrepare.sequence)
  return sequence_;
}
 void PbftPrepare::set_sequence(::google::protobuf::int64 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftPrepare.sequence)
}

// optional int64 replica_id = 3;
void PbftPrepare::clear_replica_id() {
  replica_id_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftPrepare::replica_id() const {
  // @@protoc_insertion_point(field_get:protocol.PbftPrepare.replica_id)
  return replica_id_;
}
 void PbftPrepare::set_replica_id(::google::protobuf::int64 value) {
  
  replica_id_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftPrepare.replica_id)
}

// optional bytes value_digest = 4;
void PbftPrepare::clear_value_digest() {
  value_digest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PbftPrepare::value_digest() const {
  // @@protoc_insertion_point(field_get:protocol.PbftPrepare.value_digest)
  return value_digest_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PbftPrepare::set_value_digest(const ::std::string& value) {
  
  value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.PbftPrepare.value_digest)
}
 void PbftPrepare::set_value_digest(const char* value) {
  
  value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.PbftPrepare.value_digest)
}
 void PbftPrepare::set_value_digest(const void* value, size_t size) {
  
  value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.PbftPrepare.value_digest)
}
 ::std::string* PbftPrepare::mutable_value_digest() {
  
  // @@protoc_insertion_point(field_mutable:protocol.PbftPrepare.value_digest)
  return value_digest_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PbftPrepare::release_value_digest() {
  // @@protoc_insertion_point(field_release:protocol.PbftPrepare.value_digest)
  
  return value_digest_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PbftPrepare::set_allocated_value_digest(::std::string* value_digest) {
  if (value_digest != NULL) {
    
  } else {
    
  }
  value_digest_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value_digest);
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftPrepare.value_digest)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PbftCommit::kViewNumberFieldNumber;
const int PbftCommit::kSequenceFieldNumber;
const int PbftCommit::kReplicaIdFieldNumber;
const int PbftCommit::kValueDigestFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PbftCommit::PbftCommit()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.PbftCommit)
}

void PbftCommit::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PbftCommit::PbftCommit(const PbftCommit& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.PbftCommit)
}

void PbftCommit::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  view_number_ = GOOGLE_LONGLONG(0);
  sequence_ = GOOGLE_LONGLONG(0);
  replica_id_ = GOOGLE_LONGLONG(0);
  value_digest_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PbftCommit::~PbftCommit() {
  // @@protoc_insertion_point(destructor:protocol.PbftCommit)
  SharedDtor();
}

void PbftCommit::SharedDtor() {
  value_digest_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PbftCommit::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PbftCommit::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftCommit_descriptor_;
}

const PbftCommit& PbftCommit::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

PbftCommit* PbftCommit::default_instance_ = NULL;

PbftCommit* PbftCommit::New(::google::protobuf::Arena* arena) const {
  PbftCommit* n = new PbftCommit;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PbftCommit::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.PbftCommit)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PbftCommit, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PbftCommit*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(view_number_, replica_id_);
  value_digest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool PbftCommit::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.PbftCommit)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 view_number = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &view_number_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sequence;
        break;
      }

      // optional int64 sequence = 2;
      case 2: {
        if (tag == 16) {
         parse_sequence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sequence_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_replica_id;
        break;
      }

      // optional int64 replica_id = 3;
      case 3: {
        if (tag == 24) {
         parse_replica_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &replica_id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_value_digest;
        break;
      }

      // optional bytes value_digest = 4;
      case 4: {
        if (tag == 34) {
         parse_value_digest:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value_digest()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.PbftCommit)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.PbftCommit)
  return false;
#undef DO_
}

void PbftCommit::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.PbftCommit)
  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->view_number(), output);
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->sequence(), output);
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->replica_id(), output);
  }

  // optional bytes value_digest = 4;
  if (this->value_digest().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->value_digest(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.PbftCommit)
}

::google::protobuf::uint8* PbftCommit::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.PbftCommit)
  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->view_number(), target);
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->sequence(), target);
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->replica_id(), target);
  }

  // optional bytes value_digest = 4;
  if (this->value_digest().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->value_digest(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.PbftCommit)
  return target;
}

int PbftCommit::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.PbftCommit)
  int total_size = 0;

  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->view_number());
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->sequence());
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->replica_id());
  }

  // optional bytes value_digest = 4;
  if (this->value_digest().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value_digest());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PbftCommit::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.PbftCommit)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PbftCommit* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PbftCommit>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.PbftCommit)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.PbftCommit)
    MergeFrom(*source);
  }
}

void PbftCommit::MergeFrom(const PbftCommit& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.PbftCommit)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.view_number() != 0) {
    set_view_number(from.view_number());
  }
  if (from.sequence() != 0) {
    set_sequence(from.sequence());
  }
  if (from.replica_id() != 0) {
    set_replica_id(from.replica_id());
  }
  if (from.value_digest().size() > 0) {

    value_digest_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_digest_);
  }
}

void PbftCommit::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.PbftCommit)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbftCommit::CopyFrom(const PbftCommit& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.PbftCommit)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbftCommit::IsInitialized() const {

  return true;
}

void PbftCommit::Swap(PbftCommit* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PbftCommit::InternalSwap(PbftCommit* other) {
  std::swap(view_number_, other->view_number_);
  std::swap(sequence_, other->sequence_);
  std::swap(replica_id_, other->replica_id_);
  value_digest_.Swap(&other->value_digest_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PbftCommit::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PbftCommit_descriptor_;
  metadata.reflection = PbftCommit_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PbftCommit

// optional int64 view_number = 1;
void PbftCommit::clear_view_number() {
  view_number_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftCommit::view_number() const {
  // @@protoc_insertion_point(field_get:protocol.PbftCommit.view_number)
  return view_number_;
}
 void PbftCommit::set_view_number(::google::protobuf::int64 value) {
  
  view_number_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftCommit.view_number)
}

// optional int64 sequence = 2;
void PbftCommit::clear_sequence() {
  sequence_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftCommit::sequence() const {
  // @@protoc_insertion_point(field_get:protocol.PbftCommit.sequence)
  return sequence_;
}
 void PbftCommit::set_sequence(::google::protobuf::int64 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftCommit.sequence)
}

// optional int64 replica_id = 3;
void PbftCommit::clear_replica_id() {
  replica_id_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftCommit::replica_id() const {
  // @@protoc_insertion_point(field_get:protocol.PbftCommit.replica_id)
  return replica_id_;
}
 void PbftCommit::set_replica_id(::google::protobuf::int64 value) {
  
  replica_id_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftCommit.replica_id)
}

// optional bytes value_digest = 4;
void PbftCommit::clear_value_digest() {
  value_digest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PbftCommit::value_digest() const {
  // @@protoc_insertion_point(field_get:protocol.PbftCommit.value_digest)
  return value_digest_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PbftCommit::set_value_digest(const ::std::string& value) {
  
  value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.PbftCommit.value_digest)
}
 void PbftCommit::set_value_digest(const char* value) {
  
  value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.PbftCommit.value_digest)
}
 void PbftCommit::set_value_digest(const void* value, size_t size) {
  
  value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.PbftCommit.value_digest)
}
 ::std::string* PbftCommit::mutable_value_digest() {
  
  // @@protoc_insertion_point(field_mutable:protocol.PbftCommit.value_digest)
  return value_digest_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PbftCommit::release_value_digest() {
  // @@protoc_insertion_point(field_release:protocol.PbftCommit.value_digest)
  
  return value_digest_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PbftCommit::set_allocated_value_digest(::std::string* value_digest) {
  if (value_digest != NULL) {
    
  } else {
    
  }
  value_digest_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value_digest);
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftCommit.value_digest)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PbftPreparedSet::kPrePrepareFieldNumber;
const int PbftPreparedSet::kPrepareFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PbftPreparedSet::PbftPreparedSet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.PbftPreparedSet)
}

void PbftPreparedSet::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  pre_prepare_ = const_cast< ::protocol::PbftEnv*>(&::protocol::PbftEnv::default_instance());
}

PbftPreparedSet::PbftPreparedSet(const PbftPreparedSet& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.PbftPreparedSet)
}

void PbftPreparedSet::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  pre_prepare_ = NULL;
}

PbftPreparedSet::~PbftPreparedSet() {
  // @@protoc_insertion_point(destructor:protocol.PbftPreparedSet)
  SharedDtor();
}

void PbftPreparedSet::SharedDtor() {
  if (this != default_instance_) {
    delete pre_prepare_;
  }
}

void PbftPreparedSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PbftPreparedSet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftPreparedSet_descriptor_;
}

const PbftPreparedSet& PbftPreparedSet::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

PbftPreparedSet* PbftPreparedSet::default_instance_ = NULL;

PbftPreparedSet* PbftPreparedSet::New(::google::protobuf::Arena* arena) const {
  PbftPreparedSet* n = new PbftPreparedSet;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PbftPreparedSet::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.PbftPreparedSet)
  if (GetArenaNoVirtual() == NULL && pre_prepare_ != NULL) delete pre_prepare_;
  pre_prepare_ = NULL;
  prepare_.Clear();
}

bool PbftPreparedSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.PbftPreparedSet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.PbftEnv pre_prepare = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pre_prepare()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_prepare;
        break;
      }

      // repeated .protocol.PbftEnv prepare = 2;
      case 2: {
        if (tag == 18) {
         parse_prepare:
          DO_(input->IncrementRecursionDepth());
         parse_loop_prepare:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_prepare()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_prepare;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.PbftPreparedSet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.PbftPreparedSet)
  return false;
#undef DO_
}

void PbftPreparedSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.PbftPreparedSet)
  // optional .protocol.PbftEnv pre_prepare = 1;
  if (this->has_pre_prepare()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->pre_prepare_, output);
  }

  // repeated .protocol.PbftEnv prepare = 2;
  for (unsigned int i = 0, n = this->prepare_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->prepare(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.PbftPreparedSet)
}

::google::protobuf::uint8* PbftPreparedSet::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.PbftPreparedSet)
  // optional .protocol.PbftEnv pre_prepare = 1;
  if (this->has_pre_prepare()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->pre_prepare_, false, target);
  }

  // repeated .protocol.PbftEnv prepare = 2;
  for (unsigned int i = 0, n = this->prepare_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->prepare(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.PbftPreparedSet)
  return target;
}

int PbftPreparedSet::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.PbftPreparedSet)
  int total_size = 0;

  // optional .protocol.PbftEnv pre_prepare = 1;
  if (this->has_pre_prepare()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pre_prepare_);
  }

  // repeated .protocol.PbftEnv prepare = 2;
  total_size += 1 * this->prepare_size();
  for (int i = 0; i < this->prepare_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->prepare(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PbftPreparedSet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.PbftPreparedSet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PbftPreparedSet* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PbftPreparedSet>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.PbftPreparedSet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.PbftPreparedSet)
    MergeFrom(*source);
  }
}

void PbftPreparedSet::MergeFrom(const PbftPreparedSet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.PbftPreparedSet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  prepare_.MergeFrom(from.prepare_);
  if (from.has_pre_prepare()) {
    mutable_pre_prepare()->::protocol::PbftEnv::MergeFrom(from.pre_prepare());
  }
}

void PbftPreparedSet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.PbftPreparedSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbftPreparedSet::CopyFrom(const PbftPreparedSet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.PbftPreparedSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbftPreparedSet::IsInitialized() const {

  return true;
}

void PbftPreparedSet::Swap(PbftPreparedSet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PbftPreparedSet::InternalSwap(PbftPreparedSet* other) {
  std::swap(pre_prepare_, other->pre_prepare_);
  prepare_.UnsafeArenaSwap(&other->prepare_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PbftPreparedSet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PbftPreparedSet_descriptor_;
  metadata.reflection = PbftPreparedSet_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PbftPreparedSet

// optional .protocol.PbftEnv pre_prepare = 1;
bool PbftPreparedSet::has_pre_prepare() const {
  return !_is_default_instance_ && pre_prepare_ != NULL;
}
void PbftPreparedSet::clear_pre_prepare() {
  if (GetArenaNoVirtual() == NULL && pre_prepare_ != NULL) delete pre_prepare_;
  pre_prepare_ = NULL;
}
const ::protocol::PbftEnv& PbftPreparedSet::pre_prepare() const {
  // @@protoc_insertion_point(field_get:protocol.PbftPreparedSet.pre_prepare)
  return pre_prepare_ != NULL ? *pre_prepare_ : *default_instance_->pre_prepare_;
}
::protocol::PbftEnv* PbftPreparedSet::mutable_pre_prepare() {
  
  if (pre_prepare_ == NULL) {
    pre_prepare_ = new ::protocol::PbftEnv;
  }
  // @@protoc_insertion_point(field_mutable:protocol.PbftPreparedSet.pre_prepare)
  return pre_prepare_;
}
::protocol::PbftEnv* PbftPreparedSet::release_pre_prepare() {
  // @@protoc_insertion_point(field_release:protocol.PbftPreparedSet.pre_prepare)
  
  ::protocol::PbftEnv* temp = pre_prepare_;
  pre_prepare_ = NULL;
  return temp;
}
void PbftPreparedSet::set_allocated_pre_prepare(::protocol::PbftEnv* pre_prepare) {
  delete pre_prepare_;
  pre_prepare_ = pre_prepare;
  if (pre_prepare) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftPreparedSet.pre_prepare)
}

// repeated .protocol.PbftEnv prepare = 2;
int PbftPreparedSet::prepare_size() const {
  return prepare_.size();
}
void PbftPreparedSet::clear_prepare() {
  prepare_.Clear();
}
const ::protocol::PbftEnv& PbftPreparedSet::prepare(int index) const {
  // @@protoc_insertion_point(field_get:protocol.PbftPreparedSet.prepare)
  return prepare_.Get(index);
}
::protocol::PbftEnv* PbftPreparedSet::mutable_prepare(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.PbftPreparedSet.prepare)
  return prepare_.Mutable(index);
}
::protocol::PbftEnv* PbftPreparedSet::add_prepare() {
  // @@protoc_insertion_point(field_add:protocol.PbftPreparedSet.prepare)
  return prepare_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::PbftEnv >*
PbftPreparedSet::mutable_prepare() {
  // @@protoc_insertion_point(field_mutable_list:protocol.PbftPreparedSet.prepare)
  return &prepare_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::PbftEnv >&
PbftPreparedSet::prepare() const {
  // @@protoc_insertion_point(field_list:protocol.PbftPreparedSet.prepare)
  return prepare_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PbftViewChange::kViewNumberFieldNumber;
const int PbftViewChange::kSequenceFieldNumber;
const int PbftViewChange::kPrepredValueDigestFieldNumber;
const int PbftViewChange::kReplicaIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PbftViewChange::PbftViewChange()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.PbftViewChange)
}

void PbftViewChange::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PbftViewChange::PbftViewChange(const PbftViewChange& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.PbftViewChange)
}

void PbftViewChange::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  view_number_ = GOOGLE_LONGLONG(0);
  sequence_ = GOOGLE_LONGLONG(0);
  prepred_value_digest_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  replica_id_ = GOOGLE_LONGLONG(0);
}

PbftViewChange::~PbftViewChange() {
  // @@protoc_insertion_point(destructor:protocol.PbftViewChange)
  SharedDtor();
}

void PbftViewChange::SharedDtor() {
  prepred_value_digest_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PbftViewChange::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PbftViewChange::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftViewChange_descriptor_;
}

const PbftViewChange& PbftViewChange::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

PbftViewChange* PbftViewChange::default_instance_ = NULL;

PbftViewChange* PbftViewChange::New(::google::protobuf::Arena* arena) const {
  PbftViewChange* n = new PbftViewChange;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PbftViewChange::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.PbftViewChange)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PbftViewChange, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PbftViewChange*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(view_number_, sequence_);
  prepred_value_digest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  replica_id_ = GOOGLE_LONGLONG(0);

#undef ZR_HELPER_
#undef ZR_

}

bool PbftViewChange::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.PbftViewChange)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 view_number = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &view_number_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sequence;
        break;
      }

      // optional int64 sequence = 2;
      case 2: {
        if (tag == 16) {
         parse_sequence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sequence_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_prepred_value_digest;
        break;
      }

      // optional bytes prepred_value_digest = 3;
      case 3: {
        if (tag == 26) {
         parse_prepred_value_digest:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_prepred_value_digest()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_replica_id;
        break;
      }

      // optional int64 replica_id = 4;
      case 4: {
        if (tag == 32) {
         parse_replica_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &replica_id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.PbftViewChange)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.PbftViewChange)
  return false;
#undef DO_
}

void PbftViewChange::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.PbftViewChange)
  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->view_number(), output);
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->sequence(), output);
  }

  // optional bytes prepred_value_digest = 3;
  if (this->prepred_value_digest().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->prepred_value_digest(), output);
  }

  // optional int64 replica_id = 4;
  if (this->replica_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->replica_id(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.PbftViewChange)
}

::google::protobuf::uint8* PbftViewChange::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.PbftViewChange)
  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->view_number(), target);
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->sequence(), target);
  }

  // optional bytes prepred_value_digest = 3;
  if (this->prepred_value_digest().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->prepred_value_digest(), target);
  }

  // optional int64 replica_id = 4;
  if (this->replica_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->replica_id(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.PbftViewChange)
  return target;
}

int PbftViewChange::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.PbftViewChange)
  int total_size = 0;

  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->view_number());
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->sequence());
  }

  // optional bytes prepred_value_digest = 3;
  if (this->prepred_value_digest().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->prepred_value_digest());
  }

  // optional int64 replica_id = 4;
  if (this->replica_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->replica_id());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PbftViewChange::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.PbftViewChange)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PbftViewChange* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PbftViewChange>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.PbftViewChange)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.PbftViewChange)
    MergeFrom(*source);
  }
}

void PbftViewChange::MergeFrom(const PbftViewChange& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.PbftViewChange)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.view_number() != 0) {
    set_view_number(from.view_number());
  }
  if (from.sequence() != 0) {
    set_sequence(from.sequence());
  }
  if (from.prepred_value_digest().size() > 0) {

    prepred_value_digest_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.prepred_value_digest_);
  }
  if (from.replica_id() != 0) {
    set_replica_id(from.replica_id());
  }
}

void PbftViewChange::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.PbftViewChange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbftViewChange::CopyFrom(const PbftViewChange& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.PbftViewChange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbftViewChange::IsInitialized() const {

  return true;
}

void PbftViewChange::Swap(PbftViewChange* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PbftViewChange::InternalSwap(PbftViewChange* other) {
  std::swap(view_number_, other->view_number_);
  std::swap(sequence_, other->sequence_);
  prepred_value_digest_.Swap(&other->prepred_value_digest_);
  std::swap(replica_id_, other->replica_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PbftViewChange::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PbftViewChange_descriptor_;
  metadata.reflection = PbftViewChange_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PbftViewChange

// optional int64 view_number = 1;
void PbftViewChange::clear_view_number() {
  view_number_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftViewChange::view_number() const {
  // @@protoc_insertion_point(field_get:protocol.PbftViewChange.view_number)
  return view_number_;
}
 void PbftViewChange::set_view_number(::google::protobuf::int64 value) {
  
  view_number_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftViewChange.view_number)
}

// optional int64 sequence = 2;
void PbftViewChange::clear_sequence() {
  sequence_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftViewChange::sequence() const {
  // @@protoc_insertion_point(field_get:protocol.PbftViewChange.sequence)
  return sequence_;
}
 void PbftViewChange::set_sequence(::google::protobuf::int64 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftViewChange.sequence)
}

// optional bytes prepred_value_digest = 3;
void PbftViewChange::clear_prepred_value_digest() {
  prepred_value_digest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PbftViewChange::prepred_value_digest() const {
  // @@protoc_insertion_point(field_get:protocol.PbftViewChange.prepred_value_digest)
  return prepred_value_digest_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PbftViewChange::set_prepred_value_digest(const ::std::string& value) {
  
  prepred_value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.PbftViewChange.prepred_value_digest)
}
 void PbftViewChange::set_prepred_value_digest(const char* value) {
  
  prepred_value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.PbftViewChange.prepred_value_digest)
}
 void PbftViewChange::set_prepred_value_digest(const void* value, size_t size) {
  
  prepred_value_digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.PbftViewChange.prepred_value_digest)
}
 ::std::string* PbftViewChange::mutable_prepred_value_digest() {
  
  // @@protoc_insertion_point(field_mutable:protocol.PbftViewChange.prepred_value_digest)
  return prepred_value_digest_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PbftViewChange::release_prepred_value_digest() {
  // @@protoc_insertion_point(field_release:protocol.PbftViewChange.prepred_value_digest)
  
  return prepred_value_digest_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PbftViewChange::set_allocated_prepred_value_digest(::std::string* prepred_value_digest) {
  if (prepred_value_digest != NULL) {
    
  } else {
    
  }
  prepred_value_digest_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), prepred_value_digest);
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftViewChange.prepred_value_digest)
}

// optional int64 replica_id = 4;
void PbftViewChange::clear_replica_id() {
  replica_id_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftViewChange::replica_id() const {
  // @@protoc_insertion_point(field_get:protocol.PbftViewChange.replica_id)
  return replica_id_;
}
 void PbftViewChange::set_replica_id(::google::protobuf::int64 value) {
  
  replica_id_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftViewChange.replica_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PbftViewChangeWithRawValue::kViewChangeEnvFieldNumber;
const int PbftViewChangeWithRawValue::kPreparedSetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PbftViewChangeWithRawValue::PbftViewChangeWithRawValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.PbftViewChangeWithRawValue)
}

void PbftViewChangeWithRawValue::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  view_change_env_ = const_cast< ::protocol::PbftEnv*>(&::protocol::PbftEnv::default_instance());
  prepared_set_ = const_cast< ::protocol::PbftPreparedSet*>(&::protocol::PbftPreparedSet::default_instance());
}

PbftViewChangeWithRawValue::PbftViewChangeWithRawValue(const PbftViewChangeWithRawValue& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.PbftViewChangeWithRawValue)
}

void PbftViewChangeWithRawValue::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  view_change_env_ = NULL;
  prepared_set_ = NULL;
}

PbftViewChangeWithRawValue::~PbftViewChangeWithRawValue() {
  // @@protoc_insertion_point(destructor:protocol.PbftViewChangeWithRawValue)
  SharedDtor();
}

void PbftViewChangeWithRawValue::SharedDtor() {
  if (this != default_instance_) {
    delete view_change_env_;
    delete prepared_set_;
  }
}

void PbftViewChangeWithRawValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PbftViewChangeWithRawValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftViewChangeWithRawValue_descriptor_;
}

const PbftViewChangeWithRawValue& PbftViewChangeWithRawValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

PbftViewChangeWithRawValue* PbftViewChangeWithRawValue::default_instance_ = NULL;

PbftViewChangeWithRawValue* PbftViewChangeWithRawValue::New(::google::protobuf::Arena* arena) const {
  PbftViewChangeWithRawValue* n = new PbftViewChangeWithRawValue;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PbftViewChangeWithRawValue::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.PbftViewChangeWithRawValue)
  if (GetArenaNoVirtual() == NULL && view_change_env_ != NULL) delete view_change_env_;
  view_change_env_ = NULL;
  if (GetArenaNoVirtual() == NULL && prepared_set_ != NULL) delete prepared_set_;
  prepared_set_ = NULL;
}

bool PbftViewChangeWithRawValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.PbftViewChangeWithRawValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.PbftEnv view_change_env = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_view_change_env()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_prepared_set;
        break;
      }

      // optional .protocol.PbftPreparedSet prepared_set = 2;
      case 2: {
        if (tag == 18) {
         parse_prepared_set:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_prepared_set()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.PbftViewChangeWithRawValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.PbftViewChangeWithRawValue)
  return false;
#undef DO_
}

void PbftViewChangeWithRawValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.PbftViewChangeWithRawValue)
  // optional .protocol.PbftEnv view_change_env = 1;
  if (this->has_view_change_env()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->view_change_env_, output);
  }

  // optional .protocol.PbftPreparedSet prepared_set = 2;
  if (this->has_prepared_set()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->prepared_set_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.PbftViewChangeWithRawValue)
}

::google::protobuf::uint8* PbftViewChangeWithRawValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.PbftViewChangeWithRawValue)
  // optional .protocol.PbftEnv view_change_env = 1;
  if (this->has_view_change_env()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->view_change_env_, false, target);
  }

  // optional .protocol.PbftPreparedSet prepared_set = 2;
  if (this->has_prepared_set()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->prepared_set_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.PbftViewChangeWithRawValue)
  return target;
}

int PbftViewChangeWithRawValue::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.PbftViewChangeWithRawValue)
  int total_size = 0;

  // optional .protocol.PbftEnv view_change_env = 1;
  if (this->has_view_change_env()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->view_change_env_);
  }

  // optional .protocol.PbftPreparedSet prepared_set = 2;
  if (this->has_prepared_set()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->prepared_set_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PbftViewChangeWithRawValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.PbftViewChangeWithRawValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PbftViewChangeWithRawValue* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PbftViewChangeWithRawValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.PbftViewChangeWithRawValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.PbftViewChangeWithRawValue)
    MergeFrom(*source);
  }
}

void PbftViewChangeWithRawValue::MergeFrom(const PbftViewChangeWithRawValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.PbftViewChangeWithRawValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_view_change_env()) {
    mutable_view_change_env()->::protocol::PbftEnv::MergeFrom(from.view_change_env());
  }
  if (from.has_prepared_set()) {
    mutable_prepared_set()->::protocol::PbftPreparedSet::MergeFrom(from.prepared_set());
  }
}

void PbftViewChangeWithRawValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.PbftViewChangeWithRawValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbftViewChangeWithRawValue::CopyFrom(const PbftViewChangeWithRawValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.PbftViewChangeWithRawValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbftViewChangeWithRawValue::IsInitialized() const {

  return true;
}

void PbftViewChangeWithRawValue::Swap(PbftViewChangeWithRawValue* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PbftViewChangeWithRawValue::InternalSwap(PbftViewChangeWithRawValue* other) {
  std::swap(view_change_env_, other->view_change_env_);
  std::swap(prepared_set_, other->prepared_set_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PbftViewChangeWithRawValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PbftViewChangeWithRawValue_descriptor_;
  metadata.reflection = PbftViewChangeWithRawValue_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PbftViewChangeWithRawValue

// optional .protocol.PbftEnv view_change_env = 1;
bool PbftViewChangeWithRawValue::has_view_change_env() const {
  return !_is_default_instance_ && view_change_env_ != NULL;
}
void PbftViewChangeWithRawValue::clear_view_change_env() {
  if (GetArenaNoVirtual() == NULL && view_change_env_ != NULL) delete view_change_env_;
  view_change_env_ = NULL;
}
const ::protocol::PbftEnv& PbftViewChangeWithRawValue::view_change_env() const {
  // @@protoc_insertion_point(field_get:protocol.PbftViewChangeWithRawValue.view_change_env)
  return view_change_env_ != NULL ? *view_change_env_ : *default_instance_->view_change_env_;
}
::protocol::PbftEnv* PbftViewChangeWithRawValue::mutable_view_change_env() {
  
  if (view_change_env_ == NULL) {
    view_change_env_ = new ::protocol::PbftEnv;
  }
  // @@protoc_insertion_point(field_mutable:protocol.PbftViewChangeWithRawValue.view_change_env)
  return view_change_env_;
}
::protocol::PbftEnv* PbftViewChangeWithRawValue::release_view_change_env() {
  // @@protoc_insertion_point(field_release:protocol.PbftViewChangeWithRawValue.view_change_env)
  
  ::protocol::PbftEnv* temp = view_change_env_;
  view_change_env_ = NULL;
  return temp;
}
void PbftViewChangeWithRawValue::set_allocated_view_change_env(::protocol::PbftEnv* view_change_env) {
  delete view_change_env_;
  view_change_env_ = view_change_env;
  if (view_change_env) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftViewChangeWithRawValue.view_change_env)
}

// optional .protocol.PbftPreparedSet prepared_set = 2;
bool PbftViewChangeWithRawValue::has_prepared_set() const {
  return !_is_default_instance_ && prepared_set_ != NULL;
}
void PbftViewChangeWithRawValue::clear_prepared_set() {
  if (GetArenaNoVirtual() == NULL && prepared_set_ != NULL) delete prepared_set_;
  prepared_set_ = NULL;
}
const ::protocol::PbftPreparedSet& PbftViewChangeWithRawValue::prepared_set() const {
  // @@protoc_insertion_point(field_get:protocol.PbftViewChangeWithRawValue.prepared_set)
  return prepared_set_ != NULL ? *prepared_set_ : *default_instance_->prepared_set_;
}
::protocol::PbftPreparedSet* PbftViewChangeWithRawValue::mutable_prepared_set() {
  
  if (prepared_set_ == NULL) {
    prepared_set_ = new ::protocol::PbftPreparedSet;
  }
  // @@protoc_insertion_point(field_mutable:protocol.PbftViewChangeWithRawValue.prepared_set)
  return prepared_set_;
}
::protocol::PbftPreparedSet* PbftViewChangeWithRawValue::release_prepared_set() {
  // @@protoc_insertion_point(field_release:protocol.PbftViewChangeWithRawValue.prepared_set)
  
  ::protocol::PbftPreparedSet* temp = prepared_set_;
  prepared_set_ = NULL;
  return temp;
}
void PbftViewChangeWithRawValue::set_allocated_prepared_set(::protocol::PbftPreparedSet* prepared_set) {
  delete prepared_set_;
  prepared_set_ = prepared_set;
  if (prepared_set) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftViewChangeWithRawValue.prepared_set)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PbftNewView::kViewNumberFieldNumber;
const int PbftNewView::kSequenceFieldNumber;
const int PbftNewView::kReplicaIdFieldNumber;
const int PbftNewView::kViewChangesFieldNumber;
const int PbftNewView::kPrePrepareFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PbftNewView::PbftNewView()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.PbftNewView)
}

void PbftNewView::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  pre_prepare_ = const_cast< ::protocol::PbftEnv*>(&::protocol::PbftEnv::default_instance());
}

PbftNewView::PbftNewView(const PbftNewView& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.PbftNewView)
}

void PbftNewView::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  view_number_ = GOOGLE_LONGLONG(0);
  sequence_ = GOOGLE_LONGLONG(0);
  replica_id_ = GOOGLE_LONGLONG(0);
  pre_prepare_ = NULL;
}

PbftNewView::~PbftNewView() {
  // @@protoc_insertion_point(destructor:protocol.PbftNewView)
  SharedDtor();
}

void PbftNewView::SharedDtor() {
  if (this != default_instance_) {
    delete pre_prepare_;
  }
}

void PbftNewView::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PbftNewView::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftNewView_descriptor_;
}

const PbftNewView& PbftNewView::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

PbftNewView* PbftNewView::default_instance_ = NULL;

PbftNewView* PbftNewView::New(::google::protobuf::Arena* arena) const {
  PbftNewView* n = new PbftNewView;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PbftNewView::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.PbftNewView)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PbftNewView, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PbftNewView*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(view_number_, replica_id_);
  if (GetArenaNoVirtual() == NULL && pre_prepare_ != NULL) delete pre_prepare_;
  pre_prepare_ = NULL;

#undef ZR_HELPER_
#undef ZR_

  view_changes_.Clear();
}

bool PbftNewView::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.PbftNewView)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 view_number = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &view_number_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sequence;
        break;
      }

      // optional int64 sequence = 2;
      case 2: {
        if (tag == 16) {
         parse_sequence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sequence_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_replica_id;
        break;
      }

      // optional int64 replica_id = 3;
      case 3: {
        if (tag == 24) {
         parse_replica_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &replica_id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_view_changes;
        break;
      }

      // repeated .protocol.PbftEnv view_changes = 4;
      case 4: {
        if (tag == 34) {
         parse_view_changes:
          DO_(input->IncrementRecursionDepth());
         parse_loop_view_changes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_view_changes()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_view_changes;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(42)) goto parse_pre_prepare;
        break;
      }

      // optional .protocol.PbftEnv pre_prepare = 5;
      case 5: {
        if (tag == 42) {
         parse_pre_prepare:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pre_prepare()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.PbftNewView)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.PbftNewView)
  return false;
#undef DO_
}

void PbftNewView::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.PbftNewView)
  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->view_number(), output);
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->sequence(), output);
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->replica_id(), output);
  }

  // repeated .protocol.PbftEnv view_changes = 4;
  for (unsigned int i = 0, n = this->view_changes_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->view_changes(i), output);
  }

  // optional .protocol.PbftEnv pre_prepare = 5;
  if (this->has_pre_prepare()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->pre_prepare_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.PbftNewView)
}

::google::protobuf::uint8* PbftNewView::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.PbftNewView)
  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->view_number(), target);
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->sequence(), target);
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->replica_id(), target);
  }

  // repeated .protocol.PbftEnv view_changes = 4;
  for (unsigned int i = 0, n = this->view_changes_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->view_changes(i), false, target);
  }

  // optional .protocol.PbftEnv pre_prepare = 5;
  if (this->has_pre_prepare()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->pre_prepare_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.PbftNewView)
  return target;
}

int PbftNewView::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.PbftNewView)
  int total_size = 0;

  // optional int64 view_number = 1;
  if (this->view_number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->view_number());
  }

  // optional int64 sequence = 2;
  if (this->sequence() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->sequence());
  }

  // optional int64 replica_id = 3;
  if (this->replica_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->replica_id());
  }

  // optional .protocol.PbftEnv pre_prepare = 5;
  if (this->has_pre_prepare()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pre_prepare_);
  }

  // repeated .protocol.PbftEnv view_changes = 4;
  total_size += 1 * this->view_changes_size();
  for (int i = 0; i < this->view_changes_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->view_changes(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PbftNewView::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.PbftNewView)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PbftNewView* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PbftNewView>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.PbftNewView)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.PbftNewView)
    MergeFrom(*source);
  }
}

void PbftNewView::MergeFrom(const PbftNewView& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.PbftNewView)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  view_changes_.MergeFrom(from.view_changes_);
  if (from.view_number() != 0) {
    set_view_number(from.view_number());
  }
  if (from.sequence() != 0) {
    set_sequence(from.sequence());
  }
  if (from.replica_id() != 0) {
    set_replica_id(from.replica_id());
  }
  if (from.has_pre_prepare()) {
    mutable_pre_prepare()->::protocol::PbftEnv::MergeFrom(from.pre_prepare());
  }
}

void PbftNewView::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.PbftNewView)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbftNewView::CopyFrom(const PbftNewView& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.PbftNewView)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbftNewView::IsInitialized() const {

  return true;
}

void PbftNewView::Swap(PbftNewView* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PbftNewView::InternalSwap(PbftNewView* other) {
  std::swap(view_number_, other->view_number_);
  std::swap(sequence_, other->sequence_);
  std::swap(replica_id_, other->replica_id_);
  view_changes_.UnsafeArenaSwap(&other->view_changes_);
  std::swap(pre_prepare_, other->pre_prepare_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PbftNewView::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PbftNewView_descriptor_;
  metadata.reflection = PbftNewView_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PbftNewView

// optional int64 view_number = 1;
void PbftNewView::clear_view_number() {
  view_number_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftNewView::view_number() const {
  // @@protoc_insertion_point(field_get:protocol.PbftNewView.view_number)
  return view_number_;
}
 void PbftNewView::set_view_number(::google::protobuf::int64 value) {
  
  view_number_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftNewView.view_number)
}

// optional int64 sequence = 2;
void PbftNewView::clear_sequence() {
  sequence_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftNewView::sequence() const {
  // @@protoc_insertion_point(field_get:protocol.PbftNewView.sequence)
  return sequence_;
}
 void PbftNewView::set_sequence(::google::protobuf::int64 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftNewView.sequence)
}

// optional int64 replica_id = 3;
void PbftNewView::clear_replica_id() {
  replica_id_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PbftNewView::replica_id() const {
  // @@protoc_insertion_point(field_get:protocol.PbftNewView.replica_id)
  return replica_id_;
}
 void PbftNewView::set_replica_id(::google::protobuf::int64 value) {
  
  replica_id_ = value;
  // @@protoc_insertion_point(field_set:protocol.PbftNewView.replica_id)
}

// repeated .protocol.PbftEnv view_changes = 4;
int PbftNewView::view_changes_size() const {
  return view_changes_.size();
}
void PbftNewView::clear_view_changes() {
  view_changes_.Clear();
}
const ::protocol::PbftEnv& PbftNewView::view_changes(int index) const {
  // @@protoc_insertion_point(field_get:protocol.PbftNewView.view_changes)
  return view_changes_.Get(index);
}
::protocol::PbftEnv* PbftNewView::mutable_view_changes(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.PbftNewView.view_changes)
  return view_changes_.Mutable(index);
}
::protocol::PbftEnv* PbftNewView::add_view_changes() {
  // @@protoc_insertion_point(field_add:protocol.PbftNewView.view_changes)
  return view_changes_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::PbftEnv >*
PbftNewView::mutable_view_changes() {
  // @@protoc_insertion_point(field_mutable_list:protocol.PbftNewView.view_changes)
  return &view_changes_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::PbftEnv >&
PbftNewView::view_changes() const {
  // @@protoc_insertion_point(field_list:protocol.PbftNewView.view_changes)
  return view_changes_;
}

// optional .protocol.PbftEnv pre_prepare = 5;
bool PbftNewView::has_pre_prepare() const {
  return !_is_default_instance_ && pre_prepare_ != NULL;
}
void PbftNewView::clear_pre_prepare() {
  if (GetArenaNoVirtual() == NULL && pre_prepare_ != NULL) delete pre_prepare_;
  pre_prepare_ = NULL;
}
const ::protocol::PbftEnv& PbftNewView::pre_prepare() const {
  // @@protoc_insertion_point(field_get:protocol.PbftNewView.pre_prepare)
  return pre_prepare_ != NULL ? *pre_prepare_ : *default_instance_->pre_prepare_;
}
::protocol::PbftEnv* PbftNewView::mutable_pre_prepare() {
  
  if (pre_prepare_ == NULL) {
    pre_prepare_ = new ::protocol::PbftEnv;
  }
  // @@protoc_insertion_point(field_mutable:protocol.PbftNewView.pre_prepare)
  return pre_prepare_;
}
::protocol::PbftEnv* PbftNewView::release_pre_prepare() {
  // @@protoc_insertion_point(field_release:protocol.PbftNewView.pre_prepare)
  
  ::protocol::PbftEnv* temp = pre_prepare_;
  pre_prepare_ = NULL;
  return temp;
}
void PbftNewView::set_allocated_pre_prepare(::protocol::PbftEnv* pre_prepare) {
  delete pre_prepare_;
  pre_prepare_ = pre_prepare;
  if (pre_prepare) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftNewView.pre_prepare)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Pbft::kRoundNumberFieldNumber;
const int Pbft::kTypeFieldNumber;
const int Pbft::kPrePrepareFieldNumber;
const int Pbft::kPrepareFieldNumber;
const int Pbft::kCommitFieldNumber;
const int Pbft::kViewChangeFieldNumber;
const int Pbft::kNewViewFieldNumber;
const int Pbft::kViewChangeWithRawvalueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Pbft::Pbft()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Pbft)
}

void Pbft::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  pre_prepare_ = const_cast< ::protocol::PbftPrePrepare*>(&::protocol::PbftPrePrepare::default_instance());
  prepare_ = const_cast< ::protocol::PbftPrepare*>(&::protocol::PbftPrepare::default_instance());
  commit_ = const_cast< ::protocol::PbftCommit*>(&::protocol::PbftCommit::default_instance());
  view_change_ = const_cast< ::protocol::PbftViewChange*>(&::protocol::PbftViewChange::default_instance());
  new_view_ = const_cast< ::protocol::PbftNewView*>(&::protocol::PbftNewView::default_instance());
  view_change_with_rawvalue_ = const_cast< ::protocol::PbftViewChangeWithRawValue*>(&::protocol::PbftViewChangeWithRawValue::default_instance());
}

Pbft::Pbft(const Pbft& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Pbft)
}

void Pbft::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  round_number_ = GOOGLE_LONGLONG(0);
  type_ = 0;
  pre_prepare_ = NULL;
  prepare_ = NULL;
  commit_ = NULL;
  view_change_ = NULL;
  new_view_ = NULL;
  view_change_with_rawvalue_ = NULL;
}

Pbft::~Pbft() {
  // @@protoc_insertion_point(destructor:protocol.Pbft)
  SharedDtor();
}

void Pbft::SharedDtor() {
  if (this != default_instance_) {
    delete pre_prepare_;
    delete prepare_;
    delete commit_;
    delete view_change_;
    delete new_view_;
    delete view_change_with_rawvalue_;
  }
}

void Pbft::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Pbft::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Pbft_descriptor_;
}

const Pbft& Pbft::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

Pbft* Pbft::default_instance_ = NULL;

Pbft* Pbft::New(::google::protobuf::Arena* arena) const {
  Pbft* n = new Pbft;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Pbft::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Pbft)
  round_number_ = GOOGLE_LONGLONG(0);
  type_ = 0;
  if (GetArenaNoVirtual() == NULL && pre_prepare_ != NULL) delete pre_prepare_;
  pre_prepare_ = NULL;
  if (GetArenaNoVirtual() == NULL && prepare_ != NULL) delete prepare_;
  prepare_ = NULL;
  if (GetArenaNoVirtual() == NULL && commit_ != NULL) delete commit_;
  commit_ = NULL;
  if (GetArenaNoVirtual() == NULL && view_change_ != NULL) delete view_change_;
  view_change_ = NULL;
  if (GetArenaNoVirtual() == NULL && new_view_ != NULL) delete new_view_;
  new_view_ = NULL;
  if (GetArenaNoVirtual() == NULL && view_change_with_rawvalue_ != NULL) delete view_change_with_rawvalue_;
  view_change_with_rawvalue_ = NULL;
}

bool Pbft::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Pbft)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 round_number = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &round_number_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // optional .protocol.PbftMessageType type = 2;
      case 2: {
        if (tag == 16) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::protocol::PbftMessageType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_pre_prepare;
        break;
      }

      // optional .protocol.PbftPrePrepare pre_prepare = 3;
      case 3: {
        if (tag == 26) {
         parse_pre_prepare:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pre_prepare()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_prepare;
        break;
      }

      // optional .protocol.PbftPrepare prepare = 4;
      case 4: {
        if (tag == 34) {
         parse_prepare:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_prepare()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_commit;
        break;
      }

      // optional .protocol.PbftCommit commit = 5;
      case 5: {
        if (tag == 42) {
         parse_commit:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_commit()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_view_change;
        break;
      }

      // optional .protocol.PbftViewChange view_change = 6;
      case 6: {
        if (tag == 50) {
         parse_view_change:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_view_change()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_new_view;
        break;
      }

      // optional .protocol.PbftNewView new_view = 7;
      case 7: {
        if (tag == 58) {
         parse_new_view:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_new_view()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_view_change_with_rawvalue;
        break;
      }

      // optional .protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;
      case 8: {
        if (tag == 66) {
         parse_view_change_with_rawvalue:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_view_change_with_rawvalue()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.Pbft)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Pbft)
  return false;
#undef DO_
}

void Pbft::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Pbft)
  // optional int64 round_number = 1;
  if (this->round_number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->round_number(), output);
  }

  // optional .protocol.PbftMessageType type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // optional .protocol.PbftPrePrepare pre_prepare = 3;
  if (this->has_pre_prepare()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->pre_prepare_, output);
  }

  // optional .protocol.PbftPrepare prepare = 4;
  if (this->has_prepare()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->prepare_, output);
  }

  // optional .protocol.PbftCommit commit = 5;
  if (this->has_commit()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->commit_, output);
  }

  // optional .protocol.PbftViewChange view_change = 6;
  if (this->has_view_change()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->view_change_, output);
  }

  // optional .protocol.PbftNewView new_view = 7;
  if (this->has_new_view()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->new_view_, output);
  }

  // optional .protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;
  if (this->has_view_change_with_rawvalue()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->view_change_with_rawvalue_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Pbft)
}

::google::protobuf::uint8* Pbft::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Pbft)
  // optional int64 round_number = 1;
  if (this->round_number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->round_number(), target);
  }

  // optional .protocol.PbftMessageType type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // optional .protocol.PbftPrePrepare pre_prepare = 3;
  if (this->has_pre_prepare()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->pre_prepare_, false, target);
  }

  // optional .protocol.PbftPrepare prepare = 4;
  if (this->has_prepare()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->prepare_, false, target);
  }

  // optional .protocol.PbftCommit commit = 5;
  if (this->has_commit()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->commit_, false, target);
  }

  // optional .protocol.PbftViewChange view_change = 6;
  if (this->has_view_change()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->view_change_, false, target);
  }

  // optional .protocol.PbftNewView new_view = 7;
  if (this->has_new_view()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->new_view_, false, target);
  }

  // optional .protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;
  if (this->has_view_change_with_rawvalue()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->view_change_with_rawvalue_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Pbft)
  return target;
}

int Pbft::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Pbft)
  int total_size = 0;

  // optional int64 round_number = 1;
  if (this->round_number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->round_number());
  }

  // optional .protocol.PbftMessageType type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // optional .protocol.PbftPrePrepare pre_prepare = 3;
  if (this->has_pre_prepare()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pre_prepare_);
  }

  // optional .protocol.PbftPrepare prepare = 4;
  if (this->has_prepare()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->prepare_);
  }

  // optional .protocol.PbftCommit commit = 5;
  if (this->has_commit()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->commit_);
  }

  // optional .protocol.PbftViewChange view_change = 6;
  if (this->has_view_change()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->view_change_);
  }

  // optional .protocol.PbftNewView new_view = 7;
  if (this->has_new_view()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->new_view_);
  }

  // optional .protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;
  if (this->has_view_change_with_rawvalue()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->view_change_with_rawvalue_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Pbft::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Pbft)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Pbft* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Pbft>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Pbft)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Pbft)
    MergeFrom(*source);
  }
}

void Pbft::MergeFrom(const Pbft& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Pbft)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.round_number() != 0) {
    set_round_number(from.round_number());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.has_pre_prepare()) {
    mutable_pre_prepare()->::protocol::PbftPrePrepare::MergeFrom(from.pre_prepare());
  }
  if (from.has_prepare()) {
    mutable_prepare()->::protocol::PbftPrepare::MergeFrom(from.prepare());
  }
  if (from.has_commit()) {
    mutable_commit()->::protocol::PbftCommit::MergeFrom(from.commit());
  }
  if (from.has_view_change()) {
    mutable_view_change()->::protocol::PbftViewChange::MergeFrom(from.view_change());
  }
  if (from.has_new_view()) {
    mutable_new_view()->::protocol::PbftNewView::MergeFrom(from.new_view());
  }
  if (from.has_view_change_with_rawvalue()) {
    mutable_view_change_with_rawvalue()->::protocol::PbftViewChangeWithRawValue::MergeFrom(from.view_change_with_rawvalue());
  }
}

void Pbft::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Pbft)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Pbft::CopyFrom(const Pbft& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Pbft)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pbft::IsInitialized() const {

  return true;
}

void Pbft::Swap(Pbft* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Pbft::InternalSwap(Pbft* other) {
  std::swap(round_number_, other->round_number_);
  std::swap(type_, other->type_);
  std::swap(pre_prepare_, other->pre_prepare_);
  std::swap(prepare_, other->prepare_);
  std::swap(commit_, other->commit_);
  std::swap(view_change_, other->view_change_);
  std::swap(new_view_, other->new_view_);
  std::swap(view_change_with_rawvalue_, other->view_change_with_rawvalue_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Pbft::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Pbft_descriptor_;
  metadata.reflection = Pbft_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Pbft

// optional int64 round_number = 1;
void Pbft::clear_round_number() {
  round_number_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Pbft::round_number() const {
  // @@protoc_insertion_point(field_get:protocol.Pbft.round_number)
  return round_number_;
}
 void Pbft::set_round_number(::google::protobuf::int64 value) {
  
  round_number_ = value;
  // @@protoc_insertion_point(field_set:protocol.Pbft.round_number)
}

// optional .protocol.PbftMessageType type = 2;
void Pbft::clear_type() {
  type_ = 0;
}
 ::protocol::PbftMessageType Pbft::type() const {
  // @@protoc_insertion_point(field_get:protocol.Pbft.type)
  return static_cast< ::protocol::PbftMessageType >(type_);
}
 void Pbft::set_type(::protocol::PbftMessageType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.Pbft.type)
}

// optional .protocol.PbftPrePrepare pre_prepare = 3;
bool Pbft::has_pre_prepare() const {
  return !_is_default_instance_ && pre_prepare_ != NULL;
}
void Pbft::clear_pre_prepare() {
  if (GetArenaNoVirtual() == NULL && pre_prepare_ != NULL) delete pre_prepare_;
  pre_prepare_ = NULL;
}
const ::protocol::PbftPrePrepare& Pbft::pre_prepare() const {
  // @@protoc_insertion_point(field_get:protocol.Pbft.pre_prepare)
  return pre_prepare_ != NULL ? *pre_prepare_ : *default_instance_->pre_prepare_;
}
::protocol::PbftPrePrepare* Pbft::mutable_pre_prepare() {
  
  if (pre_prepare_ == NULL) {
    pre_prepare_ = new ::protocol::PbftPrePrepare;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Pbft.pre_prepare)
  return pre_prepare_;
}
::protocol::PbftPrePrepare* Pbft::release_pre_prepare() {
  // @@protoc_insertion_point(field_release:protocol.Pbft.pre_prepare)
  
  ::protocol::PbftPrePrepare* temp = pre_prepare_;
  pre_prepare_ = NULL;
  return temp;
}
void Pbft::set_allocated_pre_prepare(::protocol::PbftPrePrepare* pre_prepare) {
  delete pre_prepare_;
  pre_prepare_ = pre_prepare;
  if (pre_prepare) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Pbft.pre_prepare)
}

// optional .protocol.PbftPrepare prepare = 4;
bool Pbft::has_prepare() const {
  return !_is_default_instance_ && prepare_ != NULL;
}
void Pbft::clear_prepare() {
  if (GetArenaNoVirtual() == NULL && prepare_ != NULL) delete prepare_;
  prepare_ = NULL;
}
const ::protocol::PbftPrepare& Pbft::prepare() const {
  // @@protoc_insertion_point(field_get:protocol.Pbft.prepare)
  return prepare_ != NULL ? *prepare_ : *default_instance_->prepare_;
}
::protocol::PbftPrepare* Pbft::mutable_prepare() {
  
  if (prepare_ == NULL) {
    prepare_ = new ::protocol::PbftPrepare;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Pbft.prepare)
  return prepare_;
}
::protocol::PbftPrepare* Pbft::release_prepare() {
  // @@protoc_insertion_point(field_release:protocol.Pbft.prepare)
  
  ::protocol::PbftPrepare* temp = prepare_;
  prepare_ = NULL;
  return temp;
}
void Pbft::set_allocated_prepare(::protocol::PbftPrepare* prepare) {
  delete prepare_;
  prepare_ = prepare;
  if (prepare) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Pbft.prepare)
}

// optional .protocol.PbftCommit commit = 5;
bool Pbft::has_commit() const {
  return !_is_default_instance_ && commit_ != NULL;
}
void Pbft::clear_commit() {
  if (GetArenaNoVirtual() == NULL && commit_ != NULL) delete commit_;
  commit_ = NULL;
}
const ::protocol::PbftCommit& Pbft::commit() const {
  // @@protoc_insertion_point(field_get:protocol.Pbft.commit)
  return commit_ != NULL ? *commit_ : *default_instance_->commit_;
}
::protocol::PbftCommit* Pbft::mutable_commit() {
  
  if (commit_ == NULL) {
    commit_ = new ::protocol::PbftCommit;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Pbft.commit)
  return commit_;
}
::protocol::PbftCommit* Pbft::release_commit() {
  // @@protoc_insertion_point(field_release:protocol.Pbft.commit)
  
  ::protocol::PbftCommit* temp = commit_;
  commit_ = NULL;
  return temp;
}
void Pbft::set_allocated_commit(::protocol::PbftCommit* commit) {
  delete commit_;
  commit_ = commit;
  if (commit) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Pbft.commit)
}

// optional .protocol.PbftViewChange view_change = 6;
bool Pbft::has_view_change() const {
  return !_is_default_instance_ && view_change_ != NULL;
}
void Pbft::clear_view_change() {
  if (GetArenaNoVirtual() == NULL && view_change_ != NULL) delete view_change_;
  view_change_ = NULL;
}
const ::protocol::PbftViewChange& Pbft::view_change() const {
  // @@protoc_insertion_point(field_get:protocol.Pbft.view_change)
  return view_change_ != NULL ? *view_change_ : *default_instance_->view_change_;
}
::protocol::PbftViewChange* Pbft::mutable_view_change() {
  
  if (view_change_ == NULL) {
    view_change_ = new ::protocol::PbftViewChange;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Pbft.view_change)
  return view_change_;
}
::protocol::PbftViewChange* Pbft::release_view_change() {
  // @@protoc_insertion_point(field_release:protocol.Pbft.view_change)
  
  ::protocol::PbftViewChange* temp = view_change_;
  view_change_ = NULL;
  return temp;
}
void Pbft::set_allocated_view_change(::protocol::PbftViewChange* view_change) {
  delete view_change_;
  view_change_ = view_change;
  if (view_change) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Pbft.view_change)
}

// optional .protocol.PbftNewView new_view = 7;
bool Pbft::has_new_view() const {
  return !_is_default_instance_ && new_view_ != NULL;
}
void Pbft::clear_new_view() {
  if (GetArenaNoVirtual() == NULL && new_view_ != NULL) delete new_view_;
  new_view_ = NULL;
}
const ::protocol::PbftNewView& Pbft::new_view() const {
  // @@protoc_insertion_point(field_get:protocol.Pbft.new_view)
  return new_view_ != NULL ? *new_view_ : *default_instance_->new_view_;
}
::protocol::PbftNewView* Pbft::mutable_new_view() {
  
  if (new_view_ == NULL) {
    new_view_ = new ::protocol::PbftNewView;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Pbft.new_view)
  return new_view_;
}
::protocol::PbftNewView* Pbft::release_new_view() {
  // @@protoc_insertion_point(field_release:protocol.Pbft.new_view)
  
  ::protocol::PbftNewView* temp = new_view_;
  new_view_ = NULL;
  return temp;
}
void Pbft::set_allocated_new_view(::protocol::PbftNewView* new_view) {
  delete new_view_;
  new_view_ = new_view;
  if (new_view) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Pbft.new_view)
}

// optional .protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;
bool Pbft::has_view_change_with_rawvalue() const {
  return !_is_default_instance_ && view_change_with_rawvalue_ != NULL;
}
void Pbft::clear_view_change_with_rawvalue() {
  if (GetArenaNoVirtual() == NULL && view_change_with_rawvalue_ != NULL) delete view_change_with_rawvalue_;
  view_change_with_rawvalue_ = NULL;
}
const ::protocol::PbftViewChangeWithRawValue& Pbft::view_change_with_rawvalue() const {
  // @@protoc_insertion_point(field_get:protocol.Pbft.view_change_with_rawvalue)
  return view_change_with_rawvalue_ != NULL ? *view_change_with_rawvalue_ : *default_instance_->view_change_with_rawvalue_;
}
::protocol::PbftViewChangeWithRawValue* Pbft::mutable_view_change_with_rawvalue() {
  
  if (view_change_with_rawvalue_ == NULL) {
    view_change_with_rawvalue_ = new ::protocol::PbftViewChangeWithRawValue;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Pbft.view_change_with_rawvalue)
  return view_change_with_rawvalue_;
}
::protocol::PbftViewChangeWithRawValue* Pbft::release_view_change_with_rawvalue() {
  // @@protoc_insertion_point(field_release:protocol.Pbft.view_change_with_rawvalue)
  
  ::protocol::PbftViewChangeWithRawValue* temp = view_change_with_rawvalue_;
  view_change_with_rawvalue_ = NULL;
  return temp;
}
void Pbft::set_allocated_view_change_with_rawvalue(::protocol::PbftViewChangeWithRawValue* view_change_with_rawvalue) {
  delete view_change_with_rawvalue_;
  view_change_with_rawvalue_ = view_change_with_rawvalue;
  if (view_change_with_rawvalue) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Pbft.view_change_with_rawvalue)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PbftEnv::kPbftFieldNumber;
const int PbftEnv::kSignatureFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PbftEnv::PbftEnv()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.PbftEnv)
}

void PbftEnv::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  pbft_ = const_cast< ::protocol::Pbft*>(&::protocol::Pbft::default_instance());
  signature_ = const_cast< ::protocol::Signature*>(&::protocol::Signature::default_instance());
}

PbftEnv::PbftEnv(const PbftEnv& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.PbftEnv)
}

void PbftEnv::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  pbft_ = NULL;
  signature_ = NULL;
}

PbftEnv::~PbftEnv() {
  // @@protoc_insertion_point(destructor:protocol.PbftEnv)
  SharedDtor();
}

void PbftEnv::SharedDtor() {
  if (this != default_instance_) {
    delete pbft_;
    delete signature_;
  }
}

void PbftEnv::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PbftEnv::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftEnv_descriptor_;
}

const PbftEnv& PbftEnv::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

PbftEnv* PbftEnv::default_instance_ = NULL;

PbftEnv* PbftEnv::New(::google::protobuf::Arena* arena) const {
  PbftEnv* n = new PbftEnv;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PbftEnv::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.PbftEnv)
  if (GetArenaNoVirtual() == NULL && pbft_ != NULL) delete pbft_;
  pbft_ = NULL;
  if (GetArenaNoVirtual() == NULL && signature_ != NULL) delete signature_;
  signature_ = NULL;
}

bool PbftEnv::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.PbftEnv)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.Pbft pbft = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pbft()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_signature;
        break;
      }

      // optional .protocol.Signature signature = 2;
      case 2: {
        if (tag == 18) {
         parse_signature:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_signature()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.PbftEnv)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.PbftEnv)
  return false;
#undef DO_
}

void PbftEnv::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.PbftEnv)
  // optional .protocol.Pbft pbft = 1;
  if (this->has_pbft()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->pbft_, output);
  }

  // optional .protocol.Signature signature = 2;
  if (this->has_signature()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->signature_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.PbftEnv)
}

::google::protobuf::uint8* PbftEnv::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.PbftEnv)
  // optional .protocol.Pbft pbft = 1;
  if (this->has_pbft()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->pbft_, false, target);
  }

  // optional .protocol.Signature signature = 2;
  if (this->has_signature()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->signature_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.PbftEnv)
  return target;
}

int PbftEnv::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.PbftEnv)
  int total_size = 0;

  // optional .protocol.Pbft pbft = 1;
  if (this->has_pbft()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pbft_);
  }

  // optional .protocol.Signature signature = 2;
  if (this->has_signature()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->signature_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PbftEnv::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.PbftEnv)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PbftEnv* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PbftEnv>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.PbftEnv)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.PbftEnv)
    MergeFrom(*source);
  }
}

void PbftEnv::MergeFrom(const PbftEnv& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.PbftEnv)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_pbft()) {
    mutable_pbft()->::protocol::Pbft::MergeFrom(from.pbft());
  }
  if (from.has_signature()) {
    mutable_signature()->::protocol::Signature::MergeFrom(from.signature());
  }
}

void PbftEnv::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.PbftEnv)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbftEnv::CopyFrom(const PbftEnv& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.PbftEnv)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbftEnv::IsInitialized() const {

  return true;
}

void PbftEnv::Swap(PbftEnv* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PbftEnv::InternalSwap(PbftEnv* other) {
  std::swap(pbft_, other->pbft_);
  std::swap(signature_, other->signature_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PbftEnv::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PbftEnv_descriptor_;
  metadata.reflection = PbftEnv_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PbftEnv

// optional .protocol.Pbft pbft = 1;
bool PbftEnv::has_pbft() const {
  return !_is_default_instance_ && pbft_ != NULL;
}
void PbftEnv::clear_pbft() {
  if (GetArenaNoVirtual() == NULL && pbft_ != NULL) delete pbft_;
  pbft_ = NULL;
}
const ::protocol::Pbft& PbftEnv::pbft() const {
  // @@protoc_insertion_point(field_get:protocol.PbftEnv.pbft)
  return pbft_ != NULL ? *pbft_ : *default_instance_->pbft_;
}
::protocol::Pbft* PbftEnv::mutable_pbft() {
  
  if (pbft_ == NULL) {
    pbft_ = new ::protocol::Pbft;
  }
  // @@protoc_insertion_point(field_mutable:protocol.PbftEnv.pbft)
  return pbft_;
}
::protocol::Pbft* PbftEnv::release_pbft() {
  // @@protoc_insertion_point(field_release:protocol.PbftEnv.pbft)
  
  ::protocol::Pbft* temp = pbft_;
  pbft_ = NULL;
  return temp;
}
void PbftEnv::set_allocated_pbft(::protocol::Pbft* pbft) {
  delete pbft_;
  pbft_ = pbft;
  if (pbft) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftEnv.pbft)
}

// optional .protocol.Signature signature = 2;
bool PbftEnv::has_signature() const {
  return !_is_default_instance_ && signature_ != NULL;
}
void PbftEnv::clear_signature() {
  if (GetArenaNoVirtual() == NULL && signature_ != NULL) delete signature_;
  signature_ = NULL;
}
const ::protocol::Signature& PbftEnv::signature() const {
  // @@protoc_insertion_point(field_get:protocol.PbftEnv.signature)
  return signature_ != NULL ? *signature_ : *default_instance_->signature_;
}
::protocol::Signature* PbftEnv::mutable_signature() {
  
  if (signature_ == NULL) {
    signature_ = new ::protocol::Signature;
  }
  // @@protoc_insertion_point(field_mutable:protocol.PbftEnv.signature)
  return signature_;
}
::protocol::Signature* PbftEnv::release_signature() {
  // @@protoc_insertion_point(field_release:protocol.PbftEnv.signature)
  
  ::protocol::Signature* temp = signature_;
  signature_ = NULL;
  return temp;
}
void PbftEnv::set_allocated_signature(::protocol::Signature* signature) {
  delete signature_;
  signature_ = signature;
  if (signature) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.PbftEnv.signature)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Validator::kAddressFieldNumber;
const int Validator::kPledgeCoinAmountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Validator::Validator()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Validator)
}

void Validator::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Validator::Validator(const Validator& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Validator)
}

void Validator::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pledge_coin_amount_ = GOOGLE_LONGLONG(0);
}

Validator::~Validator() {
  // @@protoc_insertion_point(destructor:protocol.Validator)
  SharedDtor();
}

void Validator::SharedDtor() {
  address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Validator::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Validator::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Validator_descriptor_;
}

const Validator& Validator::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

Validator* Validator::default_instance_ = NULL;

Validator* Validator::New(::google::protobuf::Arena* arena) const {
  Validator* n = new Validator;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Validator::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Validator)
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pledge_coin_amount_ = GOOGLE_LONGLONG(0);
}

bool Validator::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Validator)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string address = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->address().data(), this->address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Validator.address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_pledge_coin_amount;
        break;
      }

      // optional int64 pledge_coin_amount = 2;
      case 2: {
        if (tag == 16) {
         parse_pledge_coin_amount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &pledge_coin_amount_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.Validator)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Validator)
  return false;
#undef DO_
}

void Validator::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Validator)
  // optional string address = 1;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), this->address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Validator.address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->address(), output);
  }

  // optional int64 pledge_coin_amount = 2;
  if (this->pledge_coin_amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->pledge_coin_amount(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Validator)
}

::google::protobuf::uint8* Validator::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Validator)
  // optional string address = 1;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), this->address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Validator.address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->address(), target);
  }

  // optional int64 pledge_coin_amount = 2;
  if (this->pledge_coin_amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->pledge_coin_amount(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Validator)
  return target;
}

int Validator::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Validator)
  int total_size = 0;

  // optional string address = 1;
  if (this->address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->address());
  }

  // optional int64 pledge_coin_amount = 2;
  if (this->pledge_coin_amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->pledge_coin_amount());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Validator::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Validator)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Validator* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Validator>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Validator)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Validator)
    MergeFrom(*source);
  }
}

void Validator::MergeFrom(const Validator& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Validator)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.address().size() > 0) {

    address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  if (from.pledge_coin_amount() != 0) {
    set_pledge_coin_amount(from.pledge_coin_amount());
  }
}

void Validator::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Validator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Validator::CopyFrom(const Validator& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Validator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Validator::IsInitialized() const {

  return true;
}

void Validator::Swap(Validator* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Validator::InternalSwap(Validator* other) {
  address_.Swap(&other->address_);
  std::swap(pledge_coin_amount_, other->pledge_coin_amount_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Validator::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Validator_descriptor_;
  metadata.reflection = Validator_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Validator

// optional string address = 1;
void Validator::clear_address() {
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Validator::address() const {
  // @@protoc_insertion_point(field_get:protocol.Validator.address)
  return address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Validator::set_address(const ::std::string& value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Validator.address)
}
 void Validator::set_address(const char* value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Validator.address)
}
 void Validator::set_address(const char* value, size_t size) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Validator.address)
}
 ::std::string* Validator::mutable_address() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Validator.address)
  return address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Validator::release_address() {
  // @@protoc_insertion_point(field_release:protocol.Validator.address)
  
  return address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Validator::set_allocated_address(::std::string* address) {
  if (address != NULL) {
    
  } else {
    
  }
  address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), address);
  // @@protoc_insertion_point(field_set_allocated:protocol.Validator.address)
}

// optional int64 pledge_coin_amount = 2;
void Validator::clear_pledge_coin_amount() {
  pledge_coin_amount_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Validator::pledge_coin_amount() const {
  // @@protoc_insertion_point(field_get:protocol.Validator.pledge_coin_amount)
  return pledge_coin_amount_;
}
 void Validator::set_pledge_coin_amount(::google::protobuf::int64 value) {
  
  pledge_coin_amount_ = value;
  // @@protoc_insertion_point(field_set:protocol.Validator.pledge_coin_amount)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ValidatorSet::kValidatorsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ValidatorSet::ValidatorSet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.ValidatorSet)
}

void ValidatorSet::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ValidatorSet::ValidatorSet(const ValidatorSet& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.ValidatorSet)
}

void ValidatorSet::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

ValidatorSet::~ValidatorSet() {
  // @@protoc_insertion_point(destructor:protocol.ValidatorSet)
  SharedDtor();
}

void ValidatorSet::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ValidatorSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ValidatorSet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ValidatorSet_descriptor_;
}

const ValidatorSet& ValidatorSet::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

ValidatorSet* ValidatorSet::default_instance_ = NULL;

ValidatorSet* ValidatorSet::New(::google::protobuf::Arena* arena) const {
  ValidatorSet* n = new ValidatorSet;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ValidatorSet::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ValidatorSet)
  validators_.Clear();
}

bool ValidatorSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.ValidatorSet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .protocol.Validator validators = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_validators:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_validators()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_validators;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.ValidatorSet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.ValidatorSet)
  return false;
#undef DO_
}

void ValidatorSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.ValidatorSet)
  // repeated .protocol.Validator validators = 1;
  for (unsigned int i = 0, n = this->validators_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->validators(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.ValidatorSet)
}

::google::protobuf::uint8* ValidatorSet::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ValidatorSet)
  // repeated .protocol.Validator validators = 1;
  for (unsigned int i = 0, n = this->validators_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->validators(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.ValidatorSet)
  return target;
}

int ValidatorSet::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ValidatorSet)
  int total_size = 0;

  // repeated .protocol.Validator validators = 1;
  total_size += 1 * this->validators_size();
  for (int i = 0; i < this->validators_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->validators(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ValidatorSet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.ValidatorSet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ValidatorSet* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ValidatorSet>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.ValidatorSet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.ValidatorSet)
    MergeFrom(*source);
  }
}

void ValidatorSet::MergeFrom(const ValidatorSet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ValidatorSet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  validators_.MergeFrom(from.validators_);
}

void ValidatorSet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.ValidatorSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ValidatorSet::CopyFrom(const ValidatorSet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ValidatorSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ValidatorSet::IsInitialized() const {

  return true;
}

void ValidatorSet::Swap(ValidatorSet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ValidatorSet::InternalSwap(ValidatorSet* other) {
  validators_.UnsafeArenaSwap(&other->validators_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ValidatorSet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ValidatorSet_descriptor_;
  metadata.reflection = ValidatorSet_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ValidatorSet

// repeated .protocol.Validator validators = 1;
int ValidatorSet::validators_size() const {
  return validators_.size();
}
void ValidatorSet::clear_validators() {
  validators_.Clear();
}
const ::protocol::Validator& ValidatorSet::validators(int index) const {
  // @@protoc_insertion_point(field_get:protocol.ValidatorSet.validators)
  return validators_.Get(index);
}
::protocol::Validator* ValidatorSet::mutable_validators(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.ValidatorSet.validators)
  return validators_.Mutable(index);
}
::protocol::Validator* ValidatorSet::add_validators() {
  // @@protoc_insertion_point(field_add:protocol.ValidatorSet.validators)
  return validators_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::Validator >*
ValidatorSet::mutable_validators() {
  // @@protoc_insertion_point(field_mutable_list:protocol.ValidatorSet.validators)
  return &validators_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::Validator >&
ValidatorSet::validators() const {
  // @@protoc_insertion_point(field_list:protocol.ValidatorSet.validators)
  return validators_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PbftProof::kCommitsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PbftProof::PbftProof()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.PbftProof)
}

void PbftProof::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PbftProof::PbftProof(const PbftProof& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.PbftProof)
}

void PbftProof::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

PbftProof::~PbftProof() {
  // @@protoc_insertion_point(destructor:protocol.PbftProof)
  SharedDtor();
}

void PbftProof::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PbftProof::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PbftProof::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbftProof_descriptor_;
}

const PbftProof& PbftProof::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

PbftProof* PbftProof::default_instance_ = NULL;

PbftProof* PbftProof::New(::google::protobuf::Arena* arena) const {
  PbftProof* n = new PbftProof;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PbftProof::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.PbftProof)
  commits_.Clear();
}

bool PbftProof::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.PbftProof)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .protocol.PbftEnv commits = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_commits:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_commits()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_commits;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.PbftProof)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.PbftProof)
  return false;
#undef DO_
}

void PbftProof::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.PbftProof)
  // repeated .protocol.PbftEnv commits = 1;
  for (unsigned int i = 0, n = this->commits_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->commits(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.PbftProof)
}

::google::protobuf::uint8* PbftProof::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.PbftProof)
  // repeated .protocol.PbftEnv commits = 1;
  for (unsigned int i = 0, n = this->commits_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->commits(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.PbftProof)
  return target;
}

int PbftProof::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.PbftProof)
  int total_size = 0;

  // repeated .protocol.PbftEnv commits = 1;
  total_size += 1 * this->commits_size();
  for (int i = 0; i < this->commits_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->commits(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PbftProof::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.PbftProof)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PbftProof* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PbftProof>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.PbftProof)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.PbftProof)
    MergeFrom(*source);
  }
}

void PbftProof::MergeFrom(const PbftProof& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.PbftProof)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  commits_.MergeFrom(from.commits_);
}

void PbftProof::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.PbftProof)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbftProof::CopyFrom(const PbftProof& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.PbftProof)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbftProof::IsInitialized() const {

  return true;
}

void PbftProof::Swap(PbftProof* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PbftProof::InternalSwap(PbftProof* other) {
  commits_.UnsafeArenaSwap(&other->commits_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PbftProof::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PbftProof_descriptor_;
  metadata.reflection = PbftProof_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PbftProof

// repeated .protocol.PbftEnv commits = 1;
int PbftProof::commits_size() const {
  return commits_.size();
}
void PbftProof::clear_commits() {
  commits_.Clear();
}
const ::protocol::PbftEnv& PbftProof::commits(int index) const {
  // @@protoc_insertion_point(field_get:protocol.PbftProof.commits)
  return commits_.Get(index);
}
::protocol::PbftEnv* PbftProof::mutable_commits(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.PbftProof.commits)
  return commits_.Mutable(index);
}
::protocol::PbftEnv* PbftProof::add_commits() {
  // @@protoc_insertion_point(field_add:protocol.PbftProof.commits)
  return commits_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::PbftEnv >*
PbftProof::mutable_commits() {
  // @@protoc_insertion_point(field_mutable_list:protocol.PbftProof.commits)
  return &commits_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::PbftEnv >&
PbftProof::commits() const {
  // @@protoc_insertion_point(field_list:protocol.PbftProof.commits)
  return commits_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* FeeConfig_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FeeConfig_Type_descriptor_;
}
bool FeeConfig_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FeeConfig_Type FeeConfig::UNKNOWN;
const FeeConfig_Type FeeConfig::GAS_PRICE;
const FeeConfig_Type FeeConfig::BASE_RESERVE;
const FeeConfig_Type FeeConfig::Type_MIN;
const FeeConfig_Type FeeConfig::Type_MAX;
const int FeeConfig::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FeeConfig::kGasPriceFieldNumber;
const int FeeConfig::kBaseReserveFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FeeConfig::FeeConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.FeeConfig)
}

void FeeConfig::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

FeeConfig::FeeConfig(const FeeConfig& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.FeeConfig)
}

void FeeConfig::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  gas_price_ = GOOGLE_LONGLONG(0);
  base_reserve_ = GOOGLE_LONGLONG(0);
}

FeeConfig::~FeeConfig() {
  // @@protoc_insertion_point(destructor:protocol.FeeConfig)
  SharedDtor();
}

void FeeConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FeeConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FeeConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FeeConfig_descriptor_;
}

const FeeConfig& FeeConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_consensus_2eproto();
  return *default_instance_;
}

FeeConfig* FeeConfig::default_instance_ = NULL;

FeeConfig* FeeConfig::New(::google::protobuf::Arena* arena) const {
  FeeConfig* n = new FeeConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FeeConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.FeeConfig)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(FeeConfig, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<FeeConfig*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(gas_price_, base_reserve_);

#undef ZR_HELPER_
#undef ZR_

}

bool FeeConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.FeeConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 gas_price = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &gas_price_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_base_reserve;
        break;
      }

      // optional int64 base_reserve = 2;
      case 2: {
        if (tag == 16) {
         parse_base_reserve:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &base_reserve_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.FeeConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.FeeConfig)
  return false;
#undef DO_
}

void FeeConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.FeeConfig)
  // optional int64 gas_price = 1;
  if (this->gas_price() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->gas_price(), output);
  }

  // optional int64 base_reserve = 2;
  if (this->base_reserve() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->base_reserve(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.FeeConfig)
}

::google::protobuf::uint8* FeeConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.FeeConfig)
  // optional int64 gas_price = 1;
  if (this->gas_price() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->gas_price(), target);
  }

  // optional int64 base_reserve = 2;
  if (this->base_reserve() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->base_reserve(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.FeeConfig)
  return target;
}

int FeeConfig::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.FeeConfig)
  int total_size = 0;

  // optional int64 gas_price = 1;
  if (this->gas_price() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->gas_price());
  }

  // optional int64 base_reserve = 2;
  if (this->base_reserve() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->base_reserve());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FeeConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.FeeConfig)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FeeConfig* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FeeConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.FeeConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.FeeConfig)
    MergeFrom(*source);
  }
}

void FeeConfig::MergeFrom(const FeeConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.FeeConfig)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.gas_price() != 0) {
    set_gas_price(from.gas_price());
  }
  if (from.base_reserve() != 0) {
    set_base_reserve(from.base_reserve());
  }
}

void FeeConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.FeeConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FeeConfig::CopyFrom(const FeeConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.FeeConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FeeConfig::IsInitialized() const {

  return true;
}

void FeeConfig::Swap(FeeConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FeeConfig::InternalSwap(FeeConfig* other) {
  std::swap(gas_price_, other->gas_price_);
  std::swap(base_reserve_, other->base_reserve_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FeeConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FeeConfig_descriptor_;
  metadata.reflection = FeeConfig_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FeeConfig

// optional int64 gas_price = 1;
void FeeConfig::clear_gas_price() {
  gas_price_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 FeeConfig::gas_price() const {
  // @@protoc_insertion_point(field_get:protocol.FeeConfig.gas_price)
  return gas_price_;
}
 void FeeConfig::set_gas_price(::google::protobuf::int64 value) {
  
  gas_price_ = value;
  // @@protoc_insertion_point(field_set:protocol.FeeConfig.gas_price)
}

// optional int64 base_reserve = 2;
void FeeConfig::clear_base_reserve() {
  base_reserve_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 FeeConfig::base_reserve() const {
  // @@protoc_insertion_point(field_get:protocol.FeeConfig.base_reserve)
  return base_reserve_;
}
 void FeeConfig::set_base_reserve(::google::protobuf::int64 value) {
  
  base_reserve_ = value;
  // @@protoc_insertion_point(field_set:protocol.FeeConfig.base_reserve)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)