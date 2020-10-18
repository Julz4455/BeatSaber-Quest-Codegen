// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IStreamCipher
#include "Org/BouncyCastle/Crypto/IStreamCipher.hpp"
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
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.HC128Engine
  class HC128Engine : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IStreamCipher {
    public:
    // private System.UInt32[] p
    // Offset: 0x10
    ::Array<uint>* p;
    // private System.UInt32[] q
    // Offset: 0x18
    ::Array<uint>* q;
    // private System.UInt32 cnt
    // Offset: 0x20
    uint cnt;
    // private System.Byte[] key
    // Offset: 0x28
    ::Array<uint8_t>* key;
    // private System.Byte[] iv
    // Offset: 0x30
    ::Array<uint8_t>* iv;
    // private System.Boolean initialised
    // Offset: 0x38
    bool initialised;
    // private System.Byte[] buf
    // Offset: 0x40
    ::Array<uint8_t>* buf;
    // private System.Int32 idx
    // Offset: 0x48
    int idx;
    // static private System.UInt32 F1(System.UInt32 x)
    // Offset: 0x1BCEDF8
    static uint F1(uint x);
    // static private System.UInt32 F2(System.UInt32 x)
    // Offset: 0x1BCEE10
    static uint F2(uint x);
    // private System.UInt32 G1(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1BCEE20
    uint G1(uint x, uint y, uint z);
    // private System.UInt32 G2(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1BCEE34
    uint G2(uint x, uint y, uint z);
    // static private System.UInt32 RotateLeft(System.UInt32 x, System.Int32 bits)
    // Offset: 0x1BCEE48
    static uint RotateLeft(uint x, int bits);
    // static private System.UInt32 RotateRight(System.UInt32 x, System.Int32 bits)
    // Offset: 0x1BCEE08
    static uint RotateRight(uint x, int bits);
    // private System.UInt32 H1(System.UInt32 x)
    // Offset: 0x1BCEE54
    uint H1(uint x);
    // private System.UInt32 H2(System.UInt32 x)
    // Offset: 0x1BCEEAC
    uint H2(uint x);
    // static private System.UInt32 Mod1024(System.UInt32 x)
    // Offset: 0x1BCEF04
    static uint Mod1024(uint x);
    // static private System.UInt32 Mod512(System.UInt32 x)
    // Offset: 0x1BCEF0C
    static uint Mod512(uint x);
    // static private System.UInt32 Dim(System.UInt32 x, System.UInt32 y)
    // Offset: 0x1BCEF14
    static uint Dim(uint x, uint y);
    // private System.UInt32 Step()
    // Offset: 0x1BCEF20
    uint Step();
    // private System.Void Init()
    // Offset: 0x1BCF0EC
    void Init();
    // public System.String get_AlgorithmName()
    // Offset: 0x1BCF3F8
    ::Il2CppString* get_AlgorithmName();
    // private System.Byte GetByte()
    // Offset: 0x1BCF634
    uint8_t GetByte();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1BCF440
    // Implemented from: Org.BouncyCastle.Crypto.IStreamCipher
    // Base method: System.Void IStreamCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1BCF6B4
    // Implemented from: Org.BouncyCastle.Crypto.IStreamCipher
    // Base method: System.Void IStreamCipher::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    void ProcessBytes(::Array<uint8_t>* input, int inOff, int len, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1BCF854
    // Implemented from: Org.BouncyCastle.Crypto.IStreamCipher
    // Base method: System.Void IStreamCipher::Reset()
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1BCF858
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HC128Engine* New_ctor();
  }; // Org.BouncyCastle.Crypto.Engines.HC128Engine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::HC128Engine*, "Org.BouncyCastle.Crypto.Engines", "HC128Engine");
#pragma pack(pop)
