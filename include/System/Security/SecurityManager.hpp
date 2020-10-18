// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Autogenerated type: System.Security.SecurityManager
  class SecurityManager : public ::Il2CppObject {
    public:
    // static System.Boolean CheckElevatedPermissions()
    // Offset: 0x143AD84
    static bool CheckElevatedPermissions();
    // static System.Void EnsureElevatedPermissions()
    // Offset: 0x143AD8C
    static void EnsureElevatedPermissions();
  }; // System.Security.SecurityManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityManager*, "System.Security", "SecurityManager");
#pragma pack(pop)
