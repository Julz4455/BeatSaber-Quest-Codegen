// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleValueMissionObjectiveChecker
#include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberActivityCounter
  class SaberActivityCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  // Autogenerated type: HandsMovementMissionObjectiveChecker
  // [] Offset: FFFFFFFF
  class HandsMovementMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // [InjectAttribute] Offset: 0xDC8730
    // private SaberActivityCounter _saberActivityCounter
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::SaberActivityCounter* saberActivityCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberActivityCounter*) == 0x8);
    // Creating value type constructor for type: HandsMovementMissionObjectiveChecker
    HandsMovementMissionObjectiveChecker(GlobalNamespace::SaberActivityCounter* saberActivityCounter_ = {}) noexcept : saberActivityCounter{saberActivityCounter_} {}
    // protected System.Void OnDestroy()
    // Offset: 0xF12BE4
    void OnDestroy();
    // private System.Void HandleTotalDistanceDidChange(System.Single distance)
    // Offset: 0xF12CC0
    void HandleTotalDistanceDidChange(float distance);
    // protected override System.Void Init()
    // Offset: 0xF12CF0
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0xF12DB4
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandsMovementMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("HandsMovementMissionObjectiveChecker").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandsMovementMissionObjectiveChecker*, creationType>()));
    }
  }; // HandsMovementMissionObjectiveChecker
  static check_size<sizeof(HandsMovementMissionObjectiveChecker), 72 + sizeof(GlobalNamespace::SaberActivityCounter*)> __GlobalNamespace_HandsMovementMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(HandsMovementMissionObjectiveChecker) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HandsMovementMissionObjectiveChecker*, "", "HandsMovementMissionObjectiveChecker");
#pragma pack(pop)
