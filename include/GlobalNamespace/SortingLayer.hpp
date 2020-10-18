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
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SortingLayer
  class SortingLayer : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Renderer _renderer
    // Offset: 0x18
    UnityEngine::Renderer* renderer;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Renderer get_renderer()
    // Offset: 0x21EC680
    UnityEngine::Renderer* get_renderer();
    // private System.Void Reset()
    // Offset: 0x21EC688
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x21EC6E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SortingLayer* New_ctor();
  }; // SortingLayer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SortingLayer*, "", "SortingLayer");
#pragma pack(pop)
