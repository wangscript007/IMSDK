// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: youme_heartbeat.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "youme_heartbeat.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace YOUMEServiceProtocol {

void protobuf_ShutdownFile_youme_5fheartbeat_2eproto() {
  delete HeartbeatReq::default_instance_;
  delete HeartbeatRsp::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_youme_5fheartbeat_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_youme_5fheartbeat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  HeartbeatReq::default_instance_ = new HeartbeatReq();
  HeartbeatRsp::default_instance_ = new HeartbeatRsp();
  HeartbeatReq::default_instance_->InitAsDefaultInstance();
  HeartbeatRsp::default_instance_->InitAsDefaultInstance();
  youmecommon::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_youme_5fheartbeat_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_youme_5fheartbeat_2eproto_once_);
void protobuf_AddDesc_youme_5fheartbeat_2eproto() {
  youmecommon::protobuf::GoogleOnceInit(&protobuf_AddDesc_youme_5fheartbeat_2eproto_once_,
                 &protobuf_AddDesc_youme_5fheartbeat_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_youme_5fheartbeat_2eproto {
  StaticDescriptorInitializer_youme_5fheartbeat_2eproto() {
    protobuf_AddDesc_youme_5fheartbeat_2eproto();
  }
} static_descriptor_initializer_youme_5fheartbeat_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int HeartbeatReq::kVersionFieldNumber;
const int HeartbeatReq::kTipsSeqFieldNumber;
const int HeartbeatReq::kWeixinTokenSeqFieldNumber;
const int HeartbeatReq::kAliTokenSeqFieldNumber;
#endif  // !_MSC_VER

HeartbeatReq::HeartbeatReq()
  : youmecommon::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:YOUMEServiceProtocol.HeartbeatReq)
}

void HeartbeatReq::InitAsDefaultInstance() {
}

HeartbeatReq::HeartbeatReq(const HeartbeatReq& from)
  : youmecommon::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:YOUMEServiceProtocol.HeartbeatReq)
}

void HeartbeatReq::SharedCtor() {
  youmecommon::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0;
  tips_seq_ = GOOGLE_ULONGLONG(0);
  weixin_token_seq_ = GOOGLE_ULONGLONG(0);
  ali_token_seq_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HeartbeatReq::~HeartbeatReq() {
  // @@protoc_insertion_point(destructor:YOUMEServiceProtocol.HeartbeatReq)
  SharedDtor();
}

void HeartbeatReq::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void HeartbeatReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HeartbeatReq& HeartbeatReq::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_youme_5fheartbeat_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_youme_5fheartbeat_2eproto();
#endif
  return *default_instance_;
}

HeartbeatReq* HeartbeatReq::default_instance_ = NULL;

