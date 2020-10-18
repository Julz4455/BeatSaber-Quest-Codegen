// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardScoreUploader/UploadScoreCallback
#include "GlobalNamespace/LeaderboardScoreUploader_UploadScoreCallback.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: HMAsyncRequest
#include "GlobalNamespace/HMAsyncRequest.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: LeaderboardScoreUploader/ScoreData
#include "GlobalNamespace/LeaderboardScoreUploader_ScoreData.hpp"
// Including type: PlatformLeaderboardsModel/UploadScoreCompletionHandler
#include "GlobalNamespace/PlatformLeaderboardsModel_UploadScoreCompletionHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LeaderboardScoreUploader/UploadScoreCallback..ctor
GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback* GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<LeaderboardScoreUploader::UploadScoreCallback*>(object, method));
}
// Autogenerated method: LeaderboardScoreUploader/UploadScoreCallback.Invoke
GlobalNamespace::HMAsyncRequest* GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::Invoke(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::HMAsyncRequest*>(this, "Invoke", scoreData, completionHandler));
}
// Autogenerated method: LeaderboardScoreUploader/UploadScoreCallback.BeginInvoke
System::IAsyncResult* GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::BeginInvoke(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", scoreData, completionHandler, callback, object));
}
// Autogenerated method: LeaderboardScoreUploader/UploadScoreCallback.EndInvoke
GlobalNamespace::HMAsyncRequest* GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::HMAsyncRequest*>(this, "EndInvoke", result));
}
