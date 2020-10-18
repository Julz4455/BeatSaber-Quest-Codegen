// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRScreenshots/_GetScreenshotPropertyFilename
  class IVRScreenshots::_GetScreenshotPropertyFilename : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F52728
    static IVRScreenshots::_GetScreenshotPropertyFilename* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref Valve.VR.EVRScreenshotError pError)
    // Offset: 0x1F5273C
    uint Invoke(uint screenshotHandle, Valve::VR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder* pchFilename, uint cchFilename, Valve::VR::EVRScreenshotError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref Valve.VR.EVRScreenshotError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F52A20
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, Valve::VR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder* pchFilename, uint cchFilename, Valve::VR::EVRScreenshotError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref Valve.VR.EVRScreenshotError pError, System.IAsyncResult result)
    // Offset: 0x1F52B0C
    uint EndInvoke(Valve::VR::EVRScreenshotError& pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/_GetScreenshotPropertyFilename
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename*, "Valve.VR", "IVRScreenshots/_GetScreenshotPropertyFilename");
#pragma pack(pop)
