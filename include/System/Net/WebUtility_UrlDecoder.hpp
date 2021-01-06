// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebUtility
#include "System/Net/WebUtility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x38
  // Autogenerated type: System.Net.WebUtility/UrlDecoder
  // [] Offset: FFFFFFFF
  class WebUtility::UrlDecoder : public ::Il2CppObject {
    public:
    // private System.Int32 _bufferSize
    // Size: 0x4
    // Offset: 0x10
    int bufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _numChars
    // Size: 0x4
    // Offset: 0x14
    int numChars;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Char[] _charBuffer
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppChar>* charBuffer;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.Int32 _numBytes
    // Size: 0x4
    // Offset: 0x20
    int numBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numBytes and: byteBuffer
    char __padding3[0x4] = {};
    // private System.Byte[] _byteBuffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* byteBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Text.Encoding _encoding
    // Size: 0x8
    // Offset: 0x30
    System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // Creating value type constructor for type: UrlDecoder
    UrlDecoder(int bufferSize_ = {}, int numChars_ = {}, ::Array<::Il2CppChar>* charBuffer_ = {}, int numBytes_ = {}, ::Array<uint8_t>* byteBuffer_ = {}, System::Text::Encoding* encoding_ = {}) noexcept : bufferSize{bufferSize_}, numChars{numChars_}, charBuffer{charBuffer_}, numBytes{numBytes_}, byteBuffer{byteBuffer_}, encoding{encoding_} {}
    // private System.Void FlushBytes()
    // Offset: 0x122A8CC
    void FlushBytes();
    // System.Void .ctor(System.Int32 bufferSize, System.Text.Encoding encoding)
    // Offset: 0x122A4E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebUtility::UrlDecoder* New_ctor(int bufferSize, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("UrlDecoder").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebUtility::UrlDecoder*, creationType>(bufferSize, encoding)));
    }
    // System.Void AddChar(System.Char ch)
    // Offset: 0x122A688
    void AddChar(::Il2CppChar ch);
    // System.Void AddByte(System.Byte b)
    // Offset: 0x122A5C4
    void AddByte(uint8_t b);
    // System.String GetString()
    // Offset: 0x122A6F4
    ::Il2CppString* GetString();
  }; // System.Net.WebUtility/UrlDecoder
  static check_size<sizeof(WebUtility::UrlDecoder), 48 + sizeof(System::Text::Encoding*)> __System_Net_WebUtility_UrlDecoderSizeCheck;
  static_assert(sizeof(WebUtility::UrlDecoder) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebUtility::UrlDecoder*, "System.Net", "WebUtility/UrlDecoder");
#pragma pack(pop)
