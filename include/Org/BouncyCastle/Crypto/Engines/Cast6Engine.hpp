// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.Cast5Engine
#include "Org/BouncyCastle/Crypto/Engines/Cast5Engine.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x60
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.Cast6Engine
  // [] Offset: FFFFFFFF
  class Cast6Engine : public Org::BouncyCastle::Crypto::Engines::Cast5Engine {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    // private System.Int32[] _Kr
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* Kr;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.UInt32[] _Km
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint>* Km;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Int32[] _Tr
    // Size: 0x8
    // Offset: 0x48
    ::Array<int>* Tr;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.UInt32[] _Tm
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint>* Tm;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] _workingKey
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: Cast6Engine
    Cast6Engine(::Array<int>* Kr_ = {}, ::Array<uint>* Km_ = {}, ::Array<int>* Tr_ = {}, ::Array<uint>* Tm_ = {}, ::Array<uint>* workingKey_ = {}) noexcept : Kr{Kr_}, Km{Km_}, Tr{Tr_}, Tm{Tm_}, workingKey{workingKey_} {}
    // private System.Void CAST_Encipher(System.UInt32 A, System.UInt32 B, System.UInt32 C, System.UInt32 D, System.UInt32[] result)
    // Offset: 0x17CC710
    void CAST_Encipher(uint A, uint B, uint C, uint D, ::Array<uint>* result);
    // private System.Void CAST_Decipher(System.UInt32 A, System.UInt32 B, System.UInt32 C, System.UInt32 D, System.UInt32[] result)
    // Offset: 0x17CCC14
    void CAST_Decipher(uint A, uint B, uint C, uint D, ::Array<uint>* result);
    // public System.Void .ctor()
    // Offset: 0x17CB97C
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Void Cast5Engine::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cast6Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Cast6Engine").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cast6Engine*, creationType>()));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x17CBA88
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.String Cast5Engine::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Void Reset()
    // Offset: 0x17CBAD0
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Void Cast5Engine::Reset()
    void Reset();
    // public override System.Int32 GetBlockSize()
    // Offset: 0x17CBAD4
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Int32 Cast5Engine::GetBlockSize()
    int GetBlockSize();
    // override System.Void SetKey(System.Byte[] key)
    // Offset: 0x17CBADC
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Void Cast5Engine::SetKey(System.Byte[] key)
    void SetKey(::Array<uint8_t>* key);
    // override System.Int32 EncryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x17CC58C
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Int32 Cast5Engine::EncryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    int EncryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // override System.Int32 DecryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x17CCA90
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Int32 Cast5Engine::DecryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    int DecryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
  }; // Org.BouncyCastle.Crypto.Engines.Cast6Engine
  static check_size<sizeof(Cast6Engine), 88 + sizeof(::Array<uint>*)> __Org_BouncyCastle_Crypto_Engines_Cast6EngineSizeCheck;
  static_assert(sizeof(Cast6Engine) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Cast6Engine*, "Org.BouncyCastle.Crypto.Engines", "Cast6Engine");
#pragma pack(pop)
