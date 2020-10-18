// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: TutorialNoteController
#include "GlobalNamespace/TutorialNoteController.hpp"
// Including type: TutorialNoteController/Pool
#include "GlobalNamespace/TutorialNoteController_Pool.hpp"
// Including type: BoxCuttableBySaber
#include "GlobalNamespace/BoxCuttableBySaber.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: Saber
#include "GlobalNamespace/Saber.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TutorialNoteController.HandleBeforeNoteWasCutBySaber
void GlobalNamespace::TutorialNoteController::HandleBeforeNoteWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBeforeNoteWasCutBySaber", saber, cutPoint, orientation, cutDirVec));
}
// Autogenerated method: TutorialNoteController.HandleCoreWasCutBySaber
void GlobalNamespace::TutorialNoteController::HandleCoreWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleCoreWasCutBySaber", saber, cutPoint, orientation, cutDirVec));
}
// Autogenerated method: TutorialNoteController.set_hide
void GlobalNamespace::TutorialNoteController::set_hide(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_hide", value));
}
// Autogenerated method: TutorialNoteController.get_hide
bool GlobalNamespace::TutorialNoteController::get_hide() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hide"));
}
// Autogenerated method: TutorialNoteController.set_pause
void GlobalNamespace::TutorialNoteController::set_pause(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_pause", value));
}
// Autogenerated method: TutorialNoteController.Init
void GlobalNamespace::TutorialNoteController::Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float cutDirectionAngleOffset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, cutDirectionAngleOffset));
}
// Autogenerated method: TutorialNoteController.Awake
void GlobalNamespace::TutorialNoteController::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: TutorialNoteController.OnDestroy
void GlobalNamespace::TutorialNoteController::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: TutorialNoteController.NoteDidPassMissedMarker
void GlobalNamespace::TutorialNoteController::NoteDidPassMissedMarker() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NoteDidPassMissedMarker"));
}
// Autogenerated method: TutorialNoteController..ctor
GlobalNamespace::TutorialNoteController* GlobalNamespace::TutorialNoteController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<TutorialNoteController*>());
}
