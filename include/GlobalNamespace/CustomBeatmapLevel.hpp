// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CustomPreviewBeatmapLevel
#include "GlobalNamespace/CustomPreviewBeatmapLevel.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelData
  class BeatmapLevelData;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CustomBeatmapLevel
  class CustomBeatmapLevel : public GlobalNamespace::CustomPreviewBeatmapLevel, public GlobalNamespace::IBeatmapLevel {
    public:
    // private BeatmapLevelData _beatmapLevelData
    // Offset: 0xA8
    GlobalNamespace::BeatmapLevelData* beatmapLevelData;
    // Creating conversion operator: operator GlobalNamespace::BeatmapLevelData*
    constexpr operator GlobalNamespace::BeatmapLevelData*() const noexcept {
      return beatmapLevelData;
    }
    // public System.Void .ctor(CustomPreviewBeatmapLevel customPreviewBeatmapLevel, UnityEngine.AudioClip previewAudioClip)
    // Offset: 0xF5B538
    static CustomBeatmapLevel* New_ctor(GlobalNamespace::CustomPreviewBeatmapLevel* customPreviewBeatmapLevel, UnityEngine::AudioClip* previewAudioClip);
    // public System.Void SetBeatmapLevelData(BeatmapLevelData beatmapLevelData)
    // Offset: 0xF5B734
    void SetBeatmapLevelData(GlobalNamespace::BeatmapLevelData* beatmapLevelData);
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0xF5B530
    // Implemented from: IBeatmapLevel
    // Base method: IBeatmapLevelData IBeatmapLevel::get_beatmapLevelData()
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
  }; // CustomBeatmapLevel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBeatmapLevel*, "", "CustomBeatmapLevel");
#pragma pack(pop)
