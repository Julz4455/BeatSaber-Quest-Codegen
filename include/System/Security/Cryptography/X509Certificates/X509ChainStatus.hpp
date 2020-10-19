// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System/Security/Cryptography/X509Certificates/X509ChainStatusFlags.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainStatus
  struct X509ChainStatus : public System::ValueType {
    public:
    // private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags status
    // Offset: 0x0
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status;
    // private System.String info
    // Offset: 0x8
    ::Il2CppString* info;
    // Creating value type constructor for type: X509ChainStatus
    constexpr X509ChainStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status_ = {}, ::Il2CppString* info_ = {}) noexcept : status{status_}, info{info_} {}
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flag)
    // Offset: 0xC7096C
    X509ChainStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag);
    // public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags get_Status()
    // Offset: 0xC709A0
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_Status();
    // public System.Void set_Status(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags value)
    // Offset: 0xC709A8
    void set_Status(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // public System.Void set_StatusInformation(System.String value)
    // Offset: 0xC709B0
    void set_StatusInformation(::Il2CppString* value);
    // static System.String GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flags)
    // Offset: 0x147B528
    static ::Il2CppString* GetInformation(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags);
  }; // System.Security.Cryptography.X509Certificates.X509ChainStatus
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainStatus, "System.Security.Cryptography.X509Certificates", "X509ChainStatus");
#pragma pack(pop)