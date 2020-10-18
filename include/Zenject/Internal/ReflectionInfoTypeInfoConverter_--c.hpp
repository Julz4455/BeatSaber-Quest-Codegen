// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionInfoTypeInfoConverter
#include "Zenject/Internal/ReflectionInfoTypeInfoConverter.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c
  class ReflectionInfoTypeInfoConverter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c <>9
    static Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c <>9
    static void _set_$$9(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c* value);
    // Get static field: static public System.Func`2<Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo,Zenject.InjectableInfo> <>9__0_1
    static System::Func_2<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, Zenject::InjectableInfo*>* _get_$$9__0_1();
    // Set static field: static public System.Func`2<Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo,Zenject.InjectableInfo> <>9__0_1
    static void _set_$$9__0_1(System::Func_2<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, Zenject::InjectableInfo*>* value);
    // Get static field: static public System.Func`2<Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo,Zenject.InjectableInfo> <>9__1_0
    static System::Func_2<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, Zenject::InjectableInfo*>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo,Zenject.InjectableInfo> <>9__1_0
    static void _set_$$9__1_0(System::Func_2<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, Zenject::InjectableInfo*>* value);
    // Get static field: static public System.Func`2<System.Reflection.FieldInfo,System.String> <>9__8_1
    static System::Func_2<System::Reflection::FieldInfo*, ::Il2CppString*>* _get_$$9__8_1();
    // Set static field: static public System.Func`2<System.Reflection.FieldInfo,System.String> <>9__8_1
    static void _set_$$9__8_1(System::Func_2<System::Reflection::FieldInfo*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1457BA4
    static void _cctor();
    // Zenject.InjectableInfo <ConvertMethod>b__0_1(Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo x)
    // Offset: 0x1457C14
    Zenject::InjectableInfo* $ConvertMethod$b__0_1(Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* x);
    // Zenject.InjectableInfo <ConvertConstructor>b__1_0(Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo x)
    // Offset: 0x1457C2C
    Zenject::InjectableInfo* $ConvertConstructor$b__1_0(Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* x);
    // System.String <GetOnlyPropertySetter>b__8_1(System.Reflection.FieldInfo f)
    // Offset: 0x1457C44
    ::Il2CppString* $GetOnlyPropertySetter$b__8_1(System::Reflection::FieldInfo* f);
    // public System.Void .ctor()
    // Offset: 0x1457C0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ReflectionInfoTypeInfoConverter::$$c* New_ctor();
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c");
#pragma pack(pop)
