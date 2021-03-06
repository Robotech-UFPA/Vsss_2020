// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vssref_command.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "vssref_command.pb.h"

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

namespace VSSRef {
namespace ref_to_team {

namespace {

const ::google::protobuf::Descriptor* VSSRef_Command_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  VSSRef_Command_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_vssref_5fcommand_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_vssref_5fcommand_2eproto() {
  protobuf_AddDesc_vssref_5fcommand_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "vssref_command.proto");
  GOOGLE_CHECK(file != NULL);
  VSSRef_Command_descriptor_ = file->message_type(0);
  static const int VSSRef_Command_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VSSRef_Command, foul_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VSSRef_Command, teamcolor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VSSRef_Command, foulquadrant_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VSSRef_Command, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VSSRef_Command, gamehalf_),
  };
  VSSRef_Command_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      VSSRef_Command_descriptor_,
      VSSRef_Command::default_instance_,
      VSSRef_Command_offsets_,
      -1,
      -1,
      -1,
      sizeof(VSSRef_Command),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VSSRef_Command, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VSSRef_Command, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_vssref_5fcommand_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      VSSRef_Command_descriptor_, &VSSRef_Command::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_vssref_5fcommand_2eproto() {
  delete VSSRef_Command::default_instance_;
  delete VSSRef_Command_reflection_;
}

void protobuf_AddDesc_vssref_5fcommand_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_vssref_5fcommand_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::VSSRef::protobuf_AddDesc_vssref_5fcommon_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024vssref_command.proto\022\022VSSRef.ref_to_te"
    "am\032\023vssref_common.proto\"\251\001\n\016VSSRef_Comma"
    "nd\022\032\n\004foul\030\001 \001(\0162\014.VSSRef.Foul\022 \n\tteamco"
    "lor\030\002 \001(\0162\r.VSSRef.Color\022&\n\014foulQuadrant"
    "\030\003 \001(\0162\020.VSSRef.Quadrant\022\021\n\ttimestamp\030\004 "
    "\001(\001\022\036\n\010gameHalf\030\005 \001(\0162\014.VSSRef.Halfb\006pro"
    "to3", 243);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "vssref_command.proto", &protobuf_RegisterTypes);
  VSSRef_Command::default_instance_ = new VSSRef_Command();
  VSSRef_Command::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_vssref_5fcommand_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_vssref_5fcommand_2eproto {
  StaticDescriptorInitializer_vssref_5fcommand_2eproto() {
    protobuf_AddDesc_vssref_5fcommand_2eproto();
  }
} static_descriptor_initializer_vssref_5fcommand_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VSSRef_Command::kFoulFieldNumber;
const int VSSRef_Command::kTeamcolorFieldNumber;
const int VSSRef_Command::kFoulQuadrantFieldNumber;
const int VSSRef_Command::kTimestampFieldNumber;
const int VSSRef_Command::kGameHalfFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VSSRef_Command::VSSRef_Command()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:VSSRef.ref_to_team.VSSRef_Command)
}

void VSSRef_Command::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

VSSRef_Command::VSSRef_Command(const VSSRef_Command& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:VSSRef.ref_to_team.VSSRef_Command)
}

void VSSRef_Command::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  foul_ = 0;
  teamcolor_ = 0;
  foulquadrant_ = 0;
  timestamp_ = 0;
  gamehalf_ = 0;
}

VSSRef_Command::~VSSRef_Command() {
  // @@protoc_insertion_point(destructor:VSSRef.ref_to_team.VSSRef_Command)
  SharedDtor();
}

void VSSRef_Command::SharedDtor() {
  if (this != default_instance_) {
  }
}

void VSSRef_Command::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VSSRef_Command::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VSSRef_Command_descriptor_;
}

const VSSRef_Command& VSSRef_Command::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_vssref_5fcommand_2eproto();
  return *default_instance_;
}

VSSRef_Command* VSSRef_Command::default_instance_ = NULL;

