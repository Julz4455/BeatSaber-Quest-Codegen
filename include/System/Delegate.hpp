// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DelegateData
  class DelegateData;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: MulticastDelegate
  class MulticastDelegate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Delegate
  class Delegate : public ::Il2CppObject, public System::ICloneable, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.IntPtr method_ptr
    // Offset: 0x10
    System::IntPtr method_ptr;
    // private System.IntPtr invoke_impl
    // Offset: 0x18
    System::IntPtr invoke_impl;
    // private System.Object m_target
    // Offset: 0x20
    ::Il2CppObject* m_target;
    // private System.IntPtr method
    // Offset: 0x28
    System::IntPtr method;
    // private System.IntPtr delegate_trampoline
    // Offset: 0x30
    System::IntPtr delegate_trampoline;
    // private System.IntPtr extra_arg
    // Offset: 0x38
    System::IntPtr extra_arg;
    // private System.IntPtr method_code
    // Offset: 0x40
    System::IntPtr method_code;
    // private System.Reflection.MethodInfo method_info
    // Offset: 0x48
    System::Reflection::MethodInfo* method_info;
    // private System.Reflection.MethodInfo original_method_info
    // Offset: 0x50
    System::Reflection::MethodInfo* original_method_info;
    // private System.DelegateData data
    // Offset: 0x58
    System::DelegateData* data;
    // private System.Boolean method_is_virtual
    // Offset: 0x60
    bool method_is_virtual;
    // public System.Reflection.MethodInfo get_Method()
    // Offset: 0xC92CA8
    System::Reflection::MethodInfo* get_Method();
    // private System.Reflection.MethodInfo GetVirtualMethod_internal()
    // Offset: 0xC92CB4
    System::Reflection::MethodInfo* GetVirtualMethod_internal();
    // public System.Object get_Target()
    // Offset: 0xC92CB8
    ::Il2CppObject* get_Target();
    // static System.Delegate CreateDelegate_internal(System.Type type, System.Object target, System.Reflection.MethodInfo info, System.Boolean throwOnBindFailure)
    // Offset: 0xC92CC0
    static System::Delegate* CreateDelegate_internal(System::Type* type, ::Il2CppObject* target, System::Reflection::MethodInfo* info, bool throwOnBindFailure);
    // static private System.Boolean arg_type_match(System.Type delArgType, System.Type argType)
    // Offset: 0xC92CC8
    static bool arg_type_match(System::Type* delArgType, System::Type* argType);
    // static private System.Boolean arg_type_match_this(System.Type delArgType, System.Type argType, System.Boolean boxedThis)
    // Offset: 0xC92E84
    static bool arg_type_match_this(System::Type* delArgType, System::Type* argType, bool boxedThis);
    // static private System.Boolean return_type_match(System.Type delReturnType, System.Type returnType)
    // Offset: 0xC93000
    static bool return_type_match(System::Type* delReturnType, System::Type* returnType);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure)
    // Offset: 0xC930C8
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure);
    // static private System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure, System.Boolean allowClosed)
    // Offset: 0xC930D4
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure, bool allowClosed);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method)
    // Offset: 0xC938E8
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure)
    // Offset: 0xC938F4
    static System::Delegate* CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Reflection.MethodInfo method)
    // Offset: 0xC9390C
    static System::Delegate* CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method)
    // Offset: 0xC93920
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method);
    // static private System.Reflection.MethodInfo GetCandidateMethod(System.Type type, System.Type target, System.String method, System.Reflection.BindingFlags bflags, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0xC93938
    static System::Reflection::MethodInfo* GetCandidateMethod(System::Type* type, System::Type* target, ::Il2CppString* method, System::Reflection::BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Type target, System.String method, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0xC93D4C
    static System::Delegate* CreateDelegate(System::Type* type, System::Type* target, ::Il2CppString* method, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Type target, System.String method)
    // Offset: 0xC93E6C
    static System::Delegate* CreateDelegate(System::Type* type, System::Type* target, ::Il2CppString* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0xC93E78
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method, System.Boolean ignoreCase)
    // Offset: 0xC9392C
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method, bool ignoreCase);
    // protected System.Reflection.MethodInfo GetMethodImpl()
    // Offset: 0xC941C4
    System::Reflection::MethodInfo* GetMethodImpl();
    // public System.Delegate[] GetInvocationList()
    // Offset: 0xC944EC
    ::Array<System::Delegate*>* GetInvocationList();
    // static public System.Delegate Combine(System.Delegate a, System.Delegate b)
    // Offset: 0xC94598
    static System::Delegate* Combine(System::Delegate* a, System::Delegate* b);
    // static public System.Delegate Combine(params System.Delegate[] delegates)
    // Offset: 0xC9478C
    static System::Delegate* Combine(::Array<System::Delegate*>* delegates);
    // Creating initializer_list -> params proxy for: System.Delegate Combine(params System.Delegate[] delegates)
    static System::Delegate* Combine(std::initializer_list<System::Delegate*> delegates);
    // Creating TArgs -> initializer_list proxy for: System.Delegate Combine(params System.Delegate[] delegates)
    template<class ...TParams>
    static System::Delegate* Combine(TParams&&... delegates) {
      return Combine({delegates...});
    }
    // protected System.Delegate CombineImpl(System.Delegate d)
    // Offset: 0xC94804
    System::Delegate* CombineImpl(System::Delegate* d);
    // static public System.Delegate Remove(System.Delegate source, System.Delegate value)
    // Offset: 0xC9487C
    static System::Delegate* Remove(System::Delegate* source, System::Delegate* value);
    // protected System.Delegate RemoveImpl(System.Delegate d)
    // Offset: 0xC94A68
    System::Delegate* RemoveImpl(System::Delegate* d);
    // static System.Delegate CreateDelegateNoSecurityCheck(System.RuntimeType type, System.Object firstArgument, System.Reflection.MethodInfo method)
    // Offset: 0xC94AC0
    static System::Delegate* CreateDelegateNoSecurityCheck(System::RuntimeType* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method);
    // static System.MulticastDelegate AllocDelegateLike_internal(System.Delegate d)
    // Offset: 0xC94AC8
    static System::MulticastDelegate* AllocDelegateLike_internal(System::Delegate* d);
    // public System.Object Clone()
    // Offset: 0xC93F74
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC93F7C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC94144
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xC942B4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Delegate
  // static public System.Boolean op_Equality(System.Delegate d1, System.Delegate d2)
  // Offset: 0xC94A98
  bool operator ==(System::Delegate* d1, System::Delegate& d2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Delegate*, "System", "Delegate");
#pragma pack(pop)
