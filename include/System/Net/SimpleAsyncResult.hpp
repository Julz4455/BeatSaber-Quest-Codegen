// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SimpleAsyncCallback
  class SimpleAsyncCallback;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.SimpleAsyncResult
  // [] Offset: FFFFFFFF
  class SimpleAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // Nested type: System::Net::SimpleAsyncResult::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Nested type: System::Net::SimpleAsyncResult::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // private System.Threading.ManualResetEvent handle
    // Size: 0x8
    // Offset: 0x10
    System::Threading::ManualResetEvent* handle;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Boolean synch
    // Size: 0x1
    // Offset: 0x18
    bool synch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isCompleted
    // Size: 0x1
    // Offset: 0x19
    bool isCompleted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Net.SimpleAsyncCallback cb
    // Size: 0x8
    // Offset: 0x20
    System::Net::SimpleAsyncCallback* cb;
    // Field size check
    static_assert(sizeof(System::Net::SimpleAsyncCallback*) == 0x8);
    // private System.Object state
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean callbackDone
    // Size: 0x1
    // Offset: 0x30
    bool callbackDone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Exception exc
    // Size: 0x8
    // Offset: 0x38
    System::Exception* exc;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.Object locker
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Nullable`1<System.Boolean> user_read_synch
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    System::Nullable_1<bool> user_read_synch;
    // Creating value type constructor for type: SimpleAsyncResult
    SimpleAsyncResult(System::Threading::ManualResetEvent* handle_ = {}, bool synch_ = {}, bool isCompleted_ = {}, System::Net::SimpleAsyncCallback* cb_ = {}, ::Il2CppObject* state_ = {}, bool callbackDone_ = {}, System::Exception* exc_ = {}, ::Il2CppObject* locker_ = {}, System::Nullable_1<bool> user_read_synch_ = {}) noexcept : handle{handle_}, synch{synch_}, isCompleted{isCompleted_}, cb{cb_}, state{state_}, callbackDone{callbackDone_}, exc{exc_}, locker{locker_}, user_read_synch{user_read_synch_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // private System.Void .ctor(System.Net.SimpleAsyncCallback cb)
    // Offset: 0x135F884
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAsyncResult* New_ctor(System::Net::SimpleAsyncCallback* cb) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SimpleAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAsyncResult*, creationType>(cb)));
    }
    // protected System.Void .ctor(System.AsyncCallback cb, System.Object state)
    // Offset: 0x135F914
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SimpleAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAsyncResult*, creationType>(cb, state)));
    }
    // static public System.Void Run(System.Func`2<System.Net.SimpleAsyncResult,System.Boolean> func, System.Net.SimpleAsyncCallback callback)
    // Offset: 0x135FA3C
    static void Run(System::Func_2<System::Net::SimpleAsyncResult*, bool>* func, System::Net::SimpleAsyncCallback* callback);
    // static public System.Void RunWithLock(System.Object locker, System.Func`2<System.Net.SimpleAsyncResult,System.Boolean> func, System.Net.SimpleAsyncCallback callback)
    // Offset: 0x135FC10
    static void RunWithLock(::Il2CppObject* locker, System::Func_2<System::Net::SimpleAsyncResult*, bool>* func, System::Net::SimpleAsyncCallback* callback);
    // protected System.Void Reset_internal()
    // Offset: 0x135FD30
    void Reset_internal();
    // System.Void SetCompleted(System.Boolean synch, System.Exception e)
    // Offset: 0x135FBC4
    void SetCompleted(bool synch, System::Exception* e);
    // System.Void SetCompleted(System.Boolean synch)
    // Offset: 0x135FB74
    void SetCompleted(bool synch);
    // private System.Void SetCompleted_internal(System.Boolean synch, System.Exception e)
    // Offset: 0x135FDF0
    void SetCompleted_internal(bool synch, System::Exception* e);
    // protected System.Void SetCompleted_internal(System.Boolean synch)
    // Offset: 0x135FEDC
    void SetCompleted_internal(bool synch);
    // private System.Void DoCallback_private()
    // Offset: 0x135FEB8
    void DoCallback_private();
    // protected System.Void DoCallback_internal()
    // Offset: 0x135FEE8
    void DoCallback_internal();
    // System.Void WaitUntilComplete()
    // Offset: 0x135FF0C
    void WaitUntilComplete();
    // System.Boolean WaitUntilComplete(System.Int32 timeout, System.Boolean exitContext)
    // Offset: 0x1360108
    bool WaitUntilComplete(int timeout, bool exitContext);
    // System.Boolean get_CompletedSynchronouslyPeek()
    // Offset: 0x1360228
    bool get_CompletedSynchronouslyPeek();
    // System.Boolean get_GotException()
    // Offset: 0x1360230
    bool get_GotException();
    // System.Exception get_Exception()
    // Offset: 0x1360240
    System::Exception* get_Exception();
    // public System.Object get_AsyncState()
    // Offset: 0x1360170
    // Implemented from: System.IAsyncResult
    // Base method: System.Object IAsyncResult::get_AsyncState()
    ::Il2CppObject* get_AsyncState();
    // Creating proxy method: System_IAsyncResult_get_AsyncState
    // Maps to method: get_AsyncState
    ::Il2CppObject* System_IAsyncResult_get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1360000
    // Implemented from: System.IAsyncResult
    // Base method: System.Threading.WaitHandle IAsyncResult::get_AsyncWaitHandle()
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // Creating proxy method: System_IAsyncResult_get_AsyncWaitHandle
    // Maps to method: get_AsyncWaitHandle
    System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x1360178
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_CompletedSynchronously()
    bool get_CompletedSynchronously();
    // Creating proxy method: System_IAsyncResult_get_CompletedSynchronously
    // Maps to method: get_CompletedSynchronously
    bool System_IAsyncResult_get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x135FF54
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_IsCompleted()
    bool get_IsCompleted();
    // Creating proxy method: System_IAsyncResult_get_IsCompleted
    // Maps to method: get_IsCompleted
    bool System_IAsyncResult_get_IsCompleted();
  }; // System.Net.SimpleAsyncResult
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::SimpleAsyncResult*, "System.Net", "SimpleAsyncResult");
