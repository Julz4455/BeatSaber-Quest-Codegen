// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_RemoveApplicationManifest
  class IVRApplications::_RemoveApplicationManifest : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1538B68
    static IVRApplications::_RemoveApplicationManifest* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRApplicationError Invoke(System.String pchApplicationManifestFullPath)
    // Offset: 0x152A2AC
    Valve::VR::EVRApplicationError Invoke(::Il2CppString* pchApplicationManifestFullPath);
    // public System.IAsyncResult BeginInvoke(System.String pchApplicationManifestFullPath, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1538B7C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchApplicationManifestFullPath, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1538BA0
    Valve::VR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_RemoveApplicationManifest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_RemoveApplicationManifest*, "Valve.VR", "IVRApplications/_RemoveApplicationManifest");
#pragma pack(pop)
