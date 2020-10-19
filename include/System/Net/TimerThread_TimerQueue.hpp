// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.Net.TimerThread/Queue
#include "System/Net/TimerThread_Queue.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.TimerThread/TimerQueue
  class TimerThread::TimerQueue : public System::Net::TimerThread::Queue {
    public:
    // private readonly System.Net.TimerThread/TimerNode m_Timers
    // Offset: 0x18
    System::Net::TimerThread::TimerNode* m_Timers;
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // System.Void .ctor(System.Int32 durationMilliseconds)
    // Offset: 0x118AF54
    // Implemented from: System.Net.TimerThread/Queue
    // Base method: System.Void Queue::.ctor(System.Int32 durationMilliseconds)
    static TimerThread::TimerQueue* New_ctor(int durationMilliseconds);
  }; // System.Net.TimerThread/TimerQueue
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::TimerThread::TimerQueue*, "System.Net", "TimerThread/TimerQueue");
#pragma pack(pop)