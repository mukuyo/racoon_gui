// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Replacement.proto

#include "grSim_Replacement.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR grSim_RobotReplacement::grSim_RobotReplacement(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.x_)*/0
  , /*decltype(_impl_.y_)*/0
  , /*decltype(_impl_.dir_)*/0
  , /*decltype(_impl_.id_)*/0u
  , /*decltype(_impl_.yellowteam_)*/false
  , /*decltype(_impl_.turnon_)*/false} {}
struct grSim_RobotReplacementDefaultTypeInternal {
  PROTOBUF_CONSTEXPR grSim_RobotReplacementDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~grSim_RobotReplacementDefaultTypeInternal() {}
  union {
    grSim_RobotReplacement _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 grSim_RobotReplacementDefaultTypeInternal _grSim_RobotReplacement_default_instance_;
PROTOBUF_CONSTEXPR grSim_BallReplacement::grSim_BallReplacement(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.x_)*/0
  , /*decltype(_impl_.y_)*/0
  , /*decltype(_impl_.vx_)*/0
  , /*decltype(_impl_.vy_)*/0} {}
struct grSim_BallReplacementDefaultTypeInternal {
  PROTOBUF_CONSTEXPR grSim_BallReplacementDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~grSim_BallReplacementDefaultTypeInternal() {}
  union {
    grSim_BallReplacement _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 grSim_BallReplacementDefaultTypeInternal _grSim_BallReplacement_default_instance_;
PROTOBUF_CONSTEXPR grSim_Replacement::grSim_Replacement(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.robots_)*/{}
  , /*decltype(_impl_.ball_)*/nullptr} {}
struct grSim_ReplacementDefaultTypeInternal {
  PROTOBUF_CONSTEXPR grSim_ReplacementDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~grSim_ReplacementDefaultTypeInternal() {}
  union {
    grSim_Replacement _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 grSim_ReplacementDefaultTypeInternal _grSim_Replacement_default_instance_;
static ::_pb::Metadata file_level_metadata_grSim_5fReplacement_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_grSim_5fReplacement_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_grSim_5fReplacement_2eproto = nullptr;

const uint32_t TableStruct_grSim_5fReplacement_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, _impl_.x_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, _impl_.y_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, _impl_.dir_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, _impl_.yellowteam_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, _impl_.turnon_),
  0,
  1,
  2,
  3,
  4,
  5,
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, _impl_.x_),
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, _impl_.y_),
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, _impl_.vx_),
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, _impl_.vy_),
  0,
  1,
  2,
  3,
  PROTOBUF_FIELD_OFFSET(::grSim_Replacement, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_Replacement, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grSim_Replacement, _impl_.ball_),
  PROTOBUF_FIELD_OFFSET(::grSim_Replacement, _impl_.robots_),
  0,
  ~0u,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, -1, sizeof(::grSim_RobotReplacement)},
  { 18, 28, -1, sizeof(::grSim_BallReplacement)},
  { 32, 40, -1, sizeof(::grSim_Replacement)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_grSim_RobotReplacement_default_instance_._instance,
  &::_grSim_BallReplacement_default_instance_._instance,
  &::_grSim_Replacement_default_instance_._instance,
};

const char descriptor_table_protodef_grSim_5fReplacement_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027grSim_Replacement.proto\"k\n\026grSim_Robot"
  "Replacement\022\t\n\001x\030\001 \002(\001\022\t\n\001y\030\002 \002(\001\022\013\n\003dir"
  "\030\003 \002(\001\022\n\n\002id\030\004 \002(\r\022\022\n\nyellowteam\030\005 \002(\010\022\016"
  "\n\006turnon\030\006 \001(\010\"E\n\025grSim_BallReplacement\022"
  "\t\n\001x\030\001 \001(\001\022\t\n\001y\030\002 \001(\001\022\n\n\002vx\030\003 \001(\001\022\n\n\002vy\030"
  "\004 \001(\001\"b\n\021grSim_Replacement\022$\n\004ball\030\001 \001(\013"
  "2\026.grSim_BallReplacement\022\'\n\006robots\030\002 \003(\013"
  "2\027.grSim_RobotReplacementB-Z+github.com/"
  "Rione-SSL/RACOON-Pi/proto/pb_gen"
  ;
