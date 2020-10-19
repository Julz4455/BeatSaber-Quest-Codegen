// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MasterServer.BroadcastServerHeartbeatResponse
#include "MasterServer/BroadcastServerHeartbeatResponse.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.BroadcastServerHeartbeatResponse.get_pool
GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerHeartbeatResponse*>* MasterServer::BroadcastServerHeartbeatResponse::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerHeartbeatResponse*>*>("MasterServer", "BroadcastServerHeartbeatResponse", "get_pool"));
}
// Autogenerated method: MasterServer.BroadcastServerHeartbeatResponse.Init
MasterServer::BroadcastServerHeartbeatResponse* MasterServer::BroadcastServerHeartbeatResponse::Init(MasterServer::BroadcastServerHeartbeatResponse::Result result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::BroadcastServerHeartbeatResponse*>(this, "Init", result));
}
// Autogenerated method: MasterServer.BroadcastServerHeartbeatResponse.Serialize
void MasterServer::BroadcastServerHeartbeatResponse::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::BroadcastServerHeartbeatResponse::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::BroadcastServerHeartbeatResponse::Serialize(writer);
}
// Autogenerated method: MasterServer.BroadcastServerHeartbeatResponse.Deserialize
void MasterServer::BroadcastServerHeartbeatResponse::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::BroadcastServerHeartbeatResponse::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::BroadcastServerHeartbeatResponse::Deserialize(reader);
}
// Autogenerated method: MasterServer.BroadcastServerHeartbeatResponse.Release
void MasterServer::BroadcastServerHeartbeatResponse::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: MasterServer.BroadcastServerHeartbeatResponse..ctor
MasterServer::BroadcastServerHeartbeatResponse* MasterServer::BroadcastServerHeartbeatResponse::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BroadcastServerHeartbeatResponse*>());
}