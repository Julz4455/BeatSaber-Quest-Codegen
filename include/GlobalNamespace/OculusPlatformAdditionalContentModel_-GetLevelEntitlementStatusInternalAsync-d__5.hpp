// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAdditionalContentModel
#include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5
  struct OculusPlatformAdditionalContentModel::$GetLevelEntitlementStatusInternalAsync$d__5 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/EntitlementStatus> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$t__builder;
    // public OculusPlatformAdditionalContentModel <>4__this
    // Offset: 0x20
    GlobalNamespace::OculusPlatformAdditionalContentModel* $$4__this;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // public System.String levelId
    // Offset: 0x30
    ::Il2CppString* levelId;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1;
    // Creating value type constructor for type: $GetLevelEntitlementStatusInternalAsync$d__5
    $GetLevelEntitlementStatusInternalAsync$d__5(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$t__builder_ = {}, GlobalNamespace::OculusPlatformAdditionalContentModel* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* levelId_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, levelId{levelId_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0x9922FC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x992304
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAdditionalContentModel::$GetLevelEntitlementStatusInternalAsync$d__5, "", "OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5");
#pragma pack(pop)
