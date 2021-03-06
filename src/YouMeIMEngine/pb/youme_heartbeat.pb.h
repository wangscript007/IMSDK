// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: youme_heartbeat.proto

#ifndef PROTOBUF_youme_5fheartbeat_2eproto__INCLUDED
#define PROTOBUF_youme_5fheartbeat_2eproto__INCLUDED

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
void protobuf_AddDesc_youme_5fheartbeat_2eproto();
void protobuf_AssignDesc_youme_5fheartbeat_2eproto();
void protobuf_ShutdownFile_youme_5fheartbeat_2eproto();

class HeartbeatReq;
class HeartbeatRsp;

// ===================================================================

class HeartbeatReq : public youmecommon::protobuf::MessageLite {
 public:
  HeartbeatReq();
  virtual ~HeartbeatReq();

  HeartbeatReq(const HeartbeatReq& from);

  inline HeartbeatReq& operator=(const HeartbeatReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const HeartbeatReq& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const HeartbeatReq* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(HeartbeatReq* other);

  // implements Message ----------------------------------------------

  inline HeartbeatReq* New() const { return New(NULL); }

  HeartbeatReq* New(youmecommon::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const youmecommon::protobuf::MessageLite& from);
  void CopyFrom(const HeartbeatReq& from);
  void MergeFrom(const HeartbeatReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      youmecommon::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      youmecommon::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HeartbeatReq* other);
  private:
  inline youmecommon::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline youmecommon::protobuf::Arena* MaybeArenaPtr() const {
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
  youmecommon::protobuf::int32 version() const;
  void set_version(youmecommon::protobuf::int32 value);

  // optional uint64 tips_seq = 2;
  bool has_tips_seq() const;
  void clear_tips_seq();
  static const int kTipsSeqFieldNumber = 2;
  youmecommon::protobuf::uint64 tips_seq() const;
  void set_tips_seq(youmecommon::protobuf::uint64 value);

  // optional uint64 weixin_token_seq = 3;
  bool has_weixin_token_seq() const;
  void clear_weixin_token_seq();
  static const int kWeixinTokenSeqFieldNumber = 3;
  youmecommon::protobuf::uint64 weixin_token_seq() const;
  void set_weixin_token_seq(youmecommon::protobuf::uint64 value);

  // optional uint64 ali_token_seq = 4;
  bool has_ali_token_seq() const;
  void clear_ali_token_seq();
  static const int kAliTokenSeqFieldNumber = 4;
  youmecommon::protobuf::uint64 ali_token_seq() const;
  void set_ali_token_seq(youmecommon::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:YOUMEServiceProtocol.HeartbeatReq)
 private:
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_tips_seq();
  inline void clear_has_tips_seq();
  inline void set_has_weixin_token_seq();
  inline void clear_has_weixin_token_seq();
  inline void set_has_ali_token_seq();
  inline void clear_has_ali_token_seq();

  youmecommon::protobuf::internal::ArenaStringPtr _unknown_fields_;
  youmecommon::protobuf::Arena* _arena_ptr_;

  youmecommon::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  youmecommon::protobuf::uint64 tips_seq_;
  youmecommon::protobuf::uint64 weixin_token_seq_;
  youmecommon::protobuf::uint64 ali_token_seq_;
  youmecommon::protobuf::int32 version_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_youme_5fheartbeat_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_youme_5fheartbeat_2eproto();
  #endif
  friend void protobuf_AssignDesc_youme_5fheartbeat_2eproto();
  friend void protobuf_ShutdownFile_youme_5fheartbeat_2eproto();

  void InitAsDefaultInstance();
  static HeartbeatReq* default_instance_;
};
// -------------------------------------------------------------------

class HeartbeatRsp : public youmecommon::protobuf::MessageLite {
 public:
  HeartbeatRsp();
  virtual ~HeartbeatRsp();

  HeartbeatRsp(const HeartbeatRsp& from);

  inline HeartbeatRsp& operator=(const HeartbeatRsp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const HeartbeatRsp& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const HeartbeatRsp* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(HeartbeatRsp* other);

  // implements Message ----------------------------------------------

  inline HeartbeatRsp* New() const { return New(NULL); }

  HeartbeatRsp* New(youmecommon::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const youmecommon::protobuf::MessageLite& from);
  void CopyFrom(const HeartbeatRsp& from);
  void MergeFrom(const HeartbeatRsp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      youmecommon::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      youmecommon::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HeartbeatRsp* other);
  private:
  inline youmecommon::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline youmecommon::protobuf::Arena* MaybeArenaPtr() const {
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
  youmecommon::protobuf::int32 version() const;
  void set_version(youmecommon::protobuf::int32 value);

  // required int32 ret = 2;
  bool has_ret() const;
  void clear_ret();
  static const int kRetFieldNumber = 2;
  youmecommon::protobuf::int32 ret() const;
  void set_ret(youmecommon::protobuf::int32 value);

  // optional int32 sync_flag = 3;
  bool has_sync_flag() const;
  void clear_sync_flag();
  static const int kSyncFlagFieldNumber = 3;
  youmecommon::protobuf::int32 sync_flag() const;
  void set_sync_flag(youmecommon::protobuf::int32 value);

  // optional int32 weixin_token_sync_flag = 4;
  bool has_weixin_token_sync_flag() const;
  void clear_weixin_token_sync_flag();
  static const int kWeixinTokenSyncFlagFieldNumber = 4;
  youmecommon::protobuf::int32 weixin_token_sync_flag() const;
  void set_weixin_token_sync_flag(youmecommon::protobuf::int32 value);

  // optional int32 ali_token_sync_flag = 5;
  bool has_ali_token_sync_flag() const;
  void clear_ali_token_sync_flag();
  static const int kAliTokenSyncFlagFieldNumber = 5;
  youmecommon::protobuf::int32 ali_token_sync_flag() const;
  void set_ali_token_sync_flag(youmecommon::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:YOUMEServiceProtocol.HeartbeatRsp)
 private:
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_ret();
  inline void clear_has_ret();
  inline void set_has_sync_flag();
  inline void clear_has_sync_flag();
  inline void set_has_weixin_token_sync_flag();
  inline void clear_has_weixin_token_sync_flag();
  inline void set_has_ali_token_sync_flag();
  inline void clear_has_ali_token_sync_flag();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  youmecommon::protobuf::internal::ArenaStringPtr _unknown_fields_;
  youmecommon::protobuf::Arena* _arena_ptr_;

  youmecommon::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  youmecommon::protobuf::int32 version_;
  youmecommon::protobuf::int32 ret_;
  youmecommon::protobuf::int32 sync_flag_;
  youmecommon::protobuf::int32 weixin_token_sync_flag_;
  youmecommon::protobuf::int32 ali_token_sync_flag_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_youme_5fheartbeat_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_youme_5fheartbeat_2eproto();
  #endif
  friend void protobuf_AssignDesc_youme_5fheartbeat_2eproto();
  friend void protobuf_ShutdownFile_youme_5fheartbeat_2eproto();

  void InitAsDefaultInstance();
  static HeartbeatRsp* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// HeartbeatReq

// required int32 version = 1;
inline bool HeartbeatReq::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HeartbeatReq::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HeartbeatReq::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HeartbeatReq::clear_version() {
  version_ = 0;
  clear_has_version();
}
inline youmecommon::protobuf::int32 HeartbeatReq::version() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatReq.version)
  return version_;
}
inline void HeartbeatReq::set_version(youmecommon::protobuf::int32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatReq.version)
}

// optional uint64 tips_seq = 2;
inline bool HeartbeatReq::has_tips_seq() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HeartbeatReq::set_has_tips_seq() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HeartbeatReq::clear_has_tips_seq() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HeartbeatReq::clear_tips_seq() {
  tips_seq_ = GOOGLE_ULONGLONG(0);
  clear_has_tips_seq();
}
inline youmecommon::protobuf::uint64 HeartbeatReq::tips_seq() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatReq.tips_seq)
  return tips_seq_;
}
inline void HeartbeatReq::set_tips_seq(youmecommon::protobuf::uint64 value) {
  set_has_tips_seq();
  tips_seq_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatReq.tips_seq)
}

