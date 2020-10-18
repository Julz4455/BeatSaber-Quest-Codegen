// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MultiplayerConnectedPlayerObservable
#include "GlobalNamespace/MultiplayerConnectedPlayerObservable.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerConnectedPlayerObservable..ctor
GlobalNamespace::MultiplayerConnectedPlayerObservable* GlobalNamespace::MultiplayerConnectedPlayerObservable::New_ctor(GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  return THROW_UNLESS(il2cpp_utils::New<MultiplayerConnectedPlayerObservable*>(connectedPlayer));
}
// Autogenerated method: MultiplayerConnectedPlayerObservable.get_offsetSyncTime
float GlobalNamespace::MultiplayerConnectedPlayerObservable::get_offsetSyncTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_offsetSyncTime"));
}
// Autogenerated method: MultiplayerConnectedPlayerObservable.get_isFailed
bool GlobalNamespace::MultiplayerConnectedPlayerObservable::get_isFailed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isFailed"));
}
