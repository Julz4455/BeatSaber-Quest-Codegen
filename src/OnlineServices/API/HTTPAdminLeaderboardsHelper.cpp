// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsIdsDto
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper_LeaderboardsIdsDto.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper/ServerStatusResultDto
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper_ServerStatusResultDto.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoDto
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper_LeaderboardsInfoDto.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper_LeaderboardsInfoResultDto.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper/<ServerStatus>d__7
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper_-ServerStatus-d__7.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper/<LeaderboardsExist>d__8
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper_-LeaderboardsExist-d__8.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper/<CreateOrUpdateLeaderboards>d__9
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper_-CreateOrUpdateLeaderboards-d__9.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper/<SendWebRequestAsync>d__10
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper_-SendWebRequestAsync-d__10.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper/<SendAndWaitAsync>d__11
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper_-SendAndWaitAsync-d__11.hpp"
// Including type: System.UriBuilder
#include "System/UriBuilder.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: UnityEngine.Networking.UnityWebRequest
#include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OnlineServices.API.HTTPAdminLeaderboardsHelper..ctor
OnlineServices::API::HTTPAdminLeaderboardsHelper* OnlineServices::API::HTTPAdminLeaderboardsHelper::New_ctor(::Il2CppString* uri, ::Il2CppString* secret) {
  return THROW_UNLESS(il2cpp_utils::New<HTTPAdminLeaderboardsHelper*>(uri, secret));
}
// Autogenerated method: OnlineServices.API.HTTPAdminLeaderboardsHelper.ServerStatus
System::Threading::Tasks::Task_1<::Il2CppString*>* OnlineServices::API::HTTPAdminLeaderboardsHelper::ServerStatus(System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<::Il2CppString*>*>(this, "ServerStatus", cancellationToken));
}
// Autogenerated method: OnlineServices.API.HTTPAdminLeaderboardsHelper.LeaderboardsExist
System::Threading::Tasks::Task_1<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*>* OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsExist(::Array<::Il2CppString*>* leaderboardIds, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*>*>(this, "LeaderboardsExist", leaderboardIds, cancellationToken));
}
// Autogenerated method: OnlineServices.API.HTTPAdminLeaderboardsHelper.CreateOrUpdateLeaderboards
System::Threading::Tasks::Task_1<bool>* OnlineServices::API::HTTPAdminLeaderboardsHelper::CreateOrUpdateLeaderboards(::Array<::Il2CppString*>* leaderboardIds, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<bool>*>(this, "CreateOrUpdateLeaderboards", leaderboardIds, cancellationToken));
}
// Autogenerated method: OnlineServices.API.HTTPAdminLeaderboardsHelper.SendWebRequestAsync
System::Threading::Tasks::Task_1<::Il2CppString*>* OnlineServices::API::HTTPAdminLeaderboardsHelper::SendWebRequestAsync(::Il2CppString* uri, ::Il2CppString* method, ::Il2CppString* bodyData, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<::Il2CppString*>*>(this, "SendWebRequestAsync", uri, method, bodyData, cancellationToken));
}
// Autogenerated method: OnlineServices.API.HTTPAdminLeaderboardsHelper.SendAndWaitAsync
System::Threading::Tasks::Task* OnlineServices::API::HTTPAdminLeaderboardsHelper::SendAndWaitAsync(UnityEngine::Networking::UnityWebRequest* webRequest, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "SendAndWaitAsync", webRequest, cancellationToken));
}
