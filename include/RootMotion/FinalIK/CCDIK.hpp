// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IK
#include "RootMotion/FinalIK/IK.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverCCD
  class IKSolverCCD;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  // Autogenerated type: RootMotion.FinalIK.CCDIK
  // [] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: DB48B8
  // [AddComponentMenu] Offset: DB48B8
  class CCDIK : public RootMotion::FinalIK::IK {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    // public RootMotion.FinalIK.IKSolverCCD solver
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::IKSolverCCD* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverCCD*) == 0x8);
    // Creating value type constructor for type: CCDIK
    CCDIK(RootMotion::FinalIK::IKSolverCCD* solver_ = {}) noexcept : solver{solver_} {}
    // private System.Void SupportGroup()
    // Offset: 0x174CF68
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x174CFB4
    void ASThread();
    // protected override System.Void OpenUserManual()
    // Offset: 0x174CED0
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x174CF1C
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x174D000
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // public System.Void .ctor()
    // Offset: 0x174D008
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CCDIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("RootMotion::FinalIK").WithContext("CCDIK").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CCDIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.CCDIK
  static check_size<sizeof(CCDIK), 56 + sizeof(RootMotion::FinalIK::IKSolverCCD*)> __RootMotion_FinalIK_CCDIKSizeCheck;
  static_assert(sizeof(CCDIK) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::CCDIK*, "RootMotion.FinalIK", "CCDIK");
#pragma pack(pop)
