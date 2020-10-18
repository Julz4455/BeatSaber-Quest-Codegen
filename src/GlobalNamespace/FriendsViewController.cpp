// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FriendsViewController
#include "GlobalNamespace/FriendsViewController.hpp"
// Including type: UnityEngine.UI.Toggle
#include "UnityEngine/UI/Toggle.hpp"
// Including type: PlatformNetworkPlayerModel
#include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
// Including type: INetworkConfig
#include "GlobalNamespace/INetworkConfig.hpp"
// Including type: HMUI.ToggleBinder
#include "HMUI/ToggleBinder.hpp"
// Including type: INetworkPlayerModel
#include "GlobalNamespace/INetworkPlayerModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: FriendsViewController.HandleOpenPartyToggleChanged
void GlobalNamespace::FriendsViewController::HandleOpenPartyToggleChanged(bool openParty) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleOpenPartyToggleChanged", openParty));
}
// Autogenerated method: FriendsViewController.RefreshParty
void GlobalNamespace::FriendsViewController::RefreshParty(bool overrideHide) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RefreshParty", overrideHide));
}
// Autogenerated method: FriendsViewController.get_myPartyTitle
::Il2CppString* GlobalNamespace::FriendsViewController::get_myPartyTitle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_myPartyTitle"));
}
// Autogenerated method: FriendsViewController.get_otherPlayersTitle
::Il2CppString* GlobalNamespace::FriendsViewController::get_otherPlayersTitle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_otherPlayersTitle"));
}
// Autogenerated method: FriendsViewController.get_networkPlayerModel
GlobalNamespace::INetworkPlayerModel* GlobalNamespace::FriendsViewController::get_networkPlayerModel() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::INetworkPlayerModel*>(this, "get_networkPlayerModel"));
}
// Autogenerated method: FriendsViewController.NetworkPlayersViewControllerDidActivate
void GlobalNamespace::FriendsViewController::NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NetworkPlayersViewControllerDidActivate", firstActivation, addedToHierarchy));
}
// Autogenerated method: FriendsViewController.DidDeactivate
void GlobalNamespace::FriendsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidDeactivate", removedFromHierarchy, screenSystemDisabling));
}
// Autogenerated method: FriendsViewController.OnDestroy
void GlobalNamespace::FriendsViewController::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: FriendsViewController..ctor
GlobalNamespace::FriendsViewController* GlobalNamespace::FriendsViewController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<FriendsViewController*>());
}
