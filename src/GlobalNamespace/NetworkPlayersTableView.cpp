// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayersTableView
#include "GlobalNamespace/NetworkPlayersTableView.hpp"
// Including type: NetworkPlayersTableView/CellInfo
#include "GlobalNamespace/NetworkPlayersTableView_CellInfo.hpp"
// Including type: NetworkPlayerTableCell
#include "GlobalNamespace/NetworkPlayerTableCell.hpp"
// Including type: NetworkPlayerOptionsTableCell
#include "GlobalNamespace/NetworkPlayerOptionsTableCell.hpp"
// Including type: LevelPackHeaderTableCell
#include "GlobalNamespace/LevelPackHeaderTableCell.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kPlayerCellIdentifier
::Il2CppString* GlobalNamespace::NetworkPlayersTableView::_get_kPlayerCellIdentifier() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "NetworkPlayersTableView", "kPlayerCellIdentifier"));
}
// Autogenerated static field setter
// Set static field: static private System.String kPlayerCellIdentifier
void GlobalNamespace::NetworkPlayersTableView::_set_kPlayerCellIdentifier(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NetworkPlayersTableView", "kPlayerCellIdentifier", value));
}
// Autogenerated static field getter
// Get static field: static private System.String kHeaderCellIdentifier
::Il2CppString* GlobalNamespace::NetworkPlayersTableView::_get_kHeaderCellIdentifier() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "NetworkPlayersTableView", "kHeaderCellIdentifier"));
}
// Autogenerated static field setter
// Set static field: static private System.String kHeaderCellIdentifier
void GlobalNamespace::NetworkPlayersTableView::_set_kHeaderCellIdentifier(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NetworkPlayersTableView", "kHeaderCellIdentifier", value));
}
// Autogenerated static field getter
// Get static field: static private System.String kOptionsCellIdentifier
::Il2CppString* GlobalNamespace::NetworkPlayersTableView::_get_kOptionsCellIdentifier() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "NetworkPlayersTableView", "kOptionsCellIdentifier"));
}
// Autogenerated static field setter
// Set static field: static private System.String kOptionsCellIdentifier
void GlobalNamespace::NetworkPlayersTableView::_set_kOptionsCellIdentifier(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NetworkPlayersTableView", "kOptionsCellIdentifier", value));
}
// Autogenerated method: NetworkPlayersTableView.AddPlayers
void GlobalNamespace::NetworkPlayersTableView::AddPlayers(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* players, ::Il2CppString* title) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddPlayers", players, title));
}
// Autogenerated method: NetworkPlayersTableView.SetParties
void GlobalNamespace::NetworkPlayersTableView::SetParties(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* partyPlayers, System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* otherPlayers, ::Il2CppString* myPartyTitle, ::Il2CppString* otherPlayersTitle) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetParties", partyPlayers, otherPlayers, myPartyTitle, otherPlayersTitle));
}
// Autogenerated method: NetworkPlayersTableView.HandleCellWasPressed
void GlobalNamespace::NetworkPlayersTableView::HandleCellWasPressed(HMUI::TableView* tableView, HMUI::TableCell* tableCell) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleCellWasPressed", tableView, tableCell));
}
// Autogenerated method: NetworkPlayersTableView.HasVisibleOptions
bool GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions(GlobalNamespace::INetworkPlayer* player) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "NetworkPlayersTableView", "HasVisibleOptions", player));
}
// Autogenerated method: NetworkPlayersTableView.CellSize
float GlobalNamespace::NetworkPlayersTableView::CellSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "CellSize"));
}
// Autogenerated method: NetworkPlayersTableView.NumberOfCells
int GlobalNamespace::NetworkPlayersTableView::NumberOfCells() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NumberOfCells"));
}
// Autogenerated method: NetworkPlayersTableView.CellForIdx
HMUI::TableCell* GlobalNamespace::NetworkPlayersTableView::CellForIdx(HMUI::TableView* tableView, int row) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TableCell*>(this, "CellForIdx", tableView, row));
}
// Autogenerated method: NetworkPlayersTableView..ctor
GlobalNamespace::NetworkPlayersTableView* GlobalNamespace::NetworkPlayersTableView::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<NetworkPlayersTableView*>());
}
