// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapCharacteristicSegmentedControlController
#include "GlobalNamespace/BeatmapCharacteristicSegmentedControlController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: BeatmapCharacteristicSegmentedControlController/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF9F4
  class BeatmapCharacteristicSegmentedControlController::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly BeatmapCharacteristicSegmentedControlController/<>c <>9
    static GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c* _get_$$9();
    // Set static field: static public readonly BeatmapCharacteristicSegmentedControlController/<>c <>9
    static void _set_$$9(GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c* value);
    // Get static field: static public System.Comparison`1<IDifficultyBeatmapSet> <>9__10_0
    static System::Comparison_1<GlobalNamespace::IDifficultyBeatmapSet*>* _get_$$9__10_0();
    // Set static field: static public System.Comparison`1<IDifficultyBeatmapSet> <>9__10_0
    static void _set_$$9__10_0(System::Comparison_1<GlobalNamespace::IDifficultyBeatmapSet*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1A7C374
    static void _cctor();
    // System.Int32 <SetData>b__10_0(IDifficultyBeatmapSet a, IDifficultyBeatmapSet b)
    // Offset: 0x1A7C3E4
    int $SetData$b__10_0(GlobalNamespace::IDifficultyBeatmapSet* a, GlobalNamespace::IDifficultyBeatmapSet* b);
    // public System.Void .ctor()
    // Offset: 0x1A7C3DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicSegmentedControlController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicSegmentedControlController::$$c*, creationType>()));
    }
  }; // BeatmapCharacteristicSegmentedControlController/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c*, "", "BeatmapCharacteristicSegmentedControlController/<>c");
#pragma pack(pop)
