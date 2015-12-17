// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: configfile.proto

#ifndef PROTOBUF_configfile_2eproto__INCLUDED
#define PROTOBUF_configfile_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace configFile {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_configfile_2eproto();
void protobuf_AssignDesc_configfile_2eproto();
void protobuf_ShutdownFile_configfile_2eproto();

class Configuration;
class Database;
class Server;

// ===================================================================

class Database : public ::google::protobuf::Message {
 public:
  Database();
  virtual ~Database();

  Database(const Database& from);

  inline Database& operator=(const Database& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Database& default_instance();

  void Swap(Database* other);

  // implements Message ----------------------------------------------

  inline Database* New() const { return New(NULL); }

  Database* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Database& from);
  void MergeFrom(const Database& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Database* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string host = 1 [default = "localhost"];
  bool has_host() const;
  void clear_host();
  static const int kHostFieldNumber = 1;
  const ::std::string& host() const;
  void set_host(const ::std::string& value);
  void set_host(const char* value);
  void set_host(const char* value, size_t size);
  ::std::string* mutable_host();
  ::std::string* release_host();
  void set_allocated_host(::std::string* host);

  // required string database = 2 [default = "osirose"];
  bool has_database() const;
  void clear_database();
  static const int kDatabaseFieldNumber = 2;
  const ::std::string& database() const;
  void set_database(const ::std::string& value);
  void set_database(const char* value);
  void set_database(const char* value, size_t size);
  ::std::string* mutable_database();
  ::std::string* release_database();
  void set_allocated_database(::std::string* database);

  // required string user = 3 [default = "root"];
  bool has_user() const;
  void clear_user();
  static const int kUserFieldNumber = 3;
  const ::std::string& user() const;
  void set_user(const ::std::string& value);
  void set_user(const char* value);
  void set_user(const char* value, size_t size);
  ::std::string* mutable_user();
  ::std::string* release_user();
  void set_allocated_user(::std::string* user);

  // required string password = 4 [default = ""];
  bool has_password() const;
  void clear_password();
  static const int kPasswordFieldNumber = 4;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // required int32 port = 5 [default = 3306];
  bool has_port() const;
  void clear_port();
  static const int kPortFieldNumber = 5;
  ::google::protobuf::int32 port() const;
  void set_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:configFile.Database)
 private:
  inline void set_has_host();
  inline void clear_has_host();
  inline void set_has_database();
  inline void clear_has_database();
  inline void set_has_user();
  inline void clear_has_user();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_port();
  inline void clear_has_port();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  static ::std::string* _default_host_;
  ::google::protobuf::internal::ArenaStringPtr host_;
  static ::std::string* _default_database_;
  ::google::protobuf::internal::ArenaStringPtr database_;
  static ::std::string* _default_user_;
  ::google::protobuf::internal::ArenaStringPtr user_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  ::google::protobuf::int32 port_;
  friend void  protobuf_AddDesc_configfile_2eproto();
  friend void protobuf_AssignDesc_configfile_2eproto();
  friend void protobuf_ShutdownFile_configfile_2eproto();

  void InitAsDefaultInstance();
  static Database* default_instance_;
};
// -------------------------------------------------------------------

class Server : public ::google::protobuf::Message {
 public:
  Server();
  virtual ~Server();

  Server(const Server& from);

