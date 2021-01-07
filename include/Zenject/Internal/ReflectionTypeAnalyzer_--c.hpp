// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x10
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D94118
  class ReflectionTypeAnalyzer::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Zenject.Internal.ReflectionTypeAnalyzer/<>c <>9
    static Zenject::Internal::ReflectionTypeAnalyzer::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.Internal.ReflectionTypeAnalyzer/<>c <>9
    static void _set_$$9(Zenject::Internal::ReflectionTypeAnalyzer::$$c* value);
    // Get static field: static public System.Func`2<System.Reflection.PropertyInfo,System.Boolean> <>9__5_0
    static System::Func_2<System::Reflection::PropertyInfo*, bool>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<System.Reflection.PropertyInfo,System.Boolean> <>9__5_0
    static void _set_$$9__5_0(System::Func_2<System::Reflection::PropertyInfo*, bool>* value);
    // Get static field: static public System.Func`2<System.Reflection.FieldInfo,System.Boolean> <>9__6_0
    static System::Func_2<System::Reflection::FieldInfo*, bool>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<System.Reflection.FieldInfo,System.Boolean> <>9__6_0
    static void _set_$$9__6_0(System::Func_2<System::Reflection::FieldInfo*, bool>* value);
    // Get static field: static public System.Func`2<System.Reflection.MethodInfo,System.Boolean> <>9__7_0
    static System::Func_2<System::Reflection::MethodInfo*, bool>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<System.Reflection.MethodInfo,System.Boolean> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<System::Reflection::MethodInfo*, bool>* value);
    // Get static field: static public System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> <>9__11_0
    static System::Func_2<System::Reflection::ConstructorInfo*, bool>* _get_$$9__11_0();
    // Set static field: static public System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> <>9__11_0
    static void _set_$$9__11_0(System::Func_2<System::Reflection::ConstructorInfo*, bool>* value);
    // Get static field: static public System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> <>9__11_1
    static System::Func_2<System::Reflection::ConstructorInfo*, bool>* _get_$$9__11_1();
    // Set static field: static public System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> <>9__11_1
    static void _set_$$9__11_1(System::Func_2<System::Reflection::ConstructorInfo*, bool>* value);
    // Get static field: static public System.Func`2<System.Reflection.ConstructorInfo,System.Int32> <>9__11_2
    static System::Func_2<System::Reflection::ConstructorInfo*, int>* _get_$$9__11_2();
    // Set static field: static public System.Func`2<System.Reflection.ConstructorInfo,System.Int32> <>9__11_2
    static void _set_$$9__11_2(System::Func_2<System::Reflection::ConstructorInfo*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x12A4C98
    static void _cctor();
    // System.Boolean <GetPropertyInfos>b__5_0(System.Reflection.PropertyInfo x)
    // Offset: 0x12A4D08
    bool $GetPropertyInfos$b__5_0(System::Reflection::PropertyInfo* x);
    // System.Boolean <GetFieldInfos>b__6_0(System.Reflection.FieldInfo x)
    // Offset: 0x12A4E00
    bool $GetFieldInfos$b__6_0(System::Reflection::FieldInfo* x);
    // System.Boolean <GetMethodInfos>b__7_0(System.Reflection.MethodInfo x)
    // Offset: 0x12A4EF8
    bool $GetMethodInfos$b__7_0(System::Reflection::MethodInfo* x);
    // System.Boolean <TryGetInjectConstructor>b__11_0(System.Reflection.ConstructorInfo c)
    // Offset: 0x12A4FF0
    bool $TryGetInjectConstructor$b__11_0(System::Reflection::ConstructorInfo* c);
    // System.Boolean <TryGetInjectConstructor>b__11_1(System.Reflection.ConstructorInfo x)
    // Offset: 0x12A50E8
    bool $TryGetInjectConstructor$b__11_1(System::Reflection::ConstructorInfo* x);
    // System.Int32 <TryGetInjectConstructor>b__11_2(System.Reflection.ConstructorInfo x)
    // Offset: 0x12A5104
    int $TryGetInjectConstructor$b__11_2(System::Reflection::ConstructorInfo* x);
    // public System.Void .ctor()
    // Offset: 0x12A4D00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeAnalyzer::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject::Internal").WithContext("$$c").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeAnalyzer::$$c*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionTypeAnalyzer/<>c
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer::$$c*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c");
#pragma pack(pop)
