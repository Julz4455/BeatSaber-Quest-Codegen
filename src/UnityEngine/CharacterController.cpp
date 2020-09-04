// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.CharacterController
#include "UnityEngine/CharacterController.hpp"
// Including type: UnityEngine.CollisionFlags
#include "UnityEngine/CollisionFlags.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.CharacterController.Move
UnityEngine::CollisionFlags UnityEngine::CharacterController::Move(UnityEngine::Vector3 motion) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::CollisionFlags>(this, "Move", motion));
}
// Autogenerated method: UnityEngine.CharacterController.get_isGrounded
bool UnityEngine::CharacterController::get_isGrounded() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isGrounded"));
}
// Autogenerated method: UnityEngine.CharacterController.get_height
float UnityEngine::CharacterController::get_height() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_height"));
}
// Autogenerated method: UnityEngine.CharacterController.get_center
UnityEngine::Vector3 UnityEngine::CharacterController::get_center() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_center"));
}
// Autogenerated method: UnityEngine.CharacterController.get_stepOffset
float UnityEngine::CharacterController::get_stepOffset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_stepOffset"));
}
// Autogenerated method: UnityEngine.CharacterController.Move_Injected
UnityEngine::CollisionFlags UnityEngine::CharacterController::Move_Injected(UnityEngine::Vector3& motion) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::CollisionFlags>(this, "Move_Injected", motion));
}
// Autogenerated method: UnityEngine.CharacterController.get_center_Injected
void UnityEngine::CharacterController::get_center_Injected(UnityEngine::Vector3& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "get_center_Injected", ret));
}
