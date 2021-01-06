// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.SelectableCell
#include "HMUI/SelectableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ITableCellOwner
  class ITableCellOwner;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x50
  // Autogenerated type: HMUI.TableCell
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: DA6150
  class TableCell : public HMUI::SelectableCell {
    public:
    // Writing base type padding for base size: 0x3A to desired offset: 0x3C
    char ___base_padding[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDA81F8
    // private System.Int32 <idx>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String _reuseIdentifier
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* reuseIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private HMUI.ITableCellOwner _tableCellOwner
    // Size: 0x8
    // Offset: 0x48
    HMUI::ITableCellOwner* tableCellOwner;
    // Field size check
    static_assert(sizeof(HMUI::ITableCellOwner*) == 0x8);
    // Creating value type constructor for type: TableCell
    TableCell(int idx_ = {}, ::Il2CppString* reuseIdentifier_ = {}, HMUI::ITableCellOwner* tableCellOwner_ = {}) noexcept : idx{idx_}, reuseIdentifier{reuseIdentifier_}, tableCellOwner{tableCellOwner_} {}
    // public System.String get_reuseIdentifier()
    // Offset: 0x1087030
    ::Il2CppString* get_reuseIdentifier();
    // public System.Void set_reuseIdentifier(System.String value)
    // Offset: 0x1087038
    void set_reuseIdentifier(::Il2CppString* value);
    // public System.Int32 get_idx()
    // Offset: 0x1087040
    int get_idx();
    // private System.Void set_idx(System.Int32 value)
    // Offset: 0x1087048
    void set_idx(int value);
    // protected HMUI.ITableCellOwner get_tableCellOwner()
    // Offset: 0x1087050
    HMUI::ITableCellOwner* get_tableCellOwner();
    // public System.Void TableViewSetup(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    // Offset: 0x1087058
    void TableViewSetup(HMUI::ITableCellOwner* tableCellOwner, int idx);
    // public System.Void MoveIdx(System.Int32 offset)
    // Offset: 0x1087088
    void MoveIdx(int offset);
    // public System.Void __WasPreparedForReuse()
    // Offset: 0x1087288
    void __WasPreparedForReuse();
    // protected System.Void WasPreparedForReuse()
    // Offset: 0x1087298
    void WasPreparedForReuse();
    // protected override System.Void InternalToggle()
    // Offset: 0x1087098
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::InternalToggle()
    void InternalToggle();
    // public System.Void .ctor()
    // Offset: 0x108729C
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("HMUI").WithContext("TableCell").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TableCell*, creationType>()));
    }
  }; // HMUI.TableCell
  static check_size<sizeof(TableCell), 72 + sizeof(HMUI::ITableCellOwner*)> __HMUI_TableCellSizeCheck;
  static_assert(sizeof(TableCell) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableCell*, "HMUI", "TableCell");
#pragma pack(pop)
