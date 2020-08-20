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
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Skipping declaration: Direction because it is already included!
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: AxisEventData
  class AxisEventData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Scrollbar
  class Scrollbar : public UnityEngine::UI::Selectable, public UnityEngine::EventSystems::IBeginDragHandler, public UnityEngine::EventSystems::IDragHandler, public UnityEngine::EventSystems::IInitializePotentialDragHandler, public UnityEngine::UI::ICanvasElement {
    public:
    // Nested type: UnityEngine::UI::Scrollbar::Direction
    struct Direction;
    // Nested type: UnityEngine::UI::Scrollbar::ScrollEvent
    class ScrollEvent;
    // Nested type: UnityEngine::UI::Scrollbar::Axis
    struct Axis;
    // Nested type: UnityEngine::UI::Scrollbar::$ClickRepeat$d__57
    class $ClickRepeat$d__57;
    // Autogenerated type: UnityEngine.UI.Scrollbar/Direction
    struct Direction : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public UnityEngine.UI.Scrollbar/Direction LeftToRight
      static constexpr const int LeftToRight = 0;
      // Get static field: static public UnityEngine.UI.Scrollbar/Direction LeftToRight
      static UnityEngine::UI::Scrollbar::Direction _get_LeftToRight();
      // Set static field: static public UnityEngine.UI.Scrollbar/Direction LeftToRight
      static void _set_LeftToRight(UnityEngine::UI::Scrollbar::Direction value);
      // static field const value: static public UnityEngine.UI.Scrollbar/Direction RightToLeft
      static constexpr const int RightToLeft = 1;
      // Get static field: static public UnityEngine.UI.Scrollbar/Direction RightToLeft
      static UnityEngine::UI::Scrollbar::Direction _get_RightToLeft();
      // Set static field: static public UnityEngine.UI.Scrollbar/Direction RightToLeft
      static void _set_RightToLeft(UnityEngine::UI::Scrollbar::Direction value);
      // static field const value: static public UnityEngine.UI.Scrollbar/Direction BottomToTop
      static constexpr const int BottomToTop = 2;
      // Get static field: static public UnityEngine.UI.Scrollbar/Direction BottomToTop
      static UnityEngine::UI::Scrollbar::Direction _get_BottomToTop();
      // Set static field: static public UnityEngine.UI.Scrollbar/Direction BottomToTop
      static void _set_BottomToTop(UnityEngine::UI::Scrollbar::Direction value);
      // static field const value: static public UnityEngine.UI.Scrollbar/Direction TopToBottom
      static constexpr const int TopToBottom = 3;
      // Get static field: static public UnityEngine.UI.Scrollbar/Direction TopToBottom
      static UnityEngine::UI::Scrollbar::Direction _get_TopToBottom();
      // Set static field: static public UnityEngine.UI.Scrollbar/Direction TopToBottom
      static void _set_TopToBottom(UnityEngine::UI::Scrollbar::Direction value);
      // Creating value type constructor for type: Direction
      Direction(int value_ = {}) : value{value_} {}
    }; // UnityEngine.UI.Scrollbar/Direction
    // private UnityEngine.RectTransform m_HandleRect
    // Offset: 0xF0
    UnityEngine::RectTransform* m_HandleRect;
    // private UnityEngine.UI.Scrollbar/Direction m_Direction
    // Offset: 0xF8
    UnityEngine::UI::Scrollbar::Direction m_Direction;
    // private System.Single m_Value
    // Offset: 0xFC
    float m_Value;
    // private System.Single m_Size
    // Offset: 0x100
    float m_Size;
    // private System.Int32 m_NumberOfSteps
    // Offset: 0x104
    int m_NumberOfSteps;
    // private UnityEngine.UI.Scrollbar/ScrollEvent m_OnValueChanged
    // Offset: 0x108
    UnityEngine::UI::Scrollbar::ScrollEvent* m_OnValueChanged;
    // private UnityEngine.RectTransform m_ContainerRect
    // Offset: 0x110
    UnityEngine::RectTransform* m_ContainerRect;
    // private UnityEngine.Vector2 m_Offset
    // Offset: 0x118
    UnityEngine::Vector2 m_Offset;
    // private UnityEngine.DrivenRectTransformTracker m_Tracker
    // Offset: 0x120
    UnityEngine::DrivenRectTransformTracker m_Tracker;
    // private UnityEngine.Coroutine m_PointerDownRepeat
    // Offset: 0x128
    UnityEngine::Coroutine* m_PointerDownRepeat;
    // private System.Boolean isPointerDownAndNotDragging
    // Offset: 0x130
    bool isPointerDownAndNotDragging;
    // private System.Boolean m_DelayedUpdateVisuals
    // Offset: 0x131
    bool m_DelayedUpdateVisuals;
    // public UnityEngine.RectTransform get_handleRect()
    // Offset: 0x116B3FC
    UnityEngine::RectTransform* get_handleRect();
    // public System.Void set_handleRect(UnityEngine.RectTransform value)
    // Offset: 0x116B404
    void set_handleRect(UnityEngine::RectTransform* value);
    // public UnityEngine.UI.Scrollbar/Direction get_direction()
    // Offset: 0x116B768
    UnityEngine::UI::Scrollbar::Direction get_direction();
    // public System.Void set_direction(UnityEngine.UI.Scrollbar/Direction value)
    // Offset: 0x116B770
    void set_direction(UnityEngine::UI::Scrollbar::Direction value);
    // public System.Single get_value()
    // Offset: 0x116BA1C
    float get_value();
    // public System.Void set_value(System.Single value)
    // Offset: 0x1169D48
    void set_value(float value);
    // public System.Void SetValueWithoutNotify(System.Single input)
    // Offset: 0x116BBF4
    void SetValueWithoutNotify(float input);
    // public System.Single get_size()
    // Offset: 0x116BBFC
    float get_size();
    // public System.Void set_size(System.Single value)
    // Offset: 0x1169B50
    void set_size(float value);
    // public System.Int32 get_numberOfSteps()
    // Offset: 0x116BC04
    int get_numberOfSteps();
    // public System.Void set_numberOfSteps(System.Int32 value)
    // Offset: 0x116BC0C
    void set_numberOfSteps(int value);
    // public UnityEngine.UI.Scrollbar/ScrollEvent get_onValueChanged()
    // Offset: 0x116BC98
    UnityEngine::UI::Scrollbar::ScrollEvent* get_onValueChanged();
    // public System.Void set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent value)
    // Offset: 0x116BCA0
    void set_onValueChanged(UnityEngine::UI::Scrollbar::ScrollEvent* value);
    // private System.Single get_stepSize()
    // Offset: 0x116BCB0
    float get_stepSize();
    // protected System.Void Update()
    // Offset: 0x116C0C4
    void Update();
    // private System.Void UpdateCachedReferences()
    // Offset: 0x116B488
    void UpdateCachedReferences();
    // private System.Void Set(System.Single input, System.Boolean sendCallback)
    // Offset: 0x116BB28
    void Set(float input, bool sendCallback);
    // private UnityEngine.UI.Scrollbar/Axis get_axis()
    // Offset: 0x116C120
    UnityEngine::UI::Scrollbar::Axis get_axis();
    // private System.Boolean get_reverseValue()
    // Offset: 0x116C130
    bool get_reverseValue();
    // private System.Void UpdateVisuals()
    // Offset: 0x116B58C
    void UpdateVisuals();
    // private System.Void UpdateDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x116C144
    void UpdateDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void DoUpdateDrag(UnityEngine.Vector2 handleCorner, System.Single remainingSize)
    // Offset: 0x116C3F8
    void DoUpdateDrag(UnityEngine::Vector2 handleCorner, float remainingSize);
    // private System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x116C53C
    bool MayDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // protected System.Collections.IEnumerator ClickRepeat(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x116CA10
    System::Collections::IEnumerator* ClickRepeat(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void SetDirection(UnityEngine.UI.Scrollbar/Direction direction, System.Boolean includeRectLayouts)
    // Offset: 0x116D3F0
    void SetDirection(UnityEngine::UI::Scrollbar::Direction direction, bool includeRectLayouts);
    // protected System.Void .ctor()
    // Offset: 0x116B7EC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Scrollbar* New_ctor();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x116BCDC
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::Rebuild(UnityEngine.UI.CanvasUpdate executing)
    void Rebuild(UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x116BCE0
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::LayoutComplete()
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x116BCE4
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::GraphicUpdateComplete()
    void GraphicUpdateComplete();
    // protected override System.Void OnEnable()
    // Offset: 0x116BCE8
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x116BF20
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x116C0D8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x116C5A4
    // Implemented from: UnityEngine.EventSystems.IBeginDragHandler
    // Base method: System.Void IBeginDragHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnBeginDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x116C7B0
    // Implemented from: UnityEngine.EventSystems.IDragHandler
    // Base method: System.Void IDragHandler::OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public override System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x116C85C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public override System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x116CAD4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public override System.Void OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    // Offset: 0x116CB1C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    void OnMove(UnityEngine::EventSystems::AxisEventData* eventData);
    // public override UnityEngine.UI.Selectable FindSelectableOnLeft()
    // Offset: 0x116CE48
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnLeft()
    UnityEngine::UI::Selectable* FindSelectableOnLeft();
    // public override UnityEngine.UI.Selectable FindSelectableOnRight()
    // Offset: 0x116CFAC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnRight()
    UnityEngine::UI::Selectable* FindSelectableOnRight();
    // public override UnityEngine.UI.Selectable FindSelectableOnUp()
    // Offset: 0x116D110
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnUp()
    UnityEngine::UI::Selectable* FindSelectableOnUp();
    // public override UnityEngine.UI.Selectable FindSelectableOnDown()
    // Offset: 0x116D274
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnDown()
    UnityEngine::UI::Selectable* FindSelectableOnDown();
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x116D3D8
    // Implemented from: UnityEngine.EventSystems.IInitializePotentialDragHandler
    // Base method: System.Void IInitializePotentialDragHandler::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x116D584
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: UnityEngine.Transform ICanvasElement::get_transform()
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
  }; // UnityEngine.UI.Scrollbar
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Scrollbar*, "UnityEngine.UI", "Scrollbar");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Scrollbar::Direction, "UnityEngine.UI", "Scrollbar/Direction");
#pragma pack(pop)
