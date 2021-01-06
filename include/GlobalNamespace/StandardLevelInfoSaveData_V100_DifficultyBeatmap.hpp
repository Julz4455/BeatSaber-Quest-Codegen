// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandardLevelInfoSaveData_V100
#include "GlobalNamespace/StandardLevelInfoSaveData_V100.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  // Autogenerated type: StandardLevelInfoSaveData_V100/DifficultyBeatmap
  // [] Offset: FFFFFFFF
  class StandardLevelInfoSaveData_V100::DifficultyBeatmap : public ::Il2CppObject {
    public:
    // private System.String _difficulty
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* difficulty;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _difficultyRank
    // Size: 0x4
    // Offset: 0x18
    int difficultyRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: difficultyRank and: beatmapFilename
    char __padding1[0x4] = {};
    // private System.String _beatmapFilename
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* beatmapFilename;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _noteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x28
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _noteJumpStartBeatOffset
    // Size: 0x4
    // Offset: 0x2C
    int noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DifficultyBeatmap
    DifficultyBeatmap(::Il2CppString* difficulty_ = {}, int difficultyRank_ = {}, ::Il2CppString* beatmapFilename_ = {}, float noteJumpMovementSpeed_ = {}, int noteJumpStartBeatOffset_ = {}) noexcept : difficulty{difficulty_}, difficultyRank{difficultyRank_}, beatmapFilename{beatmapFilename_}, noteJumpMovementSpeed{noteJumpMovementSpeed_}, noteJumpStartBeatOffset{noteJumpStartBeatOffset_} {}
    // public System.String get_difficulty()
    // Offset: 0xF44900
    ::Il2CppString* get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0xF44908
    int get_difficultyRank();
    // public System.String get_beatmapFilename()
    // Offset: 0xF44910
    ::Il2CppString* get_beatmapFilename();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0xF44918
    float get_noteJumpMovementSpeed();
    // public System.Int32 get_noteJumpStartBeatOffset()
    // Offset: 0xF44920
    int get_noteJumpStartBeatOffset();
    // public System.Void .ctor(System.String difficultyName, System.Int32 difficultyRank, System.String beatmapFilename, System.Single noteJumpMovementSpeed, System.Int32 noteJumpStartBeatOffset)
    // Offset: 0xF44928
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelInfoSaveData_V100::DifficultyBeatmap* New_ctor(::Il2CppString* difficultyName, int difficultyRank, ::Il2CppString* beatmapFilename, float noteJumpMovementSpeed, int noteJumpStartBeatOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyBeatmap").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelInfoSaveData_V100::DifficultyBeatmap*, creationType>(difficultyName, difficultyRank, beatmapFilename, noteJumpMovementSpeed, noteJumpStartBeatOffset)));
    }
  }; // StandardLevelInfoSaveData_V100/DifficultyBeatmap
  static check_size<sizeof(StandardLevelInfoSaveData_V100::DifficultyBeatmap), 44 + sizeof(int)> __GlobalNamespace_StandardLevelInfoSaveData_V100_DifficultyBeatmapSizeCheck;
  static_assert(sizeof(StandardLevelInfoSaveData_V100::DifficultyBeatmap) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap*, "", "StandardLevelInfoSaveData_V100/DifficultyBeatmap");
#pragma pack(pop)
