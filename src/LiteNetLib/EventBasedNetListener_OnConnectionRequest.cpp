// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener/OnConnectionRequest
#include "LiteNetLib/EventBasedNetListener_OnConnectionRequest.hpp"
// Including type: LiteNetLib.ConnectionRequest
#include "LiteNetLib/ConnectionRequest.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnConnectionRequest..ctor
LiteNetLib::EventBasedNetListener::OnConnectionRequest* LiteNetLib::EventBasedNetListener::OnConnectionRequest::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<EventBasedNetListener::OnConnectionRequest*>(object, method));
}
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnConnectionRequest.Invoke
void LiteNetLib::EventBasedNetListener::OnConnectionRequest::Invoke(LiteNetLib::ConnectionRequest* request) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", request));
}
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnConnectionRequest.BeginInvoke
System::IAsyncResult* LiteNetLib::EventBasedNetListener::OnConnectionRequest::BeginInvoke(LiteNetLib::ConnectionRequest* request, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", request, callback, object));
}
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnConnectionRequest.EndInvoke
void LiteNetLib::EventBasedNetListener::OnConnectionRequest::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
