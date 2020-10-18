// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReactionVRIK
#include "RootMotion/FinalIK/HitReactionVRIK.hpp"
// Including type: RootMotion.FinalIK.HitReactionVRIK/Offset
#include "RootMotion/FinalIK/HitReactionVRIK_Offset.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/PositionOffset
  class HitReactionVRIK::PositionOffset : public RootMotion::FinalIK::HitReactionVRIK::Offset {
    public:
    // Nested type: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink
    class PositionOffsetLink;
    // public System.Int32 forceDirCurveIndex
    // Offset: 0x50
    int forceDirCurveIndex;
    // public System.Int32 upDirCurveIndex
    // Offset: 0x54
    int upDirCurveIndex;
    // public RootMotion.FinalIK.HitReactionVRIK/PositionOffset/PositionOffsetLink[] offsetLinks
    // Offset: 0x58
    ::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*>* offsetLinks;
    // protected override System.Single GetLength(UnityEngine.AnimationCurve[] curves)
    // Offset: 0x1AA0484
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/Offset
    // Base method: System.Single Offset::GetLength(UnityEngine.AnimationCurve[] curves)
    float GetLength(::Array<UnityEngine::AnimationCurve*>* curves);
    // protected override System.Void CrossFadeStart()
    // Offset: 0x1AA067C
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/Offset
    // Base method: System.Void Offset::CrossFadeStart()
    void CrossFadeStart();
    // protected override System.Void OnApply(RootMotion.FinalIK.VRIK ik, UnityEngine.AnimationCurve[] curves, System.Single weight)
    // Offset: 0x1AA06FC
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/Offset
    // Base method: System.Void Offset::OnApply(RootMotion.FinalIK.VRIK ik, UnityEngine.AnimationCurve[] curves, System.Single weight)
    void OnApply(RootMotion::FinalIK::VRIK* ik, ::Array<UnityEngine::AnimationCurve*>* curves, float weight);
    // public System.Void .ctor()
    // Offset: 0x1AA0A2C
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/Offset
    // Base method: System.Void Offset::.ctor()
    // Base method: System.Void Object::.ctor()
    static HitReactionVRIK::PositionOffset* New_ctor();
  }; // RootMotion.FinalIK.HitReactionVRIK/PositionOffset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReactionVRIK::PositionOffset*, "RootMotion.FinalIK", "HitReactionVRIK/PositionOffset");
#pragma pack(pop)
