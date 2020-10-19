// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelFilterModel
#include "GlobalNamespace/BeatmapLevelFilterModel.hpp"
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
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
  // Forward declaring type: LevelFilterParams
  class LevelFilterParams;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelFilterModel/<FilerBeatmapLevelPackCollectionAsync>d__0
  struct BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IBeatmapLevelCollection> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection*> $$t__builder;
    // public LevelFilterParams levelFilterParams
    // Offset: 0x20
    GlobalNamespace::LevelFilterParams* levelFilterParams;
    // public PlayerDataModel playerDataModel
    // Offset: 0x28
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // public IBeatmapLevelPack[] beatmapLevelPacks
    // Offset: 0x30
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks;
    // public AdditionalContentModel additionalContentModel
    // Offset: 0x38
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x40
    System::Threading::CancellationToken cancellationToken;
    // private BeatmapLevelFilterModel/<>c__DisplayClass0_0 <>8__1
    // Offset: 0x48
    GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0* $$8__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<IPreviewBeatmapLevel>> <>u__1
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>*> $$u__1;
    // Creating value type constructor for type: $FilerBeatmapLevelPackCollectionAsync$d__0
    constexpr $FilerBeatmapLevelPackCollectionAsync$d__0(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection*> $$t__builder_ = {}, GlobalNamespace::LevelFilterParams* levelFilterParams_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0* $$8__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, levelFilterParams{levelFilterParams_}, playerDataModel{playerDataModel_}, beatmapLevelPacks{beatmapLevelPacks_}, additionalContentModel{additionalContentModel_}, cancellationToken{cancellationToken_}, $$8__1{$$8__1_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xE4E820
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE4E828
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelFilterModel/<FilerBeatmapLevelPackCollectionAsync>d__0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0, "", "BeatmapLevelFilterModel/<FilerBeatmapLevelPackCollectionAsync>d__0");
#pragma pack(pop)