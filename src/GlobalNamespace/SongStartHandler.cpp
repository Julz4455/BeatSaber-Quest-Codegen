// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SongStartHandler
#include "GlobalNamespace/SongStartHandler.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: IGameplayRpcManager
#include "GlobalNamespace/IGameplayRpcManager.hpp"
// Including type: PlayersAtGameStartModel
#include "GlobalNamespace/PlayersAtGameStartModel.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kFixedStartDelay
float GlobalNamespace::SongStartHandler::_get_kFixedStartDelay() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "SongStartHandler", "kFixedStartDelay"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kFixedStartDelay
void GlobalNamespace::SongStartHandler::_set_kFixedStartDelay(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SongStartHandler", "kFixedStartDelay", value));
}
// Autogenerated method: SongStartHandler.get_songStartSyncTime
float GlobalNamespace::SongStartHandler::get_songStartSyncTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_songStartSyncTime"));
}
// Autogenerated method: SongStartHandler.add_setSongStartSyncTimeEvent
void GlobalNamespace::SongStartHandler::add_setSongStartSyncTimeEvent(System::Action_1<float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setSongStartSyncTimeEvent", value));
}
// Autogenerated method: SongStartHandler.remove_setSongStartSyncTimeEvent
void GlobalNamespace::SongStartHandler::remove_setSongStartSyncTimeEvent(System::Action_1<float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setSongStartSyncTimeEvent", value));
}
// Autogenerated method: SongStartHandler..ctor
GlobalNamespace::SongStartHandler* GlobalNamespace::SongStartHandler::New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel) {
  return THROW_UNLESS(il2cpp_utils::New<SongStartHandler*>(multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel));
}
// Autogenerated method: SongStartHandler.GetLevelStartTimeOffset
void GlobalNamespace::SongStartHandler::GetLevelStartTimeOffset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetLevelStartTimeOffset"));
}
// Autogenerated method: SongStartHandler.ForceStart
void GlobalNamespace::SongStartHandler::ForceStart() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ForceStart"));
}
// Autogenerated method: SongStartHandler.StartSong
void GlobalNamespace::SongStartHandler::StartSong() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartSong"));
}
// Autogenerated method: SongStartHandler.HandleSetGameplaySongReady
void GlobalNamespace::SongStartHandler::HandleSetGameplaySongReady(::Il2CppString* user) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleSetGameplaySongReady", user));
}
// Autogenerated method: SongStartHandler.HandleGetGameplaySongReady
void GlobalNamespace::SongStartHandler::HandleGetGameplaySongReady(::Il2CppString* user) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleGetGameplaySongReady", user));
}
// Autogenerated method: SongStartHandler.HandleSetSongStartTime
void GlobalNamespace::SongStartHandler::HandleSetSongStartTime(::Il2CppString* user, float time) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleSetSongStartTime", user, time));
}
// Autogenerated method: SongStartHandler.Log
void GlobalNamespace::SongStartHandler::Log(::Il2CppString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Log", message));
}
// Autogenerated method: SongStartHandler.Dispose
void GlobalNamespace::SongStartHandler::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void GlobalNamespace::SongStartHandler::System_IDisposable_Dispose() {
  GlobalNamespace::SongStartHandler::Dispose();
}
