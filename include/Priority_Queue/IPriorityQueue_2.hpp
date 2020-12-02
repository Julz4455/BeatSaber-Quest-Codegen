// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
}
// Completed forward declares
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Autogenerated type: Priority_Queue.IPriorityQueue`2
  template<typename TItem, typename TPriority>
  class IPriorityQueue_2 : public System::Collections::Generic::IEnumerable_1<TItem> {
    public:
    // public System.Void Enqueue(TItem node, TPriority priority)
    // Offset: 0xFFFFFFFF
    void Enqueue(TItem node, TPriority priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IPriorityQueue_2").WithContext("Enqueue");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Enqueue", {}, ::il2cpp_utils::ExtractTypes(node, priority)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, node, priority);
    }
    // public TItem Dequeue()
    // Offset: 0xFFFFFFFF
    TItem Dequeue() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IPriorityQueue_2").WithContext("Dequeue");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<TItem>(), "Dequeue", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TItem, false>(this, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IPriorityQueue_2").WithContext("Clear");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Clear", {}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(TItem node)
    // Offset: 0xFFFFFFFF
    bool Contains(TItem node) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IPriorityQueue_2").WithContext("Contains");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Contains", {}, ::il2cpp_utils::ExtractTypes(node)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, node);
    }
    // public System.Void Remove(TItem node)
    // Offset: 0xFFFFFFFF
    void Remove(TItem node) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IPriorityQueue_2").WithContext("Remove");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Remove", {}, ::il2cpp_utils::ExtractTypes(node)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, node);
    }
    // public System.Void UpdatePriority(TItem node, TPriority priority)
    // Offset: 0xFFFFFFFF
    void UpdatePriority(TItem node, TPriority priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IPriorityQueue_2").WithContext("UpdatePriority");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "UpdatePriority", {}, ::il2cpp_utils::ExtractTypes(node, priority)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, node, priority);
    }
    // public TItem get_First()
    // Offset: 0xFFFFFFFF
    TItem get_First() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IPriorityQueue_2").WithContext("get_First");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<TItem>(), "get_First", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TItem, false>(this, ___internal__method);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Priority_Queue").WithContext("IPriorityQueue_2").WithContext("get_Count");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_Count", {}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
  }; // Priority_Queue.IPriorityQueue`2
  // Could not write size check! Type: Priority_Queue.IPriorityQueue`2 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::IPriorityQueue_2, "Priority_Queue", "IPriorityQueue`2");
#pragma pack(pop)