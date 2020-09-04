// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: VROverlayTransformType
  struct VROverlayTransformType;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayTransformType
  class IVROverlay::_GetOverlayTransformType : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x152B53C
    static IVROverlay::_GetOverlayTransformType* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayTransformType peTransformType)
    // Offset: 0x152B550
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayTransformType& peTransformType);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayTransformType peTransformType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x152B7D4
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayTransformType& peTransformType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.VROverlayTransformType peTransformType, System.IAsyncResult result)
    // Offset: 0x152B884
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::VROverlayTransformType& peTransformType, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayTransformType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayTransformType*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformType");
#pragma pack(pop)
