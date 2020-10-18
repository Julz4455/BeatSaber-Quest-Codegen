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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_GetRenderModelThumbnailURL
  class IVRRenderModels::_GetRenderModelThumbnailURL : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F36BC4
    static IVRRenderModels::_GetRenderModelThumbnailURL* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, ref OVR.OpenVR.EVRRenderModelError peError)
    // Offset: 0x1F36BD8
    uint Invoke(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, OVR::OpenVR::EVRRenderModelError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, ref OVR.OpenVR.EVRRenderModelError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F3702C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, OVR::OpenVR::EVRRenderModelError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref OVR.OpenVR.EVRRenderModelError peError, System.IAsyncResult result)
    // Offset: 0x1F370F4
    uint EndInvoke(OVR::OpenVR::EVRRenderModelError& peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_GetRenderModelThumbnailURL
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelThumbnailURL");
#pragma pack(pop)
