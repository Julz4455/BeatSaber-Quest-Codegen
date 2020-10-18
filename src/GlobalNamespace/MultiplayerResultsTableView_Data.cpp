// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerResultsTableView/Data
#include "GlobalNamespace/MultiplayerResultsTableView_Data.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerResultsTableView/Data..ctor
GlobalNamespace::MultiplayerResultsTableView::Data* GlobalNamespace::MultiplayerResultsTableView::Data::New_ctor(GlobalNamespace::IConnectedPlayer* connectedPlayer, GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  return THROW_UNLESS(il2cpp_utils::New<MultiplayerResultsTableView::Data*>(connectedPlayer, levelCompletionResults));
}
// Autogenerated method: MultiplayerResultsTableView/Data.CompareTo
int GlobalNamespace::MultiplayerResultsTableView::Data::CompareTo(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "CompareTo", obj));
}
int GlobalNamespace::MultiplayerResultsTableView::Data::System_IComparable_CompareTo(::Il2CppObject* obj) {
  return GlobalNamespace::MultiplayerResultsTableView::Data::CompareTo(obj);
}
