// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: RootMotion.QuaTools
#include "RootMotion/QuaTools.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.QuaTools.Lerp
UnityEngine::Quaternion RootMotion::QuaTools::Lerp(UnityEngine::Quaternion fromRotation, UnityEngine::Quaternion toRotation, float weight) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion", "QuaTools", "Lerp", fromRotation, toRotation, weight));
}
// Autogenerated method: RootMotion.QuaTools.Slerp
UnityEngine::Quaternion RootMotion::QuaTools::Slerp(UnityEngine::Quaternion fromRotation, UnityEngine::Quaternion toRotation, float weight) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion", "QuaTools", "Slerp", fromRotation, toRotation, weight));
}
// Autogenerated method: RootMotion.QuaTools.LinearBlend
UnityEngine::Quaternion RootMotion::QuaTools::LinearBlend(UnityEngine::Quaternion q, float weight) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion", "QuaTools", "LinearBlend", q, weight));
}
// Autogenerated method: RootMotion.QuaTools.SphericalBlend
UnityEngine::Quaternion RootMotion::QuaTools::SphericalBlend(UnityEngine::Quaternion q, float weight) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion", "QuaTools", "SphericalBlend", q, weight));
}
// Autogenerated method: RootMotion.QuaTools.FromToAroundAxis
UnityEngine::Quaternion RootMotion::QuaTools::FromToAroundAxis(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection, UnityEngine::Vector3 axis) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion", "QuaTools", "FromToAroundAxis", fromDirection, toDirection, axis));
}
// Autogenerated method: RootMotion.QuaTools.RotationToLocalSpace
UnityEngine::Quaternion RootMotion::QuaTools::RotationToLocalSpace(UnityEngine::Quaternion space, UnityEngine::Quaternion rotation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion", "QuaTools", "RotationToLocalSpace", space, rotation));
}
// Autogenerated method: RootMotion.QuaTools.FromToRotation
UnityEngine::Quaternion RootMotion::QuaTools::FromToRotation(UnityEngine::Quaternion from, UnityEngine::Quaternion to) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion", "QuaTools", "FromToRotation", from, to));
}
// Autogenerated method: RootMotion.QuaTools.GetAxis
UnityEngine::Vector3 RootMotion::QuaTools::GetAxis(UnityEngine::Vector3 v) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("RootMotion", "QuaTools", "GetAxis", v));
}
// Autogenerated method: RootMotion.QuaTools.ClampRotation
UnityEngine::Quaternion RootMotion::QuaTools::ClampRotation(UnityEngine::Quaternion rotation, float clampWeight, int clampSmoothing) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion", "QuaTools", "ClampRotation", rotation, clampWeight, clampSmoothing));
}
// Autogenerated method: RootMotion.QuaTools.ClampAngle
float RootMotion::QuaTools::ClampAngle(float angle, float clampWeight, int clampSmoothing) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("RootMotion", "QuaTools", "ClampAngle", angle, clampWeight, clampSmoothing));
}
// Autogenerated method: RootMotion.QuaTools.MatchRotation
UnityEngine::Quaternion RootMotion::QuaTools::MatchRotation(UnityEngine::Quaternion targetRotation, UnityEngine::Vector3 targetforwardAxis, UnityEngine::Vector3 targetUpAxis, UnityEngine::Vector3 forwardAxis, UnityEngine::Vector3 upAxis) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion", "QuaTools", "MatchRotation", targetRotation, targetforwardAxis, targetUpAxis, forwardAxis, upAxis));
}
// Autogenerated method: RootMotion.QuaTools.ToBiPolar
UnityEngine::Vector3 RootMotion::QuaTools::ToBiPolar(UnityEngine::Vector3 euler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("RootMotion", "QuaTools", "ToBiPolar", euler));
}
// Autogenerated method: RootMotion.QuaTools.ToBiPolar
float RootMotion::QuaTools::ToBiPolar(float angle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("RootMotion", "QuaTools", "ToBiPolar", angle));
}
