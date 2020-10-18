// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Valve.VR.ETrackingUniverseOrigin
#include "Valve/VR/ETrackingUniverseOrigin.hpp"
// Including type: Valve.VR.EVREye
#include "Valve/VR/EVREye.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_ExternalCamera
  class SteamVR_ExternalCamera;
  // Forward declaring type: SteamVR_Camera
  class SteamVR_Camera;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitForEndOfFrame
  class WaitForEndOfFrame;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Render
  class SteamVR_Render : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_Render::$RenderLoop$d__29
    class $RenderLoop$d__29;
    // public System.Boolean pauseGameWhenDashboardIsVisible
    // Offset: 0x18
    bool pauseGameWhenDashboardIsVisible;
    // public System.Boolean lockPhysicsUpdateRateToRenderFrequency
    // Offset: 0x19
    bool lockPhysicsUpdateRateToRenderFrequency;
    // public SteamVR_ExternalCamera externalCamera
    // Offset: 0x20
    GlobalNamespace::SteamVR_ExternalCamera* externalCamera;
    // public System.String externalCameraConfigPath
    // Offset: 0x28
    ::Il2CppString* externalCameraConfigPath;
    // public Valve.VR.ETrackingUniverseOrigin trackingSpace
    // Offset: 0x30
    Valve::VR::ETrackingUniverseOrigin trackingSpace;
    // private SteamVR_Camera[] cameras
    // Offset: 0x38
    ::Array<GlobalNamespace::SteamVR_Camera*>* cameras;
    // public Valve.VR.TrackedDevicePose_t[] poses
    // Offset: 0x40
    ::Array<Valve::VR::TrackedDevicePose_t>* poses;
    // public Valve.VR.TrackedDevicePose_t[] gamePoses
    // Offset: 0x48
    ::Array<Valve::VR::TrackedDevicePose_t>* gamePoses;
    // private UnityEngine.WaitForEndOfFrame waitForEndOfFrame
    // Offset: 0x50
    UnityEngine::WaitForEndOfFrame* waitForEndOfFrame;
    // private System.Single sceneResolutionScale
    // Offset: 0x58
    float sceneResolutionScale;
    // private System.Single timeScale
    // Offset: 0x5C
    float timeScale;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private Valve.VR.EVREye <eye>k__BackingField
    static Valve::VR::EVREye _get_$eye$k__BackingField();
    // Set static field: static private Valve.VR.EVREye <eye>k__BackingField
    static void _set_$eye$k__BackingField(Valve::VR::EVREye value);
    // Get static field: static private SteamVR_Render _instance
    static GlobalNamespace::SteamVR_Render* _get__instance();
    // Set static field: static private SteamVR_Render _instance
    static void _set__instance(GlobalNamespace::SteamVR_Render* value);
    // Get static field: static private System.Boolean isQuitting
    static bool _get_isQuitting();
    // Set static field: static private System.Boolean isQuitting
    static void _set_isQuitting(bool value);
    // Get static field: static private System.Boolean _pauseRendering
    static bool _get__pauseRendering();
    // Set static field: static private System.Boolean _pauseRendering
    static void _set__pauseRendering(bool value);
    // static public Valve.VR.EVREye get_eye()
    // Offset: 0x123EFA8
    static Valve::VR::EVREye get_eye();
    // static private System.Void set_eye(Valve.VR.EVREye value)
    // Offset: 0x123EFF8
    static void set_eye(Valve::VR::EVREye value);
    // static public SteamVR_Render get_instance()
    // Offset: 0x1231CF8
    static GlobalNamespace::SteamVR_Render* get_instance();
    // private System.Void OnDestroy()
    // Offset: 0x123F04C
    void OnDestroy();
    // private System.Void OnApplicationQuit()
    // Offset: 0x123F0A0
    void OnApplicationQuit();
    // static public System.Void Add(SteamVR_Camera vrcam)
    // Offset: 0x1230610
    static void Add(GlobalNamespace::SteamVR_Camera* vrcam);
    // static public System.Void Remove(SteamVR_Camera vrcam)
    // Offset: 0x122FA6C
    static void Remove(GlobalNamespace::SteamVR_Camera* vrcam);
    // static public SteamVR_Camera Top()
    // Offset: 0x1239A74
    static GlobalNamespace::SteamVR_Camera* Top();
    // private System.Void AddInternal(SteamVR_Camera vrcam)
    // Offset: 0x123F114
    void AddInternal(GlobalNamespace::SteamVR_Camera* vrcam);
    // private System.Void RemoveInternal(SteamVR_Camera vrcam)
    // Offset: 0x123F33C
    void RemoveInternal(GlobalNamespace::SteamVR_Camera* vrcam);
    // private SteamVR_Camera TopInternal()
    // Offset: 0x123F528
    GlobalNamespace::SteamVR_Camera* TopInternal();
    // static public System.Boolean get_pauseRendering()
    // Offset: 0x123F574
    static bool get_pauseRendering();
    // static public System.Void set_pauseRendering(System.Boolean value)
    // Offset: 0x123AD9C
    static void set_pauseRendering(bool value);
    // private System.Collections.IEnumerator RenderLoop()
    // Offset: 0x123F5C4
    System::Collections::IEnumerator* RenderLoop();
    // private System.Void RenderExternalCamera()
    // Offset: 0x123F66C
    void RenderExternalCamera();
    // private System.Void OnInputFocus(System.Boolean hasFocus)
    // Offset: 0x123F7A8
    void OnInputFocus(bool hasFocus);
    // private System.Void OnQuit(Valve.VR.VREvent_t vrEvent)
    // Offset: 0x123F818
    void OnQuit(Valve::VR::VREvent_t vrEvent);
    // private System.String GetScreenshotFilename(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotPropertyFilenames screenshotPropertyFilename)
    // Offset: 0x123F820
    ::Il2CppString* GetScreenshotFilename(uint screenshotHandle, Valve::VR::EVRScreenshotPropertyFilenames screenshotPropertyFilename);
    // private System.Void OnRequestScreenshot(Valve.VR.VREvent_t vrEvent)
    // Offset: 0x123F96C
    void OnRequestScreenshot(Valve::VR::VREvent_t vrEvent);
    // private System.Void OnEnable()
    // Offset: 0x123FB4C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x123FDC8
    void OnDisable();
    // private System.Void Awake()
    // Offset: 0x123FF80
    void Awake();
    // public System.Void UpdatePoses()
    // Offset: 0x12400FC
    void UpdatePoses();
    // private System.Void OnBeforeRender()
    // Offset: 0x12401DC
    void OnBeforeRender();
    // private System.Void Update()
    // Offset: 0x12401E0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x12405E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_Render* New_ctor();
  }; // SteamVR_Render
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Render*, "", "SteamVR_Render");
#pragma pack(pop)
