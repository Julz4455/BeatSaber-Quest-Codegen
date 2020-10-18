// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.WaitOrTimerCallback
  class WaitOrTimerCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16ED288
    static WaitOrTimerCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object state, System.Boolean timedOut)
    // Offset: 0x16D6A20
    void Invoke(::Il2CppObject* state, bool timedOut);
    // public System.IAsyncResult BeginInvoke(System.Object state, System.Boolean timedOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16ED29C
    System::IAsyncResult* BeginInvoke(::Il2CppObject* state, bool timedOut, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x16ED33C
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.WaitOrTimerCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::WaitOrTimerCallback*, "System.Threading", "WaitOrTimerCallback");
#pragma pack(pop)
