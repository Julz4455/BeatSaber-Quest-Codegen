// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.EventSystems.OVRPhysicsRaycaster
#include "UnityEngine/EventSystems/OVRPhysicsRaycaster.hpp"
// Including type: UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c
#include "UnityEngine/EventSystems/OVRPhysicsRaycaster_--c.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static protected System.Int32 kNoEventMaskSet
int UnityEngine::EventSystems::OVRPhysicsRaycaster::_get_kNoEventMaskSet() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("UnityEngine.EventSystems", "OVRPhysicsRaycaster", "kNoEventMaskSet"));
}
// Autogenerated static field setter
// Set static field: static protected System.Int32 kNoEventMaskSet
void UnityEngine::EventSystems::OVRPhysicsRaycaster::_set_kNoEventMaskSet(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.EventSystems", "OVRPhysicsRaycaster", "kNoEventMaskSet", value));
}
// Autogenerated method: UnityEngine.EventSystems.OVRPhysicsRaycaster.get_depth
int UnityEngine::EventSystems::OVRPhysicsRaycaster::get_depth() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_depth"));
}
// Autogenerated method: UnityEngine.EventSystems.OVRPhysicsRaycaster.get_finalEventMask
int UnityEngine::EventSystems::OVRPhysicsRaycaster::get_finalEventMask() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_finalEventMask"));
}
// Autogenerated method: UnityEngine.EventSystems.OVRPhysicsRaycaster.get_eventMask
UnityEngine::LayerMask UnityEngine::EventSystems::OVRPhysicsRaycaster::get_eventMask() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::LayerMask>(this, "get_eventMask"));
}
// Autogenerated method: UnityEngine.EventSystems.OVRPhysicsRaycaster.set_eventMask
void UnityEngine::EventSystems::OVRPhysicsRaycaster::set_eventMask(UnityEngine::LayerMask value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_eventMask", value));
}
// Autogenerated method: UnityEngine.EventSystems.OVRPhysicsRaycaster.Spherecast
void UnityEngine::EventSystems::OVRPhysicsRaycaster::Spherecast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList, float radius) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Spherecast", eventData, resultAppendList, radius));
}
// Autogenerated method: UnityEngine.EventSystems.OVRPhysicsRaycaster.GetScreenPos
UnityEngine::Vector2 UnityEngine::EventSystems::OVRPhysicsRaycaster::GetScreenPos(UnityEngine::Vector3 worldPosition) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>(this, "GetScreenPos", worldPosition));
}
// Autogenerated method: UnityEngine.EventSystems.OVRPhysicsRaycaster..ctor
UnityEngine::EventSystems::OVRPhysicsRaycaster* UnityEngine::EventSystems::OVRPhysicsRaycaster::New_ctor() {
  return (OVRPhysicsRaycaster*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.EventSystems", "OVRPhysicsRaycaster"));
}
// Autogenerated method: UnityEngine.EventSystems.OVRPhysicsRaycaster.get_eventCamera
UnityEngine::Camera* UnityEngine::EventSystems::OVRPhysicsRaycaster::get_eventCamera() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Camera*>(this, "get_eventCamera"));
}
// Autogenerated method: UnityEngine.EventSystems.OVRPhysicsRaycaster.get_sortOrderPriority
int UnityEngine::EventSystems::OVRPhysicsRaycaster::get_sortOrderPriority() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_sortOrderPriority"));
}
// Autogenerated method: UnityEngine.EventSystems.OVRPhysicsRaycaster.Raycast
void UnityEngine::EventSystems::OVRPhysicsRaycaster::Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Raycast", eventData, resultAppendList));
}
