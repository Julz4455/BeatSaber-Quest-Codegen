// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BroadcastServerStatusRequest
#include "MasterServer/BroadcastServerStatusRequest.hpp"
// Including type: ByteArrayNetSerializable
#include "GlobalNamespace/ByteArrayNetSerializable.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.BroadcastServerStatusRequest.get_pool
GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerStatusRequest*>* MasterServer::BroadcastServerStatusRequest::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerStatusRequest*>*>("MasterServer", "BroadcastServerStatusRequest", "get_pool"));
}
// Autogenerated method: MasterServer.BroadcastServerStatusRequest.set_userId
void MasterServer::BroadcastServerStatusRequest::set_userId(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_userId", value));
}
// Autogenerated method: MasterServer.BroadcastServerStatusRequest.set_userName
void MasterServer::BroadcastServerStatusRequest::set_userName(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_userName", value));
}
// Autogenerated method: MasterServer.BroadcastServerStatusRequest.Init
MasterServer::BroadcastServerStatusRequest* MasterServer::BroadcastServerStatusRequest::Init(::Il2CppString* serverName, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, ::Il2CppString* password, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, int currentPlayerCount, int maxPlayerCount, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, GlobalNamespace::GameplayServerConfiguration configuration) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::BroadcastServerStatusRequest*>(this, "Init", serverName, userId, userName, secret, password, random, publicKey, currentPlayerCount, maxPlayerCount, discoveryPolicy, invitePolicy, configuration));
}
// Autogenerated method: MasterServer.BroadcastServerStatusRequest.get_userId
::Il2CppString* MasterServer::BroadcastServerStatusRequest::get_userId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_userId"));
}
// Autogenerated method: MasterServer.BroadcastServerStatusRequest.get_userName
::Il2CppString* MasterServer::BroadcastServerStatusRequest::get_userName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_userName"));
}
// Autogenerated method: MasterServer.BroadcastServerStatusRequest.Serialize
void MasterServer::BroadcastServerStatusRequest::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::BroadcastServerStatusRequest::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::BroadcastServerStatusRequest::Serialize(writer);
}
// Autogenerated method: MasterServer.BroadcastServerStatusRequest.Deserialize
void MasterServer::BroadcastServerStatusRequest::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::BroadcastServerStatusRequest::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::BroadcastServerStatusRequest::Deserialize(reader);
}
// Autogenerated method: MasterServer.BroadcastServerStatusRequest.Release
void MasterServer::BroadcastServerStatusRequest::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: MasterServer.BroadcastServerStatusRequest..ctor
MasterServer::BroadcastServerStatusRequest* MasterServer::BroadcastServerStatusRequest::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BroadcastServerStatusRequest*>());
}