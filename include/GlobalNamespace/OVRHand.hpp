// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRSkeleton/IOVRSkeletonDataProvider
#include "GlobalNamespace/OVRSkeleton_IOVRSkeletonDataProvider.hpp"
// Including type: OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider
#include "GlobalNamespace/OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider.hpp"
// Including type: OVRMesh/IOVRMeshDataProvider
#include "GlobalNamespace/OVRMesh_IOVRMeshDataProvider.hpp"
// Including type: OVRMeshRenderer/IOVRMeshRendererDataProvider
#include "GlobalNamespace/OVRMeshRenderer_IOVRMeshRendererDataProvider.hpp"
// Including type: OVRPlugin/HandState
#include "GlobalNamespace/OVRPlugin_HandState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: TrackingConfidence because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRHand
  class OVRHand : public UnityEngine::MonoBehaviour, public GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider, public GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider, public GlobalNamespace::OVRMesh::IOVRMeshDataProvider, public GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider {
    public:
    // Nested type: GlobalNamespace::OVRHand::Hand
    struct Hand;
    // Nested type: GlobalNamespace::OVRHand::HandFinger
    struct HandFinger;
    // Nested type: GlobalNamespace::OVRHand::TrackingConfidence
    struct TrackingConfidence;
    // Autogenerated type: OVRHand/Hand
    struct Hand : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public OVRHand/Hand None
      static constexpr const int None = -1;
      // Get static field: static public OVRHand/Hand None
      static GlobalNamespace::OVRHand::Hand _get_None();
      // Set static field: static public OVRHand/Hand None
      static void _set_None(GlobalNamespace::OVRHand::Hand value);
      // static field const value: static public OVRHand/Hand HandLeft
      static constexpr const int HandLeft = 0;
      // Get static field: static public OVRHand/Hand HandLeft
      static GlobalNamespace::OVRHand::Hand _get_HandLeft();
      // Set static field: static public OVRHand/Hand HandLeft
      static void _set_HandLeft(GlobalNamespace::OVRHand::Hand value);
      // static field const value: static public OVRHand/Hand HandRight
      static constexpr const int HandRight = 1;
      // Get static field: static public OVRHand/Hand HandRight
      static GlobalNamespace::OVRHand::Hand _get_HandRight();
      // Set static field: static public OVRHand/Hand HandRight
      static void _set_HandRight(GlobalNamespace::OVRHand::Hand value);
      // Creating value type constructor for type: Hand
      Hand(int value_ = {}) : value{value_} {}
    }; // OVRHand/Hand
    // Autogenerated type: OVRHand/TrackingConfidence
    struct TrackingConfidence : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public OVRHand/TrackingConfidence Low
      static constexpr const int Low = 0;
      // Get static field: static public OVRHand/TrackingConfidence Low
      static GlobalNamespace::OVRHand::TrackingConfidence _get_Low();
      // Set static field: static public OVRHand/TrackingConfidence Low
      static void _set_Low(GlobalNamespace::OVRHand::TrackingConfidence value);
      // static field const value: static public OVRHand/TrackingConfidence High
      static constexpr const int High = 1065353216;
      // Get static field: static public OVRHand/TrackingConfidence High
      static GlobalNamespace::OVRHand::TrackingConfidence _get_High();
      // Set static field: static public OVRHand/TrackingConfidence High
      static void _set_High(GlobalNamespace::OVRHand::TrackingConfidence value);
      // Creating value type constructor for type: TrackingConfidence
      TrackingConfidence(int value_ = {}) : value{value_} {}
    }; // OVRHand/TrackingConfidence
    // private OVRHand/Hand HandType
    // Offset: 0x18
    GlobalNamespace::OVRHand::Hand HandType;
    // private UnityEngine.Transform _pointerPoseRoot
    // Offset: 0x20
    UnityEngine::Transform* pointerPoseRoot;
    // private UnityEngine.GameObject _pointerPoseGO
    // Offset: 0x28
    UnityEngine::GameObject* pointerPoseGO;
    // private OVRPlugin/HandState _handState
    // Offset: 0x30
    GlobalNamespace::OVRPlugin::HandState handState;
    // private System.Boolean <IsDataValid>k__BackingField
    // Offset: 0xA8
    bool IsDataValid;
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Offset: 0xA9
    bool IsDataHighConfidence;
    // private System.Boolean <IsTracked>k__BackingField
    // Offset: 0xAA
    bool IsTracked;
    // private System.Boolean <IsSystemGestureInProgress>k__BackingField
    // Offset: 0xAB
    bool IsSystemGestureInProgress;
    // private System.Boolean <IsPointerPoseValid>k__BackingField
    // Offset: 0xAC
    bool IsPointerPoseValid;
    // private UnityEngine.Transform <PointerPose>k__BackingField
    // Offset: 0xB0
    UnityEngine::Transform* PointerPose;
    // private System.Single <HandScale>k__BackingField
    // Offset: 0xB8
    float HandScale;
    // private OVRHand/TrackingConfidence <HandConfidence>k__BackingField
    // Offset: 0xBC
    GlobalNamespace::OVRHand::TrackingConfidence HandConfidence;
    // public System.Boolean get_IsDataValid()
    // Offset: 0xDC6C14
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0xDC6C1C
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0xDC6C28
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0xDC6C30
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_IsTracked()
    // Offset: 0xDC6C3C
    bool get_IsTracked();
    // private System.Void set_IsTracked(System.Boolean value)
    // Offset: 0xDC6C44
    void set_IsTracked(bool value);
    // public System.Boolean get_IsSystemGestureInProgress()
    // Offset: 0xDC6C50
    bool get_IsSystemGestureInProgress();
    // private System.Void set_IsSystemGestureInProgress(System.Boolean value)
    // Offset: 0xDC6C58
    void set_IsSystemGestureInProgress(bool value);
    // public System.Boolean get_IsPointerPoseValid()
    // Offset: 0xDC6C64
    bool get_IsPointerPoseValid();
    // private System.Void set_IsPointerPoseValid(System.Boolean value)
    // Offset: 0xDC6C6C
    void set_IsPointerPoseValid(bool value);
    // public UnityEngine.Transform get_PointerPose()
    // Offset: 0xDC6C78
    UnityEngine::Transform* get_PointerPose();
    // private System.Void set_PointerPose(UnityEngine.Transform value)
    // Offset: 0xDC6C80
    void set_PointerPose(UnityEngine::Transform* value);
    // public System.Single get_HandScale()
    // Offset: 0xDC6C88
    float get_HandScale();
    // private System.Void set_HandScale(System.Single value)
    // Offset: 0xDC6C90
    void set_HandScale(float value);
    // public OVRHand/TrackingConfidence get_HandConfidence()
    // Offset: 0xDC6C98
    GlobalNamespace::OVRHand::TrackingConfidence get_HandConfidence();
    // private System.Void set_HandConfidence(OVRHand/TrackingConfidence value)
    // Offset: 0xDC6CA0
    void set_HandConfidence(GlobalNamespace::OVRHand::TrackingConfidence value);
    // private System.Void Awake()
    // Offset: 0xDC6CA8
    void Awake();
    // private System.Void Update()
    // Offset: 0xDC6F58
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0xDC6F60
    void FixedUpdate();
    // private System.Void GetHandState(OVRPlugin/Step step)
    // Offset: 0xDC6DA0
    void GetHandState(GlobalNamespace::OVRPlugin::Step step);
    // public System.Boolean GetFingerIsPinching(OVRHand/HandFinger finger)
    // Offset: 0xDC6F68
    bool GetFingerIsPinching(GlobalNamespace::OVRHand::HandFinger finger);
    // public System.Single GetFingerPinchStrength(OVRHand/HandFinger finger)
    // Offset: 0xDC6F90
    float GetFingerPinchStrength(GlobalNamespace::OVRHand::HandFinger finger);
    // public OVRHand/TrackingConfidence GetFingerConfidence(OVRHand/HandFinger finger)
    // Offset: 0xDC6FD8
    GlobalNamespace::OVRHand::TrackingConfidence GetFingerConfidence(GlobalNamespace::OVRHand::HandFinger finger);
    // private OVRSkeleton/SkeletonType OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType()
    // Offset: 0xDC7024
    // Implemented from: OVRSkeleton/IOVRSkeletonDataProvider
    // Base method: OVRSkeleton/SkeletonType IOVRSkeletonDataProvider::GetSkeletonType()
    GlobalNamespace::OVRSkeleton::SkeletonType GlobalNamespace_OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType();
    // private OVRSkeleton/SkeletonPoseData OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData()
    // Offset: 0xDC703C
    // Implemented from: OVRSkeleton/IOVRSkeletonDataProvider
    // Base method: OVRSkeleton/SkeletonPoseData IOVRSkeletonDataProvider::GetSkeletonPoseData()
    GlobalNamespace::OVRSkeleton::SkeletonPoseData GlobalNamespace_OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData();
    // private OVRSkeletonRenderer/SkeletonRendererData OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData()
    // Offset: 0xDC70D4
    // Implemented from: OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider
    // Base method: OVRSkeletonRenderer/SkeletonRendererData IOVRSkeletonRendererDataProvider::GetSkeletonRendererData()
    GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData GlobalNamespace_OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData();
    // private OVRMesh/MeshType OVRMesh.IOVRMeshDataProvider.GetMeshType()
    // Offset: 0xDC7120
    // Implemented from: OVRMesh/IOVRMeshDataProvider
    // Base method: OVRMesh/MeshType IOVRMeshDataProvider::GetMeshType()
    GlobalNamespace::OVRMesh::MeshType GlobalNamespace_OVRMesh_IOVRMeshDataProvider_GetMeshType();
    // private OVRMeshRenderer/MeshRendererData OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData()
    // Offset: 0xDC7138
    // Implemented from: OVRMeshRenderer/IOVRMeshRendererDataProvider
    // Base method: OVRMeshRenderer/MeshRendererData IOVRMeshRendererDataProvider::GetMeshRendererData()
    GlobalNamespace::OVRMeshRenderer::MeshRendererData GlobalNamespace_OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData();
    // public System.Void .ctor()
    // Offset: 0xDC7188
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRHand* New_ctor();
  }; // OVRHand
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHand*, "", "OVRHand");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHand::Hand, "", "OVRHand/Hand");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHand::TrackingConfidence, "", "OVRHand/TrackingConfidence");
#pragma pack(pop)
