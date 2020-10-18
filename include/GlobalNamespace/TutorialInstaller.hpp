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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectSpawnControllerPlayerHeightSetter
  class BeatmapObjectSpawnControllerPlayerHeightSetter;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
  // Forward declaring type: EffectPoolsManualInstaller
  class EffectPoolsManualInstaller;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialInstaller
  class TutorialInstaller : public Zenject::MonoInstaller {
    public:
    // private UnityEngine.AudioClip _audioClip
    // Offset: 0x20
    UnityEngine::AudioClip* audioClip;
    // private System.Single _songBPM
    // Offset: 0x28
    float songBPM;
    // private BeatmapObjectSpawnControllerPlayerHeightSetter _beatmapObjectSpawnControllerPlayerHeightSetterPrefab
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab;
    // private PlayerHeightDetector _playerHeightDetectorPrefab
    // Offset: 0x38
    GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab;
    // private EffectPoolsManualInstaller _effectPoolsManualInstaller
    // Offset: 0x40
    GlobalNamespace::EffectPoolsManualInstaller* effectPoolsManualInstaller;
    // public override System.Void InstallBindings()
    // Offset: 0xF39664
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xF39DF4
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TutorialInstaller* New_ctor();
  }; // TutorialInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialInstaller*, "", "TutorialInstaller");
#pragma pack(pop)
