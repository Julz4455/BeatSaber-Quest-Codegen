// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockServer
#include "GlobalNamespace/MockServer.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: GameplayServerFiniteStateMachine
#include "GlobalNamespace/GameplayServerFiniteStateMachine.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
// Including type: MockMultiplayerSessionManager
#include "GlobalNamespace/MockMultiplayerSessionManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MockServer.add_onJoin
void GlobalNamespace::MockServer::add_onJoin(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_onJoin", value));
}
// Autogenerated method: MockServer.remove_onJoin
void GlobalNamespace::MockServer::remove_onJoin(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_onJoin", value));
}
// Autogenerated method: MockServer.SetConfiguration
void GlobalNamespace::MockServer::SetConfiguration(GlobalNamespace::GameplayServerConfiguration configuration) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetConfiguration", configuration));
}
// Autogenerated method: MockServer.get_canJoin
bool GlobalNamespace::MockServer::get_canJoin() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canJoin"));
}
// Autogenerated method: MockServer..ctor
GlobalNamespace::MockServer* GlobalNamespace::MockServer::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MockServer*>());
}
// Autogenerated method: MockServer.Join
void GlobalNamespace::MockServer::Join() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Join"));
}
// Autogenerated method: MockServer.Join
void GlobalNamespace::MockServer::Join(::Il2CppString* password) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Join", password));
}
// Autogenerated method: MockServer.Connect
void GlobalNamespace::MockServer::Connect(GlobalNamespace::MockMultiplayerSessionManager* multiplayerSessionManager) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Connect", multiplayerSessionManager));
}
// Autogenerated method: MockServer.Disconnect
void GlobalNamespace::MockServer::Disconnect() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Disconnect"));
}