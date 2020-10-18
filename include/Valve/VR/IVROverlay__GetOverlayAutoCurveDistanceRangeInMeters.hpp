// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters
  class IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E39D28
    static IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters)
    // Offset: 0x1E39D3C
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float& pfMinDistanceInMeters, float& pfMaxDistanceInMeters);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E39FD4
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float& pfMinDistanceInMeters, float& pfMaxDistanceInMeters, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters, System.IAsyncResult result)
    // Offset: 0x1E3A0A0
    Valve::VR::EVROverlayError EndInvoke(float& pfMinDistanceInMeters, float& pfMaxDistanceInMeters, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters*, "Valve.VR", "IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters");
#pragma pack(pop)
