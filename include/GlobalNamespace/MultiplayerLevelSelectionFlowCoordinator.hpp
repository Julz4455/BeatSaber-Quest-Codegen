// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelSelectionFlowCoordinator
#include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: ILobbyGameStateController
  class ILobbyGameStateController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x120
  // Autogenerated type: MultiplayerLevelSelectionFlowCoordinator
  // [] Offset: FFFFFFFF
  class MultiplayerLevelSelectionFlowCoordinator : public GlobalNamespace::LevelSelectionFlowCoordinator {
    public:
    // private BeatmapCharacteristicSO[] _notAllowedCharacteristics
    // Size: 0x8
    // Offset: 0xD0
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // [InjectAttribute] Offset: 0xDCDE74
    // private readonly ILobbyGameStateController _lobbyGameStateController
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::ILobbyGameStateController* lobbyGameStateController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyGameStateController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCDE84
    // private System.Action`1<LevelSelectionFlowCoordinator/State> didSelectLevelEvent
    // Size: 0x8
    // Offset: 0xE0
    System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>* didSelectLevelEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCDE94
    // private System.Action didFinishedEvent
    // Size: 0x8
    // Offset: 0xE8
    System::Action* didFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.String _actionButtonText
    // Size: 0x8
    // Offset: 0xF0
    ::Il2CppString* actionButtonText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _titleText
    // Size: 0x8
    // Offset: 0xF8
    ::Il2CppString* titleText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private SongPackMask _songPackMask
    // Size: 0x10
    // Offset: 0x100
    GlobalNamespace::SongPackMask songPackMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // private BeatmapDifficultyMask _allowedBeatmapDifficultyMask
    // Size: 0x1
    // Offset: 0x110
    GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: allowedBeatmapDifficultyMask and: state
    char __padding7[0x7] = {};
    // private LevelSelectionFlowCoordinator/State _state
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::LevelSelectionFlowCoordinator::State* state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelSelectionFlowCoordinator::State*) == 0x8);
    // Creating value type constructor for type: MultiplayerLevelSelectionFlowCoordinator
    MultiplayerLevelSelectionFlowCoordinator(::Array<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics_ = {}, GlobalNamespace::ILobbyGameStateController* lobbyGameStateController_ = {}, System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>* didSelectLevelEvent_ = {}, System::Action* didFinishedEvent_ = {}, ::Il2CppString* actionButtonText_ = {}, ::Il2CppString* titleText_ = {}, GlobalNamespace::SongPackMask songPackMask_ = {}, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask_ = {}, GlobalNamespace::LevelSelectionFlowCoordinator::State* state_ = {}) noexcept : notAllowedCharacteristics{notAllowedCharacteristics_}, lobbyGameStateController{lobbyGameStateController_}, didSelectLevelEvent{didSelectLevelEvent_}, didFinishedEvent{didFinishedEvent_}, actionButtonText{actionButtonText_}, titleText{titleText_}, songPackMask{songPackMask_}, allowedBeatmapDifficultyMask{allowedBeatmapDifficultyMask_}, state{state_} {}
    // public System.Void add_didSelectLevelEvent(System.Action`1<LevelSelectionFlowCoordinator/State> value)
    // Offset: 0xFB7F60
    void add_didSelectLevelEvent(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>* value);
    // public System.Void remove_didSelectLevelEvent(System.Action`1<LevelSelectionFlowCoordinator/State> value)
    // Offset: 0xFB8004
    void remove_didSelectLevelEvent(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>* value);
    // public System.Void add_didFinishedEvent(System.Action value)
    // Offset: 0xFB80A8
    void add_didFinishedEvent(System::Action* value);
    // public System.Void remove_didFinishedEvent(System.Action value)
    // Offset: 0xFB814C
    void remove_didFinishedEvent(System::Action* value);
    // public System.Void Setup(LevelSelectionFlowCoordinator/State state, SongPackMask songPackMask, BeatmapDifficultyMask allowedBeatmapDifficultyMask, System.String actionText, System.String titleText)
    // Offset: 0xFB874C
    void Setup(GlobalNamespace::LevelSelectionFlowCoordinator::State* state, GlobalNamespace::SongPackMask songPackMask, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::Il2CppString* actionText, ::Il2CppString* titleText);
    // private System.Void HandleLobbyGameStateControllerGameStarted()
    // Offset: 0xFB87E0
    void HandleLobbyGameStateControllerGameStarted();
    // protected override System.Boolean get_hidePracticeButton()
    // Offset: 0xFB81F0
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePracticeButton()
    bool get_hidePracticeButton();
    // protected override System.Boolean get_hidePacksIfOneOrNone()
    // Offset: 0xFB81F8
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone()
    bool get_hidePacksIfOneOrNone();
    // protected override System.String get_actionButtonText()
    // Offset: 0xFB8200
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.String LevelSelectionFlowCoordinator::get_actionButtonText()
    ::Il2CppString* get_actionButtonText();
    // protected override System.Boolean get_showBackButtonForMainViewController()
    // Offset: 0xFB8208
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController()
    bool get_showBackButtonForMainViewController();
    // protected override SongPackMask get_songPackMask()
    // Offset: 0xFB8210
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: SongPackMask LevelSelectionFlowCoordinator::get_songPackMask()
    GlobalNamespace::SongPackMask get_songPackMask();
    // protected override System.Boolean get_enableCustomLevels()
    // Offset: 0xFB821C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_enableCustomLevels()
    bool get_enableCustomLevels();
    // protected override BeatmapDifficultyMask get_allowedBeatmapDifficultyMask()
    // Offset: 0xFB8224
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: BeatmapDifficultyMask LevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask()
    GlobalNamespace::BeatmapDifficultyMask get_allowedBeatmapDifficultyMask();
    // protected override BeatmapCharacteristicSO[] get_notAllowedCharacteristics()
    // Offset: 0xFB822C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: BeatmapCharacteristicSO[] LevelSelectionFlowCoordinator::get_notAllowedCharacteristics()
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* get_notAllowedCharacteristics();
    // protected override System.String get_mainTitle()
    // Offset: 0xFB8234
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.String LevelSelectionFlowCoordinator::get_mainTitle()
    ::Il2CppString* get_mainTitle();
    // protected override System.Void ActionButtonWasPressed()
    // Offset: 0xFB823C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::ActionButtonWasPressed()
    void ActionButtonWasPressed();
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0xFB8318
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // protected override System.Void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0xFB8374
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected override System.Void TransitionDidStart()
    // Offset: 0xFB8488
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TransitionDidStart()
    void TransitionDidStart();
    // protected override System.Void TransitionDidFinish()
    // Offset: 0xFB85A4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TransitionDidFinish()
    void TransitionDidFinish();
    // public System.Void .ctor()
    // Offset: 0xFB87F4
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelSelectionFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLevelSelectionFlowCoordinator").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelSelectionFlowCoordinator*, creationType>()));
    }
  }; // MultiplayerLevelSelectionFlowCoordinator
  static check_size<sizeof(MultiplayerLevelSelectionFlowCoordinator), 280 + sizeof(GlobalNamespace::LevelSelectionFlowCoordinator::State*)> __GlobalNamespace_MultiplayerLevelSelectionFlowCoordinatorSizeCheck;
  static_assert(sizeof(MultiplayerLevelSelectionFlowCoordinator) == 0x120);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*, "", "MultiplayerLevelSelectionFlowCoordinator");
#pragma pack(pop)
