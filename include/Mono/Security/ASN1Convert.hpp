// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.ASN1Convert
  // [] Offset: FFFFFFFF
  class ASN1Convert : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ASN1Convert
    ASN1Convert() noexcept {}
    // static public Mono.Security.ASN1 FromInt32(System.Int32 value)
    // Offset: 0x1BE8994
    static Mono::Security::ASN1* FromInt32(int value);
    // static public Mono.Security.ASN1 FromOid(System.String oid)
    // Offset: 0x1BE8B38
    static Mono::Security::ASN1* FromOid(::Il2CppString* oid);
    // static public Mono.Security.ASN1 FromUnsignedBigInteger(System.Byte[] big)
    // Offset: 0x1BE8BEC
    static Mono::Security::ASN1* FromUnsignedBigInteger(::Array<uint8_t>* big);
    // static public System.Int32 ToInt32(Mono.Security.ASN1 asn1)
    // Offset: 0x1BE8D00
    static int ToInt32(Mono::Security::ASN1* asn1);
    // static public System.String ToOid(Mono.Security.ASN1 asn1)
    // Offset: 0x1BE8E2C
    static ::Il2CppString* ToOid(Mono::Security::ASN1* asn1);
    // static public System.DateTime ToDateTime(Mono.Security.ASN1 time)
    // Offset: 0x1BE90B4
    static System::DateTime ToDateTime(Mono::Security::ASN1* time);
  }; // Mono.Security.ASN1Convert
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::ASN1Convert*, "Mono.Security", "ASN1Convert");
