// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.AsyncResult
#include "System/Runtime/Remoting/Messaging/AsyncResult.hpp"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "System/Runtime/Remoting/Messaging/MonoMethodMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageCtrl
#include "System/Runtime/Remoting/Messaging/IMessageCtrl.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
// Including type: System.Threading.WaitCallback
#include "System/Threading/WaitCallback.hpp"
// Including type: System.Threading.ContextCallback
#include "System/Threading/ContextCallback.hpp"
// Including type: System.Threading.ThreadAbortException
#include "System/Threading/ThreadAbortException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.Threading.ContextCallback ccb
System::Threading::ContextCallback* System::Runtime::Remoting::Messaging::AsyncResult::_get_ccb() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::ContextCallback*>("System.Runtime.Remoting.Messaging", "AsyncResult", "ccb"));
}
// Autogenerated static field setter
// Set static field: static System.Threading.ContextCallback ccb
void System::Runtime::Remoting::Messaging::AsyncResult::_set_ccb(System::Threading::ContextCallback* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Messaging", "AsyncResult", "ccb", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult..ctor
System::Runtime::Remoting::Messaging::AsyncResult* System::Runtime::Remoting::Messaging::AsyncResult::New_ctor(System::Threading::WaitCallback* cb, ::Il2CppObject* state, bool capture_context) {
  return (AsyncResult*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "AsyncResult", cb, state, capture_context));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.WaitCallback_Context
void System::Runtime::Remoting::Messaging::AsyncResult::WaitCallback_Context(::Il2CppObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Messaging", "AsyncResult", "WaitCallback_Context", state));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.get_CompletedSynchronously
bool System::Runtime::Remoting::Messaging::AsyncResult::get_CompletedSynchronously() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CompletedSynchronously"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.get_IsCompleted
bool System::Runtime::Remoting::Messaging::AsyncResult::get_IsCompleted() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCompleted"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.get_EndInvokeCalled
bool System::Runtime::Remoting::Messaging::AsyncResult::get_EndInvokeCalled() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_EndInvokeCalled"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.set_EndInvokeCalled
void System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_EndInvokeCalled", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.get_AsyncDelegate
::Il2CppObject* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_AsyncDelegate"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.get_NextSink
System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::AsyncResult::get_NextSink() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageSink*>(this, "get_NextSink"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.GetReplyMessage
System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::GetReplyMessage() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessage*>(this, "GetReplyMessage"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.SetMessageCtrl
void System::Runtime::Remoting::Messaging::AsyncResult::SetMessageCtrl(System::Runtime::Remoting::Messaging::IMessageCtrl* mc) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetMessageCtrl", mc));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.SetCompletedSynchronously
void System::Runtime::Remoting::Messaging::AsyncResult::SetCompletedSynchronously(bool completed) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCompletedSynchronously", completed));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.EndInvoke
System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessage*>(this, "EndInvoke"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.get_CallMessage
System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::AsyncResult::get_CallMessage() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::MonoMethodMessage*>(this, "get_CallMessage"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.set_CallMessage
void System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage(System::Runtime::Remoting::Messaging::MonoMethodMessage* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_CallMessage", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.Invoke
::Il2CppObject* System::Runtime::Remoting::Messaging::AsyncResult::Invoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Invoke"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult..cctor
void System::Runtime::Remoting::Messaging::AsyncResult::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Messaging", "AsyncResult", ".cctor"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.<.ctor>b__17_0
void System::Runtime::Remoting::Messaging::AsyncResult::$_ctor$b__17_0(::Il2CppObject* $p0$) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<.ctor>b__17_0", $p0$));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult..ctor
System::Runtime::Remoting::Messaging::AsyncResult* System::Runtime::Remoting::Messaging::AsyncResult::New_ctor() {
  return (AsyncResult*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "AsyncResult"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.get_AsyncState
::Il2CppObject* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_AsyncState"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.get_AsyncWaitHandle
System::Threading::WaitHandle* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncWaitHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::WaitHandle*>(this, "get_AsyncWaitHandle"));
}
System::Threading::WaitHandle* System::Runtime::Remoting::Messaging::AsyncResult::System_IAsyncResult_get_AsyncWaitHandle() {
  return System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncWaitHandle();
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.AsyncProcessMessage
System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::Messaging::AsyncResult::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, "AsyncProcessMessage", msg, replySink));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.SyncProcessMessage
System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessage*>(this, "SyncProcessMessage", msg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.System.Threading.IThreadPoolWorkItem.ExecuteWorkItem
void System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.AsyncResult.System.Threading.IThreadPoolWorkItem.MarkAborted
void System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Threading.IThreadPoolWorkItem.MarkAborted", tae));
}
