// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskScheduler
#include "System/Threading/Tasks/TaskScheduler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ParameterizedThreadStart
  class ParameterizedThreadStart;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.ThreadPoolTaskScheduler
  class ThreadPoolTaskScheduler : public System::Threading::Tasks::TaskScheduler {
    public:
    // Get static field: static private readonly System.Threading.ParameterizedThreadStart s_longRunningThreadWork
    static System::Threading::ParameterizedThreadStart* _get_s_longRunningThreadWork();
    // Set static field: static private readonly System.Threading.ParameterizedThreadStart s_longRunningThreadWork
    static void _set_s_longRunningThreadWork(System::Threading::ParameterizedThreadStart* value);
    // static private System.Void LongRunningThreadWork(System.Object obj)
    // Offset: 0x16E6834
    static void LongRunningThreadWork(::Il2CppObject* obj);
    // System.Void .ctor()
    // Offset: 0x16E5E9C
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Void TaskScheduler::.ctor()
    // Base method: System.Void Object::.ctor()
    static ThreadPoolTaskScheduler* New_ctor();
    // protected internal override System.Void QueueTask(System.Threading.Tasks.Task task)
    // Offset: 0x16E68B8
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Void TaskScheduler::QueueTask(System.Threading.Tasks.Task task)
    void QueueTask(System::Threading::Tasks::Task* task);
    // protected override System.Boolean TryExecuteTaskInline(System.Threading.Tasks.Task task, System.Boolean taskWasPreviouslyQueued)
    // Offset: 0x16E6B68
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Boolean TaskScheduler::TryExecuteTaskInline(System.Threading.Tasks.Task task, System.Boolean taskWasPreviouslyQueued)
    bool TryExecuteTaskInline(System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);
    // protected internal override System.Boolean TryDequeue(System.Threading.Tasks.Task task)
    // Offset: 0x16E6CEC
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Boolean TaskScheduler::TryDequeue(System.Threading.Tasks.Task task)
    bool TryDequeue(System::Threading::Tasks::Task* task);
    // override System.Void NotifyWorkItemProgress()
    // Offset: 0x16E6CF4
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Void TaskScheduler::NotifyWorkItemProgress()
    void NotifyWorkItemProgress();
    // override System.Boolean get_RequiresAtomicStartTransition()
    // Offset: 0x16E6D90
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Boolean TaskScheduler::get_RequiresAtomicStartTransition()
    bool get_RequiresAtomicStartTransition();
    // static private System.Void .cctor()
    // Offset: 0x16E6D98
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Void TaskScheduler::.cctor()
    static void _cctor();
  }; // System.Threading.Tasks.ThreadPoolTaskScheduler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::ThreadPoolTaskScheduler*, "System.Threading.Tasks", "ThreadPoolTaskScheduler");
#pragma pack(pop)
