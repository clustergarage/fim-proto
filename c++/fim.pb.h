// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fim.proto

#ifndef PROTOBUF_fim_2eproto__INCLUDED
#define PROTOBUF_fim_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_fim_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsFimdConfigImpl();
void InitDefaultsFimdConfig();
void InitDefaultsFimWatcherSubjectImpl();
void InitDefaultsFimWatcherSubject();
void InitDefaultsFimdHandleImpl();
void InitDefaultsFimdHandle();
inline void InitDefaults() {
  InitDefaultsFimdConfig();
  InitDefaultsFimWatcherSubject();
  InitDefaultsFimdHandle();
}
}  // namespace protobuf_fim_2eproto
namespace fim {
class FimWatcherSubject;
class FimWatcherSubjectDefaultTypeInternal;
extern FimWatcherSubjectDefaultTypeInternal _FimWatcherSubject_default_instance_;
class FimdConfig;
class FimdConfigDefaultTypeInternal;
extern FimdConfigDefaultTypeInternal _FimdConfig_default_instance_;
class FimdHandle;
class FimdHandleDefaultTypeInternal;
extern FimdHandleDefaultTypeInternal _FimdHandle_default_instance_;
}  // namespace fim
namespace fim {

// ===================================================================

class FimdConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:fim.FimdConfig) */ {
 public:
  FimdConfig();
  virtual ~FimdConfig();

  FimdConfig(const FimdConfig& from);

