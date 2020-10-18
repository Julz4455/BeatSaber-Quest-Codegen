// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BaseMasterServerReliableResponse.set_requestId
void GlobalNamespace::BaseMasterServerReliableResponse::set_requestId(uint value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_requestId", value));
}
// Autogenerated method: BaseMasterServerReliableResponse.set_responseId
void GlobalNamespace::BaseMasterServerReliableResponse::set_responseId(uint value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_responseId", value));
}
// Autogenerated method: BaseMasterServerReliableResponse.get_requestId
uint GlobalNamespace::BaseMasterServerReliableResponse::get_requestId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "get_requestId"));
}
// Autogenerated method: BaseMasterServerReliableResponse.get_responseId
uint GlobalNamespace::BaseMasterServerReliableResponse::get_responseId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "get_responseId"));
}
// Autogenerated method: BaseMasterServerReliableResponse.get_resultCode
uint8_t GlobalNamespace::BaseMasterServerReliableResponse::get_resultCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(this, "get_resultCode"));
}
// Autogenerated method: BaseMasterServerReliableResponse.get_resultCodeString
::Il2CppString* GlobalNamespace::BaseMasterServerReliableResponse::get_resultCodeString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_resultCodeString"));
}
// Autogenerated method: BaseMasterServerReliableResponse.Serialize
void GlobalNamespace::BaseMasterServerReliableResponse::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void GlobalNamespace::BaseMasterServerReliableResponse::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::BaseMasterServerReliableResponse::Serialize(writer);
}
// Autogenerated method: BaseMasterServerReliableResponse.Deserialize
void GlobalNamespace::BaseMasterServerReliableResponse::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void GlobalNamespace::BaseMasterServerReliableResponse::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::BaseMasterServerReliableResponse::Deserialize(reader);
}
// Autogenerated method: BaseMasterServerReliableResponse.Release
void GlobalNamespace::BaseMasterServerReliableResponse::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: BaseMasterServerReliableResponse.MasterServer.IMasterServerReliableRequest.WithRequestId
MasterServer::IMasterServerReliableRequest* GlobalNamespace::BaseMasterServerReliableResponse::MasterServer_IMasterServerReliableRequest_WithRequestId(uint requestId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::IMasterServerReliableRequest*>(this, "MasterServer.IMasterServerReliableRequest.WithRequestId", requestId));
}
// Autogenerated method: BaseMasterServerReliableResponse.MasterServer.IMasterServerResponse.WithResponseId
MasterServer::IMasterServerResponse* GlobalNamespace::BaseMasterServerReliableResponse::MasterServer_IMasterServerResponse_WithResponseId(uint responseId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::IMasterServerResponse*>(this, "MasterServer.IMasterServerResponse.WithResponseId", responseId));
}
// Autogenerated method: BaseMasterServerReliableResponse.MasterServer.IMasterServerReliableResponse.WithRequestAndResponseId
MasterServer::IMasterServerReliableResponse* GlobalNamespace::BaseMasterServerReliableResponse::MasterServer_IMasterServerReliableResponse_WithRequestAndResponseId(uint requestId, uint responseId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::IMasterServerReliableResponse*>(this, "MasterServer.IMasterServerReliableResponse.WithRequestAndResponseId", requestId, responseId));
}
// Autogenerated method: BaseMasterServerReliableResponse..ctor
GlobalNamespace::BaseMasterServerReliableResponse* GlobalNamespace::BaseMasterServerReliableResponse::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BaseMasterServerReliableResponse*>());
}