// optional uint64 weixin_token_seq = 3;
inline bool HeartbeatReq::has_weixin_token_seq() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HeartbeatReq::set_has_weixin_token_seq() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HeartbeatReq::clear_has_weixin_token_seq() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HeartbeatReq::clear_weixin_token_seq() {
  weixin_token_seq_ = GOOGLE_ULONGLONG(0);
  clear_has_weixin_token_seq();
}
inline youmecommon::protobuf::uint64 HeartbeatReq::weixin_token_seq() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatReq.weixin_token_seq)
  return weixin_token_seq_;
}
inline void HeartbeatReq::set_weixin_token_seq(youmecommon::protobuf::uint64 value) {
  set_has_weixin_token_seq();
  weixin_token_seq_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatReq.weixin_token_seq)
}

// optional uint64 ali_token_seq = 4;
inline bool HeartbeatReq::has_ali_token_seq() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void HeartbeatReq::set_has_ali_token_seq() {
  _has_bits_[0] |= 0x00000008u;
}
inline void HeartbeatReq::clear_has_ali_token_seq() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void HeartbeatReq::clear_ali_token_seq() {
  ali_token_seq_ = GOOGLE_ULONGLONG(0);
  clear_has_ali_token_seq();
}
inline youmecommon::protobuf::uint64 HeartbeatReq::ali_token_seq() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatReq.ali_token_seq)
  return ali_token_seq_;
}
inline void HeartbeatReq::set_ali_token_seq(youmecommon::protobuf::uint64 value) {
  set_has_ali_token_seq();
  ali_token_seq_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatReq.ali_token_seq)
}

