// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SongPackMasksModel
  class SongPackMasksModel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SongPacksDropdown
  class SongPacksDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SongPacksDropdown::$$c
    class $$c;
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // private readonly SongPackMasksModel _songPackMasksModel
    // Offset: 0x20
    GlobalNamespace::SongPackMasksModel* songPackMasksModel;
    // private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    // Offset: 0x28
    System::Action_1<int>* didSelectCellWithIdxEvent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0xEF26C4
    void add_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0xEF2768
    void remove_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<SongPackMask,System.String>> get_songPacks()
    // Offset: 0xEF280C
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>*>* get_songPacks();
    // protected System.Void Start()
    // Offset: 0xEF2828
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xEF29A8
    void OnDestroy();
    // public SongPackMask GetSelectedSongPackMask()
    // Offset: 0xEE871C
    GlobalNamespace::SongPackMask GetSelectedSongPackMask();
    // public System.Void SelectCellWithSongPackMask(SongPackMask songPackMask)
    // Offset: 0xEE8924
    void SelectCellWithSongPackMask(GlobalNamespace::SongPackMask songPackMask);
    // private System.Int32 GetIdxForSongPackMask(SongPackMask songPackMask)
    // Offset: 0xEF2A84
    int GetIdxForSongPackMask(GlobalNamespace::SongPackMask songPackMask);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0xEF2C1C
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0xEF2C90
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SongPacksDropdown* New_ctor();
  }; // SongPacksDropdown
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPacksDropdown*, "", "SongPacksDropdown");
#pragma pack(pop)
