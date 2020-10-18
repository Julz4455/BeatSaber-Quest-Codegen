// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRMesh
  class OVRMesh;
  // Forward declaring type: OVRSkeleton
  class OVRSkeleton;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRMeshRenderer
  class OVRMeshRenderer : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider
    class IOVRMeshRendererDataProvider;
    // Nested type: GlobalNamespace::OVRMeshRenderer::MeshRendererData
    struct MeshRendererData;
    // Nested type: GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior
    struct ConfidenceBehavior;
    // Nested type: GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior
    struct SystemGestureBehavior;
    // Autogenerated type: OVRMeshRenderer/ConfidenceBehavior
    struct ConfidenceBehavior : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: ConfidenceBehavior
      constexpr ConfidenceBehavior(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRMeshRenderer/ConfidenceBehavior None
      static constexpr const int None = 0;
      // Get static field: static public OVRMeshRenderer/ConfidenceBehavior None
      static GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior _get_None();
      // Set static field: static public OVRMeshRenderer/ConfidenceBehavior None
      static void _set_None(GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior value);
      // static field const value: static public OVRMeshRenderer/ConfidenceBehavior ToggleRenderer
      static constexpr const int ToggleRenderer = 1;
      // Get static field: static public OVRMeshRenderer/ConfidenceBehavior ToggleRenderer
      static GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior _get_ToggleRenderer();
      // Set static field: static public OVRMeshRenderer/ConfidenceBehavior ToggleRenderer
      static void _set_ToggleRenderer(GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior value);
    }; // OVRMeshRenderer/ConfidenceBehavior
    // Autogenerated type: OVRMeshRenderer/SystemGestureBehavior
    struct SystemGestureBehavior : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: SystemGestureBehavior
      constexpr SystemGestureBehavior(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRMeshRenderer/SystemGestureBehavior None
      static constexpr const int None = 0;
      // Get static field: static public OVRMeshRenderer/SystemGestureBehavior None
      static GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior _get_None();
      // Set static field: static public OVRMeshRenderer/SystemGestureBehavior None
      static void _set_None(GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior value);
      // static field const value: static public OVRMeshRenderer/SystemGestureBehavior SwapMaterial
      static constexpr const int SwapMaterial = 1;
      // Get static field: static public OVRMeshRenderer/SystemGestureBehavior SwapMaterial
      static GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior _get_SwapMaterial();
      // Set static field: static public OVRMeshRenderer/SystemGestureBehavior SwapMaterial
      static void _set_SwapMaterial(GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior value);
    }; // OVRMeshRenderer/SystemGestureBehavior
    // private OVRMeshRenderer/IOVRMeshRendererDataProvider _dataProvider
    // Offset: 0x18
    GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider* dataProvider;
    // private OVRMesh _ovrMesh
    // Offset: 0x20
    GlobalNamespace::OVRMesh* ovrMesh;
    // private OVRSkeleton _ovrSkeleton
    // Offset: 0x28
    GlobalNamespace::OVRSkeleton* ovrSkeleton;
    // private OVRMeshRenderer/ConfidenceBehavior _confidenceBehavior
    // Offset: 0x30
    GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior confidenceBehavior;
    // private OVRMeshRenderer/SystemGestureBehavior _systemGestureBehavior
    // Offset: 0x34
    GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior systemGestureBehavior;
    // private UnityEngine.Material _systemGestureMaterial
    // Offset: 0x38
    UnityEngine::Material* systemGestureMaterial;
    // private UnityEngine.Material _originalMaterial
    // Offset: 0x40
    UnityEngine::Material* originalMaterial;
    // private UnityEngine.SkinnedMeshRenderer _skinnedMeshRenderer
    // Offset: 0x48
    UnityEngine::SkinnedMeshRenderer* skinnedMeshRenderer;
    // private System.Boolean <IsInitialized>k__BackingField
    // Offset: 0x50
    bool IsInitialized;
    // private System.Boolean <IsDataValid>k__BackingField
    // Offset: 0x51
    bool IsDataValid;
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Offset: 0x52
    bool IsDataHighConfidence;
    // private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    // Offset: 0x53
    bool ShouldUseSystemGestureMaterial;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_IsInitialized()
    // Offset: 0x13CDFB0
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0x13CDFB8
    void set_IsInitialized(bool value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0x13CDFC4
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x13CDFCC
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x13CDFD8
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x13CDFE0
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_ShouldUseSystemGestureMaterial()
    // Offset: 0x13CDFEC
    bool get_ShouldUseSystemGestureMaterial();
    // private System.Void set_ShouldUseSystemGestureMaterial(System.Boolean value)
    // Offset: 0x13CDFF4
    void set_ShouldUseSystemGestureMaterial(bool value);
    // private System.Void Awake()
    // Offset: 0x13CE000
    void Awake();
    // private System.Void Start()
    // Offset: 0x13CE13C
    void Start();
    // private System.Void Initialize()
    // Offset: 0x13CE1D0
    void Initialize();
    // private System.Void Update()
    // Offset: 0x13CE69C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x13CE978
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRMeshRenderer* New_ctor();
  }; // OVRMeshRenderer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer*, "", "OVRMeshRenderer");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior, "", "OVRMeshRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior, "", "OVRMeshRenderer/SystemGestureBehavior");
#pragma pack(pop)
