// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestLeaderboardsModel
#include "GlobalNamespace/TestLeaderboardsModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: OnlineServices.GetLeaderboardEntriesResult
#include "OnlineServices/GetLeaderboardEntriesResult.hpp"
// Including type: OnlineServices.GetLeaderboardFilterData
#include "OnlineServices/GetLeaderboardFilterData.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestLeaderboardsModel/<GetLeaderboardEntriesAsync>d__4
  struct TestLeaderboardsModel::$GetLeaderboardEntriesAsync$d__4 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.GetLeaderboardEntriesResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::GetLeaderboardEntriesResult> $$t__builder;
    // public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    // Offset: 0x20
    OnlineServices::GetLeaderboardFilterData leaderboardFilterData;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Creating value type constructor for type: $GetLeaderboardEntriesAsync$d__4
    constexpr $GetLeaderboardEntriesAsync$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::GetLeaderboardEntriesResult> $$t__builder_ = {}, OnlineServices::GetLeaderboardFilterData leaderboardFilterData_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, leaderboardFilterData{leaderboardFilterData_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xDA1584
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDA158C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestLeaderboardsModel/<GetLeaderboardEntriesAsync>d__4
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestLeaderboardsModel::$GetLeaderboardEntriesAsync$d__4, "", "TestLeaderboardsModel/<GetLeaderboardEntriesAsync>d__4");
#pragma pack(pop)