  inline FimdConfig& operator=(const FimdConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FimdConfig(FimdConfig&& from) noexcept
    : FimdConfig() {
    *this = ::std::move(from);
  }

  inline FimdConfig& operator=(FimdConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FimdConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FimdConfig* internal_default_instance() {
    return reinterpret_cast<const FimdConfig*>(
               &_FimdConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(FimdConfig* other);
  friend void swap(FimdConfig& a, FimdConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FimdConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  FimdConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const FimdConfig& from);
  void MergeFrom(const FimdConfig& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(FimdConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .fim.FimWatcherSubject subject = 3;
  int subject_size() const;
  void clear_subject();
  static const int kSubjectFieldNumber = 3;
  const ::fim::FimWatcherSubject& subject(int index) const;
  ::fim::FimWatcherSubject* mutable_subject(int index);
  ::fim::FimWatcherSubject* add_subject();
  ::google::protobuf::RepeatedPtrField< ::fim::FimWatcherSubject >*
      mutable_subject();
  const ::google::protobuf::RepeatedPtrField< ::fim::FimWatcherSubject >&
      subject() const;

  // string hostUid = 1;
  void clear_hostuid();
  static const int kHostUidFieldNumber = 1;
  const ::std::string& hostuid() const;
  void set_hostuid(const ::std::string& value);
  #if LANG_CXX11
  void set_hostuid(::std::string&& value);
  #endif
  void set_hostuid(const char* value);
  void set_hostuid(const char* value, size_t size);
  ::std::string* mutable_hostuid();
  ::std::string* release_hostuid();
  void set_allocated_hostuid(::std::string* hostuid);

  // string containerId = 2;
  void clear_containerid();
  static const int kContainerIdFieldNumber = 2;
  const ::std::string& containerid() const;
  void set_containerid(const ::std::string& value);
  #if LANG_CXX11
  void set_containerid(::std::string&& value);
  #endif
  void set_containerid(const char* value);
  void set_containerid(const char* value, size_t size);
  ::std::string* mutable_containerid();
  ::std::string* release_containerid();
  void set_allocated_containerid(::std::string* containerid);

  // @@protoc_insertion_point(class_scope:fim.FimdConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::fim::FimWatcherSubject > subject_;
  ::google::protobuf::internal::ArenaStringPtr hostuid_;
  ::google::protobuf::internal::ArenaStringPtr containerid_;
  mutable int _cached_size_;
  friend struct ::protobuf_fim_2eproto::TableStruct;
  friend void ::protobuf_fim_2eproto::InitDefaultsFimdConfigImpl();
};
// -------------------------------------------------------------------

class FimWatcherSubject : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:fim.FimWatcherSubject) */ {
 public:
  FimWatcherSubject();
  virtual ~FimWatcherSubject();

  FimWatcherSubject(const FimWatcherSubject& from);

  inline FimWatcherSubject& operator=(const FimWatcherSubject& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FimWatcherSubject(FimWatcherSubject&& from) noexcept
    : FimWatcherSubject() {
    *this = ::std::move(from);
  }

  inline FimWatcherSubject& operator=(FimWatcherSubject&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FimWatcherSubject& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FimWatcherSubject* internal_default_instance() {
    return reinterpret_cast<const FimWatcherSubject*>(
               &_FimWatcherSubject_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(FimWatcherSubject* other);
  friend void swap(FimWatcherSubject& a, FimWatcherSubject& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FimWatcherSubject* New() const PROTOBUF_FINAL { return New(NULL); }

  FimWatcherSubject* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const FimWatcherSubject& from);
  void MergeFrom(const FimWatcherSubject& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(FimWatcherSubject* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string path = 1;
  int path_size() const;
  void clear_path();
  static const int kPathFieldNumber = 1;
  const ::std::string& path(int index) const;
  ::std::string* mutable_path(int index);
  void set_path(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_path(int index, ::std::string&& value);
  #endif
  void set_path(int index, const char* value);
  void set_path(int index, const char* value, size_t size);
  ::std::string* add_path();
  void add_path(const ::std::string& value);
  #if LANG_CXX11
  void add_path(::std::string&& value);
  #endif
  void add_path(const char* value);
  void add_path(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& path() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_path();

  // repeated string event = 2;
  int event_size() const;
  void clear_event();
  static const int kEventFieldNumber = 2;
  const ::std::string& event(int index) const;
  ::std::string* mutable_event(int index);
  void set_event(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_event(int index, ::std::string&& value);
  #endif
  void set_event(int index, const char* value);
  void set_event(int index, const char* value, size_t size);
  ::std::string* add_event();
  void add_event(const ::std::string& value);
  #if LANG_CXX11
  void add_event(::std::string&& value);
  #endif
  void add_event(const char* value);
  void add_event(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& event() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_event();

  // @@protoc_insertion_point(class_scope:fim.FimWatcherSubject)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> path_;
  ::google::protobuf::RepeatedPtrField< ::std::string> event_;
  mutable int _cached_size_;
  friend struct ::protobuf_fim_2eproto::TableStruct;
  friend void ::protobuf_fim_2eproto::InitDefaultsFimWatcherSubjectImpl();
};
// -------------------------------------------------------------------

class FimdHandle : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:fim.FimdHandle) */ {
 public:
  FimdHandle();
  virtual ~FimdHandle();

  FimdHandle(const FimdHandle& from);

  inline FimdHandle& operator=(const FimdHandle& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FimdHandle(FimdHandle&& from) noexcept
    : FimdHandle() {
    *this = ::std::move(from);
  }

  inline FimdHandle& operator=(FimdHandle&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FimdHandle& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FimdHandle* internal_default_instance() {
    return reinterpret_cast<const FimdHandle*>(
               &_FimdHandle_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(FimdHandle* other);
  friend void swap(FimdHandle& a, FimdHandle& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FimdHandle* New() const PROTOBUF_FINAL { return New(NULL); }

  FimdHandle* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const FimdHandle& from);
  void MergeFrom(const FimdHandle& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(FimdHandle* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 pid = 2;
  int pid_size() const;
  void clear_pid();
  static const int kPidFieldNumber = 2;
  ::google::protobuf::int32 pid(int index) const;
  void set_pid(int index, ::google::protobuf::int32 value);
  void add_pid(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      pid() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_pid();

  // repeated int32 processEventfd = 3;
  int processeventfd_size() const;
  void clear_processeventfd();
  static const int kProcessEventfdFieldNumber = 3;
  ::google::protobuf::int32 processeventfd(int index) const;
  void set_processeventfd(int index, ::google::protobuf::int32 value);
  void add_processeventfd(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      processeventfd() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_processeventfd();

  // string hostUid = 1;
  void clear_hostuid();
  static const int kHostUidFieldNumber = 1;
  const ::std::string& hostuid() const;
  void set_hostuid(const ::std::string& value);
  #if LANG_CXX11
  void set_hostuid(::std::string&& value);
  #endif
  void set_hostuid(const char* value);
  void set_hostuid(const char* value, size_t size);
  ::std::string* mutable_hostuid();
  ::std::string* release_hostuid();
  void set_allocated_hostuid(::std::string* hostuid);

  // @@protoc_insertion_point(class_scope:fim.FimdHandle)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > pid_;
  mutable int _pid_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > processeventfd_;
  mutable int _processeventfd_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr hostuid_;
  mutable int _cached_size_;
  friend struct ::protobuf_fim_2eproto::TableStruct;
  friend void ::protobuf_fim_2eproto::InitDefaultsFimdHandleImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FimdConfig

// string hostUid = 1;
inline void FimdConfig::clear_hostuid() {
  hostuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FimdConfig::hostuid() const {
  // @@protoc_insertion_point(field_get:fim.FimdConfig.hostUid)
  return hostuid_.GetNoArena();
}
inline void FimdConfig::set_hostuid(const ::std::string& value) {
  
  hostuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:fim.FimdConfig.hostUid)
}
#if LANG_CXX11
inline void FimdConfig::set_hostuid(::std::string&& value) {
  
  hostuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:fim.FimdConfig.hostUid)
}
#endif
inline void FimdConfig::set_hostuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  hostuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fim.FimdConfig.hostUid)
}
inline void FimdConfig::set_hostuid(const char* value, size_t size) {
  
  hostuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fim.FimdConfig.hostUid)
}
inline ::std::string* FimdConfig::mutable_hostuid() {
  
  // @@protoc_insertion_point(field_mutable:fim.FimdConfig.hostUid)
  return hostuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FimdConfig::release_hostuid() {
  // @@protoc_insertion_point(field_release:fim.FimdConfig.hostUid)
  
  return hostuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FimdConfig::set_allocated_hostuid(::std::string* hostuid) {
  if (hostuid != NULL) {
    
  } else {
    
  }
  hostuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hostuid);
  // @@protoc_insertion_point(field_set_allocated:fim.FimdConfig.hostUid)
}

// string containerId = 2;
inline void FimdConfig::clear_containerid() {
  containerid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FimdConfig::containerid() const {
  // @@protoc_insertion_point(field_get:fim.FimdConfig.containerId)
  return containerid_.GetNoArena();
}
inline void FimdConfig::set_containerid(const ::std::string& value) {
  
  containerid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:fim.FimdConfig.containerId)
}
#if LANG_CXX11
inline void FimdConfig::set_containerid(::std::string&& value) {
  
  containerid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:fim.FimdConfig.containerId)
}
#endif
inline void FimdConfig::set_containerid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  containerid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fim.FimdConfig.containerId)
}
inline void FimdConfig::set_containerid(const char* value, size_t size) {
  
  containerid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fim.FimdConfig.containerId)
}
inline ::std::string* FimdConfig::mutable_containerid() {
  
  // @@protoc_insertion_point(field_mutable:fim.FimdConfig.containerId)
  return containerid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FimdConfig::release_containerid() {
  // @@protoc_insertion_point(field_release:fim.FimdConfig.containerId)
  
  return containerid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FimdConfig::set_allocated_containerid(::std::string* containerid) {
  if (containerid != NULL) {
    
  } else {
    
  }
  containerid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), containerid);
  // @@protoc_insertion_point(field_set_allocated:fim.FimdConfig.containerId)
}

// repeated .fim.FimWatcherSubject subject = 3;
inline int FimdConfig::subject_size() const {
  return subject_.size();
}
inline void FimdConfig::clear_subject() {
  subject_.Clear();
}
inline const ::fim::FimWatcherSubject& FimdConfig::subject(int index) const {
  // @@protoc_insertion_point(field_get:fim.FimdConfig.subject)
  return subject_.Get(index);
}
inline ::fim::FimWatcherSubject* FimdConfig::mutable_subject(int index) {
  // @@protoc_insertion_point(field_mutable:fim.FimdConfig.subject)
  return subject_.Mutable(index);
}
inline ::fim::FimWatcherSubject* FimdConfig::add_subject() {
  // @@protoc_insertion_point(field_add:fim.FimdConfig.subject)
  return subject_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::fim::FimWatcherSubject >*
FimdConfig::mutable_subject() {
  // @@protoc_insertion_point(field_mutable_list:fim.FimdConfig.subject)
  return &subject_;
}
inline const ::google::protobuf::RepeatedPtrField< ::fim::FimWatcherSubject >&
FimdConfig::subject() const {
  // @@protoc_insertion_point(field_list:fim.FimdConfig.subject)
  return subject_;
}

// -------------------------------------------------------------------

// FimWatcherSubject

// repeated string path = 1;
inline int FimWatcherSubject::path_size() const {
  return path_.size();
}
inline void FimWatcherSubject::clear_path() {
  path_.Clear();
}
inline const ::std::string& FimWatcherSubject::path(int index) const {
  // @@protoc_insertion_point(field_get:fim.FimWatcherSubject.path)
  return path_.Get(index);
}
inline ::std::string* FimWatcherSubject::mutable_path(int index) {
  // @@protoc_insertion_point(field_mutable:fim.FimWatcherSubject.path)
  return path_.Mutable(index);
}
inline void FimWatcherSubject::set_path(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:fim.FimWatcherSubject.path)
  path_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void FimWatcherSubject::set_path(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:fim.FimWatcherSubject.path)
  path_.Mutable(index)->assign(std::move(value));
}
#endif
inline void FimWatcherSubject::set_path(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  path_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:fim.FimWatcherSubject.path)
}
inline void FimWatcherSubject::set_path(int index, const char* value, size_t size) {
  path_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:fim.FimWatcherSubject.path)
}
inline ::std::string* FimWatcherSubject::add_path() {
  // @@protoc_insertion_point(field_add_mutable:fim.FimWatcherSubject.path)
  return path_.Add();
}
inline void FimWatcherSubject::add_path(const ::std::string& value) {
  path_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:fim.FimWatcherSubject.path)
}
#if LANG_CXX11
inline void FimWatcherSubject::add_path(::std::string&& value) {
  path_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:fim.FimWatcherSubject.path)
}
#endif
inline void FimWatcherSubject::add_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  path_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:fim.FimWatcherSubject.path)
}
inline void FimWatcherSubject::add_path(const char* value, size_t size) {
  path_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:fim.FimWatcherSubject.path)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
FimWatcherSubject::path() const {
  // @@protoc_insertion_point(field_list:fim.FimWatcherSubject.path)
  return path_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
FimWatcherSubject::mutable_path() {
  // @@protoc_insertion_point(field_mutable_list:fim.FimWatcherSubject.path)
  return &path_;
}

// repeated string event = 2;
inline int FimWatcherSubject::event_size() const {
  return event_.size();
}
inline void FimWatcherSubject::clear_event() {
  event_.Clear();
}
inline const ::std::string& FimWatcherSubject::event(int index) const {
  // @@protoc_insertion_point(field_get:fim.FimWatcherSubject.event)
  return event_.Get(index);
}
inline ::std::string* FimWatcherSubject::mutable_event(int index) {
  // @@protoc_insertion_point(field_mutable:fim.FimWatcherSubject.event)
  return event_.Mutable(index);
}
inline void FimWatcherSubject::set_event(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:fim.FimWatcherSubject.event)
  event_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void FimWatcherSubject::set_event(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:fim.FimWatcherSubject.event)
  event_.Mutable(index)->assign(std::move(value));
}
#endif
inline void FimWatcherSubject::set_event(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  event_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:fim.FimWatcherSubject.event)
}
inline void FimWatcherSubject::set_event(int index, const char* value, size_t size) {
  event_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:fim.FimWatcherSubject.event)
}
inline ::std::string* FimWatcherSubject::add_event() {
  // @@protoc_insertion_point(field_add_mutable:fim.FimWatcherSubject.event)
  return event_.Add();
}
inline void FimWatcherSubject::add_event(const ::std::string& value) {
  event_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:fim.FimWatcherSubject.event)
}
#if LANG_CXX11
inline void FimWatcherSubject::add_event(::std::string&& value) {
  event_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:fim.FimWatcherSubject.event)
}
#endif
inline void FimWatcherSubject::add_event(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  event_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:fim.FimWatcherSubject.event)
}
inline void FimWatcherSubject::add_event(const char* value, size_t size) {
  event_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:fim.FimWatcherSubject.event)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
FimWatcherSubject::event() const {
  // @@protoc_insertion_point(field_list:fim.FimWatcherSubject.event)
  return event_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
FimWatcherSubject::mutable_event() {
  // @@protoc_insertion_point(field_mutable_list:fim.FimWatcherSubject.event)
  return &event_;
}

// -------------------------------------------------------------------

// FimdHandle

// string hostUid = 1;
inline void FimdHandle::clear_hostuid() {
  hostuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FimdHandle::hostuid() const {
  // @@protoc_insertion_point(field_get:fim.FimdHandle.hostUid)
  return hostuid_.GetNoArena();
}
inline void FimdHandle::set_hostuid(const ::std::string& value) {
  
  hostuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:fim.FimdHandle.hostUid)
}
#if LANG_CXX11
inline void FimdHandle::set_hostuid(::std::string&& value) {
  
  hostuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:fim.FimdHandle.hostUid)
}
#endif
inline void FimdHandle::set_hostuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  hostuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fim.FimdHandle.hostUid)
}
inline void FimdHandle::set_hostuid(const char* value, size_t size) {
  
  hostuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fim.FimdHandle.hostUid)
}
inline ::std::string* FimdHandle::mutable_hostuid() {
  
  // @@protoc_insertion_point(field_mutable:fim.FimdHandle.hostUid)
  return hostuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FimdHandle::release_hostuid() {
  // @@protoc_insertion_point(field_release:fim.FimdHandle.hostUid)
  
  return hostuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FimdHandle::set_allocated_hostuid(::std::string* hostuid) {
  if (hostuid != NULL) {
    
  } else {
    
  }
  hostuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hostuid);
  // @@protoc_insertion_point(field_set_allocated:fim.FimdHandle.hostUid)
}

// repeated int32 pid = 2;
inline int FimdHandle::pid_size() const {
  return pid_.size();
}
inline void FimdHandle::clear_pid() {
  pid_.Clear();
}
inline ::google::protobuf::int32 FimdHandle::pid(int index) const {
  // @@protoc_insertion_point(field_get:fim.FimdHandle.pid)
  return pid_.Get(index);
}
inline void FimdHandle::set_pid(int index, ::google::protobuf::int32 value) {
  pid_.Set(index, value);
  // @@protoc_insertion_point(field_set:fim.FimdHandle.pid)
}
inline void FimdHandle::add_pid(::google::protobuf::int32 value) {
  pid_.Add(value);
  // @@protoc_insertion_point(field_add:fim.FimdHandle.pid)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
FimdHandle::pid() const {
  // @@protoc_insertion_point(field_list:fim.FimdHandle.pid)
  return pid_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
FimdHandle::mutable_pid() {
  // @@protoc_insertion_point(field_mutable_list:fim.FimdHandle.pid)
  return &pid_;
}

// repeated int32 processEventfd = 3;
inline int FimdHandle::processeventfd_size() const {
  return processeventfd_.size();
}
inline void FimdHandle::clear_processeventfd() {
  processeventfd_.Clear();
}
inline ::google::protobuf::int32 FimdHandle::processeventfd(int index) const {
  // @@protoc_insertion_point(field_get:fim.FimdHandle.processEventfd)
  return processeventfd_.Get(index);
}
inline void FimdHandle::set_processeventfd(int index, ::google::protobuf::int32 value) {
  processeventfd_.Set(index, value);
  // @@protoc_insertion_point(field_set:fim.FimdHandle.processEventfd)
}
inline void FimdHandle::add_processeventfd(::google::protobuf::int32 value) {
  processeventfd_.Add(value);
  // @@protoc_insertion_point(field_add:fim.FimdHandle.processEventfd)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
FimdHandle::processeventfd() const {
  // @@protoc_insertion_point(field_list:fim.FimdHandle.processEventfd)
  return processeventfd_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
FimdHandle::mutable_processeventfd() {
  // @@protoc_insertion_point(field_mutable_list:fim.FimdHandle.processEventfd)
  return &processeventfd_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace fim

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_fim_2eproto__INCLUDED
