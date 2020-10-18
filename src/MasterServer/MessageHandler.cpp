// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: MasterServer.MessageHandler/IMessageSender
#include "MasterServer/MessageHandler_IMessageSender.hpp"
// Including type: SmallBufferPool
#include "GlobalNamespace/SmallBufferPool.hpp"
// Including type: MasterServer.MessageHandler/RequestWaiter
#include "MasterServer/MessageHandler_RequestWaiter.hpp"
// Including type: MasterServer.MessageHandler/SentRequestWaiter
#include "MasterServer/MessageHandler_SentRequestWaiter.hpp"
// Including type: MasterServer.MessageHandler/RequestResponseWaiter
#include "MasterServer/MessageHandler_RequestResponseWaiter.hpp"
// Including type: MasterServer.MessageHandler/MultipartMessageWaiter
#include "MasterServer/MessageHandler_MultipartMessageWaiter.hpp"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: MasterServer.IAnalyticsManager
#include "MasterServer/IAnalyticsManager.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: MasterServer.MessageHandler/<>c__DisplayClass74_0`1
#include "MasterServer/MessageHandler_--c__DisplayClass74_0_1.hpp"
// Including type: MasterServer.MessageHandler/<>c__DisplayClass75_0`1
#include "MasterServer/MessageHandler_--c__DisplayClass75_0_1.hpp"
// Including type: MasterServer.MessageHandler/<GetAndSendResponse>d__81`2
#include "MasterServer/MessageHandler_-GetAndSendResponse-d__81_2.hpp"
// Including type: MasterServer.MessageHandler/<GetAndSendResponseAsync>d__82`2
#include "MasterServer/MessageHandler_-GetAndSendResponseAsync-d__82_2.hpp"
// Including type: MasterServer.MessageHandler/<GetAndSendUnreilableResponse>d__83`2
#include "MasterServer/MessageHandler_-GetAndSendUnreilableResponse-d__83_2.hpp"
// Including type: MasterServer.MessageHandler/<SendMessageWithRetry>d__96
#include "MasterServer/MessageHandler_-SendMessageWithRetry-d__96.hpp"
// Including type: MasterServer.MessageHandler/<>c__DisplayClass98_0
#include "MasterServer/MessageHandler_--c__DisplayClass98_0.hpp"
// Including type: MasterServer.MessageHandler/<SendMultipartMessageWithRetryAsync>d__98
#include "MasterServer/MessageHandler_-SendMultipartMessageWithRetryAsync-d__98.hpp"
// Including type: MasterServer.MessageHandler/<SendMessageWithRetryAsyncInternal>d__99
#include "MasterServer/MessageHandler_-SendMessageWithRetryAsyncInternal-d__99.hpp"
// Including type: MasterServer.MessageHandler/<SendMessageWithRetryAwaitResponseAsync>d__100`1
#include "MasterServer/MessageHandler_-SendMessageWithRetryAwaitResponseAsync-d__100_1.hpp"
// Including type: MasterServer.MessageHandler/<>c__DisplayClass101_0`1
#include "MasterServer/MessageHandler_--c__DisplayClass101_0_1.hpp"
// Including type: MasterServer.MessageHandler/<AwaitResponseAsync>d__102`1
#include "MasterServer/MessageHandler_-AwaitResponseAsync-d__102_1.hpp"
// Including type: NetworkPacketSerializer`2
#include "GlobalNamespace/NetworkPacketSerializer_2.hpp"
// Including type: TimedCircularBuffer`2
#include "GlobalNamespace/TimedCircularBuffer_2.hpp"
// Including type: System.Threading.CancellationTokenSource
#include "System/Threading/CancellationTokenSource.hpp"
// Including type: MasterServer.IHandshakeMessage
#include "MasterServer/IHandshakeMessage.hpp"
// Including type: MasterServer.ClientHelloRequest
#include "MasterServer/ClientHelloRequest.hpp"
// Including type: MasterServer.HelloVerifyRequest
#include "MasterServer/HelloVerifyRequest.hpp"
// Including type: MasterServer.ClientHelloWithCookieRequest
#include "MasterServer/ClientHelloWithCookieRequest.hpp"
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
// Including type: MasterServer.BroadcastServerStatusRequest
#include "MasterServer/BroadcastServerStatusRequest.hpp"
// Including type: MasterServer.BroadcastServerHeartbeatRequest
#include "MasterServer/BroadcastServerHeartbeatRequest.hpp"
// Including type: MasterServer.BroadcastServerHeartbeatResponse
#include "MasterServer/BroadcastServerHeartbeatResponse.hpp"
// Including type: MasterServer.BroadcastServerRemoveRequest
#include "MasterServer/BroadcastServerRemoveRequest.hpp"
// Including type: MasterServer.ConnectToServerRequest
#include "MasterServer/ConnectToServerRequest.hpp"
// Including type: MasterServer.ConnectToMatchmakingRequest
#include "MasterServer/ConnectToMatchmakingRequest.hpp"
// Including type: MasterServer.PrepareForConnectionRequest
#include "MasterServer/PrepareForConnectionRequest.hpp"
// Including type: MasterServer.GetPublicServersRequest
#include "MasterServer/GetPublicServersRequest.hpp"
// Including type: MasterServer.SessionKeepaliveMessage
#include "MasterServer/SessionKeepaliveMessage.hpp"
// Including type: MasterServer.IDedicatedServerMessage
#include "MasterServer/IDedicatedServerMessage.hpp"
// Including type: MasterServer.GetAvailableRelayServerRequest
#include "MasterServer/GetAvailableRelayServerRequest.hpp"
// Including type: MasterServer.GetAvailableMatchmakingServerRequest
#include "MasterServer/GetAvailableMatchmakingServerRequest.hpp"
// Including type: MasterServer.DedicatedServerNoLongerOccupiedRequest
#include "MasterServer/DedicatedServerNoLongerOccupiedRequest.hpp"
// Including type: MasterServer.DedicatedServerHeartbeatRequest
#include "MasterServer/DedicatedServerHeartbeatRequest.hpp"
// Including type: MasterServer.DedicatedServerHeartbeatResponse
#include "MasterServer/DedicatedServerHeartbeatResponse.hpp"
// Including type: MasterServer.RelayServerStatusUpdateRequest
#include "MasterServer/RelayServerStatusUpdateRequest.hpp"
// Including type: MasterServer.MatchmakingServerStatusUpdateRequest
#include "MasterServer/MatchmakingServerStatusUpdateRequest.hpp"
// Including type: MasterServer.DedicatedServerShutDownRequest
#include "MasterServer/DedicatedServerShutDownRequest.hpp"
// Including type: MasterServer.DedicatedServerPrepareForConnectionRequest
#include "MasterServer/DedicatedServerPrepareForConnectionRequest.hpp"
// Including type: MasterServer.IMasterServerMessage
#include "MasterServer/IMasterServerMessage.hpp"
// Including type: MasterServer.IMasterServerAcknowledgeMessage
#include "MasterServer/IMasterServerAcknowledgeMessage.hpp"
// Including type: MasterServer.IMasterServerReliableResponse
#include "MasterServer/IMasterServerReliableResponse.hpp"
// Including type: MasterServer.IMasterServerMultipartMessage
#include "MasterServer/IMasterServerMultipartMessage.hpp"
// Including type: MasterServer.IMasterServerReliableRequest
#include "MasterServer/IMasterServerReliableRequest.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: MasterServer.IMasterServerUnreliableMessage
#include "MasterServer/IMasterServerUnreliableMessage.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: MasterServer.IMasterServerResponse
#include "MasterServer/IMasterServerResponse.hpp"
// Including type: System.Func`3
#include "System/Func_3.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Func`1
#include "System/Func_1.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.Func`5
#include "System/Func_5.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: INetworkPacketSerializer`1
#include "GlobalNamespace/INetworkPacketSerializer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.UInt32 kHandshakeMessageType
uint MasterServer::MessageHandler::_get_kHandshakeMessageType() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint>("MasterServer", "MessageHandler", "kHandshakeMessageType"));
}
// Autogenerated static field setter
// Set static field: static private System.UInt32 kHandshakeMessageType
void MasterServer::MessageHandler::_set_kHandshakeMessageType(uint value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kHandshakeMessageType", value));
}
// Autogenerated static field getter
// Get static field: static private System.UInt32 kUserMessageType
uint MasterServer::MessageHandler::_get_kUserMessageType() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint>("MasterServer", "MessageHandler", "kUserMessageType"));
}
// Autogenerated static field setter
// Set static field: static private System.UInt32 kUserMessageType
void MasterServer::MessageHandler::_set_kUserMessageType(uint value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kUserMessageType", value));
}
// Autogenerated static field getter
// Get static field: static private System.UInt32 kDedicatedServerMessageType
uint MasterServer::MessageHandler::_get_kDedicatedServerMessageType() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint>("MasterServer", "MessageHandler", "kDedicatedServerMessageType"));
}
// Autogenerated static field setter
// Set static field: static private System.UInt32 kDedicatedServerMessageType
void MasterServer::MessageHandler::_set_kDedicatedServerMessageType(uint value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kDedicatedServerMessageType", value));
}
// Autogenerated static field getter
// Get static field: static public System.UInt32 kProtocolVersion
uint MasterServer::MessageHandler::_get_kProtocolVersion() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint>("MasterServer", "MessageHandler", "kProtocolVersion"));
}
// Autogenerated static field setter
// Set static field: static public System.UInt32 kProtocolVersion
void MasterServer::MessageHandler::_set_kProtocolVersion(uint value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kProtocolVersion", value));
}
// Autogenerated static field getter
// Get static field: static public System.Int32 kMaxPublicKeyLength
int MasterServer::MessageHandler::_get_kMaxPublicKeyLength() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "MessageHandler", "kMaxPublicKeyLength"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kMaxPublicKeyLength
void MasterServer::MessageHandler::_set_kMaxPublicKeyLength(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kMaxPublicKeyLength", value));
}
// Autogenerated static field getter
// Get static field: static public System.Int32 kMinSignatureLength
int MasterServer::MessageHandler::_get_kMinSignatureLength() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "MessageHandler", "kMinSignatureLength"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kMinSignatureLength
void MasterServer::MessageHandler::_set_kMinSignatureLength(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kMinSignatureLength", value));
}
// Autogenerated static field getter
// Get static field: static public System.Int32 kMaxSignatureLength
int MasterServer::MessageHandler::_get_kMaxSignatureLength() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "MessageHandler", "kMaxSignatureLength"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kMaxSignatureLength
void MasterServer::MessageHandler::_set_kMaxSignatureLength(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kMaxSignatureLength", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kMaxPacketSize
int MasterServer::MessageHandler::_get_kMaxPacketSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "MessageHandler", "kMaxPacketSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kMaxPacketSize
void MasterServer::MessageHandler::_set_kMaxPacketSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kMaxPacketSize", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kRetryCount
int MasterServer::MessageHandler::_get_kRetryCount() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "MessageHandler", "kRetryCount"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kRetryCount
void MasterServer::MessageHandler::_set_kRetryCount(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kRetryCount", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kRetryDelay0Ms
int MasterServer::MessageHandler::_get_kRetryDelay0Ms() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "MessageHandler", "kRetryDelay0Ms"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kRetryDelay0Ms
void MasterServer::MessageHandler::_set_kRetryDelay0Ms(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kRetryDelay0Ms", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kRetryDelay1Ms
int MasterServer::MessageHandler::_get_kRetryDelay1Ms() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "MessageHandler", "kRetryDelay1Ms"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kRetryDelay1Ms
void MasterServer::MessageHandler::_set_kRetryDelay1Ms(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kRetryDelay1Ms", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kRetryDelay2Ms
int MasterServer::MessageHandler::_get_kRetryDelay2Ms() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "MessageHandler", "kRetryDelay2Ms"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kRetryDelay2Ms
void MasterServer::MessageHandler::_set_kRetryDelay2Ms(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kRetryDelay2Ms", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kRetryDelay3Ms
int MasterServer::MessageHandler::_get_kRetryDelay3Ms() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "MessageHandler", "kRetryDelay3Ms"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kRetryDelay3Ms
void MasterServer::MessageHandler::_set_kRetryDelay3Ms(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kRetryDelay3Ms", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kRetryDelay4Ms
int MasterServer::MessageHandler::_get_kRetryDelay4Ms() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("MasterServer", "MessageHandler", "kRetryDelay4Ms"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kRetryDelay4Ms
void MasterServer::MessageHandler::_set_kRetryDelay4Ms(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kRetryDelay4Ms", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kSentRequestTimeout
float MasterServer::MessageHandler::_get_kSentRequestTimeout() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("MasterServer", "MessageHandler", "kSentRequestTimeout"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kSentRequestTimeout
void MasterServer::MessageHandler::_set_kSentRequestTimeout(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kSentRequestTimeout", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kSentRequestWithResponseTimeout
float MasterServer::MessageHandler::_get_kSentRequestWithResponseTimeout() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("MasterServer", "MessageHandler", "kSentRequestWithResponseTimeout"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kSentRequestWithResponseTimeout
void MasterServer::MessageHandler::_set_kSentRequestWithResponseTimeout(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kSentRequestWithResponseTimeout", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kReceivedRequestTimeout
float MasterServer::MessageHandler::_get_kReceivedRequestTimeout() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("MasterServer", "MessageHandler", "kReceivedRequestTimeout"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kReceivedRequestTimeout
void MasterServer::MessageHandler::_set_kReceivedRequestTimeout(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kReceivedRequestTimeout", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kMultipartMessageTimeout
float MasterServer::MessageHandler::_get_kMultipartMessageTimeout() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("MasterServer", "MessageHandler", "kMultipartMessageTimeout"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kMultipartMessageTimeout
void MasterServer::MessageHandler::_set_kMultipartMessageTimeout(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "MessageHandler", "kMultipartMessageTimeout", value));
}
// Autogenerated method: MasterServer.MessageHandler..ctor
MasterServer::MessageHandler* MasterServer::MessageHandler::New_ctor(MasterServer::MessageHandler::IMessageSender* sender, GlobalNamespace::PacketEncryptionLayer* encryptionLayer, MasterServer::IAnalyticsManager* analytics) {
  return THROW_UNLESS(il2cpp_utils::New<MessageHandler*>(sender, encryptionLayer, analytics));
}
// Autogenerated method: MasterServer.MessageHandler.RegisterHandshakeMessageHandlers
void MasterServer::MessageHandler::RegisterHandshakeMessageHandlers() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RegisterHandshakeMessageHandlers"));
}
// Autogenerated method: MasterServer.MessageHandler.ShouldHandleHandshakeMessage
bool MasterServer::MessageHandler::ShouldHandleHandshakeMessage(MasterServer::IHandshakeMessage* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ShouldHandleHandshakeMessage", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleClientHelloRequest
void MasterServer::MessageHandler::HandleClientHelloRequest(MasterServer::ClientHelloRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleClientHelloRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleHelloVerifyRequest
void MasterServer::MessageHandler::HandleHelloVerifyRequest(MasterServer::HelloVerifyRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleHelloVerifyRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleClientHelloWithCookieRequest
void MasterServer::MessageHandler::HandleClientHelloWithCookieRequest(MasterServer::ClientHelloWithCookieRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleClientHelloWithCookieRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.RegisterUserMessageHandlers
void MasterServer::MessageHandler::RegisterUserMessageHandlers() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RegisterUserMessageHandlers"));
}
// Autogenerated method: MasterServer.MessageHandler.ShouldHandleUserMessage
bool MasterServer::MessageHandler::ShouldHandleUserMessage(MasterServer::IUserMessage* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ShouldHandleUserMessage", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleBroadcastServerStatusRequest
void MasterServer::MessageHandler::HandleBroadcastServerStatusRequest(MasterServer::BroadcastServerStatusRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBroadcastServerStatusRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleBroadcastServerHeartbeatRequest
void MasterServer::MessageHandler::HandleBroadcastServerHeartbeatRequest(MasterServer::BroadcastServerHeartbeatRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBroadcastServerHeartbeatRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleBroadcastServerHeartbeatResponse
void MasterServer::MessageHandler::HandleBroadcastServerHeartbeatResponse(MasterServer::BroadcastServerHeartbeatResponse* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBroadcastServerHeartbeatResponse", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleBroadcastServerRemoveRequest
void MasterServer::MessageHandler::HandleBroadcastServerRemoveRequest(MasterServer::BroadcastServerRemoveRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBroadcastServerRemoveRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleConnectToServerRequest
void MasterServer::MessageHandler::HandleConnectToServerRequest(MasterServer::ConnectToServerRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleConnectToServerRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleConnectToMatchmakingRequest
void MasterServer::MessageHandler::HandleConnectToMatchmakingRequest(MasterServer::ConnectToMatchmakingRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleConnectToMatchmakingRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandlePrepareForConnectionRequest
void MasterServer::MessageHandler::HandlePrepareForConnectionRequest(MasterServer::PrepareForConnectionRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePrepareForConnectionRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleGetPublicServersRequest
void MasterServer::MessageHandler::HandleGetPublicServersRequest(MasterServer::GetPublicServersRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleGetPublicServersRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleSessionKeepaliveMessage
void MasterServer::MessageHandler::HandleSessionKeepaliveMessage(MasterServer::SessionKeepaliveMessage* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleSessionKeepaliveMessage", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.RegisterDedicatedServerHandlers
void MasterServer::MessageHandler::RegisterDedicatedServerHandlers() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RegisterDedicatedServerHandlers"));
}
// Autogenerated method: MasterServer.MessageHandler.ShouldHandleDedicatedServerMessage
bool MasterServer::MessageHandler::ShouldHandleDedicatedServerMessage(MasterServer::IDedicatedServerMessage* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ShouldHandleDedicatedServerMessage", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleGetAvailableRelayServerRequest
void MasterServer::MessageHandler::HandleGetAvailableRelayServerRequest(MasterServer::GetAvailableRelayServerRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleGetAvailableRelayServerRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleGetAvailableMatchmakingServerRequest
void MasterServer::MessageHandler::HandleGetAvailableMatchmakingServerRequest(MasterServer::GetAvailableMatchmakingServerRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleGetAvailableMatchmakingServerRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleDedicatedServerUnavailableRequest
void MasterServer::MessageHandler::HandleDedicatedServerUnavailableRequest(MasterServer::DedicatedServerNoLongerOccupiedRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDedicatedServerUnavailableRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleDedicatedServerHeartbeatRequest
void MasterServer::MessageHandler::HandleDedicatedServerHeartbeatRequest(MasterServer::DedicatedServerHeartbeatRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDedicatedServerHeartbeatRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleDedicatedServerHeartbeatResponse
void MasterServer::MessageHandler::HandleDedicatedServerHeartbeatResponse(MasterServer::DedicatedServerHeartbeatResponse* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDedicatedServerHeartbeatResponse", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleRelayServerStatusUpdateRequest
void MasterServer::MessageHandler::HandleRelayServerStatusUpdateRequest(MasterServer::RelayServerStatusUpdateRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleRelayServerStatusUpdateRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleMatchmakingServerStatusUpdateRequest
void MasterServer::MessageHandler::HandleMatchmakingServerStatusUpdateRequest(MasterServer::MatchmakingServerStatusUpdateRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleMatchmakingServerStatusUpdateRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleDedicatedServerShutDownRequest
void MasterServer::MessageHandler::HandleDedicatedServerShutDownRequest(MasterServer::DedicatedServerShutDownRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDedicatedServerShutDownRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.HandleDedicatedServerPrepareForConnectionRequest
void MasterServer::MessageHandler::HandleDedicatedServerPrepareForConnectionRequest(MasterServer::DedicatedServerPrepareForConnectionRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDedicatedServerPrepareForConnectionRequest", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.IsNewRequest
bool MasterServer::MessageHandler::IsNewRequest(MasterServer::IMasterServerReliableRequest* packet, System::Net::IPEndPoint* remoteEndPoint) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsNewRequest", packet, remoteEndPoint));
}
// Autogenerated method: MasterServer.MessageHandler.IsUnhandledMessage
bool MasterServer::MessageHandler::IsUnhandledMessage(MasterServer::IMasterServerReliableRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsUnhandledMessage", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.CompleteSend
void MasterServer::MessageHandler::CompleteSend(MasterServer::IMasterServerResponse* packet, System::Net::IPEndPoint* remoteEndPoint) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CompleteSend", packet, remoteEndPoint));
}
// Autogenerated method: MasterServer.MessageHandler.CompleteRequest
bool MasterServer::MessageHandler::CompleteRequest(MasterServer::IMasterServerReliableResponse* packet, System::Net::IPEndPoint* remoteEndPoint) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CompleteRequest", packet, remoteEndPoint));
}
// Autogenerated method: MasterServer.MessageHandler.ShouldHandleMessage
bool MasterServer::MessageHandler::ShouldHandleMessage(MasterServer::IMasterServerMessage* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ShouldHandleMessage", packet, origin));
}
// Autogenerated method: MasterServer.MessageHandler.SendUnreliableMessage
void MasterServer::MessageHandler::SendUnreliableMessage(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerUnreliableMessage* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendUnreliableMessage", protocolVersion, remoteEndPoint, message));
}
// Autogenerated method: MasterServer.MessageHandler.SendUnreliableResponse
void MasterServer::MessageHandler::SendUnreliableResponse(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* request, MasterServer::IMasterServerResponse* response) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendUnreliableResponse", protocolVersion, remoteEndPoint, request, response));
}
// Autogenerated method: MasterServer.MessageHandler.SendUnreliableResponse
void MasterServer::MessageHandler::SendUnreliableResponse(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, uint responseId, MasterServer::IMasterServerResponse* response) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendUnreliableResponse", protocolVersion, remoteEndPoint, responseId, response));
}
// Autogenerated method: MasterServer.MessageHandler.SendReliableRequest
void MasterServer::MessageHandler::SendReliableRequest(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* request, System::Threading::CancellationToken cancellationToken) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendReliableRequest", protocolVersion, remoteEndPoint, request, cancellationToken));
}
// Autogenerated method: MasterServer.MessageHandler.SendReliableRequestAsync
System::Threading::Tasks::Task* MasterServer::MessageHandler::SendReliableRequestAsync(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* request, System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task*>* onSendFailed, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "SendReliableRequestAsync", protocolVersion, remoteEndPoint, request, onSendFailed, cancellationToken));
}
// Autogenerated method: MasterServer.MessageHandler.SendReliableResponse
void MasterServer::MessageHandler::SendReliableResponse(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* request, MasterServer::IMasterServerReliableResponse* response, System::Threading::CancellationToken cancellationToken) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendReliableResponse", protocolVersion, remoteEndPoint, request, response, cancellationToken));
}
// Autogenerated method: MasterServer.MessageHandler.SendReliableResponse
void MasterServer::MessageHandler::SendReliableResponse(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, uint responseId, MasterServer::IMasterServerReliableResponse* response, System::Threading::CancellationToken cancellationToken) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendReliableResponse", protocolVersion, remoteEndPoint, responseId, response, cancellationToken));
}
// Autogenerated method: MasterServer.MessageHandler.SendReliableResponseAsync
System::Threading::Tasks::Task* MasterServer::MessageHandler::SendReliableResponseAsync(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* request, MasterServer::IMasterServerReliableResponse* response, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "SendReliableResponseAsync", protocolVersion, remoteEndPoint, request, response, cancellationToken));
}
// Autogenerated method: MasterServer.MessageHandler.SendMessage
void MasterServer::MessageHandler::SendMessage(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerMessage* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendMessage", protocolVersion, remoteEndPoint, message));
}
// Autogenerated method: MasterServer.MessageHandler.SendMessageWithRetry
void MasterServer::MessageHandler::SendMessageWithRetry(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* message, System::Threading::CancellationToken cancellationToken) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendMessageWithRetry", protocolVersion, remoteEndPoint, message, cancellationToken));
}
// Autogenerated method: MasterServer.MessageHandler.SendMessageWithRetryAsync
System::Threading::Tasks::Task* MasterServer::MessageHandler::SendMessageWithRetryAsync(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* message, System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task*>* onSendFailed, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "SendMessageWithRetryAsync", protocolVersion, remoteEndPoint, message, onSendFailed, cancellationToken));
}
// Autogenerated method: MasterServer.MessageHandler.SendMultipartMessageWithRetryAsync
System::Threading::Tasks::Task* MasterServer::MessageHandler::SendMultipartMessageWithRetryAsync(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* message, LiteNetLib::Utils::NetDataWriter* data, System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task*>* onSendFailed, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "SendMultipartMessageWithRetryAsync", protocolVersion, remoteEndPoint, message, data, onSendFailed, cancellationToken));
}
// Autogenerated method: MasterServer.MessageHandler.SendMessageWithRetryAsyncInternal
System::Threading::Tasks::Task* MasterServer::MessageHandler::SendMessageWithRetryAsyncInternal(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* message, System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task*>* onSendFailed, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "SendMessageWithRetryAsyncInternal", protocolVersion, remoteEndPoint, message, onSendFailed, cancellationToken));
}
// Autogenerated method: MasterServer.MessageHandler.WaitForRetry
System::Threading::Tasks::Task* MasterServer::MessageHandler::WaitForRetry(int retryAttempt, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "WaitForRetry", retryAttempt, cancellationToken));
}
// Autogenerated method: MasterServer.MessageHandler.Write
LiteNetLib::Utils::NetDataWriter* MasterServer::MessageHandler::Write(uint protocolVersion, LiteNetLib::Utils::INetSerializable* message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<LiteNetLib::Utils::NetDataWriter*>(this, "Write", protocolVersion, message));
}
// Autogenerated method: MasterServer.MessageHandler.PollUpdate
void MasterServer::MessageHandler::PollUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PollUpdate"));
}
// Autogenerated method: MasterServer.MessageHandler.ReceiveMessage
void MasterServer::MessageHandler::ReceiveMessage(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReceiveMessage", remoteEndPoint, reader));
}
// Autogenerated method: MasterServer.MessageHandler.ShouldHandleMessageFromEndPoint
bool MasterServer::MessageHandler::ShouldHandleMessageFromEndPoint(System::Net::IPEndPoint* endPoint) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ShouldHandleMessageFromEndPoint", endPoint));
}
// Autogenerated method: MasterServer.MessageHandler.ReceivedMessageException
void MasterServer::MessageHandler::ReceivedMessageException(System::Net::IPEndPoint* endPoint, System::Exception* ex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReceivedMessageException", endPoint, ex));
}
// Autogenerated method: MasterServer.MessageHandler.ResetEpoch
void MasterServer::MessageHandler::ResetEpoch() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResetEpoch"));
}
// Autogenerated method: MasterServer.MessageHandler.GetNextRequestId
uint MasterServer::MessageHandler::GetNextRequestId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetNextRequestId"));
}
// Autogenerated method: MasterServer.MessageHandler.GetSerializer
GlobalNamespace::INetworkPacketSerializer_1<MasterServer::MessageHandler::MessageOrigin>* MasterServer::MessageHandler::GetSerializer(uint protocolVersion, uint messageType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::INetworkPacketSerializer_1<MasterServer::MessageHandler::MessageOrigin>*>(this, "GetSerializer", protocolVersion, messageType));
}
// Autogenerated method: MasterServer.MessageHandler.CreateHandshakeHeader
::Array<uint8_t>* MasterServer::MessageHandler::CreateHandshakeHeader() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("MasterServer", "MessageHandler", "CreateHandshakeHeader"));
}
// Autogenerated method: MasterServer.MessageHandler.Dispose
void MasterServer::MessageHandler::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void MasterServer::MessageHandler::System_IDisposable_Dispose() {
  MasterServer::MessageHandler::Dispose();
}
