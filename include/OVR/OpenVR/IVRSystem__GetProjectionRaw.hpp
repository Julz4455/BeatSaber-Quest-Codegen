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
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetProjectionRaw
  class IVRSystem::_GetProjectionRaw : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F44568
    static IVRSystem::_GetProjectionRaw* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(OVR.OpenVR.EVREye eEye, ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom)
    // Offset: 0x1F4457C
    void Invoke(OVR::OpenVR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F44858
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom, System.IAsyncResult result)
    // Offset: 0x1F4495C
    void EndInvoke(float& pfLeft, float& pfRight, float& pfTop, float& pfBottom, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetProjectionRaw
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetProjectionRaw*, "OVR.OpenVR", "IVRSystem/_GetProjectionRaw");
#pragma pack(pop)
