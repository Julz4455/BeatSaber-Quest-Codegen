// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CoreGameHUDController
  class CoreGameHUDController;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayCoreHUDInstaller
  class GameplayCoreHUDInstaller : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::GameplayCoreHUDInstaller::HudType
    struct HudType;
    // private CoreGameHUDController _basicHUDPrefab
    // Offset: 0x18
    GlobalNamespace::CoreGameHUDController* basicHUDPrefab;
    // private CoreGameHUDController _narrowHUDPrefab
    // Offset: 0x20
    GlobalNamespace::CoreGameHUDController* narrowHUDPrefab;
    // private CoreGameHUDController _flyingHUDPrefab
    // Offset: 0x28
    GlobalNamespace::CoreGameHUDController* flyingHUDPrefab;
    // public System.Void ManualInstallBindings(Zenject.DiContainer container, GameplayCoreHUDInstaller/HudType hudType)
    // Offset: 0xB3DDBC
    void ManualInstallBindings(Zenject::DiContainer* container, GlobalNamespace::GameplayCoreHUDInstaller::HudType hudType);
    // public System.Void .ctor()
    // Offset: 0xB3DE7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayCoreHUDInstaller* New_ctor();
  }; // GameplayCoreHUDInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayCoreHUDInstaller*, "", "GameplayCoreHUDInstaller");
#pragma pack(pop)