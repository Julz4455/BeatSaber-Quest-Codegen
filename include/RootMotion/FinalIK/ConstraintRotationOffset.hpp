// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Constraint
#include "RootMotion/FinalIK/Constraint.hpp"
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
  // Autogenerated type: RootMotion.FinalIK.ConstraintRotationOffset
  class ConstraintRotationOffset : public RootMotion::FinalIK::Constraint {
    public:
    // public UnityEngine.Quaternion offset
    // Offset: 0x1C
    UnityEngine::Quaternion offset;
    // private UnityEngine.Quaternion defaultRotation
    // Offset: 0x2C
    UnityEngine::Quaternion defaultRotation;
    // private UnityEngine.Quaternion defaultLocalRotation
    // Offset: 0x3C
    UnityEngine::Quaternion defaultLocalRotation;
    // private UnityEngine.Quaternion lastLocalRotation
    // Offset: 0x4C
    UnityEngine::Quaternion lastLocalRotation;
    // private UnityEngine.Quaternion defaultTargetLocalRotation
    // Offset: 0x5C
    UnityEngine::Quaternion defaultTargetLocalRotation;
    // private System.Boolean initiated
    // Offset: 0x6C
    bool initiated;
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1ACF754
    static ConstraintRotationOffset* New_ctor(UnityEngine::Transform* transform);
    // private System.Boolean get_rotationChanged()
    // Offset: 0x1ACF67C
    bool get_rotationChanged();
    // public override System.Void UpdateConstraint()
    // Offset: 0x1ACF4DC
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::UpdateConstraint()
    void UpdateConstraint();
    // public System.Void .ctor()
    // Offset: 0x1ACF74C
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::.ctor()
    // Base method: System.Void Object::.ctor()
    static ConstraintRotationOffset* New_ctor();
  }; // RootMotion.FinalIK.ConstraintRotationOffset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ConstraintRotationOffset*, "RootMotion.FinalIK", "ConstraintRotationOffset");
#pragma pack(pop)