static ::_pbi::once_flag descriptor_table_grSim_5fReplacement_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_grSim_5fReplacement_2eproto = {
    false, false, 352, descriptor_table_protodef_grSim_5fReplacement_2eproto,
    "grSim_Replacement.proto",
    &descriptor_table_grSim_5fReplacement_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_grSim_5fReplacement_2eproto::offsets,
    file_level_metadata_grSim_5fReplacement_2eproto, file_level_enum_descriptors_grSim_5fReplacement_2eproto,
    file_level_service_descriptors_grSim_5fReplacement_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_grSim_5fReplacement_2eproto_getter() {
  return &descriptor_table_grSim_5fReplacement_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_grSim_5fReplacement_2eproto(&descriptor_table_grSim_5fReplacement_2eproto);

// ===================================================================

class grSim_RobotReplacement::_Internal {
 public:
  using HasBits = decltype(std::declval<grSim_RobotReplacement>()._impl_._has_bits_);
  static void set_has_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_dir(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_yellowteam(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_turnon(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000001f) ^ 0x0000001f) != 0;
  }
};

grSim_RobotReplacement::grSim_RobotReplacement(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:grSim_RobotReplacement)
}
grSim_RobotReplacement::grSim_RobotReplacement(const grSim_RobotReplacement& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  grSim_RobotReplacement* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.x_){}
    , decltype(_impl_.y_){}
    , decltype(_impl_.dir_){}
    , decltype(_impl_.id_){}
    , decltype(_impl_.yellowteam_){}
    , decltype(_impl_.turnon_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.x_, &from._impl_.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.turnon_) -
    reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.turnon_));
  // @@protoc_insertion_point(copy_constructor:grSim_RobotReplacement)
}

inline void grSim_RobotReplacement::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.x_){0}
    , decltype(_impl_.y_){0}
    , decltype(_impl_.dir_){0}
    , decltype(_impl_.id_){0u}
    , decltype(_impl_.yellowteam_){false}
    , decltype(_impl_.turnon_){false}
  };
}

grSim_RobotReplacement::~grSim_RobotReplacement() {
  // @@protoc_insertion_point(destructor:grSim_RobotReplacement)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void grSim_RobotReplacement::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void grSim_RobotReplacement::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void grSim_RobotReplacement::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_RobotReplacement)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&_impl_.x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.turnon_) -
        reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.turnon_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* grSim_RobotReplacement::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required double x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 9)) {
          _Internal::set_has_x(&has_bits);
          _impl_.x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // required double y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 17)) {
          _Internal::set_has_y(&has_bits);
          _impl_.y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // required double dir = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 25)) {
          _Internal::set_has_dir(&has_bits);
          _impl_.dir_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // required uint32 id = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_id(&has_bits);
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required bool yellowteam = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_yellowteam(&has_bits);
          _impl_.yellowteam_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool turnon = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_turnon(&has_bits);
          _impl_.turnon_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* grSim_RobotReplacement::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_RobotReplacement)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required double x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(1, this->_internal_x(), target);
  }

  // required double y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(2, this->_internal_y(), target);
  }

  // required double dir = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(3, this->_internal_dir(), target);
  }

  // required uint32 id = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(4, this->_internal_id(), target);
  }

  // required bool yellowteam = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_yellowteam(), target);
  }

  // optional bool turnon = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(6, this->_internal_turnon(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_RobotReplacement)
  return target;
}

