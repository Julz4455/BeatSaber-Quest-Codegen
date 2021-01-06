// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x58
  // Autogenerated type: System.Net.HttpStreamAsyncResult
  // [] Offset: FFFFFFFF
  class HttpStreamAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // private System.Object locker
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ManualResetEvent handle
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ManualResetEvent* handle;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x20
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: completed and: Buffer
    char __padding2[0x7] = {};
    // System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* Buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Int32 Offset
    // Size: 0x4
    // Offset: 0x30
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Count
    // Size: 0x4
    // Offset: 0x34
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.AsyncCallback Callback
    // Size: 0x8
    // Offset: 0x38
    System::AsyncCallback* Callback;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // System.Object State
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* State;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int32 SynchRead
    // Size: 0x4
    // Offset: 0x48
    int SynchRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: SynchRead and: Error
    char __padding8[0x4] = {};
    // System.Exception Error
    // Size: 0x8
    // Offset: 0x50
    System::Exception* Error;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // Creating value type constructor for type: HttpStreamAsyncResult
    HttpStreamAsyncResult(::Il2CppObject* locker_ = {}, System::Threading::ManualResetEvent* handle_ = {}, bool completed_ = {}, ::Array<uint8_t>* Buffer_ = {}, int Offset_ = {}, int Count_ = {}, System::AsyncCallback* Callback_ = {}, ::Il2CppObject* State_ = {}, int SynchRead_ = {}, System::Exception* Error_ = {}) noexcept : locker{locker_}, handle{handle_}, completed{completed_}, Buffer{Buffer_}, Offset{Offset_}, Count{Count_}, Callback{Callback_}, State{State_}, SynchRead{SynchRead_}, Error{Error_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // public System.Void Complete(System.Exception e)
    // Offset: 0x12B48BC
    void Complete(System::Exception* e);
    // public System.Void Complete()
    // Offset: 0x12B48E4
    void Complete();
    // public System.Object get_AsyncState()
    // Offset: 0x12B49DC
    // Implemented from: System.IAsyncResult
    // Base method: System.Object IAsyncResult::get_AsyncState()
    ::Il2CppObject* get_AsyncState();
    // Creating proxy method: System_IAsyncResult_get_AsyncState
    // Maps to method: get_AsyncState
    ::Il2CppObject* System_IAsyncResult_get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x12B49E4
    // Implemented from: System.IAsyncResult
    // Base method: System.Threading.WaitHandle IAsyncResult::get_AsyncWaitHandle()
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // Creating proxy method: System_IAsyncResult_get_AsyncWaitHandle
    // Maps to method: get_AsyncWaitHandle
    System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x12B4AEC
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_CompletedSynchronously()
    bool get_CompletedSynchronously();
    // Creating proxy method: System_IAsyncResult_get_CompletedSynchronously
    // Maps to method: get_CompletedSynchronously
    bool System_IAsyncResult_get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x12B4B00
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_IsCompleted()
    bool get_IsCompleted();
    // Creating proxy method: System_IAsyncResult_get_IsCompleted
    // Maps to method: get_IsCompleted
    bool System_IAsyncResult_get_IsCompleted();
    // public System.Void .ctor()
    // Offset: 0x12B4BAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpStreamAsyncResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpStreamAsyncResult").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpStreamAsyncResult*, creationType>()));
    }
  }; // System.Net.HttpStreamAsyncResult
  static check_size<sizeof(HttpStreamAsyncResult), 80 + sizeof(System::Exception*)> __System_Net_HttpStreamAsyncResultSizeCheck;
  static_assert(sizeof(HttpStreamAsyncResult) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpStreamAsyncResult*, "System.Net", "HttpStreamAsyncResult");
#pragma pack(pop)
