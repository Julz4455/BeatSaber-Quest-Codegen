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
  // Autogenerated type: Valve.VR.IVRRenderModels/_FreeRenderModel
  class IVRRenderModels::_FreeRenderModel : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F4D238
    static IVRRenderModels::_FreeRenderModel* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.IntPtr pRenderModel)
    // Offset: 0x1F4D24C
    void Invoke(System::IntPtr pRenderModel);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pRenderModel, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F4D4AC
    System::IAsyncResult* BeginInvoke(System::IntPtr pRenderModel, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F4D538
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_FreeRenderModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_FreeRenderModel*, "Valve.VR", "IVRRenderModels/_FreeRenderModel");
#pragma pack(pop)
