// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BeatmapObjectSpawnMovementData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData.hpp"
// Including type: BeatmapObjectSpawnMovementData/ObstacleSpawnData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData_ObstacleSpawnData.hpp"
// Including type: BeatmapObjectSpawnMovementData/NoteSpawnData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData_NoteSpawnData.hpp"
// Including type: ObstacleData
#include "GlobalNamespace/ObstacleData.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapObjectSpawnMovementData.get_spawnAheadTime
float GlobalNamespace::BeatmapObjectSpawnMovementData::get_spawnAheadTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_spawnAheadTime"));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.get_moveDuration
float GlobalNamespace::BeatmapObjectSpawnMovementData::get_moveDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_moveDuration"));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.get_jumpDuration
float GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_jumpDuration"));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.get_noteLinesDistance
float GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesDistance() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_noteLinesDistance"));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.Init
void GlobalNamespace::BeatmapObjectSpawnMovementData::Init(int noteLinesCount, float startNoteJumpMovementSpeed, float startBpm, float noteJumpStartBeatOffset, float jumpOffsetY, UnityEngine::Vector3 rightVec, UnityEngine::Vector3 forwardVec) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", noteLinesCount, startNoteJumpMovementSpeed, startBpm, noteJumpStartBeatOffset, jumpOffsetY, rightVec, forwardVec));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.Update
void GlobalNamespace::BeatmapObjectSpawnMovementData::Update(float bpm, float jumpOffsetY) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update", bpm, jumpOffsetY));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.GetObstacleSpawnData
GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleSpawnData(GlobalNamespace::ObstacleData* obstacleData) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData>(this, "GetObstacleSpawnData", obstacleData));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.GetJumpingNoteSpawnData
GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData GlobalNamespace::BeatmapObjectSpawnMovementData::GetJumpingNoteSpawnData(GlobalNamespace::NoteData* noteData) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData>(this, "GetJumpingNoteSpawnData", noteData));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.GetNoteOffset
UnityEngine::Vector3 GlobalNamespace::BeatmapObjectSpawnMovementData::GetNoteOffset(int noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "GetNoteOffset", noteLineIndex, noteLineLayer));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.Get2DNoteOffset
UnityEngine::Vector2 GlobalNamespace::BeatmapObjectSpawnMovementData::Get2DNoteOffset(int noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>(this, "Get2DNoteOffset", noteLineIndex, noteLineLayer));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.HighestJumpPosYForLineLayer
float GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayer(GlobalNamespace::NoteLineLayer lineLayer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "HighestJumpPosYForLineLayer", lineLayer));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.LineYPosForLineLayer
float GlobalNamespace::BeatmapObjectSpawnMovementData::LineYPosForLineLayer(GlobalNamespace::NoteLineLayer lineLayer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "LineYPosForLineLayer", lineLayer));
}
// Autogenerated method: BeatmapObjectSpawnMovementData.NoteJumpGravityForLineLayer
float GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayer(GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::NoteLineLayer startLineLayer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "NoteJumpGravityForLineLayer", lineLayer, startLineLayer));
}
// Autogenerated method: BeatmapObjectSpawnMovementData..ctor
GlobalNamespace::BeatmapObjectSpawnMovementData* GlobalNamespace::BeatmapObjectSpawnMovementData::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BeatmapObjectSpawnMovementData*>());
}