HeartbeatReq* HeartbeatReq::New(youmecommon::protobuf::Arena* arena) const {
  HeartbeatReq* n = new HeartbeatReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HeartbeatReq::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<HeartbeatReq*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(tips_seq_, version_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool HeartbeatReq::MergePartialFromCodedStream(
    youmecommon::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  youmecommon::protobuf::uint32 tag;
  youmecommon::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  youmecommon::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:YOUMEServiceProtocol.HeartbeatReq)
  for (;;) {
    ::std::pair< youmecommon::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (youmecommon::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 version = 1;
      case 1: {
        if (tag == 8) {
          DO_((youmecommon::protobuf::internal::WireFormatLite::ReadPrimitive<
                   youmecommon::protobuf::int32, youmecommon::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &version_)));
          set_has_version();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_tips_seq;
        break;
      }

      // optional uint64 tips_seq = 2;
      case 2: {
        if (tag == 16) {
         parse_tips_seq:
          DO_((youmecommon::protobuf::internal::WireFormatLite::ReadPrimitive<
                   youmecommon::protobuf::uint64, youmecommon::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &tips_seq_)));
          set_has_tips_seq();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_weixin_token_seq;
        break;
      }

      // optional uint64 weixin_token_seq = 3;
      case 3: {
        if (tag == 24) {
         parse_weixin_token_seq:
          DO_((youmecommon::protobuf::internal::WireFormatLite::ReadPrimitive<
                   youmecommon::protobuf::uint64, youmecommon::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &weixin_token_seq_)));
          set_has_weixin_token_seq();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_ali_token_seq;
        break;
      }

      // optional uint64 ali_token_seq = 4;
      case 4: {
        if (tag == 32) {
         parse_ali_token_seq:
          DO_((youmecommon::protobuf::internal::WireFormatLite::ReadPrimitive<
                   youmecommon::protobuf::uint64, youmecommon::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &ali_token_seq_)));
          set_has_ali_token_seq();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            youmecommon::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            youmecommon::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(youmecommon::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:YOUMEServiceProtocol.HeartbeatReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:YOUMEServiceProtocol.HeartbeatReq)
  return false;
#undef DO_
}

void HeartbeatReq::SerializeWithCachedSizes(
    youmecommon::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:YOUMEServiceProtocol.HeartbeatReq)
  // required int32 version = 1;
  if (has_version()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteInt32(1, this->version(), output);
  }

  // optional uint64 tips_seq = 2;
  if (has_tips_seq()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteUInt64(2, this->tips_seq(), output);
  }

  // optional uint64 weixin_token_seq = 3;
  if (has_weixin_token_seq()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteUInt64(3, this->weixin_token_seq(), output);
  }

  // optional uint64 ali_token_seq = 4;
  if (has_ali_token_seq()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteUInt64(4, this->ali_token_seq(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:YOUMEServiceProtocol.HeartbeatReq)
}

int HeartbeatReq::ByteSize() const {
  int total_size = 0;

  // required int32 version = 1;
  if (has_version()) {
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::Int32Size(
        this->version());
  }
  if (_has_bits_[1 / 32] & 14u) {
    // optional uint64 tips_seq = 2;
    if (has_tips_seq()) {
      total_size += 1 +
        youmecommon::protobuf::internal::WireFormatLite::UInt64Size(
          this->tips_seq());
    }

    // optional uint64 weixin_token_seq = 3;
    if (has_weixin_token_seq()) {
      total_size += 1 +
        youmecommon::protobuf::internal::WireFormatLite::UInt64Size(
          this->weixin_token_seq());
    }

    // optional uint64 ali_token_seq = 4;
    if (has_ali_token_seq()) {
      total_size += 1 +
        youmecommon::protobuf::internal::WireFormatLite::UInt64Size(
          this->ali_token_seq());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HeartbeatReq::CheckTypeAndMergeFrom(
    const youmecommon::protobuf::MessageLite& from) {
  MergeFrom(*youmecommon::protobuf::down_cast<const HeartbeatReq*>(&from));
}

void HeartbeatReq::MergeFrom(const HeartbeatReq& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_version()) {
      set_version(from.version());
    }
    if (from.has_tips_seq()) {
      set_tips_seq(from.tips_seq());
    }
    if (from.has_weixin_token_seq()) {
      set_weixin_token_seq(from.weixin_token_seq());
    }
    if (from.has_ali_token_seq()) {
      set_ali_token_seq(from.ali_token_seq());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void HeartbeatReq::CopyFrom(const HeartbeatReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HeartbeatReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void HeartbeatReq::Swap(HeartbeatReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HeartbeatReq::InternalSwap(HeartbeatReq* other) {
  std::swap(version_, other->version_);
  std::swap(tips_seq_, other->tips_seq_);
  std::swap(weixin_token_seq_, other->weixin_token_seq_);
  std::swap(ali_token_seq_, other->ali_token_seq_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string HeartbeatReq::GetTypeName() const {
  return "YOUMEServiceProtocol.HeartbeatReq";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HeartbeatReq

// required int32 version = 1;
bool HeartbeatReq::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void HeartbeatReq::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
void HeartbeatReq::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
void HeartbeatReq::clear_version() {
  version_ = 0;
  clear_has_version();
}
 youmecommon::protobuf::int32 HeartbeatReq::version() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatReq.version)
  return version_;
}
 void HeartbeatReq::set_version(youmecommon::protobuf::int32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatReq.version)
}

// optional uint64 tips_seq = 2;
bool HeartbeatReq::has_tips_seq() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void HeartbeatReq::set_has_tips_seq() {
  _has_bits_[0] |= 0x00000002u;
}
void HeartbeatReq::clear_has_tips_seq() {
  _has_bits_[0] &= ~0x00000002u;
}
void HeartbeatReq::clear_tips_seq() {
  tips_seq_ = GOOGLE_ULONGLONG(0);
  clear_has_tips_seq();
}
 youmecommon::protobuf::uint64 HeartbeatReq::tips_seq() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatReq.tips_seq)
  return tips_seq_;
}
 void HeartbeatReq::set_tips_seq(youmecommon::protobuf::uint64 value) {
  set_has_tips_seq();
  tips_seq_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatReq.tips_seq)
}

// optional uint64 weixin_token_seq = 3;
bool HeartbeatReq::has_weixin_token_seq() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void HeartbeatReq::set_has_weixin_token_seq() {
  _has_bits_[0] |= 0x00000004u;
}
void HeartbeatReq::clear_has_weixin_token_seq() {
  _has_bits_[0] &= ~0x00000004u;
}
void HeartbeatReq::clear_weixin_token_seq() {
  weixin_token_seq_ = GOOGLE_ULONGLONG(0);
  clear_has_weixin_token_seq();
}
 youmecommon::protobuf::uint64 HeartbeatReq::weixin_token_seq() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatReq.weixin_token_seq)
  return weixin_token_seq_;
}
 void HeartbeatReq::set_weixin_token_seq(youmecommon::protobuf::uint64 value) {
  set_has_weixin_token_seq();
  weixin_token_seq_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatReq.weixin_token_seq)
}

// optional uint64 ali_token_seq = 4;
bool HeartbeatReq::has_ali_token_seq() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void HeartbeatReq::set_has_ali_token_seq() {
  _has_bits_[0] |= 0x00000008u;
}
void HeartbeatReq::clear_has_ali_token_seq() {
  _has_bits_[0] &= ~0x00000008u;
}
void HeartbeatReq::clear_ali_token_seq() {
  ali_token_seq_ = GOOGLE_ULONGLONG(0);
  clear_has_ali_token_seq();
}
 youmecommon::protobuf::uint64 HeartbeatReq::ali_token_seq() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatReq.ali_token_seq)
  return ali_token_seq_;
}
 void HeartbeatReq::set_ali_token_seq(youmecommon::protobuf::uint64 value) {
  set_has_ali_token_seq();
  ali_token_seq_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatReq.ali_token_seq)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#ifndef _MSC_VER
const int HeartbeatRsp::kVersionFieldNumber;
const int HeartbeatRsp::kRetFieldNumber;
const int HeartbeatRsp::kSyncFlagFieldNumber;
const int HeartbeatRsp::kWeixinTokenSyncFlagFieldNumber;
const int HeartbeatRsp::kAliTokenSyncFlagFieldNumber;
#endif  // !_MSC_VER

HeartbeatRsp::HeartbeatRsp()
  : youmecommon::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:YOUMEServiceProtocol.HeartbeatRsp)
}

void HeartbeatRsp::InitAsDefaultInstance() {
}

HeartbeatRsp::HeartbeatRsp(const HeartbeatRsp& from)
  : youmecommon::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:YOUMEServiceProtocol.HeartbeatRsp)
}

