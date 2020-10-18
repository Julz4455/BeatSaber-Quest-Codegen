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
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.AesEngine
  class AesEngine : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IBlockCipher {
    public:
    // private System.Int32 ROUNDS
    // Offset: 0x10
    int ROUNDS;
    // private System.UInt32[][] WorkingKey
    // Offset: 0x18
    ::Array<::Array<uint>*>* WorkingKey;
    // private System.UInt32 C0
    // Offset: 0x20
    uint C0;
    // private System.UInt32 C1
    // Offset: 0x24
    uint C1;
    // private System.UInt32 C2
    // Offset: 0x28
    uint C2;
    // private System.UInt32 C3
    // Offset: 0x2C
    uint C3;
    // private System.Boolean forEncryption
    // Offset: 0x30
    bool forEncryption;
    // private System.Byte[] s
    // Offset: 0x38
    ::Array<uint8_t>* s;
    // Get static field: static private readonly System.Byte[] S
    static ::Array<uint8_t>* _get_S();
    // Set static field: static private readonly System.Byte[] S
    static void _set_S(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] Si
    static ::Array<uint8_t>* _get_Si();
    // Set static field: static private readonly System.Byte[] Si
    static void _set_Si(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] rcon
    static ::Array<uint8_t>* _get_rcon();
    // Set static field: static private readonly System.Byte[] rcon
    static void _set_rcon(::Array<uint8_t>* value);
    // Get static field: static private readonly System.UInt32[] T0
    static ::Array<uint>* _get_T0();
    // Set static field: static private readonly System.UInt32[] T0
    static void _set_T0(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] Tinv0
    static ::Array<uint>* _get_Tinv0();
    // Set static field: static private readonly System.UInt32[] Tinv0
    static void _set_Tinv0(::Array<uint>* value);
    // static private System.UInt32 Shift(System.UInt32 r, System.Int32 shift)
    // Offset: 0x171BCC8
    static uint Shift(uint r, int shift);
    // static private System.UInt32 FFmulX(System.UInt32 x)
    // Offset: 0x171BCD0
    static uint FFmulX(uint x);
    // static private System.UInt32 FFmulX2(System.UInt32 x)
    // Offset: 0x171BCF0
    static uint FFmulX2(uint x);
    // static private System.UInt32 Inv_Mcol(System.UInt32 x)
    // Offset: 0x171BD0C
    static uint Inv_Mcol(uint x);
    // static private System.UInt32 SubWord(System.UInt32 x)
    // Offset: 0x171BDB4
    static uint SubWord(uint x);
    // private System.UInt32[][] GenerateWorkingKey(System.Byte[] key, System.Boolean forEncryption)
    // Offset: 0x171BE90
    ::Array<::Array<uint>*>* GenerateWorkingKey(::Array<uint8_t>* key, bool forEncryption);
    // private System.Void UnPackBlock(System.Byte[] bytes, System.Int32 off)
    // Offset: 0x171D068
    void UnPackBlock(::Array<uint8_t>* bytes, int off);
    // private System.Void PackBlock(System.Byte[] bytes, System.Int32 off)
    // Offset: 0x171E34C
    void PackBlock(::Array<uint8_t>* bytes, int off);
    // private System.Void EncryptBlock(System.UInt32[][] KW)
    // Offset: 0x171D0E4
    void EncryptBlock(::Array<::Array<uint>*>* KW);
    // private System.Void DecryptBlock(System.UInt32[][] KW)
    // Offset: 0x171DA0C
    void DecryptBlock(::Array<::Array<uint>*>* KW);
    // static private System.Void .cctor()
    // Offset: 0x171E3C0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x171CD1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AesEngine* New_ctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x171CD24
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x171CEEC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x171CF34
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x171CF3C
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x171CF44
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x171E3BC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.AesEngine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::AesEngine*, "Org.BouncyCastle.Crypto.Engines", "AesEngine");
#pragma pack(pop)
