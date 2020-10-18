// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipeline
  class RenderPipeline;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.RenderPipelineAsset
  class RenderPipelineAsset : public UnityEngine::ScriptableObject {
    public:
    // UnityEngine.Rendering.RenderPipeline InternalCreatePipeline()
    // Offset: 0x198B5A0
    UnityEngine::Rendering::RenderPipeline* InternalCreatePipeline();
    // public System.String[] get_renderingLayerMaskNames()
    // Offset: 0x198B890
    ::Array<::Il2CppString*>* get_renderingLayerMaskNames();
    // public UnityEngine.Material get_defaultMaterial()
    // Offset: 0x198B898
    UnityEngine::Material* get_defaultMaterial();
    // public UnityEngine.Shader get_autodeskInteractiveShader()
    // Offset: 0x198B8A0
    UnityEngine::Shader* get_autodeskInteractiveShader();
    // public UnityEngine.Shader get_autodeskInteractiveTransparentShader()
    // Offset: 0x198B8A8
    UnityEngine::Shader* get_autodeskInteractiveTransparentShader();
    // public UnityEngine.Shader get_autodeskInteractiveMaskedShader()
    // Offset: 0x198B8B0
    UnityEngine::Shader* get_autodeskInteractiveMaskedShader();
    // public UnityEngine.Shader get_terrainDetailLitShader()
    // Offset: 0x198B8B8
    UnityEngine::Shader* get_terrainDetailLitShader();
    // public UnityEngine.Shader get_terrainDetailGrassShader()
    // Offset: 0x198B8C0
    UnityEngine::Shader* get_terrainDetailGrassShader();
    // public UnityEngine.Shader get_terrainDetailGrassBillboardShader()
    // Offset: 0x198B8C8
    UnityEngine::Shader* get_terrainDetailGrassBillboardShader();
    // public UnityEngine.Material get_defaultParticleMaterial()
    // Offset: 0x198B8D0
    UnityEngine::Material* get_defaultParticleMaterial();
    // public UnityEngine.Material get_defaultLineMaterial()
    // Offset: 0x198B8D8
    UnityEngine::Material* get_defaultLineMaterial();
    // public UnityEngine.Material get_defaultTerrainMaterial()
    // Offset: 0x198B8E0
    UnityEngine::Material* get_defaultTerrainMaterial();
    // public UnityEngine.Material get_defaultUIMaterial()
    // Offset: 0x198B8E8
    UnityEngine::Material* get_defaultUIMaterial();
    // public UnityEngine.Material get_defaultUIOverdrawMaterial()
    // Offset: 0x198B8F0
    UnityEngine::Material* get_defaultUIOverdrawMaterial();
    // public UnityEngine.Material get_defaultUIETC1SupportedMaterial()
    // Offset: 0x198B8F8
    UnityEngine::Material* get_defaultUIETC1SupportedMaterial();
    // public UnityEngine.Material get_default2DMaterial()
    // Offset: 0x198B900
    UnityEngine::Material* get_default2DMaterial();
    // public UnityEngine.Shader get_defaultShader()
    // Offset: 0x198B908
    UnityEngine::Shader* get_defaultShader();
    // public UnityEngine.Shader get_defaultSpeedTree7Shader()
    // Offset: 0x198B910
    UnityEngine::Shader* get_defaultSpeedTree7Shader();
    // public UnityEngine.Shader get_defaultSpeedTree8Shader()
    // Offset: 0x198B918
    UnityEngine::Shader* get_defaultSpeedTree8Shader();
    // protected UnityEngine.Rendering.RenderPipeline CreatePipeline()
    // Offset: 0xFFFFFFFF
    UnityEngine::Rendering::RenderPipeline* CreatePipeline();
    // protected System.Void OnValidate()
    // Offset: 0x198B920
    void OnValidate();
    // protected System.Void OnDisable()
    // Offset: 0x198BBC8
    void OnDisable();
    // protected System.Void .ctor()
    // Offset: 0x198BC24
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RenderPipelineAsset* New_ctor();
  }; // UnityEngine.Rendering.RenderPipelineAsset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipelineAsset*, "UnityEngine.Rendering", "RenderPipelineAsset");
#pragma pack(pop)
