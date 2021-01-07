// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: BeatmapDataTransformHelper
  // [] Offset: FFFFFFFF
  class BeatmapDataTransformHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapDataTransformHelper
    BeatmapDataTransformHelper() noexcept {}
    // static public IReadonlyBeatmapData CreateTransformedBeatmapData(IReadonlyBeatmapData beatmapData, GameplayModifiers gameplayModifiers, PracticeSettings practiceSettings, System.Boolean leftHanded, System.Boolean staticLights)
    // Offset: 0x1A81C34
    static GlobalNamespace::IReadonlyBeatmapData* CreateTransformedBeatmapData(GlobalNamespace::IReadonlyBeatmapData* beatmapData, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PracticeSettings* practiceSettings, bool leftHanded, bool staticLights);
    // public System.Void .ctor()
    // Offset: 0x1A81D64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataTransformHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapDataTransformHelper").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataTransformHelper*, creationType>()));
    }
  }; // BeatmapDataTransformHelper
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataTransformHelper*, "", "BeatmapDataTransformHelper");
#pragma pack(pop)
