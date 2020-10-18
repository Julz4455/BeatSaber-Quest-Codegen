// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IHandshakeClientToServerMessage
#include "MasterServer/IHandshakeClientToServerMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
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
  // Autogenerated type: MasterServer.ClientHelloWithCookieRequest
  class ClientHelloWithCookieRequest : public GlobalNamespace::BaseMasterServerReliableRequest, public MasterServer::IHandshakeClientToServerMessage {
    public:
    // public System.UInt32 certificateResponseId
    // Offset: 0x14
    uint certificateResponseId;
    // public readonly ByteArrayNetSerializable random
    // Offset: 0x18
    GlobalNamespace::ByteArrayNetSerializable* random;
    // public readonly ByteArrayNetSerializable cookie
    // Offset: 0x20
    GlobalNamespace::ByteArrayNetSerializable* cookie;
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.ClientHelloWithCookieRequest> get_pool()
    // Offset: 0x10BBF74
    static GlobalNamespace::PacketPool_1<MasterServer::ClientHelloWithCookieRequest*>* get_pool();
    // public MasterServer.ClientHelloWithCookieRequest Init(System.UInt32 certificateResponseId, System.Byte[] random, System.Byte[] cookie)
    // Offset: 0x10BBFBC
    MasterServer::ClientHelloWithCookieRequest* Init(uint certificateResponseId, ::Array<uint8_t>* random, ::Array<uint8_t>* cookie);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x10BC010
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x10BC074
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x10BC0DC
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x10BC158
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    static ClientHelloWithCookieRequest* New_ctor();
  }; // MasterServer.ClientHelloWithCookieRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ClientHelloWithCookieRequest*, "MasterServer", "ClientHelloWithCookieRequest");
#pragma pack(pop)
