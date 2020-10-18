// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: INetworkPlayer.get_userId
::Il2CppString* GlobalNamespace::INetworkPlayer::GlobalNamespace_INetworkPlayer_get_userId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_userId"));
}
// Autogenerated method: INetworkPlayer.get_userName
::Il2CppString* GlobalNamespace::INetworkPlayer::GlobalNamespace_INetworkPlayer_get_userName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_userName"));
}
// Autogenerated method: INetworkPlayer.get_isMe
bool GlobalNamespace::INetworkPlayer::get_isMe() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isMe"));
}
// Autogenerated method: INetworkPlayer.get_currentPartySize
int GlobalNamespace::INetworkPlayer::get_currentPartySize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_currentPartySize"));
}
// Autogenerated method: INetworkPlayer.get_maxPartySize
int GlobalNamespace::INetworkPlayer::get_maxPartySize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_maxPartySize"));
}
// Autogenerated method: INetworkPlayer.get_isMyPartyOwner
bool GlobalNamespace::INetworkPlayer::get_isMyPartyOwner() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isMyPartyOwner"));
}
// Autogenerated method: INetworkPlayer.get_isOpenParty
bool GlobalNamespace::INetworkPlayer::get_isOpenParty() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isOpenParty"));
}
// Autogenerated method: INetworkPlayer.get_isConnected
bool GlobalNamespace::INetworkPlayer::get_isConnected() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isConnected"));
}
// Autogenerated method: INetworkPlayer.get_isPlayer
bool GlobalNamespace::INetworkPlayer::get_isPlayer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isPlayer"));
}
// Autogenerated method: INetworkPlayer.get_isDedicatedServer
bool GlobalNamespace::INetworkPlayer::get_isDedicatedServer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isDedicatedServer"));
}
// Autogenerated method: INetworkPlayer.get_isSpectating
bool GlobalNamespace::INetworkPlayer::get_isSpectating() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isSpectating"));
}
// Autogenerated method: INetworkPlayer.get_difficulties
GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::INetworkPlayer::get_difficulties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapDifficultyMask>(this, "get_difficulties"));
}
// Autogenerated method: INetworkPlayer.get_modifiers
GlobalNamespace::GameplayModifierMask GlobalNamespace::INetworkPlayer::get_modifiers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::GameplayModifierMask>(this, "get_modifiers"));
}
// Autogenerated method: INetworkPlayer.get_songPacks
GlobalNamespace::SongPackMask GlobalNamespace::INetworkPlayer::get_songPacks() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::SongPackMask>(this, "get_songPacks"));
}
// Autogenerated method: INetworkPlayer.get_canJoin
bool GlobalNamespace::INetworkPlayer::get_canJoin() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canJoin"));
}
// Autogenerated method: INetworkPlayer.Join
void GlobalNamespace::INetworkPlayer::Join() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Join"));
}
// Autogenerated method: INetworkPlayer.get_requiresPassword
bool GlobalNamespace::INetworkPlayer::get_requiresPassword() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_requiresPassword"));
}
// Autogenerated method: INetworkPlayer.Join
void GlobalNamespace::INetworkPlayer::Join(::Il2CppString* password) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Join", password));
}
// Autogenerated method: INetworkPlayer.get_isWaitingOnJoin
bool GlobalNamespace::INetworkPlayer::get_isWaitingOnJoin() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isWaitingOnJoin"));
}
// Autogenerated method: INetworkPlayer.get_canInvite
bool GlobalNamespace::INetworkPlayer::get_canInvite() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canInvite"));
}
// Autogenerated method: INetworkPlayer.Invite
void GlobalNamespace::INetworkPlayer::Invite() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invite"));
}
// Autogenerated method: INetworkPlayer.get_isWaitingOnInvite
bool GlobalNamespace::INetworkPlayer::get_isWaitingOnInvite() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isWaitingOnInvite"));
}
// Autogenerated method: INetworkPlayer.get_canKick
bool GlobalNamespace::INetworkPlayer::get_canKick() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canKick"));
}
// Autogenerated method: INetworkPlayer.Kick
void GlobalNamespace::INetworkPlayer::Kick() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Kick"));
}
// Autogenerated method: INetworkPlayer.get_canLeave
bool GlobalNamespace::INetworkPlayer::get_canLeave() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canLeave"));
}
// Autogenerated method: INetworkPlayer.Leave
void GlobalNamespace::INetworkPlayer::Leave() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Leave"));
}
// Autogenerated method: INetworkPlayer.get_canBlock
bool GlobalNamespace::INetworkPlayer::get_canBlock() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canBlock"));
}
// Autogenerated method: INetworkPlayer.Block
void GlobalNamespace::INetworkPlayer::Block() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Block"));
}
// Autogenerated method: INetworkPlayer.get_canUnblock
bool GlobalNamespace::INetworkPlayer::get_canUnblock() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canUnblock"));
}
// Autogenerated method: INetworkPlayer.Unblock
void GlobalNamespace::INetworkPlayer::Unblock() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Unblock"));
}
// Autogenerated method: INetworkPlayer.SendJoinResponse
void GlobalNamespace::INetworkPlayer::SendJoinResponse(bool accept) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendJoinResponse", accept));
}
// Autogenerated method: INetworkPlayer.SendInviteResponse
void GlobalNamespace::INetworkPlayer::SendInviteResponse(bool accept) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendInviteResponse", accept));
}
