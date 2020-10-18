// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.GrounderQuadruped
#include "RootMotion/FinalIK/GrounderQuadruped.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.Grounding
#include "RootMotion/FinalIK/Grounding.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.GrounderQuadruped/Foot
  struct GrounderQuadruped::Foot : public System::ValueType {
    public:
    // public RootMotion.FinalIK.IKSolver solver
    // Offset: 0x0
    RootMotion::FinalIK::IKSolver* solver;
    // public UnityEngine.Transform transform
    // Offset: 0x8
    UnityEngine::Transform* transform;
    // public UnityEngine.Quaternion rotation
    // Offset: 0x10
    UnityEngine::Quaternion rotation;
    // public RootMotion.FinalIK.Grounding/Leg leg
    // Offset: 0x20
    RootMotion::FinalIK::Grounding::Leg* leg;
    // Creating value type constructor for type: Foot
    constexpr Foot(RootMotion::FinalIK::IKSolver* solver_ = {}, UnityEngine::Transform* transform_ = {}, UnityEngine::Quaternion rotation_ = {}, RootMotion::FinalIK::Grounding::Leg* leg_ = {}) noexcept : solver{solver_}, transform{transform_}, rotation{rotation_}, leg{leg_} {}
    // public System.Void .ctor(RootMotion.FinalIK.IKSolver solver, UnityEngine.Transform transform)
    // Offset: 0xDC3744
    Foot(RootMotion::FinalIK::IKSolver* solver, UnityEngine::Transform* transform);
  }; // RootMotion.FinalIK.GrounderQuadruped/Foot
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderQuadruped::Foot, "RootMotion.FinalIK", "GrounderQuadruped/Foot");
#pragma pack(pop)
