// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryKey
  class RegistryKey;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.Registry
  class Registry : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Microsoft.Win32.RegistryKey ClassesRoot
    static Microsoft::Win32::RegistryKey* _get_ClassesRoot();
    // Set static field: static public readonly Microsoft.Win32.RegistryKey ClassesRoot
    static void _set_ClassesRoot(Microsoft::Win32::RegistryKey* value);
    // Get static field: static public readonly Microsoft.Win32.RegistryKey CurrentConfig
    static Microsoft::Win32::RegistryKey* _get_CurrentConfig();
    // Set static field: static public readonly Microsoft.Win32.RegistryKey CurrentConfig
    static void _set_CurrentConfig(Microsoft::Win32::RegistryKey* value);
    // Get static field: static public readonly Microsoft.Win32.RegistryKey CurrentUser
    static Microsoft::Win32::RegistryKey* _get_CurrentUser();
    // Set static field: static public readonly Microsoft.Win32.RegistryKey CurrentUser
    static void _set_CurrentUser(Microsoft::Win32::RegistryKey* value);
    // Get static field: static public readonly Microsoft.Win32.RegistryKey DynData
    static Microsoft::Win32::RegistryKey* _get_DynData();
    // Set static field: static public readonly Microsoft.Win32.RegistryKey DynData
    static void _set_DynData(Microsoft::Win32::RegistryKey* value);
    // Get static field: static public readonly Microsoft.Win32.RegistryKey LocalMachine
    static Microsoft::Win32::RegistryKey* _get_LocalMachine();
    // Set static field: static public readonly Microsoft.Win32.RegistryKey LocalMachine
    static void _set_LocalMachine(Microsoft::Win32::RegistryKey* value);
    // Get static field: static public readonly Microsoft.Win32.RegistryKey PerformanceData
    static Microsoft::Win32::RegistryKey* _get_PerformanceData();
    // Set static field: static public readonly Microsoft.Win32.RegistryKey PerformanceData
    static void _set_PerformanceData(Microsoft::Win32::RegistryKey* value);
    // Get static field: static public readonly Microsoft.Win32.RegistryKey Users
    static Microsoft::Win32::RegistryKey* _get_Users();
    // Set static field: static public readonly Microsoft.Win32.RegistryKey Users
    static void _set_Users(Microsoft::Win32::RegistryKey* value);
    // static private System.Void .cctor()
    // Offset: 0x17CF9DC
    static void _cctor();
  }; // Microsoft.Win32.Registry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::Registry*, "Microsoft.Win32", "Registry");
#pragma pack(pop)
