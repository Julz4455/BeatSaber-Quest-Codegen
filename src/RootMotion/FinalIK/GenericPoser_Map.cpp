// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: RootMotion.FinalIK.GenericPoser/Map
#include "RootMotion/FinalIK/GenericPoser_Map.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.GenericPoser/Map..ctor
RootMotion::FinalIK::GenericPoser::Map* RootMotion::FinalIK::GenericPoser::Map::New_ctor(UnityEngine::Transform* bone, UnityEngine::Transform* target) {
  return (GenericPoser::Map*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "GenericPoser/Map", bone, target));
}
// Autogenerated method: RootMotion.FinalIK.GenericPoser/Map.StoreDefaultState
void RootMotion::FinalIK::GenericPoser::Map::StoreDefaultState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StoreDefaultState"));
}
// Autogenerated method: RootMotion.FinalIK.GenericPoser/Map.FixTransform
void RootMotion::FinalIK::GenericPoser::Map::FixTransform() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixTransform"));
}
// Autogenerated method: RootMotion.FinalIK.GenericPoser/Map.Update
void RootMotion::FinalIK::GenericPoser::Map::Update(float localRotationWeight, float localPositionWeight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update", localRotationWeight, localPositionWeight));
}
