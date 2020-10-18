// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
#include "Org/BouncyCastle/Crypto/Paddings/IBlockCipherPadding.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Autogenerated type: Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding
  class ISO7816d4Padding : public ::Il2CppObject, public Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding {
    public:
    // public System.Void Init(Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x10EAF20
    // Implemented from: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
    // Base method: System.Void IBlockCipherPadding::Init(Org.BouncyCastle.Security.SecureRandom random)
    void Init(Org::BouncyCastle::Security::SecureRandom* random);
    // public System.Int32 AddPadding(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x10EAF24
    // Implemented from: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
    // Base method: System.Int32 IBlockCipherPadding::AddPadding(System.Byte[] input, System.Int32 inOff)
    int AddPadding(::Array<uint8_t>* input, int inOff);
    // public System.Int32 PadCount(System.Byte[] input)
    // Offset: 0x10EAF94
    // Implemented from: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
    // Base method: System.Int32 IBlockCipherPadding::PadCount(System.Byte[] input)
    int PadCount(::Array<uint8_t>* input);
    // public System.Void .ctor()
    // Offset: 0x10EB070
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ISO7816d4Padding* New_ctor();
  }; // Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding*, "Org.BouncyCastle.Crypto.Paddings", "ISO7816d4Padding");
#pragma pack(pop)
