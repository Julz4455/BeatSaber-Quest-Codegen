// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeType
  class TimeType;
  // Forward declaring type: DateTimeKind
  struct DateTimeKind;
  // Forward declaring type: TimeZoneInfoOptions
  struct TimeZoneInfoOptions;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryKey
  class RegistryKey;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TimeZoneInfo
  class TimeZoneInfo : public ::Il2CppObject, public System::IEquatable_1<System::TimeZoneInfo*>, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback {
    public:
    // Nested type: System::TimeZoneInfo::AdjustmentRule
    class AdjustmentRule;
    // Nested type: System::TimeZoneInfo::TransitionTime
    struct TransitionTime;
    // Nested type: System::TimeZoneInfo::SYSTEMTIME
    struct SYSTEMTIME;
    // Nested type: System::TimeZoneInfo::TIME_ZONE_INFORMATION
    struct TIME_ZONE_INFORMATION;
    // Nested type: System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION
    struct DYNAMIC_TIME_ZONE_INFORMATION;
    // Nested type: System::TimeZoneInfo::$$c
    class $$c;
    // private System.TimeSpan baseUtcOffset
    // Offset: 0x10
    System::TimeSpan baseUtcOffset;
    // private System.String daylightDisplayName
    // Offset: 0x18
    ::Il2CppString* daylightDisplayName;
    // private System.String displayName
    // Offset: 0x20
    ::Il2CppString* displayName;
    // private System.String id
    // Offset: 0x28
    ::Il2CppString* id;
    // private System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeType>> transitions
    // Offset: 0x30
    System::Collections::Generic::List_1<System::Collections::Generic::KeyValuePair_2<System::DateTime, System::TimeType*>>* transitions;
    // private System.String standardDisplayName
    // Offset: 0x38
    ::Il2CppString* standardDisplayName;
    // private System.Boolean supportsDaylightSavingTime
    // Offset: 0x40
    bool supportsDaylightSavingTime;
    // private System.TimeZoneInfo/AdjustmentRule[] adjustmentRules
    // Offset: 0x48
    ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules;
    // Get static field: static private System.TimeZoneInfo local
    static System::TimeZoneInfo* _get_local();
    // Set static field: static private System.TimeZoneInfo local
    static void _set_local(System::TimeZoneInfo* value);
    // Get static field: static private System.Boolean readlinkNotFound
    static bool _get_readlinkNotFound();
    // Set static field: static private System.Boolean readlinkNotFound
    static void _set_readlinkNotFound(bool value);
    // Get static field: static private System.TimeZoneInfo utc
    static System::TimeZoneInfo* _get_utc();
    // Set static field: static private System.TimeZoneInfo utc
    static void _set_utc(System::TimeZoneInfo* value);
    // Get static field: static private System.String timeZoneDirectory
    static ::Il2CppString* _get_timeZoneDirectory();
    // Set static field: static private System.String timeZoneDirectory
    static void _set_timeZoneDirectory(::Il2CppString* value);
    // Get static field: static private Microsoft.Win32.RegistryKey timeZoneKey
    static Microsoft::Win32::RegistryKey* _get_timeZoneKey();
    // Set static field: static private Microsoft.Win32.RegistryKey timeZoneKey
    static void _set_timeZoneKey(Microsoft::Win32::RegistryKey* value);
    // Get static field: static private Microsoft.Win32.RegistryKey localZoneKey
    static Microsoft::Win32::RegistryKey* _get_localZoneKey();
    // Set static field: static private Microsoft.Win32.RegistryKey localZoneKey
    static void _set_localZoneKey(Microsoft::Win32::RegistryKey* value);
    // Get static field: static private System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> systemTimeZones
    static System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* _get_systemTimeZones();
    // Set static field: static private System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> systemTimeZones
    static void _set_systemTimeZones(System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* value);
    // static System.Boolean UtcOffsetOutOfRange(System.TimeSpan offset)
    // Offset: 0xC4D77C
    static bool UtcOffsetOutOfRange(System::TimeSpan offset);
    // static private System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> CreateAdjustmentRule(System.Int32 year, System.Int64[] data, System.String[] names, System.String standardNameCurrentYear, System.String daylightNameCurrentYear)
    // Offset: 0xC4D7AC
    static System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* CreateAdjustmentRule(int year, ::Array<int64_t>*& data, ::Array<::Il2CppString*>*& names, ::Il2CppString* standardNameCurrentYear, ::Il2CppString* daylightNameCurrentYear);
    // static private System.TimeZoneInfo CreateLocalUnity()
    // Offset: 0xC4DEA4
    static System::TimeZoneInfo* CreateLocalUnity();
    // static System.UInt32 EnumDynamicTimeZoneInformation(System.UInt32 dwIndex, System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation)
    // Offset: 0xC4E340
    static uint EnumDynamicTimeZoneInformation(uint dwIndex, System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation);
    // static System.UInt32 GetDynamicTimeZoneInformation(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation)
    // Offset: 0xC4E430
    static uint GetDynamicTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation);
    // static System.UInt32 GetDynamicTimeZoneInformationWin32(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation)
    // Offset: 0xC4E510
    static uint GetDynamicTimeZoneInformationWin32(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation);
    // static System.UInt32 GetDynamicTimeZoneInformationEffectiveYears(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation, System.UInt32 FirstYear, System.UInt32 LastYear)
    // Offset: 0xC4E5F0
    static uint GetDynamicTimeZoneInformationEffectiveYears(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation, uint& FirstYear, uint& LastYear);
    // static System.Boolean GetTimeZoneInformationForYear(System.UInt16 wYear, System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION pdtzi, System.TimeZoneInfo/TIME_ZONE_INFORMATION ptzi)
    // Offset: 0xC4E6F4
    static bool GetTimeZoneInformationForYear(uint16_t wYear, System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pdtzi, System::TimeZoneInfo::TIME_ZONE_INFORMATION& ptzi);
    // static System.TimeZoneInfo/AdjustmentRule CreateAdjustmentRuleFromTimeZoneInformation(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, System.DateTime startDate, System.DateTime endDate, System.Int32 defaultBaseUtcOffset)
    // Offset: 0xC4E84C
    static System::TimeZoneInfo::AdjustmentRule* CreateAdjustmentRuleFromTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& timeZoneInformation, System::DateTime startDate, System::DateTime endDate, int defaultBaseUtcOffset);
    // static private System.Boolean TransitionTimeFromTimeZoneInformation(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, System.TimeZoneInfo/TransitionTime transitionTime, System.Boolean readStartDate)
    // Offset: 0xC4EAE0
    static bool TransitionTimeFromTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, System::TimeZoneInfo::TransitionTime& transitionTime, bool readStartDate);
    // static System.TimeZoneInfo TryCreateTimeZone(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation)
    // Offset: 0xC4EC74
    static System::TimeZoneInfo* TryCreateTimeZone(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation);
    // static System.TimeZoneInfo GetLocalTimeZoneInfoWinRTFallback()
    // Offset: 0xC4F5FC
    static System::TimeZoneInfo* GetLocalTimeZoneInfoWinRTFallback();
    // static System.String GetLocalTimeZoneKeyNameWin32Fallback()
    // Offset: 0xC4F7A8
    static ::Il2CppString* GetLocalTimeZoneKeyNameWin32Fallback();
    // static System.TimeZoneInfo FindSystemTimeZoneByIdWinRTFallback(System.String id)
    // Offset: 0xC4F8B8
    static System::TimeZoneInfo* FindSystemTimeZoneByIdWinRTFallback(::Il2CppString* id);
    // static System.Collections.Generic.List`1<System.TimeZoneInfo> GetSystemTimeZonesWinRTFallback()
    // Offset: 0xC4FC38
    static System::Collections::Generic::List_1<System::TimeZoneInfo*>* GetSystemTimeZonesWinRTFallback();
    // public System.TimeSpan get_BaseUtcOffset()
    // Offset: 0xC4FE6C
    System::TimeSpan get_BaseUtcOffset();
    // public System.String get_DisplayName()
    // Offset: 0xC4FE74
    ::Il2CppString* get_DisplayName();
    // public System.String get_Id()
    // Offset: 0xC4FE7C
    ::Il2CppString* get_Id();
    // static public System.TimeZoneInfo get_Local()
    // Offset: 0xC4FDB4
    static System::TimeZoneInfo* get_Local();
    // static private System.Int32 readlink(System.String path, System.Byte[] buffer, System.Int32 buflen)
    // Offset: 0xC50360
    static int readlink(::Il2CppString* path, ::Array<uint8_t>* buffer, int buflen);
    // static private System.String readlink(System.String path)
    // Offset: 0xC50418
    static ::Il2CppString* readlink(::Il2CppString* path);
    // static private System.Boolean TryGetNameFromPath(System.String path, System.String name)
    // Offset: 0xC505C8
    static bool TryGetNameFromPath(::Il2CppString* path, ::Il2CppString*& name);
    // static private System.TimeZoneInfo CreateLocal()
    // Offset: 0xC4FE84
    static System::TimeZoneInfo* CreateLocal();
    // static private System.TimeZoneInfo FindSystemTimeZoneByIdCore(System.String id)
    // Offset: 0xC50EAC
    static System::TimeZoneInfo* FindSystemTimeZoneByIdCore(::Il2CppString* id);
    // static private System.Void GetSystemTimeZonesCore(System.Collections.Generic.List`1<System.TimeZoneInfo> systemTimeZones)
    // Offset: 0xC50F30
    static void GetSystemTimeZonesCore(System::Collections::Generic::List_1<System::TimeZoneInfo*>* systemTimeZones);
    // public System.Boolean get_SupportsDaylightSavingTime()
    // Offset: 0xC51A3C
    bool get_SupportsDaylightSavingTime();
    // static public System.TimeZoneInfo get_Utc()
    // Offset: 0xC4F708
    static System::TimeZoneInfo* get_Utc();
    // static private System.String get_TimeZoneDirectory()
    // Offset: 0xC50828
    static ::Il2CppString* get_TimeZoneDirectory();
    // static private System.Boolean get_IsWindows()
    // Offset: 0xC508A0
    static bool get_IsWindows();
    // static private System.String TrimSpecial(System.String str)
    // Offset: 0xC50A30
    static ::Il2CppString* TrimSpecial(::Il2CppString* str);
    // static private Microsoft.Win32.RegistryKey get_TimeZoneKey()
    // Offset: 0xC518F8
    static Microsoft::Win32::RegistryKey* get_TimeZoneKey();
    // static private Microsoft.Win32.RegistryKey get_LocalZoneKey()
    // Offset: 0xC508EC
    static Microsoft::Win32::RegistryKey* get_LocalZoneKey();
    // static private System.Boolean TryAddTicks(System.DateTime date, System.Int64 ticks, System.DateTime result, System.DateTimeKind kind)
    // Offset: 0xC51A54
    static bool TryAddTicks(System::DateTime date, int64_t ticks, System::DateTime& result, System::DateTimeKind kind);
    // static public System.DateTime ConvertTime(System.DateTime dateTime, System.TimeZoneInfo sourceTimeZone, System.TimeZoneInfo destinationTimeZone)
    // Offset: 0xC51BD0
    static System::DateTime ConvertTime(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone, System::TimeZoneInfo* destinationTimeZone);
    // private System.DateTime ConvertTimeFromUtc(System.DateTime dateTime)
    // Offset: 0xC51FD0
    System::DateTime ConvertTimeFromUtc(System::DateTime dateTime);
    // static public System.DateTime ConvertTimeFromUtc(System.DateTime dateTime, System.TimeZoneInfo destinationTimeZone)
    // Offset: 0xC51F3C
    static System::DateTime ConvertTimeFromUtc(System::DateTime dateTime, System::TimeZoneInfo* destinationTimeZone);
    // static System.DateTime ConvertTimeToUtc(System.DateTime dateTime, System.TimeZoneInfoOptions flags)
    // Offset: 0xC52154
    static System::DateTime ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfoOptions flags);
    // static public System.DateTime ConvertTimeToUtc(System.DateTime dateTime, System.TimeZoneInfo sourceTimeZone)
    // Offset: 0xC51F34
    static System::DateTime ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone);
    // static private System.DateTime ConvertTimeToUtc(System.DateTime dateTime, System.TimeZoneInfo sourceTimeZone, System.TimeZoneInfoOptions flags)
    // Offset: 0xC52184
    static System::DateTime ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone, System::TimeZoneInfoOptions flags);
    // static System.TimeSpan GetDateTimeNowUtcOffsetFromUtc(System.DateTime time, System.Boolean isAmbiguousLocalDst)
    // Offset: 0xC523F4
    static System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(System::DateTime time, bool& isAmbiguousLocalDst);
    // static public System.TimeZoneInfo CreateCustomTimeZone(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName)
    // Offset: 0xC51A44
    static System::TimeZoneInfo* CreateCustomTimeZone(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName);
    // static public System.TimeZoneInfo CreateCustomTimeZone(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName, System.String daylightDisplayName, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules)
    // Offset: 0xC5249C
    static System::TimeZoneInfo* CreateCustomTimeZone(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName, ::Il2CppString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules);
    // static public System.TimeZoneInfo CreateCustomTimeZone(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName, System.String daylightDisplayName, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules, System.Boolean disableDaylightSavingTime)
    // Offset: 0xC4E290
    static System::TimeZoneInfo* CreateCustomTimeZone(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName, ::Il2CppString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime);
    // static public System.TimeZoneInfo FindSystemTimeZoneById(System.String id)
    // Offset: 0xC50BA4
    static System::TimeZoneInfo* FindSystemTimeZoneById(::Il2CppString* id);
    // static private System.TimeZoneInfo FindSystemTimeZoneByFileName(System.String id, System.String filepath)
    // Offset: 0xC50CF0
    static System::TimeZoneInfo* FindSystemTimeZoneByFileName(::Il2CppString* id, ::Il2CppString* filepath);
    // static private System.TimeZoneInfo FromRegistryKey(System.String id, Microsoft.Win32.RegistryKey key)
    // Offset: 0xC526F0
    static System::TimeZoneInfo* FromRegistryKey(::Il2CppString* id, Microsoft::Win32::RegistryKey* key);
    // static private System.Void ParseRegTzi(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> adjustmentRules, System.Int32 start_year, System.Int32 end_year, System.Byte[] buffer)
    // Offset: 0xC52C18
    static void ParseRegTzi(System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, int start_year, int end_year, ::Array<uint8_t>* buffer);
    // public System.TimeZoneInfo/AdjustmentRule[] GetAdjustmentRules()
    // Offset: 0xC53148
    ::Array<System::TimeZoneInfo::AdjustmentRule*>* GetAdjustmentRules();
    // static public System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> GetSystemTimeZones()
    // Offset: 0xC4FB64
    static System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* GetSystemTimeZones();
    // public System.TimeSpan GetUtcOffset(System.DateTime dateTime)
    // Offset: 0xC52130
    System::TimeSpan GetUtcOffset(System::DateTime dateTime);
    // private System.TimeSpan GetUtcOffset(System.DateTime dateTime, System.Boolean isDST)
    // Offset: 0xC52324
    System::TimeSpan GetUtcOffset(System::DateTime dateTime, bool& isDST);
    // static private System.TimeSpan GetUtcOffsetHelper(System.DateTime dateTime, System.TimeZoneInfo tz, System.Boolean isDST)
    // Offset: 0xC533F0
    static System::TimeSpan GetUtcOffsetHelper(System::DateTime dateTime, System::TimeZoneInfo* tz, bool& isDST);
    // public System.Boolean HasSameRules(System.TimeZoneInfo other)
    // Offset: 0xC52568
    bool HasSameRules(System::TimeZoneInfo* other);
    // public System.Boolean IsAmbiguousTime(System.DateTime dateTime)
    // Offset: 0xC53B04
    bool IsAmbiguousTime(System::DateTime dateTime);
    // private System.Boolean IsInDST(System.TimeZoneInfo/AdjustmentRule rule, System.DateTime dateTime)
    // Offset: 0xC53A64
    bool IsInDST(System::TimeZoneInfo::AdjustmentRule* rule, System::DateTime dateTime);
    // private System.Boolean IsInDSTForYear(System.TimeZoneInfo/AdjustmentRule rule, System.DateTime dateTime, System.Int32 year)
    // Offset: 0xC53EB4
    bool IsInDSTForYear(System::TimeZoneInfo::AdjustmentRule* rule, System::DateTime dateTime, int year);
    // public System.Boolean IsInvalidTime(System.DateTime dateTime)
    // Offset: 0xC51DE0
    bool IsInvalidTime(System::DateTime dateTime);
    // static private System.Void Validate(System.String id, System.TimeSpan baseUtcOffset, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules)
    // Offset: 0xC541E8
    static void Validate(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xC54620
    static TimeZoneInfo* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void .ctor(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName, System.String daylightDisplayName, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules, System.Boolean disableDaylightSavingTime)
    // Offset: 0xC4F118
    static TimeZoneInfo* New_ctor(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName, ::Il2CppString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime);
    // private System.TimeZoneInfo/AdjustmentRule GetApplicableRule(System.DateTime dateTime)
    // Offset: 0xC538A8
    System::TimeZoneInfo::AdjustmentRule* GetApplicableRule(System::DateTime dateTime);
    // private System.Boolean TryGetTransitionOffset(System.DateTime dateTime, System.TimeSpan offset, System.Boolean isDst)
    // Offset: 0xC53688
    bool TryGetTransitionOffset(System::DateTime dateTime, System::TimeSpan& offset, bool& isDst);
    // static private System.DateTime TransitionPoint(System.TimeZoneInfo/TransitionTime transition, System.Int32 year)
    // Offset: 0xC53CF0
    static System::DateTime TransitionPoint(System::TimeZoneInfo::TransitionTime transition, int year);
    // static private System.TimeZoneInfo/AdjustmentRule[] ValidateRules(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> adjustmentRules)
    // Offset: 0xC53004
    static ::Array<System::TimeZoneInfo::AdjustmentRule*>* ValidateRules(System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules);
    // static private System.TimeZoneInfo BuildFromStream(System.String id, System.IO.Stream stream)
    // Offset: 0xC52A64
    static System::TimeZoneInfo* BuildFromStream(::Il2CppString* id, System::IO::Stream* stream);
    // static private System.Boolean ValidTZFile(System.Byte[] buffer, System.Int32 length)
    // Offset: 0xC5496C
    static bool ValidTZFile(::Array<uint8_t>* buffer, int length);
    // static private System.Int32 SwapInt32(System.Int32 i)
    // Offset: 0xC55358
    static int SwapInt32(int i);
    // static private System.Int32 ReadBigEndianInt32(System.Byte[] buffer, System.Int32 start)
    // Offset: 0xC55360
    static int ReadBigEndianInt32(::Array<uint8_t>* buffer, int start);
    // static private System.TimeZoneInfo ParseTZBuffer(System.String id, System.Byte[] buffer, System.Int32 length)
    // Offset: 0xC54A5C
    static System::TimeZoneInfo* ParseTZBuffer(::Il2CppString* id, ::Array<uint8_t>* buffer, int length);
    // static private System.Collections.Generic.Dictionary`2<System.Int32,System.String> ParseAbbreviations(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xC553F4
    static System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* ParseAbbreviations(::Array<uint8_t>* buffer, int index, int count);
    // static private System.Collections.Generic.Dictionary`2<System.Int32,System.TimeType> ParseTimesTypes(System.Byte[] buffer, System.Int32 index, System.Int32 count, System.Collections.Generic.Dictionary`2<System.Int32,System.String> abbreviations)
    // Offset: 0xC555C4
    static System::Collections::Generic::Dictionary_2<int, System::TimeType*>* ParseTimesTypes(::Array<uint8_t>* buffer, int index, int count, System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* abbreviations);
    // static private System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeType>> ParseTransitions(System.Byte[] buffer, System.Int32 index, System.Int32 count, System.Collections.Generic.Dictionary`2<System.Int32,System.TimeType> time_types)
    // Offset: 0xC55768
    static System::Collections::Generic::List_1<System::Collections::Generic::KeyValuePair_2<System::DateTime, System::TimeType*>>* ParseTransitions(::Array<uint8_t>* buffer, int index, int count, System::Collections::Generic::Dictionary_2<int, System::TimeType*>* time_types);
    // static private System.DateTime DateTimeFromUnixTime(System.Int64 unix_time)
    // Offset: 0xC558C4
    static System::DateTime DateTimeFromUnixTime(int64_t unix_time);
    // static System.TimeSpan GetLocalUtcOffset(System.DateTime dateTime, System.TimeZoneInfoOptions flags)
    // Offset: 0xC5590C
    static System::TimeSpan GetLocalUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags);
    // System.TimeSpan GetUtcOffset(System.DateTime dateTime, System.TimeZoneInfoOptions flags)
    // Offset: 0xC55944
    System::TimeSpan GetUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags);
    // static System.TimeSpan GetUtcOffsetFromUtc(System.DateTime time, System.TimeZoneInfo zone, System.Boolean isDaylightSavings, System.Boolean isAmbiguousLocalDst)
    // Offset: 0xC52438
    static System::TimeSpan GetUtcOffsetFromUtc(System::DateTime time, System::TimeZoneInfo* zone, bool& isDaylightSavings, bool& isAmbiguousLocalDst);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC524A4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.TimeZoneInfo other)
    // Offset: 0xC52518
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.TimeZoneInfo other)
    bool Equals(System::TimeZoneInfo* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC531E0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xC53284
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0xC540EC
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // public override System.String ToString()
    // Offset: 0xC54618
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // System.Void .ctor()
    // Offset: 0xC55968
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TimeZoneInfo* New_ctor();
  }; // System.TimeZoneInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo*, "System", "TimeZoneInfo");
#pragma pack(pop)
