// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose
  class IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x13855B8
    static IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(ref OVR.OpenVR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x137BE50
    bool Invoke(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x13855CC
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose, System.IAsyncResult result)
    // Offset: 0x1385660
    bool EndInvoke(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose");
#pragma pack(pop)
