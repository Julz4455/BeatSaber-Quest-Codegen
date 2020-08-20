// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.Slider2D
#include "HMUI/Slider2D.hpp"
// Including type: ColorChangeUIEventType
#include "GlobalNamespace/ColorChangeUIEventType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorSaturationValueSlider
  class ColorSaturationValueSlider : public HMUI::Slider2D {
    public:
    // private System.Single _hue
    // Offset: 0x11C
    float hue;
    // private UnityEngine.UI.Graphic[] _graphics
    // Offset: 0x120
    ::Array<UnityEngine::UI::Graphic*>* graphics;
    // private UnityEngine.Color _darkColor
    // Offset: 0x128
    UnityEngine::Color darkColor;
    // private UnityEngine.Color _lightColor
    // Offset: 0x138
    UnityEngine::Color lightColor;
    // private System.Action`3<ColorSaturationValueSlider,UnityEngine.Vector2,ColorChangeUIEventType> colorSaturationOrValueDidChangeEvent
    // Offset: 0x148
    System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>* colorSaturationOrValueDidChangeEvent;
    // public System.Void add_colorSaturationOrValueDidChangeEvent(System.Action`3<ColorSaturationValueSlider,UnityEngine.Vector2,ColorChangeUIEventType> value)
    // Offset: 0x18E78A4
    void add_colorSaturationOrValueDidChangeEvent(System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorSaturationOrValueDidChangeEvent(System.Action`3<ColorSaturationValueSlider,UnityEngine.Vector2,ColorChangeUIEventType> value)
    // Offset: 0x18E794C
    void remove_colorSaturationOrValueDidChangeEvent(System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void SetHue(System.Single hue)
    // Offset: 0x18E7B0C
    void SetHue(float hue);
    // private System.Void HandleNormalizedValueDidChange(HMUI.Slider2D slider, UnityEngine.Vector2 normalizedValue)
    // Offset: 0x18E7C38
    void HandleNormalizedValueDidChange(HMUI::Slider2D* slider, UnityEngine::Vector2 normalizedValue);
    // protected override System.Void Awake()
    // Offset: 0x18E79F4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x18E7A80
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void UpdateVisuals()
    // Offset: 0x18E7B20
    // Implemented from: HMUI.Slider2D
    // Base method: System.Void Slider2D::UpdateVisuals()
    void UpdateVisuals();
    // public override System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x18E7CBC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x18E7D48
    // Implemented from: HMUI.Slider2D
    // Base method: System.Void Slider2D::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ColorSaturationValueSlider* New_ctor();
  }; // ColorSaturationValueSlider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSaturationValueSlider*, "", "ColorSaturationValueSlider");
#pragma pack(pop)
