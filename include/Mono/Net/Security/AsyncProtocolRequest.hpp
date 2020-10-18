// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileAuthenticatedStream
  class MobileAuthenticatedStream;
  // Forward declaring type: AsyncProtocolResult
  class AsyncProtocolResult;
  // Forward declaring type: AsyncOperationStatus
  struct AsyncOperationStatus;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Autogenerated type: Mono.Net.Security.AsyncProtocolRequest
  class AsyncProtocolRequest : public ::Il2CppObject {
    public:
    // Nested type: Mono::Net::Security::AsyncProtocolRequest::$StartOperation$d__23
    struct $StartOperation$d__23;
    // Nested type: Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24
    struct $ProcessOperation$d__24;
    // Nested type: Mono::Net::Security::AsyncProtocolRequest::$InnerRead$d__25
    struct $InnerRead$d__25;
    // private readonly Mono.Net.Security.MobileAuthenticatedStream <Parent>k__BackingField
    // Offset: 0x10
    Mono::Net::Security::MobileAuthenticatedStream* Parent;
    // private readonly System.Boolean <RunSynchronously>k__BackingField
    // Offset: 0x18
    bool RunSynchronously;
    // private System.Int32 <UserResult>k__BackingField
    // Offset: 0x1C
    int UserResult;
    // private System.Int32 Started
    // Offset: 0x20
    int Started;
    // private System.Int32 RequestedSize
    // Offset: 0x24
    int RequestedSize;
    // private System.Int32 WriteRequested
    // Offset: 0x28
    int WriteRequested;
    // private readonly System.Object locker
    // Offset: 0x30
    ::Il2CppObject* locker;
    // public Mono.Net.Security.MobileAuthenticatedStream get_Parent()
    // Offset: 0x1418AE4
    Mono::Net::Security::MobileAuthenticatedStream* get_Parent();
    // public System.Boolean get_RunSynchronously()
    // Offset: 0x1418AEC
    bool get_RunSynchronously();
    // public System.String get_Name()
    // Offset: 0x1418AF4
    ::Il2CppString* get_Name();
    // public System.Int32 get_UserResult()
    // Offset: 0x1418B1C
    int get_UserResult();
    // protected System.Void set_UserResult(System.Int32 value)
    // Offset: 0x1418B24
    void set_UserResult(int value);
    // public System.Void .ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean sync)
    // Offset: 0x1418824
    static AsyncProtocolRequest* New_ctor(Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync);
    // System.Void RequestRead(System.Int32 size)
    // Offset: 0x1418B2C
    void RequestRead(int size);
    // System.Void RequestWrite()
    // Offset: 0x1418BD4
    void RequestWrite();
    // System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult> StartOperation(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1418BE0
    System::Threading::Tasks::Task_1<Mono::Net::Security::AsyncProtocolResult*>* StartOperation(System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task ProcessOperation(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1418D20
    System::Threading::Tasks::Task* ProcessOperation(System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>> InnerRead(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1418E48
    System::Threading::Tasks::Task_1<System::Nullable_1<int>>* InnerRead(System::Threading::CancellationToken cancellationToken);
    // protected Mono.Net.Security.AsyncOperationStatus Run(Mono.Net.Security.AsyncOperationStatus status)
    // Offset: 0xFFFFFFFF
    Mono::Net::Security::AsyncOperationStatus Run(Mono::Net::Security::AsyncOperationStatus status);
    // public override System.String ToString()
    // Offset: 0x1418F80
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Net.Security.AsyncProtocolRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncProtocolRequest*, "Mono.Net.Security", "AsyncProtocolRequest");
#pragma pack(pop)
