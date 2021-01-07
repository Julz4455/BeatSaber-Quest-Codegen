// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: TimeExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TimeExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TimeExtensions
    TimeExtensions() noexcept {}
    // static public System.String MinSecDurationText(System.Single duration)
    // Offset: 0x19CE24C
    static ::Il2CppString* MinSecDurationText(float duration);
    // static public System.String MinSecMillisecDurationText(System.Single duration)
    // Offset: 0x19CE3F4
    static ::Il2CppString* MinSecMillisecDurationText(float duration);
    // static public System.Int32 SecondsToDays(System.Int32 time)
    // Offset: 0x19CE4E4
    static int SecondsToDays(int time);
    // static public System.Int32 SecondsToHours(System.Int32 time)
    // Offset: 0x19CE504
    static int SecondsToHours(int time);
    // static public System.Int32 SecondsToMinutes(System.Int32 time)
    // Offset: 0x19CE524
    static int SecondsToMinutes(int time);
    // static public System.Int32 DaysToSeconds(System.Int32 days)
    // Offset: 0x19CE544
    static int DaysToSeconds(int days);
    // static public System.Int32 HoursToSeconds(System.Int32 hours)
    // Offset: 0x19CE554
    static int HoursToSeconds(int hours);
    // static public System.Int32 MinutesToSeconds(System.Int32 minutes)
    // Offset: 0x19CE560
    static int MinutesToSeconds(int minutes);
    // static public System.Int32 Hours(System.Single time)
    // Offset: 0x19CE56C
    static int Hours(float time);
    // static public System.Int32 Minutes(System.Single time)
    // Offset: 0x19CE380
    static int Minutes(float time);
    // static public System.Int32 Seconds(System.Single time)
    // Offset: 0x19CE3D4
    static int Seconds(float time);
    // static public System.Int32 Milliseconds(System.Single time)
    // Offset: 0x19CE4BC
    static int Milliseconds(float time);
    // static public System.Int32 TotalDays(System.Single time)
    // Offset: 0x19CE5C4
    static int TotalDays(float time);
    // static public System.Int32 TotalHours(System.Single time)
    // Offset: 0x19CE5E8
    static int TotalHours(float time);
    // static public System.Int32 TotalMinutes(System.Single time)
    // Offset: 0x19CE60C
    static int TotalMinutes(float time);
    // static public System.Int32 TotalSeconds(System.Single time)
    // Offset: 0x19CE630
    static int TotalSeconds(float time);
    // static public System.Int64 ToUnixTime(System.DateTime dateTime)
    // Offset: 0x19CE638
    static int64_t ToUnixTime(System::DateTime dateTime);
    // static public System.DateTime AsUnixTime(System.Int64 unixTime)
    // Offset: 0x19CE704
    static System::DateTime AsUnixTime(int64_t unixTime);
  }; // TimeExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimeExtensions*, "", "TimeExtensions");
#pragma pack(pop)
