// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Delegate
#include "System/Delegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Skipping declaration: StreamingContext because it is already included!
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.MulticastDelegate
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA88AC
  class MulticastDelegate : public System::Delegate {
    public:
    // Writing base type padding for base size: 0x61 to desired offset: 0x68
    char ___base_padding[0x7] = {};
    // private System.Delegate[] delegates
    // Size: 0x8
    // Offset: 0x68
    ::Array<System::Delegate*>* delegates;
    // Field size check
    static_assert(sizeof(::Array<System::Delegate*>*) == 0x8);
    // Creating value type constructor for type: MulticastDelegate
    MulticastDelegate(::Array<System::Delegate*>* delegates_ = {}) noexcept : delegates{delegates_} {}
    // Creating conversion operator: operator ::Array<System::Delegate*>*
    constexpr operator ::Array<System::Delegate*>*() const noexcept {
      return delegates;
    }
    // private System.Int32 LastIndexOf(System.Delegate[] haystack, System.Delegate[] needle)
    // Offset: 0x1B18E94
    int LastIndexOf(::Array<System::Delegate*>* haystack, ::Array<System::Delegate*>* needle);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B188E4
    // Implemented from: System.Delegate
    // Base method: System.Void Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1B188EC
    // Implemented from: System.Delegate
    // Base method: System.Boolean Delegate::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B18A64
    // Implemented from: System.Delegate
    // Base method: System.Int32 Delegate::GetHashCode()
    int GetHashCode();
    // protected override System.Reflection.MethodInfo GetMethodImpl()
    // Offset: 0x1B18A6C
    // Implemented from: System.Delegate
    // Base method: System.Reflection.MethodInfo Delegate::GetMethodImpl()
    System::Reflection::MethodInfo* GetMethodImpl();
    // public override System.Delegate[] GetInvocationList()
    // Offset: 0x1B18AC0
    // Implemented from: System.Delegate
    // Base method: System.Delegate[] Delegate::GetInvocationList()
    ::Array<System::Delegate*>* GetInvocationList();
    // protected override System.Delegate CombineImpl(System.Delegate follow)
    // Offset: 0x1B18BB8
    // Implemented from: System.Delegate
    // Base method: System.Delegate Delegate::CombineImpl(System.Delegate follow)
    System::Delegate* CombineImpl(System::Delegate* follow);
    // protected override System.Delegate RemoveImpl(System.Delegate value)
    // Offset: 0x1B18FD4
    // Implemented from: System.Delegate
    // Base method: System.Delegate Delegate::RemoveImpl(System.Delegate value)
    System::Delegate* RemoveImpl(System::Delegate* value);
  }; // System.MulticastDelegate
  #pragma pack(pop)
  static check_size<sizeof(MulticastDelegate), 104 + sizeof(::Array<System::Delegate*>*)> __System_MulticastDelegateSizeCheck;
  static_assert(sizeof(MulticastDelegate) == 0x70);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::MulticastDelegate*, "System", "MulticastDelegate");
