// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: BeatmapCharacteristicTableCell
  class BeatmapCharacteristicTableCell;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicsTableView
  // [] Offset: FFFFFFFF
  class BeatmapCharacteristicsTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private BeatmapCharacteristicTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapCharacteristicTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicTableCell*) == 0x8);
    // private System.String _cellReuseIdentifier
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* cellReuseIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _cellWidth
    // Size: 0x4
    // Offset: 0x30
    float cellWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cellWidth and: didSelectCharacteristic
    char __padding3[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD43B90
    // private System.Action`1<BeatmapCharacteristicSO> didSelectCharacteristic
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* didSelectCharacteristic;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x48
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitialized and: selectedColumn
    char __padding6[0x3] = {};
    // private System.Int32 _selectedColumn
    // Size: 0x4
    // Offset: 0x4C
    int selectedColumn;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapCharacteristicsTableView
    BeatmapCharacteristicsTableView(HMUI::TableView* tableView_ = {}, GlobalNamespace::BeatmapCharacteristicTableCell* cellPrefab_ = {}, ::Il2CppString* cellReuseIdentifier_ = {}, float cellWidth_ = {}, System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* didSelectCharacteristic_ = {}, GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection_ = {}, bool isInitialized_ = {}, int selectedColumn_ = {}) noexcept : tableView{tableView_}, cellPrefab{cellPrefab_}, cellReuseIdentifier{cellReuseIdentifier_}, cellWidth{cellWidth_}, didSelectCharacteristic{didSelectCharacteristic_}, beatmapCharacteristicCollection{beatmapCharacteristicCollection_}, isInitialized{isInitialized_}, selectedColumn{selectedColumn_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectCharacteristic(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x106CF7C
    void add_didSelectCharacteristic(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectCharacteristic(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x106D020
    void remove_didSelectCharacteristic(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // private System.Void Init()
    // Offset: 0x106D0C4
    void Init();
    // public System.Void SetData(BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection)
    // Offset: 0x106D190
    void SetData(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection);
    // protected System.Void OnDestroy()
    // Offset: 0x106D200
    void OnDestroy();
    // private System.Void HandleDidSelectColumnEvent(HMUI.TableView tableView, System.Int32 column)
    // Offset: 0x106D494
    void HandleDidSelectColumnEvent(HMUI::TableView* tableView, int column);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x106D53C
    void HandleAdditionalContentModelDidInvalidateData();
    // public System.Void SelectCellWithIdx(System.Int32 idx)
    // Offset: 0x106D5FC
    void SelectCellWithIdx(int idx);
    // public System.Single CellSize()
    // Offset: 0x106D294
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x106D29C
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x106D334
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x106D61C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicsTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCharacteristicsTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicsTableView*, creationType>()));
    }
  }; // BeatmapCharacteristicsTableView
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCharacteristicsTableView), 76 + sizeof(int)> __GlobalNamespace_BeatmapCharacteristicsTableViewSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicsTableView) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicsTableView*, "", "BeatmapCharacteristicsTableView");
