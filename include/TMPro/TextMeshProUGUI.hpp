// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Text
#include "TMPro/TMP_Text.hpp"
// Including type: UnityEngine.UI.ILayoutElement
#include "UnityEngine/UI/ILayoutElement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SubMeshUI
  class TMP_SubMeshUI;
  // Forward declaring type: TMP_TextInfo
  class TMP_TextInfo;
  // Forward declaring type: TMP_VertexDataUpdateFlags
  struct TMP_VertexDataUpdateFlags;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: CanvasRenderer
  class CanvasRenderer;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Material
  class Material;
  // Skipping declaration: Color32 because it is already included!
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Rect
  struct Rect;
  // Skipping declaration: Color because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TextMeshProUGUI
  class TextMeshProUGUI : public TMPro::TMP_Text, public UnityEngine::UI::ILayoutElement {
    public:
    // private System.Boolean m_hasFontAssetChanged
    // Offset: 0xB30
    bool m_hasFontAssetChanged;
    // protected TMPro.TMP_SubMeshUI[] m_subTextObjects
    // Offset: 0xB38
    ::Array<TMPro::TMP_SubMeshUI*>* m_subTextObjects;
    // private System.Single m_previousLossyScaleY
    // Offset: 0xB40
    float m_previousLossyScaleY;
    // private UnityEngine.Vector3[] m_RectTransformCorners
    // Offset: 0xB48
    ::Array<UnityEngine::Vector3>* m_RectTransformCorners;
    // private UnityEngine.CanvasRenderer m_canvasRenderer
    // Offset: 0xB50
    UnityEngine::CanvasRenderer* m_canvasRenderer;
    // private UnityEngine.Canvas m_canvas
    // Offset: 0xB58
    UnityEngine::Canvas* m_canvas;
    // private System.Boolean m_isFirstAllocation
    // Offset: 0xB60
    bool m_isFirstAllocation;
    // private System.Int32 m_max_characters
    // Offset: 0xB64
    int m_max_characters;
    // private System.Boolean m_isMaskingEnabled
    // Offset: 0xB68
    bool m_isMaskingEnabled;
    // private UnityEngine.Material m_baseMaterial
    // Offset: 0xB70
    UnityEngine::Material* m_baseMaterial;
    // private System.Boolean m_isScrollRegionSet
    // Offset: 0xB78
    bool m_isScrollRegionSet;
    // private System.Int32 m_stencilID
    // Offset: 0xB7C
    int m_stencilID;
    // private UnityEngine.Vector4 m_maskOffset
    // Offset: 0xB80
    UnityEngine::Vector4 m_maskOffset;
    // private UnityEngine.Matrix4x4 m_EnvMapMatrix
    // Offset: 0xB90
    UnityEngine::Matrix4x4 m_EnvMapMatrix;
    // private System.Boolean m_isRegisteredForEvents
    // Offset: 0xBD0
    bool m_isRegisteredForEvents;
    // private System.Int32 m_recursiveCountA
    // Offset: 0xBD4
    int m_recursiveCountA;
    // private System.Int32 loopCountA
    // Offset: 0xBD8
    int loopCountA;
    // private System.Boolean m_isRebuildingLayout
    // Offset: 0xBDC
    bool m_isRebuildingLayout;
    // private UnityEngine.Canvas GetCanvas()
    // Offset: 0x127376C
    UnityEngine::Canvas* GetCanvas();
    // private System.Void UpdateEnvMapMatrix()
    // Offset: 0x1274270
    void UpdateEnvMapMatrix();
    // private System.Void EnableMasking()
    // Offset: 0x1274554
    void EnableMasking();
    // private System.Void DisableMasking()
    // Offset: 0x1274C34
    void DisableMasking();
    // private System.Void UpdateMask()
    // Offset: 0x1274744
    void UpdateMask();
    // private System.Void SetPerspectiveCorrection()
    // Offset: 0x1276060
    void SetPerspectiveCorrection();
    // private System.Void SetMeshArrays(System.Int32 size)
    // Offset: 0x12762AC
    void SetMeshArrays(int size);
    // private System.Void OnPreRenderCanvas()
    // Offset: 0x127882C
    void OnPreRenderCanvas();
    // private System.Void UpdateSDFScale(System.Single scaleDelta)
    // Offset: 0x12785B0
    void UpdateSDFScale(float scaleDelta);
    // private System.Void UpdateSubObjectPivot()
    // Offset: 0x12783E4
    void UpdateSubObjectPivot();
    // public UnityEngine.Vector4 get_maskOffset()
    // Offset: 0x12820A0
    UnityEngine::Vector4 get_maskOffset();
    // public System.Void set_maskOffset(UnityEngine.Vector4 value)
    // Offset: 0x12820B4
    void set_maskOffset(UnityEngine::Vector4 value);
    // public System.Void UpdateFontAsset()
    // Offset: 0x1282A6C
    void UpdateFontAsset();
    // protected override System.Void Awake()
    // Offset: 0x12731F4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0x1273644
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x12738C0
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnDisable()
    void OnDisable();
    // protected override System.Void OnDestroy()
    // Offset: 0x1273AA4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDestroy()
    void OnDestroy();
    // protected override System.Void LoadFontAsset()
    // Offset: 0x1273C04
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::LoadFontAsset()
    void LoadFontAsset();
    // protected override UnityEngine.Material GetMaterial(UnityEngine.Material mat)
    // Offset: 0x1274D6C
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Material TMP_Text::GetMaterial(UnityEngine.Material mat)
    UnityEngine::Material* GetMaterial(UnityEngine::Material* mat);
    // protected override UnityEngine.Material[] GetMaterials(UnityEngine.Material[] mats)
    // Offset: 0x1274ED0
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Material[] TMP_Text::GetMaterials(UnityEngine.Material[] mats)
    ::Array<UnityEngine::Material*>* GetMaterials(::Array<UnityEngine::Material*>* mats);
    // protected override System.Void SetSharedMaterial(UnityEngine.Material mat)
    // Offset: 0x12750B4
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetSharedMaterial(UnityEngine.Material mat)
    void SetSharedMaterial(UnityEngine::Material* mat);
    // protected override UnityEngine.Material[] GetSharedMaterials()
    // Offset: 0x1275100
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Material[] TMP_Text::GetSharedMaterials()
    ::Array<UnityEngine::Material*>* GetSharedMaterials();
    // protected override System.Void SetSharedMaterials(UnityEngine.Material[] materials)
    // Offset: 0x12752B8
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetSharedMaterials(UnityEngine.Material[] materials)
    void SetSharedMaterials(::Array<UnityEngine::Material*>* materials);
    // protected override System.Void SetOutlineThickness(System.Single thickness)
    // Offset: 0x127573C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetOutlineThickness(System.Single thickness)
    void SetOutlineThickness(float thickness);
    // protected override System.Void SetFaceColor(UnityEngine.Color32 color)
    // Offset: 0x1275984
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetFaceColor(UnityEngine.Color32 color)
    void SetFaceColor(UnityEngine::Color32 color);
    // protected override System.Void SetOutlineColor(UnityEngine.Color32 color)
    // Offset: 0x1275AB0
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetOutlineColor(UnityEngine.Color32 color)
    void SetOutlineColor(UnityEngine::Color32 color);
    // protected override System.Void SetShaderDepth()
    // Offset: 0x1275BDC
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetShaderDepth()
    void SetShaderDepth();
    // protected override System.Void SetCulling()
    // Offset: 0x1275D30
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetCulling()
    void SetCulling();
    // protected override System.Single GetPaddingForMaterial(UnityEngine.Material mat)
    // Offset: 0x127610C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Single TMP_Text::GetPaddingForMaterial(UnityEngine.Material mat)
    float GetPaddingForMaterial(UnityEngine::Material* mat);
    // protected override System.Single GetPaddingForMaterial()
    // Offset: 0x12761E8
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Single TMP_Text::GetPaddingForMaterial()
    float GetPaddingForMaterial();
    // protected override System.Int32 SetArraySizes(TMPro.TMP_Text/UnicodeChar[] chars)
    // Offset: 0x1276324
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Int32 TMP_Text::SetArraySizes(TMPro.TMP_Text/UnicodeChar[] chars)
    int SetArraySizes(::Array<TMPro::TMP_Text::UnicodeChar>* chars);
    // public override System.Void ComputeMarginSize()
    // Offset: 0x1278158
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ComputeMarginSize()
    void ComputeMarginSize();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x1278284
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x12782C8
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x1278304
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x1278360
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // override System.Void InternalUpdate()
    // Offset: 0x12784D8
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::InternalUpdate()
    void InternalUpdate();
    // protected override System.Void GenerateTextMesh()
    // Offset: 0x1278A30
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::GenerateTextMesh()
    void GenerateTextMesh();
    // protected override UnityEngine.Vector3[] GetTextContainerLocalCorners()
    // Offset: 0x1280DE0
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Vector3[] TMP_Text::GetTextContainerLocalCorners()
    ::Array<UnityEngine::Vector3>* GetTextContainerLocalCorners();
    // protected override System.Void SetActiveSubMeshes(System.Boolean state)
    // Offset: 0x1280E94
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetActiveSubMeshes(System.Boolean state)
    void SetActiveSubMeshes(bool state);
    // protected override UnityEngine.Bounds GetCompoundBounds()
    // Offset: 0x1280FB4
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Bounds TMP_Text::GetCompoundBounds()
    UnityEngine::Bounds GetCompoundBounds();
    // protected override System.Void AdjustLineOffset(System.Int32 startIndex, System.Int32 endIndex, System.Single offset)
    // Offset: 0x12812CC
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::AdjustLineOffset(System.Int32 startIndex, System.Int32 endIndex, System.Single offset)
    void AdjustLineOffset(int startIndex, int endIndex, float offset);
    // public override UnityEngine.Material get_materialForRendering()
    // Offset: 0x12816E4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Material Graphic::get_materialForRendering()
    UnityEngine::Material* get_materialForRendering();
    // public override System.Boolean get_autoSizeTextContainer()
    // Offset: 0x1281754
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Boolean TMP_Text::get_autoSizeTextContainer()
    bool get_autoSizeTextContainer();
    // public override System.Void set_autoSizeTextContainer(System.Boolean value)
    // Offset: 0x128175C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::set_autoSizeTextContainer(System.Boolean value)
    void set_autoSizeTextContainer(bool value);
    // public override UnityEngine.Mesh get_mesh()
    // Offset: 0x1281814
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Mesh TMP_Text::get_mesh()
    UnityEngine::Mesh* get_mesh();
    // public UnityEngine.CanvasRenderer get_canvasRenderer()
    // Offset: 0x128181C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.CanvasRenderer Graphic::get_canvasRenderer()
    UnityEngine::CanvasRenderer* get_canvasRenderer();
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x12818C8
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0x1281948
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public override System.Void SetVerticesDirty()
    // Offset: 0x12819CC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetVerticesDirty()
    void SetVerticesDirty();
    // public override System.Void SetLayoutDirty()
    // Offset: 0x1281ACC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetLayoutDirty()
    void SetLayoutDirty();
    // public override System.Void SetMaterialDirty()
    // Offset: 0x1281BD8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetMaterialDirty()
    void SetMaterialDirty();
    // public override System.Void SetAllDirty()
    // Offset: 0x1281CD0
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetAllDirty()
    void SetAllDirty();
    // public override System.Void Rebuild(UnityEngine.UI.CanvasUpdate update)
    // Offset: 0x1281D28
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::Rebuild(UnityEngine.UI.CanvasUpdate update)
    void Rebuild(UnityEngine::UI::CanvasUpdate update);
    // public override UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0x1281E24
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: UnityEngine.Material MaskableGraphic::GetModifiedMaterial(UnityEngine.Material baseMaterial)
    UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial);
    // protected override System.Void UpdateMaterial()
    // Offset: 0x1281F80
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::UpdateMaterial()
    void UpdateMaterial();
    // public override System.Void RecalculateClipping()
    // Offset: 0x12820EC
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::RecalculateClipping()
    void RecalculateClipping();
    // public override System.Void RecalculateMasking()
    // Offset: 0x12820F4
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::RecalculateMasking()
    void RecalculateMasking();
    // public override System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0x128210C
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // public override System.Void UpdateMeshPadding()
    // Offset: 0x1282124
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateMeshPadding()
    void UpdateMeshPadding();
    // protected override System.Void InternalCrossFadeColor(UnityEngine.Color targetColor, System.Single duration, System.Boolean ignoreTimeScale, System.Boolean useAlpha)
    // Offset: 0x128223C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::InternalCrossFadeColor(UnityEngine.Color targetColor, System.Single duration, System.Boolean ignoreTimeScale, System.Boolean useAlpha)
    void InternalCrossFadeColor(UnityEngine::Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha);
    // protected override System.Void InternalCrossFadeAlpha(System.Single alpha, System.Single duration, System.Boolean ignoreTimeScale)
    // Offset: 0x1282320
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::InternalCrossFadeAlpha(System.Single alpha, System.Single duration, System.Boolean ignoreTimeScale)
    void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale);
    // public override System.Void ForceMeshUpdate()
    // Offset: 0x12823CC
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ForceMeshUpdate()
    void ForceMeshUpdate();
    // public override System.Void ForceMeshUpdate(System.Boolean ignoreInactive)
    // Offset: 0x12823D8
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ForceMeshUpdate(System.Boolean ignoreInactive)
    void ForceMeshUpdate(bool ignoreInactive);
    // public override TMPro.TMP_TextInfo GetTextInfo(System.String text)
    // Offset: 0x12823E8
    // Implemented from: TMPro.TMP_Text
    // Base method: TMPro.TMP_TextInfo TMP_Text::GetTextInfo(System.String text)
    TMPro::TMP_TextInfo* GetTextInfo(::Il2CppString* text);
    // public override System.Void ClearMesh()
    // Offset: 0x12824F0
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ClearMesh()
    void ClearMesh();
    // public override System.Void UpdateGeometry(UnityEngine.Mesh mesh, System.Int32 index)
    // Offset: 0x1282600
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateGeometry(UnityEngine.Mesh mesh, System.Int32 index)
    void UpdateGeometry(UnityEngine::Mesh* mesh, int index);
    // public override System.Void UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags flags)
    // Offset: 0x128268C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags flags)
    void UpdateVertexData(TMPro::TMP_VertexDataUpdateFlags flags);
    // public override System.Void UpdateVertexData()
    // Offset: 0x1282884
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateVertexData()
    void UpdateVertexData();
    // public System.Void .ctor()
    // Offset: 0x1282A7C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::.ctor()
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TextMeshProUGUI* New_ctor();
  }; // TMPro.TextMeshProUGUI
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextMeshProUGUI*, "TMPro", "TextMeshProUGUI");
#pragma pack(pop)
