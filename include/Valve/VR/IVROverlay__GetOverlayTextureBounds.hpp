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
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayTextureBounds
  class IVROverlay::_GetOverlayTextureBounds : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E3D8F8
    static IVROverlay::_GetOverlayTextureBounds* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VRTextureBounds_t pOverlayTextureBounds)
    // Offset: 0x1E3D90C
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, Valve::VR::VRTextureBounds_t& pOverlayTextureBounds);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VRTextureBounds_t pOverlayTextureBounds, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E3DB90
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::VRTextureBounds_t& pOverlayTextureBounds, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref Valve.VR.VRTextureBounds_t pOverlayTextureBounds, System.IAsyncResult result)
    // Offset: 0x1E3DC40
    Valve::VR::EVROverlayError EndInvoke(Valve::VR::VRTextureBounds_t& pOverlayTextureBounds, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayTextureBounds
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayTextureBounds*, "Valve.VR", "IVROverlay/_GetOverlayTextureBounds");
#pragma pack(pop)
