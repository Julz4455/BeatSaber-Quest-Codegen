// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
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
  // Autogenerated type: RootMotion.FinalIK.IKSolver/Point
  class IKSolver::Point : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform transform
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // public System.Single weight
    // Offset: 0x18
    float weight;
    // public UnityEngine.Vector3 solverPosition
    // Offset: 0x1C
    UnityEngine::Vector3 solverPosition;
    // public UnityEngine.Quaternion solverRotation
    // Offset: 0x28
    UnityEngine::Quaternion solverRotation;
    // public UnityEngine.Vector3 defaultLocalPosition
    // Offset: 0x38
    UnityEngine::Vector3 defaultLocalPosition;
    // public UnityEngine.Quaternion defaultLocalRotation
    // Offset: 0x44
    UnityEngine::Quaternion defaultLocalRotation;
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x1AAA270
    void StoreDefaultLocalState();
    // public System.Void FixTransform()
    // Offset: 0x1AAA2C0
    void FixTransform();
    // public System.Void UpdateSolverPosition()
    // Offset: 0x1AAA448
    void UpdateSolverPosition();
    // public System.Void UpdateSolverLocalPosition()
    // Offset: 0x1AAA480
    void UpdateSolverLocalPosition();
    // public System.Void UpdateSolverState()
    // Offset: 0x1AAA4B8
    void UpdateSolverState();
    // public System.Void UpdateSolverLocalState()
    // Offset: 0x1AAA508
    void UpdateSolverLocalState();
    // public System.Void .ctor()
    // Offset: 0x1AA9D0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IKSolver::Point* New_ctor();
  }; // RootMotion.FinalIK.IKSolver/Point
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolver::Point*, "RootMotion.FinalIK", "IKSolver/Point");
#pragma pack(pop)
