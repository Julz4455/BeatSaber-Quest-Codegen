// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x21
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RC532Engine
  // [] Offset: FFFFFFFF
  class RC532Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32 _noRounds
    // Size: 0x4
    // Offset: 0x10
    int noRounds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: noRounds and: S
    char __padding0[0x4] = {};
    // private System.Int32[] _S
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* S;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x20
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RC532Engine
    RC532Engine(int noRounds_ = {}, ::Array<int>* S_ = {}, bool forEncryption_ = {}) noexcept : noRounds{noRounds_}, S{S_}, forEncryption{forEncryption_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Int32 P32
    static int _get_P32();
    // Set static field: static private readonly System.Int32 P32
    static void _set_P32(int value);
    // Get static field: static private readonly System.Int32 Q32
    static int _get_Q32();
    // Set static field: static private readonly System.Int32 Q32
    static void _set_Q32(int value);
    // private System.Void SetKey(System.Byte[] key)
    // Offset: 0x17D6384
    void SetKey(::Array<uint8_t>* key);
    // private System.Int32 EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x17D6764
    int EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x17D6648
    int DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 RotateLeft(System.Int32 x, System.Int32 y)
    // Offset: 0x17D688C
    int RotateLeft(int x, int y);
    // private System.Int32 RotateRight(System.Int32 x, System.Int32 y)
    // Offset: 0x17D69A0
    int RotateRight(int x, int y);
    // private System.Int32 BytesToWord(System.Byte[] src, System.Int32 srcOff)
    // Offset: 0x17D6898
    int BytesToWord(::Array<uint8_t>* src, int srcOff);
    // private System.Void WordToBytes(System.Int32 word, System.Byte[] dst, System.Int32 dstOff)
    // Offset: 0x17D6914
    void WordToBytes(int word, ::Array<uint8_t>* dst, int dstOff);
    // static private System.Void .cctor()
    // Offset: 0x17D69A8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17D60DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC532Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("RC532Engine").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC532Engine*, creationType>()));
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x17D6108
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x17D6150
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x17D6158
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x17D6160
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17D6620
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x17D6888
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.RC532Engine
  static check_size<sizeof(RC532Engine), 32 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_RC532EngineSizeCheck;
  static_assert(sizeof(RC532Engine) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC532Engine*, "Org.BouncyCastle.Crypto.Engines", "RC532Engine");
#pragma pack(pop)
