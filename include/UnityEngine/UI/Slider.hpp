// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
  // Skipping declaration: Direction because it is already included!
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: AxisEventData
  class AxisEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Slider
  class Slider : public UnityEngine::UI::Selectable, public UnityEngine::EventSystems::IDragHandler, public UnityEngine::EventSystems::IInitializePotentialDragHandler, public UnityEngine::UI::ICanvasElement {
    public:
    // Nested type: UnityEngine::UI::Slider::Direction
    struct Direction;
    // Nested type: UnityEngine::UI::Slider::SliderEvent
    class SliderEvent;
    // Nested type: UnityEngine::UI::Slider::Axis
    struct Axis;
    // Autogenerated type: UnityEngine.UI.Slider/Direction
    struct Direction : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Direction
      constexpr Direction(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.Slider/Direction LeftToRight
      static constexpr const int LeftToRight = 0;
      // Get static field: static public UnityEngine.UI.Slider/Direction LeftToRight
      static UnityEngine::UI::Slider::Direction _get_LeftToRight();
      // Set static field: static public UnityEngine.UI.Slider/Direction LeftToRight
      static void _set_LeftToRight(UnityEngine::UI::Slider::Direction value);
      // static field const value: static public UnityEngine.UI.Slider/Direction RightToLeft
      static constexpr const int RightToLeft = 1;
      // Get static field: static public UnityEngine.UI.Slider/Direction RightToLeft
      static UnityEngine::UI::Slider::Direction _get_RightToLeft();
      // Set static field: static public UnityEngine.UI.Slider/Direction RightToLeft
      static void _set_RightToLeft(UnityEngine::UI::Slider::Direction value);
      // static field const value: static public UnityEngine.UI.Slider/Direction BottomToTop
      static constexpr const int BottomToTop = 2;
      // Get static field: static public UnityEngine.UI.Slider/Direction BottomToTop
      static UnityEngine::UI::Slider::Direction _get_BottomToTop();
      // Set static field: static public UnityEngine.UI.Slider/Direction BottomToTop
      static void _set_BottomToTop(UnityEngine::UI::Slider::Direction value);
      // static field const value: static public UnityEngine.UI.Slider/Direction TopToBottom
      static constexpr const int TopToBottom = 3;
      // Get static field: static public UnityEngine.UI.Slider/Direction TopToBottom
      static UnityEngine::UI::Slider::Direction _get_TopToBottom();
      // Set static field: static public UnityEngine.UI.Slider/Direction TopToBottom
      static void _set_TopToBottom(UnityEngine::UI::Slider::Direction value);
    }; // UnityEngine.UI.Slider/Direction
    // private UnityEngine.RectTransform m_FillRect
    // Offset: 0xF0
    UnityEngine::RectTransform* m_FillRect;
    // private UnityEngine.RectTransform m_HandleRect
    // Offset: 0xF8
    UnityEngine::RectTransform* m_HandleRect;
    // private UnityEngine.UI.Slider/Direction m_Direction
    // Offset: 0x100
    UnityEngine::UI::Slider::Direction m_Direction;
    // private System.Single m_MinValue
    // Offset: 0x104
    float m_MinValue;
    // private System.Single m_MaxValue
    // Offset: 0x108
    float m_MaxValue;
    // private System.Boolean m_WholeNumbers
    // Offset: 0x10C
    bool m_WholeNumbers;
    // protected System.Single m_Value
    // Offset: 0x110
    float m_Value;
    // private UnityEngine.UI.Slider/SliderEvent m_OnValueChanged
    // Offset: 0x118
    UnityEngine::UI::Slider::SliderEvent* m_OnValueChanged;
    // private UnityEngine.UI.Image m_FillImage
    // Offset: 0x120
    UnityEngine::UI::Image* m_FillImage;
    // private UnityEngine.Transform m_FillTransform
    // Offset: 0x128
    UnityEngine::Transform* m_FillTransform;
    // private UnityEngine.RectTransform m_FillContainerRect
    // Offset: 0x130
    UnityEngine::RectTransform* m_FillContainerRect;
    // private UnityEngine.Transform m_HandleTransform
    // Offset: 0x138
    UnityEngine::Transform* m_HandleTransform;
    // private UnityEngine.RectTransform m_HandleContainerRect
    // Offset: 0x140
    UnityEngine::RectTransform* m_HandleContainerRect;
    // private UnityEngine.Vector2 m_Offset
    // Offset: 0x148
    UnityEngine::Vector2 m_Offset;
    // private UnityEngine.DrivenRectTransformTracker m_Tracker
    // Offset: 0x150
    UnityEngine::DrivenRectTransformTracker m_Tracker;
    // private System.Boolean m_DelayedUpdateVisuals
    // Offset: 0x151
    bool m_DelayedUpdateVisuals;
    // public UnityEngine.RectTransform get_fillRect()
    // Offset: 0x1848550
    UnityEngine::RectTransform* get_fillRect();
    // public System.Void set_fillRect(UnityEngine.RectTransform value)
    // Offset: 0x1848558
    void set_fillRect(UnityEngine::RectTransform* value);
    // public UnityEngine.RectTransform get_handleRect()
    // Offset: 0x1848BF0
    UnityEngine::RectTransform* get_handleRect();
    // public System.Void set_handleRect(UnityEngine.RectTransform value)
    // Offset: 0x1848BF8
    void set_handleRect(UnityEngine::RectTransform* value);
    // public UnityEngine.UI.Slider/Direction get_direction()
    // Offset: 0x1848C7C
    UnityEngine::UI::Slider::Direction get_direction();
    // public System.Void set_direction(UnityEngine.UI.Slider/Direction value)
    // Offset: 0x1848C84
    void set_direction(UnityEngine::UI::Slider::Direction value);
    // public System.Single get_minValue()
    // Offset: 0x1848D00
    float get_minValue();
    // public System.Void set_minValue(System.Single value)
    // Offset: 0x1848D08
    void set_minValue(float value);
    // public System.Single get_maxValue()
    // Offset: 0x1848DA0
    float get_maxValue();
    // public System.Void set_maxValue(System.Single value)
    // Offset: 0x1848DA8
    void set_maxValue(float value);
    // public System.Boolean get_wholeNumbers()
    // Offset: 0x1848E40
    bool get_wholeNumbers();
    // public System.Void set_wholeNumbers(System.Boolean value)
    // Offset: 0x1848E48
    void set_wholeNumbers(bool value);
    // public System.Single get_value()
    // Offset: 0x1848EE0
    float get_value();
    // public System.Void set_value(System.Single value)
    // Offset: 0x1848FCC
    void set_value(float value);
    // public System.Void SetValueWithoutNotify(System.Single input)
    // Offset: 0x1848FE0
    void SetValueWithoutNotify(float input);
    // public System.Single get_normalizedValue()
    // Offset: 0x1848FF4
    float get_normalizedValue();
    // public System.Void set_normalizedValue(System.Single value)
    // Offset: 0x18490E0
    void set_normalizedValue(float value);
    // public UnityEngine.UI.Slider/SliderEvent get_onValueChanged()
    // Offset: 0x1849180
    UnityEngine::UI::Slider::SliderEvent* get_onValueChanged();
    // public System.Void set_onValueChanged(UnityEngine.UI.Slider/SliderEvent value)
    // Offset: 0x1849188
    void set_onValueChanged(UnityEngine::UI::Slider::SliderEvent* value);
    // private System.Single get_stepSize()
    // Offset: 0x1849198
    float get_stepSize();
    // protected System.Void Update()
    // Offset: 0x184930C
    void Update();
    // private System.Void UpdateCachedReferences()
    // Offset: 0x18485DC
    void UpdateCachedReferences();
    // private System.Single ClampValue(System.Single input)
    // Offset: 0x1849588
    float ClampValue(float input);
    // protected System.Void Set(System.Single input, System.Boolean sendCallback)
    // Offset: 0x18496D8
    void Set(float input, bool sendCallback);
    // private UnityEngine.UI.Slider/Axis get_axis()
    // Offset: 0x18496C8
    UnityEngine::UI::Slider::Axis get_axis();
    // private System.Boolean get_reverseValue()
    // Offset: 0x18496B4
    bool get_reverseValue();
    // private System.Void UpdateVisuals()
    // Offset: 0x1848930
    void UpdateVisuals();
    // private System.Void UpdateDrag(UnityEngine.EventSystems.PointerEventData eventData, UnityEngine.Camera cam)
    // Offset: 0x18497EC
    void UpdateDrag(UnityEngine::EventSystems::PointerEventData* eventData, UnityEngine::Camera* cam);
    // private System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1849A90
    bool MayDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void SetDirection(UnityEngine.UI.Slider/Direction direction, System.Boolean includeRectLayouts)
    // Offset: 0x184A030
    void SetDirection(UnityEngine::UI::Slider::Direction direction, bool includeRectLayouts);
    // protected System.Void .ctor()
    // Offset: 0x18491C4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Slider* New_ctor();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x184928C
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::Rebuild(UnityEngine.UI.CanvasUpdate executing)
    void Rebuild(UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x1849290
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::LayoutComplete()
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x1849294
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::GraphicUpdateComplete()
    void GraphicUpdateComplete();
    // protected override System.Void OnEnable()
    // Offset: 0x1849298
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x18492E0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x1849354
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x18497A4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public override System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1849AF8
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1849CBC
    // Implemented from: UnityEngine.EventSystems.IDragHandler
    // Base method: System.Void IDragHandler::OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public override System.Void OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    // Offset: 0x1849D10
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    void OnMove(UnityEngine::EventSystems::AxisEventData* eventData);
    // public override UnityEngine.UI.Selectable FindSelectableOnLeft()
    // Offset: 0x1849F88
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnLeft()
    UnityEngine::UI::Selectable* FindSelectableOnLeft();
    // public override UnityEngine.UI.Selectable FindSelectableOnRight()
    // Offset: 0x1849FAC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnRight()
    UnityEngine::UI::Selectable* FindSelectableOnRight();
    // public override UnityEngine.UI.Selectable FindSelectableOnUp()
    // Offset: 0x1849FD0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnUp()
    UnityEngine::UI::Selectable* FindSelectableOnUp();
    // public override UnityEngine.UI.Selectable FindSelectableOnDown()
    // Offset: 0x1849FF4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnDown()
    UnityEngine::UI::Selectable* FindSelectableOnDown();
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x184A018
    // Implemented from: UnityEngine.EventSystems.IInitializePotentialDragHandler
    // Base method: System.Void IInitializePotentialDragHandler::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x184A1C4
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: UnityEngine.Transform ICanvasElement::get_transform()
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
  }; // UnityEngine.UI.Slider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Slider*, "UnityEngine.UI", "Slider");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Slider::Direction, "UnityEngine.UI", "Slider/Direction");
#pragma pack(pop)
