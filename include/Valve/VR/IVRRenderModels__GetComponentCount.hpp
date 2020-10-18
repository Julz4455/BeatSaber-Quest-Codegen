// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRRenderModels/_GetComponentCount
  class IVRRenderModels::_GetComponentCount : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F4DFD8
    static IVRRenderModels::_GetComponentCount* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchRenderModelName)
    // Offset: 0x1F4DFEC
    uint Invoke(::Il2CppString* pchRenderModelName);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F4E3AC
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F4E3D0
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_GetComponentCount
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_GetComponentCount*, "Valve.VR", "IVRRenderModels/_GetComponentCount");
#pragma pack(pop)
