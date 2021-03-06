// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ConnectedPlayerManager
#include "GlobalNamespace/ConnectedPlayerManager.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
// Including type: BloomFilter
#include "GlobalNamespace/BloomFilter.hpp"
// Including type: MultiplayerAvatarData
#include "GlobalNamespace/MultiplayerAvatarData.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnection
  class IConnection;
  // Forward declaring type: RollingAverage
  class RollingAverage;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerManager/ConnectedPlayer
  // [] Offset: FFFFFFFF
  class ConnectedPlayerManager::ConnectedPlayer : public ::Il2CppObject/*, public GlobalNamespace::IConnectedPlayer*/ {
    public:
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _isMe
    // Size: 0x1
    // Offset: 0x20
    bool isMe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Boolean _isConnectionOwner
    // Size: 0x1
    // Offset: 0x21
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConnectionOwner and: manager
    char __padding3[0x6] = {};
    // private readonly ConnectedPlayerManager _manager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ConnectedPlayerManager* manager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConnectedPlayerManager*) == 0x8);
    // private readonly IConnection _connection
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IConnection* connection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnection*) == 0x8);
    // private readonly ConnectedPlayerManager/ConnectedPlayer _parent
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* parent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*) == 0x8);
    // private readonly System.Byte _connectionId
    // Size: 0x1
    // Offset: 0x40
    uint8_t connectionId;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private readonly System.Byte _remoteConnectionId
    // Size: 0x1
    // Offset: 0x41
    uint8_t remoteConnectionId;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: remoteConnectionId and: sortIndex
    char __padding8[0x2] = {};
    // private System.Int32 _sortIndex
    // Size: 0x4
    // Offset: 0x44
    int sortIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _isConnected
    // Size: 0x1
    // Offset: 0x48
    bool isConnected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConnected and: disconnectedReason
    char __padding10[0x3] = {};
    // private DisconnectedReason _disconnectedReason
    // Size: 0x4
    // Offset: 0x4C
    GlobalNamespace::DisconnectedReason disconnectedReason;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DisconnectedReason) == 0x4);
    // private System.Boolean _isKicked
    // Size: 0x1
    // Offset: 0x50
    bool isKicked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isKicked and: playerState
    char __padding12[0x7] = {};
    // private BloomFilter _playerState
    // Size: 0x10
    // Offset: 0x58
    GlobalNamespace::BloomFilter playerState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFilter) == 0x10);
    // private MultiplayerAvatarData _playerAvatar
    // Size: 0x70
    // Offset: 0x68
    GlobalNamespace::MultiplayerAvatarData playerAvatar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerAvatarData) == 0x70);
    // private readonly RollingAverage _latency
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::RollingAverage* latency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RollingAverage*) == 0x8);
    // Creating value type constructor for type: ConnectedPlayer
    ConnectedPlayer(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool isMe_ = {}, bool isConnectionOwner_ = {}, GlobalNamespace::ConnectedPlayerManager* manager_ = {}, GlobalNamespace::IConnection* connection_ = {}, GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* parent_ = {}, uint8_t connectionId_ = {}, uint8_t remoteConnectionId_ = {}, int sortIndex_ = {}, bool isConnected_ = {}, GlobalNamespace::DisconnectedReason disconnectedReason_ = {}, bool isKicked_ = {}, GlobalNamespace::BloomFilter playerState_ = {}, GlobalNamespace::MultiplayerAvatarData playerAvatar_ = {}, GlobalNamespace::RollingAverage* latency_ = {}) noexcept : userId{userId_}, userName{userName_}, isMe{isMe_}, isConnectionOwner{isConnectionOwner_}, manager{manager_}, connection{connection_}, parent{parent_}, connectionId{connectionId_}, remoteConnectionId{remoteConnectionId_}, sortIndex{sortIndex_}, isConnected{isConnected_}, disconnectedReason{disconnectedReason_}, isKicked{isKicked_}, playerState{playerState_}, playerAvatar{playerAvatar_}, latency{latency_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnectedPlayer
    operator GlobalNamespace::IConnectedPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectedPlayer*>(this);
    }
    // static field const value: static private System.Single kFixedOffset
    static constexpr const float kFixedOffset = 0.06;
    // Get static field: static private System.Single kFixedOffset
    static float _get_kFixedOffset();
    // Set static field: static private System.Single kFixedOffset
    static void _set_kFixedOffset(float value);
    // public IConnection get_connection()
    // Offset: 0x11D0AE8
    GlobalNamespace::IConnection* get_connection();
    // public System.Byte get_connectionId()
    // Offset: 0x11D0AF0
    uint8_t get_connectionId();
    // public System.Byte get_remoteConnectionId()
    // Offset: 0x11D0AF8
    uint8_t get_remoteConnectionId();
    // public System.Boolean get_isDirectConnection()
    // Offset: 0x11CC1F0
    bool get_isDirectConnection();
    // private System.Void .ctor(ConnectedPlayerManager manager, System.Byte connectionId, System.Byte remoteConnectionId, IConnection connection, ConnectedPlayerManager/ConnectedPlayer parent, System.String userId, System.String userName, System.Boolean isConnectionOwner, System.Boolean isMe)
    // Offset: 0x11D0C24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayerManager::ConnectedPlayer* New_ctor(GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId, GlobalNamespace::IConnection* connection, GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* parent, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner, bool isMe) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayerManager::ConnectedPlayer*, creationType>(manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner, isMe)));
    }
    // static public ConnectedPlayerManager/ConnectedPlayer CreateLocalPlayer(ConnectedPlayerManager manager, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x11CE610
    static GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* CreateLocalPlayer(GlobalNamespace::ConnectedPlayerManager* manager, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner);
    // static public ConnectedPlayerManager/ConnectedPlayer CreateDirectlyConnectedPlayer(ConnectedPlayerManager manager, System.Byte connectionId, IConnection connection)
    // Offset: 0x11CF548
    static GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* CreateDirectlyConnectedPlayer(GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, GlobalNamespace::IConnection* connection);
    // static public ConnectedPlayerManager/ConnectedPlayer CreateRemoteConnectedPlayer(ConnectedPlayerManager manager, System.Byte connectionId, ConnectedPlayerManager/PlayerConnectedPacket packet, ConnectedPlayerManager/ConnectedPlayer parent)
    // Offset: 0x11D011C
    static GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* CreateRemoteConnectedPlayer(GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket* packet, GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer* parent);
    // public ConnectedPlayerManager/PlayerConnectedPacket GetPlayerConnectedPacket()
    // Offset: 0x11CC04C
    GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket* GetPlayerConnectedPacket();
    // public ConnectedPlayerManager/PlayerStatePacket GetPlayerStatePacket()
    // Offset: 0x11CC36C
    GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket* GetPlayerStatePacket();
    // public ConnectedPlayerManager/PlayerSortOrderPacket GetPlayerSortOrderPacket()
    // Offset: 0x11CC2F0
    GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket* GetPlayerSortOrderPacket();
    // public System.Void Disconnect(DisconnectedReason disconnectedReason)
    // Offset: 0x11CB9C0
    void Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // public System.Void UpdateLatency(System.Single latency)
    // Offset: 0x11CF814
    void UpdateLatency(float latency);
    // public System.Boolean UpdateSortIndex(System.Int32 index)
    // Offset: 0x11CF420
    bool UpdateSortIndex(int index);
    // public System.Void SetKicked()
    // Offset: 0x11CF188
    void SetKicked();
    // public System.Void UpdateState(ConnectedPlayerManager/PlayerStatePacket packet)
    // Offset: 0x11D0324
    void UpdateState(GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket* packet);
    // public System.Void SetPlayerState(BloomFilter bloomFilter)
    // Offset: 0x11D0E78
    void SetPlayerState(GlobalNamespace::BloomFilter bloomFilter);
    // public System.Void SetPlayerAvatar(MultiplayerAvatarData avatarData)
    // Offset: 0x11D0E80
    void SetPlayerAvatar(GlobalNamespace::MultiplayerAvatarData avatarData);
    // public System.Boolean get_isConnected()
    // Offset: 0x11D0B00
    // Implemented from: IConnectedPlayer
    // Base method: System.Boolean IConnectedPlayer::get_isConnected()
    bool get_isConnected();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x11D0B08
    // Implemented from: IConnectedPlayer
    // Base method: System.Boolean IConnectedPlayer::get_isConnectionOwner()
    bool get_isConnectionOwner();
    // public System.Boolean get_isKicked()
    // Offset: 0x11D0B10
    // Implemented from: IConnectedPlayer
    // Base method: System.Boolean IConnectedPlayer::get_isKicked()
    bool get_isKicked();
    // public DisconnectedReason get_disconnectedReason()
    // Offset: 0x11D0B18
    // Implemented from: IConnectedPlayer
    // Base method: DisconnectedReason IConnectedPlayer::get_disconnectedReason()
    GlobalNamespace::DisconnectedReason get_disconnectedReason();
    // public System.Int32 get_sortIndex()
    // Offset: 0x11D0B20
    // Implemented from: IConnectedPlayer
    // Base method: System.Int32 IConnectedPlayer::get_sortIndex()
    int get_sortIndex();
    // public System.String get_userId()
    // Offset: 0x11D0B28
    // Implemented from: IConnectedPlayer
    // Base method: System.String IConnectedPlayer::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x11D0B30
    // Implemented from: IConnectedPlayer
    // Base method: System.String IConnectedPlayer::get_userName()
    ::Il2CppString* get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0x11D0B38
    // Implemented from: IConnectedPlayer
    // Base method: System.Boolean IConnectedPlayer::get_isMe()
    bool get_isMe();
    // public System.Single get_currentLatency()
    // Offset: 0x11CF830
    // Implemented from: IConnectedPlayer
    // Base method: System.Single IConnectedPlayer::get_currentLatency()
    float get_currentLatency();
    // public System.Single get_offsetSyncTime()
    // Offset: 0x11D0B40
    // Implemented from: IConnectedPlayer
    // Base method: System.Single IConnectedPlayer::get_offsetSyncTime()
    float get_offsetSyncTime();
    // public MultiplayerAvatarData get_multiplayerAvatarData()
    // Offset: 0x11D0C14
    // Implemented from: IConnectedPlayer
    // Base method: MultiplayerAvatarData IConnectedPlayer::get_multiplayerAvatarData()
    GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData();
    // public System.Boolean HasState(System.String state)
    // Offset: 0x11D0E38
    // Implemented from: IConnectedPlayer
    // Base method: System.Boolean IConnectedPlayer::HasState(System.String state)
    bool HasState(::Il2CppString* state);
    // public override System.String ToString()
    // Offset: 0x11D0EB0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // ConnectedPlayerManager/ConnectedPlayer
  #pragma pack(pop)
  static check_size<sizeof(ConnectedPlayerManager::ConnectedPlayer), 216 + sizeof(GlobalNamespace::RollingAverage*)> __GlobalNamespace_ConnectedPlayerManager_ConnectedPlayerSizeCheck;
  static_assert(sizeof(ConnectedPlayerManager::ConnectedPlayer) == 0xE0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerManager::ConnectedPlayer*, "", "ConnectedPlayerManager/ConnectedPlayer");
