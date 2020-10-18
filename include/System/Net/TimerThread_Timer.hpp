// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.TimerThread/Timer
  class TimerThread::Timer : public ::Il2CppObject, public System::IDisposable {
    public:
    // private readonly System.Int32 m_StartTimeMilliseconds
    // Offset: 0x10
    int m_StartTimeMilliseconds;
    // private readonly System.Int32 m_DurationMilliseconds
    // Offset: 0x14
    int m_DurationMilliseconds;
    // System.Void .ctor(System.Int32 durationMilliseconds)
    // Offset: 0x13B6F80
    static TimerThread::Timer* New_ctor(int durationMilliseconds);
    // System.Boolean Cancel()
    // Offset: 0xFFFFFFFF
    bool Cancel();
    // public System.Void Dispose()
    // Offset: 0x13B6FB8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Net.TimerThread/Timer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::TimerThread::Timer*, "System.Net", "TimerThread/Timer");
#pragma pack(pop)
