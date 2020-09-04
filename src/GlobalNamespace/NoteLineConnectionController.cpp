// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NoteLineConnectionController
#include "GlobalNamespace/NoteLineConnectionController.hpp"
// Including type: NoteLineConnectionController/Pool
#include "GlobalNamespace/NoteLineConnectionController_Pool.hpp"
// Including type: UnityEngine.LineRenderer
#include "UnityEngine/LineRenderer.hpp"
// Including type: PlayerController
#include "GlobalNamespace/PlayerController.hpp"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
// Including type: ColorManager
#include "GlobalNamespace/ColorManager.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NoteLineConnectionController.add_didFinishEvent
void GlobalNamespace::NoteLineConnectionController::add_didFinishEvent(System::Action_1<GlobalNamespace::NoteLineConnectionController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didFinishEvent", value));
}
// Autogenerated method: NoteLineConnectionController.remove_didFinishEvent
void GlobalNamespace::NoteLineConnectionController::remove_didFinishEvent(System::Action_1<GlobalNamespace::NoteLineConnectionController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didFinishEvent", value));
}
// Autogenerated method: NoteLineConnectionController.Setup
void GlobalNamespace::NoteLineConnectionController::Setup(GlobalNamespace::NoteController* noteController0, GlobalNamespace::NoteController* noteController1, float fadeOutStartDistance, float fadeOutEndDistance, float noteTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Setup", noteController0, noteController1, fadeOutStartDistance, fadeOutEndDistance, noteTime));
}
// Autogenerated method: NoteLineConnectionController.Update
void GlobalNamespace::NoteLineConnectionController::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: NoteLineConnectionController.UpdatePositionsAndColors
void GlobalNamespace::NoteLineConnectionController::UpdatePositionsAndColors() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdatePositionsAndColors"));
}
// Autogenerated method: NoteLineConnectionController..ctor
GlobalNamespace::NoteLineConnectionController* GlobalNamespace::NoteLineConnectionController::New_ctor() {
  return (NoteLineConnectionController*)THROW_UNLESS(il2cpp_utils::New("", "NoteLineConnectionController"));
}
