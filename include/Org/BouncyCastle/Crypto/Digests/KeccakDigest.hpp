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
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.KeccakDigest
  class KeccakDigest : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable {
    public:
    // private System.UInt64[] state
    // Offset: 0x10
    ::Array<uint64_t>* state;
    // protected System.Byte[] dataQueue
    // Offset: 0x18
    ::Array<uint8_t>* dataQueue;
    // protected System.Int32 rate
    // Offset: 0x20
    int rate;
    // protected System.Int32 bitsInQueue
    // Offset: 0x24
    int bitsInQueue;
    // protected System.Int32 fixedOutputLength
    // Offset: 0x28
    int fixedOutputLength;
    // protected System.Boolean squeezing
    // Offset: 0x2C
    bool squeezing;
    // Get static field: static private readonly System.UInt64[] KeccakRoundConstants
    static ::Array<uint64_t>* _get_KeccakRoundConstants();
    // Set static field: static private readonly System.UInt64[] KeccakRoundConstants
    static void _set_KeccakRoundConstants(::Array<uint64_t>* value);
    // public System.Void .ctor(System.Int32 bitLength)
    // Offset: 0x1B0223C
    static KeccakDigest* New_ctor(int bitLength);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.KeccakDigest source)
    // Offset: 0x1B023C0
    static KeccakDigest* New_ctor(Org::BouncyCastle::Crypto::Digests::KeccakDigest* source);
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.KeccakDigest source)
    // Offset: 0x1B02468
    void CopyIn(Org::BouncyCastle::Crypto::Digests::KeccakDigest* source);
    // private System.Void Init(System.Int32 bitLength)
    // Offset: 0x1B022E4
    void Init(int bitLength);
    // private System.Void InitSponge(System.Int32 rate)
    // Offset: 0x1B029C8
    void InitSponge(int rate);
    // protected System.Void Absorb(System.Byte data)
    // Offset: 0x1B02580
    void Absorb(uint8_t data);
    // protected System.Void Absorb(System.Byte[] data, System.Int32 off, System.Int32 len)
    // Offset: 0x1B02694
    void Absorb(::Array<uint8_t>* data, int off, int len);
    // protected System.Void AbsorbBits(System.Int32 data, System.Int32 bits)
    // Offset: 0x1B02B84
    void AbsorbBits(int data, int bits);
    // private System.Void PadAndSwitchToSqueezingPhase()
    // Offset: 0x1B02CCC
    void PadAndSwitchToSqueezingPhase();
    // protected System.Void Squeeze(System.Byte[] output, System.Int32 offset, System.Int64 outputLength)
    // Offset: 0x1B02868
    void Squeeze(::Array<uint8_t>* output, int offset, int64_t outputLength);
    // private System.Void KeccakAbsorb(System.Byte[] data, System.Int32 off)
    // Offset: 0x1B02ACC
    void KeccakAbsorb(::Array<uint8_t>* data, int off);
    // private System.Void KeccakExtract()
    // Offset: 0x1B02E74
    void KeccakExtract();
    // private System.Void KeccakPermutation()
    // Offset: 0x1B02EB8
    void KeccakPermutation();
    // static private System.Void .cctor()
    // Offset: 0x1B03590
    static void _cctor();
    // public System.String get_AlgorithmName()
    // Offset: 0x1B024F0
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.String IDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x1B02570
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::GetDigestSize()
    int GetDigestSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1B0257C
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::Update(System.Byte input)
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x1B02690
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1B02820
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1B029B4
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::Reset()
    void Reset();
    // public System.Int32 GetByteLength()
    // Offset: 0x1B029BC
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::GetByteLength()
    int GetByteLength();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1B0349C
    // Implemented from: Org.BouncyCastle.Utilities.IMemoable
    // Base method: Org.BouncyCastle.Utilities.IMemoable IMemoable::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1B034FC
    // Implemented from: Org.BouncyCastle.Utilities.IMemoable
    // Base method: System.Void IMemoable::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.KeccakDigest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::KeccakDigest*, "Org.BouncyCastle.Crypto.Digests", "KeccakDigest");
#pragma pack(pop)
