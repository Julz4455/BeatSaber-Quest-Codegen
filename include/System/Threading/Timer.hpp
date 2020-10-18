// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: TimerCallback
  class TimerCallback;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.Timer
  class Timer : public System::MarshalByRefObject, public System::IDisposable {
    public:
    // Nested type: System::Threading::Timer::TimerComparer
    class TimerComparer;
    // Nested type: System::Threading::Timer::Scheduler
    class Scheduler;
    // private System.Threading.TimerCallback callback
    // Offset: 0x18
    System::Threading::TimerCallback* callback;
    // private System.Object state
    // Offset: 0x20
    ::Il2CppObject* state;
    // private System.Int64 due_time_ms
    // Offset: 0x28
    int64_t due_time_ms;
    // private System.Int64 period_ms
    // Offset: 0x30
    int64_t period_ms;
    // private System.Int64 next_run
    // Offset: 0x38
    int64_t next_run;
    // private System.Boolean disposed
    // Offset: 0x40
    bool disposed;
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static private readonly System.Threading.Timer/Scheduler scheduler
    static System::Threading::Timer::Scheduler* _get_scheduler();
    // Set static field: static private readonly System.Threading.Timer/Scheduler scheduler
    static void _set_scheduler(System::Threading::Timer::Scheduler* value);
    // static field const value: static private System.Int64 MaxValue
    static constexpr const int64_t MaxValue = 4294967294;
    // Get static field: static private System.Int64 MaxValue
    static int64_t _get_MaxValue();
    // Set static field: static private System.Int64 MaxValue
    static void _set_MaxValue(int64_t value);
    // public System.Void .ctor(System.Threading.TimerCallback callback, System.Object state, System.Int32 dueTime, System.Int32 period)
    // Offset: 0x16E2870
    static Timer* New_ctor(System::Threading::TimerCallback* callback, ::Il2CppObject* state, int dueTime, int period);
    // public System.Void .ctor(System.Threading.TimerCallback callback, System.Object state, System.TimeSpan dueTime, System.TimeSpan period)
    // Offset: 0x16EAAC8
    static Timer* New_ctor(System::Threading::TimerCallback* callback, ::Il2CppObject* state, System::TimeSpan dueTime, System::TimeSpan period);
    // private System.Void Init(System.Threading.TimerCallback callback, System.Object state, System.Int64 dueTime, System.Int64 period)
    // Offset: 0x16EA9F8
    void Init(System::Threading::TimerCallback* callback, ::Il2CppObject* state, int64_t dueTime, int64_t period);
    // public System.Boolean Change(System.Int32 dueTime, System.Int32 period)
    // Offset: 0x16EAD68
    bool Change(int dueTime, int period);
    // public System.Boolean Change(System.TimeSpan dueTime, System.TimeSpan period)
    // Offset: 0x16EAD8C
    bool Change(System::TimeSpan dueTime, System::TimeSpan period);
    // private System.Boolean Change(System.Int64 dueTime, System.Int64 period, System.Boolean first)
    // Offset: 0x16EAB44
    bool Change(int64_t dueTime, int64_t period, bool first);
    // System.Void KeepRootedWhileScheduled()
    // Offset: 0x16E28C8
    void KeepRootedWhileScheduled();
    // static private System.Int64 GetTimeMonotonic()
    // Offset: 0x16EAEAC
    static int64_t GetTimeMonotonic();
    // static private System.Void .cctor()
    // Offset: 0x16EB038
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0x16E3FF4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Threading.Timer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Timer*, "System.Threading", "Timer");
#pragma pack(pop)
