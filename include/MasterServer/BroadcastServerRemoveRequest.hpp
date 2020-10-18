// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerUnreliableMessage
#include "MasterServer/IMasterServerUnreliableMessage.hpp"
// Including type: MasterServer.IUserClientToServerMessage
#include "MasterServer/IUserClientToServerMessage.hpp"
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
  // Autogenerated type: MasterServer.BroadcastServerRemoveRequest
  class BroadcastServerRemoveRequest : public ::Il2CppObject, public MasterServer::IMasterServerUnreliableMessage, public MasterServer::IUserClientToServerMessage {
    public:
    // private System.String <userId>k__BackingField
    // Offset: 0x10
    ::Il2CppString* userId;
    // private System.String <userName>k__BackingField
    // Offset: 0x18
    ::Il2CppString* userName;
    // public System.String secret
    // Offset: 0x20
    ::Il2CppString* secret;
    // static public PacketPool`1<MasterServer.BroadcastServerRemoveRequest> get_pool()
    // Offset: 0x10BB2F0
    static GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerRemoveRequest*>* get_pool();
    // private System.Void set_userId(System.String value)
    // Offset: 0x10BB340
    void set_userId(::Il2CppString* value);
    // private System.Void set_userName(System.String value)
    // Offset: 0x10BB350
    void set_userName(::Il2CppString* value);
    // public MasterServer.BroadcastServerRemoveRequest Init(System.String userId, System.String userName, System.String secret)
    // Offset: 0x10BB358
    MasterServer::BroadcastServerRemoveRequest* Init(::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret);
    // public System.String get_userId()
    // Offset: 0x10BB338
    // Implemented from: MasterServer.IUserClientToServerMessage
    // Base method: System.String IUserClientToServerMessage::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x10BB348
    // Implemented from: MasterServer.IUserClientToServerMessage
    // Base method: System.String IUserClientToServerMessage::get_userName()
    ::Il2CppString* get_userName();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x10BB3B0
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x10BB404
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x10BB47C
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x10BB4D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BroadcastServerRemoveRequest* New_ctor();
  }; // MasterServer.BroadcastServerRemoveRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BroadcastServerRemoveRequest*, "MasterServer", "BroadcastServerRemoveRequest");
#pragma pack(pop)
