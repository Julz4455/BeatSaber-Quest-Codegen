// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Math.Prime.Generator.PrimeGeneratorBase
#include "Mono/Math/Prime/Generator/PrimeGeneratorBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime.Generator
namespace Mono::Math::Prime::Generator {
  // Autogenerated type: Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
  class SequentialSearchPrimeGeneratorBase : public Mono::Math::Prime::Generator::PrimeGeneratorBase {
    public:
    // protected Mono.Math.BigInteger GenerateSearchBase(System.Int32 bits, System.Object context)
    // Offset: 0x1B7CC44
    Mono::Math::BigInteger* GenerateSearchBase(int bits, ::Il2CppObject* context);
    // public Mono.Math.BigInteger GenerateNewPrime(System.Int32 bits, System.Object context)
    // Offset: 0x1B7CCD8
    Mono::Math::BigInteger* GenerateNewPrime(int bits, ::Il2CppObject* context);
    // protected System.Boolean IsPrimeAcceptable(Mono.Math.BigInteger bi, System.Object context)
    // Offset: 0x1B7D40C
    bool IsPrimeAcceptable(Mono::Math::BigInteger* bi, ::Il2CppObject* context);
    // public override Mono.Math.BigInteger GenerateNewPrime(System.Int32 bits)
    // Offset: 0x1B7CCC8
    // Implemented from: Mono.Math.Prime.Generator.PrimeGeneratorBase
    // Base method: Mono.Math.BigInteger PrimeGeneratorBase::GenerateNewPrime(System.Int32 bits)
    Mono::Math::BigInteger* GenerateNewPrime(int bits);
    // public System.Void .ctor()
    // Offset: 0x1B7BAD4
    // Implemented from: Mono.Math.Prime.Generator.PrimeGeneratorBase
    // Base method: System.Void PrimeGeneratorBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static SequentialSearchPrimeGeneratorBase* New_ctor();
  }; // Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*, "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase");
#pragma pack(pop)
