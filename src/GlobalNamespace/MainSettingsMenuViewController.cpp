// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainSettingsMenuViewController
#include "GlobalNamespace/MainSettingsMenuViewController.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: SettingsSubMenuInfo
#include "GlobalNamespace/SettingsSubMenuInfo.hpp"
// Including type: HMUI.TextSegmentedControl
#include "HMUI/TextSegmentedControl.hpp"
// Including type: HMUI.SegmentedControl
#include "HMUI/SegmentedControl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MainSettingsMenuViewController.add_didSelectSettingsSubMenuEvent
void GlobalNamespace::MainSettingsMenuViewController::add_didSelectSettingsSubMenuEvent(System::Action_2<GlobalNamespace::SettingsSubMenuInfo*, int>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectSettingsSubMenuEvent", value));
}
// Autogenerated method: MainSettingsMenuViewController.remove_didSelectSettingsSubMenuEvent
void GlobalNamespace::MainSettingsMenuViewController::remove_didSelectSettingsSubMenuEvent(System::Action_2<GlobalNamespace::SettingsSubMenuInfo*, int>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectSettingsSubMenuEvent", value));
}
// Autogenerated method: MainSettingsMenuViewController.get_numberOfSubMenus
int GlobalNamespace::MainSettingsMenuViewController::get_numberOfSubMenus() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_numberOfSubMenus"));
}
// Autogenerated method: MainSettingsMenuViewController.get_selectedSubMenuInfo
GlobalNamespace::SettingsSubMenuInfo* GlobalNamespace::MainSettingsMenuViewController::get_selectedSubMenuInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::SettingsSubMenuInfo*>(this, "get_selectedSubMenuInfo"));
}
// Autogenerated method: MainSettingsMenuViewController.Init
void GlobalNamespace::MainSettingsMenuViewController::Init(int selectedSubMenuInfoIdx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", selectedSubMenuInfoIdx));
}
// Autogenerated method: MainSettingsMenuViewController.HandleSettingsMenuSegmentedControlDidSelectCell
void GlobalNamespace::MainSettingsMenuViewController::HandleSettingsMenuSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleSettingsMenuSegmentedControlDidSelectCell", segmentedControl, cellIdx));
}
// Autogenerated method: MainSettingsMenuViewController.DidActivate
void GlobalNamespace::MainSettingsMenuViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, addedToHierarchy, screenSystemEnabling));
}
// Autogenerated method: MainSettingsMenuViewController..ctor
GlobalNamespace::MainSettingsMenuViewController* GlobalNamespace::MainSettingsMenuViewController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MainSettingsMenuViewController*>());
}
