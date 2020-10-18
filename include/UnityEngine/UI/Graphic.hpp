// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine/UI/CoroutineTween/ColorTween.hpp"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: CanvasRenderer
  class CanvasRenderer;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Mesh
  class Mesh;
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Forward declaring namespace: UnityEngine::UI::CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Forward declaring type: TweenRunner`1<T>
  template<typename T>
  class TweenRunner_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Graphic
  class Graphic : public UnityEngine::EventSystems::UIBehaviour, public UnityEngine::UI::ICanvasElement {
    public:
    // protected UnityEngine.Material m_Material
    // Offset: 0x18
    UnityEngine::Material* m_Material;
    // private UnityEngine.Color m_Color
    // Offset: 0x20
    UnityEngine::Color m_Color;
    // protected System.Boolean m_SkipLayoutUpdate
    // Offset: 0x30
    bool m_SkipLayoutUpdate;
    // protected System.Boolean m_SkipMaterialUpdate
    // Offset: 0x31
    bool m_SkipMaterialUpdate;
    // private System.Boolean m_RaycastTarget
    // Offset: 0x32
    bool m_RaycastTarget;
    // private UnityEngine.RectTransform m_RectTransform
    // Offset: 0x38
    UnityEngine::RectTransform* m_RectTransform;
    // private UnityEngine.CanvasRenderer m_CanvasRenderer
    // Offset: 0x40
    UnityEngine::CanvasRenderer* m_CanvasRenderer;
    // private UnityEngine.Canvas m_Canvas
    // Offset: 0x48
    UnityEngine::Canvas* m_Canvas;
    // private System.Boolean m_VertsDirty
    // Offset: 0x50
    bool m_VertsDirty;
    // private System.Boolean m_MaterialDirty
    // Offset: 0x51
    bool m_MaterialDirty;
    // protected UnityEngine.Events.UnityAction m_OnDirtyLayoutCallback
    // Offset: 0x58
    UnityEngine::Events::UnityAction* m_OnDirtyLayoutCallback;
    // protected UnityEngine.Events.UnityAction m_OnDirtyVertsCallback
    // Offset: 0x60
    UnityEngine::Events::UnityAction* m_OnDirtyVertsCallback;
    // protected UnityEngine.Events.UnityAction m_OnDirtyMaterialCallback
    // Offset: 0x68
    UnityEngine::Events::UnityAction* m_OnDirtyMaterialCallback;
    // protected UnityEngine.Mesh m_CachedMesh
    // Offset: 0x70
    UnityEngine::Mesh* m_CachedMesh;
    // protected UnityEngine.Vector2[] m_CachedUvs
    // Offset: 0x78
    ::Array<UnityEngine::Vector2>* m_CachedUvs;
    // private readonly UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> m_ColorTweenRunner
    // Offset: 0x80
    UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine::UI::CoroutineTween::ColorTween>* m_ColorTweenRunner;
    // private System.Boolean <useLegacyMeshGeneration>k__BackingField
    // Offset: 0x88
    bool useLegacyMeshGeneration;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static protected UnityEngine.Material s_DefaultUI
    static UnityEngine::Material* _get_s_DefaultUI();
    // Set static field: static protected UnityEngine.Material s_DefaultUI
    static void _set_s_DefaultUI(UnityEngine::Material* value);
    // Get static field: static protected UnityEngine.Texture2D s_WhiteTexture
    static UnityEngine::Texture2D* _get_s_WhiteTexture();
    // Set static field: static protected UnityEngine.Texture2D s_WhiteTexture
    static void _set_s_WhiteTexture(UnityEngine::Texture2D* value);
    // Get static field: static protected UnityEngine.Mesh s_Mesh
    static UnityEngine::Mesh* _get_s_Mesh();
    // Set static field: static protected UnityEngine.Mesh s_Mesh
    static void _set_s_Mesh(UnityEngine::Mesh* value);
    // Get static field: static private readonly UnityEngine.UI.VertexHelper s_VertexHelper
    static UnityEngine::UI::VertexHelper* _get_s_VertexHelper();
    // Set static field: static private readonly UnityEngine.UI.VertexHelper s_VertexHelper
    static void _set_s_VertexHelper(UnityEngine::UI::VertexHelper* value);
    // static public UnityEngine.Material get_defaultGraphicMaterial()
    // Offset: 0x175019C
    static UnityEngine::Material* get_defaultGraphicMaterial();
    // public UnityEngine.Color get_color()
    // Offset: 0x175029C
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x17502A8
    void set_color(UnityEngine::Color value);
    // public System.Boolean get_raycastTarget()
    // Offset: 0x17502F0
    bool get_raycastTarget();
    // public System.Void set_raycastTarget(System.Boolean value)
    // Offset: 0x17502F8
    void set_raycastTarget(bool value);
    // protected System.Boolean get_useLegacyMeshGeneration()
    // Offset: 0x1750304
    bool get_useLegacyMeshGeneration();
    // protected System.Void set_useLegacyMeshGeneration(System.Boolean value)
    // Offset: 0x175030C
    void set_useLegacyMeshGeneration(bool value);
    // public System.Void SetAllDirty()
    // Offset: 0x17503E0
    void SetAllDirty();
    // public System.Void SetLayoutDirty()
    // Offset: 0x1750454
    void SetLayoutDirty();
    // public System.Void SetVerticesDirty()
    // Offset: 0x1750570
    void SetVerticesDirty();
    // public System.Void SetMaterialDirty()
    // Offset: 0x1750610
    void SetMaterialDirty();
    // public System.Int32 get_depth()
    // Offset: 0x1750DA0
    int get_depth();
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x17504FC
    UnityEngine::RectTransform* get_rectTransform();
    // public UnityEngine.Canvas get_canvas()
    // Offset: 0x1750824
    UnityEngine::Canvas* get_canvas();
    // private System.Void CacheCanvas()
    // Offset: 0x1750AC0
    void CacheCanvas();
    // public UnityEngine.CanvasRenderer get_canvasRenderer()
    // Offset: 0x1750DC0
    UnityEngine::CanvasRenderer* get_canvasRenderer();
    // public UnityEngine.Material get_defaultMaterial()
    // Offset: 0x1750E34
    UnityEngine::Material* get_defaultMaterial();
    // public UnityEngine.Material get_material()
    // Offset: 0x1750E90
    UnityEngine::Material* get_material();
    // public System.Void set_material(UnityEngine.Material value)
    // Offset: 0x1750F28
    void set_material(UnityEngine::Material* value);
    // public UnityEngine.Material get_materialForRendering()
    // Offset: 0x1750FE0
    UnityEngine::Material* get_materialForRendering();
    // public UnityEngine.Texture get_mainTexture()
    // Offset: 0x17511DC
    UnityEngine::Texture* get_mainTexture();
    // public System.Void OnCullingChanged()
    // Offset: 0x17516C4
    void OnCullingChanged();
    // protected System.Void UpdateMaterial()
    // Offset: 0x1751860
    void UpdateMaterial();
    // protected System.Void UpdateGeometry()
    // Offset: 0x175191C
    void UpdateGeometry();
    // private System.Void DoMeshGeneration()
    // Offset: 0x1751CC4
    void DoMeshGeneration();
    // private System.Void DoLegacyMeshGeneration()
    // Offset: 0x175192C
    void DoLegacyMeshGeneration();
    // static protected UnityEngine.Mesh get_workerMesh()
    // Offset: 0x1752090
    static UnityEngine::Mesh* get_workerMesh();
    // protected System.Void OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex> vbo)
    // Offset: 0x17521E0
    void OnFillVBO(System::Collections::Generic::List_1<UnityEngine::UIVertex>* vbo);
    // protected System.Void OnPopulateMesh(UnityEngine.Mesh m)
    // Offset: 0x17521E4
    void OnPopulateMesh(UnityEngine::Mesh* m);
    // protected System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x175228C
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
    // public System.Void SetNativeSize()
    // Offset: 0x175263C
    void SetNativeSize();
    // public System.Boolean Raycast(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x1752640
    bool Raycast(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera);
    // public UnityEngine.Vector2 PixelAdjustPoint(UnityEngine.Vector2 point)
    // Offset: 0x1752AB8
    UnityEngine::Vector2 PixelAdjustPoint(UnityEngine::Vector2 point);
    // public UnityEngine.Rect GetPixelAdjustedRect()
    // Offset: 0x17524F4
    UnityEngine::Rect GetPixelAdjustedRect();
    // public System.Void CrossFadeColor(UnityEngine.Color targetColor, System.Single duration, System.Boolean ignoreTimeScale, System.Boolean useAlpha)
    // Offset: 0x1752C04
    void CrossFadeColor(UnityEngine::Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha);
    // public System.Void CrossFadeColor(UnityEngine.Color targetColor, System.Single duration, System.Boolean ignoreTimeScale, System.Boolean useAlpha, System.Boolean useRGB)
    // Offset: 0x1752C20
    void CrossFadeColor(UnityEngine::Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha, bool useRGB);
    // static private UnityEngine.Color CreateColorFromAlpha(System.Single alpha)
    // Offset: 0x1752E6C
    static UnityEngine::Color CreateColorFromAlpha(float alpha);
    // public System.Void CrossFadeAlpha(System.Single alpha, System.Single duration, System.Boolean ignoreTimeScale)
    // Offset: 0x1752E94
    void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale);
    // public System.Void RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction action)
    // Offset: 0x1752F3C
    void RegisterDirtyLayoutCallback(UnityEngine::Events::UnityAction* action);
    // public System.Void UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction action)
    // Offset: 0x1752FCC
    void UnregisterDirtyLayoutCallback(UnityEngine::Events::UnityAction* action);
    // public System.Void RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction action)
    // Offset: 0x175305C
    void RegisterDirtyVerticesCallback(UnityEngine::Events::UnityAction* action);
    // public System.Void UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction action)
    // Offset: 0x17530EC
    void UnregisterDirtyVerticesCallback(UnityEngine::Events::UnityAction* action);
    // public System.Void RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction action)
    // Offset: 0x175317C
    void RegisterDirtyMaterialCallback(UnityEngine::Events::UnityAction* action);
    // public System.Void UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction action)
    // Offset: 0x175320C
    void UnregisterDirtyMaterialCallback(UnityEngine::Events::UnityAction* action);
    // protected System.Void .ctor()
    // Offset: 0x1750318
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Graphic* New_ctor();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x17506B0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // protected override System.Void OnBeforeTransformParentChanged()
    // Offset: 0x1750770
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnBeforeTransformParentChanged()
    void OnBeforeTransformParentChanged();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x17509F0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnEnable()
    // Offset: 0x1751244
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x175138C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnDestroy()
    // Offset: 0x17514D4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x1751594
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate update)
    // Offset: 0x1751764
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::Rebuild(UnityEngine.UI.CanvasUpdate update)
    void Rebuild(UnityEngine::UI::CanvasUpdate update);
    // public System.Void LayoutComplete()
    // Offset: 0x1751858
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::LayoutComplete()
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x175185C
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::GraphicUpdateComplete()
    void GraphicUpdateComplete();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x175262C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // static private System.Void .cctor()
    // Offset: 0x175329C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x1753334
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: UnityEngine.Transform ICanvasElement::get_transform()
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
  }; // UnityEngine.UI.Graphic
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Graphic*, "UnityEngine.UI", "Graphic");
#pragma pack(pop)
