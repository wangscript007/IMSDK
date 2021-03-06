// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: youme_weixin_access_token.proto

#ifndef PROTOBUF_youme_5fweixin_5faccess_5ftoken_2eproto__INCLUDED
#define PROTOBUF_youme_5fweixin_5faccess_5ftoken_2eproto__INCLUDED

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace YOUMEServiceProtocol {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_youme_5fweixin_5faccess_5ftoken_2eproto();
void protobuf_AssignDesc_youme_5fweixin_5faccess_5ftoken_2eproto();
void protobuf_ShutdownFile_youme_5fweixin_5faccess_5ftoken_2eproto();

class GetWeiXinAccessTokenReq;
class GetWeiXinAccessTokenRsp;

// ===================================================================

class GetWeiXinAccessTokenReq : public ::youmecommon::protobuf::MessageLite {
 public:
  GetWeiXinAccessTokenReq();
  virtual ~GetWeiXinAccessTokenReq();

  GetWeiXinAccessTokenReq(const GetWeiXinAccessTokenReq& from);

  inline GetWeiXinAccessTokenReq& operator=(const GetWeiXinAccessTokenReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const GetWeiXinAccessTokenReq& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetWeiXinAccessTokenReq* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetWeiXinAccessTokenReq* other);

  // implements Message ----------------------------------------------

  inline GetWeiXinAccessTokenReq* New() const { return New(NULL); }

  GetWeiXinAccessTokenReq* New(::youmecommon::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::youmecommon::protobuf::MessageLite& from);
  void CopyFrom(const GetWeiXinAccessTokenReq& from);
  void MergeFrom(const GetWeiXinAccessTokenReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::youmecommon::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::youmecommon::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GetWeiXinAccessTokenReq* other);
  private:
  inline ::youmecommon::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::youmecommon::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::youmecommon::protobuf::int32 version() const;
  void set_version(::youmecommon::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:YOUMEServiceProtocol.GetWeiXinAccessTokenReq)
 private:
  inline void set_has_version();
  inline void clear_has_version();

  ::youmecommon::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::youmecommon::protobuf::Arena* _arena_ptr_;

  ::youmecommon::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::youmecommon::protobuf::int32 version_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_youme_5fweixin_5faccess_5ftoken_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_youme_5fweixin_5faccess_5ftoken_2eproto();
  #endif
  friend void protobuf_AssignDesc_youme_5fweixin_5faccess_5ftoken_2eproto();
  friend void protobuf_ShutdownFile_youme_5fweixin_5faccess_5ftoken_2eproto();

  void InitAsDefaultInstance();
  static GetWeiXinAccessTokenReq* default_instance_;
};
// -------------------------------------------------------------------

class GetWeiXinAccessTokenRsp : public ::youmecommon::protobuf::MessageLite {
 public:
  GetWeiXinAccessTokenRsp();
  virtual ~GetWeiXinAccessTokenRsp();

  GetWeiXinAccessTokenRsp(const GetWeiXinAccessTokenRsp& from);

  inline GetWeiXinAccessTokenRsp& operator=(const GetWeiXinAccessTokenRsp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const GetWeiXinAccessTokenRsp& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetWeiXinAccessTokenRsp* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetWeiXinAccessTokenRsp* other);

  // implements Message ----------------------------------------------

  inline GetWeiXinAccessTokenRsp* New() const { return New(NULL); }

  GetWeiXinAccessTokenRsp* New(::youmecommon::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::youmecommon::protobuf::MessageLite& from);
  void CopyFrom(const GetWeiXinAccessTokenRsp& from);
  void MergeFrom(const GetWeiXinAccessTokenRsp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::youmecommon::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::youmecommon::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GetWeiXinAccessTokenRsp* other);
  private:
  inline ::youmecommon::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::youmecommon::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::youmecommon::protobuf::int32 version() const;
  void set_version(::youmecommon::protobuf::int32 value);

  // required int32 ret = 2;
  bool has_ret() const;
  void clear_ret();
  static const int kRetFieldNumber = 2;
  ::youmecommon::protobuf::int32 ret() const;
  void set_ret(::youmecommon::protobuf::int32 value);

  // required string token = 3;
  bool has_token() const;
  void clear_token();
  static const int kTokenFieldNumber = 3;
  const ::std::string& token() const;
  void set_token(const ::std::string& value);
  void set_token(const char* value);
  void set_token(const char* value, size_t size);
  ::std::string* mutable_token();
  ::std::string* release_token();
  void set_allocated_token(::std::string* token);

  // required uint64 token_seq = 4;
  bool has_token_seq() const;
  void clear_token_seq();
  static const int kTokenSeqFieldNumber = 4;
  ::youmecommon::protobuf::uint64 token_seq() const;
  void set_token_seq(::youmecommon::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp)
 private:
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_ret();
  inline void clear_has_ret();
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_token_seq();
  inline void clear_has_token_seq();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::youmecommon::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::youmecommon::protobuf::Arena* _arena_ptr_;

  ::youmecommon::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::youmecommon::protobuf::int32 version_;
  ::youmecommon::protobuf::int32 ret_;
  ::youmecommon::protobuf::internal::ArenaStringPtr token_;
  ::youmecommon::protobuf::uint64 token_seq_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_youme_5fweixin_5faccess_5ftoken_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_youme_5fweixin_5faccess_5ftoken_2eproto();
  #endif
  friend void protobuf_AssignDesc_youme_5fweixin_5faccess_5ftoken_2eproto();
  friend void protobuf_ShutdownFile_youme_5fweixin_5faccess_5ftoken_2eproto();

  void InitAsDefaultInstance();
  static GetWeiXinAccessTokenRsp* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GetWeiXinAccessTokenReq

// required int32 version = 1;
inline bool GetWeiXinAccessTokenReq::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetWeiXinAccessTokenReq::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetWeiXinAccessTokenReq::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetWeiXinAccessTokenReq::clear_version() {
  version_ = 0;
  clear_has_version();
}
inline ::youmecommon::protobuf::int32 GetWeiXinAccessTokenReq::version() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.GetWeiXinAccessTokenReq.version)
  return version_;
}
inline void GetWeiXinAccessTokenReq::set_version(::youmecommon::protobuf::int32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.GetWeiXinAccessTokenReq.version)
}

