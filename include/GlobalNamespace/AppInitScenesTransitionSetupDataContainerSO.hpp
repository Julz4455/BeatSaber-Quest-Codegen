// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AppInitScenesTransitionSetupDataSO
  class AppInitScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AppInitScenesTransitionSetupDataContainerSO
  class AppInitScenesTransitionSetupDataContainerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // public AppInitScenesTransitionSetupDataSO appInitScenesTransitionSetupData
    // Offset: 0x18
    GlobalNamespace::AppInitScenesTransitionSetupDataSO* appInitScenesTransitionSetupData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0xFAFA74
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AppInitScenesTransitionSetupDataContainerSO* New_ctor();
  }; // AppInitScenesTransitionSetupDataContainerSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, "", "AppInitScenesTransitionSetupDataContainerSO");
#pragma pack(pop)
