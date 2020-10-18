// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
// Including type: MultiplayerResultsTableView
#include "GlobalNamespace/MultiplayerResultsTableView.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ResultsTableCell
  class ResultsTableCell;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ResultsTableView
  class ResultsTableView : public UnityEngine::MonoBehaviour, public HMUI::TableView::IDataSource {
    public:
    // private HMUI.TableView _tableView
    // Offset: 0x18
    HMUI::TableView* tableView;
    // private ResultsTableCell _cellPrefab
    // Offset: 0x20
    GlobalNamespace::ResultsTableCell* cellPrefab;
    // private System.Single _rowHeight
    // Offset: 0x28
    float rowHeight;
    // private System.Collections.Generic.IReadOnlyList`1<MultiplayerResultsTableView/Data> _dataList
    // Offset: 0x30
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerResultsTableView::Data*>* dataList;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::Il2CppString* _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::Il2CppString* value);
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<MultiplayerResultsTableView/Data> dataList)
    // Offset: 0xF788E0
    void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerResultsTableView::Data*>* dataList);
    // public System.Single CellSize()
    // Offset: 0xF78668
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xF78670
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0xF78720
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // public System.Void .ctor()
    // Offset: 0xF78924
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ResultsTableView* New_ctor();
  }; // ResultsTableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsTableView*, "", "ResultsTableView");
#pragma pack(pop)
