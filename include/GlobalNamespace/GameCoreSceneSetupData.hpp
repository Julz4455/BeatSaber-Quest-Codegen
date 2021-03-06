// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GameCoreSceneSetupData
  // [] Offset: FFFFFFFF
  class GameCoreSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD453A4
    // private ColorScheme <colorScheme>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    // Creating value type constructor for type: GameCoreSceneSetupData
    GameCoreSceneSetupData(GlobalNamespace::ColorScheme* colorScheme_ = {}) noexcept : colorScheme{colorScheme_} {}
    // Creating conversion operator: operator GlobalNamespace::ColorScheme*
    constexpr operator GlobalNamespace::ColorScheme*() const noexcept {
      return colorScheme;
    }
    // public ColorScheme get_colorScheme()
    // Offset: 0xF32544
    GlobalNamespace::ColorScheme* get_colorScheme();
    // private System.Void set_colorScheme(ColorScheme value)
    // Offset: 0xF3254C
    void set_colorScheme(GlobalNamespace::ColorScheme* value);
    // public System.Void .ctor(ColorScheme colorScheme)
    // Offset: 0xF32554
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameCoreSceneSetupData* New_ctor(GlobalNamespace::ColorScheme* colorScheme) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameCoreSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameCoreSceneSetupData*, creationType>(colorScheme)));
    }
  }; // GameCoreSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(GameCoreSceneSetupData), 16 + sizeof(GlobalNamespace::ColorScheme*)> __GlobalNamespace_GameCoreSceneSetupDataSizeCheck;
  static_assert(sizeof(GameCoreSceneSetupData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameCoreSceneSetupData*, "", "GameCoreSceneSetupData");
