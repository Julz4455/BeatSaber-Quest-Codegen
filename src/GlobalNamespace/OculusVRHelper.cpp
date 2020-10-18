// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OculusVRHelper
#include "GlobalNamespace/OculusVRHelper.hpp"
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
// Autogenerated method: OculusVRHelper.get__isOVRManagerPresent
bool GlobalNamespace::OculusVRHelper::get__isOVRManagerPresent() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get__isOVRManagerPresent"));
}
// Autogenerated method: OculusVRHelper.Update
void GlobalNamespace::OculusVRHelper::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: OculusVRHelper.FixedUpdate
void GlobalNamespace::OculusVRHelper::FixedUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixedUpdate"));
}
// Autogenerated method: OculusVRHelper.LateUpdate
void GlobalNamespace::OculusVRHelper::LateUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LateUpdate"));
}
// Autogenerated method: OculusVRHelper.add_inputFocusWasCapturedEvent
void GlobalNamespace::OculusVRHelper::add_inputFocusWasCapturedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_inputFocusWasCapturedEvent", value));
}
// Autogenerated method: OculusVRHelper.remove_inputFocusWasCapturedEvent
void GlobalNamespace::OculusVRHelper::remove_inputFocusWasCapturedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_inputFocusWasCapturedEvent", value));
}
// Autogenerated method: OculusVRHelper.add_inputFocusWasReleasedEvent
void GlobalNamespace::OculusVRHelper::add_inputFocusWasReleasedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_inputFocusWasReleasedEvent", value));
}
// Autogenerated method: OculusVRHelper.remove_inputFocusWasReleasedEvent
void GlobalNamespace::OculusVRHelper::remove_inputFocusWasReleasedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_inputFocusWasReleasedEvent", value));
}
// Autogenerated method: OculusVRHelper.add_hmdUnmountedEvent
void GlobalNamespace::OculusVRHelper::add_hmdUnmountedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_hmdUnmountedEvent", value));
}
// Autogenerated method: OculusVRHelper.remove_hmdUnmountedEvent
void GlobalNamespace::OculusVRHelper::remove_hmdUnmountedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_hmdUnmountedEvent", value));
}
// Autogenerated method: OculusVRHelper.add_hmdMountedEvent
void GlobalNamespace::OculusVRHelper::add_hmdMountedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_hmdMountedEvent", value));
}
// Autogenerated method: OculusVRHelper.remove_hmdMountedEvent
void GlobalNamespace::OculusVRHelper::remove_hmdMountedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_hmdMountedEvent", value));
}
// Autogenerated method: OculusVRHelper.add_joystickWasCenteredThisFrameEvent
void GlobalNamespace::OculusVRHelper::add_joystickWasCenteredThisFrameEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_joystickWasCenteredThisFrameEvent", value));
}
// Autogenerated method: OculusVRHelper.remove_joystickWasCenteredThisFrameEvent
void GlobalNamespace::OculusVRHelper::remove_joystickWasCenteredThisFrameEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_joystickWasCenteredThisFrameEvent", value));
}
// Autogenerated method: OculusVRHelper.add_joystickWasNotCenteredThisFrameEvent
void GlobalNamespace::OculusVRHelper::add_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_joystickWasNotCenteredThisFrameEvent", value));
}
// Autogenerated method: OculusVRHelper.remove_joystickWasNotCenteredThisFrameEvent
void GlobalNamespace::OculusVRHelper::remove_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_joystickWasNotCenteredThisFrameEvent", value));
}
// Autogenerated method: OculusVRHelper.get_isAlwaysWireless
bool GlobalNamespace::OculusVRHelper::get_isAlwaysWireless() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isAlwaysWireless"));
}
// Autogenerated method: OculusVRHelper.get_vrPlatformSDK
GlobalNamespace::VRPlatformSDK GlobalNamespace::OculusVRHelper::get_vrPlatformSDK() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::VRPlatformSDK>(this, "get_vrPlatformSDK"));
}
// Autogenerated method: OculusVRHelper.get_currentXRDeviceModel
GlobalNamespace::XRDeviceModel GlobalNamespace::OculusVRHelper::get_currentXRDeviceModel() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::XRDeviceModel>(this, "get_currentXRDeviceModel"));
}
// Autogenerated method: OculusVRHelper.TriggerHapticPulse
void GlobalNamespace::OculusVRHelper::TriggerHapticPulse(UnityEngine::XR::XRNode node, float duration, float strength, float frequency) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TriggerHapticPulse", node, duration, strength, frequency));
}
// Autogenerated method: OculusVRHelper.StopHaptics
void GlobalNamespace::OculusVRHelper::StopHaptics(UnityEngine::XR::XRNode node) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StopHaptics", node));
}
// Autogenerated method: OculusVRHelper.AdjustControllerTransform
void GlobalNamespace::OculusVRHelper::AdjustControllerTransform(UnityEngine::XR::XRNode node, UnityEngine::Transform* transform, UnityEngine::Vector3 position, UnityEngine::Vector3 rotation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AdjustControllerTransform", node, transform, position, rotation));
}
// Autogenerated method: OculusVRHelper.GetNodePose
bool GlobalNamespace::OculusVRHelper::GetNodePose(UnityEngine::XR::XRNode nodeType, int idx, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetNodePose", nodeType, idx, pos, rot));
}
// Autogenerated method: OculusVRHelper..ctor
GlobalNamespace::OculusVRHelper* GlobalNamespace::OculusVRHelper::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<OculusVRHelper*>());
}
