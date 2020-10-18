// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerScoreProvider/RankedPlayer
  class MultiplayerScoreProvider::RankedPlayer : public ::Il2CppObject, public System::IComparable_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*> {
    public:
    // private readonly MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> _multiplayerSyncState
    // Offset: 0x10
    GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* multiplayerSyncState;
    // private readonly MultiplayerScoreProvider _scoreSyncManager
    // Offset: 0x18
    GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager;
    // public System.Single get_offsetSyncTime()
    // Offset: 0xF03B98
    float get_offsetSyncTime();
    // public System.Single get_lastScoreTime()
    // Offset: 0xF03E54
    float get_lastScoreTime();
    // public System.Int32 get_score()
    // Offset: 0xEFCB64
    int get_score();
    // public System.Boolean get_isConnected()
    // Offset: 0xF03A54
    bool get_isConnected();
    // public System.Boolean get_isActiveOrFinished()
    // Offset: 0xF03EAC
    bool get_isActiveOrFinished();
    // public System.Boolean get_isFailed()
    // Offset: 0xEFCC5C
    bool get_isFailed();
    // public System.Boolean get_wasActiveAtLevelStart()
    // Offset: 0xF03B1C
    bool get_wasActiveAtLevelStart();
    // public System.Boolean get_isMe()
    // Offset: 0xEFCB98
    bool get_isMe();
    // public System.String get_userId()
    // Offset: 0xEFCC88
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xF03ED8
    ::Il2CppString* get_userName();
    // public System.Void .ctor(MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> multiplayerSyncState, MultiplayerScoreProvider scoreSyncManager)
    // Offset: 0xF03B48
    static MultiplayerScoreProvider::RankedPlayer* New_ctor(GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* multiplayerSyncState, GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager);
    // public System.Int32 CompareTo(MultiplayerScoreProvider/RankedPlayer other)
    // Offset: 0xF03FA0
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(MultiplayerScoreProvider/RankedPlayer other)
    int CompareTo(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* other);
  }; // MultiplayerScoreProvider/RankedPlayer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, "", "MultiplayerScoreProvider/RankedPlayer");
#pragma pack(pop)
