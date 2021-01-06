// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.TaskCreationOptions
#include "System/Threading/Tasks/TaskCreationOptions.hpp"
// Including type: System.Threading.Tasks.InternalTaskOptions
#include "System/Threading/Tasks/InternalTaskOptions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x30
  // Autogenerated type: System.Threading.Tasks.Task/<>c__DisplayClass178_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D39EB0
  class Task::$$c__DisplayClass178_0 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.Task root
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::Task* root;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // public System.Boolean replicasAreQuitting
    // Size: 0x1
    // Offset: 0x18
    bool replicasAreQuitting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: replicasAreQuitting and: taskReplicaDelegate
    char __padding1[0x7] = {};
    // public System.Action`1<System.Object> taskReplicaDelegate
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<::Il2CppObject*>* taskReplicaDelegate;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppObject*>*) == 0x8);
    // public System.Threading.Tasks.TaskCreationOptions creationOptionsForReplicas
    // Size: 0x4
    // Offset: 0x28
    System::Threading::Tasks::TaskCreationOptions creationOptionsForReplicas;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCreationOptions) == 0x4);
    // public System.Threading.Tasks.InternalTaskOptions internalOptionsForReplicas
    // Size: 0x4
    // Offset: 0x2C
    System::Threading::Tasks::InternalTaskOptions internalOptionsForReplicas;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::InternalTaskOptions) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass178_0
    $$c__DisplayClass178_0(System::Threading::Tasks::Task* root_ = {}, bool replicasAreQuitting_ = {}, System::Action_1<::Il2CppObject*>* taskReplicaDelegate_ = {}, System::Threading::Tasks::TaskCreationOptions creationOptionsForReplicas_ = {}, System::Threading::Tasks::InternalTaskOptions internalOptionsForReplicas_ = {}) noexcept : root{root_}, replicasAreQuitting{replicasAreQuitting_}, taskReplicaDelegate{taskReplicaDelegate_}, creationOptionsForReplicas{creationOptionsForReplicas_}, internalOptionsForReplicas{internalOptionsForReplicas_} {}
    // System.Void <ExecuteSelfReplicating>b__0(System.Object <p0>)
    // Offset: 0x1D17084
    void $ExecuteSelfReplicating$b__0(::Il2CppObject* $p0$);
    // public System.Void .ctor()
    // Offset: 0x1D135A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::$$c__DisplayClass178_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading::Tasks").WithContext("$$c__DisplayClass178_0").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::$$c__DisplayClass178_0*, creationType>()));
    }
  }; // System.Threading.Tasks.Task/<>c__DisplayClass178_0
  static check_size<sizeof(Task::$$c__DisplayClass178_0), 44 + sizeof(System::Threading::Tasks::InternalTaskOptions)> __System_Threading_Tasks_Task_$$c__DisplayClass178_0SizeCheck;
  static_assert(sizeof(Task::$$c__DisplayClass178_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::$$c__DisplayClass178_0*, "System.Threading.Tasks", "Task/<>c__DisplayClass178_0");
#pragma pack(pop)
