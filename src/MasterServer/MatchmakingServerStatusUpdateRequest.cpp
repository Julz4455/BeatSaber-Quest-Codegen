// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MatchmakingServerStatusUpdateRequest
#include "MasterServer/MatchmakingServerStatusUpdateRequest.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.MatchmakingServerStatusUpdateRequest.get_pool
GlobalNamespace::PacketPool_1<MasterServer::MatchmakingServerStatusUpdateRequest*>* MasterServer::MatchmakingServerStatusUpdateRequest::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<MasterServer::MatchmakingServerStatusUpdateRequest*>*>("MasterServer", "MatchmakingServerStatusUpdateRequest", "get_pool"));
}
// Autogenerated method: MasterServer.MatchmakingServerStatusUpdateRequest.set_dedicatedServerId
void MasterServer::MatchmakingServerStatusUpdateRequest::set_dedicatedServerId(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_dedicatedServerId", value));
}
// Autogenerated method: MasterServer.MatchmakingServerStatusUpdateRequest.set_dedicatedServerCreationTime
void MasterServer::MatchmakingServerStatusUpdateRequest::set_dedicatedServerCreationTime(int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_dedicatedServerCreationTime", value));
}
// Autogenerated method: MasterServer.MatchmakingServerStatusUpdateRequest.Init
MasterServer::MatchmakingServerStatusUpdateRequest* MasterServer::MatchmakingServerStatusUpdateRequest::Init(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType gameState, int currentPlayerCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::MatchmakingServerStatusUpdateRequest*>(this, "Init", dedicatedServerId, dedicatedServerCreationTime, id, gameState, currentPlayerCount));
}
// Autogenerated method: MasterServer.MatchmakingServerStatusUpdateRequest.get_dedicatedServerId
::Il2CppString* MasterServer::MatchmakingServerStatusUpdateRequest::get_dedicatedServerId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_dedicatedServerId"));
}
// Autogenerated method: MasterServer.MatchmakingServerStatusUpdateRequest.get_dedicatedServerCreationTime
int64_t MasterServer::MatchmakingServerStatusUpdateRequest::get_dedicatedServerCreationTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_dedicatedServerCreationTime"));
}
// Autogenerated method: MasterServer.MatchmakingServerStatusUpdateRequest.Serialize
void MasterServer::MatchmakingServerStatusUpdateRequest::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::MatchmakingServerStatusUpdateRequest::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::MatchmakingServerStatusUpdateRequest::Serialize(writer);
}
// Autogenerated method: MasterServer.MatchmakingServerStatusUpdateRequest.Deserialize
void MasterServer::MatchmakingServerStatusUpdateRequest::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::MatchmakingServerStatusUpdateRequest::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::MatchmakingServerStatusUpdateRequest::Deserialize(reader);
}
// Autogenerated method: MasterServer.MatchmakingServerStatusUpdateRequest.Release
void MasterServer::MatchmakingServerStatusUpdateRequest::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: MasterServer.MatchmakingServerStatusUpdateRequest..ctor
MasterServer::MatchmakingServerStatusUpdateRequest* MasterServer::MatchmakingServerStatusUpdateRequest::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MatchmakingServerStatusUpdateRequest*>());
}