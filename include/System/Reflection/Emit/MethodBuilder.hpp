// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodAttributes
  struct MethodAttributes;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MethodImplAttributes
  struct MethodImplAttributes;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeMethodHandle
  struct RuntimeMethodHandle;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.MethodBuilder
  // [] Offset: FFFFFFFF
  class MethodBuilder : public System::Reflection::MethodInfo {
    public:
    // Creating value type constructor for type: MethodBuilder
    MethodBuilder() noexcept {}
    // public override System.Reflection.MethodAttributes get_Attributes()
    // Offset: 0x1B2BC98
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodAttributes MethodBase::get_Attributes()
    System::Reflection::MethodAttributes get_Attributes();
    // public override System.Type get_DeclaringType()
    // Offset: 0x1B2BCF4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x1B2BD50
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Reflection.ParameterInfo[] GetParameters()
    // Offset: 0x1B2BDAC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParameters()
    ::Array<System::Reflection::ParameterInfo*>* GetParameters();
    // public override System.RuntimeMethodHandle get_MethodHandle()
    // Offset: 0x1B2BE08
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.RuntimeMethodHandle MethodBase::get_MethodHandle()
    System::RuntimeMethodHandle get_MethodHandle();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1B2BE48
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Reflection.MethodInfo GetBaseDefinition()
    // Offset: 0x1B2BE88
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Reflection.MethodInfo MethodInfo::GetBaseDefinition()
    System::Reflection::MethodInfo* GetBaseDefinition();
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1B2BEC8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1B2BF08
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Reflection.MethodImplAttributes GetMethodImplementationFlags()
    // Offset: 0x1B2BF48
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodImplAttributes MethodBase::GetMethodImplementationFlags()
    System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
    // public override System.Object Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x1B2BF88
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Object MethodBase::Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    ::Il2CppObject* Invoke(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1B2BFC8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
  }; // System.Reflection.Emit.MethodBuilder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::MethodBuilder*, "System.Reflection.Emit", "MethodBuilder");
