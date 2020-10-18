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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NetworkPlayerTableCell
  class NetworkPlayerTableCell;
  // Forward declaring type: NetworkPlayerOptionsTableCell
  class NetworkPlayerOptionsTableCell;
  // Forward declaring type: LevelPackHeaderTableCell
  class LevelPackHeaderTableCell;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetworkPlayersTableView
  class NetworkPlayersTableView : public UnityEngine::MonoBehaviour, public HMUI::TableView::IDataSource {
    public:
    // Nested type: GlobalNamespace::NetworkPlayersTableView::CellInfo
    class CellInfo;
    // private HMUI.TableView _tableView
    // Offset: 0x18
    HMUI::TableView* tableView;
    // private NetworkPlayerTableCell _playerCellPrefab
    // Offset: 0x20
    GlobalNamespace::NetworkPlayerTableCell* playerCellPrefab;
    // private NetworkPlayerOptionsTableCell _optionsCellPrefab
    // Offset: 0x28
    GlobalNamespace::NetworkPlayerOptionsTableCell* optionsCellPrefab;
    // private LevelPackHeaderTableCell _headerCellPrefab
    // Offset: 0x30
    GlobalNamespace::LevelPackHeaderTableCell* headerCellPrefab;
    // private System.Single _rowHeight
    // Offset: 0x38
    float rowHeight;
    // private System.Collections.Generic.List`1<NetworkPlayersTableView/CellInfo> _cellInfo
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::NetworkPlayersTableView::CellInfo*>* cellInfo;
    // private System.Int32 _selectedCellIndex
    // Offset: 0x48
    int selectedCellIndex;
    // private System.String _selectedPlayerID
    // Offset: 0x50
    ::Il2CppString* selectedPlayerID;
    // private System.Boolean _selectedCellHasOptions
    // Offset: 0x58
    bool selectedCellHasOptions;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kPlayerCellIdentifier
    static constexpr const char* kPlayerCellIdentifier = "PlayerCell";
    // Get static field: static private System.String kPlayerCellIdentifier
    static ::Il2CppString* _get_kPlayerCellIdentifier();
    // Set static field: static private System.String kPlayerCellIdentifier
    static void _set_kPlayerCellIdentifier(::Il2CppString* value);
    // static field const value: static private System.String kHeaderCellIdentifier
    static constexpr const char* kHeaderCellIdentifier = "HeaderCell";
    // Get static field: static private System.String kHeaderCellIdentifier
    static ::Il2CppString* _get_kHeaderCellIdentifier();
    // Set static field: static private System.String kHeaderCellIdentifier
    static void _set_kHeaderCellIdentifier(::Il2CppString* value);
    // static field const value: static private System.String kOptionsCellIdentifier
    static constexpr const char* kOptionsCellIdentifier = "OptionsCell";
    // Get static field: static private System.String kOptionsCellIdentifier
    static ::Il2CppString* _get_kOptionsCellIdentifier();
    // Set static field: static private System.String kOptionsCellIdentifier
    static void _set_kOptionsCellIdentifier(::Il2CppString* value);
    // private System.Void AddPlayers(System.Collections.Generic.IEnumerable`1<INetworkPlayer> players, System.String title)
    // Offset: 0xF108C4
    void AddPlayers(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* players, ::Il2CppString* title);
    // public System.Void SetParties(System.Collections.Generic.IEnumerable`1<INetworkPlayer> partyPlayers, System.Collections.Generic.IEnumerable`1<INetworkPlayer> otherPlayers, System.String myPartyTitle, System.String otherPlayersTitle)
    // Offset: 0xF111AC
    void SetParties(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* partyPlayers, System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* otherPlayers, ::Il2CppString* myPartyTitle, ::Il2CppString* otherPlayersTitle);
    // private System.Void HandleCellWasPressed(HMUI.TableView tableView, HMUI.TableCell tableCell)
    // Offset: 0xF112CC
    void HandleCellWasPressed(HMUI::TableView* tableView, HMUI::TableCell* tableCell);
    // static private System.Boolean HasVisibleOptions(INetworkPlayer player)
    // Offset: 0xF10E14
    static bool HasVisibleOptions(GlobalNamespace::INetworkPlayer* player);
    // public System.Single CellSize()
    // Offset: 0xF102BC
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xF102C4
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xF10314
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 row)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // public System.Void .ctor()
    // Offset: 0xF112D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetworkPlayersTableView* New_ctor();
  }; // NetworkPlayersTableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayersTableView*, "", "NetworkPlayersTableView");
#pragma pack(pop)
