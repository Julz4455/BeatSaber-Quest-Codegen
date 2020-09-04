// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.Timeline.Marker
#include "UnityEngine/Timeline/Marker.hpp"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Timeline.Marker.set_parent
void UnityEngine::Timeline::Marker::set_parent(UnityEngine::Timeline::TrackAsset* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_parent", value));
}
// Autogenerated method: UnityEngine.Timeline.Marker.OnInitialize
void UnityEngine::Timeline::Marker::OnInitialize(UnityEngine::Timeline::TrackAsset* aPent) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnInitialize", aPent));
}
// Autogenerated method: UnityEngine.Timeline.Marker.get_parent
UnityEngine::Timeline::TrackAsset* UnityEngine::Timeline::Marker::get_parent() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::TrackAsset*>(this, "get_parent"));
}
// Autogenerated method: UnityEngine.Timeline.Marker.get_time
double UnityEngine::Timeline::Marker::get_time() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_time"));
}
// Autogenerated method: UnityEngine.Timeline.Marker.set_time
void UnityEngine::Timeline::Marker::set_time(double value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_time", value));
}
// Autogenerated method: UnityEngine.Timeline.Marker.UnityEngine.Timeline.IMarker.Initialize
void UnityEngine::Timeline::Marker::UnityEngine_Timeline_IMarker_Initialize(UnityEngine::Timeline::TrackAsset* parentTrack) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UnityEngine.Timeline.IMarker.Initialize", parentTrack));
}
// Autogenerated method: UnityEngine.Timeline.Marker..ctor
UnityEngine::Timeline::Marker* UnityEngine::Timeline::Marker::New_ctor() {
  return (Marker*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Timeline", "Marker"));
}
