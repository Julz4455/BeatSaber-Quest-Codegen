// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: AudioTimeSyncController/InitData
#include "GlobalNamespace/AudioTimeSyncController_InitData.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AudioTimeSyncController/InitData..ctor
GlobalNamespace::AudioTimeSyncController::InitData* GlobalNamespace::AudioTimeSyncController::InitData::New_ctor(UnityEngine::AudioClip* audioClip, float startSongTime, float songTimeOffset, float timeScale) {
  return (AudioTimeSyncController::InitData*)THROW_UNLESS(il2cpp_utils::New("", "AudioTimeSyncController/InitData", audioClip, startSongTime, songTimeOffset, timeScale));
}
