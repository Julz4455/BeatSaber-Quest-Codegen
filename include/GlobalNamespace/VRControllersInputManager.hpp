// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersInputManager
  class VRControllersInputManager : public ::Il2CppObject {
    public:
    // private IVRPlatformHelper _vrPlatformHelper
    // Offset: 0x10
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Creating conversion operator: operator GlobalNamespace::IVRPlatformHelper*
    constexpr operator GlobalNamespace::IVRPlatformHelper*() const noexcept {
      return vrPlatformHelper;
    }
    // static field const value: static private System.String kTriggerLeftHand
    static constexpr const char* kTriggerLeftHand = "TriggerLeftHand";
    // Get static field: static private System.String kTriggerLeftHand
    static ::Il2CppString* _get_kTriggerLeftHand();
    // Set static field: static private System.String kTriggerLeftHand
    static void _set_kTriggerLeftHand(::Il2CppString* value);
    // static field const value: static private System.String kTriggerRightHand
    static constexpr const char* kTriggerRightHand = "TriggerRightHand";
    // Get static field: static private System.String kTriggerRightHand
    static ::Il2CppString* _get_kTriggerRightHand();
    // Set static field: static private System.String kTriggerRightHand
    static void _set_kTriggerRightHand(::Il2CppString* value);
    // static field const value: static private System.String kVerticalLeftHand
    static constexpr const char* kVerticalLeftHand = "VerticalLeftHand";
    // Get static field: static private System.String kVerticalLeftHand
    static ::Il2CppString* _get_kVerticalLeftHand();
    // Set static field: static private System.String kVerticalLeftHand
    static void _set_kVerticalLeftHand(::Il2CppString* value);
    // static field const value: static private System.String kVerticalRightHand
    static constexpr const char* kVerticalRightHand = "VerticalRightHand";
    // Get static field: static private System.String kVerticalRightHand
    static ::Il2CppString* _get_kVerticalRightHand();
    // Set static field: static private System.String kVerticalRightHand
    static void _set_kVerticalRightHand(::Il2CppString* value);
    // static field const value: static private System.String kHorizontalLeftHand
    static constexpr const char* kHorizontalLeftHand = "HorizontalLeftHand";
    // Get static field: static private System.String kHorizontalLeftHand
    static ::Il2CppString* _get_kHorizontalLeftHand();
    // Set static field: static private System.String kHorizontalLeftHand
    static void _set_kHorizontalLeftHand(::Il2CppString* value);
    // static field const value: static private System.String kHorizontalRightHand
    static constexpr const char* kHorizontalRightHand = "HorizontalRightHand";
    // Get static field: static private System.String kHorizontalRightHand
    static ::Il2CppString* _get_kHorizontalRightHand();
    // Set static field: static private System.String kHorizontalRightHand
    static void _set_kHorizontalRightHand(::Il2CppString* value);
    // static field const value: static private System.String kMenuButtonLeftHandOculusTouch
    static constexpr const char* kMenuButtonLeftHandOculusTouch = "MenuButtonLeftHandOculusTouch";
    // Get static field: static private System.String kMenuButtonLeftHandOculusTouch
    static ::Il2CppString* _get_kMenuButtonLeftHandOculusTouch();
    // Set static field: static private System.String kMenuButtonLeftHandOculusTouch
    static void _set_kMenuButtonLeftHandOculusTouch(::Il2CppString* value);
    // static field const value: static private System.String kMenuButtonLeftHand
    static constexpr const char* kMenuButtonLeftHand = "MenuButtonLeftHand";
    // Get static field: static private System.String kMenuButtonLeftHand
    static ::Il2CppString* _get_kMenuButtonLeftHand();
    // Set static field: static private System.String kMenuButtonLeftHand
    static void _set_kMenuButtonLeftHand(::Il2CppString* value);
    // static field const value: static private System.String kMenuButtonRightHandOculusTouch
    static constexpr const char* kMenuButtonRightHandOculusTouch = "MenuButtonRightHandOculusTouch";
    // Get static field: static private System.String kMenuButtonRightHandOculusTouch
    static ::Il2CppString* _get_kMenuButtonRightHandOculusTouch();
    // Set static field: static private System.String kMenuButtonRightHandOculusTouch
    static void _set_kMenuButtonRightHandOculusTouch(::Il2CppString* value);
    // static field const value: static private System.String kMenuButtonRightHand
    static constexpr const char* kMenuButtonRightHand = "MenuButtonRightHand";
    // Get static field: static private System.String kMenuButtonRightHand
    static ::Il2CppString* _get_kMenuButtonRightHand();
    // Set static field: static private System.String kMenuButtonRightHand
    static void _set_kMenuButtonRightHand(::Il2CppString* value);
    // static field const value: static private System.String kMenuButtonOculusTouch
    static constexpr const char* kMenuButtonOculusTouch = "MenuButtonOculusTouch";
    // Get static field: static private System.String kMenuButtonOculusTouch
    static ::Il2CppString* _get_kMenuButtonOculusTouch();
    // Set static field: static private System.String kMenuButtonOculusTouch
    static void _set_kMenuButtonOculusTouch(::Il2CppString* value);
    // public System.Single TriggerValue(UnityEngine.XR.XRNode node)
    // Offset: 0x21EE6A0
    float TriggerValue(UnityEngine::XR::XRNode node);
    // public System.Single VerticalAxisValue(UnityEngine.XR.XRNode node)
    // Offset: 0x21EE840
    float VerticalAxisValue(UnityEngine::XR::XRNode node);
    // public System.Single HorizontalAxisValue(UnityEngine.XR.XRNode node)
    // Offset: 0x21EE8D8
    float HorizontalAxisValue(UnityEngine::XR::XRNode node);
    // public System.Boolean MenuButtonDown()
    // Offset: 0x21EEDA4
    bool MenuButtonDown();
    // public System.Boolean MenuButton()
    // Offset: 0x21EF034
    bool MenuButton();
    // public System.Void .ctor()
    // Offset: 0x21EF2C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRControllersInputManager* New_ctor();
  }; // VRControllersInputManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersInputManager*, "", "VRControllersInputManager");
#pragma pack(pop)
