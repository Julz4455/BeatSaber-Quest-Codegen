// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveDataV1_0_1/AchievementsData
  class PlayerSaveDataV1_0_1::AchievementsData : public ::Il2CppObject {
    public:
    // public System.String[] unlockedAchievements
    // Offset: 0x10
    ::Array<::Il2CppString*>* unlockedAchievements;
    // public System.String[] unlockedAchievementsToUpload
    // Offset: 0x18
    ::Array<::Il2CppString*>* unlockedAchievementsToUpload;
    // public System.Void .ctor()
    // Offset: 0xFE2A6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveDataV1_0_1::AchievementsData* New_ctor();
  }; // PlayerSaveDataV1_0_1/AchievementsData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData*, "", "PlayerSaveDataV1_0_1/AchievementsData");
#pragma pack(pop)
