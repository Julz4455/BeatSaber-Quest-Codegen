// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CenterStageScreenController
#include "GlobalNamespace/CenterStageScreenController.hpp"
// Including type: MenuLightsPresetSO
#include "GlobalNamespace/MenuLightsPresetSO.hpp"
// Including type: BeatmapSelectionView
#include "GlobalNamespace/BeatmapSelectionView.hpp"
// Including type: ModifiersSelectionView
#include "GlobalNamespace/ModifiersSelectionView.hpp"
// Including type: CountdownController
#include "GlobalNamespace/CountdownController.hpp"
// Including type: MultiplayerLobbyCenterScreenLayoutAnimator
#include "GlobalNamespace/MultiplayerLobbyCenterScreenLayoutAnimator.hpp"
// Including type: ILobbyPlayersDataModel
#include "GlobalNamespace/ILobbyPlayersDataModel.hpp"
// Including type: MenuLightsManager
#include "GlobalNamespace/MenuLightsManager.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: ILobbyPlayerDataModel
#include "GlobalNamespace/ILobbyPlayerDataModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: CenterStageScreenController.get_countdownShown
bool GlobalNamespace::CenterStageScreenController::get_countdownShown() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_countdownShown"));
}
// Autogenerated method: CenterStageScreenController.set_countdownShown
void GlobalNamespace::CenterStageScreenController::set_countdownShown(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_countdownShown", value));
}
// Autogenerated method: CenterStageScreenController.Setup
void GlobalNamespace::CenterStageScreenController::Setup(bool showModifiers) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Setup", showModifiers));
}
// Autogenerated method: CenterStageScreenController.Show
void GlobalNamespace::CenterStageScreenController::Show() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Show"));
}
// Autogenerated method: CenterStageScreenController.Hide
void GlobalNamespace::CenterStageScreenController::Hide() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Hide"));
}
// Autogenerated method: CenterStageScreenController.ShowCountdown
void GlobalNamespace::CenterStageScreenController::ShowCountdown(float countdownEndTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ShowCountdown", countdownEndTime));
}
// Autogenerated method: CenterStageScreenController.HideCountdown
void GlobalNamespace::CenterStageScreenController::HideCountdown(bool instant) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HideCountdown", instant));
}
// Autogenerated method: CenterStageScreenController.SetCountdownEndTime
void GlobalNamespace::CenterStageScreenController::SetCountdownEndTime(float countdownEndTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCountdownEndTime", countdownEndTime));
}
// Autogenerated method: CenterStageScreenController.ShowCountdownColorPreset
void GlobalNamespace::CenterStageScreenController::ShowCountdownColorPreset(bool animated) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ShowCountdownColorPreset", animated));
}
// Autogenerated method: CenterStageScreenController.ShowLobbyColorPreset
void GlobalNamespace::CenterStageScreenController::ShowLobbyColorPreset(bool animated) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ShowLobbyColorPreset", animated));
}
// Autogenerated method: CenterStageScreenController.SetHostDataManual
void GlobalNamespace::CenterStageScreenController::SetHostDataManual(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetHostDataManual", previewBeatmapLevel, beatmapCharacteristic, beatmapDifficulty));
}
// Autogenerated method: CenterStageScreenController.SetNextGameData
void GlobalNamespace::CenterStageScreenController::SetNextGameData(GlobalNamespace::ILobbyPlayerDataModel* playerData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetNextGameData", playerData));
}
// Autogenerated method: CenterStageScreenController.HandleLobbyPlayersDataModelDidChange
void GlobalNamespace::CenterStageScreenController::HandleLobbyPlayersDataModelDidChange(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLobbyPlayersDataModelDidChange", userId));
}
// Autogenerated method: CenterStageScreenController..ctor
GlobalNamespace::CenterStageScreenController* GlobalNamespace::CenterStageScreenController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<CenterStageScreenController*>());
}
