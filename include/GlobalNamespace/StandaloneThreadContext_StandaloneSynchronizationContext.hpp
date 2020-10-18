// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandaloneThreadContext
#include "GlobalNamespace/StandaloneThreadContext.hpp"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: BlockingCollection`1<T>
  template<typename T>
  class BlockingCollection_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandaloneThreadContext/StandaloneSynchronizationContext
  class StandaloneThreadContext::StandaloneSynchronizationContext : public System::Threading::SynchronizationContext {
    public:
    // Nested type: GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext::WorkRequest
    struct WorkRequest;
    // Autogenerated type: StandaloneThreadContext/StandaloneSynchronizationContext/WorkRequest
    struct WorkRequest : public System::ValueType {
      public:
      // private readonly System.Threading.SendOrPostCallback _callback
      // Offset: 0x0
      System::Threading::SendOrPostCallback* callback;
      // private readonly System.Object _state
      // Offset: 0x8
      ::Il2CppObject* state;
      // private readonly System.Threading.ManualResetEvent _waitHandle
      // Offset: 0x10
      System::Threading::ManualResetEvent* waitHandle;
      // Creating value type constructor for type: WorkRequest
      constexpr WorkRequest(System::Threading::SendOrPostCallback* callback_ = {}, ::Il2CppObject* state_ = {}, System::Threading::ManualResetEvent* waitHandle_ = {}) noexcept : callback{callback_}, state{state_}, waitHandle{waitHandle_} {}
      // public System.Void .ctor(System.Threading.SendOrPostCallback callback, System.Object state, System.Threading.ManualResetEvent waitHandle)
      // Offset: 0xDC727C
      // ABORTED: conflicts with another method.  WorkRequest(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state, System::Threading::ManualResetEvent* waitHandle);
      // public System.Void Invoke()
      // Offset: 0xDC7284
      void Invoke();
    }; // StandaloneThreadContext/StandaloneSynchronizationContext/WorkRequest
    // private readonly System.Collections.Concurrent.BlockingCollection`1<StandaloneThreadContext/StandaloneSynchronizationContext/WorkRequest> _workQueue
    // Offset: 0x18
    System::Collections::Concurrent::BlockingCollection_1<GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext::WorkRequest>* workQueue;
    // private readonly System.Int32 _threadId
    // Offset: 0x20
    int threadId;
    // Deleting conversion operator: operator System::Threading::SynchronizationContextProperties
    constexpr operator System::Threading::SynchronizationContextProperties() const noexcept = delete;
    // private System.Void .ctor(System.Int32 threadId)
    // Offset: 0x1C44690
    static StandaloneThreadContext::StandaloneSynchronizationContext* New_ctor(int threadId);
    // public System.Void ExecuteNext()
    // Offset: 0x1C44590
    void ExecuteNext();
    // public System.Void .ctor()
    // Offset: 0x1C44554
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandaloneThreadContext::StandaloneSynchronizationContext* New_ctor();
    // public override System.Void Send(System.Threading.SendOrPostCallback callback, System.Object state)
    // Offset: 0x1C44720
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::Send(System.Threading.SendOrPostCallback callback, System.Object state)
    void Send(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state);
    // public override System.Void Post(System.Threading.SendOrPostCallback callback, System.Object state)
    // Offset: 0x1C44948
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::Post(System.Threading.SendOrPostCallback callback, System.Object state)
    void Post(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state);
    // public override System.Threading.SynchronizationContext CreateCopy()
    // Offset: 0x1C449F0
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Threading.SynchronizationContext SynchronizationContext::CreateCopy()
    System::Threading::SynchronizationContext* CreateCopy();
  }; // StandaloneThreadContext/StandaloneSynchronizationContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext*, "", "StandaloneThreadContext/StandaloneSynchronizationContext");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandaloneThreadContext::StandaloneSynchronizationContext::WorkRequest, "", "StandaloneThreadContext/StandaloneSynchronizationContext/WorkRequest");
#pragma pack(pop)