// -------------------------------------------------------------------

// GetWeiXinAccessTokenRsp

// required int32 version = 1;
inline bool GetWeiXinAccessTokenRsp::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetWeiXinAccessTokenRsp::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetWeiXinAccessTokenRsp::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetWeiXinAccessTokenRsp::clear_version() {
  version_ = 0;
  clear_has_version();
}
inline ::youmecommon::protobuf::int32 GetWeiXinAccessTokenRsp::version() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.version)
  return version_;
}
inline void GetWeiXinAccessTokenRsp::set_version(::youmecommon::protobuf::int32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.version)
}

// required int32 ret = 2;
inline bool GetWeiXinAccessTokenRsp::has_ret() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetWeiXinAccessTokenRsp::set_has_ret() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetWeiXinAccessTokenRsp::clear_has_ret() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetWeiXinAccessTokenRsp::clear_ret() {
  ret_ = 0;
  clear_has_ret();
}
inline ::youmecommon::protobuf::int32 GetWeiXinAccessTokenRsp::ret() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.ret)
  return ret_;
}
inline void GetWeiXinAccessTokenRsp::set_ret(::youmecommon::protobuf::int32 value) {
  set_has_ret();
  ret_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.ret)
}

// required string token = 3;
inline bool GetWeiXinAccessTokenRsp::has_token() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetWeiXinAccessTokenRsp::set_has_token() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetWeiXinAccessTokenRsp::clear_has_token() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetWeiXinAccessTokenRsp::clear_token() {
  token_.ClearToEmptyNoArena(&::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_token();
}
inline const ::std::string& GetWeiXinAccessTokenRsp::token() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.token)
  return token_.GetNoArena(&::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetWeiXinAccessTokenRsp::set_token(const ::std::string& value) {
  set_has_token();
  token_.SetNoArena(&::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.token)
}
inline void GetWeiXinAccessTokenRsp::set_token(const char* value) {
  set_has_token();
  token_.SetNoArena(&::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.token)
}
inline void GetWeiXinAccessTokenRsp::set_token(const char* value, size_t size) {
  set_has_token();
  token_.SetNoArena(&::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.token)
}
inline ::std::string* GetWeiXinAccessTokenRsp::mutable_token() {
  set_has_token();
  // @@protoc_insertion_point(field_mutable:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.token)
  return token_.MutableNoArena(&::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetWeiXinAccessTokenRsp::release_token() {
  clear_has_token();
  return token_.ReleaseNoArena(&::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetWeiXinAccessTokenRsp::set_allocated_token(::std::string* token) {
  if (token != NULL) {
    set_has_token();
  } else {
    clear_has_token();
  }
  token_.SetAllocatedNoArena(&::youmecommon::protobuf::internal::GetEmptyStringAlreadyInited(), token);
  // @@protoc_insertion_point(field_set_allocated:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.token)
}

// required uint64 token_seq = 4;
inline bool GetWeiXinAccessTokenRsp::has_token_seq() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void GetWeiXinAccessTokenRsp::set_has_token_seq() {
  _has_bits_[0] |= 0x00000008u;
}
inline void GetWeiXinAccessTokenRsp::clear_has_token_seq() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void GetWeiXinAccessTokenRsp::clear_token_seq() {
  token_seq_ = GOOGLE_ULONGLONG(0);
  clear_has_token_seq();
}
inline ::youmecommon::protobuf::uint64 GetWeiXinAccessTokenRsp::token_seq() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.token_seq)
  return token_seq_;
}
inline void GetWeiXinAccessTokenRsp::set_token_seq(::youmecommon::protobuf::uint64 value) {
  set_has_token_seq();
  token_seq_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.GetWeiXinAccessTokenRsp.token_seq)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace YOUMEServiceProtocol

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_youme_5fweixin_5faccess_5ftoken_2eproto__INCLUDED
