// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: youme_ali_access_token.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "youme_ali_access_token.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace YOUMEServiceProtocol {

void protobuf_ShutdownFile_youme_5fali_5faccess_5ftoken_2eproto() {
  delete GetALiAccessTokenReq::default_instance_;
  delete GetALiAccessTokenRsp::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  GetALiAccessTokenReq::default_instance_ = new GetALiAccessTokenReq();
  GetALiAccessTokenRsp::default_instance_ = new GetALiAccessTokenRsp();
  GetALiAccessTokenReq::default_instance_->InitAsDefaultInstance();
  GetALiAccessTokenRsp::default_instance_->InitAsDefaultInstance();
  youmecommon::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_youme_5fali_5faccess_5ftoken_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto_once_);
void protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto() {
  youmecommon::protobuf::GoogleOnceInit(&protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto_once_,
                 &protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_youme_5fali_5faccess_5ftoken_2eproto {
  StaticDescriptorInitializer_youme_5fali_5faccess_5ftoken_2eproto() {
    protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto();
  }
} static_descriptor_initializer_youme_5fali_5faccess_5ftoken_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int GetALiAccessTokenReq::kVersionFieldNumber;
#endif  // !_MSC_VER

GetALiAccessTokenReq::GetALiAccessTokenReq()
  : youmecommon::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:YOUMEServiceProtocol.GetALiAccessTokenReq)
}

void GetALiAccessTokenReq::InitAsDefaultInstance() {
}

GetALiAccessTokenReq::GetALiAccessTokenReq(const GetALiAccessTokenReq& from)
  : youmecommon::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:YOUMEServiceProtocol.GetALiAccessTokenReq)
}

void GetALiAccessTokenReq::SharedCtor() {
  youmecommon::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetALiAccessTokenReq::~GetALiAccessTokenReq() {
  // @@protoc_insertion_point(destructor:YOUMEServiceProtocol.GetALiAccessTokenReq)
  SharedDtor();
}

void GetALiAccessTokenReq::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GetALiAccessTokenReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GetALiAccessTokenReq& GetALiAccessTokenReq::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto();
#endif
  return *default_instance_;
}

GetALiAccessTokenReq* GetALiAccessTokenReq::default_instance_ = NULL;