  inline Server& operator=(const Server& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Server& default_instance();

  void Swap(Server* other);

  // implements Message ----------------------------------------------

  inline Server* New() const { return New(NULL); }

  Server* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Server& from);
  void MergeFrom(const Server& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Server* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 id = 1 [default = 0];
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // required string ip = 2 [default = "127.0.0.1"];
  bool has_ip() const;
  void clear_ip();
  static const int kIpFieldNumber = 2;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  void set_ip(const char* value);
  void set_ip(const char* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // required int32 accessLevel = 3 [default = 100];
  bool has_accesslevel() const;
  void clear_accesslevel();
  static const int kAccessLevelFieldNumber = 3;
  ::google::protobuf::int32 accesslevel() const;
  void set_accesslevel(::google::protobuf::int32 value);

  // required int32 parentId = 4 [default = 0];
  bool has_parentid() const;
  void clear_parentid();
  static const int kParentIdFieldNumber = 4;
  ::google::protobuf::int32 parentid() const;
  void set_parentid(::google::protobuf::int32 value);

  // required int32 maxConnections = 5 [default = 100];
  bool has_maxconnections() const;
  void clear_maxconnections();
  static const int kMaxConnectionsFieldNumber = 5;
  ::google::protobuf::int32 maxconnections() const;
  void set_maxconnections(::google::protobuf::int32 value);

  // required bool useThreads = 6 [default = false];
  bool has_usethreads() const;
  void clear_usethreads();
  static const int kUseThreadsFieldNumber = 6;
  bool usethreads() const;
  void set_usethreads(bool value);

  // required int32 mode = 7 [default = 0];
  bool has_mode() const;
  void clear_mode();
  static const int kModeFieldNumber = 7;
  ::google::protobuf::int32 mode() const;
  void set_mode(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:configFile.Server)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_ip();
  inline void clear_has_ip();
  inline void set_has_accesslevel();
  inline void clear_has_accesslevel();
  inline void set_has_parentid();
  inline void clear_has_parentid();
  inline void set_has_maxconnections();
  inline void clear_has_maxconnections();
  inline void set_has_usethreads();
  inline void clear_has_usethreads();
  inline void set_has_mode();
  inline void clear_has_mode();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  static ::std::string* _default_ip_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 accesslevel_;
  ::google::protobuf::int32 parentid_;
  ::google::protobuf::int32 maxconnections_;
  bool usethreads_;
  ::google::protobuf::int32 mode_;
  friend void  protobuf_AddDesc_configfile_2eproto();
  friend void protobuf_AssignDesc_configfile_2eproto();
  friend void protobuf_ShutdownFile_configfile_2eproto();

  void InitAsDefaultInstance();
  static Server* default_instance_;
};
// -------------------------------------------------------------------

class Configuration : public ::google::protobuf::Message {
 public:
  Configuration();
  virtual ~Configuration();

  Configuration(const Configuration& from);

  inline Configuration& operator=(const Configuration& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Configuration& default_instance();

  void Swap(Configuration* other);

  // implements Message ----------------------------------------------

  inline Configuration* New() const { return New(NULL); }

  Configuration* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Configuration& from);
  void MergeFrom(const Configuration& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Configuration* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .configFile.Database database = 1;
  bool has_database() const;
  void clear_database();
  static const int kDatabaseFieldNumber = 1;
  const ::configFile::Database& database() const;
  ::configFile::Database* mutable_database();
  ::configFile::Database* release_database();
  void set_allocated_database(::configFile::Database* database);

  // required .configFile.Server serverdata = 2;
  bool has_serverdata() const;
  void clear_serverdata();
  static const int kServerdataFieldNumber = 2;
  const ::configFile::Server& serverdata() const;
  ::configFile::Server* mutable_serverdata();
  ::configFile::Server* release_serverdata();
  void set_allocated_serverdata(::configFile::Server* serverdata);

  // @@protoc_insertion_point(class_scope:configFile.Configuration)
 private:
  inline void set_has_database();
  inline void clear_has_database();
  inline void set_has_serverdata();
  inline void clear_has_serverdata();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::configFile::Database* database_;
  ::configFile::Server* serverdata_;
  friend void  protobuf_AddDesc_configfile_2eproto();
  friend void protobuf_AssignDesc_configfile_2eproto();
  friend void protobuf_ShutdownFile_configfile_2eproto();

  void InitAsDefaultInstance();
  static Configuration* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Database

// required string host = 1 [default = "localhost"];
inline bool Database::has_host() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Database::set_has_host() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Database::clear_has_host() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Database::clear_host() {
  host_.ClearToDefaultNoArena(_default_host_);
  clear_has_host();
}
inline const ::std::string& Database::host() const {
  // @@protoc_insertion_point(field_get:configFile.Database.host)
  return host_.GetNoArena(_default_host_);
}
inline void Database::set_host(const ::std::string& value) {
  set_has_host();
  host_.SetNoArena(_default_host_, value);
  // @@protoc_insertion_point(field_set:configFile.Database.host)
}
inline void Database::set_host(const char* value) {
  set_has_host();
  host_.SetNoArena(_default_host_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:configFile.Database.host)
}
inline void Database::set_host(const char* value, size_t size) {
  set_has_host();
  host_.SetNoArena(_default_host_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:configFile.Database.host)
}
inline ::std::string* Database::mutable_host() {
  set_has_host();
  // @@protoc_insertion_point(field_mutable:configFile.Database.host)
  return host_.MutableNoArena(_default_host_);
}
inline ::std::string* Database::release_host() {
  clear_has_host();
  return host_.ReleaseNoArena(_default_host_);
}
inline void Database::set_allocated_host(::std::string* host) {
  if (host != NULL) {
    set_has_host();
  } else {
    clear_has_host();
  }
  host_.SetAllocatedNoArena(_default_host_, host);
  // @@protoc_insertion_point(field_set_allocated:configFile.Database.host)
}

// required string database = 2 [default = "osirose"];
inline bool Database::has_database() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Database::set_has_database() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Database::clear_has_database() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Database::clear_database() {
  database_.ClearToDefaultNoArena(_default_database_);
  clear_has_database();
}
inline const ::std::string& Database::database() const {
  // @@protoc_insertion_point(field_get:configFile.Database.database)
  return database_.GetNoArena(_default_database_);
}
inline void Database::set_database(const ::std::string& value) {
  set_has_database();
  database_.SetNoArena(_default_database_, value);
  // @@protoc_insertion_point(field_set:configFile.Database.database)
}
inline void Database::set_database(const char* value) {
  set_has_database();
  database_.SetNoArena(_default_database_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:configFile.Database.database)
}
inline void Database::set_database(const char* value, size_t size) {
  set_has_database();
  database_.SetNoArena(_default_database_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:configFile.Database.database)
}
inline ::std::string* Database::mutable_database() {
  set_has_database();
  // @@protoc_insertion_point(field_mutable:configFile.Database.database)
  return database_.MutableNoArena(_default_database_);
}
inline ::std::string* Database::release_database() {
  clear_has_database();
  return database_.ReleaseNoArena(_default_database_);
}
inline void Database::set_allocated_database(::std::string* database) {
  if (database != NULL) {
    set_has_database();
  } else {
    clear_has_database();
  }
  database_.SetAllocatedNoArena(_default_database_, database);
  // @@protoc_insertion_point(field_set_allocated:configFile.Database.database)
}

// required string user = 3 [default = "root"];
inline bool Database::has_user() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Database::set_has_user() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Database::clear_has_user() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Database::clear_user() {
  user_.ClearToDefaultNoArena(_default_user_);
  clear_has_user();
}
inline const ::std::string& Database::user() const {
  // @@protoc_insertion_point(field_get:configFile.Database.user)
  return user_.GetNoArena(_default_user_);
}
inline void Database::set_user(const ::std::string& value) {
  set_has_user();
  user_.SetNoArena(_default_user_, value);
  // @@protoc_insertion_point(field_set:configFile.Database.user)
}
inline void Database::set_user(const char* value) {
  set_has_user();
  user_.SetNoArena(_default_user_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:configFile.Database.user)
}
inline void Database::set_user(const char* value, size_t size) {
  set_has_user();
  user_.SetNoArena(_default_user_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:configFile.Database.user)
}
inline ::std::string* Database::mutable_user() {
  set_has_user();
  // @@protoc_insertion_point(field_mutable:configFile.Database.user)
  return user_.MutableNoArena(_default_user_);
}
inline ::std::string* Database::release_user() {
  clear_has_user();
  return user_.ReleaseNoArena(_default_user_);
}
inline void Database::set_allocated_user(::std::string* user) {
  if (user != NULL) {
    set_has_user();
  } else {
    clear_has_user();
  }
  user_.SetAllocatedNoArena(_default_user_, user);
  // @@protoc_insertion_point(field_set_allocated:configFile.Database.user)
}

// required string password = 4 [default = ""];
inline bool Database::has_password() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Database::set_has_password() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Database::clear_has_password() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Database::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_password();
}
inline const ::std::string& Database::password() const {
  // @@protoc_insertion_point(field_get:configFile.Database.password)
  return password_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Database::set_password(const ::std::string& value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:configFile.Database.password)
}
inline void Database::set_password(const char* value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:configFile.Database.password)
}
inline void Database::set_password(const char* value, size_t size) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:configFile.Database.password)
}
inline ::std::string* Database::mutable_password() {
  set_has_password();
  // @@protoc_insertion_point(field_mutable:configFile.Database.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Database::release_password() {
  clear_has_password();
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Database::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    set_has_password();
  } else {
    clear_has_password();
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:configFile.Database.password)
}