size_t grSim_RobotReplacement::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:grSim_RobotReplacement)
  size_t total_size = 0;

  if (_internal_has_x()) {
    // required double x = 1;
    total_size += 1 + 8;
  }

  if (_internal_has_y()) {
    // required double y = 2;
    total_size += 1 + 8;
  }

  if (_internal_has_dir()) {
    // required double dir = 3;
    total_size += 1 + 8;
  }

  if (_internal_has_id()) {
    // required uint32 id = 4;
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_id());
  }

  if (_internal_has_yellowteam()) {
    // required bool yellowteam = 5;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t grSim_RobotReplacement::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_RobotReplacement)
  size_t total_size = 0;

  if (((_impl_._has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required double x = 1;
    total_size += 1 + 8;

    // required double y = 2;
    total_size += 1 + 8;

    // required double dir = 3;
    total_size += 1 + 8;

    // required uint32 id = 4;
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_id());

    // required bool yellowteam = 5;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bool turnon = 6;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000020u) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData grSim_RobotReplacement::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    grSim_RobotReplacement::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*grSim_RobotReplacement::GetClassData() const { return &_class_data_; }


void grSim_RobotReplacement::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<grSim_RobotReplacement*>(&to_msg);
  auto& from = static_cast<const grSim_RobotReplacement&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:grSim_RobotReplacement)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.x_ = from._impl_.x_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.y_ = from._impl_.y_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.dir_ = from._impl_.dir_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.id_ = from._impl_.id_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.yellowteam_ = from._impl_.yellowteam_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.turnon_ = from._impl_.turnon_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void grSim_RobotReplacement::CopyFrom(const grSim_RobotReplacement& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_RobotReplacement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_RobotReplacement::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  return true;
}

void grSim_RobotReplacement::InternalSwap(grSim_RobotReplacement* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(grSim_RobotReplacement, _impl_.turnon_)
      + sizeof(grSim_RobotReplacement::_impl_.turnon_)
      - PROTOBUF_FIELD_OFFSET(grSim_RobotReplacement, _impl_.x_)>(
          reinterpret_cast<char*>(&_impl_.x_),
          reinterpret_cast<char*>(&other->_impl_.x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_RobotReplacement::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grSim_5fReplacement_2eproto_getter, &descriptor_table_grSim_5fReplacement_2eproto_once,
      file_level_metadata_grSim_5fReplacement_2eproto[0]);
}

// ===================================================================

class grSim_BallReplacement::_Internal {
 public:
  using HasBits = decltype(std::declval<grSim_BallReplacement>()._impl_._has_bits_);
  static void set_has_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_vx(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_vy(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

grSim_BallReplacement::grSim_BallReplacement(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:grSim_BallReplacement)
}
grSim_BallReplacement::grSim_BallReplacement(const grSim_BallReplacement& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  grSim_BallReplacement* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.x_){}
    , decltype(_impl_.y_){}
    , decltype(_impl_.vx_){}
    , decltype(_impl_.vy_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.x_, &from._impl_.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.vy_) -
    reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.vy_));
  // @@protoc_insertion_point(copy_constructor:grSim_BallReplacement)
}

inline void grSim_BallReplacement::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.x_){0}
    , decltype(_impl_.y_){0}
    , decltype(_impl_.vx_){0}
    , decltype(_impl_.vy_){0}
  };
}

grSim_BallReplacement::~grSim_BallReplacement() {
  // @@protoc_insertion_point(destructor:grSim_BallReplacement)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void grSim_BallReplacement::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void grSim_BallReplacement::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void grSim_BallReplacement::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_BallReplacement)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&_impl_.x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.vy_) -
        reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.vy_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* grSim_BallReplacement::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional double x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 9)) {
          _Internal::set_has_x(&has_bits);
          _impl_.x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 17)) {
          _Internal::set_has_y(&has_bits);
          _impl_.y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double vx = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 25)) {
          _Internal::set_has_vx(&has_bits);
          _impl_.vx_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double vy = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 33)) {
          _Internal::set_has_vy(&has_bits);
          _impl_.vy_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* grSim_BallReplacement::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_BallReplacement)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional double x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(1, this->_internal_x(), target);
  }

  // optional double y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(2, this->_internal_y(), target);
  }

  // optional double vx = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(3, this->_internal_vx(), target);
  }

  // optional double vy = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(4, this->_internal_vy(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_BallReplacement)
  return target;
}

size_t grSim_BallReplacement::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_BallReplacement)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional double x = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional double y = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double vx = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double vy = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData grSim_BallReplacement::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    grSim_BallReplacement::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*grSim_BallReplacement::GetClassData() const { return &_class_data_; }


