// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tech.proto

#include "tech.pb.h"

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
namespace vlsir {
namespace tech {
constexpr Technology::Technology(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : packages_()
  , layers_()
  , name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , label_sub_index_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct TechnologyDefaultTypeInternal {
  constexpr TechnologyDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TechnologyDefaultTypeInternal() {}
  union {
    Technology _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TechnologyDefaultTypeInternal _Technology_default_instance_;
constexpr Package::Package(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct PackageDefaultTypeInternal {
  constexpr PackageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PackageDefaultTypeInternal() {}
  union {
    Package _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PackageDefaultTypeInternal _Package_default_instance_;
constexpr LayerInfo::LayerInfo(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , purpose_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , index_(uint64_t{0u})
  , sub_index_(uint64_t{0u}){}
struct LayerInfoDefaultTypeInternal {
  constexpr LayerInfoDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LayerInfoDefaultTypeInternal() {}
  union {
    LayerInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LayerInfoDefaultTypeInternal _LayerInfo_default_instance_;
}  // namespace tech
}  // namespace vlsir
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tech_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_tech_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tech_2eproto = nullptr;

const uint32_t TableStruct_tech_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::Technology, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::Technology, name_),
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::Technology, packages_),
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::Technology, layers_),
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::Technology, label_sub_index_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::Package, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::Package, name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::LayerInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::LayerInfo, name_),
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::LayerInfo, purpose_),
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::LayerInfo, index_),
  PROTOBUF_FIELD_OFFSET(::vlsir::tech::LayerInfo, sub_index_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::vlsir::tech::Technology)},
  { 10, -1, -1, sizeof(::vlsir::tech::Package)},
  { 17, -1, -1, sizeof(::vlsir::tech::LayerInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::vlsir::tech::_Technology_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::vlsir::tech::_Package_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::vlsir::tech::_LayerInfo_default_instance_),
};

const char descriptor_table_protodef_tech_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ntech.proto\022\nvlsir.tech\"\201\001\n\nTechnology\022"
  "\014\n\004name\030\001 \001(\t\022%\n\010packages\030\013 \003(\0132\023.vlsir."
  "tech.Package\022%\n\006layers\030e \003(\0132\025.vlsir.tec"
  "h.LayerInfo\022\027\n\017label_sub_index\030f \001(\t\"\027\n\007"
  "Package\022\014\n\004name\030\001 \001(\t\"L\n\tLayerInfo\022\014\n\004na"
  "me\030\001 \001(\t\022\017\n\007purpose\030\013 \001(\t\022\r\n\005index\030\025 \001(\004"
  "\022\021\n\tsub_index\030\037 \001(\004b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tech_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tech_2eproto = {
  false, false, 267, descriptor_table_protodef_tech_2eproto, "tech.proto", 
  &descriptor_table_tech_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_tech_2eproto::offsets,
  file_level_metadata_tech_2eproto, file_level_enum_descriptors_tech_2eproto, file_level_service_descriptors_tech_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_tech_2eproto_getter() {
  return &descriptor_table_tech_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_tech_2eproto(&descriptor_table_tech_2eproto);
namespace vlsir {
namespace tech {

// ===================================================================

class Technology::_Internal {
 public:
};

Technology::Technology(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  packages_(arena),
  layers_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:vlsir.tech.Technology)
}
Technology::Technology(const Technology& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      packages_(from.packages_),
      layers_(from.layers_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArenaForAllocation());
  }
  label_sub_index_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    label_sub_index_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_label_sub_index().empty()) {
    label_sub_index_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_label_sub_index(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:vlsir.tech.Technology)
}

inline void Technology::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
label_sub_index_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  label_sub_index_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Technology::~Technology() {
  // @@protoc_insertion_point(destructor:vlsir.tech.Technology)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Technology::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  label_sub_index_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Technology::ArenaDtor(void* object) {
  Technology* _this = reinterpret_cast< Technology* >(object);
  (void)_this;
}
void Technology::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Technology::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Technology::Clear() {
// @@protoc_insertion_point(message_clear_start:vlsir.tech.Technology)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  packages_.Clear();
  layers_.Clear();
  name_.ClearToEmpty();
  label_sub_index_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Technology::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "vlsir.tech.Technology.name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .vlsir.tech.Package packages = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 90)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_packages(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<90>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .vlsir.tech.LayerInfo layers = 101;
      case 101:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 2;
          do {
            ptr += 2;
            ptr = ctx->ParseMessage(_internal_add_layers(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<810>(ptr));
        } else
          goto handle_unusual;
        continue;
      // string label_sub_index = 102;
      case 102:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_label_sub_index();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "vlsir.tech.Technology.label_sub_index"));
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Technology::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:vlsir.tech.Technology)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vlsir.tech.Technology.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // repeated .vlsir.tech.Package packages = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_packages_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(11, this->_internal_packages(i), target, stream);
  }

