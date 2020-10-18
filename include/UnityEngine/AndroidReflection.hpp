// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GlobalJavaObjectRef
  class GlobalJavaObjectRef;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AndroidReflection
  class AndroidReflection : public ::Il2CppObject {
    public:
    // Get static field: static private readonly UnityEngine.GlobalJavaObjectRef s_ReflectionHelperClass
    static UnityEngine::GlobalJavaObjectRef* _get_s_ReflectionHelperClass();
    // Set static field: static private readonly UnityEngine.GlobalJavaObjectRef s_ReflectionHelperClass
    static void _set_s_ReflectionHelperClass(UnityEngine::GlobalJavaObjectRef* value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperGetConstructorID
    static System::IntPtr _get_s_ReflectionHelperGetConstructorID();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperGetConstructorID
    static void _set_s_ReflectionHelperGetConstructorID(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperGetMethodID
    static System::IntPtr _get_s_ReflectionHelperGetMethodID();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperGetMethodID
    static void _set_s_ReflectionHelperGetMethodID(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperGetFieldID
    static System::IntPtr _get_s_ReflectionHelperGetFieldID();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperGetFieldID
    static void _set_s_ReflectionHelperGetFieldID(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperGetFieldSignature
    static System::IntPtr _get_s_ReflectionHelperGetFieldSignature();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperGetFieldSignature
    static void _set_s_ReflectionHelperGetFieldSignature(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperNewProxyInstance
    static System::IntPtr _get_s_ReflectionHelperNewProxyInstance();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperNewProxyInstance
    static void _set_s_ReflectionHelperNewProxyInstance(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperSetNativeExceptionOnProxy
    static System::IntPtr _get_s_ReflectionHelperSetNativeExceptionOnProxy();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperSetNativeExceptionOnProxy
    static void _set_s_ReflectionHelperSetNativeExceptionOnProxy(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_FieldGetDeclaringClass
    static System::IntPtr _get_s_FieldGetDeclaringClass();
    // Set static field: static private readonly System.IntPtr s_FieldGetDeclaringClass
    static void _set_s_FieldGetDeclaringClass(System::IntPtr value);
    // static public System.Boolean IsPrimitive(System.Type t)
    // Offset: 0x21B7CF4
    static bool IsPrimitive(System::Type* t);
    // static public System.Boolean IsAssignableFrom(System.Type t, System.Type from)
    // Offset: 0x21B7D0C
    static bool IsAssignableFrom(System::Type* t, System::Type* from);
    // static private System.IntPtr GetStaticMethodID(System.String clazz, System.String methodName, System.String signature)
    // Offset: 0x21B7D2C
    static System::IntPtr GetStaticMethodID(::Il2CppString* clazz, ::Il2CppString* methodName, ::Il2CppString* signature);
    // static private System.IntPtr GetMethodID(System.String clazz, System.String methodName, System.String signature)
    // Offset: 0x21B7DA8
    static System::IntPtr GetMethodID(::Il2CppString* clazz, ::Il2CppString* methodName, ::Il2CppString* signature);
    // static public System.IntPtr GetConstructorMember(System.IntPtr jclass, System.String signature)
    // Offset: 0x21B7E24
    static System::IntPtr GetConstructorMember(System::IntPtr jclass, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodMember(System.IntPtr jclass, System.String methodName, System.String signature, System.Boolean isStatic)
    // Offset: 0x21B7FA4
    static System::IntPtr GetMethodMember(System::IntPtr jclass, ::Il2CppString* methodName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr GetFieldMember(System.IntPtr jclass, System.String fieldName, System.String signature, System.Boolean isStatic)
    // Offset: 0x21B8188
    static System::IntPtr GetFieldMember(System::IntPtr jclass, ::Il2CppString* fieldName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr GetFieldClass(System.IntPtr field)
    // Offset: 0x21B836C
    static System::IntPtr GetFieldClass(System::IntPtr field);
    // static public System.String GetFieldSignature(System.IntPtr field)
    // Offset: 0x21B83E0
    static ::Il2CppString* GetFieldSignature(System::IntPtr field);
    // static public System.IntPtr NewProxyInstance(System.IntPtr delegateHandle, System.IntPtr interfaze)
    // Offset: 0x21B8494
    static System::IntPtr NewProxyInstance(System::IntPtr delegateHandle, System::IntPtr interfaze);
    // static public System.Void SetNativeExceptionOnProxy(System.IntPtr proxy, System.Exception e, System.Boolean methodNotFound)
    // Offset: 0x21B6DD8
    static void SetNativeExceptionOnProxy(System::IntPtr proxy, System::Exception* e, bool methodNotFound);
    // static private System.Void .cctor()
    // Offset: 0x21B8570
    static void _cctor();
  }; // UnityEngine.AndroidReflection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidReflection*, "UnityEngine", "AndroidReflection");
#pragma pack(pop)
