// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_GetComponentCount
  class IVRRenderModels::_GetComponentCount : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F342C4
    static IVRRenderModels::_GetComponentCount* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchRenderModelName)
    // Offset: 0x1F342D8
    uint Invoke(::Il2CppString* pchRenderModelName);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F34698
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F346BC
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_GetComponentCount
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetComponentCount*, "OVR.OpenVR", "IVRRenderModels/_GetComponentCount");
#pragma pack(pop)
