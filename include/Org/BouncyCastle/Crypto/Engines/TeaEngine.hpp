// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.TeaEngine
  class TeaEngine : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IBlockCipher {
    public:
    // private System.UInt32 _a
    // Offset: 0x10
    uint a;
    // private System.UInt32 _b
    // Offset: 0x14
    uint b;
    // private System.UInt32 _c
    // Offset: 0x18
    uint c;
    // private System.UInt32 _d
    // Offset: 0x1C
    uint d;
    // private System.Boolean _initialised
    // Offset: 0x20
    bool initialised;
    // private System.Boolean _forEncryption
    // Offset: 0x21
    bool forEncryption;
    // private System.Void setKey(System.Byte[] key)
    // Offset: 0x1C531A0
    void setKey(::Array<uint8_t>* key);
    // private System.Int32 encryptBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1C53440
    int encryptBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 decryptBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1C53358
    int decryptBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Void .ctor()
    // Offset: 0x1C52FC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TeaEngine* New_ctor();
    // public System.String get_AlgorithmName()
    // Offset: 0x1C52FE8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1C53030
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1C53038
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1C53040
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1C53210
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x1C53530
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.TeaEngine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::TeaEngine*, "Org.BouncyCastle.Crypto.Engines", "TeaEngine");
#pragma pack(pop)
