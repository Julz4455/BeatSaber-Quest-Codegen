// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectData
#include "GlobalNamespace/BeatmapObjectData.hpp"
// Including type: ObstacleType
#include "GlobalNamespace/ObstacleType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectType
  struct BeatmapObjectType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ObstacleData
  class ObstacleData : public GlobalNamespace::BeatmapObjectData {
    public:
    // private ObstacleType <obstacleType>k__BackingField
    // Offset: 0x18
    GlobalNamespace::ObstacleType obstacleType;
    // private System.Single <duration>k__BackingField
    // Offset: 0x1C
    float duration;
    // private System.Int32 <width>k__BackingField
    // Offset: 0x20
    int width;
    // public ObstacleType get_obstacleType()
    // Offset: 0x2220F54
    GlobalNamespace::ObstacleType get_obstacleType();
    // private System.Void set_obstacleType(ObstacleType value)
    // Offset: 0x2220F5C
    void set_obstacleType(GlobalNamespace::ObstacleType value);
    // public System.Single get_duration()
    // Offset: 0x2220F64
    float get_duration();
    // private System.Void set_duration(System.Single value)
    // Offset: 0x2220F6C
    void set_duration(float value);
    // public System.Int32 get_width()
    // Offset: 0x2220F74
    int get_width();
    // private System.Void set_width(System.Int32 value)
    // Offset: 0x2220F7C
    void set_width(int value);
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, ObstacleType obstacleType, System.Single duration, System.Int32 width)
    // Offset: 0x2220F84
    static ObstacleData* New_ctor(float time, int lineIndex, GlobalNamespace::ObstacleType obstacleType, float duration, int width);
    // public System.Void UpdateDuration(System.Single duration)
    // Offset: 0x2220FDC
    void UpdateDuration(float duration);
    // public override BeatmapObjectType get_beatmapObjectType()
    // Offset: 0x2220F4C
    // Implemented from: BeatmapObjectData
    // Base method: BeatmapObjectType BeatmapObjectData::get_beatmapObjectType()
    GlobalNamespace::BeatmapObjectType get_beatmapObjectType();
    // public override BeatmapObjectData GetCopy()
    // Offset: 0x2220FE4
    // Implemented from: BeatmapObjectData
    // Base method: BeatmapObjectData BeatmapObjectData::GetCopy()
    GlobalNamespace::BeatmapObjectData* GetCopy();
    // public override System.Void MirrorLineIndex(System.Int32 lineCount)
    // Offset: 0x2221064
    // Implemented from: BeatmapObjectData
    // Base method: System.Void BeatmapObjectData::MirrorLineIndex(System.Int32 lineCount)
    void MirrorLineIndex(int lineCount);
  }; // ObstacleData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleData*, "", "ObstacleData");
#pragma pack(pop)
