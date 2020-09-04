// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone
#include "RootMotion/FinalIK/IKSolverTrigonometric_TrigonometricBone.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone.Initiate
void RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::Initiate(UnityEngine::Vector3 childPosition, UnityEngine::Vector3 bendNormal) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initiate", childPosition, bendNormal));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone.GetRotation
UnityEngine::Quaternion RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::GetRotation(UnityEngine::Vector3 direction, UnityEngine::Vector3 bendNormal) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "GetRotation", direction, bendNormal));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone.GetBendNormalFromCurrentRotation
UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::GetBendNormalFromCurrentRotation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "GetBendNormalFromCurrentRotation"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone..ctor
RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::New_ctor() {
  return (IKSolverTrigonometric::TrigonometricBone*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKSolverTrigonometric/TrigonometricBone"));
}
