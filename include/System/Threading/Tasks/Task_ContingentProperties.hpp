// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ManualResetEventSlim
  class ManualResetEventSlim;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskExceptionHolder
  class TaskExceptionHolder;
  // Forward declaring type: Shared`1<T>
  template<typename T>
  class Shared_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.Task/ContingentProperties
  class Task::ContingentProperties : public ::Il2CppObject {
    public:
    // System.Threading.ExecutionContext m_capturedContext
    // Offset: 0x10
    System::Threading::ExecutionContext* m_capturedContext;
    // System.Threading.ManualResetEventSlim m_completionEvent
    // Offset: 0x18
    System::Threading::ManualResetEventSlim* m_completionEvent;
    // System.Threading.Tasks.TaskExceptionHolder m_exceptionsHolder
    // Offset: 0x20
    System::Threading::Tasks::TaskExceptionHolder* m_exceptionsHolder;
    // System.Threading.CancellationToken m_cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken m_cancellationToken;
    // System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration> m_cancellationRegistration
    // Offset: 0x30
    System::Threading::Tasks::Shared_1<System::Threading::CancellationTokenRegistration>* m_cancellationRegistration;
    // System.Int32 m_internalCancellationRequested
    // Offset: 0x38
    int m_internalCancellationRequested;
    // System.Int32 m_completionCountdown
    // Offset: 0x3C
    int m_completionCountdown;
    // System.Collections.Generic.List`1<System.Threading.Tasks.Task> m_exceptionalChildren
    // Offset: 0x40
    System::Collections::Generic::List_1<System::Threading::Tasks::Task*>* m_exceptionalChildren;
    // System.Void SetCompleted()
    // Offset: 0x16DF480
    void SetCompleted();
    // System.Void DeregisterCancellationCallback()
    // Offset: 0x16DF4B8
    void DeregisterCancellationCallback();
    // public System.Void .ctor()
    // Offset: 0x16DC974
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Task::ContingentProperties* New_ctor();
  }; // System.Threading.Tasks.Task/ContingentProperties
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::ContingentProperties*, "System.Threading.Tasks", "Task/ContingentProperties");
#pragma pack(pop)
