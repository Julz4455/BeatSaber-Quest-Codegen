// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: GameplayCoreSceneSetupData
#include "GlobalNamespace/GameplayCoreSceneSetupData.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Including type: PlayerSpecificSettings
#include "GlobalNamespace/PlayerSpecificSettings.hpp"
// Including type: PracticeSettings
#include "GlobalNamespace/PracticeSettings.hpp"
// Including type: EnvironmentInfoSO
#include "GlobalNamespace/EnvironmentInfoSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: GameplayCoreSceneSetupData.get_difficultyBeatmap
GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::GameplayCoreSceneSetupData::get_difficultyBeatmap() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IDifficultyBeatmap*>(this, "get_difficultyBeatmap"));
}
// Autogenerated method: GameplayCoreSceneSetupData.set_difficultyBeatmap
void GlobalNamespace::GameplayCoreSceneSetupData::set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_difficultyBeatmap", value));
}
// Autogenerated method: GameplayCoreSceneSetupData.get_gameplayModifiers
GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayCoreSceneSetupData::get_gameplayModifiers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::GameplayModifiers*>(this, "get_gameplayModifiers"));
}
// Autogenerated method: GameplayCoreSceneSetupData.set_gameplayModifiers
void GlobalNamespace::GameplayCoreSceneSetupData::set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_gameplayModifiers", value));
}
// Autogenerated method: GameplayCoreSceneSetupData.get_playerSpecificSettings
GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::GameplayCoreSceneSetupData::get_playerSpecificSettings() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PlayerSpecificSettings*>(this, "get_playerSpecificSettings"));
}
// Autogenerated method: GameplayCoreSceneSetupData.set_playerSpecificSettings
void GlobalNamespace::GameplayCoreSceneSetupData::set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_playerSpecificSettings", value));
}
// Autogenerated method: GameplayCoreSceneSetupData.get_practiceSettings
GlobalNamespace::PracticeSettings* GlobalNamespace::GameplayCoreSceneSetupData::get_practiceSettings() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PracticeSettings*>(this, "get_practiceSettings"));
}
// Autogenerated method: GameplayCoreSceneSetupData.set_practiceSettings
void GlobalNamespace::GameplayCoreSceneSetupData::set_practiceSettings(GlobalNamespace::PracticeSettings* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_practiceSettings", value));
}
// Autogenerated method: GameplayCoreSceneSetupData.get_useTestNoteCutSoundEffects
bool GlobalNamespace::GameplayCoreSceneSetupData::get_useTestNoteCutSoundEffects() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_useTestNoteCutSoundEffects"));
}
// Autogenerated method: GameplayCoreSceneSetupData.set_useTestNoteCutSoundEffects
void GlobalNamespace::GameplayCoreSceneSetupData::set_useTestNoteCutSoundEffects(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_useTestNoteCutSoundEffects", value));
}
// Autogenerated method: GameplayCoreSceneSetupData.get_environmentInfo
GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::GameplayCoreSceneSetupData::get_environmentInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::EnvironmentInfoSO*>(this, "get_environmentInfo"));
}
// Autogenerated method: GameplayCoreSceneSetupData.set_environmentInfo
void GlobalNamespace::GameplayCoreSceneSetupData::set_environmentInfo(GlobalNamespace::EnvironmentInfoSO* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_environmentInfo", value));
}
// Autogenerated method: GameplayCoreSceneSetupData..ctor
GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::GameplayCoreSceneSetupData::New_ctor(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects, GlobalNamespace::EnvironmentInfoSO* environmentInfo) {
  return (GameplayCoreSceneSetupData*)THROW_UNLESS(il2cpp_utils::New("", "GameplayCoreSceneSetupData", difficultyBeatmap, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects, environmentInfo));
}