// required int32 port = 5 [default = 3306];
inline bool Database::has_port() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Database::set_has_port() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Database::clear_has_port() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Database::clear_port() {
  port_ = 3306;
  clear_has_port();
}
inline ::google::protobuf::int32 Database::port() const {
  // @@protoc_insertion_point(field_get:configFile.Database.port)
  return port_;
}
inline void Database::set_port(::google::protobuf::int32 value) {
  set_has_port();
  port_ = value;
  // @@protoc_insertion_point(field_set:configFile.Database.port)
}

// -------------------------------------------------------------------

// Server

// required int32 id = 1 [default = 0];
inline bool Server::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Server::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Server::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Server::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Server::id() const {
  // @@protoc_insertion_point(field_get:configFile.Server.id)
  return id_;
}
inline void Server::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:configFile.Server.id)
}

// required string ip = 2 [default = "127.0.0.1"];
inline bool Server::has_ip() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Server::set_has_ip() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Server::clear_has_ip() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Server::clear_ip() {
  ip_.ClearToDefaultNoArena(_default_ip_);
  clear_has_ip();
}
inline const ::std::string& Server::ip() const {
  // @@protoc_insertion_point(field_get:configFile.Server.ip)
  return ip_.GetNoArena(_default_ip_);
}
inline void Server::set_ip(const ::std::string& value) {
  set_has_ip();
  ip_.SetNoArena(_default_ip_, value);
  // @@protoc_insertion_point(field_set:configFile.Server.ip)
}
inline void Server::set_ip(const char* value) {
  set_has_ip();
  ip_.SetNoArena(_default_ip_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:configFile.Server.ip)
}
inline void Server::set_ip(const char* value, size_t size) {
  set_has_ip();
  ip_.SetNoArena(_default_ip_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:configFile.Server.ip)
}
inline ::std::string* Server::mutable_ip() {
  set_has_ip();
  // @@protoc_insertion_point(field_mutable:configFile.Server.ip)
  return ip_.MutableNoArena(_default_ip_);
}
inline ::std::string* Server::release_ip() {
  clear_has_ip();
  return ip_.ReleaseNoArena(_default_ip_);
}
inline void Server::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    set_has_ip();
  } else {
    clear_has_ip();
  }
  ip_.SetAllocatedNoArena(_default_ip_, ip);
  // @@protoc_insertion_point(field_set_allocated:configFile.Server.ip)
}

