// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DirectionalESMLight
  class DirectionalESMLight : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _blurSize
    // Offset: 0x18
    float blurSize;
    // private UnityEngine.RenderTexture _esmShadowTexture
    // Offset: 0x20
    UnityEngine::RenderTexture* esmShadowTexture;
    // private UnityEngine.Rendering.CommandBuffer _copyBuffer
    // Offset: 0x28
    UnityEngine::Rendering::CommandBuffer* copyBuffer;
    // private UnityEngine.Material _esmBlitMaterial
    // Offset: 0x30
    UnityEngine::Material* esmBlitMaterial;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0xF60154
    void OnEnable();
    // protected System.Void Update()
    // Offset: 0xF602B0
    void Update();
    // protected System.Void OnDisable()
    // Offset: 0xF6067C
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0xF60734
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DirectionalESMLight* New_ctor();
  }; // DirectionalESMLight
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalESMLight*, "", "DirectionalESMLight");
#pragma pack(pop)
