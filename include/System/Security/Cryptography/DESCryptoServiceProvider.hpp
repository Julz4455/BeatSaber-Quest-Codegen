// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.DES
#include "System/Security/Cryptography/DES.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DESCryptoServiceProvider
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAAF1C
  class DESCryptoServiceProvider : public System::Security::Cryptography::DES {
    public:
    // Creating value type constructor for type: DESCryptoServiceProvider
    DESCryptoServiceProvider() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1A41A58
    // Implemented from: System.Security.Cryptography.DES
    // Base method: System.Void DES::.ctor()
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DESCryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::DESCryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DESCryptoServiceProvider*, creationType>()));
    }
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    // Offset: 0x1A41DA0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV);
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    // Offset: 0x1A4211C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV);
    // public override System.Void GenerateKey()
    // Offset: 0x1A4224C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateKey()
    void GenerateKey();
    // public override System.Void GenerateIV()
    // Offset: 0x1A42350
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateIV()
    void GenerateIV();
  }; // System.Security.Cryptography.DESCryptoServiceProvider
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DESCryptoServiceProvider*, "System.Security.Cryptography", "DESCryptoServiceProvider");
