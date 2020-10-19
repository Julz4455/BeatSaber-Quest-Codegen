// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.LazyAsyncResult
#include "System/Net/LazyAsyncResult.hpp"
// Including type: System.Net.LazyAsyncResult/ThreadContext
#include "System/Net/LazyAsyncResult_ThreadContext.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: System.Threading.ManualResetEvent
#include "System/Threading/ManualResetEvent.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Net.LazyAsyncResult/ThreadContext t_ThreadContext
System::Net::LazyAsyncResult::ThreadContext* System::Net::LazyAsyncResult::_get_t_ThreadContext() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Net::LazyAsyncResult::ThreadContext*>("System.Net", "LazyAsyncResult", "t_ThreadContext"));
}
// Autogenerated static field setter
// Set static field: static private System.Net.LazyAsyncResult/ThreadContext t_ThreadContext
void System::Net::LazyAsyncResult::_set_t_ThreadContext(System::Net::LazyAsyncResult::ThreadContext* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "LazyAsyncResult", "t_ThreadContext", value));
}
// Autogenerated method: System.Net.LazyAsyncResult.get_CurrentThreadContext
System::Net::LazyAsyncResult::ThreadContext* System::Net::LazyAsyncResult::get_CurrentThreadContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::LazyAsyncResult::ThreadContext*>("System.Net", "LazyAsyncResult", "get_CurrentThreadContext"));
}
// Autogenerated method: System.Net.LazyAsyncResult..ctor
System::Net::LazyAsyncResult* System::Net::LazyAsyncResult::New_ctor(::Il2CppObject* myObject, ::Il2CppObject* myState, System::AsyncCallback* myCallBack) {
  return THROW_UNLESS(il2cpp_utils::New<LazyAsyncResult*>(myObject, myState, myCallBack));
}
// Autogenerated method: System.Net.LazyAsyncResult.get_AsyncObject
::Il2CppObject* System::Net::LazyAsyncResult::get_AsyncObject() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_AsyncObject"));
}
// Autogenerated method: System.Net.LazyAsyncResult.LazilyCreateEvent
bool System::Net::LazyAsyncResult::LazilyCreateEvent(System::Threading::ManualResetEvent*& waitHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "LazilyCreateEvent", waitHandle));
}
// Autogenerated method: System.Net.LazyAsyncResult.get_InternalPeekCompleted
bool System::Net::LazyAsyncResult::get_InternalPeekCompleted() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_InternalPeekCompleted"));
}
// Autogenerated method: System.Net.LazyAsyncResult.ProtectedInvokeCallback
void System::Net::LazyAsyncResult::ProtectedInvokeCallback(::Il2CppObject* result, System::IntPtr userToken) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProtectedInvokeCallback", result, userToken));
}
// Autogenerated method: System.Net.LazyAsyncResult.InvokeCallback
void System::Net::LazyAsyncResult::InvokeCallback(::Il2CppObject* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeCallback", result));
}
// Autogenerated method: System.Net.LazyAsyncResult.Complete
void System::Net::LazyAsyncResult::Complete(System::IntPtr userToken) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Complete", userToken));
}
// Autogenerated method: System.Net.LazyAsyncResult.WorkerThreadComplete
void System::Net::LazyAsyncResult::WorkerThreadComplete(::Il2CppObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WorkerThreadComplete", state));
}
// Autogenerated method: System.Net.LazyAsyncResult.Cleanup
void System::Net::LazyAsyncResult::Cleanup() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Cleanup"));
}
// Autogenerated method: System.Net.LazyAsyncResult.InternalWaitForCompletion
::Il2CppObject* System::Net::LazyAsyncResult::InternalWaitForCompletion() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "InternalWaitForCompletion"));
}
// Autogenerated method: System.Net.LazyAsyncResult.WaitForCompletion
::Il2CppObject* System::Net::LazyAsyncResult::WaitForCompletion(bool snap) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "WaitForCompletion", snap));
}
// Autogenerated method: System.Net.LazyAsyncResult.get_AsyncState
::Il2CppObject* System::Net::LazyAsyncResult::get_AsyncState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_AsyncState"));
}
::Il2CppObject* System::Net::LazyAsyncResult::System_IAsyncResult_get_AsyncState() {
  return System::Net::LazyAsyncResult::get_AsyncState();
}
// Autogenerated method: System.Net.LazyAsyncResult.get_AsyncWaitHandle
System::Threading::WaitHandle* System::Net::LazyAsyncResult::get_AsyncWaitHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::WaitHandle*>(this, "get_AsyncWaitHandle"));
}
System::Threading::WaitHandle* System::Net::LazyAsyncResult::System_IAsyncResult_get_AsyncWaitHandle() {
  return System::Net::LazyAsyncResult::get_AsyncWaitHandle();
}
// Autogenerated method: System.Net.LazyAsyncResult.get_CompletedSynchronously
bool System::Net::LazyAsyncResult::get_CompletedSynchronously() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CompletedSynchronously"));
}
bool System::Net::LazyAsyncResult::System_IAsyncResult_get_CompletedSynchronously() {
  return System::Net::LazyAsyncResult::get_CompletedSynchronously();
}
// Autogenerated method: System.Net.LazyAsyncResult.get_IsCompleted
bool System::Net::LazyAsyncResult::get_IsCompleted() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCompleted"));
}
bool System::Net::LazyAsyncResult::System_IAsyncResult_get_IsCompleted() {
  return System::Net::LazyAsyncResult::get_IsCompleted();
}