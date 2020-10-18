// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: PlayerHeadAndObstacleInteraction
#include "GlobalNamespace/PlayerHeadAndObstacleInteraction.hpp"
// Including type: PlayerTransforms
#include "GlobalNamespace/PlayerTransforms.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PlayerHeadAndObstacleInteraction.get_headPos
UnityEngine::Vector3 GlobalNamespace::PlayerHeadAndObstacleInteraction::get_headPos() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_headPos"));
}
// Autogenerated method: PlayerHeadAndObstacleInteraction.get_intersectingObstacles
System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* GlobalNamespace::PlayerHeadAndObstacleInteraction::get_intersectingObstacles() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>*>(this, "get_intersectingObstacles"));
}
// Autogenerated method: PlayerHeadAndObstacleInteraction.GetObstaclesContainingPoint
void GlobalNamespace::PlayerHeadAndObstacleInteraction::GetObstaclesContainingPoint(UnityEngine::Vector3 worldPos, System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* obstacleControllers) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObstaclesContainingPoint", worldPos, obstacleControllers));
}
// Autogenerated method: PlayerHeadAndObstacleInteraction..ctor
GlobalNamespace::PlayerHeadAndObstacleInteraction* GlobalNamespace::PlayerHeadAndObstacleInteraction::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<PlayerHeadAndObstacleInteraction*>());
}
