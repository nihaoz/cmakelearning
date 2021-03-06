// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: addressbook.proto

#include "addressbook.pb.h"

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
namespace tutorial
{
  class AccountDefaultTypeInternal
  {
  public:
    ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Account> _instance;
  } _Account_default_instance_;
} // namespace tutorial
static void InitDefaultsscc_info_Account_addressbook_2eproto()
{
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void *ptr = &::tutorial::_Account_default_instance_;
    new (ptr)::tutorial::Account();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Account_addressbook_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Account_addressbook_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_addressbook_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const **file_level_enum_descriptors_addressbook_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const **file_level_service_descriptors_addressbook_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_addressbook_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    ~0u, // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::tutorial::Account, _internal_metadata_),
    ~0u, // no _extensions_
    ~0u, // no _oneof_case_
    ~0u, // no _weak_field_map_
    PROTOBUF_FIELD_OFFSET(::tutorial::Account, id_),
    PROTOBUF_FIELD_OFFSET(::tutorial::Account, name_),
    PROTOBUF_FIELD_OFFSET(::tutorial::Account, password_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    {0, -1, sizeof(::tutorial::Account)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const *const file_default_instances[] = {
    reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message *>(&::tutorial::_Account_default_instance_),
};

const char descriptor_table_protodef_addressbook_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
    "\n\021addressbook.proto\022\010tutorial\"5\n\007Account"
    "\022\n\n\002ID\030\001 \001(\004\022\014\n\004name\030\002 \001(\t\022\020\n\010password\030\003"
    " \001(\tb\006proto3";
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable *const descriptor_table_addressbook_2eproto_deps[1] = {};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase *const descriptor_table_addressbook_2eproto_sccs[1] = {
    &scc_info_Account_addressbook_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_addressbook_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_addressbook_2eproto = {
    false,
    false,
    descriptor_table_protodef_addressbook_2eproto,
    "addressbook.proto",
    92,
    &descriptor_table_addressbook_2eproto_once,
    descriptor_table_addressbook_2eproto_sccs,
    descriptor_table_addressbook_2eproto_deps,
    1,
    0,
    schemas,
    file_default_instances,
    TableStruct_addressbook_2eproto::offsets,
    file_level_metadata_addressbook_2eproto,
    1,
    file_level_enum_descriptors_addressbook_2eproto,
    file_level_service_descriptors_addressbook_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_addressbook_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_addressbook_2eproto)), true);
namespace tutorial
{

  // ===================================================================

  class Account::_Internal
  {
  public:
  };

  Account::Account(::PROTOBUF_NAMESPACE_ID::Arena *arena)
      : ::PROTOBUF_NAMESPACE_ID::Message(arena)
  {
    SharedCtor();
    RegisterArenaDtor(arena);
    // @@protoc_insertion_point(arena_constructor:tutorial.Account)
  }
  Account::Account(const Account &from)
      : ::PROTOBUF_NAMESPACE_ID::Message()
  {
    _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
    name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    if (!from._internal_name().empty())
    {
      name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(),
                GetArena());
    }
    password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    if (!from._internal_password().empty())
    {
      password_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_password(),
                    GetArena());
    }
    id_ = from.id_;
    // @@protoc_insertion_point(copy_constructor:tutorial.Account)
  }

  void Account::SharedCtor()
  {
    ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Account_addressbook_2eproto.base);
    name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    id_ = PROTOBUF_ULONGLONG(0);
  }

  Account::~Account()
  {
    // @@protoc_insertion_point(destructor:tutorial.Account)
    SharedDtor();
    _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  void Account::SharedDtor()
  {
    GOOGLE_DCHECK(GetArena() == nullptr);
    name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    password_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }

  void Account::ArenaDtor(void *object)
  {
    Account *_this = reinterpret_cast<Account *>(object);
    (void)_this;
  }
  void Account::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena *)
  {
  }
  void Account::SetCachedSize(int size) const
  {
    _cached_size_.Set(size);
  }
  const Account &Account::default_instance()
  {
    ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Account_addressbook_2eproto.base);
    return *internal_default_instance();
  }

  void Account::Clear()
  {
    // @@protoc_insertion_point(message_clear_start:tutorial.Account)
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    name_.ClearToEmpty();
    password_.ClearToEmpty();
    id_ = PROTOBUF_ULONGLONG(0);
    _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  const char *Account::_InternalParse(const char *ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx)
  {
#define CHK_(x)                     \
  if (PROTOBUF_PREDICT_FALSE(!(x))) \
  goto failure
    while (!ctx->Done(&ptr))
    {
      ::PROTOBUF_NAMESPACE_ID::uint32 tag;
      ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
      CHK_(ptr);
      switch (tag >> 3)
      {
      // uint64 ID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8))
        {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        }
        else
          goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18))
        {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tutorial.Account.name"));
          CHK_(ptr);
        }
        else
          goto handle_unusual;
        continue;
      // string password = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26))
        {
          auto str = _internal_mutable_password();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tutorial.Account.password"));
          CHK_(ptr);
        }
        else
          goto handle_unusual;
        continue;
      default:
      {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0)
        {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
                                _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
                                ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
      } // switch
    }   // while
  success:
    return ptr;
  failure:
    ptr = nullptr;
    goto success;
#undef CHK_
  }

  ::PROTOBUF_NAMESPACE_ID::uint8 *Account::_InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8 *target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream *stream) const
  {
    // @@protoc_insertion_point(serialize_to_array_start:tutorial.Account)
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    // uint64 ID = 1;
    if (this->id() != 0)
    {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_id(), target);
    }

    // string name = 2;
    if (this->name().size() > 0)
    {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "tutorial.Account.name");
      target = stream->WriteStringMaybeAliased(
          2, this->_internal_name(), target);
    }

    // string password = 3;
    if (this->password().size() > 0)
    {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          this->_internal_password().data(), static_cast<int>(this->_internal_password().length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "tutorial.Account.password");
      target = stream->WriteStringMaybeAliased(
          3, this->_internal_password(), target);
    }

    if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields()))
    {
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
          _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
    }
    // @@protoc_insertion_point(serialize_to_array_end:tutorial.Account)
    return target;
  }

  size_t Account::ByteSizeLong() const
  {
    // @@protoc_insertion_point(message_byte_size_start:tutorial.Account)
    size_t total_size = 0;

    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    // string name = 2;
    if (this->name().size() > 0)
    {
      total_size += 1 +
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                        this->_internal_name());
    }

    // string password = 3;
    if (this->password().size() > 0)
    {
      total_size += 1 +
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                        this->_internal_password());
    }

    // uint64 ID = 1;
    if (this->id() != 0)
    {
      total_size += 1 +
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
                        this->_internal_id());
    }

    if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields()))
    {
      return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
          _internal_metadata_, total_size, &_cached_size_);
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
    SetCachedSize(cached_size);
    return total_size;
  }

  void Account::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from)
  {
    // @@protoc_insertion_point(generalized_merge_from_start:tutorial.Account)
    GOOGLE_DCHECK_NE(&from, this);
    const Account *source =
        ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Account>(
            &from);
    if (source == nullptr)
    {
      // @@protoc_insertion_point(generalized_merge_from_cast_fail:tutorial.Account)
      ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
    }
    else
    {
      // @@protoc_insertion_point(generalized_merge_from_cast_success:tutorial.Account)
      MergeFrom(*source);
    }
  }

  void Account::MergeFrom(const Account &from)
  {
    // @@protoc_insertion_point(class_specific_merge_from_start:tutorial.Account)
    GOOGLE_DCHECK_NE(&from, this);
    _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    if (from.name().size() > 0)
    {
      _internal_set_name(from._internal_name());
    }
    if (from.password().size() > 0)
    {
      _internal_set_password(from._internal_password());
    }
    if (from.id() != 0)
    {
      _internal_set_id(from._internal_id());
    }
  }

  void Account::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from)
  {
    // @@protoc_insertion_point(generalized_copy_from_start:tutorial.Account)
    if (&from == this)
      return;
    Clear();
    MergeFrom(from);
  }

  void Account::CopyFrom(const Account &from)
  {
    // @@protoc_insertion_point(class_specific_copy_from_start:tutorial.Account)
    if (&from == this)
      return;
    Clear();
    MergeFrom(from);
  }

  bool Account::IsInitialized() const
  {
    return true;
  }

  void Account::InternalSwap(Account *other)
  {
    using std::swap;
    _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
    name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
    password_.Swap(&other->password_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
    swap(id_, other->id_);
  }

  ::PROTOBUF_NAMESPACE_ID::Metadata Account::GetMetadata() const
  {
    return GetMetadataStatic();
  }

  // @@protoc_insertion_point(namespace_scope)
} // namespace tutorial
PROTOBUF_NAMESPACE_OPEN
template <>
PROTOBUF_NOINLINE ::tutorial::Account *Arena::CreateMaybeMessage<::tutorial::Account>(Arena *arena)
{
  return Arena::CreateMessageInternal<::tutorial::Account>(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