// required int32 accessLevel = 3 [default = 100];
inline bool Server::has_accesslevel() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Server::set_has_accesslevel() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Server::clear_has_accesslevel() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Server::clear_accesslevel() {
  accesslevel_ = 100;
  clear_has_accesslevel();
}
inline ::google::protobuf::int32 Server::accesslevel() const {
  // @@protoc_insertion_point(field_get:configFile.Server.accessLevel)
  return accesslevel_;
}
inline void Server::set_accesslevel(::google::protobuf::int32 value) {
  set_has_accesslevel();
  accesslevel_ = value;
  // @@protoc_insertion_point(field_set:configFile.Server.accessLevel)
}

// required int32 parentId = 4 [default = 0];
inline bool Server::has_parentid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Server::set_has_parentid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Server::clear_has_parentid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Server::clear_parentid() {
  parentid_ = 0;
  clear_has_parentid();
}
inline ::google::protobuf::int32 Server::parentid() const {
  // @@protoc_insertion_point(field_get:configFile.Server.parentId)
  return parentid_;
}
inline void Server::set_parentid(::google::protobuf::int32 value) {
  set_has_parentid();
  parentid_ = value;
  // @@protoc_insertion_point(field_set:configFile.Server.parentId)
}

// required int32 maxConnections = 5 [default = 100];
inline bool Server::has_maxconnections() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Server::set_has_maxconnections() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Server::clear_has_maxconnections() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Server::clear_maxconnections() {
  maxconnections_ = 100;
  clear_has_maxconnections();
}
inline ::google::protobuf::int32 Server::maxconnections() const {
  // @@protoc_insertion_point(field_get:configFile.Server.maxConnections)
  return maxconnections_;
}
inline void Server::set_maxconnections(::google::protobuf::int32 value) {
  set_has_maxconnections();
  maxconnections_ = value;
  // @@protoc_insertion_point(field_set:configFile.Server.maxConnections)
}

