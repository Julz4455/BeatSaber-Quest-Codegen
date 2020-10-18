// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKMapping
#include "RootMotion/FinalIK/IKMapping.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKMapping/BoneMap
  class IKMapping::BoneMap : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform transform
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // public System.Int32 chainIndex
    // Offset: 0x18
    int chainIndex;
    // public System.Int32 nodeIndex
    // Offset: 0x1C
    int nodeIndex;
    // public UnityEngine.Vector3 defaultLocalPosition
    // Offset: 0x20
    UnityEngine::Vector3 defaultLocalPosition;
    // public UnityEngine.Quaternion defaultLocalRotation
    // Offset: 0x2C
    UnityEngine::Quaternion defaultLocalRotation;
    // public UnityEngine.Vector3 localSwingAxis
    // Offset: 0x3C
    UnityEngine::Vector3 localSwingAxis;
    // public UnityEngine.Vector3 localTwistAxis
    // Offset: 0x48
    UnityEngine::Vector3 localTwistAxis;
    // public UnityEngine.Vector3 planePosition
    // Offset: 0x54
    UnityEngine::Vector3 planePosition;
    // public UnityEngine.Vector3 ikPosition
    // Offset: 0x60
    UnityEngine::Vector3 ikPosition;
    // public UnityEngine.Quaternion defaultLocalTargetRotation
    // Offset: 0x6C
    UnityEngine::Quaternion defaultLocalTargetRotation;
    // private UnityEngine.Quaternion maintainRotation
    // Offset: 0x7C
    UnityEngine::Quaternion maintainRotation;
    // public System.Single length
    // Offset: 0x8C
    float length;
    // public UnityEngine.Quaternion animatedRotation
    // Offset: 0x90
    UnityEngine::Quaternion animatedRotation;
    // private UnityEngine.Transform planeBone1
    // Offset: 0xA0
    UnityEngine::Transform* planeBone1;
    // private UnityEngine.Transform planeBone2
    // Offset: 0xA8
    UnityEngine::Transform* planeBone2;
    // private UnityEngine.Transform planeBone3
    // Offset: 0xB0
    UnityEngine::Transform* planeBone3;
    // private System.Int32 plane1ChainIndex
    // Offset: 0xB8
    int plane1ChainIndex;
    // private System.Int32 plane1NodeIndex
    // Offset: 0xBC
    int plane1NodeIndex;
    // private System.Int32 plane2ChainIndex
    // Offset: 0xC0
    int plane2ChainIndex;
    // private System.Int32 plane2NodeIndex
    // Offset: 0xC4
    int plane2NodeIndex;
    // private System.Int32 plane3ChainIndex
    // Offset: 0xC8
    int plane3ChainIndex;
    // private System.Int32 plane3NodeIndex
    // Offset: 0xCC
    int plane3NodeIndex;
    // public System.Void Initiate(UnityEngine.Transform transform, RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1AA48E0
    void Initiate(UnityEngine::Transform* transform, RootMotion::FinalIK::IKSolverFullBody* solver);
    // public UnityEngine.Vector3 get_swingDirection()
    // Offset: 0x1AA4930
    UnityEngine::Vector3 get_swingDirection();
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x1AA49FC
    void StoreDefaultLocalState();
    // public System.Void FixTransform(System.Boolean position)
    // Offset: 0x1AA4A4C
    void FixTransform(bool position);
    // public System.Boolean get_isNodeBone()
    // Offset: 0x1AA4A9C
    bool get_isNodeBone();
    // public System.Void SetLength(RootMotion.FinalIK.IKMapping/BoneMap nextBone)
    // Offset: 0x1AA4AAC
    void SetLength(RootMotion::FinalIK::IKMapping::BoneMap* nextBone);
    // public System.Void SetLocalSwingAxis(RootMotion.FinalIK.IKMapping/BoneMap swingTarget)
    // Offset: 0x1AA4B94
    void SetLocalSwingAxis(RootMotion::FinalIK::IKMapping::BoneMap* swingTarget);
    // public System.Void SetLocalSwingAxis(RootMotion.FinalIK.IKMapping/BoneMap bone1, RootMotion.FinalIK.IKMapping/BoneMap bone2)
    // Offset: 0x1AA4B9C
    void SetLocalSwingAxis(RootMotion::FinalIK::IKMapping::BoneMap* bone1, RootMotion::FinalIK::IKMapping::BoneMap* bone2);
    // public System.Void SetLocalTwistAxis(UnityEngine.Vector3 twistDirection, UnityEngine.Vector3 normalDirection)
    // Offset: 0x1AA4D2C
    void SetLocalTwistAxis(UnityEngine::Vector3 twistDirection, UnityEngine::Vector3 normalDirection);
    // public System.Void SetPlane(RootMotion.FinalIK.IKSolverFullBody solver, UnityEngine.Transform planeBone1, UnityEngine.Transform planeBone2, UnityEngine.Transform planeBone3)
    // Offset: 0x1AA4E38
    void SetPlane(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Transform* planeBone1, UnityEngine::Transform* planeBone2, UnityEngine::Transform* planeBone3);
    // public System.Void UpdatePlane(System.Boolean rotation, System.Boolean position)
    // Offset: 0x1AA4EFC
    void UpdatePlane(bool rotation, bool position);
    // public System.Void SetIKPosition()
    // Offset: 0x1AA52D0
    void SetIKPosition();
    // public System.Void MaintainRotation()
    // Offset: 0x1AA5308
    void MaintainRotation();
    // public System.Void SetToIKPosition()
    // Offset: 0x1AA5340
    void SetToIKPosition();
    // public System.Void FixToNode(RootMotion.FinalIK.IKSolverFullBody solver, System.Single weight, RootMotion.FinalIK.IKSolver/Node fixNode)
    // Offset: 0x1AA5368
    void FixToNode(RootMotion::FinalIK::IKSolverFullBody* solver, float weight, RootMotion::FinalIK::IKSolver::Node* fixNode);
    // public UnityEngine.Vector3 GetPlanePosition(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1AA5494
    UnityEngine::Vector3 GetPlanePosition(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void PositionToPlane(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1AA57DC
    void PositionToPlane(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void RotateToPlane(RootMotion.FinalIK.IKSolverFullBody solver, System.Single weight)
    // Offset: 0x1AA580C
    void RotateToPlane(RootMotion::FinalIK::IKSolverFullBody* solver, float weight);
    // public System.Void Swing(UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x1AA59A4
    void Swing(UnityEngine::Vector3 swingTarget, float weight);
    // public System.Void Swing(UnityEngine.Vector3 pos1, UnityEngine.Vector3 pos2, System.Single weight)
    // Offset: 0x1AA5A14
    void Swing(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float weight);
    // public System.Void Twist(UnityEngine.Vector3 twistDirection, UnityEngine.Vector3 normalDirection, System.Single weight)
    // Offset: 0x1AA5C58
    void Twist(UnityEngine::Vector3 twistDirection, UnityEngine::Vector3 normalDirection, float weight);
    // public System.Void RotateToMaintain(System.Single weight)
    // Offset: 0x1AA5E80
    void RotateToMaintain(float weight);
    // public System.Void RotateToEffector(RootMotion.FinalIK.IKSolverFullBody solver, System.Single weight)
    // Offset: 0x1AA5F98
    void RotateToEffector(RootMotion::FinalIK::IKSolverFullBody* solver, float weight);
    // private UnityEngine.Quaternion GetTargetRotation(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1AA55D8
    UnityEngine::Quaternion GetTargetRotation(RootMotion::FinalIK::IKSolverFullBody* solver);
    // private UnityEngine.Quaternion get_lastAnimatedTargetRotation()
    // Offset: 0x1AA50AC
    UnityEngine::Quaternion get_lastAnimatedTargetRotation();
    // public System.Void .ctor()
    // Offset: 0x1AA6134
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IKMapping::BoneMap* New_ctor();
  }; // RootMotion.FinalIK.IKMapping/BoneMap
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKMapping::BoneMap*, "RootMotion.FinalIK", "IKMapping/BoneMap");
#pragma pack(pop)
