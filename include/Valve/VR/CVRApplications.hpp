// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
  // Forward declaring type: AppOverrideKeys_t
  struct AppOverrideKeys_t;
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationTransitionState
  struct EVRApplicationTransitionState;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRApplications
  class CVRApplications : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRApplications FnTable
    // Offset: 0x10
    Valve::VR::IVRApplications FnTable;
    // Creating conversion operator: operator Valve::VR::IVRApplications
    constexpr operator Valve::VR::IVRApplications() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFDBD78
    static CVRApplications* New_ctor(System::IntPtr pInterface);
    // public Valve.VR.EVRApplicationError AddApplicationManifest(System.String pchApplicationManifestFullPath, System.Boolean bTemporary)
    // Offset: 0xFDBE8C
    Valve::VR::EVRApplicationError AddApplicationManifest(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary);
    // public Valve.VR.EVRApplicationError RemoveApplicationManifest(System.String pchApplicationManifestFullPath)
    // Offset: 0xFDC2F8
    Valve::VR::EVRApplicationError RemoveApplicationManifest(::Il2CppString* pchApplicationManifestFullPath);
    // public System.Boolean IsApplicationInstalled(System.String pchAppKey)
    // Offset: 0xFDC6D0
    bool IsApplicationInstalled(::Il2CppString* pchAppKey);
    // public System.UInt32 GetApplicationCount()
    // Offset: 0xFDCAAC
    uint GetApplicationCount();
    // public Valve.VR.EVRApplicationError GetApplicationKeyByIndex(System.UInt32 unApplicationIndex, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xFDCCD8
    Valve::VR::EVRApplicationError GetApplicationKeyByIndex(uint unApplicationIndex, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationError GetApplicationKeyByProcessId(System.UInt32 unProcessId, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xFDCF9C
    Valve::VR::EVRApplicationError GetApplicationKeyByProcessId(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationError LaunchApplication(System.String pchAppKey)
    // Offset: 0xFDD260
    Valve::VR::EVRApplicationError LaunchApplication(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError LaunchTemplateApplication(System.String pchTemplateAppKey, System.String pchNewAppKey, Valve.VR.AppOverrideKeys_t[] pKeys)
    // Offset: 0xFDD638
    Valve::VR::EVRApplicationError LaunchTemplateApplication(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<Valve::VR::AppOverrideKeys_t>* pKeys);
    // public Valve.VR.EVRApplicationError LaunchApplicationFromMimeType(System.String pchMimeType, System.String pchArgs)
    // Offset: 0xFDDAB0
    Valve::VR::EVRApplicationError LaunchApplicationFromMimeType(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs);
    // public Valve.VR.EVRApplicationError LaunchDashboardOverlay(System.String pchAppKey)
    // Offset: 0xFDDED4
    Valve::VR::EVRApplicationError LaunchDashboardOverlay(::Il2CppString* pchAppKey);
    // public System.Boolean CancelApplicationLaunch(System.String pchAppKey)
    // Offset: 0xFDE2AC
    bool CancelApplicationLaunch(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError IdentifyApplication(System.UInt32 unProcessId, System.String pchAppKey)
    // Offset: 0xFDE688
    Valve::VR::EVRApplicationError IdentifyApplication(uint unProcessId, ::Il2CppString* pchAppKey);
    // public System.UInt32 GetApplicationProcessId(System.String pchAppKey)
    // Offset: 0xFDE930
    uint GetApplicationProcessId(::Il2CppString* pchAppKey);
    // public System.String GetApplicationsErrorNameFromEnum(Valve.VR.EVRApplicationError error)
    // Offset: 0xFDED08
    ::Il2CppString* GetApplicationsErrorNameFromEnum(Valve::VR::EVRApplicationError error);
    // public System.UInt32 GetApplicationPropertyString(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0xFDF00C
    uint GetApplicationPropertyString(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, Valve::VR::EVRApplicationError& peError);
    // public System.Boolean GetApplicationPropertyBool(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0xFDF4C8
    bool GetApplicationPropertyBool(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError);
    // public System.UInt64 GetApplicationPropertyUint64(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0xFDF93C
    uint64_t GetApplicationPropertyUint64(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError);
    // public Valve.VR.EVRApplicationError SetApplicationAutoLaunch(System.String pchAppKey, System.Boolean bAutoLaunch)
    // Offset: 0xFDFDAC
    Valve::VR::EVRApplicationError SetApplicationAutoLaunch(::Il2CppString* pchAppKey, bool bAutoLaunch);
    // public System.Boolean GetApplicationAutoLaunch(System.String pchAppKey)
    // Offset: 0xFE0218
    bool GetApplicationAutoLaunch(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError SetDefaultApplicationForMimeType(System.String pchAppKey, System.String pchMimeType)
    // Offset: 0xFE05F4
    Valve::VR::EVRApplicationError SetDefaultApplicationForMimeType(::Il2CppString* pchAppKey, ::Il2CppString* pchMimeType);
    // public System.Boolean GetDefaultApplicationForMimeType(System.String pchMimeType, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xFE0A18
    bool GetDefaultApplicationForMimeType(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.Boolean GetApplicationSupportedMimeTypes(System.String pchAppKey, System.Text.StringBuilder pchMimeTypesBuffer, System.UInt32 unMimeTypesBuffer)
    // Offset: 0xFE0E64
    bool GetApplicationSupportedMimeTypes(::Il2CppString* pchAppKey, System::Text::StringBuilder* pchMimeTypesBuffer, uint unMimeTypesBuffer);
    // public System.UInt32 GetApplicationsThatSupportMimeType(System.String pchMimeType, System.Text.StringBuilder pchAppKeysThatSupportBuffer, System.UInt32 unAppKeysThatSupportBuffer)
    // Offset: 0xFE12B0
    uint GetApplicationsThatSupportMimeType(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint unAppKeysThatSupportBuffer);
    // public System.UInt32 GetApplicationLaunchArguments(System.UInt32 unHandle, System.Text.StringBuilder pchArgs, System.UInt32 unArgs)
    // Offset: 0xFE16F8
    uint GetApplicationLaunchArguments(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs);
    // public Valve.VR.EVRApplicationError GetStartingApplication(System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xFE19BC
    Valve::VR::EVRApplicationError GetStartingApplication(System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationTransitionState GetTransitionState()
    // Offset: 0xFE1E08
    Valve::VR::EVRApplicationTransitionState GetTransitionState();
    // public Valve.VR.EVRApplicationError PerformApplicationPrelaunchCheck(System.String pchAppKey)
    // Offset: 0xFE2034
    Valve::VR::EVRApplicationError PerformApplicationPrelaunchCheck(::Il2CppString* pchAppKey);
    // public System.String GetApplicationsTransitionStateNameFromEnum(Valve.VR.EVRApplicationTransitionState state)
    // Offset: 0xFE240C
    ::Il2CppString* GetApplicationsTransitionStateNameFromEnum(Valve::VR::EVRApplicationTransitionState state);
    // public System.Boolean IsQuitUserPromptRequested()
    // Offset: 0xFE2710
    bool IsQuitUserPromptRequested();
    // public Valve.VR.EVRApplicationError LaunchInternalProcess(System.String pchBinaryPath, System.String pchArguments, System.String pchWorkingDirectory)
    // Offset: 0xFE2940
    Valve::VR::EVRApplicationError LaunchInternalProcess(::Il2CppString* pchBinaryPath, ::Il2CppString* pchArguments, ::Il2CppString* pchWorkingDirectory);
    // public System.UInt32 GetCurrentSceneProcessId()
    // Offset: 0xFE2D88
    uint GetCurrentSceneProcessId();
  }; // Valve.VR.CVRApplications
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRApplications*, "Valve.VR", "CVRApplications");
#pragma pack(pop)
