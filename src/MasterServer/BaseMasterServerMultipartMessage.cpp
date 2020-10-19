// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BaseMasterServerMultipartMessage
#include "MasterServer/BaseMasterServerMultipartMessage.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Int32 kDataChunkSize
int MasterServer::BaseMasterServerMultipartMessage::_get_kDataChunkSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "BaseMasterServerMultipartMessage", "kDataChunkSize"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kDataChunkSize
void MasterServer::BaseMasterServerMultipartMessage::_set_kDataChunkSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "BaseMasterServerMultipartMessage", "kDataChunkSize", value));
}
// Autogenerated static field getter
// Get static field: static public System.Int32 kMaximumDataSize
int MasterServer::BaseMasterServerMultipartMessage::_get_kMaximumDataSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "BaseMasterServerMultipartMessage", "kMaximumDataSize"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kMaximumDataSize
void MasterServer::BaseMasterServerMultipartMessage::_set_kMaximumDataSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "BaseMasterServerMultipartMessage", "kMaximumDataSize", value));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.set_multipartMessageId
void MasterServer::BaseMasterServerMultipartMessage::set_multipartMessageId(uint value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_multipartMessageId", value));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.set_offset
void MasterServer::BaseMasterServerMultipartMessage::set_offset(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_offset", value));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.set_length
void MasterServer::BaseMasterServerMultipartMessage::set_length(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_length", value));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.set_totalLength
void MasterServer::BaseMasterServerMultipartMessage::set_totalLength(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_totalLength", value));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.Init
MasterServer::BaseMasterServerMultipartMessage* MasterServer::BaseMasterServerMultipartMessage::Init(uint multipartMessageId, ::Array<uint8_t>* data, int offset, int length, int totalLength) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::BaseMasterServerMultipartMessage*>(this, "Init", multipartMessageId, data, offset, length, totalLength));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.get_multipartMessageId
uint MasterServer::BaseMasterServerMultipartMessage::get_multipartMessageId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "get_multipartMessageId"));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.get_offset
int MasterServer::BaseMasterServerMultipartMessage::get_offset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_offset"));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.get_length
int MasterServer::BaseMasterServerMultipartMessage::get_length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_length"));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.get_totalLength
int MasterServer::BaseMasterServerMultipartMessage::get_totalLength() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_totalLength"));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.get_data
::Array<uint8_t>* MasterServer::BaseMasterServerMultipartMessage::get_data() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_data"));
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.Serialize
void MasterServer::BaseMasterServerMultipartMessage::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::BaseMasterServerMultipartMessage::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::BaseMasterServerMultipartMessage::Serialize(writer);
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage.Deserialize
void MasterServer::BaseMasterServerMultipartMessage::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::BaseMasterServerMultipartMessage::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::BaseMasterServerMultipartMessage::Deserialize(reader);
}
// Autogenerated method: MasterServer.BaseMasterServerMultipartMessage..ctor
MasterServer::BaseMasterServerMultipartMessage* MasterServer::BaseMasterServerMultipartMessage::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BaseMasterServerMultipartMessage*>());
}