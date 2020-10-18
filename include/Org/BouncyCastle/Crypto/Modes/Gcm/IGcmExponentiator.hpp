// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
  class IGcmExponentiator {
    public:
    // public System.Void Init(System.Byte[] x)
    // Offset: 0xFFFFFFFF
    void Init(::Array<uint8_t>* x);
    // public System.Void ExponentiateX(System.Int64 pow, System.Byte[] output)
    // Offset: 0xFFFFFFFF
    void ExponentiateX(int64_t pow, ::Array<uint8_t>* output);
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*, "Org.BouncyCastle.Crypto.Modes.Gcm", "IGcmExponentiator");
#pragma pack(pop)
