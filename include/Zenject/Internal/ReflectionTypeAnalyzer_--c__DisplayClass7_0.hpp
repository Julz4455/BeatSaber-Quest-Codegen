// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass7_0
  class ReflectionTypeAnalyzer::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    // public System.Type type
    // Offset: 0x10
    System::Type* type;
    // public System.Func`2<System.Reflection.ParameterInfo,Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo> <>9__2
    // Offset: 0x18
    System::Func_2<System::Reflection::ParameterInfo*, Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>* $$9__2;
    // Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo <GetMethodInfos>b__2(System.Reflection.ParameterInfo x)
    // Offset: 0x1459E14
    Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* $GetMethodInfos$b__2(System::Reflection::ParameterInfo* x);
    // public System.Void .ctor()
    // Offset: 0x1458BF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ReflectionTypeAnalyzer::$$c__DisplayClass7_0* New_ctor();
  }; // Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass7_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_0");
#pragma pack(pop)
