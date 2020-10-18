// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRSystem/_GetControllerStatePacked
  class CVRSystem::_GetControllerStatePacked : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15372BC
    static CVRSystem::_GetControllerStatePacked* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize)
    // Offset: 0x153692C
    bool Invoke(uint unControllerDeviceIndex, Valve::VR::VRControllerState_t_Packed& pControllerState, uint unControllerStateSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15372D0
    System::IAsyncResult* BeginInvoke(uint unControllerDeviceIndex, Valve::VR::VRControllerState_t_Packed& pControllerState, uint unControllerStateSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t_Packed pControllerState, System.IAsyncResult result)
    // Offset: 0x153739C
    bool EndInvoke(Valve::VR::VRControllerState_t_Packed& pControllerState, System::IAsyncResult* result);
  }; // Valve.VR.CVRSystem/_GetControllerStatePacked
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem::_GetControllerStatePacked*, "Valve.VR", "CVRSystem/_GetControllerStatePacked");
#pragma pack(pop)
