// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vssref_placement.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "vssref_placement.pb.h"

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
namespace team_to_ref {

namespace {

const ::google::protobuf::Descriptor* VSSRef_Placement_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  VSSRef_Placement_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_vssref_5fplacement_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_vssref_5fplacement_2eproto() {
  protobuf_AddDesc_vssref_5fplacement_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "vssref_placement.proto");
  GOOGLE_CHECK(file != NULL);
  VSSRef_Placement_descriptor_ = file->message_type(0);
  static const int VSSRef_Placement_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VSSRef_Placement, world_),
  };
  VSSRef_Placement_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      VSSRef_Placement_descriptor_,
      VSSRef_Placement::default_instance_,
      VSSRef_Placement_offsets_,
      -1,
      -1,
      -1,
      sizeof(VSSRef_Placement),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VSSRef_Placement, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VSSRef_Placement, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_vssref_5fplacement_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      VSSRef_Placement_descriptor_, &VSSRef_Placement::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_vssref_5fplacement_2eproto() {
  delete VSSRef_Placement::default_instance_;
  delete VSSRef_Placement_reflection_;
}

void protobuf_AddDesc_vssref_5fplacement_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_vssref_5fplacement_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::VSSRef::protobuf_AddDesc_vssref_5fcommon_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026vssref_placement.proto\022\022VSSRef.team_to"
    "_ref\032\023vssref_common.proto\"0\n\020VSSRef_Plac"
    "ement\022\034\n\005world\030\001 \001(\0132\r.VSSRef.Frameb\006pro"
    "to3", 123);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "vssref_placement.proto", &protobuf_RegisterTypes);
  VSSRef_Placement::default_instance_ = new VSSRef_Placement();
  VSSRef_Placement::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_vssref_5fplacement_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_vssref_5fplacement_2eproto {
  StaticDescriptorInitializer_vssref_5fplacement_2eproto() {
    protobuf_AddDesc_vssref_5fplacement_2eproto();
  }
} static_descriptor_initializer_vssref_5fplacement_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VSSRef_Placement::kWorldFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VSSRef_Placement::VSSRef_Placement()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:VSSRef.team_to_ref.VSSRef_Placement)
}

void VSSRef_Placement::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  world_ = const_cast< ::VSSRef::Frame*>(&::VSSRef::Frame::default_instance());
}

VSSRef_Placement::VSSRef_Placement(const VSSRef_Placement& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:VSSRef.team_to_ref.VSSRef_Placement)
}

void VSSRef_Placement::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  world_ = NULL;
}

VSSRef_Placement::~VSSRef_Placement() {
  // @@protoc_insertion_point(destructor:VSSRef.team_to_ref.VSSRef_Placement)
  SharedDtor();
}

void VSSRef_Placement::SharedDtor() {
  if (this != default_instance_) {
    delete world_;
  }
}

void VSSRef_Placement::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VSSRef_Placement::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VSSRef_Placement_descriptor_;
}

const VSSRef_Placement& VSSRef_Placement::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_vssref_5fplacement_2eproto();
  return *default_instance_;
}

VSSRef_Placement* VSSRef_Placement::default_instance_ = NULL;

VSSRef_Placement* VSSRef_Placement::New(::google::protobuf::Arena* arena) const {
  VSSRef_Placement* n = new VSSRef_Placement;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VSSRef_Placement::Clear() {
// @@protoc_insertion_point(message_clear_start:VSSRef.team_to_ref.VSSRef_Placement)
  if (GetArenaNoVirtual() == NULL && world_ != NULL) delete world_;
  world_ = NULL;
}

bool VSSRef_Placement::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VSSRef.team_to_ref.VSSRef_Placement)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .VSSRef.Frame world = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_world()));
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
  // @@protoc_insertion_point(parse_success:VSSRef.team_to_ref.VSSRef_Placement)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VSSRef.team_to_ref.VSSRef_Placement)
  return false;
#undef DO_
}

void VSSRef_Placement::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VSSRef.team_to_ref.VSSRef_Placement)
  // optional .VSSRef.Frame world = 1;
  if (this->has_world()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->world_, output);
  }

  // @@protoc_insertion_point(serialize_end:VSSRef.team_to_ref.VSSRef_Placement)
}

::google::protobuf::uint8* VSSRef_Placement::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:VSSRef.team_to_ref.VSSRef_Placement)
  // optional .VSSRef.Frame world = 1;
  if (this->has_world()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->world_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VSSRef.team_to_ref.VSSRef_Placement)
  return target;
}

int VSSRef_Placement::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:VSSRef.team_to_ref.VSSRef_Placement)
  int total_size = 0;

  // optional .VSSRef.Frame world = 1;
  if (this->has_world()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->world_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VSSRef_Placement::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VSSRef.team_to_ref.VSSRef_Placement)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const VSSRef_Placement* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const VSSRef_Placement>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VSSRef.team_to_ref.VSSRef_Placement)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VSSRef.team_to_ref.VSSRef_Placement)
    MergeFrom(*source);
  }
}

void VSSRef_Placement::MergeFrom(const VSSRef_Placement& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VSSRef.team_to_ref.VSSRef_Placement)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_world()) {
    mutable_world()->::VSSRef::Frame::MergeFrom(from.world());
  }
}

void VSSRef_Placement::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VSSRef.team_to_ref.VSSRef_Placement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VSSRef_Placement::CopyFrom(const VSSRef_Placement& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VSSRef.team_to_ref.VSSRef_Placement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VSSRef_Placement::IsInitialized() const {

  return true;
}

void VSSRef_Placement::Swap(VSSRef_Placement* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VSSRef_Placement::InternalSwap(VSSRef_Placement* other) {
  std::swap(world_, other->world_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VSSRef_Placement::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = VSSRef_Placement_descriptor_;
  metadata.reflection = VSSRef_Placement_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VSSRef_Placement

// optional .VSSRef.Frame world = 1;
bool VSSRef_Placement::has_world() const {
  return !_is_default_instance_ && world_ != NULL;
}
void VSSRef_Placement::clear_world() {
  if (GetArenaNoVirtual() == NULL && world_ != NULL) delete world_;
  world_ = NULL;
}
const ::VSSRef::Frame& VSSRef_Placement::world() const {
  // @@protoc_insertion_point(field_get:VSSRef.team_to_ref.VSSRef_Placement.world)
  return world_ != NULL ? *world_ : *default_instance_->world_;
}
::VSSRef::Frame* VSSRef_Placement::mutable_world() {
  
  if (world_ == NULL) {
    world_ = new ::VSSRef::Frame;
  }
  // @@protoc_insertion_point(field_mutable:VSSRef.team_to_ref.VSSRef_Placement.world)
  return world_;
}
::VSSRef::Frame* VSSRef_Placement::release_world() {
  // @@protoc_insertion_point(field_release:VSSRef.team_to_ref.VSSRef_Placement.world)
  
  ::VSSRef::Frame* temp = world_;
  world_ = NULL;
  return temp;
}
void VSSRef_Placement::set_allocated_world(::VSSRef::Frame* world) {
  delete world_;
  world_ = world;
  if (world) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:VSSRef.team_to_ref.VSSRef_Placement.world)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace team_to_ref
}  // namespace VSSRef

// @@protoc_insertion_point(global_scope)