VSSRef_Command* VSSRef_Command::New(::google::protobuf::Arena* arena) const {
  VSSRef_Command* n = new VSSRef_Command;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VSSRef_Command::Clear() {
// @@protoc_insertion_point(message_clear_start:VSSRef.ref_to_team.VSSRef_Command)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(VSSRef_Command, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<VSSRef_Command*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(foul_, gamehalf_);

#undef ZR_HELPER_
#undef ZR_

}

bool VSSRef_Command::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VSSRef.ref_to_team.VSSRef_Command)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .VSSRef.Foul foul = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_foul(static_cast< ::VSSRef::Foul >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_teamcolor;
        break;
      }

      // optional .VSSRef.Color teamcolor = 2;
      case 2: {
        if (tag == 16) {
         parse_teamcolor:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_teamcolor(static_cast< ::VSSRef::Color >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_foulQuadrant;
        break;
      }

      // optional .VSSRef.Quadrant foulQuadrant = 3;
      case 3: {
        if (tag == 24) {
         parse_foulQuadrant:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_foulquadrant(static_cast< ::VSSRef::Quadrant >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_timestamp;
        break;
      }

      // optional double timestamp = 4;
      case 4: {
        if (tag == 33) {
         parse_timestamp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_gameHalf;
        break;
      }

      // optional .VSSRef.Half gameHalf = 5;
      case 5: {
        if (tag == 40) {
         parse_gameHalf:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_gamehalf(static_cast< ::VSSRef::Half >(value));
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
  // @@protoc_insertion_point(parse_success:VSSRef.ref_to_team.VSSRef_Command)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VSSRef.ref_to_team.VSSRef_Command)
  return false;
#undef DO_
}

void VSSRef_Command::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VSSRef.ref_to_team.VSSRef_Command)
  // optional .VSSRef.Foul foul = 1;
  if (this->foul() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->foul(), output);
  }

  // optional .VSSRef.Color teamcolor = 2;
  if (this->teamcolor() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->teamcolor(), output);
  }

  // optional .VSSRef.Quadrant foulQuadrant = 3;
  if (this->foulquadrant() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->foulquadrant(), output);
  }

  // optional double timestamp = 4;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->timestamp(), output);
  }

  // optional .VSSRef.Half gameHalf = 5;
  if (this->gamehalf() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->gamehalf(), output);
  }

  // @@protoc_insertion_point(serialize_end:VSSRef.ref_to_team.VSSRef_Command)
}

::google::protobuf::uint8* VSSRef_Command::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:VSSRef.ref_to_team.VSSRef_Command)
  // optional .VSSRef.Foul foul = 1;
  if (this->foul() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->foul(), target);
  }

  // optional .VSSRef.Color teamcolor = 2;
  if (this->teamcolor() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->teamcolor(), target);
  }

  // optional .VSSRef.Quadrant foulQuadrant = 3;
  if (this->foulquadrant() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->foulquadrant(), target);
  }

  // optional double timestamp = 4;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->timestamp(), target);
  }

  // optional .VSSRef.Half gameHalf = 5;
  if (this->gamehalf() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->gamehalf(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VSSRef.ref_to_team.VSSRef_Command)
  return target;
}

int VSSRef_Command::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:VSSRef.ref_to_team.VSSRef_Command)
  int total_size = 0;

  // optional .VSSRef.Foul foul = 1;
  if (this->foul() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->foul());
  }

  // optional .VSSRef.Color teamcolor = 2;
  if (this->teamcolor() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->teamcolor());
  }

  // optional .VSSRef.Quadrant foulQuadrant = 3;
  if (this->foulquadrant() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->foulquadrant());
  }

  // optional double timestamp = 4;
  if (this->timestamp() != 0) {
    total_size += 1 + 8;
  }

  // optional .VSSRef.Half gameHalf = 5;
  if (this->gamehalf() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->gamehalf());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VSSRef_Command::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VSSRef.ref_to_team.VSSRef_Command)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const VSSRef_Command* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const VSSRef_Command>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VSSRef.ref_to_team.VSSRef_Command)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VSSRef.ref_to_team.VSSRef_Command)
    MergeFrom(*source);
  }
}

void VSSRef_Command::MergeFrom(const VSSRef_Command& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VSSRef.ref_to_team.VSSRef_Command)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.foul() != 0) {
    set_foul(from.foul());
  }
  if (from.teamcolor() != 0) {
    set_teamcolor(from.teamcolor());
  }
  if (from.foulquadrant() != 0) {
    set_foulquadrant(from.foulquadrant());
  }
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
  if (from.gamehalf() != 0) {
    set_gamehalf(from.gamehalf());
  }
}

