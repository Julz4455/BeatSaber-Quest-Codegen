// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
// Including type: ObstacleController/Pool
#include "GlobalNamespace/ObstacleController_Pool.hpp"
// Including type: ObstacleController/<DissolveCoroutine>d__60
#include "GlobalNamespace/ObstacleController_-DissolveCoroutine-d__60.hpp"
// Including type: StretchableObstacle
#include "GlobalNamespace/StretchableObstacle.hpp"
// Including type: SimpleColorSO
#include "GlobalNamespace/SimpleColorSO.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: PlayerTransforms
#include "GlobalNamespace/PlayerTransforms.hpp"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: ObstacleData
#include "GlobalNamespace/ObstacleData.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Single kAvoidMarkTimeOffset
float GlobalNamespace::ObstacleController::_get_kAvoidMarkTimeOffset() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "ObstacleController", "kAvoidMarkTimeOffset"));
}
// Autogenerated static field setter
// Set static field: static public System.Single kAvoidMarkTimeOffset
void GlobalNamespace::ObstacleController::_set_kAvoidMarkTimeOffset(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ObstacleController", "kAvoidMarkTimeOffset", value));
}
// Autogenerated method: ObstacleController.add_didInitEvent
void GlobalNamespace::ObstacleController::add_didInitEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didInitEvent", value));
}
// Autogenerated method: ObstacleController.remove_didInitEvent
void GlobalNamespace::ObstacleController::remove_didInitEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didInitEvent", value));
}
// Autogenerated method: ObstacleController.add_finishedMovementEvent
void GlobalNamespace::ObstacleController::add_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_finishedMovementEvent", value));
}
// Autogenerated method: ObstacleController.remove_finishedMovementEvent
void GlobalNamespace::ObstacleController::remove_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_finishedMovementEvent", value));
}
// Autogenerated method: ObstacleController.add_passedThreeQuartersOfMove2Event
void GlobalNamespace::ObstacleController::add_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_passedThreeQuartersOfMove2Event", value));
}
// Autogenerated method: ObstacleController.remove_passedThreeQuartersOfMove2Event
void GlobalNamespace::ObstacleController::remove_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_passedThreeQuartersOfMove2Event", value));
}
// Autogenerated method: ObstacleController.add_passedAvoidedMarkEvent
void GlobalNamespace::ObstacleController::add_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_passedAvoidedMarkEvent", value));
}
// Autogenerated method: ObstacleController.remove_passedAvoidedMarkEvent
void GlobalNamespace::ObstacleController::remove_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_passedAvoidedMarkEvent", value));
}
// Autogenerated method: ObstacleController.add_didStartDissolvingEvent
void GlobalNamespace::ObstacleController::add_didStartDissolvingEvent(System::Action_2<GlobalNamespace::ObstacleController*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didStartDissolvingEvent", value));
}
// Autogenerated method: ObstacleController.remove_didStartDissolvingEvent
void GlobalNamespace::ObstacleController::remove_didStartDissolvingEvent(System::Action_2<GlobalNamespace::ObstacleController*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didStartDissolvingEvent", value));
}
// Autogenerated method: ObstacleController.add_didDissolveEvent
void GlobalNamespace::ObstacleController::add_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didDissolveEvent", value));
}
// Autogenerated method: ObstacleController.remove_didDissolveEvent
void GlobalNamespace::ObstacleController::remove_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didDissolveEvent", value));
}
// Autogenerated method: ObstacleController.set_hide
void GlobalNamespace::ObstacleController::set_hide(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_hide", value));
}
// Autogenerated method: ObstacleController.set_pause
void GlobalNamespace::ObstacleController::set_pause(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_pause", value));
}
// Autogenerated method: ObstacleController.get_bounds
UnityEngine::Bounds GlobalNamespace::ObstacleController::get_bounds() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Bounds>(this, "get_bounds"));
}
// Autogenerated method: ObstacleController.get_obstacleData
GlobalNamespace::ObstacleData* GlobalNamespace::ObstacleController::get_obstacleData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::ObstacleData*>(this, "get_obstacleData"));
}
// Autogenerated method: ObstacleController.get_hasPassedAvoidedMark
bool GlobalNamespace::ObstacleController::get_hasPassedAvoidedMark() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasPassedAvoidedMark"));
}
// Autogenerated method: ObstacleController.get_move1Duration
float GlobalNamespace::ObstacleController::get_move1Duration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_move1Duration"));
}
// Autogenerated method: ObstacleController.get_move2Duration
float GlobalNamespace::ObstacleController::get_move2Duration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_move2Duration"));
}
// Autogenerated method: ObstacleController.Init
void GlobalNamespace::ObstacleController::Init(GlobalNamespace::ObstacleData* obstacleData, float worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 midPos, UnityEngine::Vector3 endPos, float move1Duration, float move2Duration, float singleLineWidth, float height) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", obstacleData, worldRotation, startPos, midPos, endPos, move1Duration, move2Duration, singleLineWidth, height));
}
// Autogenerated method: ObstacleController.Update
void GlobalNamespace::ObstacleController::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: ObstacleController.ManualUpdate
void GlobalNamespace::ObstacleController::ManualUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ManualUpdate"));
}
// Autogenerated method: ObstacleController.GetPosForTime
UnityEngine::Vector3 GlobalNamespace::ObstacleController::GetPosForTime(float time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "GetPosForTime", time));
}
// Autogenerated method: ObstacleController.DissolveCoroutine
System::Collections::IEnumerator* GlobalNamespace::ObstacleController::DissolveCoroutine(float duration) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "DissolveCoroutine", duration));
}
// Autogenerated method: ObstacleController.Dissolve
void GlobalNamespace::ObstacleController::Dissolve(float duration) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dissolve", duration));
}
// Autogenerated method: ObstacleController..ctor
GlobalNamespace::ObstacleController* GlobalNamespace::ObstacleController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ObstacleController*>());
}
