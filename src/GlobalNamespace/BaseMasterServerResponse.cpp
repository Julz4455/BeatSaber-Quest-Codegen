// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerResponse
#include "GlobalNamespace/BaseMasterServerResponse.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BaseMasterServerResponse.set_responseId
void GlobalNamespace::BaseMasterServerResponse::set_responseId(uint value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_responseId", value));
}
// Autogenerated method: BaseMasterServerResponse.get_responseId
uint GlobalNamespace::BaseMasterServerResponse::get_responseId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "get_responseId"));
}
// Autogenerated method: BaseMasterServerResponse.get_resultCode
uint8_t GlobalNamespace::BaseMasterServerResponse::get_resultCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(this, "get_resultCode"));
}
// Autogenerated method: BaseMasterServerResponse.get_resultCodeString
::Il2CppString* GlobalNamespace::BaseMasterServerResponse::get_resultCodeString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_resultCodeString"));
}
// Autogenerated method: BaseMasterServerResponse.Serialize
void GlobalNamespace::BaseMasterServerResponse::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void GlobalNamespace::BaseMasterServerResponse::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::BaseMasterServerResponse::Serialize(writer);
}
// Autogenerated method: BaseMasterServerResponse.Deserialize
void GlobalNamespace::BaseMasterServerResponse::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void GlobalNamespace::BaseMasterServerResponse::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::BaseMasterServerResponse::Deserialize(reader);
}
// Autogenerated method: BaseMasterServerResponse.Release
void GlobalNamespace::BaseMasterServerResponse::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: BaseMasterServerResponse.MasterServer.IMasterServerResponse.WithResponseId
MasterServer::IMasterServerResponse* GlobalNamespace::BaseMasterServerResponse::MasterServer_IMasterServerResponse_WithResponseId(uint responseId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::IMasterServerResponse*>(this, "MasterServer.IMasterServerResponse.WithResponseId", responseId));
}
// Autogenerated method: BaseMasterServerResponse..ctor
GlobalNamespace::BaseMasterServerResponse* GlobalNamespace::BaseMasterServerResponse::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BaseMasterServerResponse*>());
}
