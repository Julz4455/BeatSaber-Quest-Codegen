// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Autogenerated type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
  class AsymmetricKeyParameter : public ::Il2CppObject, public Org::BouncyCastle::Crypto::ICipherParameters {
    public:
    // private readonly System.Boolean privateKey
    // Offset: 0x10
    bool privateKey;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return privateKey;
    }
    // protected System.Void .ctor(System.Boolean privateKey)
    // Offset: 0x18787B0
    static AsymmetricKeyParameter* New_ctor(bool privateKey);
    // public System.Boolean get_IsPrivate()
    // Offset: 0x18787E0
    bool get_IsPrivate();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.AsymmetricKeyParameter other)
    // Offset: 0x187889C
    bool Equals(Org::BouncyCastle::Crypto::AsymmetricKeyParameter* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x18787E8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x18788CC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.AsymmetricKeyParameter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, "Org.BouncyCastle.Crypto", "AsymmetricKeyParameter");
#pragma pack(pop)
