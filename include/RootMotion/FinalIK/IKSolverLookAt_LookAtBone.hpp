// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverLookAt
#include "RootMotion/FinalIK/IKSolverLookAt.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Bone
#include "RootMotion/FinalIK/IKSolver_Bone.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverLookAt/LookAtBone
  // [] Offset: FFFFFFFF
  class IKSolverLookAt::LookAtBone : public RootMotion::FinalIK::IKSolver::Bone {
    public:
    // Writing base type padding for base size: 0x71 to desired offset: 0x74
    char ___base_padding[0x3] = {};
    // public UnityEngine.Vector3 baseForwardOffsetEuler
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 baseForwardOffsetEuler;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: LookAtBone
    LookAtBone(UnityEngine::Vector3 baseForwardOffsetEuler_ = {}) noexcept : baseForwardOffsetEuler{baseForwardOffsetEuler_} {}
    // Creating conversion operator: operator UnityEngine::Vector3
    constexpr operator UnityEngine::Vector3() const noexcept {
      return baseForwardOffsetEuler;
    }
    // public System.Void Initiate(UnityEngine.Transform root)
    // Offset: 0x1AE1CE8
    void Initiate(UnityEngine::Transform* root);
    // public System.Void LookAt(UnityEngine.Vector3 direction, System.Single weight)
    // Offset: 0x1AE2C14
    void LookAt(UnityEngine::Vector3 direction, float weight);
    // public UnityEngine.Vector3 get_forward()
    // Offset: 0x1AE2810
    UnityEngine::Vector3 get_forward();
    // public System.Void .ctor()
    // Offset: 0x1AE2FB4
    // Implemented from: RootMotion.FinalIK.IKSolver/Bone
    // Base method: System.Void Bone::.ctor()
    // Base method: System.Void Point::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverLookAt::LookAtBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverLookAt::LookAtBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverLookAt::LookAtBone*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1AE1960
    // Implemented from: RootMotion.FinalIK.IKSolver/Bone
    // Base method: System.Void Bone::.ctor(UnityEngine.Transform transform)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverLookAt::LookAtBone* New_ctor(UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverLookAt::LookAtBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverLookAt::LookAtBone*, creationType>(transform)));
    }
  }; // RootMotion.FinalIK.IKSolverLookAt/LookAtBone
  #pragma pack(pop)
  static check_size<sizeof(IKSolverLookAt::LookAtBone), 116 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverLookAt_LookAtBoneSizeCheck;
  static_assert(sizeof(IKSolverLookAt::LookAtBone) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverLookAt::LookAtBone*, "RootMotion.FinalIK", "IKSolverLookAt/LookAtBone");
