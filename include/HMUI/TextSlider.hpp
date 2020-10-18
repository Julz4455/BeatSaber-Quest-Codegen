// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IBeginDragHandler
#include "UnityEngine/EventSystems/IBeginDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IDragHandler
#include "UnityEngine/EventSystems/IDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IInitializePotentialDragHandler
#include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Color because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TextSlider
  class TextSlider : public UnityEngine::UI::Selectable, public UnityEngine::EventSystems::IBeginDragHandler, public UnityEngine::EventSystems::IDragHandler, public UnityEngine::EventSystems::IInitializePotentialDragHandler, public UnityEngine::UI::ICanvasElement {
    public:
    // private TMPro.TextMeshProUGUI _valueText
    // Offset: 0xF0
    TMPro::TextMeshProUGUI* valueText;
    // private UnityEngine.RectTransform _handleRect
    // Offset: 0xF8
    UnityEngine::RectTransform* handleRect;
    // private System.Boolean _enableDragging
    // Offset: 0x100
    bool enableDragging;
    // private System.Single _handleSize
    // Offset: 0x104
    float handleSize;
    // private System.Single _valueSize
    // Offset: 0x108
    float valueSize;
    // private System.Single _separatorSize
    // Offset: 0x10C
    float separatorSize;
    // private System.Int32 _numberOfSteps
    // Offset: 0x110
    int numberOfSteps;
    // private System.Single _normalizedValue
    // Offset: 0x114
    float normalizedValue;
    // private System.Action`2<HMUI.TextSlider,System.Single> normalizedValueDidChangeEvent
    // Offset: 0x118
    System::Action_2<HMUI::TextSlider*, float>* normalizedValueDidChangeEvent;
    // private UnityEngine.RectTransform _containerRect
    // Offset: 0x120
    UnityEngine::RectTransform* containerRect;
    // private UnityEngine.UI.Graphic _handleGraphic
    // Offset: 0x128
    UnityEngine::UI::Graphic* handleGraphic;
    // private UnityEngine.DrivenRectTransformTracker _tracker
    // Offset: 0x130
    UnityEngine::DrivenRectTransformTracker tracker;
    // public System.Void set_valueTextColor(UnityEngine.Color value)
    // Offset: 0x1181CD8
    void set_valueTextColor(UnityEngine::Color value);
    // public UnityEngine.RectTransform get_handleRect()
    // Offset: 0x1181CFC
    UnityEngine::RectTransform* get_handleRect();
    // public System.Void set_handleRect(UnityEngine.RectTransform value)
    // Offset: 0x1181D04
    void set_handleRect(UnityEngine::RectTransform* value);
    // public System.Void set_handleColor(UnityEngine.Color value)
    // Offset: 0x1181F08
    void set_handleColor(UnityEngine::Color value);
    // public System.Single get_handleSize()
    // Offset: 0x1181FDC
    float get_handleSize();
    // public System.Void set_handleSize(System.Single value)
    // Offset: 0x1181FE4
    void set_handleSize(float value);
    // public System.Single get_valueSize()
    // Offset: 0x118206C
    float get_valueSize();
    // public System.Void set_valueSize(System.Single value)
    // Offset: 0x1182074
    void set_valueSize(float value);
    // public System.Single get_separatorSize()
    // Offset: 0x11820FC
    float get_separatorSize();
    // public System.Void set_separatorSize(System.Single value)
    // Offset: 0x1182104
    void set_separatorSize(float value);
    // public System.Int32 get_numberOfSteps()
    // Offset: 0x118218C
    int get_numberOfSteps();
    // public System.Void set_numberOfSteps(System.Int32 value)
    // Offset: 0x1182194
    void set_numberOfSteps(int value);
    // public System.Single get_normalizedValue()
    // Offset: 0x117424C
    float get_normalizedValue();
    // public System.Void set_normalizedValue(System.Single value)
    // Offset: 0x1174210
    void set_normalizedValue(float value);
    // public System.Void add_normalizedValueDidChangeEvent(System.Action`2<HMUI.TextSlider,System.Single> value)
    // Offset: 0x1174694
    void add_normalizedValueDidChangeEvent(System::Action_2<HMUI::TextSlider*, float>* value);
    // public System.Void remove_normalizedValueDidChangeEvent(System.Action`2<HMUI.TextSlider,System.Single> value)
    // Offset: 0x11747D4
    void remove_normalizedValueDidChangeEvent(System::Action_2<HMUI::TextSlider*, float>* value);
    // private System.Void UpdateCachedReferences()
    // Offset: 0x1181D94
    void UpdateCachedReferences();
    // protected System.Void SetNormalizedValue(System.Single input)
    // Offset: 0x1174A78
    void SetNormalizedValue(float input);
    // private System.Void SetNormalizedValue(System.Single input, System.Boolean sendCallback)
    // Offset: 0x118222C
    void SetNormalizedValue(float input, bool sendCallback);
    // protected System.Void UpdateVisuals()
    // Offset: 0x11823F4
    void UpdateVisuals();
    // private System.Void UpdateDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11828B4
    void UpdateDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1182B94
    bool MayDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // protected System.String TextForNormalizedValue(System.Single normalizedValue)
    // Offset: 0x1182E28
    ::Il2CppString* TextForNormalizedValue(float normalizedValue);
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x1182318
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::Rebuild(UnityEngine.UI.CanvasUpdate executing)
    void Rebuild(UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x118231C
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::LayoutComplete()
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x1182320
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::GraphicUpdateComplete()
    void GraphicUpdateComplete();
    // protected override System.Void OnEnable()
    // Offset: 0x1182324
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1182370
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x11823A0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1182BFC
    // Implemented from: UnityEngine.EventSystems.IBeginDragHandler
    // Base method: System.Void IBeginDragHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnBeginDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1182CA0
    // Implemented from: UnityEngine.EventSystems.IDragHandler
    // Base method: System.Void IDragHandler::OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public override System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1182D54
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1182E10
    // Implemented from: UnityEngine.EventSystems.IInitializePotentialDragHandler
    // Base method: System.Void IInitializePotentialDragHandler::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x11749A0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TextSlider* New_ctor();
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x1182E50
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: UnityEngine.Transform ICanvasElement::get_transform()
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
  }; // HMUI.TextSlider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextSlider*, "HMUI", "TextSlider");
#pragma pack(pop)
