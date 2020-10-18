// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolverHeuristic
  class IKSolverHeuristic : public RootMotion::FinalIK::IKSolver {
    public:
    // public UnityEngine.Transform target
    // Offset: 0x58
    UnityEngine::Transform* target;
    // public System.Single tolerance
    // Offset: 0x60
    float tolerance;
    // public System.Int32 maxIterations
    // Offset: 0x64
    int maxIterations;
    // public System.Boolean useRotationLimits
    // Offset: 0x68
    bool useRotationLimits;
    // public System.Boolean XY
    // Offset: 0x69
    bool XY;
    // public RootMotion.FinalIK.IKSolver/Bone[] bones
    // Offset: 0x70
    ::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones;
    // protected UnityEngine.Vector3 lastLocalDirection
    // Offset: 0x78
    UnityEngine::Vector3 lastLocalDirection;
    // protected System.Single chainLength
    // Offset: 0x84
    float chainLength;
    // public System.Boolean SetChain(UnityEngine.Transform[] hierarchy, UnityEngine.Transform root)
    // Offset: 0x1A85B18
    bool SetChain(::Array<UnityEngine::Transform*>* hierarchy, UnityEngine::Transform* root);
    // public System.Void AddBone(UnityEngine.Transform bone)
    // Offset: 0x1A85CCC
    void AddBone(UnityEngine::Transform* bone);
    // protected System.Int32 get_minBones()
    // Offset: 0x1A863B0
    int get_minBones();
    // protected System.Boolean get_boneLengthCanBeZero()
    // Offset: 0x1A863B8
    bool get_boneLengthCanBeZero();
    // protected System.Boolean get_allowCommonParent()
    // Offset: 0x1A863C0
    bool get_allowCommonParent();
    // protected System.Void InitiateBones()
    // Offset: 0x1A7C23C
    void InitiateBones();
    // protected UnityEngine.Vector3 get_localDirection()
    // Offset: 0x1A863D0
    UnityEngine::Vector3 get_localDirection();
    // protected System.Single get_positionOffset()
    // Offset: 0x1A7CE58
    float get_positionOffset();
    // protected UnityEngine.Vector3 GetSingularityOffset()
    // Offset: 0x1A7CAB4
    UnityEngine::Vector3 GetSingularityOffset();
    // private System.Boolean SingularityDetected()
    // Offset: 0x1A86504
    bool SingularityDetected();
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1A85E30
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1A85E9C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1A85F1C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x1A862B4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1A862BC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // protected override System.Void OnInitiate()
    // Offset: 0x1A863C8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1A863CC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1A7B0D4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKSolverHeuristic* New_ctor();
  }; // RootMotion.FinalIK.IKSolverHeuristic
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverHeuristic*, "RootMotion.FinalIK", "IKSolverHeuristic");
#pragma pack(pop)
