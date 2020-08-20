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
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: TokenDTO
  class TokenDTO;
  // Forward declaring type: LoginRequestDTO
  class LoginRequestDTO;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<GetJwtTokenAsync>d__10
  struct HTTPLeaderboardsOathHelper::$GetJwtTokenAsync$d__10 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<LeaderboardsDTO.TokenDTO> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<LeaderboardsDTO::TokenDTO*> $$t__builder;
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Offset: 0x20
    OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // private System.String <uri>5__2
    // Offset: 0x30
    ::Il2CppString* $uri$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<LeaderboardsDTO.LoginRequestDTO> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<LeaderboardsDTO::LoginRequestDTO*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__2
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__2;
    // Creating value type constructor for type: $GetJwtTokenAsync$d__10
    $GetJwtTokenAsync$d__10(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<LeaderboardsDTO::TokenDTO*> $$t__builder_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* $uri$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<LeaderboardsDTO::LoginRequestDTO*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__2_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $uri$5__2{$uri$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0x9923E4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x9923EC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<GetJwtTokenAsync>d__10
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$GetJwtTokenAsync$d__10, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<GetJwtTokenAsync>d__10");
#pragma pack(pop)
