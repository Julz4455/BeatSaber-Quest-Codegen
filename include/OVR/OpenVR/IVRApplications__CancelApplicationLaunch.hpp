// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRApplications/_CancelApplicationLaunch
  class IVRApplications::_CancelApplicationLaunch : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1383438
    static IVRApplications::_CancelApplicationLaunch* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.String pchAppKey)
    // Offset: 0x1374B88
    bool Invoke(::Il2CppString* pchAppKey);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.AsyncCallback callback, System.Object object)
    // Offset: 0x138344C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1383470
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_CancelApplicationLaunch
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_CancelApplicationLaunch*, "OVR.OpenVR", "IVRApplications/_CancelApplicationLaunch");
#pragma pack(pop)