  // repeated .vlsir.tech.LayerInfo layers = 101;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_layers_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(101, this->_internal_layers(i), target, stream);
  }

  // string label_sub_index = 102;
  if (!this->_internal_label_sub_index().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_label_sub_index().data(), static_cast<int>(this->_internal_label_sub_index().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vlsir.tech.Technology.label_sub_index");
    target = stream->WriteStringMaybeAliased(
        102, this->_internal_label_sub_index(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vlsir.tech.Technology)
  return target;
}

size_t Technology::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vlsir.tech.Technology)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .vlsir.tech.Package packages = 11;
  total_size += 1UL * this->_internal_packages_size();
  for (const auto& msg : this->packages_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .vlsir.tech.LayerInfo layers = 101;
  total_size += 2UL * this->_internal_layers_size();
  for (const auto& msg : this->layers_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string label_sub_index = 102;
  if (!this->_internal_label_sub_index().empty()) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_label_sub_index());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Technology::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Technology::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Technology::GetClassData() const { return &_class_data_; }

void Technology::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Technology *>(to)->MergeFrom(
      static_cast<const Technology &>(from));
}


void Technology::MergeFrom(const Technology& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:vlsir.tech.Technology)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  packages_.MergeFrom(from.packages_);
  layers_.MergeFrom(from.layers_);
  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  if (!from._internal_label_sub_index().empty()) {
    _internal_set_label_sub_index(from._internal_label_sub_index());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Technology::CopyFrom(const Technology& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vlsir.tech.Technology)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Technology::IsInitialized() const {
  return true;
}

void Technology::InternalSwap(Technology* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  packages_.InternalSwap(&other->packages_);
  layers_.InternalSwap(&other->layers_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &label_sub_index_, lhs_arena,
      &other->label_sub_index_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Technology::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tech_2eproto_getter, &descriptor_table_tech_2eproto_once,
      file_level_metadata_tech_2eproto[0]);
}

// ===================================================================

class Package::_Internal {
 public:
};

Package::Package(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:vlsir.tech.Package)
}
Package::Package(const Package& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:vlsir.tech.Package)
}

inline void Package::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Package::~Package() {
  // @@protoc_insertion_point(destructor:vlsir.tech.Package)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Package::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Package::ArenaDtor(void* object) {
  Package* _this = reinterpret_cast< Package* >(object);
  (void)_this;
}
void Package::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Package::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Package::Clear() {
// @@protoc_insertion_point(message_clear_start:vlsir.tech.Package)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Package::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "vlsir.tech.Package.name"));
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Package::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:vlsir.tech.Package)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vlsir.tech.Package.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vlsir.tech.Package)
  return target;
}

size_t Package::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vlsir.tech.Package)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Package::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Package::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Package::GetClassData() const { return &_class_data_; }

void Package::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Package *>(to)->MergeFrom(
      static_cast<const Package &>(from));
}


void Package::MergeFrom(const Package& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:vlsir.tech.Package)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Package::CopyFrom(const Package& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vlsir.tech.Package)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Package::IsInitialized() const {
  return true;
}

void Package::InternalSwap(Package* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Package::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tech_2eproto_getter, &descriptor_table_tech_2eproto_once,
      file_level_metadata_tech_2eproto[1]);
}

// ===================================================================

class LayerInfo::_Internal {
 public:
};

LayerInfo::LayerInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:vlsir.tech.LayerInfo)
}
LayerInfo::LayerInfo(const LayerInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArenaForAllocation());
  }
  purpose_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    purpose_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_purpose().empty()) {
    purpose_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_purpose(), 
      GetArenaForAllocation());
  }
  ::memcpy(&index_, &from.index_,
    static_cast<size_t>(reinterpret_cast<char*>(&sub_index_) -
    reinterpret_cast<char*>(&index_)) + sizeof(sub_index_));
  // @@protoc_insertion_point(copy_constructor:vlsir.tech.LayerInfo)
}

