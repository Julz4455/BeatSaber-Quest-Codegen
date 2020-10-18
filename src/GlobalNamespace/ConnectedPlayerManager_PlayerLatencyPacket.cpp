// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ConnectedPlayerManager/PlayerLatencyPacket
#include "GlobalNamespace/ConnectedPlayerManager_PlayerLatencyPacket.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ConnectedPlayerManager/PlayerLatencyPacket.get_pool
GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket*>* GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket*>*>("", "ConnectedPlayerManager/PlayerLatencyPacket", "get_pool"));
}
// Autogenerated method: ConnectedPlayerManager/PlayerLatencyPacket.Init
GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket* GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket::Init(float latency) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket*>(this, "Init", latency));
}
// Autogenerated method: ConnectedPlayerManager/PlayerLatencyPacket.Serialize
void GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket::Serialize(writer);
}
// Autogenerated method: ConnectedPlayerManager/PlayerLatencyPacket.Deserialize
void GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket::Deserialize(reader);
}
// Autogenerated method: ConnectedPlayerManager/PlayerLatencyPacket.Release
void GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: ConnectedPlayerManager/PlayerLatencyPacket..ctor
GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket* GlobalNamespace::ConnectedPlayerManager::PlayerLatencyPacket::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ConnectedPlayerManager::PlayerLatencyPacket*>());
}
