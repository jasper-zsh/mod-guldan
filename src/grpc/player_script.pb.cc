// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: player_script.proto

#include "player_script.pb.h"

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

namespace protobuf__5fcommon_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf__5fcommon_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Context;
}  // namespace protobuf__5fcommon_2eproto
namespace guldan {
class OnGiveXPRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OnGiveXPRequest>
      _instance;
} _OnGiveXPRequest_default_instance_;
class OnGiveXPResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OnGiveXPResponse>
      _instance;
} _OnGiveXPResponse_default_instance_;
}  // namespace guldan
namespace protobuf_player_5fscript_2eproto {
static void InitDefaultsOnGiveXPRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::guldan::_OnGiveXPRequest_default_instance_;
    new (ptr) ::guldan::OnGiveXPRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::guldan::OnGiveXPRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_OnGiveXPRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsOnGiveXPRequest}, {
      &protobuf__5fcommon_2eproto::scc_info_Context.base,}};

static void InitDefaultsOnGiveXPResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::guldan::_OnGiveXPResponse_default_instance_;
    new (ptr) ::guldan::OnGiveXPResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::guldan::OnGiveXPResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_OnGiveXPResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsOnGiveXPResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_OnGiveXPRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_OnGiveXPResponse.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::guldan::OnGiveXPRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::guldan::OnGiveXPRequest, player_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::guldan::OnGiveXPRequest, amount_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::guldan::OnGiveXPRequest, victim_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::guldan::OnGiveXPRequest, xp_source_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::guldan::OnGiveXPResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::guldan::OnGiveXPResponse, amount_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::guldan::OnGiveXPRequest)},
  { 9, -1, sizeof(::guldan::OnGiveXPResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::guldan::_OnGiveXPRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::guldan::_OnGiveXPResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "player_script.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\023player_script.proto\022\006guldan\032\r_common.p"
      "roto\"v\n\017OnGiveXPRequest\022\037\n\006player\030\001 \001(\0132"
      "\017.guldan.Context\022\016\n\006amount\030\002 \001(\r\022\037\n\006vict"
      "im\030\003 \001(\0132\017.guldan.Context\022\021\n\txp_source\030\004"
      " \001(\r\"\"\n\020OnGiveXPResponse\022\016\n\006amount\030\001 \001(\r"
      "2M\n\014PlayerScript\022=\n\010OnGiveXP\022\027.guldan.On"
      "GiveXPRequest\032\030.guldan.OnGiveXPResponseb"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 287);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "player_script.proto", &protobuf_RegisterTypes);
  ::protobuf__5fcommon_2eproto::AddDescriptors();
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
}  // namespace protobuf_player_5fscript_2eproto
namespace guldan {

// ===================================================================

void OnGiveXPRequest::InitAsDefaultInstance() {
  ::guldan::_OnGiveXPRequest_default_instance_._instance.get_mutable()->player_ = const_cast< ::guldan::Context*>(
      ::guldan::Context::internal_default_instance());
  ::guldan::_OnGiveXPRequest_default_instance_._instance.get_mutable()->victim_ = const_cast< ::guldan::Context*>(
      ::guldan::Context::internal_default_instance());
}
void OnGiveXPRequest::clear_player() {
  if (GetArenaNoVirtual() == NULL && player_ != NULL) {
    delete player_;
  }
  player_ = NULL;
}
void OnGiveXPRequest::clear_victim() {
  if (GetArenaNoVirtual() == NULL && victim_ != NULL) {
    delete victim_;
  }
  victim_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OnGiveXPRequest::kPlayerFieldNumber;
const int OnGiveXPRequest::kAmountFieldNumber;
const int OnGiveXPRequest::kVictimFieldNumber;
const int OnGiveXPRequest::kXpSourceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OnGiveXPRequest::OnGiveXPRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_player_5fscript_2eproto::scc_info_OnGiveXPRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:guldan.OnGiveXPRequest)
}
OnGiveXPRequest::OnGiveXPRequest(const OnGiveXPRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_player()) {
    player_ = new ::guldan::Context(*from.player_);
  } else {
    player_ = NULL;
  }
  if (from.has_victim()) {
    victim_ = new ::guldan::Context(*from.victim_);
  } else {
    victim_ = NULL;
  }
  ::memcpy(&amount_, &from.amount_,
    static_cast<size_t>(reinterpret_cast<char*>(&xp_source_) -
    reinterpret_cast<char*>(&amount_)) + sizeof(xp_source_));
  // @@protoc_insertion_point(copy_constructor:guldan.OnGiveXPRequest)
}

