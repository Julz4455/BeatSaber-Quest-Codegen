// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
  class IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F452E0
    static IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.HmdMatrix34_t Invoke()
    // Offset: 0x1F452F4
    OVR::OpenVR::HmdMatrix34_t Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F45534
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.HmdMatrix34_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F45560
    OVR::OpenVR::HmdMatrix34_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose");
#pragma pack(pop)
