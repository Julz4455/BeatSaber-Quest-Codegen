// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PartyMessageHandler/ConnectToMasterServerMessage
#include "GlobalNamespace/PartyMessageHandler_ConnectToMasterServerMessage.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PartyMessageHandler/ConnectToMasterServerMessage.get_pool
GlobalNamespace::PacketPool_1<GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*>* GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*>*>("", "PartyMessageHandler/ConnectToMasterServerMessage", "get_pool"));
}
// Autogenerated method: PartyMessageHandler/ConnectToMasterServerMessage.Init
GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage* GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Init(System::Net::IPEndPoint* endPoint, ::Il2CppString* serverName, ::Il2CppString* password, ::Il2CppString* secret, ::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*>(this, "Init", endPoint, serverName, password, secret, userId, userName, discoveryPolicy, invitePolicy, maxPlayerCount, configuration));
}
// Autogenerated method: PartyMessageHandler/ConnectToMasterServerMessage.Serialize
void GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Serialize(writer);
}
// Autogenerated method: PartyMessageHandler/ConnectToMasterServerMessage.Deserialize
void GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Deserialize(reader);
}
// Autogenerated method: PartyMessageHandler/ConnectToMasterServerMessage.Release
void GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: PartyMessageHandler/ConnectToMasterServerMessage..ctor
GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage* GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<PartyMessageHandler::ConnectToMasterServerMessage*>());
}