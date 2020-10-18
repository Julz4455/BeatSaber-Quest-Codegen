// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeColorsToggleGroup
  class ColorSchemeColorsToggleGroup;
  // Forward declaring type: RGBPanelController
  class RGBPanelController;
  // Forward declaring type: HSVPanelController
  class HSVPanelController;
  // Forward declaring type: PreviousColorPanelController
  class PreviousColorPanelController;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: ColorChangeUIEventType
  struct ColorChangeUIEventType;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EditColorSchemeController
  class EditColorSchemeController : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSchemeColorsToggleGroup _colorSchemeColorsToggleGroup
    // Offset: 0x18
    GlobalNamespace::ColorSchemeColorsToggleGroup* colorSchemeColorsToggleGroup;
    // private RGBPanelController _rgbPanelController
    // Offset: 0x20
    GlobalNamespace::RGBPanelController* rgbPanelController;
    // private HSVPanelController _hsvPanelController
    // Offset: 0x28
    GlobalNamespace::HSVPanelController* hsvPanelController;
    // private PreviousColorPanelController _previousColorPanelController
    // Offset: 0x30
    GlobalNamespace::PreviousColorPanelController* previousColorPanelController;
    // private UnityEngine.UI.Button _closeButton
    // Offset: 0x38
    UnityEngine::UI::Button* closeButton;
    // private System.Action didFinishEvent
    // Offset: 0x40
    System::Action* didFinishEvent;
    // private System.Action`1<ColorScheme> didChangeColorSchemeEvent
    // Offset: 0x48
    System::Action_1<GlobalNamespace::ColorScheme*>* didChangeColorSchemeEvent;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x50
    HMUI::ButtonBinder* buttonBinder;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0xF63C70
    void add_didFinishEvent(System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0xF63D14
    void remove_didFinishEvent(System::Action* value);
    // public System.Void add_didChangeColorSchemeEvent(System.Action`1<ColorScheme> value)
    // Offset: 0xF63DB8
    void add_didChangeColorSchemeEvent(System::Action_1<GlobalNamespace::ColorScheme*>* value);
    // public System.Void remove_didChangeColorSchemeEvent(System.Action`1<ColorScheme> value)
    // Offset: 0xF63E5C
    void remove_didChangeColorSchemeEvent(System::Action_1<GlobalNamespace::ColorScheme*>* value);
    // public System.Void SetColorScheme(ColorScheme colorScheme)
    // Offset: 0xF63F00
    void SetColorScheme(GlobalNamespace::ColorScheme* colorScheme);
    // protected System.Void Start()
    // Offset: 0xF63F1C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF6416C
    void OnDestroy();
    // private System.Void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(UnityEngine.Color color)
    // Offset: 0xF64340
    void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(UnityEngine::Color color);
    // private System.Void HandleRGBPanelControllerColorDidChange(UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0xF643CC
    void HandleRGBPanelControllerColorDidChange(UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandleHSVPanelControllerColorDidChange(UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0xF644E8
    void HandleHSVPanelControllerColorDidChange(UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine.Color color)
    // Offset: 0xF64604
    void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine::Color color);
    // private System.Void <Start>b__13_0()
    // Offset: 0xF64710
    void $Start$b__13_0();
    // public System.Void .ctor()
    // Offset: 0xF64708
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EditColorSchemeController* New_ctor();
  }; // EditColorSchemeController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditColorSchemeController*, "", "EditColorSchemeController");
#pragma pack(pop)
