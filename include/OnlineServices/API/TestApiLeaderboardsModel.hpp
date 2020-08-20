// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.IApiLeaderboardsModel
#include "OnlineServices/API/IApiLeaderboardsModel.hpp"
// Including type: OnlineServices.API.ApiResponse`1
#include "OnlineServices/API/ApiResponse_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LeaderboardQueryDTO
  class LeaderboardQueryDTO;
  // Forward declaring type: LevelScoreResultDTO
  class LevelScoreResultDTO;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.TestApiLeaderboardsModel
  class TestApiLeaderboardsModel : public ::Il2CppObject, public OnlineServices::API::IApiLeaderboardsModel {
    public:
    // Nested type: OnlineServices::API::TestApiLeaderboardsModel::$LogoutAsync$d__0
    struct $LogoutAsync$d__0;
    // Nested type: OnlineServices::API::TestApiLeaderboardsModel::$GetLeaderboardEntriesAsync$d__1
    struct $GetLeaderboardEntriesAsync$d__1;
    // Nested type: OnlineServices::API::TestApiLeaderboardsModel::$SendLevelScoreResultAsync$d__2
    struct $SendLevelScoreResultAsync$d__2;
    // public System.Void LogoutAsync()
    // Offset: 0xBB66D8
    // Implemented from: OnlineServices.API.IApiLeaderboardsModel
    // Base method: System.Void IApiLeaderboardsModel::LogoutAsync()
    void LogoutAsync();
    // public System.Threading.Tasks.Task`1<OnlineServices.API.ApiResponse`1<LeaderboardsDTO.LeaderboardEntriesDTO>> GetLeaderboardEntriesAsync(LeaderboardsDTO.LeaderboardQueryDTO leaderboardQueryDTO, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xBB6790
    // Implemented from: OnlineServices.API.IApiLeaderboardsModel
    // Base method: System.Threading.Tasks.Task`1<OnlineServices.API.ApiResponse`1<LeaderboardsDTO.LeaderboardEntriesDTO>> IApiLeaderboardsModel::GetLeaderboardEntriesAsync(LeaderboardsDTO.LeaderboardQueryDTO leaderboardQueryDTO, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<LeaderboardsDTO::LeaderboardEntriesDTO>>* GetLeaderboardEntriesAsync(LeaderboardsDTO::LeaderboardQueryDTO* leaderboardQueryDTO, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.API.Response> SendLevelScoreResultAsync(LeaderboardsDTO.LevelScoreResultDTO levelScoreResultDto, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xBB689C
    // Implemented from: OnlineServices.API.IApiLeaderboardsModel
    // Base method: System.Threading.Tasks.Task`1<OnlineServices.API.Response> IApiLeaderboardsModel::SendLevelScoreResultAsync(LeaderboardsDTO.LevelScoreResultDTO levelScoreResultDto, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<OnlineServices::API::Response>* SendLevelScoreResultAsync(LeaderboardsDTO::LevelScoreResultDTO* levelScoreResultDto, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0xBB69A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestApiLeaderboardsModel* New_ctor();
  }; // OnlineServices.API.TestApiLeaderboardsModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::TestApiLeaderboardsModel*, "OnlineServices.API", "TestApiLeaderboardsModel");
#pragma pack(pop)
