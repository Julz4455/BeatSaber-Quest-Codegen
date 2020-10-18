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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: KeyCode
  struct KeyCode;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRManager
  class OVRManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRHeadsetEmulator
  class OVRHeadsetEmulator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRHeadsetEmulator::OpMode
    struct OpMode;
    // Autogenerated type: OVRHeadsetEmulator/OpMode
    struct OpMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: OpMode
      constexpr OpMode(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRHeadsetEmulator/OpMode Off
      static constexpr const int Off = 0;
      // Get static field: static public OVRHeadsetEmulator/OpMode Off
      static GlobalNamespace::OVRHeadsetEmulator::OpMode _get_Off();
      // Set static field: static public OVRHeadsetEmulator/OpMode Off
      static void _set_Off(GlobalNamespace::OVRHeadsetEmulator::OpMode value);
      // static field const value: static public OVRHeadsetEmulator/OpMode EditorOnly
      static constexpr const int EditorOnly = 1;
      // Get static field: static public OVRHeadsetEmulator/OpMode EditorOnly
      static GlobalNamespace::OVRHeadsetEmulator::OpMode _get_EditorOnly();
      // Set static field: static public OVRHeadsetEmulator/OpMode EditorOnly
      static void _set_EditorOnly(GlobalNamespace::OVRHeadsetEmulator::OpMode value);
      // static field const value: static public OVRHeadsetEmulator/OpMode AlwaysOn
      static constexpr const int AlwaysOn = 2;
      // Get static field: static public OVRHeadsetEmulator/OpMode AlwaysOn
      static GlobalNamespace::OVRHeadsetEmulator::OpMode _get_AlwaysOn();
      // Set static field: static public OVRHeadsetEmulator/OpMode AlwaysOn
      static void _set_AlwaysOn(GlobalNamespace::OVRHeadsetEmulator::OpMode value);
    }; // OVRHeadsetEmulator/OpMode
    // public OVRHeadsetEmulator/OpMode opMode
    // Offset: 0x18
    GlobalNamespace::OVRHeadsetEmulator::OpMode opMode;
    // public System.Boolean resetHmdPoseOnRelease
    // Offset: 0x1C
    bool resetHmdPoseOnRelease;
    // public System.Boolean resetHmdPoseByMiddleMouseButton
    // Offset: 0x1D
    bool resetHmdPoseByMiddleMouseButton;
    // public UnityEngine.KeyCode[] activateKeys
    // Offset: 0x20
    ::Array<UnityEngine::KeyCode>* activateKeys;
    // public UnityEngine.KeyCode[] pitchKeys
    // Offset: 0x28
    ::Array<UnityEngine::KeyCode>* pitchKeys;
    // private OVRManager manager
    // Offset: 0x30
    GlobalNamespace::OVRManager* manager;
    // private System.Boolean lastFrameEmulationActivated
    // Offset: 0x38
    bool lastFrameEmulationActivated;
    // private UnityEngine.Vector3 recordedHeadPoseRelativeOffsetTranslation
    // Offset: 0x3C
    UnityEngine::Vector3 recordedHeadPoseRelativeOffsetTranslation;
    // private UnityEngine.Vector3 recordedHeadPoseRelativeOffsetRotation
    // Offset: 0x48
    UnityEngine::Vector3 recordedHeadPoseRelativeOffsetRotation;
    // private System.Boolean hasSentEvent
    // Offset: 0x54
    bool hasSentEvent;
    // private System.Boolean emulatorHasInitialized
    // Offset: 0x55
    bool emulatorHasInitialized;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single MOUSE_SCALE_X
    static constexpr const float MOUSE_SCALE_X = -2;
    // Get static field: static private System.Single MOUSE_SCALE_X
    static float _get_MOUSE_SCALE_X();
    // Set static field: static private System.Single MOUSE_SCALE_X
    static void _set_MOUSE_SCALE_X(float value);
    // static field const value: static private System.Single MOUSE_SCALE_X_PITCH
    static constexpr const float MOUSE_SCALE_X_PITCH = -2;
    // Get static field: static private System.Single MOUSE_SCALE_X_PITCH
    static float _get_MOUSE_SCALE_X_PITCH();
    // Set static field: static private System.Single MOUSE_SCALE_X_PITCH
    static void _set_MOUSE_SCALE_X_PITCH(float value);
    // static field const value: static private System.Single MOUSE_SCALE_Y
    static constexpr const float MOUSE_SCALE_Y = 2;
    // Get static field: static private System.Single MOUSE_SCALE_Y
    static float _get_MOUSE_SCALE_Y();
    // Set static field: static private System.Single MOUSE_SCALE_Y
    static void _set_MOUSE_SCALE_Y(float value);
    // static field const value: static private System.Single MOUSE_SCALE_HEIGHT
    static constexpr const float MOUSE_SCALE_HEIGHT = 1;
    // Get static field: static private System.Single MOUSE_SCALE_HEIGHT
    static float _get_MOUSE_SCALE_HEIGHT();
    // Set static field: static private System.Single MOUSE_SCALE_HEIGHT
    static void _set_MOUSE_SCALE_HEIGHT(float value);
    // static field const value: static private System.Single MAX_ROLL
    static constexpr const float MAX_ROLL = 85;
    // Get static field: static private System.Single MAX_ROLL
    static float _get_MAX_ROLL();
    // Set static field: static private System.Single MAX_ROLL
    static void _set_MAX_ROLL(float value);
    // private System.Void Start()
    // Offset: 0x130E8C0
    void Start();
    // private System.Void Update()
    // Offset: 0x130E8C4
    void Update();
    // private System.Boolean IsEmulationActivated()
    // Offset: 0x130ECA4
    bool IsEmulationActivated();
    // private System.Boolean IsTweakingPitch()
    // Offset: 0x130EFC0
    bool IsTweakingPitch();
    // public System.Void .ctor()
    // Offset: 0x130F050
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRHeadsetEmulator* New_ctor();
  }; // OVRHeadsetEmulator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHeadsetEmulator*, "", "OVRHeadsetEmulator");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHeadsetEmulator::OpMode, "", "OVRHeadsetEmulator/OpMode");
#pragma pack(pop)
