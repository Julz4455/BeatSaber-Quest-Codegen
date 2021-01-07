// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Configuration.UnicodeDecodingConformance
#include "System/Net/Configuration/UnicodeDecodingConformance.hpp"
// Including type: System.Net.Configuration.UnicodeEncodingConformance
#include "System/Net/Configuration/UnicodeEncodingConformance.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  // Autogenerated type: System.Net.WebUtility
  // [] Offset: FFFFFFFF
  class WebUtility : public ::Il2CppObject {
    public:
    // Nested type: System::Net::WebUtility::UrlDecoder
    class UrlDecoder;
    // Creating value type constructor for type: WebUtility
    WebUtility() noexcept {}
    // Get static field: static private readonly System.Char[] _htmlEntityEndingChars
    static ::Array<::Il2CppChar>* _get__htmlEntityEndingChars();
    // Set static field: static private readonly System.Char[] _htmlEntityEndingChars
    static void _set__htmlEntityEndingChars(::Array<::Il2CppChar>* value);
    // Get static field: static private System.Net.Configuration.UnicodeDecodingConformance _htmlDecodeConformance
    static System::Net::Configuration::UnicodeDecodingConformance _get__htmlDecodeConformance();
    // Set static field: static private System.Net.Configuration.UnicodeDecodingConformance _htmlDecodeConformance
    static void _set__htmlDecodeConformance(System::Net::Configuration::UnicodeDecodingConformance value);
    // Get static field: static private System.Net.Configuration.UnicodeEncodingConformance _htmlEncodeConformance
    static System::Net::Configuration::UnicodeEncodingConformance _get__htmlEncodeConformance();
    // Set static field: static private System.Net.Configuration.UnicodeEncodingConformance _htmlEncodeConformance
    static void _set__htmlEncodeConformance(System::Net::Configuration::UnicodeEncodingConformance value);
    // static public System.String HtmlEncode(System.String value)
    // Offset: 0x1229B00
    static ::Il2CppString* HtmlEncode(::Il2CppString* value);
    // static public System.Void HtmlEncode(System.String value, System.IO.TextWriter output)
    // Offset: 0x1229D7C
    static void HtmlEncode(::Il2CppString* value, System::IO::TextWriter* output);
    // static private System.Int32 IndexOfHtmlEncodingChars(System.String s, System.Int32 startPos)
    // Offset: 0x1229C28
    static int IndexOfHtmlEncodingChars(::Il2CppString* s, int startPos);
    // static private System.Net.Configuration.UnicodeEncodingConformance get_HtmlEncodeConformance()
    // Offset: 0x122A0F0
    static System::Net::Configuration::UnicodeEncodingConformance get_HtmlEncodeConformance();
    // static private System.String UrlDecodeInternal(System.String value, System.Text.Encoding encoding)
    // Offset: 0x122A2BC
    static ::Il2CppString* UrlDecodeInternal(::Il2CppString* value, System::Text::Encoding* encoding);
    // static public System.String UrlDecode(System.String encodedValue)
    // Offset: 0x122A784
    static ::Il2CppString* UrlDecode(::Il2CppString* encodedValue);
    // static private System.Int32 GetNextUnicodeScalarValueFromUtf16Surrogate(ref System.Char* pch, ref System.Int32 charsRemaining)
    // Offset: 0x122A1F4
    static int GetNextUnicodeScalarValueFromUtf16Surrogate(::Il2CppChar*& pch, int& charsRemaining);
    // static private System.Int32 HexToInt(System.Char h)
    // Offset: 0x122A574
    static int HexToInt(::Il2CppChar h);
    // static private System.Void .cctor()
    // Offset: 0x122A80C
    static void _cctor();
  }; // System.Net.WebUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebUtility*, "System.Net", "WebUtility");
#pragma pack(pop)
