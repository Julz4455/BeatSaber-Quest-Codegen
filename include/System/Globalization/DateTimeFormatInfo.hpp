// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
// Including type: System.Globalization.DateTimeFormatFlags
#include "System/Globalization/DateTimeFormatFlags.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Globalization.DateTimeStyles
#include "System/Globalization/DateTimeStyles.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureData
  class CultureData;
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
  // Forward declaring type: Calendar
  class Calendar;
  // Forward declaring type: TokenHashValue
  class TokenHashValue;
  // Forward declaring type: MonthNameStyles
  struct MonthNameStyles;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: DayOfWeek
  struct DayOfWeek;
  // Forward declaring type: __DTString
  struct __DTString;
  // Forward declaring type: TokenType
  struct TokenType;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.DateTimeFormatInfo
  class DateTimeFormatInfo : public ::Il2CppObject, public System::ICloneable, public System::IFormatProvider {
    public:
    // private System.Globalization.CultureData m_cultureData
    // Offset: 0x10
    System::Globalization::CultureData* m_cultureData;
    // System.String m_name
    // Offset: 0x18
    ::Il2CppString* m_name;
    // private System.String m_langName
    // Offset: 0x20
    ::Il2CppString* m_langName;
    // private System.Globalization.CompareInfo m_compareInfo
    // Offset: 0x28
    System::Globalization::CompareInfo* m_compareInfo;
    // private System.Globalization.CultureInfo m_cultureInfo
    // Offset: 0x30
    System::Globalization::CultureInfo* m_cultureInfo;
    // System.String amDesignator
    // Offset: 0x38
    ::Il2CppString* amDesignator;
    // System.String pmDesignator
    // Offset: 0x40
    ::Il2CppString* pmDesignator;
    // System.String dateSeparator
    // Offset: 0x48
    ::Il2CppString* dateSeparator;
    // System.String generalShortTimePattern
    // Offset: 0x50
    ::Il2CppString* generalShortTimePattern;
    // System.String generalLongTimePattern
    // Offset: 0x58
    ::Il2CppString* generalLongTimePattern;
    // System.String timeSeparator
    // Offset: 0x60
    ::Il2CppString* timeSeparator;
    // System.String monthDayPattern
    // Offset: 0x68
    ::Il2CppString* monthDayPattern;
    // System.String dateTimeOffsetPattern
    // Offset: 0x70
    ::Il2CppString* dateTimeOffsetPattern;
    // System.Globalization.Calendar calendar
    // Offset: 0x78
    System::Globalization::Calendar* calendar;
    // System.Int32 firstDayOfWeek
    // Offset: 0x80
    int firstDayOfWeek;
    // System.Int32 calendarWeekRule
    // Offset: 0x84
    int calendarWeekRule;
    // System.String fullDateTimePattern
    // Offset: 0x88
    ::Il2CppString* fullDateTimePattern;
    // System.String[] abbreviatedDayNames
    // Offset: 0x90
    ::Array<::Il2CppString*>* abbreviatedDayNames;
    // System.String[] m_superShortDayNames
    // Offset: 0x98
    ::Array<::Il2CppString*>* m_superShortDayNames;
    // System.String[] dayNames
    // Offset: 0xA0
    ::Array<::Il2CppString*>* dayNames;
    // System.String[] abbreviatedMonthNames
    // Offset: 0xA8
    ::Array<::Il2CppString*>* abbreviatedMonthNames;
    // System.String[] monthNames
    // Offset: 0xB0
    ::Array<::Il2CppString*>* monthNames;
    // System.String[] genitiveMonthNames
    // Offset: 0xB8
    ::Array<::Il2CppString*>* genitiveMonthNames;
    // System.String[] m_genitiveAbbreviatedMonthNames
    // Offset: 0xC0
    ::Array<::Il2CppString*>* m_genitiveAbbreviatedMonthNames;
    // System.String[] leapYearMonthNames
    // Offset: 0xC8
    ::Array<::Il2CppString*>* leapYearMonthNames;
    // System.String longDatePattern
    // Offset: 0xD0
    ::Il2CppString* longDatePattern;
    // System.String shortDatePattern
    // Offset: 0xD8
    ::Il2CppString* shortDatePattern;
    // System.String yearMonthPattern
    // Offset: 0xE0
    ::Il2CppString* yearMonthPattern;
    // System.String longTimePattern
    // Offset: 0xE8
    ::Il2CppString* longTimePattern;
    // System.String shortTimePattern
    // Offset: 0xF0
    ::Il2CppString* shortTimePattern;
    // private System.String[] allYearMonthPatterns
    // Offset: 0xF8
    ::Array<::Il2CppString*>* allYearMonthPatterns;
    // System.String[] allShortDatePatterns
    // Offset: 0x100
    ::Array<::Il2CppString*>* allShortDatePatterns;
    // System.String[] allLongDatePatterns
    // Offset: 0x108
    ::Array<::Il2CppString*>* allLongDatePatterns;
    // System.String[] allShortTimePatterns
    // Offset: 0x110
    ::Array<::Il2CppString*>* allShortTimePatterns;
    // System.String[] allLongTimePatterns
    // Offset: 0x118
    ::Array<::Il2CppString*>* allLongTimePatterns;
    // System.String[] m_eraNames
    // Offset: 0x120
    ::Array<::Il2CppString*>* m_eraNames;
    // System.String[] m_abbrevEraNames
    // Offset: 0x128
    ::Array<::Il2CppString*>* m_abbrevEraNames;
    // System.String[] m_abbrevEnglishEraNames
    // Offset: 0x130
    ::Array<::Il2CppString*>* m_abbrevEnglishEraNames;
    // System.Int32[] optionalCalendars
    // Offset: 0x138
    ::Array<int>* optionalCalendars;
    // System.Boolean m_isReadOnly
    // Offset: 0x140
    bool m_isReadOnly;
    // System.Globalization.DateTimeFormatFlags formatFlags
    // Offset: 0x144
    System::Globalization::DateTimeFormatFlags formatFlags;
    // private System.Int32 CultureID
    // Offset: 0x148
    int CultureID;
    // private System.Boolean m_useUserOverride
    // Offset: 0x14C
    bool m_useUserOverride;
    // private System.Boolean bUseCalendarInfo
    // Offset: 0x14D
    bool bUseCalendarInfo;
    // private System.Int32 nDataItem
    // Offset: 0x150
    int nDataItem;
    // System.Boolean m_isDefaultCalendar
    // Offset: 0x154
    bool m_isDefaultCalendar;
    // System.String[] m_dateWords
    // Offset: 0x158
    ::Array<::Il2CppString*>* m_dateWords;
    // private System.String m_fullTimeSpanPositivePattern
    // Offset: 0x160
    ::Il2CppString* m_fullTimeSpanPositivePattern;
    // private System.String m_fullTimeSpanNegativePattern
    // Offset: 0x168
    ::Il2CppString* m_fullTimeSpanNegativePattern;
    // private System.Globalization.TokenHashValue[] m_dtfiTokenHash
    // Offset: 0x170
    ::Array<System::Globalization::TokenHashValue*>* m_dtfiTokenHash;
    // Get static field: static private System.Globalization.DateTimeFormatInfo invariantInfo
    static System::Globalization::DateTimeFormatInfo* _get_invariantInfo();
    // Set static field: static private System.Globalization.DateTimeFormatInfo invariantInfo
    static void _set_invariantInfo(System::Globalization::DateTimeFormatInfo* value);
    // static field const value: static System.String rfc1123Pattern
    static constexpr const char* rfc1123Pattern = "ddd, dd MMM yyyy HH':'mm':'ss 'GMT'";
    // Get static field: static System.String rfc1123Pattern
    static ::Il2CppString* _get_rfc1123Pattern();
    // Set static field: static System.String rfc1123Pattern
    static void _set_rfc1123Pattern(::Il2CppString* value);
    // static field const value: static System.String sortableDateTimePattern
    static constexpr const char* sortableDateTimePattern = "yyyy'-'MM'-'dd'T'HH':'mm':'ss";
    // Get static field: static System.String sortableDateTimePattern
    static ::Il2CppString* _get_sortableDateTimePattern();
    // Set static field: static System.String sortableDateTimePattern
    static void _set_sortableDateTimePattern(::Il2CppString* value);
    // static field const value: static System.String universalSortableDateTimePattern
    static constexpr const char* universalSortableDateTimePattern = "yyyy'-'MM'-'dd HH':'mm':'ss'Z'";
    // Get static field: static System.String universalSortableDateTimePattern
    static ::Il2CppString* _get_universalSortableDateTimePattern();
    // Set static field: static System.String universalSortableDateTimePattern
    static void _set_universalSortableDateTimePattern(::Il2CppString* value);
    // static field const value: static private System.Int32 DEFAULT_ALL_DATETIMES_SIZE
    static constexpr const int DEFAULT_ALL_DATETIMES_SIZE = 132;
    // Get static field: static private System.Int32 DEFAULT_ALL_DATETIMES_SIZE
    static int _get_DEFAULT_ALL_DATETIMES_SIZE();
    // Set static field: static private System.Int32 DEFAULT_ALL_DATETIMES_SIZE
    static void _set_DEFAULT_ALL_DATETIMES_SIZE(int value);
    // Get static field: static System.Boolean preferExistingTokens
    static bool _get_preferExistingTokens();
    // Set static field: static System.Boolean preferExistingTokens
    static void _set_preferExistingTokens(bool value);
    // Get static field: static private System.Collections.Hashtable s_calendarNativeNames
    static System::Collections::Hashtable* _get_s_calendarNativeNames();
    // Set static field: static private System.Collections.Hashtable s_calendarNativeNames
    static void _set_s_calendarNativeNames(System::Collections::Hashtable* value);
    // static field const value: static System.Globalization.DateTimeStyles InvalidDateTimeStyles
    static constexpr const int InvalidDateTimeStyles = -256;
    // Get static field: static System.Globalization.DateTimeStyles InvalidDateTimeStyles
    static System::Globalization::DateTimeStyles _get_InvalidDateTimeStyles();
    // Set static field: static System.Globalization.DateTimeStyles InvalidDateTimeStyles
    static void _set_InvalidDateTimeStyles(System::Globalization::DateTimeStyles value);
    // static field const value: static private System.Int32 TOKEN_HASH_SIZE
    static constexpr const int TOKEN_HASH_SIZE = 199;
    // Get static field: static private System.Int32 TOKEN_HASH_SIZE
    static int _get_TOKEN_HASH_SIZE();
    // Set static field: static private System.Int32 TOKEN_HASH_SIZE
    static void _set_TOKEN_HASH_SIZE(int value);
    // static field const value: static private System.Int32 SECOND_PRIME
    static constexpr const int SECOND_PRIME = 197;
    // Get static field: static private System.Int32 SECOND_PRIME
    static int _get_SECOND_PRIME();
    // Set static field: static private System.Int32 SECOND_PRIME
    static void _set_SECOND_PRIME(int value);
    // static field const value: static private System.String dateSeparatorOrTimeZoneOffset
    static constexpr const char* dateSeparatorOrTimeZoneOffset = "-";
    // Get static field: static private System.String dateSeparatorOrTimeZoneOffset
    static ::Il2CppString* _get_dateSeparatorOrTimeZoneOffset();
    // Set static field: static private System.String dateSeparatorOrTimeZoneOffset
    static void _set_dateSeparatorOrTimeZoneOffset(::Il2CppString* value);
    // static field const value: static private System.String invariantDateSeparator
    static constexpr const char* invariantDateSeparator = "/";
    // Get static field: static private System.String invariantDateSeparator
    static ::Il2CppString* _get_invariantDateSeparator();
    // Set static field: static private System.String invariantDateSeparator
    static void _set_invariantDateSeparator(::Il2CppString* value);
    // static field const value: static private System.String invariantTimeSeparator
    static constexpr const char* invariantTimeSeparator = ":";
    // Get static field: static private System.String invariantTimeSeparator
    static ::Il2CppString* _get_invariantTimeSeparator();
    // Set static field: static private System.String invariantTimeSeparator
    static void _set_invariantTimeSeparator(::Il2CppString* value);
    // static field const value: static System.String IgnorablePeriod
    static constexpr const char* IgnorablePeriod = ".";
    // Get static field: static System.String IgnorablePeriod
    static ::Il2CppString* _get_IgnorablePeriod();
    // Set static field: static System.String IgnorablePeriod
    static void _set_IgnorablePeriod(::Il2CppString* value);
    // static field const value: static System.String IgnorableComma
    static constexpr const char* IgnorableComma = ",";
    // Get static field: static System.String IgnorableComma
    static ::Il2CppString* _get_IgnorableComma();
    // Set static field: static System.String IgnorableComma
    static void _set_IgnorableComma(::Il2CppString* value);
    // static field const value: static System.String CJKYearSuff
    static constexpr const char* CJKYearSuff = "\u5e74";
    // Get static field: static System.String CJKYearSuff
    static ::Il2CppString* _get_CJKYearSuff();
    // Set static field: static System.String CJKYearSuff
    static void _set_CJKYearSuff(::Il2CppString* value);
    // static field const value: static System.String CJKMonthSuff
    static constexpr const char* CJKMonthSuff = "\u6708";
    // Get static field: static System.String CJKMonthSuff
    static ::Il2CppString* _get_CJKMonthSuff();
    // Set static field: static System.String CJKMonthSuff
    static void _set_CJKMonthSuff(::Il2CppString* value);
    // static field const value: static System.String CJKDaySuff
    static constexpr const char* CJKDaySuff = "\u65e5";
    // Get static field: static System.String CJKDaySuff
    static ::Il2CppString* _get_CJKDaySuff();
    // Set static field: static System.String CJKDaySuff
    static void _set_CJKDaySuff(::Il2CppString* value);
    // static field const value: static System.String KoreanYearSuff
    static constexpr const char* KoreanYearSuff = "\ub144";
    // Get static field: static System.String KoreanYearSuff
    static ::Il2CppString* _get_KoreanYearSuff();
    // Set static field: static System.String KoreanYearSuff
    static void _set_KoreanYearSuff(::Il2CppString* value);
    // static field const value: static System.String KoreanMonthSuff
    static constexpr const char* KoreanMonthSuff = "\uc6d4";
    // Get static field: static System.String KoreanMonthSuff
    static ::Il2CppString* _get_KoreanMonthSuff();
    // Set static field: static System.String KoreanMonthSuff
    static void _set_KoreanMonthSuff(::Il2CppString* value);
    // static field const value: static System.String KoreanDaySuff
    static constexpr const char* KoreanDaySuff = "\uc77c";
    // Get static field: static System.String KoreanDaySuff
    static ::Il2CppString* _get_KoreanDaySuff();
    // Set static field: static System.String KoreanDaySuff
    static void _set_KoreanDaySuff(::Il2CppString* value);
    // static field const value: static System.String KoreanHourSuff
    static constexpr const char* KoreanHourSuff = "\uc2dc";
    // Get static field: static System.String KoreanHourSuff
    static ::Il2CppString* _get_KoreanHourSuff();
    // Set static field: static System.String KoreanHourSuff
    static void _set_KoreanHourSuff(::Il2CppString* value);
    // static field const value: static System.String KoreanMinuteSuff
    static constexpr const char* KoreanMinuteSuff = "\ubd84";
    // Get static field: static System.String KoreanMinuteSuff
    static ::Il2CppString* _get_KoreanMinuteSuff();
    // Set static field: static System.String KoreanMinuteSuff
    static void _set_KoreanMinuteSuff(::Il2CppString* value);
    // static field const value: static System.String KoreanSecondSuff
    static constexpr const char* KoreanSecondSuff = "\ucd08";
    // Get static field: static System.String KoreanSecondSuff
    static ::Il2CppString* _get_KoreanSecondSuff();
    // Set static field: static System.String KoreanSecondSuff
    static void _set_KoreanSecondSuff(::Il2CppString* value);
    // static field const value: static System.String CJKHourSuff
    static constexpr const char* CJKHourSuff = "\u6642";
    // Get static field: static System.String CJKHourSuff
    static ::Il2CppString* _get_CJKHourSuff();
    // Set static field: static System.String CJKHourSuff
    static void _set_CJKHourSuff(::Il2CppString* value);
    // static field const value: static System.String ChineseHourSuff
    static constexpr const char* ChineseHourSuff = "\u65f6";
    // Get static field: static System.String ChineseHourSuff
    static ::Il2CppString* _get_ChineseHourSuff();
    // Set static field: static System.String ChineseHourSuff
    static void _set_ChineseHourSuff(::Il2CppString* value);
    // static field const value: static System.String CJKMinuteSuff
    static constexpr const char* CJKMinuteSuff = "\u5206";
    // Get static field: static System.String CJKMinuteSuff
    static ::Il2CppString* _get_CJKMinuteSuff();
    // Set static field: static System.String CJKMinuteSuff
    static void _set_CJKMinuteSuff(::Il2CppString* value);
    // static field const value: static System.String CJKSecondSuff
    static constexpr const char* CJKSecondSuff = "\u79d2";
    // Get static field: static System.String CJKSecondSuff
    static ::Il2CppString* _get_CJKSecondSuff();
    // Set static field: static System.String CJKSecondSuff
    static void _set_CJKSecondSuff(::Il2CppString* value);
    // static field const value: static System.String LocalTimeMark
    static constexpr const char* LocalTimeMark = "T";
    // Get static field: static System.String LocalTimeMark
    static ::Il2CppString* _get_LocalTimeMark();
    // Set static field: static System.String LocalTimeMark
    static void _set_LocalTimeMark(::Il2CppString* value);
    // static field const value: static System.String KoreanLangName
    static constexpr const char* KoreanLangName = "ko";
    // Get static field: static System.String KoreanLangName
    static ::Il2CppString* _get_KoreanLangName();
    // Set static field: static System.String KoreanLangName
    static void _set_KoreanLangName(::Il2CppString* value);
    // static field const value: static System.String JapaneseLangName
    static constexpr const char* JapaneseLangName = "ja";
    // Get static field: static System.String JapaneseLangName
    static ::Il2CppString* _get_JapaneseLangName();
    // Set static field: static System.String JapaneseLangName
    static void _set_JapaneseLangName(::Il2CppString* value);
    // static field const value: static System.String EnglishLangName
    static constexpr const char* EnglishLangName = "en";
    // Get static field: static System.String EnglishLangName
    static ::Il2CppString* _get_EnglishLangName();
    // Set static field: static System.String EnglishLangName
    static void _set_EnglishLangName(::Il2CppString* value);
    // Get static field: static private System.Globalization.DateTimeFormatInfo s_jajpDTFI
    static System::Globalization::DateTimeFormatInfo* _get_s_jajpDTFI();
    // Set static field: static private System.Globalization.DateTimeFormatInfo s_jajpDTFI
    static void _set_s_jajpDTFI(System::Globalization::DateTimeFormatInfo* value);
    // Get static field: static private System.Globalization.DateTimeFormatInfo s_zhtwDTFI
    static System::Globalization::DateTimeFormatInfo* _get_s_zhtwDTFI();
    // Set static field: static private System.Globalization.DateTimeFormatInfo s_zhtwDTFI
    static void _set_s_zhtwDTFI(System::Globalization::DateTimeFormatInfo* value);
    // static private System.Boolean InitPreferExistingTokens()
    // Offset: 0x1216D40
    static bool InitPreferExistingTokens();
    // private System.String get_CultureName()
    // Offset: 0x1216D48
    ::Il2CppString* get_CultureName();
    // private System.Globalization.CultureInfo get_Culture()
    // Offset: 0x1216D90
    System::Globalization::CultureInfo* get_Culture();
    // private System.String get_LanguageName()
    // Offset: 0x1216E28
    ::Il2CppString* get_LanguageName();
    // private System.String[] internalGetAbbreviatedDayOfWeekNames()
    // Offset: 0x1216E70
    ::Array<::Il2CppString*>* internalGetAbbreviatedDayOfWeekNames();
    // private System.String[] internalGetDayOfWeekNames()
    // Offset: 0x1216EE0
    ::Array<::Il2CppString*>* internalGetDayOfWeekNames();
    // private System.String[] internalGetAbbreviatedMonthNames()
    // Offset: 0x1216F50
    ::Array<::Il2CppString*>* internalGetAbbreviatedMonthNames();
    // private System.String[] internalGetMonthNames()
    // Offset: 0x1216FC0
    ::Array<::Il2CppString*>* internalGetMonthNames();
    // System.Void .ctor(System.Globalization.CultureData cultureData, System.Globalization.Calendar cal)
    // Offset: 0x1212F44
    static DateTimeFormatInfo* New_ctor(System::Globalization::CultureData* cultureData, System::Globalization::Calendar* cal);
    // private System.Void InitializeOverridableProperties(System.Globalization.CultureData cultureData, System.Int32 calendarID)
    // Offset: 0x121758C
    void InitializeOverridableProperties(System::Globalization::CultureData* cultureData, int calendarID);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x121770C
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x1217F44
    void OnSerializing(System::Runtime::Serialization::StreamingContext ctx);
    // static public System.Globalization.DateTimeFormatInfo get_InvariantInfo()
    // Offset: 0x12184FC
    static System::Globalization::DateTimeFormatInfo* get_InvariantInfo();
    // static public System.Globalization.DateTimeFormatInfo get_CurrentInfo()
    // Offset: 0x12185F4
    static System::Globalization::DateTimeFormatInfo* get_CurrentInfo();
    // static public System.Globalization.DateTimeFormatInfo GetInstance(System.IFormatProvider provider)
    // Offset: 0x12186E0
    static System::Globalization::DateTimeFormatInfo* GetInstance(System::IFormatProvider* provider);
    // public System.String get_AMDesignator()
    // Offset: 0x1218928
    ::Il2CppString* get_AMDesignator();
    // public System.Globalization.Calendar get_Calendar()
    // Offset: 0x1218930
    System::Globalization::Calendar* get_Calendar();
    // public System.Void set_Calendar(System.Globalization.Calendar value)
    // Offset: 0x12171B4
    void set_Calendar(System::Globalization::Calendar* value);
    // private System.Int32[] get_OptionalCalendars()
    // Offset: 0x1218938
    ::Array<int>* get_OptionalCalendars();
    // System.String[] get_EraNames()
    // Offset: 0x12189BC
    ::Array<::Il2CppString*>* get_EraNames();
    // public System.String GetEraName(System.Int32 era)
    // Offset: 0x1218A28
    ::Il2CppString* GetEraName(int era);
    // System.String[] get_AbbreviatedEraNames()
    // Offset: 0x1218B38
    ::Array<::Il2CppString*>* get_AbbreviatedEraNames();
    // public System.String GetAbbreviatedEraName(System.Int32 era)
    // Offset: 0x1218BA4
    ::Il2CppString* GetAbbreviatedEraName(int era);
    // System.String[] get_AbbreviatedEnglishEraNames()
    // Offset: 0x1218CCC
    ::Array<::Il2CppString*>* get_AbbreviatedEnglishEraNames();
    // public System.String get_DateSeparator()
    // Offset: 0x1218D38
    ::Il2CppString* get_DateSeparator();
    // public System.String get_FullDateTimePattern()
    // Offset: 0x1218D40
    ::Il2CppString* get_FullDateTimePattern();
    // public System.String get_LongDatePattern()
    // Offset: 0x12180E8
    ::Il2CppString* get_LongDatePattern();
    // public System.Void set_LongDatePattern(System.String value)
    // Offset: 0x1217948
    void set_LongDatePattern(::Il2CppString* value);
    // public System.String get_LongTimePattern()
    // Offset: 0x1218088
    ::Il2CppString* get_LongTimePattern();
    // public System.Void set_LongTimePattern(System.String value)
    // Offset: 0x1217CD4
    void set_LongTimePattern(::Il2CppString* value);
    // public System.String get_MonthDayPattern()
    // Offset: 0x1218E94
    ::Il2CppString* get_MonthDayPattern();
    // public System.String get_PMDesignator()
    // Offset: 0x1218F04
    ::Il2CppString* get_PMDesignator();
    // public System.String get_RFC1123Pattern()
    // Offset: 0x1218F0C
    ::Il2CppString* get_RFC1123Pattern();
    // public System.String get_ShortDatePattern()
    // Offset: 0x12181A8
    ::Il2CppString* get_ShortDatePattern();
    // public System.Void set_ShortDatePattern(System.String value)
    // Offset: 0x1217A70
    void set_ShortDatePattern(::Il2CppString* value);
    // public System.String get_ShortTimePattern()
    // Offset: 0x1218148
    ::Il2CppString* get_ShortTimePattern();
    // public System.Void set_ShortTimePattern(System.String value)
    // Offset: 0x1217E1C
    void set_ShortTimePattern(::Il2CppString* value);
    // public System.String get_SortableDateTimePattern()
    // Offset: 0x1219010
    ::Il2CppString* get_SortableDateTimePattern();
    // System.String get_GeneralShortTimePattern()
    // Offset: 0x1219058
    ::Il2CppString* get_GeneralShortTimePattern();
    // System.String get_GeneralLongTimePattern()
    // Offset: 0x12190F0
    ::Il2CppString* get_GeneralLongTimePattern();
    // System.String get_DateTimeOffsetPattern()
    // Offset: 0x1219188
    ::Il2CppString* get_DateTimeOffsetPattern();
    // public System.String get_TimeSeparator()
    // Offset: 0x1219338
    ::Il2CppString* get_TimeSeparator();
    // public System.String get_UniversalSortableDateTimePattern()
    // Offset: 0x1219340
    ::Il2CppString* get_UniversalSortableDateTimePattern();
    // public System.String get_YearMonthPattern()
    // Offset: 0x1218208
    ::Il2CppString* get_YearMonthPattern();
    // public System.Void set_YearMonthPattern(System.String value)
    // Offset: 0x1217BB8
    void set_YearMonthPattern(::Il2CppString* value);
    // public System.String[] get_AbbreviatedDayNames()
    // Offset: 0x12193F8
    ::Array<::Il2CppString*>* get_AbbreviatedDayNames();
    // public System.String[] get_DayNames()
    // Offset: 0x121947C
    ::Array<::Il2CppString*>* get_DayNames();
    // public System.String[] get_AbbreviatedMonthNames()
    // Offset: 0x1219500
    ::Array<::Il2CppString*>* get_AbbreviatedMonthNames();
    // public System.String[] get_MonthNames()
    // Offset: 0x1219584
    ::Array<::Il2CppString*>* get_MonthNames();
    // System.Boolean get_HasSpacesInMonthNames()
    // Offset: 0x1219608
    bool get_HasSpacesInMonthNames();
    // System.Boolean get_HasSpacesInDayNames()
    // Offset: 0x1219784
    bool get_HasSpacesInDayNames();
    // System.String internalGetMonthName(System.Int32 month, System.Globalization.MonthNameStyles style, System.Boolean abbreviated)
    // Offset: 0x121979C
    ::Il2CppString* internalGetMonthName(int month, System::Globalization::MonthNameStyles style, bool abbreviated);
    // private System.String[] internalGetGenitiveMonthNames(System.Boolean abbreviated)
    // Offset: 0x121997C
    ::Array<::Il2CppString*>* internalGetGenitiveMonthNames(bool abbreviated);
    // System.String[] internalGetLeapYearMonthNames()
    // Offset: 0x1219A2C
    ::Array<::Il2CppString*>* internalGetLeapYearMonthNames();
    // public System.String GetAbbreviatedDayName(System.DayOfWeek dayofweek)
    // Offset: 0x1219A9C
    ::Il2CppString* GetAbbreviatedDayName(System::DayOfWeek dayofweek);
    // static private System.String[] GetCombinedPatterns(System.String[] patterns1, System.String[] patterns2, System.String connectString)
    // Offset: 0x1219C14
    static ::Array<::Il2CppString*>* GetCombinedPatterns(::Array<::Il2CppString*>* patterns1, ::Array<::Il2CppString*>* patterns2, ::Il2CppString* connectString);
    // public System.String[] GetAllDateTimePatterns(System.Char format)
    // Offset: 0x1219DAC
    ::Array<::Il2CppString*>* GetAllDateTimePatterns(::Il2CppChar format);
    // public System.String GetDayName(System.DayOfWeek dayofweek)
    // Offset: 0x121A10C
    ::Il2CppString* GetDayName(System::DayOfWeek dayofweek);
    // public System.String GetAbbreviatedMonthName(System.Int32 month)
    // Offset: 0x121A284
    ::Il2CppString* GetAbbreviatedMonthName(int month);
    // public System.String GetMonthName(System.Int32 month)
    // Offset: 0x121A404
    ::Il2CppString* GetMonthName(int month);
    // static private System.String[] GetMergedPatterns(System.String[] patterns, System.String defaultPattern)
    // Offset: 0x121A584
    static ::Array<::Il2CppString*>* GetMergedPatterns(::Array<::Il2CppString*>* patterns, ::Il2CppString* defaultPattern);
    // private System.String[] get_AllYearMonthPatterns()
    // Offset: 0x1218478
    ::Array<::Il2CppString*>* get_AllYearMonthPatterns();
    // private System.String[] get_AllShortDatePatterns()
    // Offset: 0x12183F4
    ::Array<::Il2CppString*>* get_AllShortDatePatterns();
    // private System.String[] get_AllShortTimePatterns()
    // Offset: 0x1218370
    ::Array<::Il2CppString*>* get_AllShortTimePatterns();
    // private System.String[] get_AllLongDatePatterns()
    // Offset: 0x12182EC
    ::Array<::Il2CppString*>* get_AllLongDatePatterns();
    // private System.String[] get_AllLongTimePatterns()
    // Offset: 0x1218268
    ::Array<::Il2CppString*>* get_AllLongTimePatterns();
    // private System.String[] get_UnclonedYearMonthPatterns()
    // Offset: 0x1219388
    ::Array<::Il2CppString*>* get_UnclonedYearMonthPatterns();
    // private System.String[] get_UnclonedShortDatePatterns()
    // Offset: 0x1218F54
    ::Array<::Il2CppString*>* get_UnclonedShortDatePatterns();
    // private System.String[] get_UnclonedLongDatePatterns()
    // Offset: 0x1218DD8
    ::Array<::Il2CppString*>* get_UnclonedLongDatePatterns();
    // private System.String[] get_UnclonedShortTimePatterns()
    // Offset: 0x1218FC0
    ::Array<::Il2CppString*>* get_UnclonedShortTimePatterns();
    // private System.String[] get_UnclonedLongTimePatterns()
    // Offset: 0x1218E44
    ::Array<::Il2CppString*>* get_UnclonedLongTimePatterns();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x121A7A4
    bool get_IsReadOnly();
    // System.String get_FullTimeSpanPositivePattern()
    // Offset: 0x121A7AC
    ::Il2CppString* get_FullTimeSpanPositivePattern();
    // System.String get_FullTimeSpanNegativePattern()
    // Offset: 0x121A880
    ::Il2CppString* get_FullTimeSpanNegativePattern();
    // System.Globalization.CompareInfo get_CompareInfo()
    // Offset: 0x121A904
    System::Globalization::CompareInfo* get_CompareInfo();
    // System.Globalization.DateTimeFormatFlags get_FormatFlags()
    // Offset: 0x1219620
    System::Globalization::DateTimeFormatFlags get_FormatFlags();
    // System.Boolean get_HasForceTwoDigitYears()
    // Offset: 0x121AAC4
    bool get_HasForceTwoDigitYears();
    // System.Boolean YearMonthAdjustment(System.Int32 year, System.Int32 month, System.Boolean parsedMonthName)
    // Offset: 0x121AAF8
    bool YearMonthAdjustment(int& year, int& month, bool parsedMonthName);
    // static System.Globalization.DateTimeFormatInfo GetJapaneseCalendarDTFI()
    // Offset: 0x121AC1C
    static System::Globalization::DateTimeFormatInfo* GetJapaneseCalendarDTFI();
    // static System.Globalization.DateTimeFormatInfo GetTaiwanCalendarDTFI()
    // Offset: 0x121AE20
    static System::Globalization::DateTimeFormatInfo* GetTaiwanCalendarDTFI();
    // private System.Void ClearTokenHashTable()
    // Offset: 0x1218988
    void ClearTokenHashTable();
    // System.Globalization.TokenHashValue[] CreateTokenHashTable()
    // Offset: 0x121AF4C
    ::Array<System::Globalization::TokenHashValue*>* CreateTokenHashTable();
    // private System.Void AddMonthNames(System.Globalization.TokenHashValue[] temp, System.String monthPostfix)
    // Offset: 0x121C35C
    void AddMonthNames(::Array<System::Globalization::TokenHashValue*>* temp, ::Il2CppString* monthPostfix);
    // static private System.Boolean TryParseHebrewNumber(System.__DTString str, System.Boolean badFormat, System.Int32 number)
    // Offset: 0x121C418
    static bool TryParseHebrewNumber(System::__DTString& str, bool& badFormat, int& number);
    // static private System.Boolean IsHebrewChar(System.Char ch)
    // Offset: 0x121C86C
    static bool IsHebrewChar(::Il2CppChar ch);
    // System.Boolean Tokenize(System.TokenType TokenMask, System.TokenType tokenType, System.Int32 tokenValue, System.__DTString str)
    // Offset: 0x121C880
    bool Tokenize(System::TokenType TokenMask, System::TokenType& tokenType, int& tokenValue, System::__DTString& str);
    // private System.Void InsertAtCurrentHashNode(System.Globalization.TokenHashValue[] hashTable, System.String str, System.Char ch, System.TokenType tokenType, System.Int32 tokenValue, System.Int32 pos, System.Int32 hashcode, System.Int32 hashProbe)
    // Offset: 0x121CC94
    void InsertAtCurrentHashNode(::Array<System::Globalization::TokenHashValue*>* hashTable, ::Il2CppString* str, ::Il2CppChar ch, System::TokenType tokenType, int tokenValue, int pos, int hashcode, int hashProbe);
    // private System.Void InsertHash(System.Globalization.TokenHashValue[] hashTable, System.String str, System.TokenType tokenType, System.Int32 tokenValue)
    // Offset: 0x121BC18
    void InsertHash(::Array<System::Globalization::TokenHashValue*>* hashTable, ::Il2CppString* str, System::TokenType tokenType, int tokenValue);
    // static private System.Void .cctor()
    // Offset: 0x121CE98
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1217030
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DateTimeFormatInfo* New_ctor();
    // public System.Object GetFormat(System.Type formatType)
    // Offset: 0x121888C
    // Implemented from: System.IFormatProvider
    // Base method: System.Object IFormatProvider::GetFormat(System.Type formatType)
    ::Il2CppObject* GetFormat(System::Type* formatType);
    // public System.Object Clone()
    // Offset: 0x1212628
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
  }; // System.Globalization.DateTimeFormatInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::DateTimeFormatInfo*, "System.Globalization", "DateTimeFormatInfo");
#pragma pack(pop)
