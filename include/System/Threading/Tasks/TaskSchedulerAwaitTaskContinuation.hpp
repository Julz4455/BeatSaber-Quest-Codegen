// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.AwaitTaskContinuation
#include "System/Threading/Tasks/AwaitTaskContinuation.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
  class TaskSchedulerAwaitTaskContinuation : public System::Threading::Tasks::AwaitTaskContinuation {
    public:
    // Nested type: System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::$$c
    class $$c;
    // private readonly System.Threading.Tasks.TaskScheduler m_scheduler
    // Offset: 0x20
    System::Threading::Tasks::TaskScheduler* m_scheduler;
    // Creating conversion operator: operator System::Threading::Tasks::TaskScheduler*
    constexpr operator System::Threading::Tasks::TaskScheduler*() const noexcept {
      return m_scheduler;
    }
    // System.Void .ctor(System.Threading.Tasks.TaskScheduler scheduler, System.Action action, System.Boolean flowExecutionContext, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0xCE4F98
    static TaskSchedulerAwaitTaskContinuation* New_ctor(System::Threading::Tasks::TaskScheduler* scheduler, System::Action* action, bool flowExecutionContext, System::Threading::StackCrawlMark& stackMark);
    // override System.Void Run(System.Threading.Tasks.Task ignored, System.Boolean canInlineContinuationTask)
    // Offset: 0xCE9078
    // Implemented from: System.Threading.Tasks.AwaitTaskContinuation
    // Base method: System.Void AwaitTaskContinuation::Run(System.Threading.Tasks.Task ignored, System.Boolean canInlineContinuationTask)
    void Run(System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask);
  }; // System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation");
#pragma pack(pop)
