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
  // Forward declaring type: VREvent_t
  struct VREvent_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_PollNextOverlayEvent
  class IVROverlay::_PollNextOverlayEvent : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D710FC
    static IVROverlay::_PollNextOverlayEvent* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x1D71110
    bool Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D713AC
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VREvent_t pEvent, System.IAsyncResult result)
    // Offset: 0x1D71480
    bool EndInvoke(OVR::OpenVR::VREvent_t& pEvent, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_PollNextOverlayEvent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_PollNextOverlayEvent*, "OVR.OpenVR", "IVROverlay/_PollNextOverlayEvent");
#pragma pack(pop)
