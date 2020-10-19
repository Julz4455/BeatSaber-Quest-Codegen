// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerBitString
#include "Org/BouncyCastle/Asn1/DerBitString.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.BerBitString
  class BerBitString : public Org::BouncyCastle::Asn1::DerBitString {
    public:
    // public System.Void .ctor(System.Byte[] data, System.Int32 padBits)
    // Offset: 0x131A280
    // Implemented from: Org.BouncyCastle.Asn1.DerBitString
    // Base method: System.Void DerBitString::.ctor(System.Byte[] data, System.Int32 padBits)
    static BerBitString* New_ctor(::Array<uint8_t>* data, int padBits);
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x131A450
    // Implemented from: Org.BouncyCastle.Asn1.DerBitString
    // Base method: System.Void DerBitString::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.BerBitString
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerBitString*, "Org.BouncyCastle.Asn1", "BerBitString");
#pragma pack(pop)