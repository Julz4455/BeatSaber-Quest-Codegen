// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: ContextCallback
  class ContextCallback;
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: MonoMethodMessage
  class MonoMethodMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
  // Forward declaring type: IMessage
  class IMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x80
  // Autogenerated type: System.Runtime.Remoting.Messaging.AsyncResult
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3B104
  class AsyncResult : public ::Il2CppObject/*, public System::IAsyncResult, public System::Runtime::Remoting::Messaging::IMessageSink, public System::Threading::IThreadPoolWorkItem*/ {
    public:
    // private System.Object async_state
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* async_state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.WaitHandle handle
    // Size: 0x8
    // Offset: 0x18
    System::Threading::WaitHandle* handle;
    // Field size check
    static_assert(sizeof(System::Threading::WaitHandle*) == 0x8);
    // private System.Object async_delegate
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* async_delegate;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.IntPtr data
    // Size: 0x8
    // Offset: 0x28
    System::IntPtr data;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Object object_data
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* object_data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean sync_completed
    // Size: 0x1
    // Offset: 0x38
    bool sync_completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x39
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean endinvoke_called
    // Size: 0x1
    // Offset: 0x3A
    bool endinvoke_called;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: endinvoke_called and: async_callback
    char __padding7[0x5] = {};
    // private System.Object async_callback
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* async_callback;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ExecutionContext current
    // Size: 0x8
    // Offset: 0x48
    System::Threading::ExecutionContext* current;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // private System.Threading.ExecutionContext original
    // Size: 0x8
    // Offset: 0x50
    System::Threading::ExecutionContext* original;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // private System.Int64 add_time
    // Size: 0x8
    // Offset: 0x58
    int64_t add_time;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Runtime.Remoting.Messaging.MonoMethodMessage call_message
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Remoting::Messaging::MonoMethodMessage* call_message;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::MonoMethodMessage*) == 0x8);
    // private System.Runtime.Remoting.Messaging.IMessageCtrl message_ctrl
    // Size: 0x8
    // Offset: 0x68
    System::Runtime::Remoting::Messaging::IMessageCtrl* message_ctrl;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessageCtrl*) == 0x8);
    // private System.Runtime.Remoting.Messaging.IMessage reply_message
    // Size: 0x8
    // Offset: 0x70
    System::Runtime::Remoting::Messaging::IMessage* reply_message;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessage*) == 0x8);
    // private System.Threading.WaitCallback orig_cb
    // Size: 0x8
    // Offset: 0x78
    System::Threading::WaitCallback* orig_cb;
    // Field size check
    static_assert(sizeof(System::Threading::WaitCallback*) == 0x8);
    // Creating value type constructor for type: AsyncResult
    AsyncResult(::Il2CppObject* async_state_ = {}, System::Threading::WaitHandle* handle_ = {}, ::Il2CppObject* async_delegate_ = {}, System::IntPtr data_ = {}, ::Il2CppObject* object_data_ = {}, bool sync_completed_ = {}, bool completed_ = {}, bool endinvoke_called_ = {}, ::Il2CppObject* async_callback_ = {}, System::Threading::ExecutionContext* current_ = {}, System::Threading::ExecutionContext* original_ = {}, int64_t add_time_ = {}, System::Runtime::Remoting::Messaging::MonoMethodMessage* call_message_ = {}, System::Runtime::Remoting::Messaging::IMessageCtrl* message_ctrl_ = {}, System::Runtime::Remoting::Messaging::IMessage* reply_message_ = {}, System::Threading::WaitCallback* orig_cb_ = {}) noexcept : async_state{async_state_}, handle{handle_}, async_delegate{async_delegate_}, data{data_}, object_data{object_data_}, sync_completed{sync_completed_}, completed{completed_}, endinvoke_called{endinvoke_called_}, async_callback{async_callback_}, current{current_}, original{original_}, add_time{add_time_}, call_message{call_message_}, message_ctrl{message_ctrl_}, reply_message{reply_message_}, orig_cb{orig_cb_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink
    operator System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Creating interface conversion operator: operator System::Threading::IThreadPoolWorkItem
    operator System::Threading::IThreadPoolWorkItem() noexcept {
      return *reinterpret_cast<System::Threading::IThreadPoolWorkItem*>(this);
    }
    // Get static field: static System.Threading.ContextCallback ccb
    static System::Threading::ContextCallback* _get_ccb();
    // Set static field: static System.Threading.ContextCallback ccb
    static void _set_ccb(System::Threading::ContextCallback* value);
    // System.Void .ctor(System.Threading.WaitCallback cb, System.Object state, System.Boolean capture_context)
    // Offset: 0x1177608
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncResult* New_ctor(System::Threading::WaitCallback* cb, ::Il2CppObject* state, bool capture_context) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("AsyncResult").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncResult*, creationType>(cb, state, capture_context)));
    }
    // static private System.Void WaitCallback_Context(System.Object state)
    // Offset: 0x1177718
    static void WaitCallback_Context(::Il2CppObject* state);
    // public System.Boolean get_EndInvokeCalled()
    // Offset: 0x11778D0
    bool get_EndInvokeCalled();
    // public System.Void set_EndInvokeCalled(System.Boolean value)
    // Offset: 0x11778D8
    void set_EndInvokeCalled(bool value);
    // public System.Object get_AsyncDelegate()
    // Offset: 0x11778E4
    ::Il2CppObject* get_AsyncDelegate();
    // public System.Runtime.Remoting.Messaging.IMessageSink get_NextSink()
    // Offset: 0x11778EC
    System::Runtime::Remoting::Messaging::IMessageSink* get_NextSink();
    // public System.Runtime.Remoting.Messaging.IMessage GetReplyMessage()
    // Offset: 0x1177954
    System::Runtime::Remoting::Messaging::IMessage* GetReplyMessage();
    // public System.Void SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl mc)
    // Offset: 0x117795C
    void SetMessageCtrl(System::Runtime::Remoting::Messaging::IMessageCtrl* mc);
    // System.Void SetCompletedSynchronously(System.Boolean completed)
    // Offset: 0x1177964
    void SetCompletedSynchronously(bool completed);
    // System.Runtime.Remoting.Messaging.IMessage EndInvoke()
    // Offset: 0x1177970
    System::Runtime::Remoting::Messaging::IMessage* EndInvoke();
    // System.Runtime.Remoting.Messaging.MonoMethodMessage get_CallMessage()
    // Offset: 0x1177BC4
    System::Runtime::Remoting::Messaging::MonoMethodMessage* get_CallMessage();
    // System.Void set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage value)
    // Offset: 0x1177BCC
    void set_CallMessage(System::Runtime::Remoting::Messaging::MonoMethodMessage* value);
    // System.Object Invoke()
    // Offset: 0x1177BD8
    ::Il2CppObject* Invoke();
    // static private System.Void .cctor()
    // Offset: 0x1177BE0
    static void _cctor();
    // private System.Void <.ctor>b__17_0(System.Object <p0>)
    // Offset: 0x1177C60
    void $_ctor$b__17_0(::Il2CppObject* $p0$);
    // System.Void .ctor()
    // Offset: 0x1177600
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("AsyncResult").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncResult*, creationType>()));
    }
    // public System.Object get_AsyncState()
    // Offset: 0x11777AC
    // Implemented from: System.IAsyncResult
    // Base method: System.Object IAsyncResult::get_AsyncState()
    ::Il2CppObject* get_AsyncState();
    // Creating proxy method: System_IAsyncResult_get_AsyncState
    // Maps to method: get_AsyncState
    ::Il2CppObject* System_IAsyncResult_get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x11777B4
    // Implemented from: System.IAsyncResult
    // Base method: System.Threading.WaitHandle IAsyncResult::get_AsyncWaitHandle()
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // Creating proxy method: System_IAsyncResult_get_AsyncWaitHandle
    // Maps to method: get_AsyncWaitHandle
    System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x11778C0
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_CompletedSynchronously()
    bool get_CompletedSynchronously();
    // Creating proxy method: System_IAsyncResult_get_CompletedSynchronously
    // Maps to method: get_CompletedSynchronously
    bool System_IAsyncResult_get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x11778C8
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_IsCompleted()
    bool get_IsCompleted();
    // Creating proxy method: System_IAsyncResult_get_IsCompleted
    // Maps to method: get_IsCompleted
    bool System_IAsyncResult_get_IsCompleted();
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x11778F4
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl IMessageSink::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x1177A78
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessage IMessageSink::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // private System.Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
    // Offset: 0x1177BD4
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::ExecuteWorkItem()
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // private System.Void System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0x1177BDC
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::MarkAborted(System.Threading.ThreadAbortException tae)
    void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae);
  }; // System.Runtime.Remoting.Messaging.AsyncResult
  static check_size<sizeof(AsyncResult), 120 + sizeof(System::Threading::WaitCallback*)> __System_Runtime_Remoting_Messaging_AsyncResultSizeCheck;
  static_assert(sizeof(AsyncResult) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::AsyncResult*, "System.Runtime.Remoting.Messaging", "AsyncResult");
#pragma pack(pop)
