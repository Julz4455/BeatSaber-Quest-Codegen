// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelDataLoaderSO/<LoadBeatmapLevelFormAssetBundleAsync>d__4
  struct BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IBeatmapLevel> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel*> $$t__builder;
    // public IPreviewBeatmapLevel previewBeatmapLevel
    // Offset: 0x20
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // public BeatmapLevelDataLoaderSO <>4__this
    // Offset: 0x28
    GlobalNamespace::BeatmapLevelDataLoaderSO* $$4__this;
    // public System.String assetBundlePath
    // Offset: 0x30
    ::Il2CppString* assetBundlePath;
    // public System.String levelDataAssetName
    // Offset: 0x38
    ::Il2CppString* levelDataAssetName;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x40
    System::Threading::CancellationToken cancellationToken;
    // private System.String <levelID>5__2
    // Offset: 0x48
    ::Il2CppString* $levelID$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IBeatmapLevel> <>u__1
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel*> $$u__1;
    // Creating value type constructor for type: $LoadBeatmapLevelFormAssetBundleAsync$d__4
    constexpr $LoadBeatmapLevelFormAssetBundleAsync$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel*> $$t__builder_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::BeatmapLevelDataLoaderSO* $$4__this_ = {}, ::Il2CppString* assetBundlePath_ = {}, ::Il2CppString* levelDataAssetName_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* $levelID$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, previewBeatmapLevel{previewBeatmapLevel_}, $$4__this{$$4__this_}, assetBundlePath{assetBundlePath_}, levelDataAssetName{levelDataAssetName_}, cancellationToken{cancellationToken_}, $levelID$5__2{$levelID$5__2_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xDA2B10
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDA2B18
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelDataLoaderSO/<LoadBeatmapLevelFormAssetBundleAsync>d__4
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4, "", "BeatmapLevelDataLoaderSO/<LoadBeatmapLevelFormAssetBundleAsync>d__4");
#pragma pack(pop)
