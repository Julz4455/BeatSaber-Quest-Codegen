// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AvatarIKGoal
#include "UnityEngine/AvatarIKGoal.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Avatar
  class Avatar;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.BakerHumanoidQT
  class BakerHumanoidQT : public ::Il2CppObject {
    public:
    // private UnityEngine.Transform transform
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // private System.String Qx
    // Offset: 0x18
    ::Il2CppString* Qx;
    // private System.String Qy
    // Offset: 0x20
    ::Il2CppString* Qy;
    // private System.String Qz
    // Offset: 0x28
    ::Il2CppString* Qz;
    // private System.String Qw
    // Offset: 0x30
    ::Il2CppString* Qw;
    // private System.String Tx
    // Offset: 0x38
    ::Il2CppString* Tx;
    // private System.String Ty
    // Offset: 0x40
    ::Il2CppString* Ty;
    // private System.String Tz
    // Offset: 0x48
    ::Il2CppString* Tz;
    // public UnityEngine.AnimationCurve rotX
    // Offset: 0x50
    UnityEngine::AnimationCurve* rotX;
    // public UnityEngine.AnimationCurve rotY
    // Offset: 0x58
    UnityEngine::AnimationCurve* rotY;
    // public UnityEngine.AnimationCurve rotZ
    // Offset: 0x60
    UnityEngine::AnimationCurve* rotZ;
    // public UnityEngine.AnimationCurve rotW
    // Offset: 0x68
    UnityEngine::AnimationCurve* rotW;
    // public UnityEngine.AnimationCurve posX
    // Offset: 0x70
    UnityEngine::AnimationCurve* posX;
    // public UnityEngine.AnimationCurve posY
    // Offset: 0x78
    UnityEngine::AnimationCurve* posY;
    // public UnityEngine.AnimationCurve posZ
    // Offset: 0x80
    UnityEngine::AnimationCurve* posZ;
    // private UnityEngine.AvatarIKGoal goal
    // Offset: 0x88
    UnityEngine::AvatarIKGoal goal;
    // private UnityEngine.Quaternion lastQ
    // Offset: 0x8C
    UnityEngine::Quaternion lastQ;
    // private System.Boolean lastQSet
    // Offset: 0x9C
    bool lastQSet;
    // public System.Void .ctor(System.String name)
    // Offset: 0x13A0A00
    static BakerHumanoidQT* New_ctor(::Il2CppString* name);
    // public System.Void .ctor(UnityEngine.Transform transform, UnityEngine.AvatarIKGoal goal, System.String name)
    // Offset: 0x13A0CF8
    static BakerHumanoidQT* New_ctor(UnityEngine::Transform* transform, UnityEngine::AvatarIKGoal goal, ::Il2CppString* name);
    // public System.Void Reset()
    // Offset: 0x13A0B74
    void Reset();
    // public System.Void SetIKKeyframes(System.Single time, UnityEngine.Avatar avatar, System.Single humanScale, UnityEngine.Vector3 bodyPosition, UnityEngine.Quaternion bodyRotation)
    // Offset: 0x13A0E90
    void SetIKKeyframes(float time, UnityEngine::Avatar* avatar, float humanScale, UnityEngine::Vector3 bodyPosition, UnityEngine::Quaternion bodyRotation);
    // public System.Void SetKeyframes(System.Single time, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x13A1338
    void SetKeyframes(float time, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // public System.Void MoveLastKeyframes(System.Single time)
    // Offset: 0x13A1434
    void MoveLastKeyframes(float time);
    // public System.Void SetLoopFrame(System.Single time)
    // Offset: 0x13A1530
    void SetLoopFrame(float time);
    // private System.Void MoveLastKeyframe(System.Single time, UnityEngine.AnimationCurve curve)
    // Offset: 0x13A14A8
    void MoveLastKeyframe(float time, UnityEngine::AnimationCurve* curve);
    // public System.Void MultiplyLength(UnityEngine.AnimationCurve curve, System.Single mlp)
    // Offset: 0x13A17F0
    void MultiplyLength(UnityEngine::AnimationCurve* curve, float mlp);
    // public System.Void SetCurves(ref UnityEngine.AnimationClip clip, System.Single maxError, System.Single lengthMlp)
    // Offset: 0x13A18A4
    void SetCurves(UnityEngine::AnimationClip*& clip, float maxError, float lengthMlp);
  }; // RootMotion.BakerHumanoidQT
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BakerHumanoidQT*, "RootMotion", "BakerHumanoidQT");
#pragma pack(pop)
