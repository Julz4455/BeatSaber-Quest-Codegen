// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerUnreliableMessage
#include "MasterServer/IMasterServerUnreliableMessage.hpp"
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.SessionKeepaliveMessage
  // [] Offset: FFFFFFFF
  class SessionKeepaliveMessage : public ::Il2CppObject/*, public MasterServer::IMasterServerUnreliableMessage, public MasterServer::IUserMessage*/ {
    public:
    // Creating value type constructor for type: SessionKeepaliveMessage
    SessionKeepaliveMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerUnreliableMessage
    operator MasterServer::IMasterServerUnreliableMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IUserMessage
    operator MasterServer::IUserMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.SessionKeepaliveMessage> get_pool()
    // Offset: 0x111F07C
    static GlobalNamespace::PacketPool_1<MasterServer::SessionKeepaliveMessage*>* get_pool();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1126824
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1126828
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x111F1CC
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x112682C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionKeepaliveMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::SessionKeepaliveMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionKeepaliveMessage*, creationType>()));
    }
  }; // MasterServer.SessionKeepaliveMessage
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::SessionKeepaliveMessage*, "MasterServer", "SessionKeepaliveMessage");