// -------------------------------------------------------------------

// HeartbeatRsp

// required int32 version = 1;
inline bool HeartbeatRsp::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HeartbeatRsp::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HeartbeatRsp::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HeartbeatRsp::clear_version() {
  version_ = 0;
  clear_has_version();
}
inline youmecommon::protobuf::int32 HeartbeatRsp::version() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatRsp.version)
  return version_;
}
inline void HeartbeatRsp::set_version(youmecommon::protobuf::int32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatRsp.version)
}

// required int32 ret = 2;
inline bool HeartbeatRsp::has_ret() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HeartbeatRsp::set_has_ret() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HeartbeatRsp::clear_has_ret() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HeartbeatRsp::clear_ret() {
  ret_ = 0;
  clear_has_ret();
}
inline youmecommon::protobuf::int32 HeartbeatRsp::ret() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatRsp.ret)
  return ret_;
}
inline void HeartbeatRsp::set_ret(youmecommon::protobuf::int32 value) {
  set_has_ret();
  ret_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatRsp.ret)
}

// optional int32 sync_flag = 3;
inline bool HeartbeatRsp::has_sync_flag() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HeartbeatRsp::set_has_sync_flag() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HeartbeatRsp::clear_has_sync_flag() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HeartbeatRsp::clear_sync_flag() {
  sync_flag_ = 0;
  clear_has_sync_flag();
}
inline youmecommon::protobuf::int32 HeartbeatRsp::sync_flag() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatRsp.sync_flag)
  return sync_flag_;
}
inline void HeartbeatRsp::set_sync_flag(youmecommon::protobuf::int32 value) {
  set_has_sync_flag();
  sync_flag_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatRsp.sync_flag)
}

// optional int32 weixin_token_sync_flag = 4;
inline bool HeartbeatRsp::has_weixin_token_sync_flag() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void HeartbeatRsp::set_has_weixin_token_sync_flag() {
  _has_bits_[0] |= 0x00000008u;
}
inline void HeartbeatRsp::clear_has_weixin_token_sync_flag() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void HeartbeatRsp::clear_weixin_token_sync_flag() {
  weixin_token_sync_flag_ = 0;
  clear_has_weixin_token_sync_flag();
}
inline youmecommon::protobuf::int32 HeartbeatRsp::weixin_token_sync_flag() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatRsp.weixin_token_sync_flag)
  return weixin_token_sync_flag_;
}
inline void HeartbeatRsp::set_weixin_token_sync_flag(youmecommon::protobuf::int32 value) {
  set_has_weixin_token_sync_flag();
  weixin_token_sync_flag_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatRsp.weixin_token_sync_flag)
}

// optional int32 ali_token_sync_flag = 5;
inline bool HeartbeatRsp::has_ali_token_sync_flag() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void HeartbeatRsp::set_has_ali_token_sync_flag() {
  _has_bits_[0] |= 0x00000010u;
}
inline void HeartbeatRsp::clear_has_ali_token_sync_flag() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void HeartbeatRsp::clear_ali_token_sync_flag() {
  ali_token_sync_flag_ = 0;
  clear_has_ali_token_sync_flag();
}
inline youmecommon::protobuf::int32 HeartbeatRsp::ali_token_sync_flag() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatRsp.ali_token_sync_flag)
  return ali_token_sync_flag_;
}
inline void HeartbeatRsp::set_ali_token_sync_flag(youmecommon::protobuf::int32 value) {
  set_has_ali_token_sync_flag();
  ali_token_sync_flag_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatRsp.ali_token_sync_flag)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace YOUMEServiceProtocol

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_youme_5fheartbeat_2eproto__INCLUDED