inline void LayerInfo::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
purpose_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  purpose_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&index_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&sub_index_) -
    reinterpret_cast<char*>(&index_)) + sizeof(sub_index_));
}

LayerInfo::~LayerInfo() {
  // @@protoc_insertion_point(destructor:vlsir.tech.LayerInfo)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void LayerInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  purpose_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LayerInfo::ArenaDtor(void* object) {
  LayerInfo* _this = reinterpret_cast< LayerInfo* >(object);
  (void)_this;
}
void LayerInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LayerInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LayerInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:vlsir.tech.LayerInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  purpose_.ClearToEmpty();
  ::memset(&index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sub_index_) -
      reinterpret_cast<char*>(&index_)) + sizeof(sub_index_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LayerInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "vlsir.tech.LayerInfo.name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string purpose = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 90)) {
          auto str = _internal_mutable_purpose();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "vlsir.tech.LayerInfo.purpose"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 index = 21;
      case 21:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 168)) {
          index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 sub_index = 31;
      case 31:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 248)) {
          sub_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* LayerInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:vlsir.tech.LayerInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vlsir.tech.LayerInfo.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // string purpose = 11;
  if (!this->_internal_purpose().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_purpose().data(), static_cast<int>(this->_internal_purpose().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vlsir.tech.LayerInfo.purpose");
    target = stream->WriteStringMaybeAliased(
        11, this->_internal_purpose(), target);
  }

  // uint64 index = 21;
  if (this->_internal_index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(21, this->_internal_index(), target);
  }

  // uint64 sub_index = 31;
  if (this->_internal_sub_index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(31, this->_internal_sub_index(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vlsir.tech.LayerInfo)
  return target;
}

size_t LayerInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vlsir.tech.LayerInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string purpose = 11;
  if (!this->_internal_purpose().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_purpose());
  }

  // uint64 index = 21;
  if (this->_internal_index() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_index());
  }

  // uint64 sub_index = 31;
  if (this->_internal_sub_index() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_sub_index());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LayerInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    LayerInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LayerInfo::GetClassData() const { return &_class_data_; }

void LayerInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<LayerInfo *>(to)->MergeFrom(
      static_cast<const LayerInfo &>(from));
}


void LayerInfo::MergeFrom(const LayerInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:vlsir.tech.LayerInfo)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  if (!from._internal_purpose().empty()) {
    _internal_set_purpose(from._internal_purpose());
  }
  if (from._internal_index() != 0) {
    _internal_set_index(from._internal_index());
  }
  if (from._internal_sub_index() != 0) {
    _internal_set_sub_index(from._internal_sub_index());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LayerInfo::CopyFrom(const LayerInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vlsir.tech.LayerInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LayerInfo::IsInitialized() const {
  return true;
}

void LayerInfo::InternalSwap(LayerInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &purpose_, lhs_arena,
      &other->purpose_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LayerInfo, sub_index_)
      + sizeof(LayerInfo::sub_index_)
      - PROTOBUF_FIELD_OFFSET(LayerInfo, index_)>(
          reinterpret_cast<char*>(&index_),
          reinterpret_cast<char*>(&other->index_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LayerInfo::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tech_2eproto_getter, &descriptor_table_tech_2eproto_once,
      file_level_metadata_tech_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tech
}  // namespace vlsir
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::vlsir::tech::Technology* Arena::CreateMaybeMessage< ::vlsir::tech::Technology >(Arena* arena) {
  return Arena::CreateMessageInternal< ::vlsir::tech::Technology >(arena);
}
template<> PROTOBUF_NOINLINE ::vlsir::tech::Package* Arena::CreateMaybeMessage< ::vlsir::tech::Package >(Arena* arena) {
  return Arena::CreateMessageInternal< ::vlsir::tech::Package >(arena);
}
template<> PROTOBUF_NOINLINE ::vlsir::tech::LayerInfo* Arena::CreateMaybeMessage< ::vlsir::tech::LayerInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::vlsir::tech::LayerInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
