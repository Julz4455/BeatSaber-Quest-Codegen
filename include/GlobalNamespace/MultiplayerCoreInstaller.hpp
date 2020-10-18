// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: MockScoreSyncStateManager
  class MockScoreSyncStateManager;
  // Forward declaring type: ScoreSyncStateManager
  class ScoreSyncStateManager;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerCoreInstaller
  class MultiplayerCoreInstaller : public Zenject::MonoInstaller {
    public:
    // private MultiplayerMockSettings _multiplayerMockSettings
    // Offset: 0x20
    GlobalNamespace::MultiplayerMockSettings* multiplayerMockSettings;
    // private MockScoreSyncStateManager _mockScoreSyncStateManagerPrefab
    // Offset: 0x28
    GlobalNamespace::MockScoreSyncStateManager* mockScoreSyncStateManagerPrefab;
    // private ScoreSyncStateManager _scoreSyncStateManagerPrefab
    // Offset: 0x30
    GlobalNamespace::ScoreSyncStateManager* scoreSyncStateManagerPrefab;
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Offset: 0x38
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x40
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // public override System.Void InstallBindings()
    // Offset: 0xFD225C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xFD2724
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerCoreInstaller* New_ctor();
  }; // MultiplayerCoreInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerCoreInstaller*, "", "MultiplayerCoreInstaller");
#pragma pack(pop)
