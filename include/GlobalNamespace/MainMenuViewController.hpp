// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: MenuButton because it is already included!
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
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
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: MainMenuViewController
  // [] Offset: FFFFFFFF
  class MainMenuViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MainMenuViewController::MenuButton
    struct MenuButton;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MainMenuViewController/MenuButton
    // [] Offset: FFFFFFFF
    struct MenuButton/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MenuButton
      constexpr MenuButton(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MainMenuViewController/MenuButton SoloFreePlay
      static constexpr const int SoloFreePlay = 0;
      // Get static field: static public MainMenuViewController/MenuButton SoloFreePlay
      static GlobalNamespace::MainMenuViewController::MenuButton _get_SoloFreePlay();
      // Set static field: static public MainMenuViewController/MenuButton SoloFreePlay
      static void _set_SoloFreePlay(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Party
      static constexpr const int Party = 1;
      // Get static field: static public MainMenuViewController/MenuButton Party
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Party();
      // Set static field: static public MainMenuViewController/MenuButton Party
      static void _set_Party(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton BeatmapEditor
      static constexpr const int BeatmapEditor = 2;
      // Get static field: static public MainMenuViewController/MenuButton BeatmapEditor
      static GlobalNamespace::MainMenuViewController::MenuButton _get_BeatmapEditor();
      // Set static field: static public MainMenuViewController/MenuButton BeatmapEditor
      static void _set_BeatmapEditor(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton SoloCampaign
      static constexpr const int SoloCampaign = 3;
      // Get static field: static public MainMenuViewController/MenuButton SoloCampaign
      static GlobalNamespace::MainMenuViewController::MenuButton _get_SoloCampaign();
      // Set static field: static public MainMenuViewController/MenuButton SoloCampaign
      static void _set_SoloCampaign(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton FloorAdjust
      static constexpr const int FloorAdjust = 4;
      // Get static field: static public MainMenuViewController/MenuButton FloorAdjust
      static GlobalNamespace::MainMenuViewController::MenuButton _get_FloorAdjust();
      // Set static field: static public MainMenuViewController/MenuButton FloorAdjust
      static void _set_FloorAdjust(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Quit
      static constexpr const int Quit = 5;
      // Get static field: static public MainMenuViewController/MenuButton Quit
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Quit();
      // Set static field: static public MainMenuViewController/MenuButton Quit
      static void _set_Quit(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Multiplayer
      static constexpr const int Multiplayer = 6;
      // Get static field: static public MainMenuViewController/MenuButton Multiplayer
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Multiplayer();
      // Set static field: static public MainMenuViewController/MenuButton Multiplayer
      static void _set_Multiplayer(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Options
      static constexpr const int Options = 7;
      // Get static field: static public MainMenuViewController/MenuButton Options
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Options();
      // Set static field: static public MainMenuViewController/MenuButton Options
      static void _set_Options(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton HowToPlay
      static constexpr const int HowToPlay = 8;
      // Get static field: static public MainMenuViewController/MenuButton HowToPlay
      static GlobalNamespace::MainMenuViewController::MenuButton _get_HowToPlay();
      // Set static field: static public MainMenuViewController/MenuButton HowToPlay
      static void _set_HowToPlay(GlobalNamespace::MainMenuViewController::MenuButton value);
    }; // MainMenuViewController/MenuButton
    #pragma pack(pop)
    static check_size<sizeof(MainMenuViewController::MenuButton), 0 + sizeof(int)> __GlobalNamespace_MainMenuViewController_MenuButtonSizeCheck;
    static_assert(sizeof(MainMenuViewController::MenuButton) == 0x4);
    // private UnityEngine.UI.Button _soloButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* soloButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _partyButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* partyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _campaignButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* campaignButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _quitButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* quitButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _howToPlayButton
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::UI::Button* howToPlayButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _beatmapEditorButton
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::UI::Button* beatmapEditorButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _multiplayerButton
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::UI::Button* multiplayerButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _optionsButton
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::UI::Button* optionsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [InjectAttribute] Offset: 0xD425CC
    // private readonly AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD425DC
    // private System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> didFinishEvent
    // Size: 0x8
    // Offset: 0xB8
    System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*) == 0x8);
    // Creating value type constructor for type: MainMenuViewController
    MainMenuViewController(UnityEngine::UI::Button* soloButton_ = {}, UnityEngine::UI::Button* partyButton_ = {}, UnityEngine::UI::Button* campaignButton_ = {}, UnityEngine::UI::Button* quitButton_ = {}, UnityEngine::UI::Button* howToPlayButton_ = {}, UnityEngine::UI::Button* beatmapEditorButton_ = {}, UnityEngine::UI::Button* multiplayerButton_ = {}, UnityEngine::UI::Button* optionsButton_ = {}, GlobalNamespace::AppStaticSettingsSO* appStaticSettings_ = {}, System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* didFinishEvent_ = {}) noexcept : soloButton{soloButton_}, partyButton{partyButton_}, campaignButton{campaignButton_}, quitButton{quitButton_}, howToPlayButton{howToPlayButton_}, beatmapEditorButton{beatmapEditorButton_}, multiplayerButton{multiplayerButton_}, optionsButton{optionsButton_}, appStaticSettings{appStaticSettings_}, didFinishEvent{didFinishEvent_} {}
    // public System.Void add_didFinishEvent(System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> value)
    // Offset: 0x105C804
    void add_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> value)
    // Offset: 0x105D064
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* value);
    // private System.Void HandleMenuButton(MainMenuViewController/MenuButton menuButton)
    // Offset: 0x105F500
    void HandleMenuButton(GlobalNamespace::MainMenuViewController::MenuButton menuButton);
    // private System.Void <DidActivate>b__13_0()
    // Offset: 0x105F580
    void $DidActivate$b__13_0();
    // private System.Void <DidActivate>b__13_1()
    // Offset: 0x105F588
    void $DidActivate$b__13_1();
    // private System.Void <DidActivate>b__13_2()
    // Offset: 0x105F590
    void $DidActivate$b__13_2();
    // private System.Void <DidActivate>b__13_3()
    // Offset: 0x105F598
    void $DidActivate$b__13_3();
    // private System.Void <DidActivate>b__13_4()
    // Offset: 0x105F5A0
    void $DidActivate$b__13_4();
    // private System.Void <DidActivate>b__13_5()
    // Offset: 0x105F5A8
    void $DidActivate$b__13_5();
    // private System.Void <DidActivate>b__13_6()
    // Offset: 0x105F5B0
    void $DidActivate$b__13_6();
    // private System.Void <DidActivate>b__13_7()
    // Offset: 0x105F5B8
    void $DidActivate$b__13_7();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x105F21C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x105F578
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainMenuViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainMenuViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainMenuViewController*, creationType>()));
    }
  }; // MainMenuViewController
  #pragma pack(pop)
  static check_size<sizeof(MainMenuViewController), 184 + sizeof(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*)> __GlobalNamespace_MainMenuViewControllerSizeCheck;
  static_assert(sizeof(MainMenuViewController) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuViewController*, "", "MainMenuViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuViewController::MenuButton, "", "MainMenuViewController/MenuButton");
