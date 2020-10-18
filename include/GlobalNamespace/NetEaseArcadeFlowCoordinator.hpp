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
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: NetEaseLeaderboardViewController
  class NetEaseLeaderboardViewController;
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
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
  // Autogenerated type: NetEaseArcadeFlowCoordinator
  class NetEaseArcadeFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22
    struct $LogoutAsync$d__22;
    // Nested type: GlobalNamespace::NetEaseArcadeFlowCoordinator::$$c__DisplayClass27_0
    class $$c__DisplayClass27_0;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Offset: 0x110
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // private NetEaseLeaderboardViewController _netEaseLeaderboardViewController
    // Offset: 0x118
    GlobalNamespace::NetEaseLeaderboardViewController* netEaseLeaderboardViewController;
    // private TabBarViewController _tabBarViewController
    // Offset: 0x120
    GlobalNamespace::TabBarViewController* tabBarViewController;
    // private NetEaseManager _netEaseManager
    // Offset: 0x128
    GlobalNamespace::NetEaseManager* netEaseManager;
    // private MenuLightsManager _menuLightsManager
    // Offset: 0x130
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // private ResultsViewController _resultsViewController
    // Offset: 0x138
    GlobalNamespace::ResultsViewController* resultsViewController;
    // private LocalLeaderboardViewController _localLeaderboardViewController
    // Offset: 0x140
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // private HowToPlayViewController _howToPlayViewController
    // Offset: 0x148
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Offset: 0x150
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // private System.Void ProcessScore(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0xF097BC
    void ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // private System.Void AddScoreToLeaderboards(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0xF09998
    void AddScoreToLeaderboards(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // private System.Void LogoutAsync()
    // Offset: 0xF09C00
    void LogoutAsync();
    // private System.Void HandleHowToPlayViewControllerDidFinish(HowToPlayViewController/HowToPlayOptions howToPlayOptions)
    // Offset: 0xF09CDC
    void HandleHowToPlayViewControllerDidFinish(GlobalNamespace::HowToPlayViewController::HowToPlayOptions howToPlayOptions);
    // private System.Void HandleHowToPlayTabSelected()
    // Offset: 0xF09D04
    void HandleHowToPlayTabSelected();
    // private System.Void HandleLogoutTabWasSelected()
    // Offset: 0xF09DB4
    void HandleLogoutTabWasSelected();
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController viewController)
    // Offset: 0xF09DB8
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* viewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0xF09E00
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__17_0()
    // Offset: 0xF09EE8
    void $SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__17_0();
    // private System.Void <HandleHowToPlayTabSelected>b__24_0()
    // Offset: 0xF09EF8
    void $HandleHowToPlayTabSelected$b__24_0();
    // protected override System.String get_gameMode()
    // Offset: 0xF090F4
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0xF0913C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override HMUI.ViewController get_initialTopScreenViewController()
    // Offset: 0xF0917C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController()
    HMUI::ViewController* get_initialTopScreenViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0xF09184
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0xF0918C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0xF0951C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0xF09704
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // public System.Void .ctor()
    // Offset: 0xF09EE0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetEaseArcadeFlowCoordinator* New_ctor();
  }; // NetEaseArcadeFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseArcadeFlowCoordinator*, "", "NetEaseArcadeFlowCoordinator");
#pragma pack(pop)
