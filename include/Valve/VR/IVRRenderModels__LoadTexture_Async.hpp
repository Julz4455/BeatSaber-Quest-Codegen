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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRRenderModels/_LoadTexture_Async
  class IVRRenderModels::_LoadTexture_Async : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F514C4
    static IVRRenderModels::_LoadTexture_Async* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRRenderModelError Invoke(System.Int32 textureId, ref System.IntPtr ppTexture)
    // Offset: 0x1F514D8
    Valve::VR::EVRRenderModelError Invoke(int textureId, System::IntPtr& ppTexture);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, ref System.IntPtr ppTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F51768
    System::IAsyncResult* BeginInvoke(int textureId, System::IntPtr& ppTexture, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRRenderModelError EndInvoke(ref System.IntPtr ppTexture, System.IAsyncResult result)
    // Offset: 0x1F5181C
    Valve::VR::EVRRenderModelError EndInvoke(System::IntPtr& ppTexture, System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_LoadTexture_Async
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_LoadTexture_Async*, "Valve.VR", "IVRRenderModels/_LoadTexture_Async");
#pragma pack(pop)
