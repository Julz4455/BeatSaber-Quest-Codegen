// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Runtime.InteropServices._MethodInfo
#include "System/Runtime/InteropServices/_MethodInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MethodInfo
  class MethodInfo : public System::Reflection::MethodBase, public System::Runtime::InteropServices::_MethodInfo {
    public:
    // public System.Type get_ReturnType()
    // Offset: 0x1371D8C
    System::Type* get_ReturnType();
    // public System.Reflection.MethodInfo GetBaseDefinition()
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetBaseDefinition();
    // public System.Reflection.MethodInfo GetGenericMethodDefinition()
    // Offset: 0x1371E6C
    System::Reflection::MethodInfo* GetGenericMethodDefinition();
    // public System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    // Offset: 0x1371EEC
    System::Reflection::MethodInfo* MakeGenericMethod(::Array<System::Type*>* typeArguments);
    // Creating initializer_list -> params proxy for: System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    System::Reflection::MethodInfo* MakeGenericMethod(std::initializer_list<System::Type*> typeArguments);
    // Creating TArgs -> initializer_list proxy for: System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    template<class ...TParams>
    System::Reflection::MethodInfo* MakeGenericMethod(TParams&&... typeArguments) {
      return MakeGenericMethod({typeArguments...});
    }
    // System.Reflection.MethodInfo GetBaseMethod()
    // Offset: 0x1371F6C
    System::Reflection::MethodInfo* GetBaseMethod();
    // protected System.Void .ctor()
    // Offset: 0x1371D70
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static MethodInfo* New_ctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1371D74
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1371D80
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetHashCode()
    int GetHashCode();
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x1371D84
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // public override System.Type[] GetGenericArguments()
    // Offset: 0x1371DEC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Type[] MethodBase::GetGenericArguments()
    ::Array<System::Type*>* GetGenericArguments();
  }; // System.Reflection.MethodInfo
  // static public System.Boolean op_Equality(System.Reflection.MethodInfo left, System.Reflection.MethodInfo right)
  // Offset: 0x1371270
  bool operator ==(System::Reflection::MethodInfo* left, System::Reflection::MethodInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.MethodInfo left, System.Reflection.MethodInfo right)
  // Offset: 0x1371570
  bool operator !=(System::Reflection::MethodInfo* left, System::Reflection::MethodInfo& right);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodInfo*, "System.Reflection", "MethodInfo");
#pragma pack(pop)
