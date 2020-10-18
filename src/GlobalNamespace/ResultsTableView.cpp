// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ResultsTableView
#include "GlobalNamespace/ResultsTableView.hpp"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
// Including type: ResultsTableCell
#include "GlobalNamespace/ResultsTableCell.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: MultiplayerResultsTableView/Data
#include "GlobalNamespace/MultiplayerResultsTableView_Data.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kCellIdentifier
::Il2CppString* GlobalNamespace::ResultsTableView::_get_kCellIdentifier() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "ResultsTableView", "kCellIdentifier"));
}
// Autogenerated static field setter
// Set static field: static private System.String kCellIdentifier
void GlobalNamespace::ResultsTableView::_set_kCellIdentifier(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ResultsTableView", "kCellIdentifier", value));
}
// Autogenerated method: ResultsTableView.SetData
void GlobalNamespace::ResultsTableView::SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerResultsTableView::Data*>* dataList) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetData", dataList));
}
// Autogenerated method: ResultsTableView.CellSize
float GlobalNamespace::ResultsTableView::CellSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "CellSize"));
}
// Autogenerated method: ResultsTableView.NumberOfCells
int GlobalNamespace::ResultsTableView::NumberOfCells() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NumberOfCells"));
}
// Autogenerated method: ResultsTableView.CellForIdx
HMUI::TableCell* GlobalNamespace::ResultsTableView::CellForIdx(HMUI::TableView* tableView, int idx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TableCell*>(this, "CellForIdx", tableView, idx));
}
// Autogenerated method: ResultsTableView..ctor
GlobalNamespace::ResultsTableView* GlobalNamespace::ResultsTableView::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ResultsTableView*>());
}
