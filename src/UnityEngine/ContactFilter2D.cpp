// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.ContactFilter2D
#include "UnityEngine/ContactFilter2D.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ContactFilter2D.CheckConsistency
void UnityEngine::ContactFilter2D::CheckConsistency() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "CheckConsistency"));
}
// Autogenerated method: UnityEngine.ContactFilter2D.SetLayerMask
void UnityEngine::ContactFilter2D::SetLayerMask(UnityEngine::LayerMask layerMask) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetLayerMask", layerMask));
}
// Autogenerated method: UnityEngine.ContactFilter2D.SetDepth
void UnityEngine::ContactFilter2D::SetDepth(float minDepth, float maxDepth) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetDepth", minDepth, maxDepth));
}
// Autogenerated method: UnityEngine.ContactFilter2D.CreateLegacyFilter
UnityEngine::ContactFilter2D UnityEngine::ContactFilter2D::CreateLegacyFilter(int layerMask, float minDepth, float maxDepth) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ContactFilter2D>("UnityEngine", "ContactFilter2D", "CreateLegacyFilter", layerMask, minDepth, maxDepth));
}
// Autogenerated method: UnityEngine.ContactFilter2D.CheckConsistency_Injected
void UnityEngine::ContactFilter2D::CheckConsistency_Injected(UnityEngine::ContactFilter2D& _unity_self) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "ContactFilter2D", "CheckConsistency_Injected", _unity_self));
}
