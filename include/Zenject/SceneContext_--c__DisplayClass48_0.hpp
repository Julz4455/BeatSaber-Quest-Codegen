// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SceneContext
#include "Zenject/SceneContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SceneContext/<>c__DisplayClass48_0
  class SceneContext::$$c__DisplayClass48_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.IEnumerable`1<System.String> parentContractNames
    // Offset: 0x10
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* parentContractNames;
    // public System.Func`2<System.String,System.Boolean> <>9__4
    // Offset: 0x18
    System::Func_2<::Il2CppString*, bool>* $$9__4;
    // System.Boolean <GetParentContainers>b__2(Zenject.SceneContext sceneContext)
    // Offset: 0x151B56C
    bool $GetParentContainers$b__2(Zenject::SceneContext* sceneContext);
    // System.Boolean <GetParentContainers>b__4(System.String x)
    // Offset: 0x151B638
    bool $GetParentContainers$b__4(::Il2CppString* x);
    // public System.Void .ctor()
    // Offset: 0x151A624
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SceneContext::$$c__DisplayClass48_0* New_ctor();
  }; // Zenject.SceneContext/<>c__DisplayClass48_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContext::$$c__DisplayClass48_0*, "Zenject", "SceneContext/<>c__DisplayClass48_0");
#pragma pack(pop)
