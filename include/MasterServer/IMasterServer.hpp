// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayServerFiniteStateMachine
#include "GlobalNamespace/GameplayServerFiniteStateMachine.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AuthenticationToken
  struct AuthenticationToken;
  // Forward declaring type: DiscoveryPolicy
  struct DiscoveryPolicy;
  // Forward declaring type: InvitePolicy
  struct InvitePolicy;
  // Skipping declaration: GameplayServerConfiguration because it is already included!
  // Forward declaring type: GameplayServerFilter
  struct GameplayServerFilter;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: BroadcastServerStatusResponse
  class BroadcastServerStatusResponse;
  // Forward declaring type: BroadcastServerHeartbeatResponse
  class BroadcastServerHeartbeatResponse;
  // Forward declaring type: ConnectToServerResponse
  class ConnectToServerResponse;
  // Forward declaring type: GetPublicServersResponse
  class GetPublicServersResponse;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IMasterServer
  // [] Offset: FFFFFFFF
  class IMasterServer {
    public:
    // Creating value type constructor for type: IMasterServer
    IMasterServer() noexcept {}
    // public System.Threading.Tasks.Task`1<System.Boolean> TryAuthenticateUser(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, AuthenticationToken authenticationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<bool>* TryAuthenticateUser(uint protocolVersion, System::Net::IPEndPoint* endPoint, GlobalNamespace::AuthenticationToken authenticationToken);
    // public System.Boolean TryAuthenticateDedicatedServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String id, System.Byte[] nonce, System.Byte[] hash, System.Int64 timestamp)
    // Offset: 0xFFFFFFFF
    bool TryAuthenticateDedicatedServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* id, ::Array<uint8_t>* nonce, ::Array<uint8_t>* hash, int64_t timestamp);
    // public System.Threading.Tasks.Task`1<MasterServer.BroadcastServerStatusResponse> TryBroadcastServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, System.String serverName, System.String secret, System.String password, System.Byte[] random, System.Byte[] publicKey, System.Int32 currentPlayerCount, System.Int32 maxPlayerCount, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, GameplayServerConfiguration configuration)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::BroadcastServerStatusResponse*>* TryBroadcastServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* serverName, ::Il2CppString* secret, ::Il2CppString* password, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, int currentPlayerCount, int maxPlayerCount, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.Threading.Tasks.Task`1<MasterServer.BroadcastServerHeartbeatResponse> TryHeartbeatUserServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, System.String secret, System.Int32 currentPlayerCount)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::BroadcastServerHeartbeatResponse*>* TryHeartbeatUserServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, int currentPlayerCount);
    // public System.Void TryRemoveServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, System.String secret)
    // Offset: 0xFFFFFFFF
    void TryRemoveServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret);
    // public System.Threading.Tasks.Task`1<MasterServer.ConnectToServerResponse> TryGetServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, System.String secret, System.String code, System.String password, System.Byte[] random, System.Byte[] publicKey, System.Boolean useRelay)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::ConnectToServerResponse*>* TryGetServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, ::Il2CppString* code, ::Il2CppString* password, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, bool useRelay);
    // public System.Threading.Tasks.Task`1<MasterServer.ConnectToServerResponse> TryGetMatchmakingServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, GameplayServerConfiguration configuration, System.Byte[] random, System.Byte[] publicKey, System.String secret)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::ConnectToServerResponse*>* TryGetMatchmakingServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::GameplayServerConfiguration configuration, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, ::Il2CppString* secret);
    // public System.Threading.Tasks.Task`1<MasterServer.GetPublicServersResponse> TryGetPublicServers(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, System.Int32 offset, System.Int32 count, GameplayServerFilter filter)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::GetPublicServersResponse*>* TryGetPublicServers(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, int offset, int count, GlobalNamespace::GameplayServerFilter filter);
    // public System.Void HeartbeatDedicatedServer(System.UInt32 protocolVersion, System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Net.IPEndPoint endPoint, System.Int32 cpuUtilization, System.Int32 occupiedServerSlotCount, System.Int32 unoccupiedServerSlotCount)
    // Offset: 0xFFFFFFFF
    void HeartbeatDedicatedServer(uint protocolVersion, ::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, System::Net::IPEndPoint* endPoint, int cpuUtilization, int occupiedServerSlotCount, int unoccupiedServerSlotCount);
    // public System.Void UpdateRelayServerStatus(System.UInt32 protocolVersion, System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Net.IPEndPoint endPoint, System.String id, System.Int32 currentPlayerCount)
    // Offset: 0xFFFFFFFF
    void UpdateRelayServerStatus(uint protocolVersion, ::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, System::Net::IPEndPoint* endPoint, ::Il2CppString* id, int currentPlayerCount);
    // public System.Void UpdateMatchmakingServerStatus(System.UInt32 protocolVersion, System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Net.IPEndPoint endPoint, System.String id, GameplayServerFiniteStateMachine/GameStateType gameState, System.Int32 currentPlayerCount)
    // Offset: 0xFFFFFFFF
    void UpdateMatchmakingServerStatus(uint protocolVersion, ::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, System::Net::IPEndPoint* endPoint, ::Il2CppString* id, GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType gameState, int currentPlayerCount);
    // public System.Void SetDedicatedServerNoLongerOccupied(System.UInt32 protocolVersion, System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Net.IPEndPoint endPoint, System.String id)
    // Offset: 0xFFFFFFFF
    void SetDedicatedServerNoLongerOccupied(uint protocolVersion, ::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, System::Net::IPEndPoint* endPoint, ::Il2CppString* id);
    // public System.Void RemoveDedicatedServer(System.UInt32 protocolVersion, System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Net.IPEndPoint endPoint)
    // Offset: 0xFFFFFFFF
    void RemoveDedicatedServer(uint protocolVersion, ::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, System::Net::IPEndPoint* endPoint);
    // public System.Boolean ShouldHandleMessageFromEndPoint(System.Net.IPEndPoint remoteEndPoint)
    // Offset: 0xFFFFFFFF
    bool ShouldHandleMessageFromEndPoint(System::Net::IPEndPoint* remoteEndPoint);
    // public System.Void ReportExceptionForEndPoint(System.Net.IPEndPoint remoteEndPoint, System.Exception exception)
    // Offset: 0xFFFFFFFF
    void ReportExceptionForEndPoint(System::Net::IPEndPoint* remoteEndPoint, System::Exception* exception);
  }; // MasterServer.IMasterServer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IMasterServer*, "MasterServer", "IMasterServer");
