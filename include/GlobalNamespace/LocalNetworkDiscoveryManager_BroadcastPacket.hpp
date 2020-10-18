// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LocalNetworkDiscoveryManager/BroadcastPacket
  class LocalNetworkDiscoveryManager::BroadcastPacket : public ::Il2CppObject, public LiteNetLib::Utils::INetSerializable {
    public:
    // public System.Byte version
    // Offset: 0x10
    uint8_t version;
    // public System.String userId
    // Offset: 0x18
    ::Il2CppString* userId;
    // public System.String userName
    // Offset: 0x20
    ::Il2CppString* userName;
    // public System.Int32 currentPartySize
    // Offset: 0x28
    int currentPartySize;
    // public System.Int32 maxPartySize
    // Offset: 0x2C
    int maxPartySize;
    // public System.Byte flags
    // Offset: 0x30
    uint8_t flags;
    // public GameplayServerConfiguration configuration
    // Offset: 0x38
    GlobalNamespace::GameplayServerConfiguration configuration;
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x103E820
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x103E8B4
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x103CEEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LocalNetworkDiscoveryManager::BroadcastPacket* New_ctor();
  }; // LocalNetworkDiscoveryManager/BroadcastPacket
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket*, "", "LocalNetworkDiscoveryManager/BroadcastPacket");
#pragma pack(pop)
