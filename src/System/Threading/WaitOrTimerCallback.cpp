// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.WaitOrTimerCallback
#include "System/Threading/WaitOrTimerCallback.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.WaitOrTimerCallback..ctor
System::Threading::WaitOrTimerCallback* System::Threading::WaitOrTimerCallback::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<WaitOrTimerCallback*>(object, method));
}
// Autogenerated method: System.Threading.WaitOrTimerCallback.Invoke
void System::Threading::WaitOrTimerCallback::Invoke(::Il2CppObject* state, bool timedOut) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", state, timedOut));
}
// Autogenerated method: System.Threading.WaitOrTimerCallback.BeginInvoke
System::IAsyncResult* System::Threading::WaitOrTimerCallback::BeginInvoke(::Il2CppObject* state, bool timedOut, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", state, timedOut, callback, object));
}
// Autogenerated method: System.Threading.WaitOrTimerCallback.EndInvoke
void System::Threading::WaitOrTimerCallback::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
