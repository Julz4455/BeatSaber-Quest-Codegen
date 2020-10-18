// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
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
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSettings/_SetBool
  class IVRSettings::_SetBool : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F562AC
    static IVRSettings::_SetBool* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.String pchSection, System.String pchSettingsKey, System.Boolean bValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x1F562C0
    void Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, bool bValue, Valve::VR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, System.Boolean bValue, ref Valve.VR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F56710
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, bool bValue, Valve::VR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x1F567DC
    void EndInvoke(Valve::VR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSettings/_SetBool
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSettings::_SetBool*, "Valve.VR", "IVRSettings/_SetBool");
#pragma pack(pop)
