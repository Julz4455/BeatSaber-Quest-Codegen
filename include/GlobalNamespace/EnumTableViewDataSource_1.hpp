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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TextOnlyTableCell
  class TextOnlyTableCell;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
  // Skipping declaration: TableView because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnumTableViewDataSource`1
  template<typename T>
  class EnumTableViewDataSource_1 : public UnityEngine::MonoBehaviour, public HMUI::TableView::IDataSource {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_convertible_v<T, System::Enum*>));
    public:
    // private TextOnlyTableCell _cellPrefab
    // Offset: 0x0
    GlobalNamespace::TextOnlyTableCell* cellPrefab;
    // private System.Single _cellHeight
    // Offset: 0x0
    float cellHeight;
    // private readonly T[] _values
    // Offset: 0x0
    ::Array<T>* values;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Autogenerated static field getter
    // Get static field: static private System.String kCellReuseIdentifier
    static ::Il2CppString* _get_kCellReuseIdentifier() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumTableViewDataSource_1<T>*>::get(), "kCellReuseIdentifier"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.String kCellReuseIdentifier
    static void _set_kCellReuseIdentifier(::Il2CppString* value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumTableViewDataSource_1<T>*>::get(), "kCellReuseIdentifier", value));
    }
    // public System.Int32 GetIdForValue(T value)
    // Offset: 0xFFFFFFFF
    int GetIdForValue(T value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetIdForValue", value));
    }
    // public System.String GetLabelForId(System.Int32 id)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetLabelForId(int id) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetLabelForId", id));
    }
    // public T GetValueForId(System.Int32 id)
    // Offset: 0xFFFFFFFF
    T GetValueForId(int id) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "GetValueForId", id));
    }
    // public System.String GetLabelForValue(T value)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetLabelForValue(T value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetLabelForValue", value));
    }
    // public System.Single CellSize()
    // Offset: 0xFFFFFFFF
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "CellSize"));
    }
    // public System.Int32 NumberOfCells()
    // Offset: 0xFFFFFFFF
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NumberOfCells"));
    }
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0xFFFFFFFF
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TableCell*>(this, "CellForIdx", tableView, idx));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnumTableViewDataSource_1<T>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<EnumTableViewDataSource_1<T>*>());
    }
  }; // EnumTableViewDataSource`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::EnumTableViewDataSource_1, "", "EnumTableViewDataSource`1");
#pragma pack(pop)
