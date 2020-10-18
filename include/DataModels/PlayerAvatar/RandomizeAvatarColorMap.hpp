// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: DataModels.PlayerAvatar
namespace DataModels::PlayerAvatar {
  // Autogenerated type: DataModels.PlayerAvatar.RandomizeAvatarColorMap
  class RandomizeAvatarColorMap : public ::Il2CppObject {
    public:
    // private readonly System.Int32 <totalIndices>k__BackingField
    // Offset: 0x10
    int totalIndices;
    // private readonly System.Int32[] <colorIndices>k__BackingField
    // Offset: 0x18
    ::Array<int>* colorIndices;
    // public System.Int32 get_totalIndices()
    // Offset: 0xF5E458
    int get_totalIndices();
    // public System.Int32[] get_colorIndices()
    // Offset: 0xF5E460
    ::Array<int>* get_colorIndices();
    // public System.Void .ctor(System.Int32 headTopPrimaryColorIndex, System.Int32 headTopSecondaryColorIndex, System.Int32 glassesColorIndex, System.Int32 facialHairColorIndex, System.Int32 handsColorIndex, System.Int32 clothesPrimaryColorIndex, System.Int32 clothesSecondaryColorIndex, System.Int32 clothesDetailColorIndex)
    // Offset: 0xF5DE18
    static RandomizeAvatarColorMap* New_ctor(int headTopPrimaryColorIndex, int headTopSecondaryColorIndex, int glassesColorIndex, int facialHairColorIndex, int handsColorIndex, int clothesPrimaryColorIndex, int clothesSecondaryColorIndex, int clothesDetailColorIndex);
  }; // DataModels.PlayerAvatar.RandomizeAvatarColorMap
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(DataModels::PlayerAvatar::RandomizeAvatarColorMap*, "DataModels.PlayerAvatar", "RandomizeAvatarColorMap");
#pragma pack(pop)
