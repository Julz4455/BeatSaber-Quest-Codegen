// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyFilename
  class IVRScreenshots::_GetScreenshotPropertyFilename : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B4218
    static IVRScreenshots::_GetScreenshotPropertyFilename* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref OVR.OpenVR.EVRScreenshotError pError)
    // Offset: 0x16B422C
    uint Invoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder* pchFilename, uint cchFilename, OVR::OpenVR::EVRScreenshotError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref OVR.OpenVR.EVRScreenshotError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B4510
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder* pchFilename, uint cchFilename, OVR::OpenVR::EVRScreenshotError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref OVR.OpenVR.EVRScreenshotError pError, System.IAsyncResult result)
    // Offset: 0x16B45FC
    uint EndInvoke(OVR::OpenVR::EVRScreenshotError& pError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyFilename
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyFilename");
#pragma pack(pop)
