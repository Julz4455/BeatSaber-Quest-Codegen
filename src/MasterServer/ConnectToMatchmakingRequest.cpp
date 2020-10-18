// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.ConnectToMatchmakingRequest
#include "MasterServer/ConnectToMatchmakingRequest.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest.get_pool
GlobalNamespace::PacketPool_1<MasterServer::ConnectToMatchmakingRequest*>* MasterServer::ConnectToMatchmakingRequest::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<MasterServer::ConnectToMatchmakingRequest*>*>("MasterServer", "ConnectToMatchmakingRequest", "get_pool"));
}
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest.Init
MasterServer::ConnectToMatchmakingRequest* MasterServer::ConnectToMatchmakingRequest::Init(::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::GameplayServerConfiguration configuration, ::Il2CppString* secret) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::ConnectToMatchmakingRequest*>(this, "Init", userId, userName, configuration, secret));
}
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest.Serialize
void MasterServer::ConnectToMatchmakingRequest::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::ConnectToMatchmakingRequest::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::ConnectToMatchmakingRequest::Serialize(writer);
}
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest.Deserialize
void MasterServer::ConnectToMatchmakingRequest::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::ConnectToMatchmakingRequest::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::ConnectToMatchmakingRequest::Deserialize(reader);
}
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest.Release
void MasterServer::ConnectToMatchmakingRequest::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest..ctor
MasterServer::ConnectToMatchmakingRequest* MasterServer::ConnectToMatchmakingRequest::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ConnectToMatchmakingRequest*>());
}
