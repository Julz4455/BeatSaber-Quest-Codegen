// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SinglePlayerLevelSelectionFlowCoordinator
#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
// Including type: HowToPlayViewController
#include "GlobalNamespace/HowToPlayViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalLeaderboardsModel
  class LocalLeaderboardsModel;
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ShowcaseFlowCoordinator
  class ShowcaseFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // Nested type: GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    // private LocalLeaderboardsModel _localLeaderboardsModel
    // Offset: 0x110
    GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel;
    // private TabBarViewController _tabBarViewController
    // Offset: 0x118
    GlobalNamespace::TabBarViewController* tabBarViewController;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Offset: 0x120
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // private MenuLightsPresetSO _resultsLightsPreset
    // Offset: 0x128
    GlobalNamespace::MenuLightsPresetSO* resultsLightsPreset;
    // private readonly HowToPlayViewController _howToPlayViewController
    // Offset: 0x130
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // private readonly MenuLightsManager _menuLightsManager
    // Offset: 0x138
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // private readonly ResultsViewController _resultsViewController
    // Offset: 0x140
    GlobalNamespace::ResultsViewController* resultsViewController;
    // private readonly LocalLeaderboardViewController _localLeaderboardViewController
    // Offset: 0x148
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // private readonly EnterPlayerGuestNameViewController _enterNameViewController
    // Offset: 0x150
    GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController;
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Offset: 0x158
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // private System.Boolean WillScoreGoToLeaderboard(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice)
    // Offset: 0xEECC20
    bool WillScoreGoToLeaderboard(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice);
    // private System.Boolean ProcessScore(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice, System.String playerName)
    // Offset: 0xEECC8C
    bool ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, ::Il2CppString* playerName);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0xEECD5C
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0xEECDA4
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleHowToPlayViewControllerDidFinish(HowToPlayViewController/HowToPlayOptions howToPlayOptions)
    // Offset: 0xEED038
    void HandleHowToPlayViewControllerDidFinish(GlobalNamespace::HowToPlayViewController::HowToPlayOptions howToPlayOptions);
    // private System.Void HandleHowToPlayTabSelected()
    // Offset: 0xEED060
    void HandleHowToPlayTabSelected();
    // private System.Void <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__24_0()
    // Offset: 0xEED26C
    void $SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__24_0();
    // private System.Void <HandleHowToPlayTabSelected>b__32_0()
    // Offset: 0xEED27C
    void $HandleHowToPlayTabSelected$b__32_0();
    // protected override System.String get_gameMode()
    // Offset: 0xEEC458
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0xEEC4A0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override HMUI.ViewController get_initialTopScreenViewController()
    // Offset: 0xEEC4A8
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController()
    HMUI::ViewController* get_initialTopScreenViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0xEEC4B0
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Boolean get_hidePacksIfOneOrNone()
    // Offset: 0xEEC4B8
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone()
    bool get_hidePacksIfOneOrNone();
    // protected override System.Boolean get_hideGameplaySetup()
    // Offset: 0xEEC4C0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Boolean SinglePlayerLevelSelectionFlowCoordinator::get_hideGameplaySetup()
    bool get_hideGameplaySetup();
    // protected override System.Boolean get_hidePracticeButton()
    // Offset: 0xEEC4C8
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePracticeButton()
    bool get_hidePracticeButton();
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0xEEC4D0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0xEEC80C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0xEECA04
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // public System.Void .ctor()
    // Offset: 0xEED25C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ShowcaseFlowCoordinator* New_ctor();
  }; // ShowcaseFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowcaseFlowCoordinator*, "", "ShowcaseFlowCoordinator");
#pragma pack(pop)
