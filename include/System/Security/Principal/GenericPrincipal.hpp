// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Claims.ClaimsPrincipal
#include "System/Security/Claims/ClaimsPrincipal.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IIdentity
  class IIdentity;
}
// Completed forward declares
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Autogenerated type: System.Security.Principal.GenericPrincipal
  class GenericPrincipal : public System::Security::Claims::ClaimsPrincipal {
    public:
    // private System.Security.Principal.IIdentity m_identity
    // Offset: 0x28
    System::Security::Principal::IIdentity* m_identity;
    // private System.String[] m_roles
    // Offset: 0x30
    ::Array<::Il2CppString*>* m_roles;
    // public System.Void .ctor(System.Security.Principal.IIdentity identity, System.String[] roles)
    // Offset: 0x143665C
    static GenericPrincipal* New_ctor(System::Security::Principal::IIdentity* identity, ::Array<::Il2CppString*>* roles);
  }; // System.Security.Principal.GenericPrincipal
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::GenericPrincipal*, "System.Security.Principal", "GenericPrincipal");
#pragma pack(pop)
