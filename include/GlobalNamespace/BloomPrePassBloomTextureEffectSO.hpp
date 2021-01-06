// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassEffectSO
#include "GlobalNamespace/BloomPrePassEffectSO.hpp"
// Including type: PyramidBloomRendererSO/Pass
#include "GlobalNamespace/PyramidBloomRendererSO_Pass.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: PyramidBloomRendererSO because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  // Autogenerated type: BloomPrePassBloomTextureEffectSO
  // [] Offset: FFFFFFFF
  class BloomPrePassBloomTextureEffectSO : public GlobalNamespace::BloomPrePassEffectSO {
    public:
    // [SpaceAttribute] Offset: 0xDB15E4
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x2C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x30
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _downBloomIntensityOffset
    // Size: 0x4
    // Offset: 0x34
    float downBloomIntensityOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _uniformPyramidWeights
    // Size: 0x1
    // Offset: 0x38
    bool uniformPyramidWeights;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: uniformPyramidWeights and: pyramidWeightsParam
    char __padding3[0x3] = {};
    // private System.Single _pyramidWeightsParam
    // Size: 0x4
    // Offset: 0x3C
    float pyramidWeightsParam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private PyramidBloomRendererSO/Pass _prefilterPass
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::PyramidBloomRendererSO::Pass prefilterPass;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _downsamplePass
    // Size: 0x4
    // Offset: 0x44
    GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _upsamplePass
    // Size: 0x4
    // Offset: 0x48
    GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _finalUpsamplePass
    // Size: 0x4
    // Offset: 0x4C
    GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // [SpaceAttribute] Offset: 0xDB169C
    // private PyramidBloomRendererSO _bloomRenderer
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PyramidBloomRendererSO* bloomRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PyramidBloomRendererSO*) == 0x8);
    // Creating value type constructor for type: BloomPrePassBloomTextureEffectSO
    BloomPrePassBloomTextureEffectSO(float radius_ = {}, float intensity_ = {}, float downBloomIntensityOffset_ = {}, bool uniformPyramidWeights_ = {}, float pyramidWeightsParam_ = {}, GlobalNamespace::PyramidBloomRendererSO::Pass prefilterPass_ = {}, GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass_ = {}, GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass_ = {}, GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass_ = {}, GlobalNamespace::PyramidBloomRendererSO* bloomRenderer_ = {}) noexcept : radius{radius_}, intensity{intensity_}, downBloomIntensityOffset{downBloomIntensityOffset_}, uniformPyramidWeights{uniformPyramidWeights_}, pyramidWeightsParam{pyramidWeightsParam_}, prefilterPass{prefilterPass_}, downsamplePass{downsamplePass_}, upsamplePass{upsamplePass_}, finalUpsamplePass{finalUpsamplePass_}, bloomRenderer{bloomRenderer_} {}
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x1987FB4
    // Implemented from: TextureEffectSO
    // Base method: System.Void TextureEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    void Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // public System.Void .ctor()
    // Offset: 0x1988008
    // Implemented from: BloomPrePassEffectSO
    // Base method: System.Void BloomPrePassEffectSO::.ctor()
    // Base method: System.Void TextureEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBloomTextureEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassBloomTextureEffectSO").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBloomTextureEffectSO*, creationType>()));
    }
  }; // BloomPrePassBloomTextureEffectSO
  static check_size<sizeof(BloomPrePassBloomTextureEffectSO), 80 + sizeof(GlobalNamespace::PyramidBloomRendererSO*)> __GlobalNamespace_BloomPrePassBloomTextureEffectSOSizeCheck;
  static_assert(sizeof(BloomPrePassBloomTextureEffectSO) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBloomTextureEffectSO*, "", "BloomPrePassBloomTextureEffectSO");
#pragma pack(pop)
