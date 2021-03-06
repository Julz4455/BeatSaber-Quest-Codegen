// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RectTransform
  // [] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: CBFA00
  // [NativeHeaderAttribute] Offset: CBFA00
  class RectTransform : public UnityEngine::Transform {
    public:
    // Nested type: UnityEngine::RectTransform::Axis
    struct Axis;
    // Nested type: UnityEngine::RectTransform::ReapplyDrivenProperties
    class ReapplyDrivenProperties;
    // Creating value type constructor for type: RectTransform
    RectTransform() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xCC29EC
    // [DebuggerBrowsableAttribute] Offset: 0xCC29EC
    // Get static field: static private UnityEngine.RectTransform/ReapplyDrivenProperties reapplyDrivenProperties
    static UnityEngine::RectTransform::ReapplyDrivenProperties* _get_reapplyDrivenProperties();
    // Set static field: static private UnityEngine.RectTransform/ReapplyDrivenProperties reapplyDrivenProperties
    static void _set_reapplyDrivenProperties(UnityEngine::RectTransform::ReapplyDrivenProperties* value);
    // static public System.Void add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
    // Offset: 0x1B4015C
    static void add_reapplyDrivenProperties(UnityEngine::RectTransform::ReapplyDrivenProperties* value);
    // static public System.Void remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
    // Offset: 0x1B40210
    static void remove_reapplyDrivenProperties(UnityEngine::RectTransform::ReapplyDrivenProperties* value);
    // public UnityEngine.Rect get_rect()
    // Offset: 0x1B402C4
    UnityEngine::Rect get_rect();
    // public UnityEngine.Vector2 get_anchorMin()
    // Offset: 0x1B40370
    UnityEngine::Vector2 get_anchorMin();
    // public System.Void set_anchorMin(UnityEngine.Vector2 value)
    // Offset: 0x1B40418
    void set_anchorMin(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_anchorMax()
    // Offset: 0x1B404BC
    UnityEngine::Vector2 get_anchorMax();
    // public System.Void set_anchorMax(UnityEngine.Vector2 value)
    // Offset: 0x1B40564
    void set_anchorMax(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_anchoredPosition()
    // Offset: 0x1B40608
    UnityEngine::Vector2 get_anchoredPosition();
    // public System.Void set_anchoredPosition(UnityEngine.Vector2 value)
    // Offset: 0x1B406B0
    void set_anchoredPosition(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_sizeDelta()
    // Offset: 0x1B40754
    UnityEngine::Vector2 get_sizeDelta();
    // public System.Void set_sizeDelta(UnityEngine.Vector2 value)
    // Offset: 0x1B407FC
    void set_sizeDelta(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0x1B408A0
    UnityEngine::Vector2 get_pivot();
    // public System.Void set_pivot(UnityEngine.Vector2 value)
    // Offset: 0x1B40948
    void set_pivot(UnityEngine::Vector2 value);
    // public System.Void set_anchoredPosition3D(UnityEngine.Vector3 value)
    // Offset: 0x1B409EC
    void set_anchoredPosition3D(UnityEngine::Vector3 value);
    // public System.Void set_offsetMin(UnityEngine.Vector2 value)
    // Offset: 0x1B40A54
    void set_offsetMin(UnityEngine::Vector2 value);
    // public System.Void set_offsetMax(UnityEngine.Vector2 value)
    // Offset: 0x1B40BF0
    void set_offsetMax(UnityEngine::Vector2 value);
    // public System.Void GetLocalCorners(UnityEngine.Vector3[] fourCornersArray)
    // Offset: 0x1B40D84
    void GetLocalCorners(::Array<UnityEngine::Vector3>* fourCornersArray);
    // public System.Void GetWorldCorners(UnityEngine.Vector3[] fourCornersArray)
    // Offset: 0x1B40F54
    void GetWorldCorners(::Array<UnityEngine::Vector3>* fourCornersArray);
    // public System.Void SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis axis, System.Single size)
    // Offset: 0x1B4107C
    void SetSizeWithCurrentAnchors(UnityEngine::RectTransform::Axis axis, float size);
    // static System.Void SendReapplyDrivenProperties(UnityEngine.RectTransform driven)
    // Offset: 0x1B41240
    static void SendReapplyDrivenProperties(UnityEngine::RectTransform* driven);
    // private UnityEngine.Vector2 GetParentSize()
    // Offset: 0x1B41144
    UnityEngine::Vector2 GetParentSize();
    // private System.Void get_rect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1B40320
    void get_rect_Injected(UnityEngine::Rect& ret);
    // private System.Void get_anchorMin_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B403C8
    void get_anchorMin_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_anchorMin_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1B4046C
    void set_anchorMin_Injected(UnityEngine::Vector2& value);
    // private System.Void get_anchorMax_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B40514
    void get_anchorMax_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_anchorMax_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1B405B8
    void set_anchorMax_Injected(UnityEngine::Vector2& value);
    // private System.Void get_anchoredPosition_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B40660
    void get_anchoredPosition_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_anchoredPosition_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1B40704
    void set_anchoredPosition_Injected(UnityEngine::Vector2& value);
    // private System.Void get_sizeDelta_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B407AC
    void get_sizeDelta_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_sizeDelta_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1B40850
    void set_sizeDelta_Injected(UnityEngine::Vector2& value);
    // private System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B408F8
    void get_pivot_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_pivot_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1B4099C
    void set_pivot_Injected(UnityEngine::Vector2& value);
  }; // UnityEngine.RectTransform
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectTransform*, "UnityEngine", "RectTransform");
