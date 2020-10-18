// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_RenderModel
#include "GlobalNamespace/SteamVR_RenderModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_RenderModel/RenderModel
  class SteamVR_RenderModel::RenderModel : public ::Il2CppObject {
    public:
    // private UnityEngine.Mesh <mesh>k__BackingField
    // Offset: 0x10
    UnityEngine::Mesh* mesh;
    // private UnityEngine.Material <material>k__BackingField
    // Offset: 0x18
    UnityEngine::Material* material;
    // public System.Void .ctor(UnityEngine.Mesh mesh, UnityEngine.Material material)
    // Offset: 0x1242F54
    static SteamVR_RenderModel::RenderModel* New_ctor(UnityEngine::Mesh* mesh, UnityEngine::Material* material);
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0x12441C0
    UnityEngine::Mesh* get_mesh();
    // private System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0x12441C8
    void set_mesh(UnityEngine::Mesh* value);
    // public UnityEngine.Material get_material()
    // Offset: 0x12441D0
    UnityEngine::Material* get_material();
    // private System.Void set_material(UnityEngine.Material value)
    // Offset: 0x12441D8
    void set_material(UnityEngine::Material* value);
  }; // SteamVR_RenderModel/RenderModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_RenderModel::RenderModel*, "", "SteamVR_RenderModel/RenderModel");
#pragma pack(pop)
