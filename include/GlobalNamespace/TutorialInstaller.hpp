// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: TutorialInstaller
  // [] Offset: FFFFFFFF
  class TutorialInstaller : public Zenject::MonoInstaller {
    public:
    // private UnityEngine.AudioClip _audioClip
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private System.Single _songBPM
    // Size: 0x4
    // Offset: 0x28
    float songBPM;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: songBPM and: beatmapObjectSpawnControllerPlayerHeightSetterPrefab
    char __padding1[0x4] = {};
    // [SpaceAttribute] Offset: 0xD3E584
    // private BeatmapObjectSpawnControllerPlayerHeightSetter _beatmapObjectSpawnControllerPlayerHeightSetterPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*) == 0x8);
    // private PlayerHeightDetector _playerHeightDetectorPrefab
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // private EffectPoolsManualInstaller _effectPoolsManualInstaller
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::EffectPoolsManualInstaller* effectPoolsManualInstaller;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EffectPoolsManualInstaller*) == 0x8);
    // Creating value type constructor for type: TutorialInstaller
    TutorialInstaller(UnityEngine::AudioClip* audioClip_ = {}, float songBPM_ = {}, GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab_ = {}, GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab_ = {}, GlobalNamespace::EffectPoolsManualInstaller* effectPoolsManualInstaller_ = {}) noexcept : audioClip{audioClip_}, songBPM{songBPM_}, beatmapObjectSpawnControllerPlayerHeightSetterPrefab{beatmapObjectSpawnControllerPlayerHeightSetterPrefab_}, playerHeightDetectorPrefab{playerHeightDetectorPrefab_}, effectPoolsManualInstaller{effectPoolsManualInstaller_} {}
    // public override System.Void InstallBindings()
    // Offset: 0xF49E78
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xF4A64C
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialInstaller*, creationType>()));
    }
  }; // TutorialInstaller
  #pragma pack(pop)
  static check_size<sizeof(TutorialInstaller), 64 + sizeof(GlobalNamespace::EffectPoolsManualInstaller*)> __GlobalNamespace_TutorialInstallerSizeCheck;
  static_assert(sizeof(TutorialInstaller) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialInstaller*, "", "TutorialInstaller");
