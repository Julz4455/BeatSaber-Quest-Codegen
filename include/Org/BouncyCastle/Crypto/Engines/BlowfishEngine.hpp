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
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.BlowfishEngine
  class BlowfishEngine : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IBlockCipher {
    public:
    // private readonly System.UInt32[] S0
    // Offset: 0x10
    ::Array<uint>* S0;
    // private readonly System.UInt32[] S1
    // Offset: 0x18
    ::Array<uint>* S1;
    // private readonly System.UInt32[] S2
    // Offset: 0x20
    ::Array<uint>* S2;
    // private readonly System.UInt32[] S3
    // Offset: 0x28
    ::Array<uint>* S3;
    // private readonly System.UInt32[] P
    // Offset: 0x30
    ::Array<uint>* P;
    // private System.Boolean encrypting
    // Offset: 0x38
    bool encrypting;
    // private System.Byte[] workingKey
    // Offset: 0x40
    ::Array<uint8_t>* workingKey;
    // Get static field: static private readonly System.UInt32[] KP
    static ::Array<uint>* _get_KP();
    // Set static field: static private readonly System.UInt32[] KP
    static void _set_KP(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] KS0
    static ::Array<uint>* _get_KS0();
    // Set static field: static private readonly System.UInt32[] KS0
    static void _set_KS0(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] KS1
    static ::Array<uint>* _get_KS1();
    // Set static field: static private readonly System.UInt32[] KS1
    static void _set_KS1(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] KS2
    static ::Array<uint>* _get_KS2();
    // Set static field: static private readonly System.UInt32[] KS2
    static void _set_KS2(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] KS3
    static ::Array<uint>* _get_KS3();
    // Set static field: static private readonly System.UInt32[] KS3
    static void _set_KS3(::Array<uint>* value);
    // Get static field: static private readonly System.Int32 ROUNDS
    static int _get_ROUNDS();
    // Set static field: static private readonly System.Int32 ROUNDS
    static void _set_ROUNDS(int value);
    // Get static field: static private readonly System.Int32 SBOX_SK
    static int _get_SBOX_SK();
    // Set static field: static private readonly System.Int32 SBOX_SK
    static void _set_SBOX_SK(int value);
    // Get static field: static private readonly System.Int32 P_SZ
    static int _get_P_SZ();
    // Set static field: static private readonly System.Int32 P_SZ
    static void _set_P_SZ(int value);
    // private System.UInt32 F(System.UInt32 x)
    // Offset: 0x1BC23C0
    uint F(uint x);
    // private System.Void ProcessTable(System.UInt32 xl, System.UInt32 xr, System.UInt32[] table)
    // Offset: 0x1BC246C
    void ProcessTable(uint xl, uint xr, ::Array<uint>* table);
    // private System.Void SetKey(System.Byte[] key)
    // Offset: 0x1BC1BA0
    void SetKey(::Array<uint8_t>* key);
    // private System.Void EncryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x1BC2048
    void EncryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // private System.Void DecryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x1BC220C
    void DecryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // static private System.Void .cctor()
    // Offset: 0x1BC264C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1BC1908
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BlowfishEngine* New_ctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1BC1A34
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x1BC1ED4
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1BC1F1C
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1BC1F24
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1BC23B4
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1BC23B8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
  }; // Org.BouncyCastle.Crypto.Engines.BlowfishEngine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*, "Org.BouncyCastle.Crypto.Engines", "BlowfishEngine");
#pragma pack(pop)
