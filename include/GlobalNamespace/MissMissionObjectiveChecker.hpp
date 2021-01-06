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
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: NoteController
  class NoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  // Autogenerated type: MissMissionObjectiveChecker
  // [] Offset: FFFFFFFF
  class MissMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // [InjectAttribute] Offset: 0xDC8740
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // Creating value type constructor for type: MissMissionObjectiveChecker
    MissMissionObjectiveChecker(GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}) noexcept : beatmapObjectManager{beatmapObjectManager_} {}
    // protected System.Void OnDestroy()
    // Offset: 0x1A7410C
    void OnDestroy();
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x1A741AC
    void HandleNoteWasMissed(GlobalNamespace::NoteController* noteController);
    // protected override System.Void Init()
    // Offset: 0x1A7400C
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0x1A74200
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MissMissionObjectiveChecker").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissMissionObjectiveChecker*, creationType>()));
    }
  }; // MissMissionObjectiveChecker
  static check_size<sizeof(MissMissionObjectiveChecker), 72 + sizeof(GlobalNamespace::BeatmapObjectManager*)> __GlobalNamespace_MissMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(MissMissionObjectiveChecker) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissMissionObjectiveChecker*, "", "MissMissionObjectiveChecker");
#pragma pack(pop)