void VSSRef_Command::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VSSRef.ref_to_team.VSSRef_Command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VSSRef_Command::CopyFrom(const VSSRef_Command& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VSSRef.ref_to_team.VSSRef_Command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VSSRef_Command::IsInitialized() const {

  return true;
}

void VSSRef_Command::Swap(VSSRef_Command* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VSSRef_Command::InternalSwap(VSSRef_Command* other) {
  std::swap(foul_, other->foul_);
  std::swap(teamcolor_, other->teamcolor_);
  std::swap(foulquadrant_, other->foulquadrant_);
  std::swap(timestamp_, other->timestamp_);
  std::swap(gamehalf_, other->gamehalf_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VSSRef_Command::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = VSSRef_Command_descriptor_;
  metadata.reflection = VSSRef_Command_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VSSRef_Command

// optional .VSSRef.Foul foul = 1;
void VSSRef_Command::clear_foul() {
  foul_ = 0;
}
 ::VSSRef::Foul VSSRef_Command::foul() const {
  // @@protoc_insertion_point(field_get:VSSRef.ref_to_team.VSSRef_Command.foul)
  return static_cast< ::VSSRef::Foul >(foul_);
}
 void VSSRef_Command::set_foul(::VSSRef::Foul value) {
  
  foul_ = value;
  // @@protoc_insertion_point(field_set:VSSRef.ref_to_team.VSSRef_Command.foul)
}

// optional .VSSRef.Color teamcolor = 2;
void VSSRef_Command::clear_teamcolor() {
  teamcolor_ = 0;
}
 ::VSSRef::Color VSSRef_Command::teamcolor() const {
  // @@protoc_insertion_point(field_get:VSSRef.ref_to_team.VSSRef_Command.teamcolor)
  return static_cast< ::VSSRef::Color >(teamcolor_);
}
 void VSSRef_Command::set_teamcolor(::VSSRef::Color value) {
  
  teamcolor_ = value;
  // @@protoc_insertion_point(field_set:VSSRef.ref_to_team.VSSRef_Command.teamcolor)
}

// optional .VSSRef.Quadrant foulQuadrant = 3;
void VSSRef_Command::clear_foulquadrant() {
  foulquadrant_ = 0;
}
 ::VSSRef::Quadrant VSSRef_Command::foulquadrant() const {
  // @@protoc_insertion_point(field_get:VSSRef.ref_to_team.VSSRef_Command.foulQuadrant)
  return static_cast< ::VSSRef::Quadrant >(foulquadrant_);
}
 void VSSRef_Command::set_foulquadrant(::VSSRef::Quadrant value) {
  
  foulquadrant_ = value;
  // @@protoc_insertion_point(field_set:VSSRef.ref_to_team.VSSRef_Command.foulQuadrant)
}

// optional double timestamp = 4;
void VSSRef_Command::clear_timestamp() {
  timestamp_ = 0;
}
 double VSSRef_Command::timestamp() const {
  // @@protoc_insertion_point(field_get:VSSRef.ref_to_team.VSSRef_Command.timestamp)
  return timestamp_;
}
 void VSSRef_Command::set_timestamp(double value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:VSSRef.ref_to_team.VSSRef_Command.timestamp)
}

// optional .VSSRef.Half gameHalf = 5;
void VSSRef_Command::clear_gamehalf() {
  gamehalf_ = 0;
}
 ::VSSRef::Half VSSRef_Command::gamehalf() const {
  // @@protoc_insertion_point(field_get:VSSRef.ref_to_team.VSSRef_Command.gameHalf)
  return static_cast< ::VSSRef::Half >(gamehalf_);
}
 void VSSRef_Command::set_gamehalf(::VSSRef::Half value) {
  
  gamehalf_ = value;
  // @@protoc_insertion_point(field_set:VSSRef.ref_to_team.VSSRef_Command.gameHalf)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace ref_to_team
}  // namespace VSSRef

// @@protoc_insertion_point(global_scope)
