// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: SteamVR_Controller/Device
#include "GlobalNamespace/SteamVR_Controller_Device.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: Valve.VR.EVRButtonId
#include "Valve/VR/EVRButtonId.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: SteamVR_Utils/RigidTransform
#include "GlobalNamespace/SteamVR_Utils_RigidTransform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: SteamVR_Controller/Device..ctor
GlobalNamespace::SteamVR_Controller::Device* GlobalNamespace::SteamVR_Controller::Device::New_ctor(uint i) {
  return (SteamVR_Controller::Device*)THROW_UNLESS(il2cpp_utils::New("", "SteamVR_Controller/Device", i));
}
// Autogenerated method: SteamVR_Controller/Device.get_index
uint GlobalNamespace::SteamVR_Controller::Device::get_index() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "get_index"));
}
// Autogenerated method: SteamVR_Controller/Device.set_index
void GlobalNamespace::SteamVR_Controller::Device::set_index(uint value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_index", value));
}
// Autogenerated method: SteamVR_Controller/Device.get_valid
bool GlobalNamespace::SteamVR_Controller::Device::get_valid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_valid"));
}
// Autogenerated method: SteamVR_Controller/Device.set_valid
void GlobalNamespace::SteamVR_Controller::Device::set_valid(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_valid", value));
}
// Autogenerated method: SteamVR_Controller/Device.get_connected
bool GlobalNamespace::SteamVR_Controller::Device::get_connected() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_connected"));
}
// Autogenerated method: SteamVR_Controller/Device.get_hasTracking
bool GlobalNamespace::SteamVR_Controller::Device::get_hasTracking() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasTracking"));
}
// Autogenerated method: SteamVR_Controller/Device.get_outOfRange
bool GlobalNamespace::SteamVR_Controller::Device::get_outOfRange() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_outOfRange"));
}
// Autogenerated method: SteamVR_Controller/Device.get_calibrating
bool GlobalNamespace::SteamVR_Controller::Device::get_calibrating() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_calibrating"));
}
// Autogenerated method: SteamVR_Controller/Device.get_uninitialized
bool GlobalNamespace::SteamVR_Controller::Device::get_uninitialized() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_uninitialized"));
}
// Autogenerated method: SteamVR_Controller/Device.get_transform
GlobalNamespace::SteamVR_Utils::RigidTransform GlobalNamespace::SteamVR_Controller::Device::get_transform() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::SteamVR_Utils::RigidTransform>(this, "get_transform"));
}
// Autogenerated method: SteamVR_Controller/Device.get_velocity
UnityEngine::Vector3 GlobalNamespace::SteamVR_Controller::Device::get_velocity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_velocity"));
}
// Autogenerated method: SteamVR_Controller/Device.get_angularVelocity
UnityEngine::Vector3 GlobalNamespace::SteamVR_Controller::Device::get_angularVelocity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_angularVelocity"));
}
// Autogenerated method: SteamVR_Controller/Device.GetState
Valve::VR::VRControllerState_t GlobalNamespace::SteamVR_Controller::Device::GetState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::VRControllerState_t>(this, "GetState"));
}
// Autogenerated method: SteamVR_Controller/Device.GetPrevState
Valve::VR::VRControllerState_t GlobalNamespace::SteamVR_Controller::Device::GetPrevState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::VRControllerState_t>(this, "GetPrevState"));
}
// Autogenerated method: SteamVR_Controller/Device.GetPose
Valve::VR::TrackedDevicePose_t GlobalNamespace::SteamVR_Controller::Device::GetPose() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::TrackedDevicePose_t>(this, "GetPose"));
}
// Autogenerated method: SteamVR_Controller/Device.Update
void GlobalNamespace::SteamVR_Controller::Device::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: SteamVR_Controller/Device.GetPress
bool GlobalNamespace::SteamVR_Controller::Device::GetPress(uint64_t buttonMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetPress", buttonMask));
}
// Autogenerated method: SteamVR_Controller/Device.GetPressDown
bool GlobalNamespace::SteamVR_Controller::Device::GetPressDown(uint64_t buttonMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetPressDown", buttonMask));
}
// Autogenerated method: SteamVR_Controller/Device.GetPressUp
bool GlobalNamespace::SteamVR_Controller::Device::GetPressUp(uint64_t buttonMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetPressUp", buttonMask));
}
// Autogenerated method: SteamVR_Controller/Device.GetPress
bool GlobalNamespace::SteamVR_Controller::Device::GetPress(Valve::VR::EVRButtonId buttonId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetPress", buttonId));
}
// Autogenerated method: SteamVR_Controller/Device.GetPressDown
bool GlobalNamespace::SteamVR_Controller::Device::GetPressDown(Valve::VR::EVRButtonId buttonId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetPressDown", buttonId));
}
// Autogenerated method: SteamVR_Controller/Device.GetPressUp
bool GlobalNamespace::SteamVR_Controller::Device::GetPressUp(Valve::VR::EVRButtonId buttonId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetPressUp", buttonId));
}
// Autogenerated method: SteamVR_Controller/Device.GetTouch
bool GlobalNamespace::SteamVR_Controller::Device::GetTouch(uint64_t buttonMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetTouch", buttonMask));
}
// Autogenerated method: SteamVR_Controller/Device.GetTouchDown
bool GlobalNamespace::SteamVR_Controller::Device::GetTouchDown(uint64_t buttonMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetTouchDown", buttonMask));
}
// Autogenerated method: SteamVR_Controller/Device.GetTouchUp
bool GlobalNamespace::SteamVR_Controller::Device::GetTouchUp(uint64_t buttonMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetTouchUp", buttonMask));
}
// Autogenerated method: SteamVR_Controller/Device.GetTouch
bool GlobalNamespace::SteamVR_Controller::Device::GetTouch(Valve::VR::EVRButtonId buttonId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetTouch", buttonId));
}
// Autogenerated method: SteamVR_Controller/Device.GetTouchDown
bool GlobalNamespace::SteamVR_Controller::Device::GetTouchDown(Valve::VR::EVRButtonId buttonId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetTouchDown", buttonId));
}
// Autogenerated method: SteamVR_Controller/Device.GetTouchUp
bool GlobalNamespace::SteamVR_Controller::Device::GetTouchUp(Valve::VR::EVRButtonId buttonId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetTouchUp", buttonId));
}
// Autogenerated method: SteamVR_Controller/Device.GetAxis
UnityEngine::Vector2 GlobalNamespace::SteamVR_Controller::Device::GetAxis(Valve::VR::EVRButtonId buttonId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>(this, "GetAxis", buttonId));
}
// Autogenerated method: SteamVR_Controller/Device.TriggerHapticPulse
void GlobalNamespace::SteamVR_Controller::Device::TriggerHapticPulse(uint16_t durationMicroSec, Valve::VR::EVRButtonId buttonId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TriggerHapticPulse", durationMicroSec, buttonId));
}
// Autogenerated method: SteamVR_Controller/Device.UpdateHairTrigger
void GlobalNamespace::SteamVR_Controller::Device::UpdateHairTrigger() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateHairTrigger"));
}
// Autogenerated method: SteamVR_Controller/Device.GetHairTrigger
bool GlobalNamespace::SteamVR_Controller::Device::GetHairTrigger() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetHairTrigger"));
}
// Autogenerated method: SteamVR_Controller/Device.GetHairTriggerDown
bool GlobalNamespace::SteamVR_Controller::Device::GetHairTriggerDown() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetHairTriggerDown"));
}
// Autogenerated method: SteamVR_Controller/Device.GetHairTriggerUp
bool GlobalNamespace::SteamVR_Controller::Device::GetHairTriggerUp() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetHairTriggerUp"));
}
