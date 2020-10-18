// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BaseConnectToServerRequest
#include "MasterServer/BaseConnectToServerRequest.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.ConnectToServerRequest
  class ConnectToServerRequest : public MasterServer::BaseConnectToServerRequest {
    public:
    // public System.String secret
    // Offset: 0x38
    ::Il2CppString* secret;
    // public System.String code
    // Offset: 0x40
    ::Il2CppString* code;
    // public System.String password
    // Offset: 0x48
    ::Il2CppString* password;
    // public System.Boolean useRelay
    // Offset: 0x50
    bool useRelay;
    // static public PacketPool`1<MasterServer.ConnectToServerRequest> get_pool()
    // Offset: 0x10BC5E8
    static GlobalNamespace::PacketPool_1<MasterServer::ConnectToServerRequest*>* get_pool();
    // public MasterServer.ConnectToServerRequest Init(System.String userId, System.String userName, System.String secret, System.String code, System.String password, System.Boolean useRelay)
    // Offset: 0x10BC630
    MasterServer::ConnectToServerRequest* Init(::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, ::Il2CppString* code, ::Il2CppString* password, bool useRelay);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x10BC6C4
    // Implemented from: MasterServer.BaseConnectToServerRequest
    // Base method: System.Void BaseConnectToServerRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x10BC730
    // Implemented from: MasterServer.BaseConnectToServerRequest
    // Base method: System.Void BaseConnectToServerRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x10BC7C8
    // Implemented from: MasterServer.BaseConnectToServerRequest
    // Base method: System.Void BaseConnectToServerRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x10BC830
    // Implemented from: MasterServer.BaseConnectToServerRequest
    // Base method: System.Void BaseConnectToServerRequest::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    static ConnectToServerRequest* New_ctor();
  }; // MasterServer.ConnectToServerRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ConnectToServerRequest*, "MasterServer", "ConnectToServerRequest");
#pragma pack(pop)
