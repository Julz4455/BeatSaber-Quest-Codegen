// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass60_0
  class FromBinder::$$c__DisplayClass60_0 : public ::Il2CppObject {
    public:
    // public System.Boolean includeInactive
    // Offset: 0x10
    bool includeInactive;
    // public System.Boolean excludeSelf
    // Offset: 0x11
    bool excludeSelf;
    // public System.Func`2<UnityEngine.Component,System.Boolean> predicate
    // Offset: 0x18
    System::Func_2<UnityEngine::Component*, bool>* predicate;
    // Zenject.IProvider <FromComponentsInChildrenBase>b__0(Zenject.DiContainer container, System.Type concreteType)
    // Offset: 0x144FFE0
    Zenject::IProvider* $FromComponentsInChildrenBase$b__0(Zenject::DiContainer* container, System::Type* concreteType);
    // public System.Void .ctor()
    // Offset: 0x144E480
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass60_0* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass60_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass60_0*, "Zenject", "FromBinder/<>c__DisplayClass60_0");
#pragma pack(pop)
