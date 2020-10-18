// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerDownHandler
#include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerUpHandler
#include "UnityEngine/EventSystems/IPointerUpHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.IInitializePotentialDragHandler
#include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IBeginDragHandler
#include "UnityEngine/EventSystems/IBeginDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IDragHandler
#include "UnityEngine/EventSystems/IDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IEndDragHandler
#include "UnityEngine/EventSystems/IEndDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IDropHandler
#include "UnityEngine/EventSystems/IDropHandler.hpp"
// Including type: UnityEngine.EventSystems.IScrollHandler
#include "UnityEngine/EventSystems/IScrollHandler.hpp"
// Including type: UnityEngine.EventSystems.IUpdateSelectedHandler
#include "UnityEngine/EventSystems/IUpdateSelectedHandler.hpp"
// Including type: UnityEngine.EventSystems.ISelectHandler
#include "UnityEngine/EventSystems/ISelectHandler.hpp"
// Including type: UnityEngine.EventSystems.IDeselectHandler
#include "UnityEngine/EventSystems/IDeselectHandler.hpp"
// Including type: UnityEngine.EventSystems.IMoveHandler
#include "UnityEngine/EventSystems/IMoveHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.ICancelHandler
#include "UnityEngine/EventSystems/ICancelHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventTriggerType
  struct EventTriggerType;
  // Forward declaring type: BaseEventData
  class BaseEventData;
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: AxisEventData
  class AxisEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.EventTrigger
  class EventTrigger : public UnityEngine::MonoBehaviour, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler, public UnityEngine::EventSystems::IPointerDownHandler, public UnityEngine::EventSystems::IPointerUpHandler, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::IInitializePotentialDragHandler, public UnityEngine::EventSystems::IBeginDragHandler, public UnityEngine::EventSystems::IDragHandler, public UnityEngine::EventSystems::IEndDragHandler, public UnityEngine::EventSystems::IDropHandler, public UnityEngine::EventSystems::IScrollHandler, public UnityEngine::EventSystems::IUpdateSelectedHandler, public UnityEngine::EventSystems::ISelectHandler, public UnityEngine::EventSystems::IDeselectHandler, public UnityEngine::EventSystems::IMoveHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::ICancelHandler {
    public:
    // Nested type: UnityEngine::EventSystems::EventTrigger::TriggerEvent
    class TriggerEvent;
    // Nested type: UnityEngine::EventSystems::EventTrigger::Entry
    class Entry;
    // private System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> m_Delegates
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* m_Delegates;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> get_delegates()
    // Offset: 0x127BE54
    System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* get_delegates();
    // public System.Void set_delegates(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> value)
    // Offset: 0x127BED8
    void set_delegates(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* value);
    // public System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> get_triggers()
    // Offset: 0x127BE58
    System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* get_triggers();
    // public System.Void set_triggers(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> value)
    // Offset: 0x127BEE8
    void set_triggers(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* value);
    // private System.Void Execute(UnityEngine.EventSystems.EventTriggerType id, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x127BEF0
    void Execute(UnityEngine::EventSystems::EventTriggerType id, UnityEngine::EventSystems::BaseEventData* eventData);
    // protected System.Void .ctor()
    // Offset: 0x127BEE0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EventTrigger* New_ctor();
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127BFD8
    // Implemented from: UnityEngine.EventSystems.IPointerEnterHandler
    // Base method: System.Void IPointerEnterHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127BFE4
    // Implemented from: UnityEngine.EventSystems.IPointerExitHandler
    // Base method: System.Void IPointerExitHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127BFF0
    // Implemented from: UnityEngine.EventSystems.IDragHandler
    // Base method: System.Void IDragHandler::OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrop(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127BFFC
    // Implemented from: UnityEngine.EventSystems.IDropHandler
    // Base method: System.Void IDropHandler::OnDrop(UnityEngine.EventSystems.PointerEventData eventData)
    void OnDrop(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127C008
    // Implemented from: UnityEngine.EventSystems.IPointerDownHandler
    // Base method: System.Void IPointerDownHandler::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127C014
    // Implemented from: UnityEngine.EventSystems.IPointerUpHandler
    // Base method: System.Void IPointerUpHandler::OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127C020
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSelect(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x127C02C
    // Implemented from: UnityEngine.EventSystems.ISelectHandler
    // Base method: System.Void ISelectHandler::OnSelect(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSelect(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnDeselect(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x127C038
    // Implemented from: UnityEngine.EventSystems.IDeselectHandler
    // Base method: System.Void IDeselectHandler::OnDeselect(UnityEngine.EventSystems.BaseEventData eventData)
    void OnDeselect(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnScroll(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127C044
    // Implemented from: UnityEngine.EventSystems.IScrollHandler
    // Base method: System.Void IScrollHandler::OnScroll(UnityEngine.EventSystems.PointerEventData eventData)
    void OnScroll(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    // Offset: 0x127C050
    // Implemented from: UnityEngine.EventSystems.IMoveHandler
    // Base method: System.Void IMoveHandler::OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    void OnMove(UnityEngine::EventSystems::AxisEventData* eventData);
    // public System.Void OnUpdateSelected(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x127C05C
    // Implemented from: UnityEngine.EventSystems.IUpdateSelectedHandler
    // Base method: System.Void IUpdateSelectedHandler::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData eventData)
    void OnUpdateSelected(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127C068
    // Implemented from: UnityEngine.EventSystems.IInitializePotentialDragHandler
    // Base method: System.Void IInitializePotentialDragHandler::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127C074
    // Implemented from: UnityEngine.EventSystems.IBeginDragHandler
    // Base method: System.Void IBeginDragHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnBeginDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnEndDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x127C080
    // Implemented from: UnityEngine.EventSystems.IEndDragHandler
    // Base method: System.Void IEndDragHandler::OnEndDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnEndDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x127C08C
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnCancel(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x127C098
    // Implemented from: UnityEngine.EventSystems.ICancelHandler
    // Base method: System.Void ICancelHandler::OnCancel(UnityEngine.EventSystems.BaseEventData eventData)
    void OnCancel(UnityEngine::EventSystems::BaseEventData* eventData);
  }; // UnityEngine.EventSystems.EventTrigger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::EventTrigger*, "UnityEngine.EventSystems", "EventTrigger");
#pragma pack(pop)
