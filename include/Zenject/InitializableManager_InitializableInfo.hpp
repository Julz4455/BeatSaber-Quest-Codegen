// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InitializableManager
#include "Zenject/InitializableManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IInitializable
  class IInitializable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InitializableManager/InitializableInfo
  class InitializableManager::InitializableInfo : public ::Il2CppObject {
    public:
    // public Zenject.IInitializable Initializable
    // Offset: 0x10
    Zenject::IInitializable* Initializable;
    // public System.Int32 Priority
    // Offset: 0x18
    int Priority;
    // public System.Void .ctor(Zenject.IInitializable initializable, System.Int32 priority)
    // Offset: 0x1454764
    static InitializableManager::InitializableInfo* New_ctor(Zenject::IInitializable* initializable, int priority);
  }; // Zenject.InitializableManager/InitializableInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::InitializableManager::InitializableInfo*, "Zenject", "InitializableManager/InitializableInfo");
#pragma pack(pop)
