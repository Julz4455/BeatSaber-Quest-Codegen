// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: GameplayRpcManager/SetGameplaySceneSyncFinishedRpc
#include "GlobalNamespace/GameplayRpcManager_SetGameplaySceneSyncFinishedRpc.hpp"
// Including type: GameplayRpcManager/SetGameplaySceneReadyRpc
#include "GlobalNamespace/GameplayRpcManager_SetGameplaySceneReadyRpc.hpp"
// Including type: GameplayRpcManager/GetGameplaySceneReadyRpc
#include "GlobalNamespace/GameplayRpcManager_GetGameplaySceneReadyRpc.hpp"
// Including type: GameplayRpcManager/SetPlayerDidConnectLateRpc
#include "GlobalNamespace/GameplayRpcManager_SetPlayerDidConnectLateRpc.hpp"
// Including type: GameplayRpcManager/SetGameplaySongReadyRpc
#include "GlobalNamespace/GameplayRpcManager_SetGameplaySongReadyRpc.hpp"
// Including type: GameplayRpcManager/GetGameplaySongReadyRpc
#include "GlobalNamespace/GameplayRpcManager_GetGameplaySongReadyRpc.hpp"
// Including type: GameplayRpcManager/SetSongStartTimeRpc
#include "GlobalNamespace/GameplayRpcManager_SetSongStartTimeRpc.hpp"
// Including type: GameplayRpcManager/NoteCutRpc
#include "GlobalNamespace/GameplayRpcManager_NoteCutRpc.hpp"
// Including type: GameplayRpcManager/NoteMissedRpc
#include "GlobalNamespace/GameplayRpcManager_NoteMissedRpc.hpp"
// Including type: GameplayRpcManager/LevelFinishedRpc
#include "GlobalNamespace/GameplayRpcManager_LevelFinishedRpc.hpp"
// Including type: GameplayRpcManager/ReturnToMenuRpc
#include "GlobalNamespace/GameplayRpcManager_ReturnToMenuRpc.hpp"
// Including type: GameplayRpcManager/EndLevelEarlyRpc
#include "GlobalNamespace/GameplayRpcManager_EndLevelEarlyRpc.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: RpcHandler`1
#include "GlobalNamespace/RpcHandler_1.hpp"
// Including type: PlayersAtGameStartNetSerializable
#include "GlobalNamespace/PlayersAtGameStartNetSerializable.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Action`3
#include "System/Action_3.hpp"
// Including type: System.Action`4
#include "System/Action_4.hpp"
// Including type: NoteCutInfoNetSerializable
#include "GlobalNamespace/NoteCutInfoNetSerializable.hpp"
// Including type: NoteMissInfoNetSerializable
#include "GlobalNamespace/NoteMissInfoNetSerializable.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kGameplayState
::Il2CppString* GlobalNamespace::GameplayRpcManager::_get_kGameplayState() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "GameplayRpcManager", "kGameplayState"));
}
// Autogenerated static field setter
// Set static field: static private System.String kGameplayState
void GlobalNamespace::GameplayRpcManager::_set_kGameplayState(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "GameplayRpcManager", "kGameplayState", value));
}
// Autogenerated method: GameplayRpcManager.get_enabled
bool GlobalNamespace::GameplayRpcManager::get_enabled() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_enabled"));
}
// Autogenerated method: GameplayRpcManager.set_enabled
void GlobalNamespace::GameplayRpcManager::set_enabled(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_enabled", value));
}
// Autogenerated method: GameplayRpcManager..ctor
GlobalNamespace::GameplayRpcManager* GlobalNamespace::GameplayRpcManager::New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(il2cpp_utils::New<GameplayRpcManager*>(multiplayerSessionManager));
}
// Autogenerated method: GameplayRpcManager.EnabledForPlayer
bool GlobalNamespace::GameplayRpcManager::EnabledForPlayer(GlobalNamespace::IConnectedPlayer* player) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EnabledForPlayer", player));
}
// Autogenerated method: GameplayRpcManager.InvokeSetGameplaySceneSyncFinishCallback
void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneSyncFinishCallback(::Il2CppString* userId, GlobalNamespace::PlayersAtGameStartNetSerializable* playersAtGameStart) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetGameplaySceneSyncFinishCallback", userId, playersAtGameStart));
}
// Autogenerated method: GameplayRpcManager.InvokeSetGameplaySceneReadyCallback
void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneReadyCallback(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetGameplaySceneReadyCallback", userId));
}
// Autogenerated method: GameplayRpcManager.InvokeGetGameplaySceneReadyCallback
void GlobalNamespace::GameplayRpcManager::InvokeGetGameplaySceneReadyCallback(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetGameplaySceneReadyCallback", userId));
}
// Autogenerated method: GameplayRpcManager.InvokeSetPlayerDidConnectLate
void GlobalNamespace::GameplayRpcManager::InvokeSetPlayerDidConnectLate(::Il2CppString* userId, ::Il2CppString* failedUserId, GlobalNamespace::PlayersAtGameStartNetSerializable* playersAtGameStartNetSerializable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetPlayerDidConnectLate", userId, failedUserId, playersAtGameStartNetSerializable));
}
// Autogenerated method: GameplayRpcManager.InvokeSetGameplaySongReadyCallback
void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySongReadyCallback(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetGameplaySongReadyCallback", userId));
}
// Autogenerated method: GameplayRpcManager.InvokeGetGameplayLevelReadyCallback
void GlobalNamespace::GameplayRpcManager::InvokeGetGameplayLevelReadyCallback(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetGameplayLevelReadyCallback", userId));
}
// Autogenerated method: GameplayRpcManager.InvokeSetSongStartTimeCallback
void GlobalNamespace::GameplayRpcManager::InvokeSetSongStartTimeCallback(::Il2CppString* userId, float startTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetSongStartTimeCallback", userId, startTime));
}
// Autogenerated method: GameplayRpcManager.InvokeNoteWasCutCallback
void GlobalNamespace::GameplayRpcManager::InvokeNoteWasCutCallback(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeNoteWasCutCallback", userId, syncTime, songTime, noteCutInfo));
}
// Autogenerated method: GameplayRpcManager.InvokeNoteWasMissedCallback
void GlobalNamespace::GameplayRpcManager::InvokeNoteWasMissedCallback(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeNoteWasMissedCallback", userId, syncTime, songTime, noteMissInfo));
}
// Autogenerated method: GameplayRpcManager.InvokeLevelFinishedCallback
void GlobalNamespace::GameplayRpcManager::InvokeLevelFinishedCallback(::Il2CppString* userId, GlobalNamespace::LevelCompletionResults* results) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeLevelFinishedCallback", userId, results));
}
// Autogenerated method: GameplayRpcManager.InvokeReturnToMenuCallback
void GlobalNamespace::GameplayRpcManager::InvokeReturnToMenuCallback(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeReturnToMenuCallback", userId));
}
// Autogenerated method: GameplayRpcManager.InvokeEndLevelEarlyCallback
void GlobalNamespace::GameplayRpcManager::InvokeEndLevelEarlyCallback(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeEndLevelEarlyCallback", userId));
}
// Autogenerated method: GameplayRpcManager.Dispose
void GlobalNamespace::GameplayRpcManager::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void GlobalNamespace::GameplayRpcManager::System_IDisposable_Dispose() {
  GlobalNamespace::GameplayRpcManager::Dispose();
}
// Autogenerated method: GameplayRpcManager.add_setGameplaySceneSyncFinishedEvent
void GlobalNamespace::GameplayRpcManager::add_setGameplaySceneSyncFinishedEvent(System::Action_2<::Il2CppString*, GlobalNamespace::PlayersAtGameStartNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setGameplaySceneSyncFinishedEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_setGameplaySceneSyncFinishedEvent
void GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneSyncFinishedEvent(System::Action_2<::Il2CppString*, GlobalNamespace::PlayersAtGameStartNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setGameplaySceneSyncFinishedEvent", value));
}
// Autogenerated method: GameplayRpcManager.SetGameplaySceneSyncFinished
void GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinished(GlobalNamespace::PlayersAtGameStartNetSerializable* playersAtGameStartNetSerializable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetGameplaySceneSyncFinished", playersAtGameStartNetSerializable));
}
// Autogenerated method: GameplayRpcManager.add_setGameplaySceneReadyEvent
void GlobalNamespace::GameplayRpcManager::add_setGameplaySceneReadyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setGameplaySceneReadyEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_setGameplaySceneReadyEvent
void GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneReadyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setGameplaySceneReadyEvent", value));
}
// Autogenerated method: GameplayRpcManager.SetGameplaySceneReady
void GlobalNamespace::GameplayRpcManager::SetGameplaySceneReady() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetGameplaySceneReady"));
}
// Autogenerated method: GameplayRpcManager.add_getGameplaySceneReadyEvent
void GlobalNamespace::GameplayRpcManager::add_getGameplaySceneReadyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getGameplaySceneReadyEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_getGameplaySceneReadyEvent
void GlobalNamespace::GameplayRpcManager::remove_getGameplaySceneReadyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getGameplaySceneReadyEvent", value));
}
// Autogenerated method: GameplayRpcManager.GetGameplaySceneReady
void GlobalNamespace::GameplayRpcManager::GetGameplaySceneReady() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetGameplaySceneReady"));
}
// Autogenerated method: GameplayRpcManager.add_setPlayerDidConnectLateEvent
void GlobalNamespace::GameplayRpcManager::add_setPlayerDidConnectLateEvent(System::Action_3<::Il2CppString*, ::Il2CppString*, GlobalNamespace::PlayersAtGameStartNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setPlayerDidConnectLateEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_setPlayerDidConnectLateEvent
void GlobalNamespace::GameplayRpcManager::remove_setPlayerDidConnectLateEvent(System::Action_3<::Il2CppString*, ::Il2CppString*, GlobalNamespace::PlayersAtGameStartNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setPlayerDidConnectLateEvent", value));
}
// Autogenerated method: GameplayRpcManager.SetPlayerDidConnectLate
void GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLate(::Il2CppString* usedId, GlobalNamespace::PlayersAtGameStartNetSerializable* playersAtGameStartNetSerializable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPlayerDidConnectLate", usedId, playersAtGameStartNetSerializable));
}
// Autogenerated method: GameplayRpcManager.add_setGameplaySongReadyEvent
void GlobalNamespace::GameplayRpcManager::add_setGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setGameplaySongReadyEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_setGameplaySongReadyEvent
void GlobalNamespace::GameplayRpcManager::remove_setGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setGameplaySongReadyEvent", value));
}
// Autogenerated method: GameplayRpcManager.SetGameplaySongReady
void GlobalNamespace::GameplayRpcManager::SetGameplaySongReady() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetGameplaySongReady"));
}
// Autogenerated method: GameplayRpcManager.add_getGameplaySongReadyEvent
void GlobalNamespace::GameplayRpcManager::add_getGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getGameplaySongReadyEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_getGameplaySongReadyEvent
void GlobalNamespace::GameplayRpcManager::remove_getGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getGameplaySongReadyEvent", value));
}
// Autogenerated method: GameplayRpcManager.GetGameplaySongReady
void GlobalNamespace::GameplayRpcManager::GetGameplaySongReady() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetGameplaySongReady"));
}
// Autogenerated method: GameplayRpcManager.add_setSongStartTimeEvent
void GlobalNamespace::GameplayRpcManager::add_setSongStartTimeEvent(System::Action_2<::Il2CppString*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setSongStartTimeEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_setSongStartTimeEvent
void GlobalNamespace::GameplayRpcManager::remove_setSongStartTimeEvent(System::Action_2<::Il2CppString*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setSongStartTimeEvent", value));
}
// Autogenerated method: GameplayRpcManager.SetSongStartTime
void GlobalNamespace::GameplayRpcManager::SetSongStartTime(float startTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetSongStartTime", startTime));
}
// Autogenerated method: GameplayRpcManager.add_noteWasCutEvent
void GlobalNamespace::GameplayRpcManager::add_noteWasCutEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_noteWasCutEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_noteWasCutEvent
void GlobalNamespace::GameplayRpcManager::remove_noteWasCutEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_noteWasCutEvent", value));
}
// Autogenerated method: GameplayRpcManager.NoteCut
void GlobalNamespace::GameplayRpcManager::NoteCut(float songTime, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfoNetSerializable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NoteCut", songTime, noteCutInfoNetSerializable));
}
// Autogenerated method: GameplayRpcManager.add_noteWasMissedEvent
void GlobalNamespace::GameplayRpcManager::add_noteWasMissedEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_noteWasMissedEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_noteWasMissedEvent
void GlobalNamespace::GameplayRpcManager::remove_noteWasMissedEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_noteWasMissedEvent", value));
}
// Autogenerated method: GameplayRpcManager.NoteMissed
void GlobalNamespace::GameplayRpcManager::NoteMissed(float songTime, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfoNetSerializable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NoteMissed", songTime, noteMissInfoNetSerializable));
}
// Autogenerated method: GameplayRpcManager.add_levelFinishedEvent
void GlobalNamespace::GameplayRpcManager::add_levelFinishedEvent(System::Action_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_levelFinishedEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_levelFinishedEvent
void GlobalNamespace::GameplayRpcManager::remove_levelFinishedEvent(System::Action_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_levelFinishedEvent", value));
}
// Autogenerated method: GameplayRpcManager.LevelFinished
void GlobalNamespace::GameplayRpcManager::LevelFinished(GlobalNamespace::LevelCompletionResults* results) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LevelFinished", results));
}
// Autogenerated method: GameplayRpcManager.add_returnToMenuEvent
void GlobalNamespace::GameplayRpcManager::add_returnToMenuEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_returnToMenuEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_returnToMenuEvent
void GlobalNamespace::GameplayRpcManager::remove_returnToMenuEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_returnToMenuEvent", value));
}
// Autogenerated method: GameplayRpcManager.ReturnToMenu
void GlobalNamespace::GameplayRpcManager::ReturnToMenu() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReturnToMenu"));
}
// Autogenerated method: GameplayRpcManager.add_levelEndedEarlyEvent
void GlobalNamespace::GameplayRpcManager::add_levelEndedEarlyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_levelEndedEarlyEvent", value));
}
// Autogenerated method: GameplayRpcManager.remove_levelEndedEarlyEvent
void GlobalNamespace::GameplayRpcManager::remove_levelEndedEarlyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_levelEndedEarlyEvent", value));
}
// Autogenerated method: GameplayRpcManager.EndLevelEarly
void GlobalNamespace::GameplayRpcManager::EndLevelEarly() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndLevelEarly"));
}