void HeartbeatRsp::SharedCtor() {
  youmecommon::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0;
  ret_ = 0;
  sync_flag_ = 0;
  weixin_token_sync_flag_ = 0;
  ali_token_sync_flag_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HeartbeatRsp::~HeartbeatRsp() {
  // @@protoc_insertion_point(destructor:YOUMEServiceProtocol.HeartbeatRsp)
  SharedDtor();
}

void HeartbeatRsp::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void HeartbeatRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HeartbeatRsp& HeartbeatRsp::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_youme_5fheartbeat_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_youme_5fheartbeat_2eproto();
#endif
  return *default_instance_;
}

HeartbeatRsp* HeartbeatRsp::default_instance_ = NULL;

HeartbeatRsp* HeartbeatRsp::New(youmecommon::protobuf::Arena* arena) const {
  HeartbeatRsp* n = new HeartbeatRsp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HeartbeatRsp::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<HeartbeatRsp*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31u) {
    ZR_(version_, ali_token_sync_flag_);
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool HeartbeatRsp::MergePartialFromCodedStream(
    youmecommon::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  youmecommon::protobuf::uint32 tag;
  youmecommon::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  youmecommon::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:YOUMEServiceProtocol.HeartbeatRsp)
  for (;;) {
    ::std::pair< youmecommon::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (youmecommon::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 version = 1;
      case 1: {
        if (tag == 8) {
          DO_((youmecommon::protobuf::internal::WireFormatLite::ReadPrimitive<
                   youmecommon::protobuf::int32, youmecommon::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &version_)));
          set_has_version();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_ret;
        break;
      }

      // required int32 ret = 2;
      case 2: {
        if (tag == 16) {
         parse_ret:
          DO_((youmecommon::protobuf::internal::WireFormatLite::ReadPrimitive<
                   youmecommon::protobuf::int32, youmecommon::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ret_)));
          set_has_ret();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_sync_flag;
        break;
      }

      // optional int32 sync_flag = 3;
      case 3: {
        if (tag == 24) {
         parse_sync_flag:
          DO_((youmecommon::protobuf::internal::WireFormatLite::ReadPrimitive<
                   youmecommon::protobuf::int32, youmecommon::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sync_flag_)));
          set_has_sync_flag();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_weixin_token_sync_flag;
        break;
      }

      // optional int32 weixin_token_sync_flag = 4;
      case 4: {
        if (tag == 32) {
         parse_weixin_token_sync_flag:
          DO_((youmecommon::protobuf::internal::WireFormatLite::ReadPrimitive<
                   youmecommon::protobuf::int32, youmecommon::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &weixin_token_sync_flag_)));
          set_has_weixin_token_sync_flag();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_ali_token_sync_flag;
        break;
      }

      // optional int32 ali_token_sync_flag = 5;
      case 5: {
        if (tag == 40) {
         parse_ali_token_sync_flag:
          DO_((youmecommon::protobuf::internal::WireFormatLite::ReadPrimitive<
                   youmecommon::protobuf::int32, youmecommon::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ali_token_sync_flag_)));
          set_has_ali_token_sync_flag();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            youmecommon::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            youmecommon::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(youmecommon::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:YOUMEServiceProtocol.HeartbeatRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:YOUMEServiceProtocol.HeartbeatRsp)
  return false;
#undef DO_
}

void HeartbeatRsp::SerializeWithCachedSizes(
    youmecommon::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:YOUMEServiceProtocol.HeartbeatRsp)
  // required int32 version = 1;
  if (has_version()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteInt32(1, this->version(), output);
  }

  // required int32 ret = 2;
  if (has_ret()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteInt32(2, this->ret(), output);
  }

  // optional int32 sync_flag = 3;
  if (has_sync_flag()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteInt32(3, this->sync_flag(), output);
  }

  // optional int32 weixin_token_sync_flag = 4;
  if (has_weixin_token_sync_flag()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteInt32(4, this->weixin_token_sync_flag(), output);
  }

  // optional int32 ali_token_sync_flag = 5;
  if (has_ali_token_sync_flag()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteInt32(5, this->ali_token_sync_flag(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:YOUMEServiceProtocol.HeartbeatRsp)
}

int HeartbeatRsp::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_version()) {
    // required int32 version = 1;
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::Int32Size(
        this->version());
  }

  if (has_ret()) {
    // required int32 ret = 2;
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::Int32Size(
        this->ret());
  }

  return total_size;
}
int HeartbeatRsp::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 version = 1;
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::Int32Size(
        this->version());

    // required int32 ret = 2;
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::Int32Size(
        this->ret());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_has_bits_[2 / 32] & 28u) {
    // optional int32 sync_flag = 3;
    if (has_sync_flag()) {
      total_size += 1 +
        youmecommon::protobuf::internal::WireFormatLite::Int32Size(
          this->sync_flag());
    }

    // optional int32 weixin_token_sync_flag = 4;
    if (has_weixin_token_sync_flag()) {
      total_size += 1 +
        youmecommon::protobuf::internal::WireFormatLite::Int32Size(
          this->weixin_token_sync_flag());
    }

    // optional int32 ali_token_sync_flag = 5;
    if (has_ali_token_sync_flag()) {
      total_size += 1 +
        youmecommon::protobuf::internal::WireFormatLite::Int32Size(
          this->ali_token_sync_flag());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HeartbeatRsp::CheckTypeAndMergeFrom(
    const youmecommon::protobuf::MessageLite& from) {
  MergeFrom(*youmecommon::protobuf::down_cast<const HeartbeatRsp*>(&from));
}

void HeartbeatRsp::MergeFrom(const HeartbeatRsp& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_version()) {
      set_version(from.version());
    }
    if (from.has_ret()) {
      set_ret(from.ret());
    }
    if (from.has_sync_flag()) {
      set_sync_flag(from.sync_flag());
    }
    if (from.has_weixin_token_sync_flag()) {
      set_weixin_token_sync_flag(from.weixin_token_sync_flag());
    }
    if (from.has_ali_token_sync_flag()) {
      set_ali_token_sync_flag(from.ali_token_sync_flag());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void HeartbeatRsp::CopyFrom(const HeartbeatRsp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HeartbeatRsp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void HeartbeatRsp::Swap(HeartbeatRsp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HeartbeatRsp::InternalSwap(HeartbeatRsp* other) {
  std::swap(version_, other->version_);
  std::swap(ret_, other->ret_);
  std::swap(sync_flag_, other->sync_flag_);
  std::swap(weixin_token_sync_flag_, other->weixin_token_sync_flag_);
  std::swap(ali_token_sync_flag_, other->ali_token_sync_flag_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string HeartbeatRsp::GetTypeName() const {
  return "YOUMEServiceProtocol.HeartbeatRsp";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HeartbeatRsp

// required int32 version = 1;
bool HeartbeatRsp::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void HeartbeatRsp::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
void HeartbeatRsp::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
void HeartbeatRsp::clear_version() {
  version_ = 0;
  clear_has_version();
}
 youmecommon::protobuf::int32 HeartbeatRsp::version() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatRsp.version)
  return version_;
}
 void HeartbeatRsp::set_version(youmecommon::protobuf::int32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatRsp.version)
}

// required int32 ret = 2;
bool HeartbeatRsp::has_ret() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void HeartbeatRsp::set_has_ret() {
  _has_bits_[0] |= 0x00000002u;
}
void HeartbeatRsp::clear_has_ret() {
  _has_bits_[0] &= ~0x00000002u;
}
void HeartbeatRsp::clear_ret() {
  ret_ = 0;
  clear_has_ret();
}
 youmecommon::protobuf::int32 HeartbeatRsp::ret() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatRsp.ret)
  return ret_;
}
 void HeartbeatRsp::set_ret(youmecommon::protobuf::int32 value) {
  set_has_ret();
  ret_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatRsp.ret)
}

// optional int32 sync_flag = 3;
bool HeartbeatRsp::has_sync_flag() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void HeartbeatRsp::set_has_sync_flag() {
  _has_bits_[0] |= 0x00000004u;
}
void HeartbeatRsp::clear_has_sync_flag() {
  _has_bits_[0] &= ~0x00000004u;
}
void HeartbeatRsp::clear_sync_flag() {
  sync_flag_ = 0;
  clear_has_sync_flag();
}
 youmecommon::protobuf::int32 HeartbeatRsp::sync_flag() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatRsp.sync_flag)
  return sync_flag_;
}
 void HeartbeatRsp::set_sync_flag(youmecommon::protobuf::int32 value) {
  set_has_sync_flag();
  sync_flag_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatRsp.sync_flag)
}

