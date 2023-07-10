// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: guldan.proto

#include "guldan.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace guldan {
class GuldanConnectRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GuldanConnectRequest>
      _instance;
} _GuldanConnectRequest_default_instance_;
class GuldanConnectResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GuldanConnectResponse>
      _instance;
} _GuldanConnectResponse_default_instance_;
}  // namespace guldan
namespace protobuf_guldan_2eproto {
static void InitDefaultsGuldanConnectRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::guldan::_GuldanConnectRequest_default_instance_;
    new (ptr) ::guldan::GuldanConnectRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::guldan::GuldanConnectRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GuldanConnectRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGuldanConnectRequest}, {}};

static void InitDefaultsGuldanConnectResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::guldan::_GuldanConnectResponse_default_instance_;
    new (ptr) ::guldan::GuldanConnectResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::guldan::GuldanConnectResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GuldanConnectResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGuldanConnectResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_GuldanConnectRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_GuldanConnectResponse.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::guldan::GuldanConnectRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::guldan::GuldanConnectRequest, world_conn_str_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::guldan::GuldanConnectResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::guldan::GuldanConnectRequest)},
  { 6, -1, sizeof(::guldan::GuldanConnectResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::guldan::_GuldanConnectRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::guldan::_GuldanConnectResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "guldan.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014guldan.proto\022\006guldan\".\n\024GuldanConnectR"
      "equest\022\026\n\016world_conn_str\030\001 \001(\t\"\027\n\025Guldan"
      "ConnectResponse2P\n\006Guldan\022F\n\007Connect\022\034.g"
      "uldan.GuldanConnectRequest\032\035.guldan.Guld"
      "anConnectResponseb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 185);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "guldan.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_guldan_2eproto
namespace guldan {

// ===================================================================

void GuldanConnectRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GuldanConnectRequest::kWorldConnStrFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GuldanConnectRequest::GuldanConnectRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_guldan_2eproto::scc_info_GuldanConnectRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:guldan.GuldanConnectRequest)
}
GuldanConnectRequest::GuldanConnectRequest(const GuldanConnectRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  world_conn_str_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.world_conn_str().size() > 0) {
    world_conn_str_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.world_conn_str_);
  }
  // @@protoc_insertion_point(copy_constructor:guldan.GuldanConnectRequest)
}

void GuldanConnectRequest::SharedCtor() {
  world_conn_str_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

GuldanConnectRequest::~GuldanConnectRequest() {
  // @@protoc_insertion_point(destructor:guldan.GuldanConnectRequest)
  SharedDtor();
}

void GuldanConnectRequest::SharedDtor() {
  world_conn_str_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GuldanConnectRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GuldanConnectRequest::descriptor() {
  ::protobuf_guldan_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_guldan_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GuldanConnectRequest& GuldanConnectRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_guldan_2eproto::scc_info_GuldanConnectRequest.base);
  return *internal_default_instance();
}


void GuldanConnectRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:guldan.GuldanConnectRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  world_conn_str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool GuldanConnectRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:guldan.GuldanConnectRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string world_conn_str = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_world_conn_str()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->world_conn_str().data(), static_cast<int>(this->world_conn_str().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "guldan.GuldanConnectRequest.world_conn_str"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:guldan.GuldanConnectRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:guldan.GuldanConnectRequest)
  return false;
#undef DO_
}

void GuldanConnectRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:guldan.GuldanConnectRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string world_conn_str = 1;
  if (this->world_conn_str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->world_conn_str().data(), static_cast<int>(this->world_conn_str().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "guldan.GuldanConnectRequest.world_conn_str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->world_conn_str(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:guldan.GuldanConnectRequest)
}

::google::protobuf::uint8* GuldanConnectRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:guldan.GuldanConnectRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string world_conn_str = 1;
  if (this->world_conn_str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->world_conn_str().data(), static_cast<int>(this->world_conn_str().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "guldan.GuldanConnectRequest.world_conn_str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->world_conn_str(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:guldan.GuldanConnectRequest)
  return target;
}

size_t GuldanConnectRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:guldan.GuldanConnectRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string world_conn_str = 1;
  if (this->world_conn_str().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->world_conn_str());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GuldanConnectRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:guldan.GuldanConnectRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const GuldanConnectRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GuldanConnectRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:guldan.GuldanConnectRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:guldan.GuldanConnectRequest)
    MergeFrom(*source);
  }
}

