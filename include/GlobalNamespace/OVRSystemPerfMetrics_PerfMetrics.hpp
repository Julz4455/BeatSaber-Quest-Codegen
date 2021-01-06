// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSystemPerfMetrics
#include "GlobalNamespace/OVRSystemPerfMetrics.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7C
  // Autogenerated type: OVRSystemPerfMetrics/PerfMetrics
  // [] Offset: FFFFFFFF
  class OVRSystemPerfMetrics::PerfMetrics : public ::Il2CppObject {
    public:
    // public System.Int32 frameCount
    // Size: 0x4
    // Offset: 0x10
    int frameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single frameTime
    // Size: 0x4
    // Offset: 0x14
    float frameTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single deltaFrameTime
    // Size: 0x4
    // Offset: 0x18
    float deltaFrameTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean appCpuTime_IsValid
    // Size: 0x1
    // Offset: 0x1C
    bool appCpuTime_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: appCpuTime_IsValid and: appCpuTime
    char __padding3[0x3] = {};
    // public System.Single appCpuTime
    // Size: 0x4
    // Offset: 0x20
    float appCpuTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean appGpuTime_IsValid
    // Size: 0x1
    // Offset: 0x24
    bool appGpuTime_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: appGpuTime_IsValid and: appGpuTime
    char __padding5[0x3] = {};
    // public System.Single appGpuTime
    // Size: 0x4
    // Offset: 0x28
    float appGpuTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean compositorCpuTime_IsValid
    // Size: 0x1
    // Offset: 0x2C
    bool compositorCpuTime_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: compositorCpuTime_IsValid and: compositorCpuTime
    char __padding7[0x3] = {};
    // public System.Single compositorCpuTime
    // Size: 0x4
    // Offset: 0x30
    float compositorCpuTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean compositorGpuTime_IsValid
    // Size: 0x1
    // Offset: 0x34
    bool compositorGpuTime_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: compositorGpuTime_IsValid and: compositorGpuTime
    char __padding9[0x3] = {};
    // public System.Single compositorGpuTime
    // Size: 0x4
    // Offset: 0x38
    float compositorGpuTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean compositorDroppedFrameCount_IsValid
    // Size: 0x1
    // Offset: 0x3C
    bool compositorDroppedFrameCount_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: compositorDroppedFrameCount_IsValid and: compositorDroppedFrameCount
    char __padding11[0x3] = {};
    // public System.Int32 compositorDroppedFrameCount
    // Size: 0x4
    // Offset: 0x40
    int compositorDroppedFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean systemGpuUtilPercentage_IsValid
    // Size: 0x1
    // Offset: 0x44
    bool systemGpuUtilPercentage_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: systemGpuUtilPercentage_IsValid and: systemGpuUtilPercentage
    char __padding13[0x3] = {};
    // public System.Single systemGpuUtilPercentage
    // Size: 0x4
    // Offset: 0x48
    float systemGpuUtilPercentage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean systemCpuUtilAveragePercentage_IsValid
    // Size: 0x1
    // Offset: 0x4C
    bool systemCpuUtilAveragePercentage_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: systemCpuUtilAveragePercentage_IsValid and: systemCpuUtilAveragePercentage
    char __padding15[0x3] = {};
    // public System.Single systemCpuUtilAveragePercentage
    // Size: 0x4
    // Offset: 0x50
    float systemCpuUtilAveragePercentage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean systemCpuUtilWorstPercentage_IsValid
    // Size: 0x1
    // Offset: 0x54
    bool systemCpuUtilWorstPercentage_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: systemCpuUtilWorstPercentage_IsValid and: systemCpuUtilWorstPercentage
    char __padding17[0x3] = {};
    // public System.Single systemCpuUtilWorstPercentage
    // Size: 0x4
    // Offset: 0x58
    float systemCpuUtilWorstPercentage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean deviceCpuClockFrequencyInMHz_IsValid
    // Size: 0x1
    // Offset: 0x5C
    bool deviceCpuClockFrequencyInMHz_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deviceCpuClockFrequencyInMHz_IsValid and: deviceCpuClockFrequencyInMHz
    char __padding19[0x3] = {};
    // public System.Single deviceCpuClockFrequencyInMHz
    // Size: 0x4
    // Offset: 0x60
    float deviceCpuClockFrequencyInMHz;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean deviceGpuClockFrequencyInMHz_IsValid
    // Size: 0x1
    // Offset: 0x64
    bool deviceGpuClockFrequencyInMHz_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deviceGpuClockFrequencyInMHz_IsValid and: deviceGpuClockFrequencyInMHz
    char __padding21[0x3] = {};
    // public System.Single deviceGpuClockFrequencyInMHz
    // Size: 0x4
    // Offset: 0x68
    float deviceGpuClockFrequencyInMHz;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean deviceCpuClockLevel_IsValid
    // Size: 0x1
    // Offset: 0x6C
    bool deviceCpuClockLevel_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deviceCpuClockLevel_IsValid and: deviceCpuClockLevel
    char __padding23[0x3] = {};
    // public System.Int32 deviceCpuClockLevel
    // Size: 0x4
    // Offset: 0x70
    int deviceCpuClockLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean deviceGpuClockLevel_IsValid
    // Size: 0x1
    // Offset: 0x74
    bool deviceGpuClockLevel_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deviceGpuClockLevel_IsValid and: deviceGpuClockLevel
    char __padding25[0x3] = {};
    // public System.Int32 deviceGpuClockLevel
    // Size: 0x4
    // Offset: 0x78
    int deviceGpuClockLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PerfMetrics
    PerfMetrics(int frameCount_ = {}, float frameTime_ = {}, float deltaFrameTime_ = {}, bool appCpuTime_IsValid_ = {}, float appCpuTime_ = {}, bool appGpuTime_IsValid_ = {}, float appGpuTime_ = {}, bool compositorCpuTime_IsValid_ = {}, float compositorCpuTime_ = {}, bool compositorGpuTime_IsValid_ = {}, float compositorGpuTime_ = {}, bool compositorDroppedFrameCount_IsValid_ = {}, int compositorDroppedFrameCount_ = {}, bool systemGpuUtilPercentage_IsValid_ = {}, float systemGpuUtilPercentage_ = {}, bool systemCpuUtilAveragePercentage_IsValid_ = {}, float systemCpuUtilAveragePercentage_ = {}, bool systemCpuUtilWorstPercentage_IsValid_ = {}, float systemCpuUtilWorstPercentage_ = {}, bool deviceCpuClockFrequencyInMHz_IsValid_ = {}, float deviceCpuClockFrequencyInMHz_ = {}, bool deviceGpuClockFrequencyInMHz_IsValid_ = {}, float deviceGpuClockFrequencyInMHz_ = {}, bool deviceCpuClockLevel_IsValid_ = {}, int deviceCpuClockLevel_ = {}, bool deviceGpuClockLevel_IsValid_ = {}, int deviceGpuClockLevel_ = {}) noexcept : frameCount{frameCount_}, frameTime{frameTime_}, deltaFrameTime{deltaFrameTime_}, appCpuTime_IsValid{appCpuTime_IsValid_}, appCpuTime{appCpuTime_}, appGpuTime_IsValid{appGpuTime_IsValid_}, appGpuTime{appGpuTime_}, compositorCpuTime_IsValid{compositorCpuTime_IsValid_}, compositorCpuTime{compositorCpuTime_}, compositorGpuTime_IsValid{compositorGpuTime_IsValid_}, compositorGpuTime{compositorGpuTime_}, compositorDroppedFrameCount_IsValid{compositorDroppedFrameCount_IsValid_}, compositorDroppedFrameCount{compositorDroppedFrameCount_}, systemGpuUtilPercentage_IsValid{systemGpuUtilPercentage_IsValid_}, systemGpuUtilPercentage{systemGpuUtilPercentage_}, systemCpuUtilAveragePercentage_IsValid{systemCpuUtilAveragePercentage_IsValid_}, systemCpuUtilAveragePercentage{systemCpuUtilAveragePercentage_}, systemCpuUtilWorstPercentage_IsValid{systemCpuUtilWorstPercentage_IsValid_}, systemCpuUtilWorstPercentage{systemCpuUtilWorstPercentage_}, deviceCpuClockFrequencyInMHz_IsValid{deviceCpuClockFrequencyInMHz_IsValid_}, deviceCpuClockFrequencyInMHz{deviceCpuClockFrequencyInMHz_}, deviceGpuClockFrequencyInMHz_IsValid{deviceGpuClockFrequencyInMHz_IsValid_}, deviceGpuClockFrequencyInMHz{deviceGpuClockFrequencyInMHz_}, deviceCpuClockLevel_IsValid{deviceCpuClockLevel_IsValid_}, deviceCpuClockLevel{deviceCpuClockLevel_}, deviceGpuClockLevel_IsValid{deviceGpuClockLevel_IsValid_}, deviceGpuClockLevel{deviceGpuClockLevel_} {}
    // public System.String ToJSON()
    // Offset: 0x1979C90
    ::Il2CppString* ToJSON();
    // public System.Boolean LoadFromJSON(System.String json)
    // Offset: 0x197A1C8
    bool LoadFromJSON(::Il2CppString* json);
    // public System.Void .ctor()
    // Offset: 0x197A140
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSystemPerfMetrics::PerfMetrics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PerfMetrics").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSystemPerfMetrics::PerfMetrics*, creationType>()));
    }
  }; // OVRSystemPerfMetrics/PerfMetrics
  static check_size<sizeof(OVRSystemPerfMetrics::PerfMetrics), 120 + sizeof(int)> __GlobalNamespace_OVRSystemPerfMetrics_PerfMetricsSizeCheck;
  static_assert(sizeof(OVRSystemPerfMetrics::PerfMetrics) == 0x7C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics*, "", "OVRSystemPerfMetrics/PerfMetrics");
#pragma pack(pop)
