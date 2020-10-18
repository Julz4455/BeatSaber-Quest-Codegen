// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: OculusPlatformAdditionalContentModel
#include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformAdditionalContentModel/<LaunchCheckoutFlow>d__10
  struct OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*> $$t__builder;
    // public System.String sku
    // Offset: 0x20
    ::Il2CppString* sku;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> <>u__1
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*> $$u__1;
    // Creating value type constructor for type: $LaunchCheckoutFlow$d__10
    constexpr $LaunchCheckoutFlow$d__10(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*> $$t__builder_ = {}, ::Il2CppString* sku_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, sku{sku_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xDA23C0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDA23C8
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusPlatformAdditionalContentModel/<LaunchCheckoutFlow>d__10
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10, "", "OculusPlatformAdditionalContentModel/<LaunchCheckoutFlow>d__10");
#pragma pack(pop)
