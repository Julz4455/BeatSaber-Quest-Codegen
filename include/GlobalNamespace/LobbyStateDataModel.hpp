// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ILobbyStateDataModel
#include "GlobalNamespace/ILobbyStateDataModel.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IUnifiedNetworkPlayerModel
  class IUnifiedNetworkPlayerModel;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LobbyStateDataModel
  class LobbyStateDataModel : public ::Il2CppObject, public GlobalNamespace::ILobbyStateDataModel, public System::IDisposable {
    public:
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    // Offset: 0x18
    GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel;
    // private System.Collections.Generic.List`1<IConnectedPlayer> _connectedPlayers
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* connectedPlayers;
    // private System.Collections.Generic.Dictionary`2<System.String,IConnectedPlayer> _connectedPlayersById
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::IConnectedPlayer*>* connectedPlayersById;
    // private System.Boolean _isHost
    // Offset: 0x30
    bool isHost;
    // private System.Action`1<IConnectedPlayer> playerConnectedEvent
    // Offset: 0x38
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;
    // private System.Action`1<IConnectedPlayer> playerDisconnectedEvent
    // Offset: 0x40
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;
    // private System.Void HandleMultiplayerSessionManagerPlayerConnected(IConnectedPlayer player)
    // Offset: 0x1039D70
    void HandleMultiplayerSessionManagerPlayerConnected(GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandleMultiplayerSessionManagerPlayerDisconnected(IConnectedPlayer player)
    // Offset: 0x1039E98
    void HandleMultiplayerSessionManagerPlayerDisconnected(GlobalNamespace::IConnectedPlayer* player);
    // public System.Void add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x1038F30
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Void ILobbyStateDataModel::add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x1038FD4
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Void ILobbyStateDataModel::remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x1039078
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Void ILobbyStateDataModel::add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x103911C
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Void ILobbyStateDataModel::remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Boolean get_isConnected()
    // Offset: 0x10391C0
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Boolean ILobbyStateDataModel::get_isConnected()
    bool get_isConnected();
    // public IConnectedPlayer get_localPlayer()
    // Offset: 0x1039274
    // Implemented from: ILobbyStateDataModel
    // Base method: IConnectedPlayer ILobbyStateDataModel::get_localPlayer()
    GlobalNamespace::IConnectedPlayer* get_localPlayer();
    // public System.Collections.Generic.List`1<IConnectedPlayer> get_connectedPlayers()
    // Offset: 0x1039324
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Collections.Generic.List`1<IConnectedPlayer> ILobbyStateDataModel::get_connectedPlayers()
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_rawConnectedPlayers()
    // Offset: 0x103932C
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> ILobbyStateDataModel::get_rawConnectedPlayers()
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* get_rawConnectedPlayers();
    // public System.Boolean get_isHost()
    // Offset: 0x10393E0
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Boolean ILobbyStateDataModel::get_isHost()
    bool get_isHost();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x10393E8
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Int32 ILobbyStateDataModel::get_maxPartySize()
    int get_maxPartySize();
    // public System.Void Activate()
    // Offset: 0x103949C
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Void ILobbyStateDataModel::Activate()
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x1039B4C
    // Implemented from: ILobbyStateDataModel
    // Base method: System.Void ILobbyStateDataModel::Deactivate()
    void Deactivate();
    // public System.Void Dispose()
    // Offset: 0x1039CDC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public IConnectedPlayer GetPlayerById(System.String userId)
    // Offset: 0x1039CE0
    // Implemented from: ILobbyStateDataModel
    // Base method: IConnectedPlayer ILobbyStateDataModel::GetPlayerById(System.String userId)
    GlobalNamespace::IConnectedPlayer* GetPlayerById(::Il2CppString* userId);
    // public System.Void .ctor()
    // Offset: 0x1039FBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LobbyStateDataModel* New_ctor();
  }; // LobbyStateDataModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyStateDataModel*, "", "LobbyStateDataModel");
#pragma pack(pop)