void GuldanConnectRequest::MergeFrom(const GuldanConnectRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:guldan.GuldanConnectRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.world_conn_str().size() > 0) {

    world_conn_str_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.world_conn_str_);
  }
}

void GuldanConnectRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:guldan.GuldanConnectRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GuldanConnectRequest::CopyFrom(const GuldanConnectRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:guldan.GuldanConnectRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GuldanConnectRequest::IsInitialized() const {
  return true;
}

void GuldanConnectRequest::Swap(GuldanConnectRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GuldanConnectRequest::InternalSwap(GuldanConnectRequest* other) {
  using std::swap;
  world_conn_str_.Swap(&other->world_conn_str_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GuldanConnectRequest::GetMetadata() const {
  protobuf_guldan_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_guldan_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void GuldanConnectResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GuldanConnectResponse::GuldanConnectResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_guldan_2eproto::scc_info_GuldanConnectResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:guldan.GuldanConnectResponse)
}
GuldanConnectResponse::GuldanConnectResponse(const GuldanConnectResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:guldan.GuldanConnectResponse)
}

void GuldanConnectResponse::SharedCtor() {
}

GuldanConnectResponse::~GuldanConnectResponse() {
  // @@protoc_insertion_point(destructor:guldan.GuldanConnectResponse)
  SharedDtor();
}

void GuldanConnectResponse::SharedDtor() {
}

void GuldanConnectResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GuldanConnectResponse::descriptor() {
  ::protobuf_guldan_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_guldan_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GuldanConnectResponse& GuldanConnectResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_guldan_2eproto::scc_info_GuldanConnectResponse.base);
  return *internal_default_instance();
}


void GuldanConnectResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:guldan.GuldanConnectResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool GuldanConnectResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:guldan.GuldanConnectResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:guldan.GuldanConnectResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:guldan.GuldanConnectResponse)
  return false;
#undef DO_
}

void GuldanConnectResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:guldan.GuldanConnectResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:guldan.GuldanConnectResponse)
}

::google::protobuf::uint8* GuldanConnectResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:guldan.GuldanConnectResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:guldan.GuldanConnectResponse)
  return target;
}

size_t GuldanConnectResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:guldan.GuldanConnectResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GuldanConnectResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:guldan.GuldanConnectResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const GuldanConnectResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GuldanConnectResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:guldan.GuldanConnectResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:guldan.GuldanConnectResponse)
    MergeFrom(*source);
  }
}

void GuldanConnectResponse::MergeFrom(const GuldanConnectResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:guldan.GuldanConnectResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void GuldanConnectResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:guldan.GuldanConnectResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GuldanConnectResponse::CopyFrom(const GuldanConnectResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:guldan.GuldanConnectResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GuldanConnectResponse::IsInitialized() const {
  return true;
}

void GuldanConnectResponse::Swap(GuldanConnectResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GuldanConnectResponse::InternalSwap(GuldanConnectResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GuldanConnectResponse::GetMetadata() const {
  protobuf_guldan_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_guldan_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace guldan
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::guldan::GuldanConnectRequest* Arena::CreateMaybeMessage< ::guldan::GuldanConnectRequest >(Arena* arena) {
  return Arena::CreateInternal< ::guldan::GuldanConnectRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::guldan::GuldanConnectResponse* Arena::CreateMaybeMessage< ::guldan::GuldanConnectResponse >(Arena* arena) {
  return Arena::CreateInternal< ::guldan::GuldanConnectResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
