// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager/JoinResponsePacket
#include "GlobalNamespace/LocalNetworkDiscoveryManager_JoinResponsePacket.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LocalNetworkDiscoveryManager/JoinResponsePacket.Serialize
void GlobalNamespace::LocalNetworkDiscoveryManager::JoinResponsePacket::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void GlobalNamespace::LocalNetworkDiscoveryManager::JoinResponsePacket::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::LocalNetworkDiscoveryManager::JoinResponsePacket::Serialize(writer);
}
// Autogenerated method: LocalNetworkDiscoveryManager/JoinResponsePacket.Deserialize
void GlobalNamespace::LocalNetworkDiscoveryManager::JoinResponsePacket::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void GlobalNamespace::LocalNetworkDiscoveryManager::JoinResponsePacket::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::LocalNetworkDiscoveryManager::JoinResponsePacket::Deserialize(reader);
}
// Autogenerated method: LocalNetworkDiscoveryManager/JoinResponsePacket..ctor
GlobalNamespace::LocalNetworkDiscoveryManager::JoinResponsePacket* GlobalNamespace::LocalNetworkDiscoveryManager::JoinResponsePacket::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<LocalNetworkDiscoveryManager::JoinResponsePacket*>());
}
