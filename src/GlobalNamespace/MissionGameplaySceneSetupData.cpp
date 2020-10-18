// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionGameplaySceneSetupData
#include "GlobalNamespace/MissionGameplaySceneSetupData.hpp"
// Including type: MissionObjective
#include "GlobalNamespace/MissionObjective.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MissionGameplaySceneSetupData..ctor
GlobalNamespace::MissionGameplaySceneSetupData* GlobalNamespace::MissionGameplaySceneSetupData::New_ctor(::Array<GlobalNamespace::MissionObjective*>* missionObjectives, bool autoRestart, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::Il2CppString* backButtonText) {
  return THROW_UNLESS(il2cpp_utils::New<MissionGameplaySceneSetupData*>(missionObjectives, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, backButtonText));
}
