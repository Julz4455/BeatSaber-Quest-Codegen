// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskToApm
#include "System/Threading/Tasks/TaskToApm.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0
  class TaskToApm::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public System.AsyncCallback callback
    // Offset: 0x10
    System::AsyncCallback* callback;
    // public System.IAsyncResult asyncResult
    // Offset: 0x18
    System::IAsyncResult* asyncResult;
    // System.Void <InvokeCallbackWhenTaskCompletes>b__0()
    // Offset: 0x16E6734
    void $InvokeCallbackWhenTaskCompletes$b__0();
    // public System.Void .ctor()
    // Offset: 0x16E672C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TaskToApm::$$c__DisplayClass3_0* New_ctor();
  }; // System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0*, "System.Threading.Tasks", "TaskToApm/<>c__DisplayClass3_0");
#pragma pack(pop)
