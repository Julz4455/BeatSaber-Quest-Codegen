// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerAllOverallStatsData
  class PlayerAllOverallStatsData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData
    class PlayerOverallStatsData;
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <campaignOverallStatsData>k__BackingField
    // Offset: 0x10
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* campaignOverallStatsData;
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <soloFreePlayOverallStatsData>k__BackingField
    // Offset: 0x18
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* soloFreePlayOverallStatsData;
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <partyFreePlayOverallStatsData>k__BackingField
    // Offset: 0x20
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* partyFreePlayOverallStatsData;
    // private System.Action`2<LevelCompletionResults,IDifficultyBeatmap> didUpdateSoloFreePlayOverallStatsDataEvent
    // Offset: 0x28
    System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* didUpdateSoloFreePlayOverallStatsDataEvent;
    // private System.Action`2<LevelCompletionResults,IDifficultyBeatmap> didUpdatePartyFreePlayOverallStatsDataEvent
    // Offset: 0x30
    System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* didUpdatePartyFreePlayOverallStatsDataEvent;
    // private System.Action`2<MissionCompletionResults,MissionNode> didUpdateCampaignOverallStatsDataEvent
    // Offset: 0x38
    System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* didUpdateCampaignOverallStatsDataEvent;
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_allOverallStatsData()
    // Offset: 0xFDBD58
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_allOverallStatsData();
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_campaignOverallStatsData()
    // Offset: 0xFDBEB0
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_campaignOverallStatsData();
    // private System.Void set_campaignOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0xFDBEB8
    void set_campaignOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_soloFreePlayOverallStatsData()
    // Offset: 0xFDBEC0
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_soloFreePlayOverallStatsData();
    // private System.Void set_soloFreePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0xFDBEC8
    void set_soloFreePlayOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_partyFreePlayOverallStatsData()
    // Offset: 0xFDBED0
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_partyFreePlayOverallStatsData();
    // private System.Void set_partyFreePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0xFDBED8
    void set_partyFreePlayOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public System.Void add_didUpdateSoloFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0xFDBEE0
    void add_didUpdateSoloFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didUpdateSoloFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0xFDBF84
    void remove_didUpdateSoloFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didUpdatePartyFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0xFDC028
    void add_didUpdatePartyFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didUpdatePartyFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0xFDC0CC
    void remove_didUpdatePartyFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didUpdateCampaignOverallStatsDataEvent(System.Action`2<MissionCompletionResults,MissionNode> value)
    // Offset: 0xFDC170
    void add_didUpdateCampaignOverallStatsDataEvent(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* value);
    // public System.Void remove_didUpdateCampaignOverallStatsDataEvent(System.Action`2<MissionCompletionResults,MissionNode> value)
    // Offset: 0xFDC214
    void remove_didUpdateCampaignOverallStatsDataEvent(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* value);
    // public System.Void .ctor(PlayerAllOverallStatsData/PlayerOverallStatsData campaignOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData soloFreePlayOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData partyFreePlayOverallStatsData)
    // Offset: 0xFDC384
    static PlayerAllOverallStatsData* New_ctor(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* campaignOverallStatsData, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* soloFreePlayOverallStatsData, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* partyFreePlayOverallStatsData);
    // public System.Void UpdateSoloFreePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFDC3E8
    void UpdateSoloFreePlayOverallStatsData(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void UpdatePartyFreePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFD4F30
    void UpdatePartyFreePlayOverallStatsData(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void UpdateCampaignOverallStatsData(MissionCompletionResults missionCompletionResults, MissionNode missionNode)
    // Offset: 0xFDC588
    void UpdateCampaignOverallStatsData(GlobalNamespace::MissionCompletionResults* missionCompletionResults, GlobalNamespace::MissionNode* missionNode);
    // public System.Void .ctor()
    // Offset: 0xFDC2B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerAllOverallStatsData* New_ctor();
  }; // PlayerAllOverallStatsData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerAllOverallStatsData*, "", "PlayerAllOverallStatsData");
#pragma pack(pop)
