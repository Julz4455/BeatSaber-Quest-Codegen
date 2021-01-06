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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: LookAtIK
  class LookAtIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x39
  // Autogenerated type: RootMotion.FinalIK.InteractionLookAt
  // [] Offset: FFFFFFFF
  class InteractionLookAt : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xDB7338
    // public RootMotion.FinalIK.LookAtIK ik
    // Size: 0x8
    // Offset: 0x10
    RootMotion::FinalIK::LookAtIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::LookAtIK*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB7370
    // public System.Single lerpSpeed
    // Size: 0x4
    // Offset: 0x18
    float lerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB73A8
    // public System.Single weightSpeed
    // Size: 0x4
    // Offset: 0x1C
    float weightSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HideInInspector] Offset: 0xDB73E0
    // public System.Boolean isPaused
    // Size: 0x1
    // Offset: 0x20
    bool isPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPaused and: lookAtTarget
    char __padding3[0x7] = {};
    // private UnityEngine.Transform lookAtTarget
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* lookAtTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Single stopLookTime
    // Size: 0x4
    // Offset: 0x30
    float stopLookTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single weight
    // Size: 0x4
    // Offset: 0x34
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean firstFBBIKSolve
    // Size: 0x1
    // Offset: 0x38
    bool firstFBBIKSolve;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InteractionLookAt
    InteractionLookAt(RootMotion::FinalIK::LookAtIK* ik_ = {}, float lerpSpeed_ = {}, float weightSpeed_ = {}, bool isPaused_ = {}, UnityEngine::Transform* lookAtTarget_ = {}, float stopLookTime_ = {}, float weight_ = {}, bool firstFBBIKSolve_ = {}) noexcept : ik{ik_}, lerpSpeed{lerpSpeed_}, weightSpeed{weightSpeed_}, isPaused{isPaused_}, lookAtTarget{lookAtTarget_}, stopLookTime{stopLookTime_}, weight{weight_}, firstFBBIKSolve{firstFBBIKSolve_} {}
    // public System.Void Look(UnityEngine.Transform target, System.Single time)
    // Offset: 0x17EA550
    void Look(UnityEngine::Transform* target, float time);
    // public System.Void OnFixTransforms()
    // Offset: 0x17EA6D4
    void OnFixTransforms();
    // public System.Void Update()
    // Offset: 0x17EA77C
    void Update();
    // public System.Void SolveSpine()
    // Offset: 0x17EA9D0
    void SolveSpine();
    // public System.Void SolveHead()
    // Offset: 0x17EAAC8
    void SolveHead();
    // public System.Void .ctor()
    // Offset: 0x17EAB94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionLookAt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("RootMotion::FinalIK").WithContext("InteractionLookAt").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionLookAt*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionLookAt
  static check_size<sizeof(InteractionLookAt), 56 + sizeof(bool)> __RootMotion_FinalIK_InteractionLookAtSizeCheck;
  static_assert(sizeof(InteractionLookAt) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionLookAt*, "RootMotion.FinalIK", "InteractionLookAt");
#pragma pack(pop)
