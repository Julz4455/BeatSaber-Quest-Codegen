// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.OperationCanceledException
#include "System/OperationCanceledException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.TaskCanceledException
  class TaskCanceledException : public System::OperationCanceledException {
    public:
    // private System.Threading.Tasks.Task m_canceledTask
    // Offset: 0x90
    System::Threading::Tasks::Task* m_canceledTask;
    // Deleting conversion operator: operator System::Threading::CancellationToken
    constexpr operator System::Threading::CancellationToken() const noexcept = delete;
    // public System.Void .ctor(System.Threading.Tasks.Task task)
    // Offset: 0x16DEAC8
    static TaskCanceledException* New_ctor(System::Threading::Tasks::Task* task);
    // public System.Void .ctor()
    // Offset: 0x16E43AC
    // Implemented from: System.OperationCanceledException
    // Base method: System.Void OperationCanceledException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static TaskCanceledException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x16E440C
    // Implemented from: System.OperationCanceledException
    // Base method: System.Void OperationCanceledException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static TaskCanceledException* New_ctor(::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16E4414
    // Implemented from: System.OperationCanceledException
    // Base method: System.Void OperationCanceledException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static TaskCanceledException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Threading.Tasks.TaskCanceledException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskCanceledException*, "System.Threading.Tasks", "TaskCanceledException");
#pragma pack(pop)
