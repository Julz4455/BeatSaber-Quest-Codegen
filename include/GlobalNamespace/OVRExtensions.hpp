// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRTracker
#include "GlobalNamespace/OVRTracker.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPose
  struct OVRPose;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class OVRExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRExtensions
    OVRExtensions() noexcept {}
    // static public OVRPose ToTrackingSpacePose(UnityEngine.Transform transform, UnityEngine.Camera camera)
    // Offset: 0x11AC498
    static GlobalNamespace::OVRPose ToTrackingSpacePose(UnityEngine::Transform* transform, UnityEngine::Camera* camera);
    // static public OVRPose ToWorldSpacePose(OVRPose trackingSpacePose)
    // Offset: 0x11A6F78
    static GlobalNamespace::OVRPose ToWorldSpacePose(GlobalNamespace::OVRPose trackingSpacePose);
    // static public OVRPose ToHeadSpacePose(UnityEngine.Transform transform, UnityEngine.Camera camera)
    // Offset: 0x11AC604
    static GlobalNamespace::OVRPose ToHeadSpacePose(UnityEngine::Transform* transform, UnityEngine::Camera* camera);
    // static public OVRPose ToOVRPose(UnityEngine.Transform t, System.Boolean isLocal)
    // Offset: 0x11AC69C
    static GlobalNamespace::OVRPose ToOVRPose(UnityEngine::Transform* t, bool isLocal);
    // static public System.Void FromOVRPose(UnityEngine.Transform t, OVRPose pose, System.Boolean isLocal)
    // Offset: 0x11A55D8
    static void FromOVRPose(UnityEngine::Transform* t, GlobalNamespace::OVRPose pose, bool isLocal);
    // static public OVRPose ToOVRPose(OVRPlugin/Posef p)
    // Offset: 0x11A7144
    static GlobalNamespace::OVRPose ToOVRPose(GlobalNamespace::OVRPlugin::Posef p);
    // static public OVRTracker/Frustum ToFrustum(OVRPlugin/Frustumf f)
    // Offset: 0x11AC730
    static GlobalNamespace::OVRTracker::Frustum ToFrustum(GlobalNamespace::OVRPlugin::Frustumf f);
    // static public UnityEngine.Color FromColorf(OVRPlugin/Colorf c)
    // Offset: 0x11AC744
    static UnityEngine::Color FromColorf(GlobalNamespace::OVRPlugin::Colorf c);
    // static public OVRPlugin/Colorf ToColorf(UnityEngine.Color c)
    // Offset: 0x11AC748
    static GlobalNamespace::OVRPlugin::Colorf ToColorf(UnityEngine::Color c);
    // static public UnityEngine.Vector3 FromVector3f(OVRPlugin/Vector3f v)
    // Offset: 0x11A418C
    static UnityEngine::Vector3 FromVector3f(GlobalNamespace::OVRPlugin::Vector3f v);
    // static public UnityEngine.Vector3 FromFlippedXVector3f(OVRPlugin/Vector3f v)
    // Offset: 0x11AC74C
    static UnityEngine::Vector3 FromFlippedXVector3f(GlobalNamespace::OVRPlugin::Vector3f v);
    // static public UnityEngine.Vector3 FromFlippedZVector3f(OVRPlugin/Vector3f v)
    // Offset: 0x11A3B64
    static UnityEngine::Vector3 FromFlippedZVector3f(GlobalNamespace::OVRPlugin::Vector3f v);
    // static public OVRPlugin/Vector3f ToVector3f(UnityEngine.Vector3 v)
    // Offset: 0x11AC754
    static GlobalNamespace::OVRPlugin::Vector3f ToVector3f(UnityEngine::Vector3 v);
    // static public OVRPlugin/Vector3f ToFlippedXVector3f(UnityEngine.Vector3 v)
    // Offset: 0x11AC758
    static GlobalNamespace::OVRPlugin::Vector3f ToFlippedXVector3f(UnityEngine::Vector3 v);
    // static public OVRPlugin/Vector3f ToFlippedZVector3f(UnityEngine.Vector3 v)
    // Offset: 0x11A3C64
    static GlobalNamespace::OVRPlugin::Vector3f ToFlippedZVector3f(UnityEngine::Vector3 v);
    // static public UnityEngine.Quaternion FromQuatf(OVRPlugin/Quatf q)
    // Offset: 0x11AC760
    static UnityEngine::Quaternion FromQuatf(GlobalNamespace::OVRPlugin::Quatf q);
    // static public UnityEngine.Quaternion FromFlippedXQuatf(OVRPlugin/Quatf q)
    // Offset: 0x11AC764
    static UnityEngine::Quaternion FromFlippedXQuatf(GlobalNamespace::OVRPlugin::Quatf q);
    // static public UnityEngine.Quaternion FromFlippedZQuatf(OVRPlugin/Quatf q)
    // Offset: 0x11AC770
    static UnityEngine::Quaternion FromFlippedZQuatf(GlobalNamespace::OVRPlugin::Quatf q);
    // static public OVRPlugin/Quatf ToQuatf(UnityEngine.Quaternion q)
    // Offset: 0x11AC77C
    static GlobalNamespace::OVRPlugin::Quatf ToQuatf(UnityEngine::Quaternion q);
    // static public OVRPlugin/Quatf ToFlippedXQuatf(UnityEngine.Quaternion q)
    // Offset: 0x11AC780
    static GlobalNamespace::OVRPlugin::Quatf ToFlippedXQuatf(UnityEngine::Quaternion q);
    // static public OVRPlugin/Quatf ToFlippedZQuatf(UnityEngine.Quaternion q)
    // Offset: 0x11AC78C
    static GlobalNamespace::OVRPlugin::Quatf ToFlippedZQuatf(UnityEngine::Quaternion q);
    // static public OVR.OpenVR.HmdMatrix34_t ConvertToHMDMatrix34(UnityEngine.Matrix4x4 m)
    // Offset: 0x11AC798
    static OVR::OpenVR::HmdMatrix34_t ConvertToHMDMatrix34(UnityEngine::Matrix4x4 m);
    // static public UnityEngine.Transform FindChildRecursive(UnityEngine.Transform parent, System.String name)
    // Offset: 0x11AC928
    static UnityEngine::Transform* FindChildRecursive(UnityEngine::Transform* parent, ::Il2CppString* name);
  }; // OVRExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRExtensions*, "", "OVRExtensions");
