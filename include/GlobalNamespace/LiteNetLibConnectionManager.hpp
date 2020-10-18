// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IConnectionManager
#include "GlobalNamespace/IConnectionManager.hpp"
// Including type: LiteNetLib.INetEventListener
#include "LiteNetLib/INetEventListener.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketEncryptionLayer
  class PacketEncryptionLayer;
  // Forward declaring type: IConnection
  class IConnection;
  // Forward declaring type: IConnectionInitParams`1<T>
  template<typename T>
  class IConnectionInitParams_1;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetManager
  class NetManager;
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: ConnectionRequest
  class ConnectionRequest;
  // Forward declaring type: DisconnectReason
  struct DisconnectReason;
  // Forward declaring type: DisconnectInfo
  struct DisconnectInfo;
  // Forward declaring type: NetPacketReader
  class NetPacketReader;
  // Forward declaring type: UnconnectedMessageType
  struct UnconnectedMessageType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketError
  struct SocketError;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LiteNetLibConnectionManager
  class LiteNetLibConnectionManager : public ::Il2CppObject, public GlobalNamespace::IConnectionManager, public LiteNetLib::INetEventListener {
    public:
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::NetworkMode
    struct NetworkMode;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::ConnectionState
    struct ConnectionState;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase
    class LiteNetLibConnectionParamsBase;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::StartServerParams
    class StartServerParams;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::StartRelayParams
    class StartRelayParams;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::StartClientParams
    class StartClientParams;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::ConnectToServerParams
    class ConnectToServerParams;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest
    class NetPeerConnectionRequest;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection
    class NetPeerConnection;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::$$c
    class $$c;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::$BackgroundDisconnectSentry$d__113
    struct $BackgroundDisconnectSentry$d__113;
    // Nested type: GlobalNamespace::LiteNetLibConnectionManager::$BackgroundShutdownSentry$d__114
    struct $BackgroundShutdownSentry$d__114;
    // Autogenerated type: LiteNetLibConnectionManager/NetworkMode
    struct NetworkMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: NetworkMode
      constexpr NetworkMode(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LiteNetLibConnectionManager/NetworkMode None
      static constexpr const int None = 0;
      // Get static field: static public LiteNetLibConnectionManager/NetworkMode None
      static GlobalNamespace::LiteNetLibConnectionManager::NetworkMode _get_None();
      // Set static field: static public LiteNetLibConnectionManager/NetworkMode None
      static void _set_None(GlobalNamespace::LiteNetLibConnectionManager::NetworkMode value);
      // static field const value: static public LiteNetLibConnectionManager/NetworkMode Client
      static constexpr const int Client = 1;
      // Get static field: static public LiteNetLibConnectionManager/NetworkMode Client
      static GlobalNamespace::LiteNetLibConnectionManager::NetworkMode _get_Client();
      // Set static field: static public LiteNetLibConnectionManager/NetworkMode Client
      static void _set_Client(GlobalNamespace::LiteNetLibConnectionManager::NetworkMode value);
      // static field const value: static public LiteNetLibConnectionManager/NetworkMode Server
      static constexpr const int Server = 2;
      // Get static field: static public LiteNetLibConnectionManager/NetworkMode Server
      static GlobalNamespace::LiteNetLibConnectionManager::NetworkMode _get_Server();
      // Set static field: static public LiteNetLibConnectionManager/NetworkMode Server
      static void _set_Server(GlobalNamespace::LiteNetLibConnectionManager::NetworkMode value);
      // static field const value: static public LiteNetLibConnectionManager/NetworkMode Relay
      static constexpr const int Relay = 3;
      // Get static field: static public LiteNetLibConnectionManager/NetworkMode Relay
      static GlobalNamespace::LiteNetLibConnectionManager::NetworkMode _get_Relay();
      // Set static field: static public LiteNetLibConnectionManager/NetworkMode Relay
      static void _set_Relay(GlobalNamespace::LiteNetLibConnectionManager::NetworkMode value);
    }; // LiteNetLibConnectionManager/NetworkMode
    // Autogenerated type: LiteNetLibConnectionManager/ConnectionState
    struct ConnectionState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: ConnectionState
      constexpr ConnectionState(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LiteNetLibConnectionManager/ConnectionState Unconnected
      static constexpr const int Unconnected = 0;
      // Get static field: static public LiteNetLibConnectionManager/ConnectionState Unconnected
      static GlobalNamespace::LiteNetLibConnectionManager::ConnectionState _get_Unconnected();
      // Set static field: static public LiteNetLibConnectionManager/ConnectionState Unconnected
      static void _set_Unconnected(GlobalNamespace::LiteNetLibConnectionManager::ConnectionState value);
      // static field const value: static public LiteNetLibConnectionManager/ConnectionState Connecting
      static constexpr const int Connecting = 1;
      // Get static field: static public LiteNetLibConnectionManager/ConnectionState Connecting
      static GlobalNamespace::LiteNetLibConnectionManager::ConnectionState _get_Connecting();
      // Set static field: static public LiteNetLibConnectionManager/ConnectionState Connecting
      static void _set_Connecting(GlobalNamespace::LiteNetLibConnectionManager::ConnectionState value);
      // static field const value: static public LiteNetLibConnectionManager/ConnectionState Connected
      static constexpr const int Connected = 2;
      // Get static field: static public LiteNetLibConnectionManager/ConnectionState Connected
      static GlobalNamespace::LiteNetLibConnectionManager::ConnectionState _get_Connected();
      // Set static field: static public LiteNetLibConnectionManager/ConnectionState Connected
      static void _set_Connected(GlobalNamespace::LiteNetLibConnectionManager::ConnectionState value);
    }; // LiteNetLibConnectionManager/ConnectionState
    // private readonly LiteNetLib.NetManager _netManager
    // Offset: 0x10
    LiteNetLib::NetManager* netManager;
    // private readonly PacketEncryptionLayer _encryptionLayer
    // Offset: 0x18
    GlobalNamespace::PacketEncryptionLayer* encryptionLayer;
    // private readonly System.Collections.Generic.List`1<LiteNetLibConnectionManager/NetPeerConnection> _connections
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>* connections;
    // private readonly System.Collections.Generic.List`1<LiteNetLibConnectionManager/NetPeerConnection> _pendingConnections
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>* pendingConnections;
    // private readonly System.Collections.Generic.List`1<LiteNetLibConnectionManager/NetPeerConnectionRequest> _pendingRequests
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*>* pendingRequests;
    // private readonly System.Collections.Generic.HashSet`1<System.Net.IPEndPoint> _pendingReconnections
    // Offset: 0x38
    System::Collections::Generic::HashSet_1<System::Net::IPEndPoint*>* pendingReconnections;
    // private System.String _userId
    // Offset: 0x40
    ::Il2CppString* userId;
    // private System.String _userName
    // Offset: 0x48
    ::Il2CppString* userName;
    // private System.String _secret
    // Offset: 0x50
    ::Il2CppString* secret;
    // private LiteNetLibConnectionManager/NetworkMode _mode
    // Offset: 0x58
    GlobalNamespace::LiteNetLibConnectionManager::NetworkMode mode;
    // private LiteNetLibConnectionManager/ConnectionState _connectionState
    // Offset: 0x5C
    GlobalNamespace::LiteNetLibConnectionManager::ConnectionState connectionState;
    // private System.Threading.CancellationTokenSource _backgroundSentryDisconnectCts
    // Offset: 0x60
    System::Threading::CancellationTokenSource* backgroundSentryDisconnectCts;
    // private System.Threading.CancellationTokenSource _backgroundSentryShutdownCts
    // Offset: 0x68
    System::Threading::CancellationTokenSource* backgroundSentryShutdownCts;
    // private System.Boolean _sentryDisconnected
    // Offset: 0x70
    bool sentryDisconnected;
    // private System.Boolean _sentryShutdown
    // Offset: 0x71
    bool sentryShutdown;
    // private System.Int64 _lastPollUpdateTime
    // Offset: 0x78
    int64_t lastPollUpdateTime;
    // private System.Action onConnectedEvent
    // Offset: 0x80
    System::Action* onConnectedEvent;
    // private System.Action`1<DisconnectedReason> onDisconnectedEvent
    // Offset: 0x88
    System::Action_1<GlobalNamespace::DisconnectedReason>* onDisconnectedEvent;
    // private System.Action`1<ConnectionFailedReason> onConnectionFailedEvent
    // Offset: 0x90
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* onConnectionFailedEvent;
    // private System.Action`1<IConnection> onConnectionConnectedEvent
    // Offset: 0x98
    System::Action_1<GlobalNamespace::IConnection*>* onConnectionConnectedEvent;
    // private System.Action`1<IConnection> onConnectionDisconnectedEvent
    // Offset: 0xA0
    System::Action_1<GlobalNamespace::IConnection*>* onConnectionDisconnectedEvent;
    // private System.Action`2<IConnection,System.Single> onLatencyUpdatedEvent
    // Offset: 0xA8
    System::Action_2<GlobalNamespace::IConnection*, float>* onLatencyUpdatedEvent;
    // private System.Action`3<IConnection,LiteNetLib.Utils.NetDataReader,LiteNetLib.DeliveryMethod> onReceivedDataEvent
    // Offset: 0xB0
    System::Action_3<GlobalNamespace::IConnection*, LiteNetLib::Utils::NetDataReader*, LiteNetLib::DeliveryMethod>* onReceivedDataEvent;
    // private System.Action`2<System.Net.IPEndPoint,LiteNetLib.Utils.NetDataReader> onReceiveUnconnectedDataEvent
    // Offset: 0xB8
    System::Action_2<System::Net::IPEndPoint*, LiteNetLib::Utils::NetDataReader*>* onReceiveUnconnectedDataEvent;
    // static field const value: static private System.Int64 kBackgroundDisconnectTimeout
    static constexpr const int64_t kBackgroundDisconnectTimeout = 1200000000;
    // Get static field: static private System.Int64 kBackgroundDisconnectTimeout
    static int64_t _get_kBackgroundDisconnectTimeout();
    // Set static field: static private System.Int64 kBackgroundDisconnectTimeout
    static void _set_kBackgroundDisconnectTimeout(int64_t value);
    // static field const value: static private System.Int64 kBackgroundShutdownTimeout
    static constexpr const int64_t kBackgroundShutdownTimeout = 9000000000;
    // Get static field: static private System.Int64 kBackgroundShutdownTimeout
    static int64_t _get_kBackgroundShutdownTimeout();
    // Set static field: static private System.Int64 kBackgroundShutdownTimeout
    static void _set_kBackgroundShutdownTimeout(int64_t value);
    // public System.Void add_onReceiveUnconnectedDataEvent(System.Action`2<System.Net.IPEndPoint,LiteNetLib.Utils.NetDataReader> value)
    // Offset: 0x116658C
    void add_onReceiveUnconnectedDataEvent(System::Action_2<System::Net::IPEndPoint*, LiteNetLib::Utils::NetDataReader*>* value);
    // public System.Void remove_onReceiveUnconnectedDataEvent(System.Action`2<System.Net.IPEndPoint,LiteNetLib.Utils.NetDataReader> value)
    // Offset: 0x1166630
    void remove_onReceiveUnconnectedDataEvent(System::Action_2<System::Net::IPEndPoint*, LiteNetLib::Utils::NetDataReader*>* value);
    // public System.Boolean get_hasConnectionOwner()
    // Offset: 0x1166714
    bool get_hasConnectionOwner();
    // public System.Boolean get_isRelay()
    // Offset: 0x1166820
    bool get_isRelay();
    // public System.Boolean get_isServer()
    // Offset: 0x1166830
    bool get_isServer();
    // public System.Boolean get_isClient()
    // Offset: 0x1166840
    bool get_isClient();
    // public System.String get_secret()
    // Offset: 0x11668B0
    ::Il2CppString* get_secret();
    // public System.Int32 get_port()
    // Offset: 0x11668B8
    int get_port();
    // public PacketEncryptionLayer get_encryptionLayer()
    // Offset: 0x11668D4
    GlobalNamespace::PacketEncryptionLayer* get_encryptionLayer();
    // public System.Void SendUnconnectedMessage(LiteNetLib.Utils.NetDataWriter writer, System.Net.IPEndPoint endPoint)
    // Offset: 0x1166B50
    void SendUnconnectedMessage(LiteNetLib::Utils::NetDataWriter* writer, System::Net::IPEndPoint* endPoint);
    // public System.Void SendUnconnectedMessage(System.Byte[] message, System.Int32 offset, System.Int32 length, System.Net.IPEndPoint endPoint)
    // Offset: 0x1166B6C
    void SendUnconnectedMessage(::Array<uint8_t>* message, int offset, int length, System::Net::IPEndPoint* endPoint);
    // public System.Void SetSecret(System.String secret)
    // Offset: 0x1166C8C
    void SetSecret(::Il2CppString* secret);
    // public System.Void ConnectToEndPoint(System.Net.IPEndPoint remoteEndPoint, System.String remoteUserId, System.String remoteUserName, System.Boolean remoteUserIsConnectionOwner)
    // Offset: 0x1166C94
    void ConnectToEndPoint(System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* remoteUserId, ::Il2CppString* remoteUserName, bool remoteUserIsConnectionOwner);
    // private System.Void DisconnectInternal(DisconnectedReason disconnectedReason, ConnectionFailedReason connectionFailedReason)
    // Offset: 0x1166F14
    void DisconnectInternal(GlobalNamespace::DisconnectedReason disconnectedReason, GlobalNamespace::ConnectionFailedReason connectionFailedReason);
    // private System.Boolean TryStartNetManager(System.Int32 port, System.Boolean enableBackgroundSentry)
    // Offset: 0x1166FEC
    bool TryStartNetManager(int port, bool enableBackgroundSentry);
    // private System.Void StartBackgroundSentry()
    // Offset: 0x11670E4
    void StartBackgroundSentry();
    // private System.Void CheckSentryState()
    // Offset: 0x1166C30
    void CheckSentryState();
    // public System.Boolean IsConnectedToUser(System.String userId)
    // Offset: 0x11672FC
    bool IsConnectedToUser(::Il2CppString* userId);
    // public System.Boolean HasConnectionToEndPoint(System.Net.IPEndPoint endPoint)
    // Offset: 0x11673B0
    bool HasConnectionToEndPoint(System::Net::IPEndPoint* endPoint);
    // private System.Boolean HasPendingConnectionToEndPoint(System.Net.IPEndPoint endPoint)
    // Offset: 0x116746C
    bool HasPendingConnectionToEndPoint(System::Net::IPEndPoint* endPoint);
    // private LiteNetLibConnectionManager/NetPeerConnection GetConnection(LiteNetLib.NetPeer peer)
    // Offset: 0x11679AC
    GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection* GetConnection(LiteNetLib::NetPeer* peer);
    // private System.Void AcceptAllPendingRequests()
    // Offset: 0x1167748
    void AcceptAllPendingRequests();
    // private System.Void TryAccept(LiteNetLib.ConnectionRequest request, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x1167C58
    void TryAccept(LiteNetLib::ConnectionRequest* request, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner);
    // private System.Void CreatePendingConnection(LiteNetLib.NetPeer peer, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x1166DD0
    void CreatePendingConnection(LiteNetLib::NetPeer* peer, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner);
    // private System.Void RemoveConnection(LiteNetLib.NetPeer netPeer, LiteNetLib.DisconnectReason reason)
    // Offset: 0x1167E74
    void RemoveConnection(LiteNetLib::NetPeer* netPeer, LiteNetLib::DisconnectReason reason);
    // private System.Void TryDisconnect(LiteNetLib.DisconnectReason reason)
    // Offset: 0x1167D54
    void TryDisconnect(LiteNetLib::DisconnectReason reason);
    // private LiteNetLib.Utils.NetDataWriter GetConnectionMessage()
    // Offset: 0x1166D20
    LiteNetLib::Utils::NetDataWriter* GetConnectionMessage();
    // private System.Boolean ParseConnectionMessage(LiteNetLib.Utils.NetDataReader reader, out System.String secret, out System.String userId, out System.String userName, out System.Boolean isConnectionOwner)
    // Offset: 0x1167B90
    bool ParseConnectionMessage(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppString*& secret, ::Il2CppString*& userId, ::Il2CppString*& userName, bool& isConnectionOwner);
    // private System.Threading.Tasks.Task BackgroundDisconnectSentry()
    // Offset: 0x116827C
    System::Threading::Tasks::Task* BackgroundDisconnectSentry();
    // private System.Threading.Tasks.Task BackgroundShutdownSentry()
    // Offset: 0x11683A4
    System::Threading::Tasks::Task* BackgroundShutdownSentry();
    // private System.Void Log(System.String msg)
    // Offset: 0x11684CC
    void Log(::Il2CppString* msg);
    // private System.Void LogError(System.String msg)
    // Offset: 0x1167890
    void LogError(::Il2CppString* msg);
    // public System.Void add_onConnectedEvent(System.Action value)
    // Offset: 0x1165C94
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::add_onConnectedEvent(System.Action value)
    void add_onConnectedEvent(System::Action* value);
    // public System.Void remove_onConnectedEvent(System.Action value)
    // Offset: 0x1165D38
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::remove_onConnectedEvent(System.Action value)
    void remove_onConnectedEvent(System::Action* value);
    // public System.Void add_onDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x1165DDC
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::add_onDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    void add_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_onDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x1165E80
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::remove_onDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    void remove_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void add_onConnectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x1165F24
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::add_onConnectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    void add_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_onConnectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x1165FC8
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::remove_onConnectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    void remove_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void add_onConnectionConnectedEvent(System.Action`1<IConnection> value)
    // Offset: 0x116606C
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::add_onConnectionConnectedEvent(System.Action`1<IConnection> value)
    void add_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection*>* value);
    // public System.Void remove_onConnectionConnectedEvent(System.Action`1<IConnection> value)
    // Offset: 0x1166110
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::remove_onConnectionConnectedEvent(System.Action`1<IConnection> value)
    void remove_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection*>* value);
    // public System.Void add_onConnectionDisconnectedEvent(System.Action`1<IConnection> value)
    // Offset: 0x11661B4
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::add_onConnectionDisconnectedEvent(System.Action`1<IConnection> value)
    void add_onConnectionDisconnectedEvent(System::Action_1<GlobalNamespace::IConnection*>* value);
    // public System.Void remove_onConnectionDisconnectedEvent(System.Action`1<IConnection> value)
    // Offset: 0x1166258
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::remove_onConnectionDisconnectedEvent(System.Action`1<IConnection> value)
    void remove_onConnectionDisconnectedEvent(System::Action_1<GlobalNamespace::IConnection*>* value);
    // public System.Void add_onLatencyUpdatedEvent(System.Action`2<IConnection,System.Single> value)
    // Offset: 0x11662FC
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::add_onLatencyUpdatedEvent(System.Action`2<IConnection,System.Single> value)
    void add_onLatencyUpdatedEvent(System::Action_2<GlobalNamespace::IConnection*, float>* value);
    // public System.Void remove_onLatencyUpdatedEvent(System.Action`2<IConnection,System.Single> value)
    // Offset: 0x11663A0
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::remove_onLatencyUpdatedEvent(System.Action`2<IConnection,System.Single> value)
    void remove_onLatencyUpdatedEvent(System::Action_2<GlobalNamespace::IConnection*, float>* value);
    // public System.Void add_onReceivedDataEvent(System.Action`3<IConnection,LiteNetLib.Utils.NetDataReader,LiteNetLib.DeliveryMethod> value)
    // Offset: 0x1166444
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::add_onReceivedDataEvent(System.Action`3<IConnection,LiteNetLib.Utils.NetDataReader,LiteNetLib.DeliveryMethod> value)
    void add_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection*, LiteNetLib::Utils::NetDataReader*, LiteNetLib::DeliveryMethod>* value);
    // public System.Void remove_onReceivedDataEvent(System.Action`3<IConnection,LiteNetLib.Utils.NetDataReader,LiteNetLib.DeliveryMethod> value)
    // Offset: 0x11664E8
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::remove_onReceivedDataEvent(System.Action`3<IConnection,LiteNetLib.Utils.NetDataReader,LiteNetLib.DeliveryMethod> value)
    void remove_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection*, LiteNetLib::Utils::NetDataReader*, LiteNetLib::DeliveryMethod>* value);
    // public System.String get_userId()
    // Offset: 0x11666D4
    // Implemented from: IConnectionManager
    // Base method: System.String IConnectionManager::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x11666DC
    // Implemented from: IConnectionManager
    // Base method: System.String IConnectionManager::get_userName()
    ::Il2CppString* get_userName();
    // public System.Boolean get_isConnected()
    // Offset: 0x11666E4
    // Implemented from: IConnectionManager
    // Base method: System.Boolean IConnectionManager::get_isConnected()
    bool get_isConnected();
    // public System.Boolean get_isConnecting()
    // Offset: 0x11666F4
    // Implemented from: IConnectionManager
    // Base method: System.Boolean IConnectionManager::get_isConnecting()
    bool get_isConnecting();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x1166704
    // Implemented from: IConnectionManager
    // Base method: System.Boolean IConnectionManager::get_isConnectionOwner()
    bool get_isConnectionOwner();
    // public System.Boolean get_isDisposed()
    // Offset: 0x1166850
    // Implemented from: IConnectionManager
    // Base method: System.Boolean IConnectionManager::get_isDisposed()
    bool get_isDisposed();
    // public System.Int32 get_connectionCount()
    // Offset: 0x1166860
    // Implemented from: IConnectionManager
    // Base method: System.Int32 IConnectionManager::get_connectionCount()
    int get_connectionCount();
    // public System.Void .ctor()
    // Offset: 0x11668DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LiteNetLibConnectionManager* New_ctor();
    // public System.Void SendToAll(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x1166A7C
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::SendToAll(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    void SendToAll(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void SendToAll(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod, IConnection excludingConnection)
    // Offset: 0x1166A98
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::SendToAll(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod, IConnection excludingConnection)
    void SendToAll(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod, GlobalNamespace::IConnection* excludingConnection);
    // public System.Void PollUpdate()
    // Offset: 0x1166B88
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::PollUpdate()
    void PollUpdate();
    // public System.Boolean Init(IConnectionInitParams`1<T> initParams)
    // Offset: 0xFFFFFFFF
    // Implemented from: IConnectionManager
    // Base method: System.Boolean IConnectionManager::Init(IConnectionInitParams`1<T> initParams)
    template<class T>
    bool Init(GlobalNamespace::IConnectionInitParams_1<T>* initParams) {
      static_assert(std::is_base_of_v<GlobalNamespace::IConnectionManager, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>(this, "Init", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, initParams)));
    }
    // public System.Void Dispose()
    // Offset: 0x1166EB0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void Disconnect(DisconnectedReason disconnectedReason)
    // Offset: 0x1166F0C
    // Implemented from: IConnectionManager
    // Base method: System.Void IConnectionManager::Disconnect(DisconnectedReason disconnectedReason)
    void Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // public IConnection GetConnection(System.Int32 index)
    // Offset: 0x1167284
    // Implemented from: IConnectionManager
    // Base method: IConnection IConnectionManager::GetConnection(System.Int32 index)
    GlobalNamespace::IConnection* GetConnection(int index);
    // private System.Void LiteNetLib.INetEventListener.OnPeerConnected(LiteNetLib.NetPeer peer)
    // Offset: 0x1167528
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnPeerConnected(LiteNetLib.NetPeer peer)
    void LiteNetLib_INetEventListener_OnPeerConnected(LiteNetLib::NetPeer* peer);
    // private System.Void LiteNetLib.INetEventListener.OnNetworkError(System.Net.IPEndPoint endPoint, System.Net.Sockets.SocketError socketErrorCode)
    // Offset: 0x116780C
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnNetworkError(System.Net.IPEndPoint endPoint, System.Net.Sockets.SocketError socketErrorCode)
    void LiteNetLib_INetEventListener_OnNetworkError(System::Net::IPEndPoint* endPoint, System::Net::Sockets::SocketError socketErrorCode);
    // private System.Void LiteNetLib.INetEventListener.OnNetworkLatencyUpdate(LiteNetLib.NetPeer peer, System.Int32 latencyMs)
    // Offset: 0x1167914
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnNetworkLatencyUpdate(LiteNetLib.NetPeer peer, System.Int32 latencyMs)
    void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(LiteNetLib::NetPeer* peer, int latencyMs);
    // private System.Void LiteNetLib.INetEventListener.OnConnectionRequest(LiteNetLib.ConnectionRequest request)
    // Offset: 0x1167A84
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnConnectionRequest(LiteNetLib.ConnectionRequest request)
    void LiteNetLib_INetEventListener_OnConnectionRequest(LiteNetLib::ConnectionRequest* request);
    // private System.Void LiteNetLib.INetEventListener.OnPeerDisconnected(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo)
    // Offset: 0x1167E14
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnPeerDisconnected(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo)
    void LiteNetLib_INetEventListener_OnPeerDisconnected(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo);
    // private System.Void LiteNetLib.INetEventListener.OnNetworkReceive(LiteNetLib.NetPeer peer, LiteNetLib.NetPacketReader reader, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x1168040
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnNetworkReceive(LiteNetLib.NetPeer peer, LiteNetLib.NetPacketReader reader, LiteNetLib.DeliveryMethod deliveryMethod)
    void LiteNetLib_INetEventListener_OnNetworkReceive(LiteNetLib::NetPeer* peer, LiteNetLib::NetPacketReader* reader, LiteNetLib::DeliveryMethod deliveryMethod);
    // private System.Void LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.NetPacketReader reader, LiteNetLib.UnconnectedMessageType messageType)
    // Offset: 0x11680E8
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnNetworkReceiveUnconnected(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.NetPacketReader reader, LiteNetLib.UnconnectedMessageType messageType)
    void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType);
  }; // LiteNetLibConnectionManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager*, "", "LiteNetLibConnectionManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::NetworkMode, "", "LiteNetLibConnectionManager/NetworkMode");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::ConnectionState, "", "LiteNetLibConnectionManager/ConnectionState");
#pragma pack(pop)
