// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Runtime.InteropServices._FieldInfo
#include "System/Runtime/InteropServices/_FieldInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldAttributes
  struct FieldAttributes;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeTypeHandle
  struct RuntimeTypeHandle;
  // Forward declaring type: TypedReference
  struct TypedReference;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: MarshalAsAttribute
  class MarshalAsAttribute;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.FieldInfo
  class FieldInfo : public System::Reflection::MemberInfo, public System::Runtime::InteropServices::_FieldInfo {
    public:
    // public System.Reflection.FieldAttributes get_Attributes()
    // Offset: 0xFFFFFFFF
    System::Reflection::FieldAttributes get_Attributes();
    // public System.RuntimeFieldHandle get_FieldHandle()
    // Offset: 0xFFFFFFFF
    System::RuntimeFieldHandle get_FieldHandle();
    // public System.Type get_FieldType()
    // Offset: 0xFFFFFFFF
    System::Type* get_FieldType();
    // public System.Object GetValue(System.Object obj)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* GetValue(::Il2CppObject* obj);
    // public System.Boolean get_IsLiteral()
    // Offset: 0x12C739C
    bool get_IsLiteral();
    // public System.Boolean get_IsStatic()
    // Offset: 0x12C73C0
    bool get_IsStatic();
    // public System.Boolean get_IsInitOnly()
    // Offset: 0x12C73E4
    bool get_IsInitOnly();
    // public System.Boolean get_IsPublic()
    // Offset: 0x12C7408
    bool get_IsPublic();
    // public System.Boolean get_IsNotSerialized()
    // Offset: 0x12C7434
    bool get_IsNotSerialized();
    // public System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // public System.Void SetValue(System.Object obj, System.Object value)
    // Offset: 0x12C7458
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value);
    // static private System.Reflection.FieldInfo internal_from_handle_type(System.IntPtr field_handle, System.IntPtr type_handle)
    // Offset: 0x12C7474
    static System::Reflection::FieldInfo* internal_from_handle_type(System::IntPtr field_handle, System::IntPtr type_handle);
    // static public System.Reflection.FieldInfo GetFieldFromHandle(System.RuntimeFieldHandle handle)
    // Offset: 0x12C7478
    static System::Reflection::FieldInfo* GetFieldFromHandle(System::RuntimeFieldHandle handle);
    // static public System.Reflection.FieldInfo GetFieldFromHandle(System.RuntimeFieldHandle handle, System.RuntimeTypeHandle declaringType)
    // Offset: 0x12C7510
    static System::Reflection::FieldInfo* GetFieldFromHandle(System::RuntimeFieldHandle handle, System::RuntimeTypeHandle declaringType);
    // System.Int32 GetFieldOffset()
    // Offset: 0x12C7634
    int GetFieldOffset();
    // public System.Void SetValueDirect(System.TypedReference obj, System.Object value)
    // Offset: 0x12C76A0
    void SetValueDirect(System::TypedReference obj, ::Il2CppObject* value);
    // private System.Runtime.InteropServices.MarshalAsAttribute get_marshal_info()
    // Offset: 0x12C7720
    System::Runtime::InteropServices::MarshalAsAttribute* get_marshal_info();
    // System.Object[] GetPseudoCustomAttributes()
    // Offset: 0x12C7724
    ::Array<::Il2CppObject*>* GetPseudoCustomAttributes();
    // public System.Object GetRawConstantValue()
    // Offset: 0x12C7950
    ::Il2CppObject* GetRawConstantValue();
    // protected System.Void .ctor()
    // Offset: 0x12C7390
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static FieldInfo* New_ctor();
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x12C7394
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x12C79BC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12C79C8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.FieldInfo
  // static public System.Boolean op_Equality(System.Reflection.FieldInfo left, System.Reflection.FieldInfo right)
  // Offset: 0x12C75E8
  bool operator ==(System::Reflection::FieldInfo* left, System::Reflection::FieldInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.FieldInfo left, System.Reflection.FieldInfo right)
  // Offset: 0x12C79CC
  bool operator !=(System::Reflection::FieldInfo* left, System::Reflection::FieldInfo& right);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::FieldInfo*, "System.Reflection", "FieldInfo");
#pragma pack(pop)
