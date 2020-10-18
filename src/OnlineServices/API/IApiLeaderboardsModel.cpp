// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OnlineServices.API.IApiLeaderboardsModel
#include "OnlineServices/API/IApiLeaderboardsModel.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.LeaderboardEntries
#include "BeatSaberAPI/DataTransferObjects/LeaderboardEntries.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.LeaderboardQuery
#include "BeatSaberAPI/DataTransferObjects/LeaderboardQuery.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.LevelScoreResult
#include "BeatSaberAPI/DataTransferObjects/LevelScoreResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OnlineServices.API.IApiLeaderboardsModel.GetLeaderboardEntriesAsync
System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>>* OnlineServices::API::IApiLeaderboardsModel::GetLeaderboardEntriesAsync(BeatSaberAPI::DataTransferObjects::LeaderboardQuery* leaderboardQueryDTO, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>>*>(this, "GetLeaderboardEntriesAsync", leaderboardQueryDTO, cancellationToken));
}
// Autogenerated method: OnlineServices.API.IApiLeaderboardsModel.SendLevelScoreResultAsync
System::Threading::Tasks::Task_1<OnlineServices::API::Response>* OnlineServices::API::IApiLeaderboardsModel::SendLevelScoreResultAsync(BeatSaberAPI::DataTransferObjects::LevelScoreResult* levelScoreResultDto, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<OnlineServices::API::Response>*>(this, "SendLevelScoreResultAsync", levelScoreResultDto, cancellationToken));
}
// Autogenerated method: OnlineServices.API.IApiLeaderboardsModel.LogoutAsync
void OnlineServices::API::IApiLeaderboardsModel::LogoutAsync() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LogoutAsync"));
}
