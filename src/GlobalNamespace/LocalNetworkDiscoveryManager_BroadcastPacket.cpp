// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager/BroadcastPacket
#include "GlobalNamespace/LocalNetworkDiscoveryManager_BroadcastPacket.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LocalNetworkDiscoveryManager/BroadcastPacket.Serialize
void GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::Serialize(writer);
}
// Autogenerated method: LocalNetworkDiscoveryManager/BroadcastPacket.Deserialize
void GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::Deserialize(reader);
}
// Autogenerated method: LocalNetworkDiscoveryManager/BroadcastPacket..ctor
GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket* GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<LocalNetworkDiscoveryManager::BroadcastPacket*>());
}
