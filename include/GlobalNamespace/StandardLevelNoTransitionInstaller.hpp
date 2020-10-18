// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelNoTransitionInstaller
  class StandardLevelNoTransitionInstaller : public Zenject::NoTransitionInstaller {
    public:
    // private BeatmapLevelSO _beatmapLevel
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelSO* beatmapLevel;
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Offset: 0x20
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // private BeatmapDifficulty _beatmapDifficulty
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // private ColorSchemeSO _colorScheme
    // Offset: 0x30
    GlobalNamespace::ColorSchemeSO* colorScheme;
    // private EnvironmentInfoSO _environmentInfo
    // Offset: 0x38
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // private GameplayModifiers _gameplayModifiers
    // Offset: 0x40
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // private PlayerSpecificSettings _playerSpecificSettings
    // Offset: 0x48
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // private PracticeSettings _practiceSettings
    // Offset: 0x50
    GlobalNamespace::PracticeSettings* practiceSettings;
    // private System.String _backButtonText
    // Offset: 0x58
    ::Il2CppString* backButtonText;
    // private System.Boolean _useTestNoteCutSoundEffects
    // Offset: 0x60
    bool useTestNoteCutSoundEffects;
    // private StandardLevelScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Offset: 0x68
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0xF2B744
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xF2BE00
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelNoTransitionInstaller* New_ctor();
  }; // StandardLevelNoTransitionInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelNoTransitionInstaller*, "", "StandardLevelNoTransitionInstaller");
#pragma pack(pop)
