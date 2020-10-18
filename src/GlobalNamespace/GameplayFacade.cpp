// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: GameplayFacade
#include "GlobalNamespace/GameplayFacade.hpp"
// Including type: BeatmapObjectSpawnController
#include "GlobalNamespace/BeatmapObjectSpawnController.hpp"
// Including type: BeatmapObjectCallbackController/BeatmapObjectCallbackData
#include "GlobalNamespace/BeatmapObjectCallbackController_BeatmapObjectCallbackData.hpp"
// Including type: BasicSpectrogramData
#include "GlobalNamespace/BasicSpectrogramData.hpp"
// Including type: SaberManager
#include "GlobalNamespace/SaberManager.hpp"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Saber
#include "GlobalNamespace/Saber.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
// Including type: BeatmapObjectCallbackController/BeatmapObjectCallback
#include "GlobalNamespace/BeatmapObjectCallbackController_BeatmapObjectCallback.hpp"
// Including type: BeatmapObjectCallbackController/BeatmapEventCallbackData
#include "GlobalNamespace/BeatmapObjectCallbackController_BeatmapEventCallbackData.hpp"
// Including type: BeatmapObjectCallbackController/BeatmapEventCallback
#include "GlobalNamespace/BeatmapObjectCallbackController_BeatmapEventCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: GameplayFacade.get_difficultyBeatmap
GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::GameplayFacade::get_difficultyBeatmap() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IDifficultyBeatmap*>(this, "get_difficultyBeatmap"));
}
// Autogenerated method: GameplayFacade.get_isInitialized
bool GlobalNamespace::GameplayFacade::get_isInitialized() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isInitialized"));
}
// Autogenerated method: GameplayFacade.get_moveDuration
float GlobalNamespace::GameplayFacade::get_moveDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_moveDuration"));
}
// Autogenerated method: GameplayFacade.get_jumpDuration
float GlobalNamespace::GameplayFacade::get_jumpDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_jumpDuration"));
}
// Autogenerated method: GameplayFacade.add_didInitEvent
void GlobalNamespace::GameplayFacade::add_didInitEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didInitEvent", value));
}
// Autogenerated method: GameplayFacade.remove_didInitEvent
void GlobalNamespace::GameplayFacade::remove_didInitEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didInitEvent", value));
}
// Autogenerated method: GameplayFacade.get_ProcessedSamples
System::Collections::Generic::List_1<float>* GlobalNamespace::GameplayFacade::get_ProcessedSamples() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<float>*>(this, "get_ProcessedSamples"));
}
// Autogenerated method: GameplayFacade.get_leftSaber
GlobalNamespace::Saber* GlobalNamespace::GameplayFacade::get_leftSaber() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::Saber*>(this, "get_leftSaber"));
}
// Autogenerated method: GameplayFacade.get_rightSaber
GlobalNamespace::Saber* GlobalNamespace::GameplayFacade::get_rightSaber() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::Saber*>(this, "get_rightSaber"));
}
// Autogenerated method: GameplayFacade.add_beatmapEventDidTriggerEvent
void GlobalNamespace::GameplayFacade::add_beatmapEventDidTriggerEvent(System::Action_1<GlobalNamespace::BeatmapEventData*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_beatmapEventDidTriggerEvent", value));
}
// Autogenerated method: GameplayFacade.remove_beatmapEventDidTriggerEvent
void GlobalNamespace::GameplayFacade::remove_beatmapEventDidTriggerEvent(System::Action_1<GlobalNamespace::BeatmapEventData*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_beatmapEventDidTriggerEvent", value));
}
// Autogenerated method: GameplayFacade.AddBeatmapObjectCallback
GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData* GlobalNamespace::GameplayFacade::AddBeatmapObjectCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallback* callback, float aheadTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData*>(this, "AddBeatmapObjectCallback", callback, aheadTime));
}
// Autogenerated method: GameplayFacade.RemoveBeatmapObjectCallback
void GlobalNamespace::GameplayFacade::RemoveBeatmapObjectCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData* callbackData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveBeatmapObjectCallback", callbackData));
}
// Autogenerated method: GameplayFacade.AddBeatmapEventCallback
GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData* GlobalNamespace::GameplayFacade::AddBeatmapEventCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallback* callback, float aheadTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData*>(this, "AddBeatmapEventCallback", callback, aheadTime));
}
// Autogenerated method: GameplayFacade.RemoveBeatmapEventCallback
void GlobalNamespace::GameplayFacade::RemoveBeatmapEventCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData* callbackData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveBeatmapEventCallback", callbackData));
}
// Autogenerated method: GameplayFacade.get_songTime
float GlobalNamespace::GameplayFacade::get_songTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_songTime"));
}
// Autogenerated method: GameplayFacade.get_songEndTime
float GlobalNamespace::GameplayFacade::get_songEndTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_songEndTime"));
}
// Autogenerated method: GameplayFacade..ctor
GlobalNamespace::GameplayFacade* GlobalNamespace::GameplayFacade::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<GameplayFacade*>());
}
