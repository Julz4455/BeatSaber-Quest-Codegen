// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_GetTrackingSpace
  class IVRCompositor::_GetTrackingSpace : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D5B468
    static IVRCompositor::_GetTrackingSpace* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.ETrackingUniverseOrigin Invoke()
    // Offset: 0x1D5B47C
    OVR::OpenVR::ETrackingUniverseOrigin Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D5B690
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.ETrackingUniverseOrigin EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D5B6BC
    OVR::OpenVR::ETrackingUniverseOrigin EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_GetTrackingSpace
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetTrackingSpace*, "OVR.OpenVR", "IVRCompositor/_GetTrackingSpace");
#pragma pack(pop)
