// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
  // Forward declaring type: LevelScoreUploader
  class LevelScoreUploader;
  // Forward declaring type: PlatformOnlineServicesAvailabilityModel
  class PlatformOnlineServicesAvailabilityModel;
  // Forward declaring type: LeaderboardEntriesResult
  class LeaderboardEntriesResult;
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HTTPLeaderboardsModel
  class HTTPLeaderboardsModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Size: 0x48
  // Autogenerated type: OnlineServices.ServerManager
  // [] Offset: FFFFFFFF
  class ServerManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14
    struct $GetLeaderboardEntriesAsync$d__14;
    // [InjectAttribute] Offset: 0xDD3510
    // private readonly HTTPLeaderboardsModel _leaderboardsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::HTTPLeaderboardsModel* leaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HTTPLeaderboardsModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD3520
    // private System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> platformServicesAvailabilityInfoChangedEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* platformServicesAvailabilityInfoChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD3530
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x30
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: levelScoreUploader
    char __padding3[0x7] = {};
    // private OnlineServices.LevelScoreUploader _levelScoreUploader
    // Size: 0x8
    // Offset: 0x38
    OnlineServices::LevelScoreUploader* levelScoreUploader;
    // Field size check
    static_assert(sizeof(OnlineServices::LevelScoreUploader*) == 0x8);
    // private OnlineServices.PlatformOnlineServicesAvailabilityModel _platformOnlineServicesAvailabilityModel
    // Size: 0x8
    // Offset: 0x40
    OnlineServices::PlatformOnlineServicesAvailabilityModel* platformOnlineServicesAvailabilityModel;
    // Field size check
    static_assert(sizeof(OnlineServices::PlatformOnlineServicesAvailabilityModel*) == 0x8);
    // Creating value type constructor for type: ServerManager
    ServerManager(GlobalNamespace::HTTPLeaderboardsModel* leaderboardsModel_ = {}, System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* platformServicesAvailabilityInfoChangedEvent_ = {}, System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent_ = {}, bool initialized_ = {}, OnlineServices::LevelScoreUploader* levelScoreUploader_ = {}, OnlineServices::PlatformOnlineServicesAvailabilityModel* platformOnlineServicesAvailabilityModel_ = {}) noexcept : leaderboardsModel{leaderboardsModel_}, platformServicesAvailabilityInfoChangedEvent{platformServicesAvailabilityInfoChangedEvent_}, scoreForLeaderboardDidUploadEvent{scoreForLeaderboardDidUploadEvent_}, initialized{initialized_}, levelScoreUploader{levelScoreUploader_}, platformOnlineServicesAvailabilityModel{platformOnlineServicesAvailabilityModel_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_platformServicesAvailabilityInfoChangedEvent(System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> value)
    // Offset: 0xEFF684
    void add_platformServicesAvailabilityInfoChangedEvent(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* value);
    // public System.Void remove_platformServicesAvailabilityInfoChangedEvent(System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> value)
    // Offset: 0xEFF728
    void remove_platformServicesAvailabilityInfoChangedEvent(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* value);
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xEFF7CC
    void add_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xEFF870
    void remove_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Boolean get_initialized()
    // Offset: 0xEFF914
    bool get_initialized();
    // public System.Void Init()
    // Offset: 0xEFF91C
    void Init();
    // public System.String GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xEFFA68
    ::Il2CppString* GetLeaderboardId(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Threading.Tasks.Task`1<OnlineServices.LeaderboardEntriesResult> GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xEFFA94
    System::Threading::Tasks::Task_1<OnlineServices::LeaderboardEntriesResult*>* GetLeaderboardEntriesAsync(OnlineServices::GetLeaderboardFilterData leaderboardFilterData, System::Threading::CancellationToken cancellationToken);
    // public System.Void SendLevelScoreResult(OnlineServices.LevelScoreResultsData levelScoreResultsData)
    // Offset: 0xEFFBF0
    void SendLevelScoreResult(OnlineServices::LevelScoreResultsData levelScoreResultsData);
    // private System.Void <Init>b__12_0(OnlineServices.PlatformServicesAvailabilityInfo availabilityInfo)
    // Offset: 0xEFFC4C
    void $Init$b__12_0(OnlineServices::PlatformServicesAvailabilityInfo* availabilityInfo);
    // private System.Void <Init>b__12_1(System.String leaderboardId)
    // Offset: 0xEFFCC0
    void $Init$b__12_1(::Il2CppString* leaderboardId);
    // public System.Void .ctor()
    // Offset: 0xEFFC44
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("OnlineServices").WithContext("ServerManager").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerManager*, creationType>()));
    }
  }; // OnlineServices.ServerManager
  static check_size<sizeof(ServerManager), 64 + sizeof(OnlineServices::PlatformOnlineServicesAvailabilityModel*)> __OnlineServices_ServerManagerSizeCheck;
  static_assert(sizeof(ServerManager) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::ServerManager*, "OnlineServices", "ServerManager");
#pragma pack(pop)
