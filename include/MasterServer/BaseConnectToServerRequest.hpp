// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IUserClientToServerMessage
#include "MasterServer/IUserClientToServerMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
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
  // Autogenerated type: MasterServer.BaseConnectToServerRequest
  class BaseConnectToServerRequest : public GlobalNamespace::BaseMasterServerReliableRequest, public MasterServer::IUserClientToServerMessage {
    public:
    // private System.String <userId>k__BackingField
    // Offset: 0x18
    ::Il2CppString* userId;
    // private System.String <userName>k__BackingField
    // Offset: 0x20
    ::Il2CppString* userName;
    // public readonly ByteArrayNetSerializable random
    // Offset: 0x28
    GlobalNamespace::ByteArrayNetSerializable* random;
    // public readonly ByteArrayNetSerializable publicKey
    // Offset: 0x30
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // protected System.Void set_userId(System.String value)
    // Offset: 0x116E364
    void set_userId(::Il2CppString* value);
    // protected System.Void set_userName(System.String value)
    // Offset: 0x116E374
    void set_userName(::Il2CppString* value);
    // public MasterServer.BaseConnectToServerRequest WithEncryptionParams(System.Byte[] random, System.Byte[] publicKey)
    // Offset: 0x116E37C
    MasterServer::BaseConnectToServerRequest* WithEncryptionParams(::Array<uint8_t>* random, ::Array<uint8_t>* publicKey);
    // public System.String get_userId()
    // Offset: 0x116E35C
    // Implemented from: MasterServer.IUserClientToServerMessage
    // Base method: System.String IUserClientToServerMessage::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x116E36C
    // Implemented from: MasterServer.IUserClientToServerMessage
    // Base method: System.String IUserClientToServerMessage::get_userName()
    ::Il2CppString* get_userName();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x116E3C0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x116E434
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x116E4C0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // protected System.Void .ctor()
    // Offset: 0x116E504
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    static BaseConnectToServerRequest* New_ctor();
  }; // MasterServer.BaseConnectToServerRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseConnectToServerRequest*, "MasterServer", "BaseConnectToServerRequest");
#pragma pack(pop)
