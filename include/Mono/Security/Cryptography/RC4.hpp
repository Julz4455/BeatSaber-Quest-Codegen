// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SymmetricAlgorithm
#include "System/Security/Cryptography/SymmetricAlgorithm.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeySizes
  class KeySizes;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Autogenerated type: Mono.Security.Cryptography.RC4
  class RC4 : public System::Security::Cryptography::SymmetricAlgorithm {
    public:
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static ::Array<System::Security::Cryptography::KeySizes*>* _get_s_legalBlockSizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static void _set_s_legalBlockSizes(::Array<System::Security::Cryptography::KeySizes*>* value);
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static ::Array<System::Security::Cryptography::KeySizes*>* _get_s_legalKeySizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static void _set_s_legalKeySizes(::Array<System::Security::Cryptography::KeySizes*>* value);
    // static public Mono.Security.Cryptography.RC4 Create()
    // Offset: 0x19221BC
    static Mono::Security::Cryptography::RC4* Create();
    // static private System.Void .cctor()
    // Offset: 0x1926F5C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1922A18
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    static RC4* New_ctor();
    // public override System.Byte[] get_IV()
    // Offset: 0x1926F0C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_IV()
    ::Array<uint8_t>* get_IV();
    // public override System.Void set_IV(System.Byte[] value)
    // Offset: 0x1926F58
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_IV(System.Byte[] value)
    void set_IV(::Array<uint8_t>* value);
  }; // Mono.Security.Cryptography.RC4
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::RC4*, "Mono.Security.Cryptography", "RC4");
#pragma pack(pop)