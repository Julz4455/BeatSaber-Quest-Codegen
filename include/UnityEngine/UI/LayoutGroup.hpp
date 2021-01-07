// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.ILayoutElement
#include "UnityEngine/UI/ILayoutElement.hpp"
// Including type: UnityEngine.UI.ILayoutGroup
#include "UnityEngine/UI/ILayoutGroup.hpp"
// Including type: UnityEngine.TextAnchor
#include "UnityEngine/TextAnchor.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectOffset
  class RectOffset;
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x58
  // Autogenerated type: UnityEngine.UI.LayoutGroup
  // [] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: D7CFD8
  // [ExecuteAlways] Offset: D7CFD8
  // [RequireComponent] Offset: D7CFD8
  class LayoutGroup : public UnityEngine::EventSystems::UIBehaviour/*, public UnityEngine::UI::ILayoutElement, public UnityEngine::UI::ILayoutGroup*/ {
    public:
    // Nested type: UnityEngine::UI::LayoutGroup::$DelayedSetDirty$d__56
    class $DelayedSetDirty$d__56;
    // protected UnityEngine.RectOffset m_Padding
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectOffset* m_Padding;
    // Field size check
    static_assert(sizeof(UnityEngine::RectOffset*) == 0x8);
    // protected UnityEngine.TextAnchor m_ChildAlignment
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::TextAnchor m_ChildAlignment;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAnchor) == 0x4);
    // Padding between fields: m_ChildAlignment and: m_Rect
    char __padding1[0x4] = {};
    // private UnityEngine.RectTransform m_Rect
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::RectTransform* m_Rect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // protected UnityEngine.DrivenRectTransformTracker m_Tracker
    // Size: 0x1
    // Offset: 0x30
    UnityEngine::DrivenRectTransformTracker m_Tracker;
    // Field size check
    static_assert(sizeof(UnityEngine::DrivenRectTransformTracker) == 0x1);
    // Padding between fields: m_Tracker and: m_TotalMinSize
    char __padding3[0x3] = {};
    // private UnityEngine.Vector2 m_TotalMinSize
    // Size: 0x8
    // Offset: 0x34
    UnityEngine::Vector2 m_TotalMinSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_TotalPreferredSize
    // Size: 0x8
    // Offset: 0x3C
    UnityEngine::Vector2 m_TotalPreferredSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_TotalFlexibleSize
    // Size: 0x8
    // Offset: 0x44
    UnityEngine::Vector2 m_TotalFlexibleSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // Padding between fields: m_TotalFlexibleSize and: m_RectChildren
    char __padding6[0x4] = {};
    // private System.Collections.Generic.List`1<UnityEngine.RectTransform> m_RectChildren
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<UnityEngine::RectTransform*>* m_RectChildren;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::RectTransform*>*) == 0x8);
    // Creating value type constructor for type: LayoutGroup
    LayoutGroup(UnityEngine::RectOffset* m_Padding_ = {}, UnityEngine::TextAnchor m_ChildAlignment_ = {}, UnityEngine::RectTransform* m_Rect_ = {}, UnityEngine::DrivenRectTransformTracker m_Tracker_ = {}, UnityEngine::Vector2 m_TotalMinSize_ = {}, UnityEngine::Vector2 m_TotalPreferredSize_ = {}, UnityEngine::Vector2 m_TotalFlexibleSize_ = {}, System::Collections::Generic::List_1<UnityEngine::RectTransform*>* m_RectChildren_ = {}) noexcept : m_Padding{m_Padding_}, m_ChildAlignment{m_ChildAlignment_}, m_Rect{m_Rect_}, m_Tracker{m_Tracker_}, m_TotalMinSize{m_TotalMinSize_}, m_TotalPreferredSize{m_TotalPreferredSize_}, m_TotalFlexibleSize{m_TotalFlexibleSize_}, m_RectChildren{m_RectChildren_} {}
    // Creating interface conversion operator: operator UnityEngine::UI::ILayoutElement
    operator UnityEngine::UI::ILayoutElement() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ILayoutElement*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::ILayoutGroup
    operator UnityEngine::UI::ILayoutGroup() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ILayoutGroup*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.RectOffset get_padding()
    // Offset: 0x156088C
    UnityEngine::RectOffset* get_padding();
    // public System.Void set_padding(UnityEngine.RectOffset value)
    // Offset: 0x1560894
    void set_padding(UnityEngine::RectOffset* value);
    // public UnityEngine.TextAnchor get_childAlignment()
    // Offset: 0x15608F8
    UnityEngine::TextAnchor get_childAlignment();
    // public System.Void set_childAlignment(UnityEngine.TextAnchor value)
    // Offset: 0x1560900
    void set_childAlignment(UnityEngine::TextAnchor value);
    // protected UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x1560964
    UnityEngine::RectTransform* get_rectTransform();
    // protected System.Collections.Generic.List`1<UnityEngine.RectTransform> get_rectChildren()
    // Offset: 0x1560A10
    System::Collections::Generic::List_1<UnityEngine::RectTransform*>* get_rectChildren();
    // protected System.Single GetTotalMinSize(System.Int32 axis)
    // Offset: 0x1560D38
    float GetTotalMinSize(int axis);
    // protected System.Single GetTotalPreferredSize(System.Int32 axis)
    // Offset: 0x1560D54
    float GetTotalPreferredSize(int axis);
    // protected System.Single GetTotalFlexibleSize(System.Int32 axis)
    // Offset: 0x1560D70
    float GetTotalFlexibleSize(int axis);
    // protected System.Single GetStartOffset(System.Int32 axis, System.Single requiredSpaceWithoutPadding)
    // Offset: 0x1561090
    float GetStartOffset(int axis, float requiredSpaceWithoutPadding);
    // protected System.Single GetAlignmentOnAxis(System.Int32 axis)
    // Offset: 0x15611B4
    float GetAlignmentOnAxis(int axis);
    // protected System.Void SetLayoutInputForAxis(System.Single totalMin, System.Single totalPreferred, System.Single totalFlexible, System.Int32 axis)
    // Offset: 0x1561200
    void SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int axis);
    // protected System.Void SetChildAlongAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos)
    // Offset: 0x1561260
    void SetChildAlongAxis(UnityEngine::RectTransform* rect, int axis, float pos);
    // protected System.Void SetChildAlongAxisWithScale(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos, System.Single scaleFactor)
    // Offset: 0x1561318
    void SetChildAlongAxisWithScale(UnityEngine::RectTransform* rect, int axis, float pos, float scaleFactor);
    // protected System.Void SetChildAlongAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos, System.Single size)
    // Offset: 0x15614D8
    void SetChildAlongAxis(UnityEngine::RectTransform* rect, int axis, float pos, float size);
    // protected System.Void SetChildAlongAxisWithScale(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos, System.Single size, System.Single scaleFactor)
    // Offset: 0x1561598
    void SetChildAlongAxisWithScale(UnityEngine::RectTransform* rect, int axis, float pos, float size, float scaleFactor);
    // private System.Boolean get_isRootLayoutGroup()
    // Offset: 0x156176C
    bool get_isRootLayoutGroup();
    // protected System.Void OnTransformChildrenChanged()
    // Offset: 0x15618F8
    void OnTransformChildrenChanged();
    // protected System.Void SetProperty(ref T currentValue, T newValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetProperty(T& currentValue, T newValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::UI").WithContext("LayoutGroup").WithContext("SetProperty");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetProperty", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(currentValue, newValue)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, currentValue, newValue);
    }
    // protected System.Void SetDirty()
    // Offset: 0x1560F10
    void SetDirty();
    // private System.Collections.IEnumerator DelayedSetDirty(UnityEngine.RectTransform rectTransform)
    // Offset: 0x15618FC
    System::Collections::IEnumerator* DelayedSetDirty(UnityEngine::RectTransform* rectTransform);
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x1560A18
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public System.Single get_minWidth()
    // Offset: 0x1560D28
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minWidth()
    float get_minWidth();
    // public System.Single get_preferredWidth()
    // Offset: 0x1560D44
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredWidth()
    float get_preferredWidth();
    // public System.Single get_flexibleWidth()
    // Offset: 0x1560D60
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleWidth()
    float get_flexibleWidth();
    // public System.Single get_minHeight()
    // Offset: 0x1560D7C
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minHeight()
    float get_minHeight();
    // public System.Single get_preferredHeight()
    // Offset: 0x1560D8C
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredHeight()
    float get_preferredHeight();
    // public System.Single get_flexibleHeight()
    // Offset: 0x1560D9C
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleHeight()
    float get_flexibleHeight();
    // public System.Int32 get_layoutPriority()
    // Offset: 0x1560DAC
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Int32 ILayoutElement::get_layoutPriority()
    int get_layoutPriority();
    // public System.Void SetLayoutHorizontal()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.UI.ILayoutController
    // Base method: System.Void ILayoutController::SetLayoutHorizontal()
    void SetLayoutHorizontal();
    // public System.Void SetLayoutVertical()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.UI.ILayoutController
    // Base method: System.Void ILayoutController::SetLayoutVertical()
    void SetLayoutVertical();
    // protected System.Void .ctor()
    // Offset: 0x1560DB4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LayoutGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::UI").WithContext("LayoutGroup").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LayoutGroup*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1560EE8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1561000
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x156108C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x15618B8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
  }; // UnityEngine.UI.LayoutGroup
  static check_size<sizeof(LayoutGroup), 80 + sizeof(System::Collections::Generic::List_1<UnityEngine::RectTransform*>*)> __UnityEngine_UI_LayoutGroupSizeCheck;
  static_assert(sizeof(LayoutGroup) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutGroup*, "UnityEngine.UI", "LayoutGroup");
#pragma pack(pop)
