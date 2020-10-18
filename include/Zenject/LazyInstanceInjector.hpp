// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.LazyInstanceInjector
  class LazyInstanceInjector : public ::Il2CppObject {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x10
    Zenject::DiContainer* container;
    // private readonly System.Collections.Generic.HashSet`1<System.Object> _instancesToInject
    // Offset: 0x18
    System::Collections::Generic::HashSet_1<::Il2CppObject*>* instancesToInject;
    // public System.Void .ctor(Zenject.DiContainer container)
    // Offset: 0x1511904
    static LazyInstanceInjector* New_ctor(Zenject::DiContainer* container);
    // public System.Collections.Generic.IEnumerable`1<System.Object> get_Instances()
    // Offset: 0x151199C
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* get_Instances();
    // public System.Void AddInstance(System.Object instance)
    // Offset: 0x15119A4
    void AddInstance(::Il2CppObject* instance);
    // public System.Void AddInstances(System.Collections.Generic.IEnumerable`1<System.Object> instances)
    // Offset: 0x1511A0C
    void AddInstances(System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* instances);
    // public System.Void LazyInject(System.Object instance)
    // Offset: 0x1511A74
    void LazyInject(::Il2CppObject* instance);
    // public System.Void LazyInjectAll()
    // Offset: 0x1511B04
    void LazyInjectAll();
  }; // Zenject.LazyInstanceInjector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::LazyInstanceInjector*, "Zenject", "LazyInstanceInjector");
#pragma pack(pop)
