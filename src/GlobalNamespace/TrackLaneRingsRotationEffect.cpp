// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: TrackLaneRingsRotationEffect
#include "GlobalNamespace/TrackLaneRingsRotationEffect.hpp"
// Including type: TrackLaneRingsRotationEffect/RingRotationEffect
#include "GlobalNamespace/TrackLaneRingsRotationEffect_RingRotationEffect.hpp"
// Including type: TrackLaneRingsManager
#include "GlobalNamespace/TrackLaneRingsManager.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TrackLaneRingsRotationEffect.Awake
void GlobalNamespace::TrackLaneRingsRotationEffect::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: TrackLaneRingsRotationEffect.Start
void GlobalNamespace::TrackLaneRingsRotationEffect::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: TrackLaneRingsRotationEffect.FixedUpdate
void GlobalNamespace::TrackLaneRingsRotationEffect::FixedUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixedUpdate"));
}
// Autogenerated method: TrackLaneRingsRotationEffect.AddRingRotationEffect
void GlobalNamespace::TrackLaneRingsRotationEffect::AddRingRotationEffect(float angle, float step, int propagationSpeed, float flexySpeed) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddRingRotationEffect", angle, step, propagationSpeed, flexySpeed));
}
// Autogenerated method: TrackLaneRingsRotationEffect.GetFirstRingRotationAngle
float GlobalNamespace::TrackLaneRingsRotationEffect::GetFirstRingRotationAngle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetFirstRingRotationAngle"));
}
// Autogenerated method: TrackLaneRingsRotationEffect.GetFirstRingDestinationRotationAngle
float GlobalNamespace::TrackLaneRingsRotationEffect::GetFirstRingDestinationRotationAngle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetFirstRingDestinationRotationAngle"));
}
// Autogenerated method: TrackLaneRingsRotationEffect.SpawnRingRotationEffect
GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect* GlobalNamespace::TrackLaneRingsRotationEffect::SpawnRingRotationEffect() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*>(this, "SpawnRingRotationEffect"));
}
// Autogenerated method: TrackLaneRingsRotationEffect.RecycleRingRotationEffect
void GlobalNamespace::TrackLaneRingsRotationEffect::RecycleRingRotationEffect(GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect* ringRotationEffect) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RecycleRingRotationEffect", ringRotationEffect));
}
// Autogenerated method: TrackLaneRingsRotationEffect..ctor
GlobalNamespace::TrackLaneRingsRotationEffect* GlobalNamespace::TrackLaneRingsRotationEffect::New_ctor() {
  return (TrackLaneRingsRotationEffect*)THROW_UNLESS(il2cpp_utils::New("", "TrackLaneRingsRotationEffect"));
}
