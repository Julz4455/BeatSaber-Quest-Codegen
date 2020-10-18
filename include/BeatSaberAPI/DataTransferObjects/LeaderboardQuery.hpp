// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatSaberAPI.DataTransferObjects.ScoresScope
#include "BeatSaberAPI/DataTransferObjects/ScoresScope.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.LevelScoreResult
#include "BeatSaberAPI/DataTransferObjects/LevelScoreResult.hpp"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.LeaderboardQuery
  class LeaderboardQuery : public ::Il2CppObject {
    public:
    // public System.String leaderboardId
    // Offset: 0x10
    ::Il2CppString* leaderboardId;
    // public System.Int32 count
    // Offset: 0x18
    int count;
    // public System.Int32 fromRank
    // Offset: 0x1C
    int fromRank;
    // public BeatSaberAPI.DataTransferObjects.ScoresScope scope
    // Offset: 0x20
    BeatSaberAPI::DataTransferObjects::ScoresScope scope;
    // public System.String[] friendsUserIds
    // Offset: 0x28
    ::Array<::Il2CppString*>* friendsUserIds;
    // public System.Boolean onlyWithSpecificGameplayModifiers
    // Offset: 0x30
    bool onlyWithSpecificGameplayModifiers;
    // public BeatSaberAPI.DataTransferObjects.LevelScoreResult/GameplayModifiers[] gameplayModifiers
    // Offset: 0x38
    ::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* gameplayModifiers;
    // public System.Void .ctor()
    // Offset: 0x10467D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LeaderboardQuery* New_ctor();
  }; // BeatSaberAPI.DataTransferObjects.LeaderboardQuery
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::LeaderboardQuery*, "BeatSaberAPI.DataTransferObjects", "LeaderboardQuery");
#pragma pack(pop)
