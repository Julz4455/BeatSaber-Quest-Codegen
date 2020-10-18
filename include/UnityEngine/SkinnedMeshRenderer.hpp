// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SkinnedMeshRenderer
  class SkinnedMeshRenderer : public UnityEngine::Renderer {
    public:
    // public System.Void set_updateWhenOffscreen(System.Boolean value)
    // Offset: 0x198FE98
    void set_updateWhenOffscreen(bool value);
    // public System.Void set_bones(UnityEngine.Transform[] value)
    // Offset: 0x198FEE8
    void set_bones(::Array<UnityEngine::Transform*>* value);
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x198FF38
    void set_sharedMesh(UnityEngine::Mesh* value);
  }; // UnityEngine.SkinnedMeshRenderer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
#pragma pack(pop)
