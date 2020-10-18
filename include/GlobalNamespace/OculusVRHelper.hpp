// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IVRPlatformHelper
#include "GlobalNamespace/IVRPlatformHelper.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRPlatformSDK
  struct VRPlatformSDK;
  // Forward declaring type: XRDeviceModel
  struct XRDeviceModel;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusVRHelper
  class OculusVRHelper : public UnityEngine::MonoBehaviour, public GlobalNamespace::IVRPlatformHelper {
    public:
    // private System.Action inputFocusWasCapturedEvent
    // Offset: 0x18
    System::Action* inputFocusWasCapturedEvent;
    // private System.Action inputFocusWasReleasedEvent
    // Offset: 0x20
    System::Action* inputFocusWasReleasedEvent;
    // private System.Action hmdUnmountedEvent
    // Offset: 0x28
    System::Action* hmdUnmountedEvent;
    // private System.Action hmdMountedEvent
    // Offset: 0x30
    System::Action* hmdMountedEvent;
    // private System.Action joystickWasCenteredThisFrameEvent
    // Offset: 0x38
    System::Action* joystickWasCenteredThisFrameEvent;
    // private System.Action`1<UnityEngine.Vector2> joystickWasNotCenteredThisFrameEvent
    // Offset: 0x40
    System::Action_1<UnityEngine::Vector2>* joystickWasNotCenteredThisFrameEvent;
    // private System.Boolean _hasInputFocus
    // Offset: 0x48
    bool hasInputFocus;
    // private System.Boolean _hasVrFocus
    // Offset: 0x49
    bool hasVrFocus;
    // private System.Boolean _userPresent
    // Offset: 0x4A
    bool userPresent;
    // private System.Boolean _scrollingLastFrame
    // Offset: 0x4B
    bool scrollingLastFrame;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Boolean get__isOVRManagerPresent()
    // Offset: 0x109F77C
    bool get__isOVRManagerPresent();
    // protected System.Void Update()
    // Offset: 0x109F850
    void Update();
    // protected System.Void FixedUpdate()
    // Offset: 0x109FB7C
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x109FBF0
    void LateUpdate();
    // public System.Void add_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0x109EF9C
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_inputFocusWasCapturedEvent(System.Action value)
    void add_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0x109F040
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_inputFocusWasCapturedEvent(System.Action value)
    void remove_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void add_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0x109F0E4
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_inputFocusWasReleasedEvent(System.Action value)
    void add_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0x109F188
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_inputFocusWasReleasedEvent(System.Action value)
    void remove_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void add_hmdUnmountedEvent(System.Action value)
    // Offset: 0x109F22C
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_hmdUnmountedEvent(System.Action value)
    void add_hmdUnmountedEvent(System::Action* value);
    // public System.Void remove_hmdUnmountedEvent(System.Action value)
    // Offset: 0x109F2D0
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_hmdUnmountedEvent(System.Action value)
    void remove_hmdUnmountedEvent(System::Action* value);
    // public System.Void add_hmdMountedEvent(System.Action value)
    // Offset: 0x109F374
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_hmdMountedEvent(System.Action value)
    void add_hmdMountedEvent(System::Action* value);
    // public System.Void remove_hmdMountedEvent(System.Action value)
    // Offset: 0x109F418
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_hmdMountedEvent(System.Action value)
    void remove_hmdMountedEvent(System::Action* value);
    // public System.Void add_joystickWasCenteredThisFrameEvent(System.Action value)
    // Offset: 0x109F4BC
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_joystickWasCenteredThisFrameEvent(System.Action value)
    void add_joystickWasCenteredThisFrameEvent(System::Action* value);
    // public System.Void remove_joystickWasCenteredThisFrameEvent(System.Action value)
    // Offset: 0x109F560
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_joystickWasCenteredThisFrameEvent(System.Action value)
    void remove_joystickWasCenteredThisFrameEvent(System::Action* value);
    // public System.Void add_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    // Offset: 0x109F604
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    void add_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value);
    // public System.Void remove_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    // Offset: 0x109F6A8
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    void remove_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value);
    // public System.Boolean get_isAlwaysWireless()
    // Offset: 0x109F74C
    // Implemented from: IVRPlatformHelper
    // Base method: System.Boolean IVRPlatformHelper::get_isAlwaysWireless()
    bool get_isAlwaysWireless();
    // public VRPlatformSDK get_vrPlatformSDK()
    // Offset: 0x109F774
    // Implemented from: IVRPlatformHelper
    // Base method: VRPlatformSDK IVRPlatformHelper::get_vrPlatformSDK()
    GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();
    // public XRDeviceModel get_currentXRDeviceModel()
    // Offset: 0x109F76C
    // Implemented from: IVRPlatformHelper
    // Base method: XRDeviceModel IVRPlatformHelper::get_currentXRDeviceModel()
    GlobalNamespace::XRDeviceModel get_currentXRDeviceModel();
    // public System.Void TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    // Offset: 0x109FC64
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    void TriggerHapticPulse(UnityEngine::XR::XRNode node, float duration, float strength, float frequency);
    // public System.Void StopHaptics(UnityEngine.XR.XRNode node)
    // Offset: 0x109FCF0
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::StopHaptics(UnityEngine.XR.XRNode node)
    void StopHaptics(UnityEngine::XR::XRNode node);
    // public System.Void AdjustControllerTransform(UnityEngine.XR.XRNode node, UnityEngine.Transform transform, UnityEngine.Vector3 position, UnityEngine.Vector3 rotation)
    // Offset: 0x109FD6C
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::AdjustControllerTransform(UnityEngine.XR.XRNode node, UnityEngine.Transform transform, UnityEngine.Vector3 position, UnityEngine.Vector3 rotation)
    void AdjustControllerTransform(UnityEngine::XR::XRNode node, UnityEngine::Transform* transform, UnityEngine::Vector3 position, UnityEngine::Vector3 rotation);
    // public System.Boolean GetNodePose(UnityEngine.XR.XRNode nodeType, System.Int32 idx, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    // Offset: 0x109FEEC
    // Implemented from: IVRPlatformHelper
    // Base method: System.Boolean IVRPlatformHelper::GetNodePose(UnityEngine.XR.XRNode nodeType, System.Int32 idx, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    bool GetNodePose(UnityEngine::XR::XRNode nodeType, int idx, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot);
    // public System.Void .ctor()
    // Offset: 0x10A0028
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OculusVRHelper* New_ctor();
  }; // OculusVRHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusVRHelper*, "", "OculusVRHelper");
#pragma pack(pop)
