// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DateTimeParse/TM
#include "System/DateTimeParse_TM.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: Calendar
  class Calendar;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ParsingInfo
  struct ParsingInfo : public System::ValueType {
    public:
    // System.Globalization.Calendar calendar
    // Offset: 0x0
    System::Globalization::Calendar* calendar;
    // System.Int32 dayOfWeek
    // Offset: 0x8
    int dayOfWeek;
    // System.DateTimeParse/TM timeMark
    // Offset: 0xC
    System::DateTimeParse::TM timeMark;
    // System.Boolean fUseHour12
    // Offset: 0x10
    bool fUseHour12;
    // System.Boolean fUseTwoDigitYear
    // Offset: 0x11
    bool fUseTwoDigitYear;
    // System.Boolean fAllowInnerWhite
    // Offset: 0x12
    bool fAllowInnerWhite;
    // System.Boolean fAllowTrailingWhite
    // Offset: 0x13
    bool fAllowTrailingWhite;
    // System.Boolean fCustomNumberParser
    // Offset: 0x14
    bool fCustomNumberParser;
    // System.DateTimeParse/MatchNumberDelegate parseNumberDelegate
    // Offset: 0x18
    System::DateTimeParse::MatchNumberDelegate* parseNumberDelegate;
    // Creating value type constructor for type: ParsingInfo
    constexpr ParsingInfo(System::Globalization::Calendar* calendar_ = {}, int dayOfWeek_ = {}, System::DateTimeParse::TM timeMark_ = {}, bool fUseHour12_ = {}, bool fUseTwoDigitYear_ = {}, bool fAllowInnerWhite_ = {}, bool fAllowTrailingWhite_ = {}, bool fCustomNumberParser_ = {}, System::DateTimeParse::MatchNumberDelegate* parseNumberDelegate_ = {}) noexcept : calendar{calendar_}, dayOfWeek{dayOfWeek_}, timeMark{timeMark_}, fUseHour12{fUseHour12_}, fUseTwoDigitYear{fUseTwoDigitYear_}, fAllowInnerWhite{fAllowInnerWhite_}, fAllowTrailingWhite{fAllowTrailingWhite_}, fCustomNumberParser{fCustomNumberParser_}, parseNumberDelegate{parseNumberDelegate_} {}
    // System.Void Init()
    // Offset: 0xDC3A5C
    void Init();
  }; // System.ParsingInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParsingInfo, "System", "ParsingInfo");
#pragma pack(pop)
