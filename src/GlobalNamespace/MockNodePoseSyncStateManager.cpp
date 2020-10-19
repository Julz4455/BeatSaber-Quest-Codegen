// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MockNodePoseSyncStateManager
#include "GlobalNamespace/MockNodePoseSyncStateManager.hpp"
// Including type: MultiplayerMockSettings
#include "GlobalNamespace/MultiplayerMockSettings.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: LocalMultiplayerSyncState`3
#include "GlobalNamespace/LocalMultiplayerSyncState_3.hpp"
// Including type: MultiplayerSyncState`3
#include "GlobalNamespace/MultiplayerSyncState_3.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MockNodePoseSyncStateManager.get_localState
GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* GlobalNamespace::MockNodePoseSyncStateManager::get_localState() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*>(this, "get_localState")));
}
// Autogenerated method: MockNodePoseSyncStateManager.Init
void GlobalNamespace::MockNodePoseSyncStateManager::Init() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init"));
}
// Autogenerated method: MockNodePoseSyncStateManager.GetSyncStateForPlayer
GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* GlobalNamespace::MockNodePoseSyncStateManager::GetSyncStateForPlayer(GlobalNamespace::IConnectedPlayer* player) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*>(this, "GetSyncStateForPlayer", player)));
}
// Autogenerated method: MockNodePoseSyncStateManager.GetSyncState
GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* GlobalNamespace::MockNodePoseSyncStateManager::GetSyncState(int i) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*>(this, "GetSyncState", i)));
}
// Autogenerated method: MockNodePoseSyncStateManager.Interpolate
GlobalNamespace::PoseSerializable GlobalNamespace::MockNodePoseSyncStateManager::Interpolate(GlobalNamespace::PoseSerializable prev, float prevTime, GlobalNamespace::PoseSerializable curr, float currTime, float time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PoseSerializable>(this, "Interpolate", prev, prevTime, curr, currTime, time));
}
// Autogenerated method: MockNodePoseSyncStateManager.Smooth
GlobalNamespace::PoseSerializable GlobalNamespace::MockNodePoseSyncStateManager::Smooth(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float smooth) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PoseSerializable>(this, "Smooth", a, b, smooth));
}
// Autogenerated method: MockNodePoseSyncStateManager.get_syncTime
float GlobalNamespace::MockNodePoseSyncStateManager::get_syncTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_syncTime"));
}
// Autogenerated method: MockNodePoseSyncStateManager.get_connectedPlayerCount
int GlobalNamespace::MockNodePoseSyncStateManager::get_connectedPlayerCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_connectedPlayerCount"));
}
// Autogenerated method: MockNodePoseSyncStateManager.ClearBufferedStates
void GlobalNamespace::MockNodePoseSyncStateManager::ClearBufferedStates() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearBufferedStates"));
}
// Autogenerated method: MockNodePoseSyncStateManager..ctor
GlobalNamespace::MockNodePoseSyncStateManager* GlobalNamespace::MockNodePoseSyncStateManager::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MockNodePoseSyncStateManager*>());
}