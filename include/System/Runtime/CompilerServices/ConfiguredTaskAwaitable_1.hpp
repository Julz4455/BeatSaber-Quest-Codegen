// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Skipping declaration: ConfiguredTaskAwaiter because it is already included!
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1
  template<typename TResult>
  struct ConfiguredTaskAwaitable_1 : public System::ValueType {
    public:
    // Nested type: System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::ConfiguredTaskAwaiter<TResult>
    struct ConfiguredTaskAwaiter;
    // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
    struct ConfiguredTaskAwaiter : public System::ValueType, public System::Runtime::CompilerServices::ICriticalNotifyCompletion, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = ConfiguredTaskAwaitable_1<TResult>;
      static constexpr std::string_view NESTED_NAME = "ConfiguredTaskAwaiter";
      // private readonly System.Threading.Tasks.Task`1<TResult> m_task
      // Offset: 0x0
      System::Threading::Tasks::Task_1<TResult>* m_task;
      // private readonly System.Boolean m_continueOnCapturedContext
      // Offset: 0x0
      bool m_continueOnCapturedContext;
      // Creating value type constructor for type: ConfiguredTaskAwaiter
      constexpr ConfiguredTaskAwaiter(System::Threading::Tasks::Task_1<TResult>* m_task_ = {}, bool m_continueOnCapturedContext_ = {}) noexcept : m_task{m_task_}, m_continueOnCapturedContext{m_continueOnCapturedContext_} {}
      // System.Void .ctor(System.Threading.Tasks.Task`1<TResult> task, System.Boolean continueOnCapturedContext)
      // Offset: 0xFFFFFFFF
      // ABORTED: conflicts with another method.  ConfiguredTaskAwaiter(System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext)
      // public System.Boolean get_IsCompleted()
      // Offset: 0xFFFFFFFF
      bool get_IsCompleted() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "get_IsCompleted"));
      }
      // public TResult GetResult()
      // Offset: 0xFFFFFFFF
      TResult GetResult() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<TResult>(*this, "GetResult"));
      }
      // public System.Void OnCompleted(System.Action continuation)
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Runtime.CompilerServices.INotifyCompletion
      // Base method: System.Void INotifyCompletion::OnCompleted(System.Action continuation)
      void OnCompleted(System::Action* continuation) {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "OnCompleted", continuation));
      }
      // public System.Void UnsafeOnCompleted(System.Action continuation)
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Runtime.CompilerServices.ICriticalNotifyCompletion
      // Base method: System.Void ICriticalNotifyCompletion::UnsafeOnCompleted(System.Action continuation)
      void UnsafeOnCompleted(System::Action* continuation) {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "UnsafeOnCompleted", continuation));
      }
    }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
    // private readonly System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> m_configuredTaskAwaiter
    // Offset: 0x0
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter m_configuredTaskAwaiter;
    // Creating value type constructor for type: ConfiguredTaskAwaitable_1
    constexpr ConfiguredTaskAwaitable_1(typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter m_configuredTaskAwaiter_ = {}) noexcept : m_configuredTaskAwaiter{m_configuredTaskAwaiter_} {}
    // Creating conversion operator: operator typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter
    constexpr operator typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter() const noexcept {
      return m_configuredTaskAwaiter;
    }
    // System.Void .ctor(System.Threading.Tasks.Task`1<TResult> task, System.Boolean continueOnCapturedContext)
    // Offset: 0xFFFFFFFF
    ConfiguredTaskAwaitable_1(System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, ".ctor", task, continueOnCapturedContext));
    }
    // public System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> GetAwaiter()
    // Offset: 0xFFFFFFFF
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter GetAwaiter() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter>(*this, "GetAwaiter"));
    }
  }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable`1");
#pragma pack(pop)
