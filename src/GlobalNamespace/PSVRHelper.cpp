// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: PSVRHelper
#include "GlobalNamespace/PSVRHelper.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: VRPlatformSDK
#include "GlobalNamespace/VRPlatformSDK.hpp"
// Including type: XRDeviceModel
#include "GlobalNamespace/XRDeviceModel.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kContinuesRumbleImpulseStrength
float GlobalNamespace::PSVRHelper::_get_kContinuesRumbleImpulseStrength() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "PSVRHelper", "kContinuesRumbleImpulseStrength"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kContinuesRumbleImpulseStrength
void GlobalNamespace::PSVRHelper::_set_kContinuesRumbleImpulseStrength(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "PSVRHelper", "kContinuesRumbleImpulseStrength", value));
}
// Autogenerated method: PSVRHelper.add_inputFocusWasCapturedEvent
void GlobalNamespace::PSVRHelper::add_inputFocusWasCapturedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_inputFocusWasCapturedEvent", value));
}
// Autogenerated method: PSVRHelper.remove_inputFocusWasCapturedEvent
void GlobalNamespace::PSVRHelper::remove_inputFocusWasCapturedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_inputFocusWasCapturedEvent", value));
}
// Autogenerated method: PSVRHelper.add_inputFocusWasReleasedEvent
void GlobalNamespace::PSVRHelper::add_inputFocusWasReleasedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_inputFocusWasReleasedEvent", value));
}
// Autogenerated method: PSVRHelper.remove_inputFocusWasReleasedEvent
void GlobalNamespace::PSVRHelper::remove_inputFocusWasReleasedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_inputFocusWasReleasedEvent", value));
}
// Autogenerated method: PSVRHelper.add_hmdUnmountedEvent
void GlobalNamespace::PSVRHelper::add_hmdUnmountedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_hmdUnmountedEvent", value));
}
// Autogenerated method: PSVRHelper.remove_hmdUnmountedEvent
void GlobalNamespace::PSVRHelper::remove_hmdUnmountedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_hmdUnmountedEvent", value));
}
// Autogenerated method: PSVRHelper.add_hmdMountedEvent
void GlobalNamespace::PSVRHelper::add_hmdMountedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_hmdMountedEvent", value));
}
// Autogenerated method: PSVRHelper.remove_hmdMountedEvent
void GlobalNamespace::PSVRHelper::remove_hmdMountedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_hmdMountedEvent", value));
}
// Autogenerated method: PSVRHelper.add_joystickWasCenteredThisFrameEvent
void GlobalNamespace::PSVRHelper::add_joystickWasCenteredThisFrameEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_joystickWasCenteredThisFrameEvent", value));
}
// Autogenerated method: PSVRHelper.remove_joystickWasCenteredThisFrameEvent
void GlobalNamespace::PSVRHelper::remove_joystickWasCenteredThisFrameEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_joystickWasCenteredThisFrameEvent", value));
}
// Autogenerated method: PSVRHelper.add_joystickWasNotCenteredThisFrameEvent
void GlobalNamespace::PSVRHelper::add_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_joystickWasNotCenteredThisFrameEvent", value));
}
// Autogenerated method: PSVRHelper.remove_joystickWasNotCenteredThisFrameEvent
void GlobalNamespace::PSVRHelper::remove_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_joystickWasNotCenteredThisFrameEvent", value));
}
// Autogenerated method: PSVRHelper.get_isAlwaysWireless
bool GlobalNamespace::PSVRHelper::get_isAlwaysWireless() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isAlwaysWireless"));
}
// Autogenerated method: PSVRHelper.get_vrPlatformSDK
GlobalNamespace::VRPlatformSDK GlobalNamespace::PSVRHelper::get_vrPlatformSDK() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::VRPlatformSDK>(this, "get_vrPlatformSDK"));
}
// Autogenerated method: PSVRHelper.get_currentXRDeviceModel
GlobalNamespace::XRDeviceModel GlobalNamespace::PSVRHelper::get_currentXRDeviceModel() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::XRDeviceModel>(this, "get_currentXRDeviceModel"));
}
// Autogenerated method: PSVRHelper.TriggerHapticPulse
void GlobalNamespace::PSVRHelper::TriggerHapticPulse(UnityEngine::XR::XRNode node, float duration, float strength, float frequency) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TriggerHapticPulse", node, duration, strength, frequency));
}
// Autogenerated method: PSVRHelper.StopHaptics
void GlobalNamespace::PSVRHelper::StopHaptics(UnityEngine::XR::XRNode node) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StopHaptics", node));
}
// Autogenerated method: PSVRHelper.AdjustControllerTransform
void GlobalNamespace::PSVRHelper::AdjustControllerTransform(UnityEngine::XR::XRNode node, UnityEngine::Transform* transform, UnityEngine::Vector3 position, UnityEngine::Vector3 rotation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AdjustControllerTransform", node, transform, position, rotation));
}
// Autogenerated method: PSVRHelper.GetNodePose
bool GlobalNamespace::PSVRHelper::GetNodePose(UnityEngine::XR::XRNode nodeType, int idx, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetNodePose", nodeType, idx, pos, rot));
}
// Autogenerated method: PSVRHelper..ctor
GlobalNamespace::PSVRHelper* GlobalNamespace::PSVRHelper::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<PSVRHelper*>());
}
