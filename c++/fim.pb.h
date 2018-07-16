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

  // repeated .fim.FimWatcherSubject subjects = 2;
  int subjects_size() const;
  void clear_subjects();
  static const int kSubjectsFieldNumber = 2;
  const ::fim::FimWatcherSubject& subjects(int index) const;
  ::fim::FimWatcherSubject* mutable_subjects(int index);
  ::fim::FimWatcherSubject* add_subjects();
  ::google::protobuf::RepeatedPtrField< ::fim::FimWatcherSubject >*
      mutable_subjects();
  const ::google::protobuf::RepeatedPtrField< ::fim::FimWatcherSubject >&
      subjects() const;

  // string containerId = 1;
  void clear_containerid();
  static const int kContainerIdFieldNumber = 1;
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
  ::google::protobuf::RepeatedPtrField< ::fim::FimWatcherSubject > subjects_;
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

  // repeated string paths = 1;
  int paths_size() const;
  void clear_paths();
  static const int kPathsFieldNumber = 1;
  const ::std::string& paths(int index) const;
  ::std::string* mutable_paths(int index);
  void set_paths(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_paths(int index, ::std::string&& value);
  #endif
  void set_paths(int index, const char* value);
  void set_paths(int index, const char* value, size_t size);
  ::std::string* add_paths();
  void add_paths(const ::std::string& value);
  #if LANG_CXX11
  void add_paths(::std::string&& value);
  #endif
  void add_paths(const char* value);
  void add_paths(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& paths() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_paths();

  // repeated string events = 2;
  int events_size() const;
  void clear_events();
  static const int kEventsFieldNumber = 2;
  const ::std::string& events(int index) const;
  ::std::string* mutable_events(int index);
  void set_events(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_events(int index, ::std::string&& value);
  #endif
  void set_events(int index, const char* value);
  void set_events(int index, const char* value, size_t size);
  ::std::string* add_events();
  void add_events(const ::std::string& value);
  #if LANG_CXX11
  void add_events(::std::string&& value);
  #endif
  void add_events(const char* value);
  void add_events(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& events() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_events();

  // @@protoc_insertion_point(class_scope:fim.FimWatcherSubject)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> paths_;
  ::google::protobuf::RepeatedPtrField< ::std::string> events_;
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

  // repeated int32 pids = 2;
  int pids_size() const;
  void clear_pids();
  static const int kPidsFieldNumber = 2;
  ::google::protobuf::int32 pids(int index) const;
  void set_pids(int index, ::google::protobuf::int32 value);
  void add_pids(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      pids() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_pids();

  // repeated int32 processEventfds = 3;
  int processeventfds_size() const;
  void clear_processeventfds();
  static const int kProcessEventfdsFieldNumber = 3;
  ::google::protobuf::int32 processeventfds(int index) const;
  void set_processeventfds(int index, ::google::protobuf::int32 value);
  void add_processeventfds(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      processeventfds() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_processeventfds();

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
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > pids_;
  mutable int _pids_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > processeventfds_;
  mutable int _processeventfds_cached_byte_size_;
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

// string containerId = 1;
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

// repeated .fim.FimWatcherSubject subjects = 2;
inline int FimdConfig::subjects_size() const {
  return subjects_.size();
}
inline void FimdConfig::clear_subjects() {
  subjects_.Clear();
}
inline const ::fim::FimWatcherSubject& FimdConfig::subjects(int index) const {
  // @@protoc_insertion_point(field_get:fim.FimdConfig.subjects)
  return subjects_.Get(index);
}
inline ::fim::FimWatcherSubject* FimdConfig::mutable_subjects(int index) {
  // @@protoc_insertion_point(field_mutable:fim.FimdConfig.subjects)
  return subjects_.Mutable(index);
}
inline ::fim::FimWatcherSubject* FimdConfig::add_subjects() {
  // @@protoc_insertion_point(field_add:fim.FimdConfig.subjects)
  return subjects_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::fim::FimWatcherSubject >*
FimdConfig::mutable_subjects() {
  // @@protoc_insertion_point(field_mutable_list:fim.FimdConfig.subjects)
  return &subjects_;
}
inline const ::google::protobuf::RepeatedPtrField< ::fim::FimWatcherSubject >&
FimdConfig::subjects() const {
  // @@protoc_insertion_point(field_list:fim.FimdConfig.subjects)
  return subjects_;
}

// -------------------------------------------------------------------

// FimWatcherSubject

// repeated string paths = 1;
inline int FimWatcherSubject::paths_size() const {
  return paths_.size();
}
inline void FimWatcherSubject::clear_paths() {
  paths_.Clear();
}
inline const ::std::string& FimWatcherSubject::paths(int index) const {
  // @@protoc_insertion_point(field_get:fim.FimWatcherSubject.paths)
  return paths_.Get(index);
}
inline ::std::string* FimWatcherSubject::mutable_paths(int index) {
  // @@protoc_insertion_point(field_mutable:fim.FimWatcherSubject.paths)
  return paths_.Mutable(index);
}
inline void FimWatcherSubject::set_paths(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:fim.FimWatcherSubject.paths)
  paths_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void FimWatcherSubject::set_paths(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:fim.FimWatcherSubject.paths)
  paths_.Mutable(index)->assign(std::move(value));
}
#endif
inline void FimWatcherSubject::set_paths(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  paths_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:fim.FimWatcherSubject.paths)
}
inline void FimWatcherSubject::set_paths(int index, const char* value, size_t size) {
  paths_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:fim.FimWatcherSubject.paths)
}
inline ::std::string* FimWatcherSubject::add_paths() {
  // @@protoc_insertion_point(field_add_mutable:fim.FimWatcherSubject.paths)
  return paths_.Add();
}
inline void FimWatcherSubject::add_paths(const ::std::string& value) {
  paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:fim.FimWatcherSubject.paths)
}
#if LANG_CXX11
inline void FimWatcherSubject::add_paths(::std::string&& value) {
  paths_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:fim.FimWatcherSubject.paths)
}
#endif
inline void FimWatcherSubject::add_paths(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:fim.FimWatcherSubject.paths)
}
inline void FimWatcherSubject::add_paths(const char* value, size_t size) {
  paths_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:fim.FimWatcherSubject.paths)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
FimWatcherSubject::paths() const {
  // @@protoc_insertion_point(field_list:fim.FimWatcherSubject.paths)
  return paths_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
FimWatcherSubject::mutable_paths() {
  // @@protoc_insertion_point(field_mutable_list:fim.FimWatcherSubject.paths)
  return &paths_;
}

// repeated string events = 2;
inline int FimWatcherSubject::events_size() const {
  return events_.size();
}
inline void FimWatcherSubject::clear_events() {
  events_.Clear();
}
inline const ::std::string& FimWatcherSubject::events(int index) const {
  // @@protoc_insertion_point(field_get:fim.FimWatcherSubject.events)
  return events_.Get(index);
}
inline ::std::string* FimWatcherSubject::mutable_events(int index) {
  // @@protoc_insertion_point(field_mutable:fim.FimWatcherSubject.events)
  return events_.Mutable(index);
}
inline void FimWatcherSubject::set_events(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:fim.FimWatcherSubject.events)
  events_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void FimWatcherSubject::set_events(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:fim.FimWatcherSubject.events)
  events_.Mutable(index)->assign(std::move(value));
}
#endif
inline void FimWatcherSubject::set_events(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  events_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:fim.FimWatcherSubject.events)
}
inline void FimWatcherSubject::set_events(int index, const char* value, size_t size) {
  events_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:fim.FimWatcherSubject.events)
}
inline ::std::string* FimWatcherSubject::add_events() {
  // @@protoc_insertion_point(field_add_mutable:fim.FimWatcherSubject.events)
  return events_.Add();
}
inline void FimWatcherSubject::add_events(const ::std::string& value) {
  events_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:fim.FimWatcherSubject.events)
}
#if LANG_CXX11
inline void FimWatcherSubject::add_events(::std::string&& value) {
  events_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:fim.FimWatcherSubject.events)
}
#endif
inline void FimWatcherSubject::add_events(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  events_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:fim.FimWatcherSubject.events)
}
inline void FimWatcherSubject::add_events(const char* value, size_t size) {
  events_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:fim.FimWatcherSubject.events)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
