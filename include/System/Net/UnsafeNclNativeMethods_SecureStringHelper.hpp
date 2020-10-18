// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.UnsafeNclNativeMethods
#include "System/Net/UnsafeNclNativeMethods.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecureString
  class SecureString;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.UnsafeNclNativeMethods/SecureStringHelper
  class UnsafeNclNativeMethods::SecureStringHelper : public ::Il2CppObject {
    public:
    // static System.String CreateString(System.Security.SecureString secureString)
    // Offset: 0x13B8650
    static ::Il2CppString* CreateString(System::Security::SecureString* secureString);
    // static System.Security.SecureString CreateSecureString(System.String plainString)
    // Offset: 0x13B8790
    static System::Security::SecureString* CreateSecureString(::Il2CppString* plainString);
  }; // System.Net.UnsafeNclNativeMethods/SecureStringHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::UnsafeNclNativeMethods::SecureStringHelper*, "System.Net", "UnsafeNclNativeMethods/SecureStringHelper");
#pragma pack(pop)
