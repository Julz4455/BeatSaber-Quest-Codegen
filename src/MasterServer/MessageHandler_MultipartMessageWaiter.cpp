// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler/MultipartMessageWaiter
#include "MasterServer/MessageHandler_MultipartMessageWaiter.hpp"
// Including type: SmallBufferPool
#include "GlobalNamespace/SmallBufferPool.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: MasterServer.IMasterServerMultipartMessage
#include "MasterServer/IMasterServerMultipartMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.MessageHandler/MultipartMessageWaiter..ctor
MasterServer::MessageHandler::MultipartMessageWaiter* MasterServer::MessageHandler::MultipartMessageWaiter::New_ctor(GlobalNamespace::SmallBufferPool* bufferPool) {
  return THROW_UNLESS(il2cpp_utils::New<MessageHandler::MultipartMessageWaiter*>(bufferPool));
}
// Autogenerated method: MasterServer.MessageHandler/MultipartMessageWaiter.Append
void MasterServer::MessageHandler::MultipartMessageWaiter::Append(MasterServer::IMasterServerMultipartMessage* packet) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Append", packet));
}
// Autogenerated method: MasterServer.MessageHandler/MultipartMessageWaiter.get_isWaiting
bool MasterServer::MessageHandler::MultipartMessageWaiter::get_isWaiting() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isWaiting"));
}
// Autogenerated method: MasterServer.MessageHandler/MultipartMessageWaiter.get_data
::Array<uint8_t>* MasterServer::MessageHandler::MultipartMessageWaiter::get_data() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_data"));
}
// Autogenerated method: MasterServer.MessageHandler/MultipartMessageWaiter.get_length
int MasterServer::MessageHandler::MultipartMessageWaiter::get_length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_length"));
}
// Autogenerated method: MasterServer.MessageHandler/MultipartMessageWaiter.Dispose
void MasterServer::MessageHandler::MultipartMessageWaiter::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void MasterServer::MessageHandler::MultipartMessageWaiter::System_IDisposable_Dispose() {
  MasterServer::MessageHandler::MultipartMessageWaiter::Dispose();
}
