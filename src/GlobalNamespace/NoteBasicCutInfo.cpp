// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NoteBasicCutInfo
#include "GlobalNamespace/NoteBasicCutInfo.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kCutAngleTolerance
float GlobalNamespace::NoteBasicCutInfo::_get_kCutAngleTolerance() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "NoteBasicCutInfo", "kCutAngleTolerance"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kCutAngleTolerance
void GlobalNamespace::NoteBasicCutInfo::_set_kCutAngleTolerance(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NoteBasicCutInfo", "kCutAngleTolerance", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kMinBladeSpeedForCut
float GlobalNamespace::NoteBasicCutInfo::_get_kMinBladeSpeedForCut() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "NoteBasicCutInfo", "kMinBladeSpeedForCut"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kMinBladeSpeedForCut
void GlobalNamespace::NoteBasicCutInfo::_set_kMinBladeSpeedForCut(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NoteBasicCutInfo", "kMinBladeSpeedForCut", value));
}
// Autogenerated method: NoteBasicCutInfo.GetBasicCutInfo
void GlobalNamespace::NoteBasicCutInfo::GetBasicCutInfo(UnityEngine::Transform* noteTransform, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::SaberType saberType, float saberBladeSpeed, UnityEngine::Vector3 cutDirVec, bool& directionOK, bool& speedOK, bool& saberTypeOK, float& cutDirDeviation, float& cutDirAngle) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "NoteBasicCutInfo", "GetBasicCutInfo", noteTransform, colorType, cutDirection, saberType, saberBladeSpeed, cutDirVec, directionOK, speedOK, saberTypeOK, cutDirDeviation, cutDirAngle));
}
// Autogenerated method: NoteBasicCutInfo..ctor
GlobalNamespace::NoteBasicCutInfo* GlobalNamespace::NoteBasicCutInfo::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<NoteBasicCutInfo*>());
}
