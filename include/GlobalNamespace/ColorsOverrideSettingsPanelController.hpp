// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IRefreshable
#include "GlobalNamespace/IRefreshable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeDropdown
  class ColorSchemeDropdown;
  // Forward declaring type: EditColorSchemeController
  class EditColorSchemeController;
  // Forward declaring type: ColorSchemesSettings
  class ColorSchemesSettings;
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ModalView
  class ModalView;
  // Forward declaring type: PanelAnimationSO
  class PanelAnimationSO;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorsOverrideSettingsPanelController
  class ColorsOverrideSettingsPanelController : public UnityEngine::MonoBehaviour, public GlobalNamespace::IRefreshable {
    public:
    // private UnityEngine.UI.Toggle _overrideColorsToggle
    // Offset: 0x18
    UnityEngine::UI::Toggle* overrideColorsToggle;
    // private UnityEngine.GameObject _detailsPanelGO
    // Offset: 0x20
    UnityEngine::GameObject* detailsPanelGO;
    // private ColorSchemeDropdown _colorSchemeDropDown
    // Offset: 0x28
    GlobalNamespace::ColorSchemeDropdown* colorSchemeDropDown;
    // private EditColorSchemeController _editColorSchemeController
    // Offset: 0x30
    GlobalNamespace::EditColorSchemeController* editColorSchemeController;
    // private HMUI.ModalView _editColorSchemeModalView
    // Offset: 0x38
    HMUI::ModalView* editColorSchemeModalView;
    // private UnityEngine.UI.Button _editColorSchemeButton
    // Offset: 0x40
    UnityEngine::UI::Button* editColorSchemeButton;
    // private HMUI.PanelAnimationSO _presentPanelAnimation
    // Offset: 0x48
    HMUI::PanelAnimationSO* presentPanelAnimation;
    // private HMUI.PanelAnimationSO _dismissPanelAnimation
    // Offset: 0x50
    HMUI::PanelAnimationSO* dismissPanelAnimation;
    // private ColorSchemesSettings _colorSchemesSettings
    // Offset: 0x58
    GlobalNamespace::ColorSchemesSettings* colorSchemesSettings;
    // private System.Boolean _initialized
    // Offset: 0x60
    bool initialized;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x68
    HMUI::ButtonBinder* buttonBinder;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public ColorSchemesSettings get_colorSchemesSettings()
    // Offset: 0xF26A9C
    GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings();
    // public System.Void SetData(ColorSchemesSettings colorSchemesSettings)
    // Offset: 0xF26AA4
    void SetData(GlobalNamespace::ColorSchemesSettings* colorSchemesSettings);
    // protected System.Void OnDestroy()
    // Offset: 0xF26CC4
    void OnDestroy();
    // protected System.Void OnDisable()
    // Offset: 0xF26EBC
    void OnDisable();
    // private System.Void HandleDropDownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropDownWithTableView, System.Int32 idx)
    // Offset: 0xF27064
    void HandleDropDownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropDownWithTableView, int idx);
    // private System.Void HandleOverrideColorsToggleValueChanged(System.Boolean isOn)
    // Offset: 0xF270C0
    void HandleOverrideColorsToggleValueChanged(bool isOn);
    // private System.Void HandleEditColorSchemeButtonWasPressed()
    // Offset: 0xF271D4
    void HandleEditColorSchemeButtonWasPressed();
    // private System.Void HandleEditColorSchemeControllerDidFinish()
    // Offset: 0xF27250
    void HandleEditColorSchemeControllerDidFinish();
    // private System.Void HandleEditColorSchemeControllerDidChangeColorScheme(ColorScheme colorScheme)
    // Offset: 0xF272AC
    void HandleEditColorSchemeControllerDidChangeColorScheme(GlobalNamespace::ColorScheme* colorScheme);
    // private System.Void <HandleOverrideColorsToggleValueChanged>b__18_0()
    // Offset: 0xF272CC
    void $HandleOverrideColorsToggleValueChanged$b__18_0();
    // public System.Void Refresh()
    // Offset: 0xF26EE0
    // Implemented from: IRefreshable
    // Base method: System.Void IRefreshable::Refresh()
    void Refresh();
    // Creating proxy method: GlobalNamespace_IRefreshable_Refresh
    // Maps to method: Refresh
    void GlobalNamespace_IRefreshable_Refresh();
    // public System.Void .ctor()
    // Offset: 0xF272C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ColorsOverrideSettingsPanelController* New_ctor();
  }; // ColorsOverrideSettingsPanelController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorsOverrideSettingsPanelController*, "", "ColorsOverrideSettingsPanelController");
#pragma pack(pop)