GetALiAccessTokenReq* GetALiAccessTokenReq::New(youmecommon::protobuf::Arena* arena) const {
  GetALiAccessTokenReq* n = new GetALiAccessTokenReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetALiAccessTokenReq::Clear() {
  version_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool GetALiAccessTokenReq::MergePartialFromCodedStream(
    youmecommon::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  youmecommon::protobuf::uint32 tag;
  youmecommon::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  youmecommon::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:YOUMEServiceProtocol.GetALiAccessTokenReq)
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
  // @@protoc_insertion_point(parse_success:YOUMEServiceProtocol.GetALiAccessTokenReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:YOUMEServiceProtocol.GetALiAccessTokenReq)
  return false;
#undef DO_
}

void GetALiAccessTokenReq::SerializeWithCachedSizes(
    youmecommon::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:YOUMEServiceProtocol.GetALiAccessTokenReq)
  // required int32 version = 1;
  if (has_version()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteInt32(1, this->version(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:YOUMEServiceProtocol.GetALiAccessTokenReq)
}

int GetALiAccessTokenReq::ByteSize() const {
  int total_size = 0;

  // required int32 version = 1;
  if (has_version()) {
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::Int32Size(
        this->version());
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetALiAccessTokenReq::CheckTypeAndMergeFrom(
    const youmecommon::protobuf::MessageLite& from) {
  MergeFrom(*youmecommon::protobuf::down_cast<const GetALiAccessTokenReq*>(&from));
}

void GetALiAccessTokenReq::MergeFrom(const GetALiAccessTokenReq& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_version()) {
      set_version(from.version());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void GetALiAccessTokenReq::CopyFrom(const GetALiAccessTokenReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetALiAccessTokenReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void GetALiAccessTokenReq::Swap(GetALiAccessTokenReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetALiAccessTokenReq::InternalSwap(GetALiAccessTokenReq* other) {
  std::swap(version_, other->version_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string GetALiAccessTokenReq::GetTypeName() const {
  return "YOUMEServiceProtocol.GetALiAccessTokenReq";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetALiAccessTokenReq

// required int32 version = 1;
bool GetALiAccessTokenReq::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void GetALiAccessTokenReq::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
void GetALiAccessTokenReq::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
void GetALiAccessTokenReq::clear_version() {
  version_ = 0;
  clear_has_version();
}
 youmecommon::protobuf::int32 GetALiAccessTokenReq::version() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.GetALiAccessTokenReq.version)
  return version_;
}
 void GetALiAccessTokenReq::set_version(youmecommon::protobuf::int32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.GetALiAccessTokenReq.version)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#ifndef _MSC_VER
const int GetALiAccessTokenRsp::kVersionFieldNumber;
const int GetALiAccessTokenRsp::kRetFieldNumber;
const int GetALiAccessTokenRsp::kTokenFieldNumber;
const int GetALiAccessTokenRsp::kTokenSeqFieldNumber;
#endif  // !_MSC_VER

GetALiAccessTokenRsp::GetALiAccessTokenRsp()
  : youmecommon::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:YOUMEServiceProtocol.GetALiAccessTokenRsp)
}

void GetALiAccessTokenRsp::InitAsDefaultInstance() {
}

GetALiAccessTokenRsp::GetALiAccessTokenRsp(const GetALiAccessTokenRsp& from)
  : youmecommon::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:YOUMEServiceProtocol.GetALiAccessTokenRsp)
}

void GetALiAccessTokenRsp::SharedCtor() {
  youmecommon::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0;
  ret_ = 0;
  token_.UnsafeSetDefault(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  token_seq_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetALiAccessTokenRsp::~GetALiAccessTokenRsp() {
  // @@protoc_insertion_point(destructor:YOUMEServiceProtocol.GetALiAccessTokenRsp)
  SharedDtor();
}

void GetALiAccessTokenRsp::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  token_.DestroyNoArena(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GetALiAccessTokenRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GetALiAccessTokenRsp& GetALiAccessTokenRsp::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_youme_5fali_5faccess_5ftoken_2eproto();
#endif
  return *default_instance_;
}

GetALiAccessTokenRsp* GetALiAccessTokenRsp::default_instance_ = NULL;

GetALiAccessTokenRsp* GetALiAccessTokenRsp::New(youmecommon::protobuf::Arena* arena) const {
  GetALiAccessTokenRsp* n = new GetALiAccessTokenRsp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetALiAccessTokenRsp::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<GetALiAccessTokenRsp*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 15u) {
    ZR_(version_, ret_);
    if (has_token()) {
      token_.ClearToEmptyNoArena(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    token_seq_ = GOOGLE_ULONGLONG(0);
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool GetALiAccessTokenRsp::MergePartialFromCodedStream(
    youmecommon::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  youmecommon::protobuf::uint32 tag;
  youmecommon::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  youmecommon::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:YOUMEServiceProtocol.GetALiAccessTokenRsp)
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
        if (input->ExpectTag(26)) goto parse_token;
        break;
      }

      // required string token = 3;
      case 3: {
        if (tag == 26) {
         parse_token:
          DO_(youmecommon::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_token_seq;
        break;
      }

      // required uint64 token_seq = 4;
      case 4: {
        if (tag == 32) {
         parse_token_seq:
          DO_((youmecommon::protobuf::internal::WireFormatLite::ReadPrimitive<
                   youmecommon::protobuf::uint64, youmecommon::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &token_seq_)));
          set_has_token_seq();
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
  // @@protoc_insertion_point(parse_success:YOUMEServiceProtocol.GetALiAccessTokenRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:YOUMEServiceProtocol.GetALiAccessTokenRsp)
  return false;
#undef DO_
}

void GetALiAccessTokenRsp::SerializeWithCachedSizes(
    youmecommon::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:YOUMEServiceProtocol.GetALiAccessTokenRsp)
  // required int32 version = 1;
  if (has_version()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteInt32(1, this->version(), output);
  }

  // required int32 ret = 2;
  if (has_ret()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteInt32(2, this->ret(), output);
  }

  // required string token = 3;
  if (has_token()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->token(), output);
  }

  // required uint64 token_seq = 4;
  if (has_token_seq()) {
    youmecommon::protobuf::internal::WireFormatLite::WriteUInt64(4, this->token_seq(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:YOUMEServiceProtocol.GetALiAccessTokenRsp)
}

int GetALiAccessTokenRsp::RequiredFieldsByteSizeFallback() const {
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

  if (has_token()) {
    // required string token = 3;
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::StringSize(
        this->token());
  }

  if (has_token_seq()) {
    // required uint64 token_seq = 4;
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::UInt64Size(
        this->token_seq());
  }

  return total_size;
}
int GetALiAccessTokenRsp::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required int32 version = 1;
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::Int32Size(
        this->version());

    // required int32 ret = 2;
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::Int32Size(
        this->ret());

    // required string token = 3;
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::StringSize(
        this->token());

    // required uint64 token_seq = 4;
    total_size += 1 +
      youmecommon::protobuf::internal::WireFormatLite::UInt64Size(
        this->token_seq());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetALiAccessTokenRsp::CheckTypeAndMergeFrom(
    const youmecommon::protobuf::MessageLite& from) {
  MergeFrom(*youmecommon::protobuf::down_cast<const GetALiAccessTokenRsp*>(&from));
}

void GetALiAccessTokenRsp::MergeFrom(const GetALiAccessTokenRsp& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_version()) {
      set_version(from.version());
    }
    if (from.has_ret()) {
      set_ret(from.ret());
    }
    if (from.has_token()) {
      set_has_token();
      token_.AssignWithDefault(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited(), from.token_);
    }
    if (from.has_token_seq()) {
      set_token_seq(from.token_seq());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void GetALiAccessTokenRsp::CopyFrom(const GetALiAccessTokenRsp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetALiAccessTokenRsp::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void GetALiAccessTokenRsp::Swap(GetALiAccessTokenRsp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetALiAccessTokenRsp::InternalSwap(GetALiAccessTokenRsp* other) {
  std::swap(version_, other->version_);
  std::swap(ret_, other->ret_);
  token_.Swap(&other->token_);
  std::swap(token_seq_, other->token_seq_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string GetALiAccessTokenRsp::GetTypeName() const {
  return "YOUMEServiceProtocol.GetALiAccessTokenRsp";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetALiAccessTokenRsp

// required int32 version = 1;
bool GetALiAccessTokenRsp::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void GetALiAccessTokenRsp::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
void GetALiAccessTokenRsp::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
void GetALiAccessTokenRsp::clear_version() {
  version_ = 0;
  clear_has_version();
}
 youmecommon::protobuf::int32 GetALiAccessTokenRsp::version() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.GetALiAccessTokenRsp.version)
  return version_;
}
 void GetALiAccessTokenRsp::set_version(youmecommon::protobuf::int32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.GetALiAccessTokenRsp.version)
}

// required int32 ret = 2;
bool GetALiAccessTokenRsp::has_ret() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void GetALiAccessTokenRsp::set_has_ret() {
  _has_bits_[0] |= 0x00000002u;
}
void GetALiAccessTokenRsp::clear_has_ret() {
  _has_bits_[0] &= ~0x00000002u;
}
void GetALiAccessTokenRsp::clear_ret() {
  ret_ = 0;
  clear_has_ret();
}
 youmecommon::protobuf::int32 GetALiAccessTokenRsp::ret() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.GetALiAccessTokenRsp.ret)
  return ret_;
}
 void GetALiAccessTokenRsp::set_ret(youmecommon::protobuf::int32 value) {
  set_has_ret();
  ret_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.GetALiAccessTokenRsp.ret)
}

// required string token = 3;
bool GetALiAccessTokenRsp::has_token() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void GetALiAccessTokenRsp::set_has_token() {
  _has_bits_[0] |= 0x00000004u;
}
void GetALiAccessTokenRsp::clear_has_token() {
  _has_bits_[0] &= ~0x00000004u;
}
void GetALiAccessTokenRsp::clear_token() {
  token_.ClearToEmptyNoArena(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_token();
}
 const ::std::string& GetALiAccessTokenRsp::token() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.GetALiAccessTokenRsp.token)
  return token_.GetNoArena(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GetALiAccessTokenRsp::set_token(const ::std::string& value) {
  set_has_token();
  token_.SetNoArena(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.GetALiAccessTokenRsp.token)
}
 void GetALiAccessTokenRsp::set_token(const char* value) {
  set_has_token();
  token_.SetNoArena(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:YOUMEServiceProtocol.GetALiAccessTokenRsp.token)
}
 void GetALiAccessTokenRsp::set_token(const char* value, size_t size) {
  set_has_token();
  token_.SetNoArena(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:YOUMEServiceProtocol.GetALiAccessTokenRsp.token)
}
 ::std::string* GetALiAccessTokenRsp::mutable_token() {
  set_has_token();
  // @@protoc_insertion_point(field_mutable:YOUMEServiceProtocol.GetALiAccessTokenRsp.token)
  return token_.MutableNoArena(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* GetALiAccessTokenRsp::release_token() {
  clear_has_token();
  return token_.ReleaseNoArena(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GetALiAccessTokenRsp::set_allocated_token(::std::string* token) {
  if (token != NULL) {
    set_has_token();
  } else {
    clear_has_token();
  }
  token_.SetAllocatedNoArena(&youmecommon::protobuf::internal::GetEmptyStringAlreadyInited(), token);
  // @@protoc_insertion_point(field_set_allocated:YOUMEServiceProtocol.GetALiAccessTokenRsp.token)
}

// required uint64 token_seq = 4;
bool GetALiAccessTokenRsp::has_token_seq() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void GetALiAccessTokenRsp::set_has_token_seq() {
  _has_bits_[0] |= 0x00000008u;
}
void GetALiAccessTokenRsp::clear_has_token_seq() {
  _has_bits_[0] &= ~0x00000008u;
}
void GetALiAccessTokenRsp::clear_token_seq() {
  token_seq_ = GOOGLE_ULONGLONG(0);
  clear_has_token_seq();
}
 youmecommon::protobuf::uint64 GetALiAccessTokenRsp::token_seq() const {
  // @@protoc_insertion_point(field_get:YOUMEServiceProtocol.GetALiAccessTokenRsp.token_seq)
  return token_seq_;
}
 void GetALiAccessTokenRsp::set_token_seq(youmecommon::protobuf::uint64 value) {
  set_has_token_seq();
  token_seq_ = value;
  // @@protoc_insertion_point(field_set:YOUMEServiceProtocol.GetALiAccessTokenRsp.token_seq)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace YOUMEServiceProtocol

// @@protoc_insertion_point(global_scope)