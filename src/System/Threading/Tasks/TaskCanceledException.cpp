// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Threading.Tasks.TaskCanceledException
#include "System/Threading/Tasks/TaskCanceledException.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.Tasks.TaskCanceledException..ctor
System::Threading::Tasks::TaskCanceledException* System::Threading::Tasks::TaskCanceledException::New_ctor(System::Threading::Tasks::Task* task) {
  return (TaskCanceledException*)THROW_UNLESS(il2cpp_utils::New("System.Threading.Tasks", "TaskCanceledException", task));
}
// Autogenerated method: System.Threading.Tasks.TaskCanceledException..ctor
System::Threading::Tasks::TaskCanceledException* System::Threading::Tasks::TaskCanceledException::New_ctor() {
  return (TaskCanceledException*)THROW_UNLESS(il2cpp_utils::New("System.Threading.Tasks", "TaskCanceledException"));
}
// Autogenerated method: System.Threading.Tasks.TaskCanceledException..ctor
System::Threading::Tasks::TaskCanceledException* System::Threading::Tasks::TaskCanceledException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (TaskCanceledException*)THROW_UNLESS(il2cpp_utils::New("System.Threading.Tasks", "TaskCanceledException", info, context));
}
