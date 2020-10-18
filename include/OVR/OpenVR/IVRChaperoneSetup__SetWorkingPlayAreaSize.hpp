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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPlayAreaSize
  class IVRChaperoneSetup::_SetWorkingPlayAreaSize : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1385BA0
    static IVRChaperoneSetup::_SetWorkingPlayAreaSize* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Single sizeX, System.Single sizeZ)
    // Offset: 0x137C338
    void Invoke(float sizeX, float sizeZ);
    // public System.IAsyncResult BeginInvoke(System.Single sizeX, System.Single sizeZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1385BB4
    System::IAsyncResult* BeginInvoke(float sizeX, float sizeZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1385C54
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPlayAreaSize
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPlayAreaSize");
#pragma pack(pop)