// optional int32 weixin_token_sync_flag = 4;
bool HeartbeatRsp::has_weixin_token_sync_flag() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void HeartbeatRsp::set_has_weixin_token_sync_flag() {
  _has_bits_[0] |= 0x00000008u;
}
void HeartbeatRsp::clear_has_weixin_token_sync_flag() {
  _has_bits_[0] &= ~0x00000008u;
}
void HeartbeatRsp::clear_weixin_token_sync_flag() {
  weixin_token_sync_flag_ = 0;
  clear_has_weixin_token_sync_flag();
}
 youmecommon::protobuf::int32 HeartbeatRsp::weixin_token_sync_flag() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatRsp.weixin_token_sync_flag)
  return weixin_token_sync_flag_;
}
 void HeartbeatRsp::set_weixin_token_sync_flag(youmecommon::protobuf::int32 value) {
  set_has_weixin_token_sync_flag();
  weixin_token_sync_flag_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatRsp.weixin_token_sync_flag)
}

// optional int32 ali_token_sync_flag = 5;
bool HeartbeatRsp::has_ali_token_sync_flag() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void HeartbeatRsp::set_has_ali_token_sync_flag() {
  _has_bits_[0] |= 0x00000010u;
}
void HeartbeatRsp::clear_has_ali_token_sync_flag() {
  _has_bits_[0] &= ~0x00000010u;
}
void HeartbeatRsp::clear_ali_token_sync_flag() {
  ali_token_sync_flag_ = 0;
  clear_has_ali_token_sync_flag();
}
 youmecommon::protobuf::int32 HeartbeatRsp::ali_token_sync_flag() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.HeartbeatRsp.ali_token_sync_flag)
  return ali_token_sync_flag_;
}
 void HeartbeatRsp::set_ali_token_sync_flag(youmecommon::protobuf::int32 value) {
  set_has_ali_token_sync_flag();
  ali_token_sync_flag_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.HeartbeatRsp.ali_token_sync_flag)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace YOUMEServiceProtocol

// @@protoc_insertion_point(global_scope)
