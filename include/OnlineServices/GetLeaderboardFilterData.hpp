// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OnlineServices.ScoresScope
#include "OnlineServices/ScoresScope.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.GetLeaderboardFilterData
  struct GetLeaderboardFilterData : public System::ValueType {
    public:
    // public readonly IDifficultyBeatmap beatmap
    // Offset: 0x0
    GlobalNamespace::IDifficultyBeatmap* beatmap;
    // public readonly System.Int32 count
    // Offset: 0x8
    int count;
    // public readonly System.Int32 fromRank
    // Offset: 0xC
    int fromRank;
    // public readonly OnlineServices.ScoresScope scope
    // Offset: 0x10
    OnlineServices::ScoresScope scope;
    // public readonly GameplayModifiers gameplayModifiers
    // Offset: 0x18
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Creating value type constructor for type: GetLeaderboardFilterData
    constexpr GetLeaderboardFilterData(GlobalNamespace::IDifficultyBeatmap* beatmap_ = {}, int count_ = {}, int fromRank_ = {}, OnlineServices::ScoresScope scope_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}) noexcept : beatmap{beatmap_}, count{count_}, fromRank{fromRank_}, scope{scope_}, gameplayModifiers{gameplayModifiers_} {}
    // public System.Void .ctor(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, OnlineServices.ScoresScope scope, GameplayModifiers gameplayModifiers)
    // Offset: 0xDA260C
    // ABORTED: conflicts with another method.  GetLeaderboardFilterData(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, OnlineServices::ScoresScope scope, GlobalNamespace::GameplayModifiers* gameplayModifiers);
  }; // OnlineServices.GetLeaderboardFilterData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::GetLeaderboardFilterData, "OnlineServices", "GetLeaderboardFilterData");
#pragma pack(pop)
