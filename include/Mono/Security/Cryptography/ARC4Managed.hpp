// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.RC4
#include "Mono/Security/Cryptography/RC4.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x5B
  // Autogenerated type: Mono.Security.Cryptography.ARC4Managed
  // [] Offset: FFFFFFFF
  class ARC4Managed : public Mono::Security::Cryptography::RC4/*, public System::Security::Cryptography::ICryptoTransform*/ {
    public:
    // Writing base type padding for base size: 0x44 to desired offset: 0x48
    char ___base_padding[0x4] = {};
    // private System.Byte[] key
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* key;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] state
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* state;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte x
    // Size: 0x1
    // Offset: 0x58
    uint8_t x;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte y
    // Size: 0x1
    // Offset: 0x59
    uint8_t y;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x5A
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ARC4Managed
    ARC4Managed(::Array<uint8_t>* key_ = {}, ::Array<uint8_t>* state_ = {}, uint8_t x_ = {}, uint8_t y_ = {}, bool m_disposed_ = {}) noexcept : key{key_}, state{state_}, x{x_}, y{y_}, m_disposed{m_disposed_} {}
    // Creating interface conversion operator: operator System::Security::Cryptography::ICryptoTransform
    operator System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // private System.Void KeySetup(System.Byte[] key)
    // Offset: 0x17B1F2C
    void KeySetup(::Array<uint8_t>* key);
    // private System.Void CheckInput(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x17B21AC
    void CheckInput(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // private System.Int32 InternalTransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x17B2460
    int InternalTransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // public System.Void .ctor()
    // Offset: 0x17B1B10
    // Implemented from: Mono.Security.Cryptography.RC4
    // Base method: System.Void RC4::.ctor()
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ARC4Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("ARC4Managed").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ARC4Managed*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x17B1C48
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x17B1CBC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Byte[] get_Key()
    // Offset: 0x17B1D98
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_Key()
    ::Array<uint8_t>* get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x17B1E34
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::Array<uint8_t>* value);
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    // Offset: 0x17B2020
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgvIV);
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    // Offset: 0x17B204C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgvIV);
    // public override System.Void GenerateIV()
    // Offset: 0x17B2084
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateIV()
    void GenerateIV();
    // public override System.Void GenerateKey()
    // Offset: 0x17B20E8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateKey()
    void GenerateKey();
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x17B2194
    // Implemented from: System.Security.Cryptography.ICryptoTransform
    // Base method: System.Boolean ICryptoTransform::get_CanTransformMultipleBlocks()
    bool get_CanTransformMultipleBlocks();
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x17B219C
    // Implemented from: System.Security.Cryptography.ICryptoTransform
    // Base method: System.Int32 ICryptoTransform::get_InputBlockSize()
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x17B21A4
    // Implemented from: System.Security.Cryptography.ICryptoTransform
    // Base method: System.Int32 ICryptoTransform::get_OutputBlockSize()
    int get_OutputBlockSize();
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x17B22F4
    // Implemented from: System.Security.Cryptography.ICryptoTransform
    // Base method: System.Int32 ICryptoTransform::TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    int TransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x17B25B8
    // Implemented from: System.Security.Cryptography.ICryptoTransform
    // Base method: System.Byte[] ICryptoTransform::TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    ::Array<uint8_t>* TransformFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
  }; // Mono.Security.Cryptography.ARC4Managed
  static check_size<sizeof(ARC4Managed), 90 + sizeof(bool)> __Mono_Security_Cryptography_ARC4ManagedSizeCheck;
  static_assert(sizeof(ARC4Managed) == 0x5B);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::ARC4Managed*, "Mono.Security.Cryptography", "ARC4Managed");
#pragma pack(pop)
