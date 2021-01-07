// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PoseSerializable
  struct PoseSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: PosePrediction
  // [] Offset: FFFFFFFF
  class PosePrediction : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PosePrediction
    PosePrediction() noexcept {}
    // static public UnityEngine.Pose PredictPose(UnityEngine.Pose prev, System.Single prevTime, UnityEngine.Pose curr, System.Single currTime, System.Single time)
    // Offset: 0xF2B57C
    static UnityEngine::Pose PredictPose(UnityEngine::Pose prev, float prevTime, UnityEngine::Pose curr, float currTime, float time);
    // static public UnityEngine.Pose InterpolatePose(UnityEngine.Pose prev, UnityEngine.Pose curr, System.Single t)
    // Offset: 0xF2B684
    static UnityEngine::Pose InterpolatePose(UnityEngine::Pose prev, UnityEngine::Pose curr, float t);
    // static public PoseSerializable PredictPoseSerializable(PoseSerializable prev, System.Single prevTime, PoseSerializable curr, System.Single currTime, System.Single time)
    // Offset: 0xF2BB90
    static GlobalNamespace::PoseSerializable PredictPoseSerializable(GlobalNamespace::PoseSerializable prev, float prevTime, GlobalNamespace::PoseSerializable curr, float currTime, float time);
    // static public PoseSerializable InterpolatePoseSerializable(PoseSerializable a, PoseSerializable b, System.Single t)
    // Offset: 0xF2BC7C
    static GlobalNamespace::PoseSerializable InterpolatePoseSerializable(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float t);
    // public System.Void .ctor()
    // Offset: 0xF2BD50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosePrediction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PosePrediction").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosePrediction*, creationType>()));
    }
  }; // PosePrediction
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosePrediction*, "", "PosePrediction");
#pragma pack(pop)
