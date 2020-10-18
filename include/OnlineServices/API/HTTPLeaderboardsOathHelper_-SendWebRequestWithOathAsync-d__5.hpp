// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<SendWebRequestWithOathAsync>d__5
  struct HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder;
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Offset: 0x20
    OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // public System.String path
    // Offset: 0x30
    ::Il2CppString* path;
    // public System.Object objectToSendAsJson
    // Offset: 0x38
    ::Il2CppObject* objectToSendAsJson;
    // public System.String method
    // Offset: 0x40
    ::Il2CppString* method;
    // private System.String <uri>5__2
    // Offset: 0x48
    ::Il2CppString* $uri$5__2;
    // private System.String <bodyData>5__3
    // Offset: 0x50
    ::Il2CppString* $bodyData$5__3;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x58
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__2
    // Offset: 0x60
    System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__2;
    // Creating value type constructor for type: $SendWebRequestWithOathAsync$d__5
    constexpr $SendWebRequestWithOathAsync$d__5(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* path_ = {}, ::Il2CppObject* objectToSendAsJson_ = {}, ::Il2CppString* method_ = {}, ::Il2CppString* $uri$5__2_ = {}, ::Il2CppString* $bodyData$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, path{path_}, objectToSendAsJson{objectToSendAsJson_}, method{method_}, $uri$5__2{$uri$5__2_}, $bodyData$5__3{$bodyData$5__3_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xDA2514
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDA251C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<SendWebRequestWithOathAsync>d__5
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<SendWebRequestWithOathAsync>d__5");
#pragma pack(pop)
