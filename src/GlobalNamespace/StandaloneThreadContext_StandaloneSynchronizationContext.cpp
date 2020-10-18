// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandaloneThreadContext/StandaloneSynchronizationContext
#include "GlobalNamespace/StandaloneThreadContext_StandaloneSynchronizationContext.hpp"
// Including type: System.Threading.SendOrPostCallback
#include "System/Threading/SendOrPostCallback.hpp"
// Including type: System.Collections.Concurrent.BlockingCollection`1
#include "System/Collections/Concurrent/BlockingCollection_1.hpp"
// Including type: System.Threading.ManualResetEvent
#include "System/Threading/ManualResetEvent.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: StandaloneThreadContext/StandaloneSynchronizationContext..ctor
GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext* GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext::New_ctor(int threadId) {
  return THROW_UNLESS(il2cpp_utils::New<StandaloneThreadContext::StandaloneSynchronizationContext*>(threadId));
}
// Autogenerated method: StandaloneThreadContext/StandaloneSynchronizationContext.ExecuteNext
void GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext::ExecuteNext() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ExecuteNext"));
}
// Autogenerated method: StandaloneThreadContext/StandaloneSynchronizationContext..ctor
GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext* GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<StandaloneThreadContext::StandaloneSynchronizationContext*>());
}
// Autogenerated method: StandaloneThreadContext/StandaloneSynchronizationContext.Send
void GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext::Send(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Send", callback, state));
}
// Autogenerated method: StandaloneThreadContext/StandaloneSynchronizationContext.Post
void GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext::Post(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Post", callback, state));
}
// Autogenerated method: StandaloneThreadContext/StandaloneSynchronizationContext.CreateCopy
System::Threading::SynchronizationContext* GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext::CreateCopy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SynchronizationContext*>(this, "CreateCopy"));
}
