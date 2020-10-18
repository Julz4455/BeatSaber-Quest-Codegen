// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDataLoader/BpmChangeData
  struct BeatmapDataLoader::BpmChangeData : public System::ValueType {
    public:
    // public readonly System.Single bpmChangeStartTime
    // Offset: 0x0
    float bpmChangeStartTime;
    // public readonly System.Single bpmChangeStartBpmTime
    // Offset: 0x4
    float bpmChangeStartBpmTime;
    // public readonly System.Single bpm
    // Offset: 0x8
    float bpm;
    // Creating value type constructor for type: BpmChangeData
    constexpr BpmChangeData(float bpmChangeStartTime_ = {}, float bpmChangeStartBpmTime_ = {}, float bpm_ = {}) noexcept : bpmChangeStartTime{bpmChangeStartTime_}, bpmChangeStartBpmTime{bpmChangeStartBpmTime_}, bpm{bpm_} {}
    // public System.Void .ctor(System.Single bpmChangeStartTime, System.Single bpmChangeStartBpmTime, System.Single bpm)
    // Offset: 0xDA2AE4
    // ABORTED: conflicts with another method.  BpmChangeData(float bpmChangeStartTime, float bpmChangeStartBpmTime, float bpm);
  }; // BeatmapDataLoader/BpmChangeData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader::BpmChangeData, "", "BeatmapDataLoader/BpmChangeData");
#pragma pack(pop)
