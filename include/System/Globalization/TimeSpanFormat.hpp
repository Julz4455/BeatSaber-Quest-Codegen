// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.TimeSpanFormat
  class TimeSpanFormat : public ::Il2CppObject {
    public:
    // Nested type: System::Globalization::TimeSpanFormat::Pattern
    struct Pattern;
    // Nested type: System::Globalization::TimeSpanFormat::FormatLiterals
    struct FormatLiterals;
    // Autogenerated type: System.Globalization.TimeSpanFormat/FormatLiterals
    struct FormatLiterals : public System::ValueType {
      public:
      // System.String AppCompatLiteral
      // Offset: 0x0
      ::Il2CppString* AppCompatLiteral;
      // System.Int32 dd
      // Offset: 0x8
      int dd;
      // System.Int32 hh
      // Offset: 0xC
      int hh;
      // System.Int32 mm
      // Offset: 0x10
      int mm;
      // System.Int32 ss
      // Offset: 0x14
      int ss;
      // System.Int32 ff
      // Offset: 0x18
      int ff;
      // private System.String[] literals
      // Offset: 0x20
      ::Array<::Il2CppString*>* literals;
      // Creating value type constructor for type: FormatLiterals
      constexpr FormatLiterals(::Il2CppString* AppCompatLiteral_ = {}, int dd_ = {}, int hh_ = {}, int mm_ = {}, int ss_ = {}, int ff_ = {}, ::Array<::Il2CppString*>* literals_ = {}) noexcept : AppCompatLiteral{AppCompatLiteral_}, dd{dd_}, hh{hh_}, mm{mm_}, ss{ss_}, ff{ff_}, literals{literals_} {}
      // System.String get_Start()
      // Offset: 0xDB9E44
      ::Il2CppString* get_Start();
      // System.String get_DayHourSep()
      // Offset: 0xDB9E4C
      ::Il2CppString* get_DayHourSep();
      // System.String get_HourMinuteSep()
      // Offset: 0xDB9E54
      ::Il2CppString* get_HourMinuteSep();
      // System.String get_MinuteSecondSep()
      // Offset: 0xDB9E5C
      ::Il2CppString* get_MinuteSecondSep();
      // System.String get_SecondFractionSep()
      // Offset: 0xDB9E64
      ::Il2CppString* get_SecondFractionSep();
      // System.String get_End()
      // Offset: 0xDB9E6C
      ::Il2CppString* get_End();
      // static System.Globalization.TimeSpanFormat/FormatLiterals InitInvariant(System.Boolean isNegative)
      // Offset: 0x16887B4
      static System::Globalization::TimeSpanFormat::FormatLiterals InitInvariant(bool isNegative);
      // System.Void Init(System.String format, System.Boolean useInvariantFieldLengths)
      // Offset: 0xDB9E74
      void Init(::Il2CppString* format, bool useInvariantFieldLengths);
    }; // System.Globalization.TimeSpanFormat/FormatLiterals
    // Get static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals PositiveInvariantFormatLiterals
    static System::Globalization::TimeSpanFormat::FormatLiterals _get_PositiveInvariantFormatLiterals();
    // Set static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals PositiveInvariantFormatLiterals
    static void _set_PositiveInvariantFormatLiterals(System::Globalization::TimeSpanFormat::FormatLiterals value);
    // Get static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals NegativeInvariantFormatLiterals
    static System::Globalization::TimeSpanFormat::FormatLiterals _get_NegativeInvariantFormatLiterals();
    // Set static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals NegativeInvariantFormatLiterals
    static void _set_NegativeInvariantFormatLiterals(System::Globalization::TimeSpanFormat::FormatLiterals value);
    // static private System.String IntToString(System.Int32 n, System.Int32 digits)
    // Offset: 0x1687250
    static ::Il2CppString* IntToString(int n, int digits);
    // static System.String Format(System.TimeSpan value, System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x1687268
    static ::Il2CppString* Format(System::TimeSpan value, ::Il2CppString* format, System::IFormatProvider* formatProvider);
    // static private System.String FormatStandard(System.TimeSpan value, System.Boolean isInvariant, System.String format, System.Globalization.TimeSpanFormat/Pattern pattern)
    // Offset: 0x16874AC
    static ::Il2CppString* FormatStandard(System::TimeSpan value, bool isInvariant, ::Il2CppString* format, System::Globalization::TimeSpanFormat::Pattern pattern);
    // static System.String FormatCustomized(System.TimeSpan value, System.String format, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x16879B0
    static ::Il2CppString* FormatCustomized(System::TimeSpan value, ::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Void .cctor()
    // Offset: 0x1688708
    static void _cctor();
  }; // System.Globalization.TimeSpanFormat
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TimeSpanFormat*, "System.Globalization", "TimeSpanFormat");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TimeSpanFormat::FormatLiterals, "System.Globalization", "TimeSpanFormat/FormatLiterals");
#pragma pack(pop)
