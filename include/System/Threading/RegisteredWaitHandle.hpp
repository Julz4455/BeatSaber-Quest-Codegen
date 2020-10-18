// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
  // Forward declaring type: WaitOrTimerCallback
  class WaitOrTimerCallback;
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.RegisteredWaitHandle
  class RegisteredWaitHandle : public System::MarshalByRefObject {
    public:
    // private System.Threading.WaitHandle _waitObject
    // Offset: 0x18
    System::Threading::WaitHandle* waitObject;
    // private System.Threading.WaitOrTimerCallback _callback
    // Offset: 0x20
    System::Threading::WaitOrTimerCallback* callback;
    // private System.Object _state
    // Offset: 0x28
    ::Il2CppObject* state;
    // private System.Threading.WaitHandle _finalEvent
    // Offset: 0x30
    System::Threading::WaitHandle* finalEvent;
    // private System.Threading.ManualResetEvent _cancelEvent
    // Offset: 0x38
    System::Threading::ManualResetEvent* cancelEvent;
    // private System.TimeSpan _timeout
    // Offset: 0x40
    System::TimeSpan timeout;
    // private System.Int32 _callsInProcess
    // Offset: 0x48
    int callsInProcess;
    // private System.Boolean _executeOnlyOnce
    // Offset: 0x4C
    bool executeOnlyOnce;
    // private System.Boolean _unregistered
    // Offset: 0x4D
    bool unregistered;
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // System.Void .ctor(System.Threading.WaitHandle waitObject, System.Threading.WaitOrTimerCallback callback, System.Object state, System.TimeSpan timeout, System.Boolean executeOnlyOnce)
    // Offset: 0x16D5FD8
    static RegisteredWaitHandle* New_ctor(System::Threading::WaitHandle* waitObject, System::Threading::WaitOrTimerCallback* callback, ::Il2CppObject* state, System::TimeSpan timeout, bool executeOnlyOnce);
    // System.Void Wait(System.Object state)
    // Offset: 0x16D60D4
    void Wait(::Il2CppObject* state);
    // private System.Void DoCallBack(System.Object timedOut)
    // Offset: 0x16D6870
    void DoCallBack(::Il2CppObject* timedOut);
    // public System.Boolean Unregister(System.Threading.WaitHandle waitObject)
    // Offset: 0x16D6E68
    bool Unregister(System::Threading::WaitHandle* waitObject);
  }; // System.Threading.RegisteredWaitHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::RegisteredWaitHandle*, "System.Threading", "RegisteredWaitHandle");
#pragma pack(pop)
