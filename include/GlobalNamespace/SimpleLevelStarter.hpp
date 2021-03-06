// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
  // Skipping declaration: Component because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: SimpleLevelStarter
  // [] Offset: FFFFFFFF
  class SimpleLevelStarter : public UnityEngine::MonoBehaviour {
    public:
    // private BeatmapLevelSO _level
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelSO* level;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _beatmapDifficulty
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // private System.Boolean _useTestNoteCutSoundEffects
    // Size: 0x1
    // Offset: 0x2C
    bool useTestNoteCutSoundEffects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useTestNoteCutSoundEffects and: recordingTextAsset
    char __padding3[0x3] = {};
    // [NullAllowed] Offset: 0xD456E4
    // private UnityEngine.TextAsset _recordingTextAsset
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::TextAsset* recordingTextAsset;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAsset*) == 0x8);
    // [NullAllowed] Offset: 0xD4571C
    // private UnityEngine.Component[] _prefabBindings
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::Component*>* prefabBindings;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Component*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xD45754
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [InjectAttribute] Offset: 0xD4578C
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xD4579C
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD457AC
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x60
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private readonly GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // Creating value type constructor for type: SimpleLevelStarter
    SimpleLevelStarter(GlobalNamespace::BeatmapLevelSO* level_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, bool useTestNoteCutSoundEffects_ = {}, UnityEngine::TextAsset* recordingTextAsset_ = {}, ::Array<UnityEngine::Component*>* prefabBindings_ = {}, UnityEngine::UI::Button* button_ = {}, GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}) noexcept : level{level_}, beatmapCharacteristic{beatmapCharacteristic_}, beatmapDifficulty{beatmapDifficulty_}, useTestNoteCutSoundEffects{useTestNoteCutSoundEffects_}, recordingTextAsset{recordingTextAsset_}, prefabBindings{prefabBindings_}, button{button_}, menuTransitionsHelper{menuTransitionsHelper_}, gameScenesManager{gameScenesManager_}, playerDataModel{playerDataModel_}, buttonBinder{buttonBinder_}, gameplayModifiers{gameplayModifiers_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xF6C248
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF6C30C
    void OnDestroy();
    // private System.Void StartLevel()
    // Offset: 0xF6C328
    void StartLevel();
    // private System.Void InstallEarlyBindings(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0xF6C4F8
    void InstallEarlyBindings(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* container);
    // private System.Void ButtonPressed()
    // Offset: 0xF6C644
    void ButtonPressed();
    // private System.Void HandleLevelDidFinish(StandardLevelScenesTransitionSetupDataSO standardLevelSceneSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0xF6C648
    void HandleLevelDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void <StartLevel>g__AfterSceneSwitchCallback|14_0(Zenject.DiContainer container)
    // Offset: 0xF6C740
    void $StartLevel$g__AfterSceneSwitchCallback_14_0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xF6C66C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleLevelStarter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleLevelStarter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleLevelStarter*, creationType>()));
    }
  }; // SimpleLevelStarter
  #pragma pack(pop)
  static check_size<sizeof(SimpleLevelStarter), 104 + sizeof(GlobalNamespace::GameplayModifiers*)> __GlobalNamespace_SimpleLevelStarterSizeCheck;
  static_assert(sizeof(SimpleLevelStarter) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleLevelStarter*, "", "SimpleLevelStarter");
