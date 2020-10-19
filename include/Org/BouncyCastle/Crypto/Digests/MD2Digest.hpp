// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.MD2Digest
  class MD2Digest : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable {
    public:
    // private System.Byte[] X
    // Offset: 0x10
    ::Array<uint8_t>* X;
    // private System.Int32 xOff
    // Offset: 0x18
    int xOff;
    // private System.Byte[] M
    // Offset: 0x20
    ::Array<uint8_t>* M;
    // private System.Int32 mOff
    // Offset: 0x28
    int mOff;
    // private System.Byte[] C
    // Offset: 0x30
    ::Array<uint8_t>* C;
    // private System.Int32 COff
    // Offset: 0x38
    int COff;
    // Get static field: static private readonly System.Byte[] S
    static ::Array<uint8_t>* _get_S();
    // Set static field: static private readonly System.Byte[] S
    static void _set_S(::Array<uint8_t>* value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.MD2Digest t)
    // Offset: 0x18A4640
    static MD2Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::MD2Digest* t);
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.MD2Digest t)
    // Offset: 0x18A46FC
    void CopyIn(Org::BouncyCastle::Crypto::Digests::MD2Digest* t);
    // System.Void ProcessChecksum(System.Byte[] m)
    // Offset: 0x18A48C4
    void ProcessChecksum(::Array<uint8_t>* m);
    // System.Void ProcessBlock(System.Byte[] m)
    // Offset: 0x18A4A10
    void ProcessBlock(::Array<uint8_t>* m);
    // static private System.Void .cctor()
    // Offset: 0x18A4E74
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18A44D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MD2Digest* New_ctor();
    // public System.String get_AlgorithmName()
    // Offset: 0x18A479C
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.String IDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x18A47E4
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::GetDigestSize()
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x18A47EC
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::GetByteLength()
    int GetByteLength();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18A47F4
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x18A457C
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::Reset()
    void Reset();
    // public System.Void Update(System.Byte input)
    // Offset: 0x18A4BC0
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::Update(System.Byte input)
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x18A4C3C
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x18A4D80
    // Implemented from: Org.BouncyCastle.Utilities.IMemoable
    // Base method: Org.BouncyCastle.Utilities.IMemoable IMemoable::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x18A4DE0
    // Implemented from: Org.BouncyCastle.Utilities.IMemoable
    // Base method: System.Void IMemoable::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.MD2Digest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::MD2Digest*, "Org.BouncyCastle.Crypto.Digests", "MD2Digest");
#pragma pack(pop)