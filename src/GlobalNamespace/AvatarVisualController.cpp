// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: AvatarVisualController
#include "GlobalNamespace/AvatarVisualController.hpp"
// Including type: AvatarVisualController/HighlighterDelegate
#include "GlobalNamespace/AvatarVisualController_HighlighterDelegate.hpp"
// Including type: UnityEngine.MeshFilter
#include "UnityEngine/MeshFilter.hpp"
// Including type: UnityEngine.SpriteRenderer
#include "UnityEngine/SpriteRenderer.hpp"
// Including type: MulticolorAvatarPartPropertyBlockSetter
#include "GlobalNamespace/MulticolorAvatarPartPropertyBlockSetter.hpp"
// Including type: AvatarPropertyBlockColorSetter
#include "GlobalNamespace/AvatarPropertyBlockColorSetter.hpp"
// Including type: AvatarPartsModel
#include "GlobalNamespace/AvatarPartsModel.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: AvatarData
#include "GlobalNamespace/AvatarData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AvatarVisualController.get_lightColor
UnityEngine::Color GlobalNamespace::AvatarVisualController::get_lightColor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "get_lightColor"));
}
// Autogenerated method: AvatarVisualController.Awake
void GlobalNamespace::AvatarVisualController::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: AvatarVisualController.UpdateAvatarVisual
void GlobalNamespace::AvatarVisualController::UpdateAvatarVisual(GlobalNamespace::AvatarData* avatarData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateAvatarVisual", avatarData));
}
// Autogenerated method: AvatarVisualController.SetLightColor
void GlobalNamespace::AvatarVisualController::SetLightColor(UnityEngine::Color color) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLightColor", color));
}
// Autogenerated method: AvatarVisualController.UpdateAvatarColors
void GlobalNamespace::AvatarVisualController::UpdateAvatarColors() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateAvatarColors"));
}
// Autogenerated method: AvatarVisualController.HighlightEditedPart
void GlobalNamespace::AvatarVisualController::HighlightEditedPart(GlobalNamespace::EditAvatarViewController::AvatarEditPart editPart, int uvSegment) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HighlightEditedPart", editPart, uvSegment));
}
// Autogenerated method: AvatarVisualController.DisableEditedPartHighlight
void GlobalNamespace::AvatarVisualController::DisableEditedPartHighlight() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DisableEditedPartHighlight"));
}
// Autogenerated method: AvatarVisualController.SetHandsHighlight
void GlobalNamespace::AvatarVisualController::SetHandsHighlight(bool highlighted, int uvSegment) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetHandsHighlight", highlighted, uvSegment));
}
// Autogenerated method: AvatarVisualController..ctor
GlobalNamespace::AvatarVisualController* GlobalNamespace::AvatarVisualController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<AvatarVisualController*>());
}
