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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn
  class IVRCompositor::_ForceInterleavedReprojectionOn : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D58858
    static IVRCompositor::_ForceInterleavedReprojectionOn* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Boolean bOverride)
    // Offset: 0x1D5886C
    void Invoke(bool bOverride);
    // public System.IAsyncResult BeginInvoke(System.Boolean bOverride, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D58AE8
    System::IAsyncResult* BeginInvoke(bool bOverride, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D58B78
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn*, "OVR.OpenVR", "IVRCompositor/_ForceInterleavedReprojectionOn");
#pragma pack(pop)
