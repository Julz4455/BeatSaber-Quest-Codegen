// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: LevelCategory because it is already included!
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  // Autogenerated type: SelectLevelCategoryViewController
  // [] Offset: FFFFFFFF
  class SelectLevelCategoryViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::SelectLevelCategoryViewController::LevelCategory
    struct LevelCategory;
    // Nested type: GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo
    class LevelCategoryInfo;
    // Nested type: GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Nested type: GlobalNamespace::SelectLevelCategoryViewController::$$c
    class $$c;
    // Size: 0x4
    // Autogenerated type: SelectLevelCategoryViewController/LevelCategory
    // [] Offset: FFFFFFFF
    struct LevelCategory/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LevelCategory
      constexpr LevelCategory(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory None
      static constexpr const int None = 0;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory None
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_None();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory None
      static void _set_None(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory OstAndExtras
      static constexpr const int OstAndExtras = 1;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory OstAndExtras
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_OstAndExtras();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory OstAndExtras
      static void _set_OstAndExtras(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory MusicPacks
      static constexpr const int MusicPacks = 2;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory MusicPacks
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_MusicPacks();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory MusicPacks
      static void _set_MusicPacks(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory CustomSongs
      static constexpr const int CustomSongs = 3;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory CustomSongs
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_CustomSongs();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory CustomSongs
      static void _set_CustomSongs(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory Favorites
      static constexpr const int Favorites = 4;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory Favorites
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_Favorites();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory Favorites
      static void _set_Favorites(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
      // static field const value: static public SelectLevelCategoryViewController/LevelCategory All
      static constexpr const int All = 5;
      // Get static field: static public SelectLevelCategoryViewController/LevelCategory All
      static GlobalNamespace::SelectLevelCategoryViewController::LevelCategory _get_All();
      // Set static field: static public SelectLevelCategoryViewController/LevelCategory All
      static void _set_All(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory value);
    }; // SelectLevelCategoryViewController/LevelCategory
    static check_size<sizeof(SelectLevelCategoryViewController::LevelCategory), 0 + sizeof(int)> __GlobalNamespace_SelectLevelCategoryViewController_LevelCategorySizeCheck;
    static_assert(sizeof(SelectLevelCategoryViewController::LevelCategory) == 0x4);
    // private SelectLevelCategoryViewController/LevelCategoryInfo[] _allLevelCategoryInfos
    // Size: 0x8
    // Offset: 0x70
    ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>* allLevelCategoryInfos;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>*) == 0x8);
    // private HMUI.IconSegmentedControl _levelFilterCategoryIconSegmentedControl
    // Size: 0x8
    // Offset: 0x78
    HMUI::IconSegmentedControl* levelFilterCategoryIconSegmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::IconSegmentedControl*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFF38
    // private System.Action`2<SelectLevelCategoryViewController,SelectLevelCategoryViewController/LevelCategory> didSelectLevelCategoryEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* didSelectLevelCategoryEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*) == 0x8);
    // private SelectLevelCategoryViewController/LevelCategory _prevSelectedLevelCategory
    // Size: 0x4
    // Offset: 0x88
    GlobalNamespace::SelectLevelCategoryViewController::LevelCategory prevSelectedLevelCategory;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory) == 0x4);
    // Padding between fields: prevSelectedLevelCategory and: levelCategoryInfos
    char __padding3[0x4] = {};
    // private SelectLevelCategoryViewController/LevelCategoryInfo[] _levelCategoryInfos
    // Size: 0x8
    // Offset: 0x90
    ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>* levelCategoryInfos;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>*) == 0x8);
    // Creating value type constructor for type: SelectLevelCategoryViewController
    SelectLevelCategoryViewController(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>* allLevelCategoryInfos_ = {}, HMUI::IconSegmentedControl* levelFilterCategoryIconSegmentedControl_ = {}, System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* didSelectLevelCategoryEvent_ = {}, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory prevSelectedLevelCategory_ = {}, ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>* levelCategoryInfos_ = {}) noexcept : allLevelCategoryInfos{allLevelCategoryInfos_}, levelFilterCategoryIconSegmentedControl{levelFilterCategoryIconSegmentedControl_}, didSelectLevelCategoryEvent{didSelectLevelCategoryEvent_}, prevSelectedLevelCategory{prevSelectedLevelCategory_}, levelCategoryInfos{levelCategoryInfos_} {}
    // public System.Void add_didSelectLevelCategoryEvent(System.Action`2<SelectLevelCategoryViewController,SelectLevelCategoryViewController/LevelCategory> value)
    // Offset: 0xFC9D40
    void add_didSelectLevelCategoryEvent(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* value);
    // public System.Void remove_didSelectLevelCategoryEvent(System.Action`2<SelectLevelCategoryViewController,SelectLevelCategoryViewController/LevelCategory> value)
    // Offset: 0xFC9DE4
    void remove_didSelectLevelCategoryEvent(System::Action_2<GlobalNamespace::SelectLevelCategoryViewController*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* value);
    // public SelectLevelCategoryViewController/LevelCategory get_selectedLevelCategory()
    // Offset: 0xFC9E88
    GlobalNamespace::SelectLevelCategoryViewController::LevelCategory get_selectedLevelCategory();
    // public System.Void Setup(SelectLevelCategoryViewController/LevelCategory selectedCategory, SelectLevelCategoryViewController/LevelCategory[] enabledLevelCategories)
    // Offset: 0xFC9EEC
    void Setup(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory selectedCategory, ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* enabledLevelCategories);
    // private System.Void LevelFilterCategoryIconSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 index)
    // Offset: 0xFCA318
    void LevelFilterCategoryIconSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int index);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xFCA1C0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0xFCA26C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0xFCA3D4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectLevelCategoryViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SelectLevelCategoryViewController").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectLevelCategoryViewController*, creationType>()));
    }
  }; // SelectLevelCategoryViewController
  static check_size<sizeof(SelectLevelCategoryViewController), 144 + sizeof(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*>*)> __GlobalNamespace_SelectLevelCategoryViewControllerSizeCheck;
  static_assert(sizeof(SelectLevelCategoryViewController) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelCategoryViewController*, "", "SelectLevelCategoryViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory, "", "SelectLevelCategoryViewController/LevelCategory");
#pragma pack(pop)
