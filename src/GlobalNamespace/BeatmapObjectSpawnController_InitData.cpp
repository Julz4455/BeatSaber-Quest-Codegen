// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BeatmapObjectSpawnController/InitData
#include "GlobalNamespace/BeatmapObjectSpawnController_InitData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapObjectSpawnController/InitData..ctor
GlobalNamespace::BeatmapObjectSpawnController::InitData* GlobalNamespace::BeatmapObjectSpawnController::InitData::New_ctor(float beatsPerMinute, int noteLinesCount, float noteJumpMovementSpeed, float noteJumpStartBeatOffset, bool disappearingArrows, bool ghostNotes, float jumpOffsetY) {
  return (BeatmapObjectSpawnController::InitData*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapObjectSpawnController/InitData", beatsPerMinute, noteLinesCount, noteJumpMovementSpeed, noteJumpStartBeatOffset, disappearingArrows, ghostNotes, jumpOffsetY));
}
