// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.ConnectionRequest
#include "LiteNetLib/ConnectionRequest.hpp"
// Including type: LiteNetLib.NetManager
#include "LiteNetLib/NetManager.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: LiteNetLib.NetConnectRequestPacket
#include "LiteNetLib/NetConnectRequestPacket.hpp"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.ConnectionRequest.get_Result
LiteNetLib::ConnectionRequestResult LiteNetLib::ConnectionRequest::get_Result() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<LiteNetLib::ConnectionRequestResult>(this, "get_Result"));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.set_Result
void LiteNetLib::ConnectionRequest::set_Result(LiteNetLib::ConnectionRequestResult value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Result", value));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.TryActivate
bool LiteNetLib::ConnectionRequest::TryActivate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryActivate"));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.UpdateRequest
void LiteNetLib::ConnectionRequest::UpdateRequest(LiteNetLib::NetConnectRequestPacket* connRequest) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateRequest", connRequest));
}
// Autogenerated method: LiteNetLib.ConnectionRequest..ctor
LiteNetLib::ConnectionRequest* LiteNetLib::ConnectionRequest::New_ctor(int64_t connectionId, uint8_t connectionNumber, LiteNetLib::Utils::NetDataReader* netDataReader, System::Net::IPEndPoint* endPoint, LiteNetLib::NetManager* listener) {
  return THROW_UNLESS(il2cpp_utils::New<ConnectionRequest*>(connectionId, connectionNumber, netDataReader, endPoint, listener));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.AcceptIfKey
LiteNetLib::NetPeer* LiteNetLib::ConnectionRequest::AcceptIfKey(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<LiteNetLib::NetPeer*>(this, "AcceptIfKey", key));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.Accept
LiteNetLib::NetPeer* LiteNetLib::ConnectionRequest::Accept() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<LiteNetLib::NetPeer*>(this, "Accept"));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.Reject
void LiteNetLib::ConnectionRequest::Reject(::Array<uint8_t>* rejectData, int start, int length, bool force) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reject", rejectData, start, length, force));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.Reject
void LiteNetLib::ConnectionRequest::Reject(::Array<uint8_t>* rejectData, int start, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reject", rejectData, start, length));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.RejectForce
void LiteNetLib::ConnectionRequest::RejectForce(::Array<uint8_t>* rejectData, int start, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RejectForce", rejectData, start, length));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.RejectForce
void LiteNetLib::ConnectionRequest::RejectForce() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RejectForce"));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.RejectForce
void LiteNetLib::ConnectionRequest::RejectForce(::Array<uint8_t>* rejectData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RejectForce", rejectData));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.RejectForce
void LiteNetLib::ConnectionRequest::RejectForce(LiteNetLib::Utils::NetDataWriter* rejectData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RejectForce", rejectData));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.Reject
void LiteNetLib::ConnectionRequest::Reject() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reject"));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.Reject
void LiteNetLib::ConnectionRequest::Reject(::Array<uint8_t>* rejectData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reject", rejectData));
}
// Autogenerated method: LiteNetLib.ConnectionRequest.Reject
void LiteNetLib::ConnectionRequest::Reject(LiteNetLib::Utils::NetDataWriter* rejectData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reject", rejectData));
}