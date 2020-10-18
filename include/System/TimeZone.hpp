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
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TimeZone
  class TimeZone : public ::Il2CppObject {
    public:
    // Get static field: static private System.TimeZone currentTimeZone
    static System::TimeZone* _get_currentTimeZone();
    // Set static field: static private System.TimeZone currentTimeZone
    static void _set_currentTimeZone(System::TimeZone* value);
    // Get static field: static private System.Object tz_lock
    static ::Il2CppObject* _get_tz_lock();
    // Set static field: static private System.Object tz_lock
    static void _set_tz_lock(::Il2CppObject* value);
    // Get static field: static private System.Int64 timezone_check
    static int64_t _get_timezone_check();
    // Set static field: static private System.Int64 timezone_check
    static void _set_timezone_check(int64_t value);
    // static public System.TimeZone get_CurrentTimeZone()
    // Offset: 0x1952B78
    static System::TimeZone* get_CurrentTimeZone();
    // public System.TimeSpan GetUtcOffset(System.DateTime time)
    // Offset: 0xFFFFFFFF
    System::TimeSpan GetUtcOffset(System::DateTime time);
    // static private System.Void .cctor()
    // Offset: 0x1952D88
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1952B70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TimeZone* New_ctor();
  }; // System.TimeZone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TimeZone*, "System", "TimeZone");
#pragma pack(pop)
