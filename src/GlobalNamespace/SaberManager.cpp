// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: SaberManager
#include "GlobalNamespace/SaberManager.hpp"
// Including type: SaberManager/InitData
#include "GlobalNamespace/SaberManager_InitData.hpp"
// Including type: Saber
#include "GlobalNamespace/Saber.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: SaberManager.get_leftSaber
GlobalNamespace::Saber* GlobalNamespace::SaberManager::get_leftSaber() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::Saber*>(this, "get_leftSaber"));
}
// Autogenerated method: SaberManager.get_rightSaber
GlobalNamespace::Saber* GlobalNamespace::SaberManager::get_rightSaber() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::Saber*>(this, "get_rightSaber"));
}
// Autogenerated method: SaberManager.add_didUpdateSaberPositionsEvent
void GlobalNamespace::SaberManager::add_didUpdateSaberPositionsEvent(System::Action_2<GlobalNamespace::Saber*, GlobalNamespace::Saber*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didUpdateSaberPositionsEvent", value));
}
// Autogenerated method: SaberManager.remove_didUpdateSaberPositionsEvent
void GlobalNamespace::SaberManager::remove_didUpdateSaberPositionsEvent(System::Action_2<GlobalNamespace::Saber*, GlobalNamespace::Saber*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didUpdateSaberPositionsEvent", value));
}
// Autogenerated method: SaberManager.set_disableSabers
void GlobalNamespace::SaberManager::set_disableSabers(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_disableSabers", value));
}
// Autogenerated method: SaberManager.Start
void GlobalNamespace::SaberManager::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: SaberManager.OnDisable
void GlobalNamespace::SaberManager::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: SaberManager.OnEnable
void GlobalNamespace::SaberManager::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: SaberManager.Update
void GlobalNamespace::SaberManager::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: SaberManager.SaberForType
GlobalNamespace::Saber* GlobalNamespace::SaberManager::SaberForType(GlobalNamespace::SaberType saberType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::Saber*>(this, "SaberForType", saberType));
}
// Autogenerated method: SaberManager.RefreshSabers
void GlobalNamespace::SaberManager::RefreshSabers() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RefreshSabers"));
}
// Autogenerated method: SaberManager..ctor
GlobalNamespace::SaberManager* GlobalNamespace::SaberManager::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SaberManager*>());
}
