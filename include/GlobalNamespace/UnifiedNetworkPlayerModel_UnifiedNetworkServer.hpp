// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/UnifiedNetworkServer
  // [] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel::UnifiedNetworkServer : public ::Il2CppObject/*, public GlobalNamespace::INetworkPlayer*/ {
    public:
    // private readonly UnifiedNetworkPlayerModel _playerModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::UnifiedNetworkPlayerModel* playerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private readonly System.String _code
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _serverName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* serverName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _hasPassword
    // Size: 0x1
    // Offset: 0x28
    bool hasPassword;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasPassword and: currentPlayerCount
    char __padding3[0x3] = {};
    // private System.Int32 _currentPlayerCount
    // Size: 0x4
    // Offset: 0x2C
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxPlayerCount
    // Size: 0x4
    // Offset: 0x30
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private BeatmapDifficultyMask _difficulties
    // Size: 0x1
    // Offset: 0x34
    GlobalNamespace::BeatmapDifficultyMask difficulties;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: difficulties and: modifiers
    char __padding6[0x1] = {};
    // private GameplayModifierMask _modifiers
    // Size: 0x2
    // Offset: 0x36
    GlobalNamespace::GameplayModifierMask modifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierMask) == 0x2);
    // private SongPackMask _songPacks
    // Size: 0x10
    // Offset: 0x38
    GlobalNamespace::SongPackMask songPacks;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // private System.Single _lastUpdateTime
    // Size: 0x4
    // Offset: 0x48
    float lastUpdateTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: UnifiedNetworkServer
    UnifiedNetworkServer(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel_ = {}, ::Il2CppString* code_ = {}, ::Il2CppString* serverName_ = {}, bool hasPassword_ = {}, int currentPlayerCount_ = {}, int maxPlayerCount_ = {}, GlobalNamespace::BeatmapDifficultyMask difficulties_ = {}, GlobalNamespace::GameplayModifierMask modifiers_ = {}, GlobalNamespace::SongPackMask songPacks_ = {}, float lastUpdateTime_ = {}) noexcept : playerModel{playerModel_}, code{code_}, serverName{serverName_}, hasPassword{hasPassword_}, currentPlayerCount{currentPlayerCount_}, maxPlayerCount{maxPlayerCount_}, difficulties{difficulties_}, modifiers{modifiers_}, songPacks{songPacks_}, lastUpdateTime{lastUpdateTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayer
    operator GlobalNamespace::INetworkPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayer*>(this);
    }
    // public System.Void .ctor(UnifiedNetworkPlayerModel playerModel, System.String code)
    // Offset: 0x1717F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::UnifiedNetworkServer* New_ctor(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel, ::Il2CppString* code) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::UnifiedNetworkServer*, creationType>(playerModel, code)));
    }
    // public System.Void Update(System.String serverName, System.Boolean hasPassword, System.Int32 currentPlayerCount, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0x1717F70
    void Update(::Il2CppString* serverName, bool hasPassword, int currentPlayerCount, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.String get_code()
    // Offset: 0x171A1BC
    ::Il2CppString* get_code();
    // public System.String get_serverName()
    // Offset: 0x171A1CC
    ::Il2CppString* get_serverName();
    // public System.Boolean get_hasTimedOut()
    // Offset: 0x171A228
    bool get_hasTimedOut();
    // private System.String INetworkPlayer.get_userId()
    // Offset: 0x171A1B4
    // Implemented from: INetworkPlayer
    // Base method: System.String INetworkPlayer::get_userId()
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userId();
    // private System.String INetworkPlayer.get_userName()
    // Offset: 0x171A1C4
    // Implemented from: INetworkPlayer
    // Base method: System.String INetworkPlayer::get_userName()
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0x171A1D4
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMe()
    bool get_isMe();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x171A1DC
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_currentPartySize()
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x171A1E4
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_maxPartySize()
    int get_maxPartySize();
    // public BeatmapDifficultyMask get_difficulties()
    // Offset: 0x171A1EC
    // Implemented from: INetworkPlayer
    // Base method: BeatmapDifficultyMask INetworkPlayer::get_difficulties()
    GlobalNamespace::BeatmapDifficultyMask get_difficulties();
    // public GameplayModifierMask get_modifiers()
    // Offset: 0x171A1F4
    // Implemented from: INetworkPlayer
    // Base method: GameplayModifierMask INetworkPlayer::get_modifiers()
    GlobalNamespace::GameplayModifierMask get_modifiers();
    // public SongPackMask get_songPacks()
    // Offset: 0x171A1FC
    // Implemented from: INetworkPlayer
    // Base method: SongPackMask INetworkPlayer::get_songPacks()
    GlobalNamespace::SongPackMask get_songPacks();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0x171A208
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMyPartyOwner()
    bool get_isMyPartyOwner();
    // public System.Boolean get_isOpenParty()
    // Offset: 0x171A210
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isOpenParty()
    bool get_isOpenParty();
    // public System.Boolean get_isConnected()
    // Offset: 0x171A220
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isConnected()
    bool get_isConnected();
    // public System.Boolean get_isPlayer()
    // Offset: 0x171A25C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isPlayer()
    bool get_isPlayer();
    // public System.Boolean get_isSpectating()
    // Offset: 0x171A264
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isSpectating()
    bool get_isSpectating();
    // public System.Boolean get_isDedicatedServer()
    // Offset: 0x171A26C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isDedicatedServer()
    bool get_isDedicatedServer();
    // public System.Boolean get_canJoin()
    // Offset: 0x171A274
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canJoin()
    bool get_canJoin();
    // public System.Void Join()
    // Offset: 0x171A27C
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join()
    void Join();
    // public System.Boolean get_requiresPassword()
    // Offset: 0x171A2A4
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_requiresPassword()
    bool get_requiresPassword();
    // public System.Void Join(System.String password)
    // Offset: 0x171A2AC
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join(System.String password)
    void Join(::Il2CppString* password);
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0x171A2D4
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnJoin()
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0x171A2DC
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canInvite()
    bool get_canInvite();
    // public System.Void Invite()
    // Offset: 0x171A2E4
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Invite()
    void Invite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0x171A2E8
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnInvite()
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0x171A2F0
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canKick()
    bool get_canKick();
    // public System.Void Kick()
    // Offset: 0x171A2F8
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Kick()
    void Kick();
    // public System.Boolean get_canLeave()
    // Offset: 0x171A2FC
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canLeave()
    bool get_canLeave();
    // public System.Void Leave()
    // Offset: 0x171A304
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Leave()
    void Leave();
    // public System.Boolean get_canBlock()
    // Offset: 0x171A308
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canBlock()
    bool get_canBlock();
    // public System.Void Block()
    // Offset: 0x171A310
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Block()
    void Block();
    // public System.Boolean get_canUnblock()
    // Offset: 0x171A314
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canUnblock()
    bool get_canUnblock();
    // public System.Void Unblock()
    // Offset: 0x171A31C
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Unblock()
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0x171A320
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendJoinResponse(System.Boolean accept)
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0x171A324
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendInviteResponse(System.Boolean accept)
    void SendInviteResponse(bool accept);
  }; // UnifiedNetworkPlayerModel/UnifiedNetworkServer
  #pragma pack(pop)
  static check_size<sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkServer), 72 + sizeof(float)> __GlobalNamespace_UnifiedNetworkPlayerModel_UnifiedNetworkServerSizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkServer) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*, "", "UnifiedNetworkPlayerModel/UnifiedNetworkServer");
