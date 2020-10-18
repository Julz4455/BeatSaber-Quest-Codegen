// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DHValidationParameters
  class DHValidationParameters : public ::Il2CppObject {
    public:
    // private readonly System.Byte[] seed
    // Offset: 0x10
    ::Array<uint8_t>* seed;
    // private readonly System.Int32 counter
    // Offset: 0x18
    int counter;
    // public System.Void .ctor(System.Byte[] seed, System.Int32 counter)
    // Offset: 0x10EDA64
    static DHValidationParameters* New_ctor(::Array<uint8_t>* seed, int counter);
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.DHValidationParameters other)
    // Offset: 0x10EDC00
    bool Equals(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x10EDB50
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x10EDCAC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.DHValidationParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHValidationParameters");
#pragma pack(pop)