// required bool useThreads = 6 [default = false];
inline bool Server::has_usethreads() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Server::set_has_usethreads() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Server::clear_has_usethreads() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Server::clear_usethreads() {
  usethreads_ = false;
  clear_has_usethreads();
}
inline bool Server::usethreads() const {
  // @@protoc_insertion_point(field_get:configFile.Server.useThreads)
  return usethreads_;
}
inline void Server::set_usethreads(bool value) {
  set_has_usethreads();
  usethreads_ = value;
  // @@protoc_insertion_point(field_set:configFile.Server.useThreads)
}

// required int32 mode = 7 [default = 0];
inline bool Server::has_mode() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Server::set_has_mode() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Server::clear_has_mode() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Server::clear_mode() {
  mode_ = 0;
  clear_has_mode();
}
inline ::google::protobuf::int32 Server::mode() const {
  // @@protoc_insertion_point(field_get:configFile.Server.mode)
  return mode_;
}
inline void Server::set_mode(::google::protobuf::int32 value) {
  set_has_mode();
  mode_ = value;
  // @@protoc_insertion_point(field_set:configFile.Server.mode)
}

// -------------------------------------------------------------------

// Configuration

// required .configFile.Database database = 1;
inline bool Configuration::has_database() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Configuration::set_has_database() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Configuration::clear_has_database() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Configuration::clear_database() {
  if (database_ != NULL) database_->::configFile::Database::Clear();
  clear_has_database();
}
inline const ::configFile::Database& Configuration::database() const {
  // @@protoc_insertion_point(field_get:configFile.Configuration.database)
  return database_ != NULL ? *database_ : *default_instance_->database_;
}
inline ::configFile::Database* Configuration::mutable_database() {
  set_has_database();
  if (database_ == NULL) {
    database_ = new ::configFile::Database;
  }
  // @@protoc_insertion_point(field_mutable:configFile.Configuration.database)
  return database_;
}
inline ::configFile::Database* Configuration::release_database() {
  clear_has_database();
  ::configFile::Database* temp = database_;
  database_ = NULL;
  return temp;
}
inline void Configuration::set_allocated_database(::configFile::Database* database) {
  delete database_;
  database_ = database;
  if (database) {
    set_has_database();
  } else {
    clear_has_database();
  }
  // @@protoc_insertion_point(field_set_allocated:configFile.Configuration.database)
}

// required .configFile.Server serverdata = 2;
inline bool Configuration::has_serverdata() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Configuration::set_has_serverdata() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Configuration::clear_has_serverdata() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Configuration::clear_serverdata() {
  if (serverdata_ != NULL) serverdata_->::configFile::Server::Clear();
  clear_has_serverdata();
}
inline const ::configFile::Server& Configuration::serverdata() const {
  // @@protoc_insertion_point(field_get:configFile.Configuration.serverdata)
  return serverdata_ != NULL ? *serverdata_ : *default_instance_->serverdata_;
}
inline ::configFile::Server* Configuration::mutable_serverdata() {
  set_has_serverdata();
  if (serverdata_ == NULL) {
    serverdata_ = new ::configFile::Server;
  }
  // @@protoc_insertion_point(field_mutable:configFile.Configuration.serverdata)
  return serverdata_;
}
inline ::configFile::Server* Configuration::release_serverdata() {
  clear_has_serverdata();
  ::configFile::Server* temp = serverdata_;
  serverdata_ = NULL;
  return temp;
}
inline void Configuration::set_allocated_serverdata(::configFile::Server* serverdata) {
  delete serverdata_;
  serverdata_ = serverdata;
  if (serverdata) {
    set_has_serverdata();
  } else {
    clear_has_serverdata();
  }
  // @@protoc_insertion_point(field_set_allocated:configFile.Configuration.serverdata)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace configFile

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_configfile_2eproto__INCLUDED
