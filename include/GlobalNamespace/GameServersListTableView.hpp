// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: TableViewWithDetailCell/IDataSource
#include "GlobalNamespace/TableViewWithDetailCell_IDataSource.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: TableViewWithDetailCell because it is already included!
  // Forward declaring type: GameServerListTableCell
  class GameServerListTableCell;
  // Forward declaring type: GameServerListDetailTableCell
  class GameServerListDetailTableCell;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableView
  class TableView;
  // Forward declaring type: TableCell
  class TableCell;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameServersListTableView
  class GameServersListTableView : public UnityEngine::MonoBehaviour, public GlobalNamespace::TableViewWithDetailCell::IDataSource {
    public:
    // private TableViewWithDetailCell _tableView
    // Offset: 0x18
    GlobalNamespace::TableViewWithDetailCell* tableView;
    // private GameServerListTableCell _gameServerListCellPrefab
    // Offset: 0x20
    GlobalNamespace::GameServerListTableCell* gameServerListCellPrefab;
    // private GameServerListDetailTableCell _gameServerDetailCellPrefab
    // Offset: 0x28
    GlobalNamespace::GameServerListDetailTableCell* gameServerDetailCellPrefab;
    // private readonly Zenject.DiContainer _container
    // Offset: 0x30
    Zenject::DiContainer* container;
    // private System.Action`1<INetworkPlayer> joinButtonPressedEvent
    // Offset: 0x38
    System::Action_1<GlobalNamespace::INetworkPlayer*>* joinButtonPressedEvent;
    // private System.Boolean _isInitialized
    // Offset: 0x40
    bool isInitialized;
    // private INetworkPlayer[] _gamesList
    // Offset: 0x48
    ::Array<GlobalNamespace::INetworkPlayer*>* gamesList;
    // private INetworkPlayer _selectedServer
    // Offset: 0x50
    GlobalNamespace::INetworkPlayer* selectedServer;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellReuseIdentifier
    static constexpr const char* kCellReuseIdentifier = "Cell";
    // Get static field: static private System.String kCellReuseIdentifier
    static ::Il2CppString* _get_kCellReuseIdentifier();
    // Set static field: static private System.String kCellReuseIdentifier
    static void _set_kCellReuseIdentifier(::Il2CppString* value);
    // static field const value: static private System.String kDetailCellReuseIdentifier
    static constexpr const char* kDetailCellReuseIdentifier = "DetailCell";
    // Get static field: static private System.String kDetailCellReuseIdentifier
    static ::Il2CppString* _get_kDetailCellReuseIdentifier();
    // Set static field: static private System.String kDetailCellReuseIdentifier
    static void _set_kDetailCellReuseIdentifier(::Il2CppString* value);
    // public System.Void add_joinButtonPressedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0xEC675C
    void add_joinButtonPressedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_joinButtonPressedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0xEC6800
    void remove_joinButtonPressedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // private System.Void Init()
    // Offset: 0xEC68CC
    void Init();
    // public System.Void SetData(System.Collections.Generic.IEnumerable`1<INetworkPlayer> servers, System.Boolean clearSelection)
    // Offset: 0xEC6CC8
    void SetData(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* servers, bool clearSelection);
    // private System.Void HandleGameServerListDetailTableCellJoinServerButtonWasPressed()
    // Offset: 0xEC6DF8
    void HandleGameServerListDetailTableCellJoinServerButtonWasPressed();
    // private System.Void HandleTableViewDidSelectCellWithIdx(HMUI.TableView tableView, System.Int32 id)
    // Offset: 0xEC6E60
    void HandleTableViewDidSelectCellWithIdx(HMUI::TableView* tableView, int id);
    // private System.Void HandleTableViewDidDeselectCellWithIdx(TableViewWithDetailCell arg1, System.Int32 arg2)
    // Offset: 0xEC6EA0
    void HandleTableViewDidDeselectCellWithIdx(GlobalNamespace::TableViewWithDetailCell* arg1, int arg2);
    // protected System.Void OnDestroy()
    // Offset: 0xEC6EAC
    void OnDestroy();
    // public System.Single CellSize()
    // Offset: 0xEC68A4
    // Implemented from: TableViewWithDetailCell/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xEC68B0
    // Implemented from: TableViewWithDetailCell/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForContent(TableViewWithDetailCell tableView, System.Int32 idx, System.Boolean detailOpened)
    // Offset: 0xEC69DC
    // Implemented from: TableViewWithDetailCell/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForContent(TableViewWithDetailCell tableView, System.Int32 idx, System.Boolean detailOpened)
    HMUI::TableCell* CellForContent(GlobalNamespace::TableViewWithDetailCell* tableView, int idx, bool detailOpened);
    // public HMUI.TableCell CellForDetail(TableViewWithDetailCell tableView, System.Int32 contentIdx)
    // Offset: 0xEC6B34
    // Implemented from: TableViewWithDetailCell/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForDetail(TableViewWithDetailCell tableView, System.Int32 contentIdx)
    HMUI::TableCell* CellForDetail(GlobalNamespace::TableViewWithDetailCell* tableView, int contentIdx);
    // public System.Void .ctor()
    // Offset: 0xEC6F8C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameServersListTableView* New_ctor();
  }; // GameServersListTableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServersListTableView*, "", "GameServersListTableView");
#pragma pack(pop)
