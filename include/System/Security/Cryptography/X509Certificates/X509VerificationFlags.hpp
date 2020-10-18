// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509VerificationFlags
  struct X509VerificationFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: X509VerificationFlags
    constexpr X509VerificationFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags NoFlag
    static constexpr const int NoFlag = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags NoFlag
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_NoFlag();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags NoFlag
    static void _set_NoFlag(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreNotTimeValid
    static constexpr const int IgnoreNotTimeValid = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreNotTimeValid
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreNotTimeValid();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreNotTimeValid
    static void _set_IgnoreNotTimeValid(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreCtlNotTimeValid
    static constexpr const int IgnoreCtlNotTimeValid = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreCtlNotTimeValid
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreCtlNotTimeValid();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreCtlNotTimeValid
    static void _set_IgnoreCtlNotTimeValid(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreNotTimeNested
    static constexpr const int IgnoreNotTimeNested = 4;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreNotTimeNested
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreNotTimeNested();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreNotTimeNested
    static void _set_IgnoreNotTimeNested(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreInvalidBasicConstraints
    static constexpr const int IgnoreInvalidBasicConstraints = 8;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreInvalidBasicConstraints
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreInvalidBasicConstraints();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreInvalidBasicConstraints
    static void _set_IgnoreInvalidBasicConstraints(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags AllowUnknownCertificateAuthority
    static constexpr const int AllowUnknownCertificateAuthority = 16;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags AllowUnknownCertificateAuthority
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_AllowUnknownCertificateAuthority();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags AllowUnknownCertificateAuthority
    static void _set_AllowUnknownCertificateAuthority(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreWrongUsage
    static constexpr const int IgnoreWrongUsage = 32;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreWrongUsage
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreWrongUsage();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreWrongUsage
    static void _set_IgnoreWrongUsage(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreInvalidName
    static constexpr const int IgnoreInvalidName = 64;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreInvalidName
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreInvalidName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreInvalidName
    static void _set_IgnoreInvalidName(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreInvalidPolicy
    static constexpr const int IgnoreInvalidPolicy = 128;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreInvalidPolicy
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreInvalidPolicy();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreInvalidPolicy
    static void _set_IgnoreInvalidPolicy(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreEndRevocationUnknown
    static constexpr const int IgnoreEndRevocationUnknown = 256;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreEndRevocationUnknown
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreEndRevocationUnknown();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreEndRevocationUnknown
    static void _set_IgnoreEndRevocationUnknown(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreCtlSignerRevocationUnknown
    static constexpr const int IgnoreCtlSignerRevocationUnknown = 512;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreCtlSignerRevocationUnknown
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreCtlSignerRevocationUnknown();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreCtlSignerRevocationUnknown
    static void _set_IgnoreCtlSignerRevocationUnknown(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreCertificateAuthorityRevocationUnknown
    static constexpr const int IgnoreCertificateAuthorityRevocationUnknown = 1024;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreCertificateAuthorityRevocationUnknown
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreCertificateAuthorityRevocationUnknown();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreCertificateAuthorityRevocationUnknown
    static void _set_IgnoreCertificateAuthorityRevocationUnknown(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreRootRevocationUnknown
    static constexpr const int IgnoreRootRevocationUnknown = 2048;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreRootRevocationUnknown
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_IgnoreRootRevocationUnknown();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags IgnoreRootRevocationUnknown
    static void _set_IgnoreRootRevocationUnknown(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags AllFlags
    static constexpr const int AllFlags = 4095;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags AllFlags
    static System::Security::Cryptography::X509Certificates::X509VerificationFlags _get_AllFlags();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509VerificationFlags AllFlags
    static void _set_AllFlags(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
  }; // System.Security.Cryptography.X509Certificates.X509VerificationFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509VerificationFlags, "System.Security.Cryptography.X509Certificates", "X509VerificationFlags");
#pragma pack(pop)
