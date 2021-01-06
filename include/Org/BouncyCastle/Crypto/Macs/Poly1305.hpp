// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x78
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.Poly1305
  // [] Offset: FFFFFFFF
  class Poly1305 : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private readonly System.Byte[] singleByte
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* singleByte;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt32 r0
    // Size: 0x4
    // Offset: 0x20
    uint r0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 r1
    // Size: 0x4
    // Offset: 0x24
    uint r1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 r2
    // Size: 0x4
    // Offset: 0x28
    uint r2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 r3
    // Size: 0x4
    // Offset: 0x2C
    uint r3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 r4
    // Size: 0x4
    // Offset: 0x30
    uint r4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 s1
    // Size: 0x4
    // Offset: 0x34
    uint s1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 s2
    // Size: 0x4
    // Offset: 0x38
    uint s2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 s3
    // Size: 0x4
    // Offset: 0x3C
    uint s3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 s4
    // Size: 0x4
    // Offset: 0x40
    uint s4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 k0
    // Size: 0x4
    // Offset: 0x44
    uint k0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 k1
    // Size: 0x4
    // Offset: 0x48
    uint k1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 k2
    // Size: 0x4
    // Offset: 0x4C
    uint k2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 k3
    // Size: 0x4
    // Offset: 0x50
    uint k3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: k3 and: currentBlock
    char __padding14[0x4] = {};
    // private System.Byte[] currentBlock
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* currentBlock;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 currentBlockOffset
    // Size: 0x4
    // Offset: 0x60
    int currentBlockOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 h0
    // Size: 0x4
    // Offset: 0x64
    uint h0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 h1
    // Size: 0x4
    // Offset: 0x68
    uint h1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 h2
    // Size: 0x4
    // Offset: 0x6C
    uint h2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 h3
    // Size: 0x4
    // Offset: 0x70
    uint h3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 h4
    // Size: 0x4
    // Offset: 0x74
    uint h4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: Poly1305
    Poly1305(Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}, ::Array<uint8_t>* singleByte_ = {}, uint r0_ = {}, uint r1_ = {}, uint r2_ = {}, uint r3_ = {}, uint r4_ = {}, uint s1_ = {}, uint s2_ = {}, uint s3_ = {}, uint s4_ = {}, uint k0_ = {}, uint k1_ = {}, uint k2_ = {}, uint k3_ = {}, ::Array<uint8_t>* currentBlock_ = {}, int currentBlockOffset_ = {}, uint h0_ = {}, uint h1_ = {}, uint h2_ = {}, uint h3_ = {}, uint h4_ = {}) noexcept : cipher{cipher_}, singleByte{singleByte_}, r0{r0_}, r1{r1_}, r2{r2_}, r3{r3_}, r4{r4_}, s1{s1_}, s2{s2_}, s3{s3_}, s4{s4_}, k0{k0_}, k1{k1_}, k2{k2_}, k3{k3_}, currentBlock{currentBlock_}, currentBlockOffset{currentBlockOffset_}, h0{h0_}, h1{h1_}, h2{h2_}, h3{h3_}, h4{h4_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // private System.Void SetKey(System.Byte[] key, System.Byte[] nonce)
    // Offset: 0x14A0960
    void SetKey(::Array<uint8_t>* key, ::Array<uint8_t>* nonce);
    // private System.Void ProcessBlock()
    // Offset: 0x14A0DDC
    void ProcessBlock();
    // static private System.UInt64 mul32x32_64(System.UInt32 i1, System.UInt32 i2)
    // Offset: 0x14A100C
    static uint64_t mul32x32_64(uint i1, uint i2);
    // public System.Void .ctor()
    // Offset: 0x14A0748
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Poly1305* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("Poly1305").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Poly1305*, creationType>()));
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x14A07E4
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x14A0C9C
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::GetMacSize()
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x14A0CA4
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Update(System.Byte input)
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x14A0CE4
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14A1014
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x14A0C90
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.Poly1305
  static check_size<sizeof(Poly1305), 116 + sizeof(uint)> __Org_BouncyCastle_Crypto_Macs_Poly1305SizeCheck;
  static_assert(sizeof(Poly1305) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::Poly1305*, "Org.BouncyCastle.Crypto.Macs", "Poly1305");
#pragma pack(pop)