void grSim_BallReplacement::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<grSim_BallReplacement*>(&to_msg);
  auto& from = static_cast<const grSim_BallReplacement&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:grSim_BallReplacement)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.x_ = from._impl_.x_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.y_ = from._impl_.y_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.vx_ = from._impl_.vx_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.vy_ = from._impl_.vy_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void grSim_BallReplacement::CopyFrom(const grSim_BallReplacement& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_BallReplacement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_BallReplacement::IsInitialized() const {
  return true;
}

void grSim_BallReplacement::InternalSwap(grSim_BallReplacement* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(grSim_BallReplacement, _impl_.vy_)
      + sizeof(grSim_BallReplacement::_impl_.vy_)
      - PROTOBUF_FIELD_OFFSET(grSim_BallReplacement, _impl_.x_)>(
          reinterpret_cast<char*>(&_impl_.x_),
          reinterpret_cast<char*>(&other->_impl_.x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_BallReplacement::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grSim_5fReplacement_2eproto_getter, &descriptor_table_grSim_5fReplacement_2eproto_once,
      file_level_metadata_grSim_5fReplacement_2eproto[1]);
}

// ===================================================================

class grSim_Replacement::_Internal {
 public:
  using HasBits = decltype(std::declval<grSim_Replacement>()._impl_._has_bits_);
  static const ::grSim_BallReplacement& ball(const grSim_Replacement* msg);
  static void set_has_ball(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::grSim_BallReplacement&
grSim_Replacement::_Internal::ball(const grSim_Replacement* msg) {
  return *msg->_impl_.ball_;
}
grSim_Replacement::grSim_Replacement(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:grSim_Replacement)
}
grSim_Replacement::grSim_Replacement(const grSim_Replacement& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  grSim_Replacement* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.robots_){from._impl_.robots_}
    , decltype(_impl_.ball_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_ball()) {
    _this->_impl_.ball_ = new ::grSim_BallReplacement(*from._impl_.ball_);
  }
  // @@protoc_insertion_point(copy_constructor:grSim_Replacement)
}

inline void grSim_Replacement::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.robots_){arena}
    , decltype(_impl_.ball_){nullptr}
  };
}

grSim_Replacement::~grSim_Replacement() {
  // @@protoc_insertion_point(destructor:grSim_Replacement)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void grSim_Replacement::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.robots_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.ball_;
}

void grSim_Replacement::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void grSim_Replacement::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_Replacement)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.robots_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(_impl_.ball_ != nullptr);
    _impl_.ball_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* grSim_Replacement::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .grSim_BallReplacement ball = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_ball(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .grSim_RobotReplacement robots = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_robots(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* grSim_Replacement::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_Replacement)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .grSim_BallReplacement ball = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::ball(this),
        _Internal::ball(this).GetCachedSize(), target, stream);
  }

  // repeated .grSim_RobotReplacement robots = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_robots_size()); i < n; i++) {
    const auto& repfield = this->_internal_robots(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_Replacement)
  return target;
}

size_t grSim_Replacement::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_Replacement)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .grSim_RobotReplacement robots = 2;
  total_size += 1UL * this->_internal_robots_size();
  for (const auto& msg : this->_impl_.robots_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional .grSim_BallReplacement ball = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.ball_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData grSim_Replacement::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    grSim_Replacement::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*grSim_Replacement::GetClassData() const { return &_class_data_; }


void grSim_Replacement::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<grSim_Replacement*>(&to_msg);
  auto& from = static_cast<const grSim_Replacement&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:grSim_Replacement)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.robots_.MergeFrom(from._impl_.robots_);
  if (from._internal_has_ball()) {
    _this->_internal_mutable_ball()->::grSim_BallReplacement::MergeFrom(
        from._internal_ball());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void grSim_Replacement::CopyFrom(const grSim_Replacement& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_Replacement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_Replacement::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(_impl_.robots_))
    return false;
  return true;
}

void grSim_Replacement::InternalSwap(grSim_Replacement* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.robots_.InternalSwap(&other->_impl_.robots_);
  swap(_impl_.ball_, other->_impl_.ball_);
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_Replacement::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grSim_5fReplacement_2eproto_getter, &descriptor_table_grSim_5fReplacement_2eproto_once,
      file_level_metadata_grSim_5fReplacement_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grSim_RobotReplacement*
Arena::CreateMaybeMessage< ::grSim_RobotReplacement >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grSim_RobotReplacement >(arena);
}
template<> PROTOBUF_NOINLINE ::grSim_BallReplacement*
Arena::CreateMaybeMessage< ::grSim_BallReplacement >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grSim_BallReplacement >(arena);
}
template<> PROTOBUF_NOINLINE ::grSim_Replacement*
Arena::CreateMaybeMessage< ::grSim_Replacement >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grSim_Replacement >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>