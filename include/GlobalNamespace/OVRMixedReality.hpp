// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: OVRManager
#include "GlobalNamespace/OVRManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRComposition
  class OVRComposition;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: OVRMixedReality
  // [] Offset: FFFFFFFF
  class OVRMixedReality : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRMixedReality
    OVRMixedReality() noexcept {}
    // Get static field: static public System.Boolean useFakeExternalCamera
    static bool _get_useFakeExternalCamera();
    // Set static field: static public System.Boolean useFakeExternalCamera
    static void _set_useFakeExternalCamera(bool value);
    // Get static field: static public UnityEngine.Vector3 fakeCameraFloorLevelPosition
    static UnityEngine::Vector3 _get_fakeCameraFloorLevelPosition();
    // Set static field: static public UnityEngine.Vector3 fakeCameraFloorLevelPosition
    static void _set_fakeCameraFloorLevelPosition(UnityEngine::Vector3 value);
    // Get static field: static public UnityEngine.Vector3 fakeCameraEyeLevelPosition
    static UnityEngine::Vector3 _get_fakeCameraEyeLevelPosition();
    // Set static field: static public UnityEngine.Vector3 fakeCameraEyeLevelPosition
    static void _set_fakeCameraEyeLevelPosition(UnityEngine::Vector3 value);
    // Get static field: static public UnityEngine.Quaternion fakeCameraRotation
    static UnityEngine::Quaternion _get_fakeCameraRotation();
    // Set static field: static public UnityEngine.Quaternion fakeCameraRotation
    static void _set_fakeCameraRotation(UnityEngine::Quaternion value);
    // Get static field: static public System.Single fakeCameraFov
    static float _get_fakeCameraFov();
    // Set static field: static public System.Single fakeCameraFov
    static void _set_fakeCameraFov(float value);
    // Get static field: static public System.Single fakeCameraAspect
    static float _get_fakeCameraAspect();
    // Set static field: static public System.Single fakeCameraAspect
    static void _set_fakeCameraAspect(float value);
    // Get static field: static public OVRComposition currentComposition
    static GlobalNamespace::OVRComposition* _get_currentComposition();
    // Set static field: static public OVRComposition currentComposition
    static void _set_currentComposition(GlobalNamespace::OVRComposition* value);
    // static public System.Void Update(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera, OVRManager/CompositionMethod compositionMethod, System.Boolean useDynamicLighting, OVRManager/CameraDevice cameraDevice, OVRManager/DepthQuality depthQuality, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject)
    // Offset: 0x122F490
    static void Update(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera, GlobalNamespace::OVRManager::CompositionMethod compositionMethod, bool useDynamicLighting, GlobalNamespace::OVRManager::CameraDevice cameraDevice, GlobalNamespace::OVRManager::DepthQuality depthQuality, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityBackgroundCameraGameObject, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityForegroundCameraGameObject);
    // static public System.Void Cleanup()
    // Offset: 0x122FCF4
    static void Cleanup();
    // static public System.Void RecenterPose()
    // Offset: 0x122FEF8
    static void RecenterPose();
    // static private System.Void .cctor()
    // Offset: 0x122FFA4
    static void _cctor();
  }; // OVRMixedReality
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedReality*, "", "OVRMixedReality");
#pragma pack(pop)
