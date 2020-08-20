// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevelCollection
#include "GlobalNamespace/IBeatmapLevelCollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CustomPreviewBeatmapLevel
  class CustomPreviewBeatmapLevel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CustomBeatmapLevelCollection
  class CustomBeatmapLevelCollection : public ::Il2CppObject, public GlobalNamespace::IBeatmapLevelCollection {
    public:
    // private CustomPreviewBeatmapLevel[] _customPreviewBeatmapLevels
    // Offset: 0x10
    ::Array<GlobalNamespace::CustomPreviewBeatmapLevel*>* customPreviewBeatmapLevels;
    // public System.Void .ctor(CustomPreviewBeatmapLevel[] customPreviewBeatmapLevels)
    // Offset: 0x1927E04
    static CustomBeatmapLevelCollection* New_ctor(::Array<GlobalNamespace::CustomPreviewBeatmapLevel*>* customPreviewBeatmapLevels);
    // public IPreviewBeatmapLevel[] get_beatmapLevels()
    // Offset: 0x1927DFC
    // Implemented from: IBeatmapLevelCollection
    // Base method: IPreviewBeatmapLevel[] IBeatmapLevelCollection::get_beatmapLevels()
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();
  }; // CustomBeatmapLevelCollection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBeatmapLevelCollection*, "", "CustomBeatmapLevelCollection");
#pragma pack(pop)
