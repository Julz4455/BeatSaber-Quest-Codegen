// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
  // Forward declaring type: NumberStyles
  struct NumberStyles;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Number
  class Number : public ::Il2CppObject {
    public:
    // Nested type: System::Number::NumberBuffer
    struct NumberBuffer;
    // static public System.Boolean NumberBufferToDecimal(System.Byte* number, ref System.Decimal value)
    // Offset: 0x1AAB590
    static bool NumberBufferToDecimal(uint8_t* number, System::Decimal& value);
    // static System.Boolean NumberBufferToDouble(System.Byte* number, ref System.Double value)
    // Offset: 0x1AAB594
    static bool NumberBufferToDouble(uint8_t* number, double& value);
    // static public System.String FormatDecimal(System.Decimal value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1AAB598
    static ::Il2CppString* FormatDecimal(System::Decimal value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatDouble(System.Double value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1AAB6FC
    static ::Il2CppString* FormatDouble(double value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatInt32(System.Int32 value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1AAB8A8
    static ::Il2CppString* FormatInt32(int value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatUInt32(System.UInt32 value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1AAB9D8
    static ::Il2CppString* FormatUInt32(uint value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatInt64(System.Int64 value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1AABB08
    static ::Il2CppString* FormatInt64(int64_t value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatUInt64(System.UInt64 value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1AABC34
    static ::Il2CppString* FormatUInt64(uint64_t value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatSingle(System.Single value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1AABD60
    static ::Il2CppString* FormatSingle(float value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static private System.Boolean HexNumberToInt32(ref System.Number/NumberBuffer number, ref System.Int32 value)
    // Offset: 0x1AABF0C
    static bool HexNumberToInt32(System::Number::NumberBuffer& number, int& value);
    // static private System.Boolean HexNumberToInt64(ref System.Number/NumberBuffer number, ref System.Int64 value)
    // Offset: 0x1AABFD8
    static bool HexNumberToInt64(System::Number::NumberBuffer& number, int64_t& value);
    // static private System.Boolean HexNumberToUInt32(ref System.Number/NumberBuffer number, ref System.UInt32 value)
    // Offset: 0x1AABF40
    static bool HexNumberToUInt32(System::Number::NumberBuffer& number, uint& value);
    // static private System.Boolean HexNumberToUInt64(ref System.Number/NumberBuffer number, ref System.UInt64 value)
    // Offset: 0x1AAC00C
    static bool HexNumberToUInt64(System::Number::NumberBuffer& number, uint64_t& value);
    // static private System.Boolean IsWhite(System.Char ch)
    // Offset: 0x1AAC0A8
    static bool IsWhite(::Il2CppChar ch);
    // static private System.Boolean NumberToInt32(ref System.Number/NumberBuffer number, ref System.Int32 value)
    // Offset: 0x1AAC0D0
    static bool NumberToInt32(System::Number::NumberBuffer& number, int& value);
    // static private System.Boolean NumberToInt64(ref System.Number/NumberBuffer number, ref System.Int64 value)
    // Offset: 0x1AAC15C
    static bool NumberToInt64(System::Number::NumberBuffer& number, int64_t& value);
    // static private System.Boolean NumberToUInt32(ref System.Number/NumberBuffer number, ref System.UInt32 value)
    // Offset: 0x1AAC1E0
    static bool NumberToUInt32(System::Number::NumberBuffer& number, uint& value);
    // static private System.Boolean NumberToUInt64(ref System.Number/NumberBuffer number, ref System.UInt64 value)
    // Offset: 0x1AAC264
    static bool NumberToUInt64(System::Number::NumberBuffer& number, uint64_t& value);
    // static private System.Char* MatchChars(System.Char* p, System.String str)
    // Offset: 0x1AAC2E8
    static ::Il2CppChar* MatchChars(::Il2CppChar* p, ::Il2CppString* str);
    // static private System.Char* MatchChars(System.Char* p, System.Char* str)
    // Offset: 0x1AAC35C
    static ::Il2CppChar* MatchChars(::Il2CppChar* p, ::Il2CppChar* str);
    // static System.Decimal ParseDecimal(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1AAC3A8
    static System::Decimal ParseDecimal(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static System.Double ParseDouble(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1AAC6C4
    static double ParseDouble(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static System.Int32 ParseInt32(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1AAC934
    static int ParseInt32(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info);
    // static System.Int64 ParseInt64(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1AACA9C
    static int64_t ParseInt64(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static private System.Boolean ParseNumber(ref System.Char* str, System.Globalization.NumberStyles options, ref System.Number/NumberBuffer number, System.Text.StringBuilder sb, System.Globalization.NumberFormatInfo numfmt, System.Boolean parseDecimal)
    // Offset: 0x1AACC04
    static bool ParseNumber(::Il2CppChar*& str, System::Globalization::NumberStyles options, System::Number::NumberBuffer& number, System::Text::StringBuilder* sb, System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal);
    // static System.Single ParseSingle(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1AAD12C
    static float ParseSingle(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static System.UInt32 ParseUInt32(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1AAD3A4
    static uint ParseUInt32(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static System.UInt64 ParseUInt64(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1AAD4EC
    static uint64_t ParseUInt64(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static private System.Void StringToNumber(System.String str, System.Globalization.NumberStyles options, ref System.Number/NumberBuffer number, System.Globalization.NumberFormatInfo info, System.Boolean parseDecimal)
    // Offset: 0x1AAC514
    static void StringToNumber(::Il2CppString* str, System::Globalization::NumberStyles options, System::Number::NumberBuffer& number, System::Globalization::NumberFormatInfo* info, bool parseDecimal);
    // static private System.Boolean TrailingZeros(System.String s, System.Int32 index)
    // Offset: 0x1AAD634
    static bool TrailingZeros(::Il2CppString* s, int index);
    // static System.Boolean TryParseDouble(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt, out System.Double result)
    // Offset: 0x1AAD69C
    static bool TryParseDouble(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt, double& result);
    // static System.Boolean TryParseInt32(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.Int32 result)
    // Offset: 0x1AAD7BC
    static bool TryParseInt32(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, int& result);
    // static System.Boolean TryParseInt64(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.Int64 result)
    // Offset: 0x1AAD8F4
    static bool TryParseInt64(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, int64_t& result);
    // static System.Boolean TryParseSingle(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt, out System.Single result)
    // Offset: 0x1AADA24
    static bool TryParseSingle(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt, float& result);
    // static System.Boolean TryParseUInt32(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.UInt32 result)
    // Offset: 0x1AADB7C
    static bool TryParseUInt32(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, uint& result);
    // static System.Boolean TryStringToNumber(System.String str, System.Globalization.NumberStyles options, ref System.Number/NumberBuffer number, System.Globalization.NumberFormatInfo numfmt, System.Boolean parseDecimal)
    // Offset: 0x1AAC920
    static bool TryStringToNumber(::Il2CppString* str, System::Globalization::NumberStyles options, System::Number::NumberBuffer& number, System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal);
    // static System.Boolean TryStringToNumber(System.String str, System.Globalization.NumberStyles options, ref System.Number/NumberBuffer number, System.Text.StringBuilder sb, System.Globalization.NumberFormatInfo numfmt, System.Boolean parseDecimal)
    // Offset: 0x1AADC98
    static bool TryStringToNumber(::Il2CppString* str, System::Globalization::NumberStyles options, System::Number::NumberBuffer& number, System::Text::StringBuilder* sb, System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal);
  }; // System.Number
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Number*, "System", "Number");
#pragma pack(pop)
