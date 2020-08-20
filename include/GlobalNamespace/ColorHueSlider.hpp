// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.CircleSlider
#include "HMUI/CircleSlider.hpp"
// Including type: ColorChangeUIEventType
#include "GlobalNamespace/ColorChangeUIEventType.hpp"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: ColorHueSlider
  class ColorHueSlider : public HMUI::CircleSlider {
    public:
    // private UnityEngine.Color _darkColor
    // Offset: 0x11C
    UnityEngine::Color darkColor;
    // private UnityEngine.Color _lightColor
    // Offset: 0x12C
    UnityEngine::Color lightColor;
    // private System.Action`3<ColorHueSlider,System.Single,ColorChangeUIEventType> colorHueDidChangeEvent
    // Offset: 0x140
    System::Action_3<GlobalNamespace::ColorHueSlider*, float, GlobalNamespace::ColorChangeUIEventType>* colorHueDidChangeEvent;
    // public System.Void add_colorHueDidChangeEvent(System.Action`3<ColorHueSlider,System.Single,ColorChangeUIEventType> value)
    // Offset: 0x18E6918
    void add_colorHueDidChangeEvent(System::Action_3<GlobalNamespace::ColorHueSlider*, float, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorHueDidChangeEvent(System.Action`3<ColorHueSlider,System.Single,ColorChangeUIEventType> value)
    // Offset: 0x18E69C0
    void remove_colorHueDidChangeEvent(System::Action_3<GlobalNamespace::ColorHueSlider*, float, GlobalNamespace::ColorChangeUIEventType>* value);
    // private System.Void HandleNormalizedValueDidChange(HMUI.CircleSlider slider, System.Single normalizedValue)
    // Offset: 0x18E6C14
    void HandleNormalizedValueDidChange(HMUI::CircleSlider* slider, float normalizedValue);
    // protected override System.Void Awake()
    // Offset: 0x18E6A68
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x18E6AF4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void UpdateVisuals()
    // Offset: 0x18E6B80
    // Implemented from: HMUI.CircleSlider
    // Base method: System.Void CircleSlider::UpdateVisuals()
    void UpdateVisuals();
    // public override System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x18E6C90
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x18E6D1C
    // Implemented from: HMUI.CircleSlider
    // Base method: System.Void CircleSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ColorHueSlider* New_ctor();
  }; // ColorHueSlider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorHueSlider*, "", "ColorHueSlider");
#pragma pack(pop)