void OnGiveXPRequest::SharedCtor() {
  ::memset(&player_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&xp_source_) -
      reinterpret_cast<char*>(&player_)) + sizeof(xp_source_));
}

OnGiveXPRequest::~OnGiveXPRequest() {
  // @@protoc_insertion_point(destructor:guldan.OnGiveXPRequest)
  SharedDtor();
}

void OnGiveXPRequest::SharedDtor() {
  if (this != internal_default_instance()) delete player_;
  if (this != internal_default_instance()) delete victim_;
}

void OnGiveXPRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* OnGiveXPRequest::descriptor() {
  ::protobuf_player_5fscript_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_player_5fscript_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const OnGiveXPRequest& OnGiveXPRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_player_5fscript_2eproto::scc_info_OnGiveXPRequest.base);
  return *internal_default_instance();
}


void OnGiveXPRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:guldan.OnGiveXPRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && player_ != NULL) {
    delete player_;
  }
  player_ = NULL;
  if (GetArenaNoVirtual() == NULL && victim_ != NULL) {
    delete victim_;
  }
  victim_ = NULL;
  ::memset(&amount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&xp_source_) -
      reinterpret_cast<char*>(&amount_)) + sizeof(xp_source_));
  _internal_metadata_.Clear();
}

bool OnGiveXPRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:guldan.OnGiveXPRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .guldan.Context player = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_player()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 amount = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &amount_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .guldan.Context victim = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_victim()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 xp_source = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &xp_source_)));
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
  // @@protoc_insertion_point(parse_success:guldan.OnGiveXPRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:guldan.OnGiveXPRequest)
  return false;
#undef DO_
}

void OnGiveXPRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:guldan.OnGiveXPRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .guldan.Context player = 1;
  if (this->has_player()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_player(), output);
  }

  // uint32 amount = 2;
  if (this->amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->amount(), output);
  }

  // .guldan.Context victim = 3;
  if (this->has_victim()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_victim(), output);
  }

  // uint32 xp_source = 4;
  if (this->xp_source() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->xp_source(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:guldan.OnGiveXPRequest)
}

::google::protobuf::uint8* OnGiveXPRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:guldan.OnGiveXPRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .guldan.Context player = 1;
  if (this->has_player()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_player(), deterministic, target);
  }

  // uint32 amount = 2;
  if (this->amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->amount(), target);
  }

  // .guldan.Context victim = 3;
  if (this->has_victim()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_victim(), deterministic, target);
  }

  // uint32 xp_source = 4;
  if (this->xp_source() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->xp_source(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:guldan.OnGiveXPRequest)
  return target;
}

size_t OnGiveXPRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:guldan.OnGiveXPRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .guldan.Context player = 1;
  if (this->has_player()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *player_);
  }

  // .guldan.Context victim = 3;
  if (this->has_victim()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *victim_);
  }

  // uint32 amount = 2;
  if (this->amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->amount());
  }

  // uint32 xp_source = 4;
  if (this->xp_source() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->xp_source());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void OnGiveXPRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:guldan.OnGiveXPRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const OnGiveXPRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const OnGiveXPRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:guldan.OnGiveXPRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:guldan.OnGiveXPRequest)
    MergeFrom(*source);
  }
}

void OnGiveXPRequest::MergeFrom(const OnGiveXPRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:guldan.OnGiveXPRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_player()) {
    mutable_player()->::guldan::Context::MergeFrom(from.player());
  }
  if (from.has_victim()) {
    mutable_victim()->::guldan::Context::MergeFrom(from.victim());
  }
  if (from.amount() != 0) {
    set_amount(from.amount());
  }
  if (from.xp_source() != 0) {
    set_xp_source(from.xp_source());
  }
}

void OnGiveXPRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:guldan.OnGiveXPRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OnGiveXPRequest::CopyFrom(const OnGiveXPRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:guldan.OnGiveXPRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OnGiveXPRequest::IsInitialized() const {
  return true;
}

void OnGiveXPRequest::Swap(OnGiveXPRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OnGiveXPRequest::InternalSwap(OnGiveXPRequest* other) {
  using std::swap;
  swap(player_, other->player_);
  swap(victim_, other->victim_);
  swap(amount_, other->amount_);
  swap(xp_source_, other->xp_source_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata OnGiveXPRequest::GetMetadata() const {
  protobuf_player_5fscript_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_player_5fscript_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void OnGiveXPResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OnGiveXPResponse::kAmountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OnGiveXPResponse::OnGiveXPResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_player_5fscript_2eproto::scc_info_OnGiveXPResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:guldan.OnGiveXPResponse)
}
OnGiveXPResponse::OnGiveXPResponse(const OnGiveXPResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  amount_ = from.amount_;
  // @@protoc_insertion_point(copy_constructor:guldan.OnGiveXPResponse)
}

void OnGiveXPResponse::SharedCtor() {
  amount_ = 0u;
}

OnGiveXPResponse::~OnGiveXPResponse() {
  // @@protoc_insertion_point(destructor:guldan.OnGiveXPResponse)
  SharedDtor();
}

void OnGiveXPResponse::SharedDtor() {
}

void OnGiveXPResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* OnGiveXPResponse::descriptor() {
  ::protobuf_player_5fscript_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_player_5fscript_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const OnGiveXPResponse& OnGiveXPResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_player_5fscript_2eproto::scc_info_OnGiveXPResponse.base);
  return *internal_default_instance();
}


void OnGiveXPResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:guldan.OnGiveXPResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  amount_ = 0u;
  _internal_metadata_.Clear();
}

bool OnGiveXPResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:guldan.OnGiveXPResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 amount = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &amount_)));
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
  // @@protoc_insertion_point(parse_success:guldan.OnGiveXPResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:guldan.OnGiveXPResponse)
  return false;
#undef DO_
}

void OnGiveXPResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:guldan.OnGiveXPResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 amount = 1;
  if (this->amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->amount(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:guldan.OnGiveXPResponse)
}

::google::protobuf::uint8* OnGiveXPResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:guldan.OnGiveXPResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 amount = 1;
  if (this->amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->amount(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:guldan.OnGiveXPResponse)
  return target;
}

size_t OnGiveXPResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:guldan.OnGiveXPResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 amount = 1;
  if (this->amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->amount());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void OnGiveXPResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:guldan.OnGiveXPResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const OnGiveXPResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const OnGiveXPResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:guldan.OnGiveXPResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:guldan.OnGiveXPResponse)
    MergeFrom(*source);
  }
}

void OnGiveXPResponse::MergeFrom(const OnGiveXPResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:guldan.OnGiveXPResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.amount() != 0) {
    set_amount(from.amount());
  }
}

void OnGiveXPResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:guldan.OnGiveXPResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OnGiveXPResponse::CopyFrom(const OnGiveXPResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:guldan.OnGiveXPResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OnGiveXPResponse::IsInitialized() const {
  return true;
}

void OnGiveXPResponse::Swap(OnGiveXPResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OnGiveXPResponse::InternalSwap(OnGiveXPResponse* other) {
  using std::swap;
  swap(amount_, other->amount_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata OnGiveXPResponse::GetMetadata() const {
  protobuf_player_5fscript_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_player_5fscript_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace guldan
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::guldan::OnGiveXPRequest* Arena::CreateMaybeMessage< ::guldan::OnGiveXPRequest >(Arena* arena) {
  return Arena::CreateInternal< ::guldan::OnGiveXPRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::guldan::OnGiveXPResponse* Arena::CreateMaybeMessage< ::guldan::OnGiveXPResponse >(Arena* arena) {
  return Arena::CreateInternal< ::guldan::OnGiveXPResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
