// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PartyFreePlayFlowCoordinator
#include "GlobalNamespace/PartyFreePlayFlowCoordinator.hpp"
// Including type: PartyFreePlayFlowCoordinator/<>c__DisplayClass19_0
#include "GlobalNamespace/PartyFreePlayFlowCoordinator_--c__DisplayClass19_0.hpp"
// Including type: PartyFreePlayFlowCoordinator/<>c__DisplayClass24_0
#include "GlobalNamespace/PartyFreePlayFlowCoordinator_--c__DisplayClass24_0.hpp"
// Including type: MenuLightsPresetSO
#include "GlobalNamespace/MenuLightsPresetSO.hpp"
// Including type: MenuLightsManager
#include "GlobalNamespace/MenuLightsManager.hpp"
// Including type: ResultsViewController
#include "GlobalNamespace/ResultsViewController.hpp"
// Including type: LocalLeaderboardViewController
#include "GlobalNamespace/LocalLeaderboardViewController.hpp"
// Including type: EnterPlayerGuestNameViewController
#include "GlobalNamespace/EnterPlayerGuestNameViewController.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PartyFreePlayFlowCoordinator.WillScoreGoToLeaderboard
bool GlobalNamespace::PartyFreePlayFlowCoordinator::WillScoreGoToLeaderboard(GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::Il2CppString* leaderboardId, bool practice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "WillScoreGoToLeaderboard", levelCompletionResults, leaderboardId, practice));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.IsNewHighScore
bool GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::Il2CppString* leaderboardId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsNewHighScore", levelCompletionResults, leaderboardId));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.ProcessScore
void GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::Il2CppString* leaderboardId, ::Il2CppString* playerName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessScore", levelCompletionResults, leaderboardId, playerName));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.HandleResultsViewControllerContinueButtonPressed
void GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleResultsViewControllerContinueButtonPressed", resultsViewController));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.HandleResultsViewControllerRestartButtonPressed
void GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleResultsViewControllerRestartButtonPressed", resultsViewController));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.get_gameMode
::Il2CppString* GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_gameMode"));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.get_leaderboardViewController
GlobalNamespace::LeaderboardViewController* GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::LeaderboardViewController*>(this, "get_leaderboardViewController"));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.get_showPlayerStatsInDetailView
bool GlobalNamespace::PartyFreePlayFlowCoordinator::get_showPlayerStatsInDetailView() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_showPlayerStatsInDetailView"));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.get_showBackButtonForMainViewController
bool GlobalNamespace::PartyFreePlayFlowCoordinator::get_showBackButtonForMainViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_showBackButtonForMainViewController"));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.get_mainTitle
::Il2CppString* GlobalNamespace::PartyFreePlayFlowCoordinator::get_mainTitle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_mainTitle"));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidActivate
void GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SinglePlayerLevelSelectionFlowCoordinatorDidActivate", firstActivation, addedToHierarchy));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
void GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate", removedFromHierarchy));
}
// Autogenerated method: PartyFreePlayFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
void GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessLevelCompletionResultsAfterLevelDidFinish", levelCompletionResults, difficultyBeatmap, gameplayModifiers, practice));
}
// Autogenerated method: PartyFreePlayFlowCoordinator..ctor
GlobalNamespace::PartyFreePlayFlowCoordinator* GlobalNamespace::PartyFreePlayFlowCoordinator::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<PartyFreePlayFlowCoordinator*>());
}