FimWatcherSubject::events() const {
  // @@protoc_insertion_point(field_list:fim.FimWatcherSubject.events)
  return events_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
FimWatcherSubject::mutable_events() {
  // @@protoc_insertion_point(field_mutable_list:fim.FimWatcherSubject.events)
  return &events_;
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

// repeated int32 pids = 2;
inline int FimdHandle::pids_size() const {
  return pids_.size();
}
inline void FimdHandle::clear_pids() {
  pids_.Clear();
}
inline ::google::protobuf::int32 FimdHandle::pids(int index) const {
  // @@protoc_insertion_point(field_get:fim.FimdHandle.pids)
  return pids_.Get(index);
}
inline void FimdHandle::set_pids(int index, ::google::protobuf::int32 value) {
  pids_.Set(index, value);
  // @@protoc_insertion_point(field_set:fim.FimdHandle.pids)
}
inline void FimdHandle::add_pids(::google::protobuf::int32 value) {
  pids_.Add(value);
  // @@protoc_insertion_point(field_add:fim.FimdHandle.pids)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
FimdHandle::pids() const {
  // @@protoc_insertion_point(field_list:fim.FimdHandle.pids)
  return pids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
FimdHandle::mutable_pids() {
  // @@protoc_insertion_point(field_mutable_list:fim.FimdHandle.pids)
  return &pids_;
}

// repeated int32 processEventfds = 3;
inline int FimdHandle::processeventfds_size() const {
  return processeventfds_.size();
}
inline void FimdHandle::clear_processeventfds() {
  processeventfds_.Clear();
}
inline ::google::protobuf::int32 FimdHandle::processeventfds(int index) const {
  // @@protoc_insertion_point(field_get:fim.FimdHandle.processEventfds)
  return processeventfds_.Get(index);
}
inline void FimdHandle::set_processeventfds(int index, ::google::protobuf::int32 value) {
  processeventfds_.Set(index, value);
  // @@protoc_insertion_point(field_set:fim.FimdHandle.processEventfds)
}
inline void FimdHandle::add_processeventfds(::google::protobuf::int32 value) {
  processeventfds_.Add(value);
  // @@protoc_insertion_point(field_add:fim.FimdHandle.processEventfds)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
FimdHandle::processeventfds() const {
  // @@protoc_insertion_point(field_list:fim.FimdHandle.processEventfds)
  return processeventfds_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
FimdHandle::mutable_processeventfds() {
  // @@protoc_insertion_point(field_mutable_list:fim.FimdHandle.processEventfds)
  return &processeventfds_;
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
