// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockMultiplayerSessionManager
#include "GlobalNamespace/MockMultiplayerSessionManager.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayer
  class MockPlayer;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: NetworkPacketSerializer`2<TType, TData>
  template<typename TType, typename TData>
  class NetworkPacketSerializer_2;
  // Forward declaring type: MultiplayerAvatarData
  struct MultiplayerAvatarData;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: INetworkPacketSubSerializer`1<TData>
  template<typename TData>
  class INetworkPacketSubSerializer_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager
  // [] Offset: FFFFFFFF
  class MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager : public ::Il2CppObject/*, public GlobalNamespace::IMultiplayerSessionManager*/ {
    public:
    // private MockMultiplayerSessionManager _mockMultiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockMultiplayerSessionManager*) == 0x8);
    // private MockPlayer _player
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockPlayer* player;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayer*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataWriter _writer
    // Size: 0x8
    // Offset: 0x20
    LiteNetLib::Utils::NetDataWriter* writer;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataReader _reader
    // Size: 0x8
    // Offset: 0x28
    LiteNetLib::Utils::NetDataReader* reader;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataReader*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD46240
    // private System.Action connectedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* connectedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD46250
    // private System.Action`1<ConnectionFailedReason> connectionFailedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD46260
    // private System.Action`1<IConnectedPlayer> playerConnectedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD46270
    // private System.Action`1<IConnectedPlayer> playerDisconnectedEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD46280
    // private System.Action`1<IConnectedPlayer> playerStateChangedEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD46290
    // private System.Action`1<DisconnectedReason> disconnectedEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<GlobalNamespace::DisconnectedReason>* disconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::DisconnectedReason>*) == 0x8);
    // private NetworkPacketSerializer`2<MultiplayerSessionManager/MessageType,IConnectedPlayer> _serializer
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>* serializer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // Creating value type constructor for type: MockedPlayerMultiplayerSessionManager
    MockedPlayerMultiplayerSessionManager(GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager_ = {}, GlobalNamespace::MockPlayer* player_ = {}, LiteNetLib::Utils::NetDataWriter* writer_ = {}, LiteNetLib::Utils::NetDataReader* reader_ = {}, System::Action* connectedEvent_ = {}, System::Action_1<GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent_ = {}, System::Action_1<GlobalNamespace::DisconnectedReason>* disconnectedEvent_ = {}, GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>* serializer_ = {}) noexcept : mockMultiplayerSessionManager{mockMultiplayerSessionManager_}, player{player_}, writer{writer_}, reader{reader_}, connectedEvent{connectedEvent_}, connectionFailedEvent{connectionFailedEvent_}, playerConnectedEvent{playerConnectedEvent_}, playerDisconnectedEvent{playerDisconnectedEvent_}, playerStateChangedEvent{playerStateChangedEvent_}, disconnectedEvent{disconnectedEvent_}, serializer{serializer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerSessionManager
    operator GlobalNamespace::IMultiplayerSessionManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerSessionManager*>(this);
    }
    // public System.Void .ctor(MockMultiplayerSessionManager mockMultiplayerSessionManager, MockPlayer player)
    // Offset: 0x10A2034
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager* New_ctor(GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager, GlobalNamespace::MockPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager*, creationType>(mockMultiplayerSessionManager, player)));
    }
    // public System.Void HandlePlayerStateChanged(MockPlayer player)
    // Offset: 0x10A17A0
    void HandlePlayerStateChanged(GlobalNamespace::MockPlayer* player);
    // public System.Void HandlePlayerConnected(MockPlayer connectedPlayer)
    // Offset: 0x10A1884
    void HandlePlayerConnected(GlobalNamespace::MockPlayer* connectedPlayer);
    // public System.Void HandlePlayerDisconnected(MockPlayer connectedPlayer)
    // Offset: 0x10A1924
    void HandlePlayerDisconnected(GlobalNamespace::MockPlayer* connectedPlayer);
    // public System.Void ReceiveMessage(MockPlayer player, LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x10A2258
    void ReceiveMessage(GlobalNamespace::MockPlayer* player, LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void SetLocalPlayerAvatar(MultiplayerAvatarData multiplayerAvatarData)
    // Offset: 0x10A2FB4
    void SetLocalPlayerAvatar(GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData);
    // public IConnectedPlayer get_localPlayer()
    // Offset: 0x10A2614
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::get_localPlayer()
    GlobalNamespace::IConnectedPlayer* get_localPlayer();
    // public IConnectedPlayer get_connectionOwner()
    // Offset: 0x10A261C
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::get_connectionOwner()
    GlobalNamespace::IConnectedPlayer* get_connectionOwner();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x10A2634
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnectionOwner()
    bool get_isConnectionOwner();
    // public System.Single get_syncTime()
    // Offset: 0x10A2650
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Single IMultiplayerSessionManager::get_syncTime()
    float get_syncTime();
    // public System.Boolean get_isSyncTimeInitialized()
    // Offset: 0x10A2684
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isSyncTimeInitialized()
    bool get_isSyncTimeInitialized();
    // public System.Single get_syncTimeDelay()
    // Offset: 0x10A26A0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Single IMultiplayerSessionManager::get_syncTimeDelay()
    float get_syncTimeDelay();
    // public System.Int32 get_maxPlayerCount()
    // Offset: 0x10A26A8
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Int32 IMultiplayerSessionManager::get_maxPlayerCount()
    int get_maxPlayerCount();
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0x10A26C0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Int32 IMultiplayerSessionManager::get_connectedPlayerCount()
    int get_connectedPlayerCount();
    // public System.Boolean get_isConnectingOrConnected()
    // Offset: 0x10A26D8
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnectingOrConnected()
    bool get_isConnectingOrConnected();
    // public System.Boolean get_isConnecting()
    // Offset: 0x10A26E0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnecting()
    bool get_isConnecting();
    // public System.Boolean get_isConnected()
    // Offset: 0x10A26E8
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnected()
    bool get_isConnected();
    // public System.Boolean get_isDisconnecting()
    // Offset: 0x10A26F0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isDisconnecting()
    bool get_isDisconnecting();
    // public System.Boolean get_isSpectating()
    // Offset: 0x10A26F8
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isSpectating()
    bool get_isSpectating();
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_connectedPlayers()
    // Offset: 0x10A2700
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> IMultiplayerSessionManager::get_connectedPlayers()
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();
    // public System.Void add_connectedEvent(System.Action value)
    // Offset: 0x10A271C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_connectedEvent(System.Action value)
    void add_connectedEvent(System::Action* value);
    // public System.Void remove_connectedEvent(System.Action value)
    // Offset: 0x10A27C0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_connectedEvent(System.Action value)
    void remove_connectedEvent(System::Action* value);
    // public System.Void add_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x10A2864
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    void add_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x10A2908
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    void remove_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10A29AC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10A2A50
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10A2AF4
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10A2B98
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10A2C3C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10A2CE0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x10A2D84
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    void add_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x10A2E28
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    void remove_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void SetMaxPlayerCount(System.Int32 maxPlayerCount)
    // Offset: 0x10A2ECC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::SetMaxPlayerCount(System.Int32 maxPlayerCount)
    void SetMaxPlayerCount(int maxPlayerCount);
    // public System.Void StartSession(ConnectedPlayerManager connectedPlayerManager)
    // Offset: 0x10A2ED0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::StartSession(ConnectedPlayerManager connectedPlayerManager)
    void StartSession(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);
    // public System.Void EndSession()
    // Offset: 0x10A2ED4
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::EndSession()
    void EndSession();
    // public IConnectedPlayer GetPlayerByUserId(System.String userId)
    // Offset: 0x10A2ED8
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::GetPlayerByUserId(System.String userId)
    GlobalNamespace::IConnectedPlayer* GetPlayerByUserId(::Il2CppString* userId);
    // public IConnectedPlayer GetConnectedPlayer(System.Int32 index)
    // Offset: 0x10A2EF0
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::GetConnectedPlayer(System.Int32 index)
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayer(int index);
    // public IConnectedPlayer GetConnectedPlayerByUserId(System.String userId)
    // Offset: 0x10A2F08
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::GetConnectedPlayerByUserId(System.String userId)
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayerByUserId(::Il2CppString* userId);
    // public System.Void Disconnect()
    // Offset: 0x10A2F20
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::Disconnect()
    void Disconnect();
    // public System.Void Send(T message)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::Send(T message)
    template<class T>
    void Send(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::Send");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Send", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(message)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, message);
    }
    // public System.Void SendUnreliable(T message)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::SendUnreliable(T message)
    template<class T>
    void SendUnreliable(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::SendUnreliable");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SendUnreliable", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(message)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, message);
    }
    // public System.Void RegisterCallback(MultiplayerSessionManager/MessageType serializerType, System.Action`2<T,IConnectedPlayer> callback, System.Func`1<T> constructor)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::RegisterCallback(MultiplayerSessionManager/MessageType serializerType, System.Action`2<T,IConnectedPlayer> callback, System.Func`1<T> constructor)
    template<class T>
    void RegisterCallback(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, System::Action_2<T, GlobalNamespace::IConnectedPlayer*>* callback, System::Func_1<T>* constructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::RegisterCallback");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RegisterCallback", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(serializerType, callback, constructor)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, serializerType, callback, constructor);
    }
    // public System.Void UnregisterCallback(MultiplayerSessionManager/MessageType serializerType)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::UnregisterCallback(MultiplayerSessionManager/MessageType serializerType)
    template<class T>
    void UnregisterCallback(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::UnregisterCallback");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UnregisterCallback", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(serializerType)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, serializerType);
    }
    // public System.Void SetLocalPlayerState(System.String state, System.Boolean hasState)
    // Offset: 0x10A1EA8
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::SetLocalPlayerState(System.String state, System.Boolean hasState)
    void SetLocalPlayerState(::Il2CppString* state, bool hasState);
    // public System.Boolean LocalPlayerHasState(System.String state)
    // Offset: 0x10A1F5C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::LocalPlayerHasState(System.String state)
    bool LocalPlayerHasState(::Il2CppString* state);
    // public System.Void RegisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0x10A1574
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::RegisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    void RegisterSerializer(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void UnregisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0x10A15FC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::UnregisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    void UnregisterSerializer(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void PerformAtSyncTime(System.Single syncTime, System.Action action)
    // Offset: 0x10A3020
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::PerformAtSyncTime(System.Single syncTime, System.Action action)
    void PerformAtSyncTime(float syncTime, System::Action* action);
  }; // MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager
  #pragma pack(pop)
  static check_size<sizeof(MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager), 96 + sizeof(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>*)> __GlobalNamespace_MockMultiplayerSessionManager_MockedPlayerMultiplayerSessionManagerSizeCheck;
  static_assert(sizeof(MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager*, "", "MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager");
