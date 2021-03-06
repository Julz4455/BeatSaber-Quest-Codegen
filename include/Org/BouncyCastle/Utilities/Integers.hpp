// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Integers
  // [] Offset: FFFFFFFF
  class Integers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Integers
    Integers() noexcept {}
    // static public System.Int32 NumberOfLeadingZeros(System.Int32 i)
    // Offset: 0x1E5E788
    static int NumberOfLeadingZeros(int i);
    // static public System.Int32 NumberOfTrailingZeros(System.Int32 i)
    // Offset: 0x1E5E804
    static int NumberOfTrailingZeros(int i);
    // static public System.Int32 RotateLeft(System.Int32 i, System.Int32 distance)
    // Offset: 0x1E5E838
    static int RotateLeft(int i, int distance);
    // static public System.UInt32 RotateLeft(System.UInt32 i, System.Int32 distance)
    // Offset: 0x1E5E84C
    static uint RotateLeft(uint i, int distance);
  }; // Org.BouncyCastle.Utilities.Integers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Integers*, "Org.BouncyCastle.Utilities", "Integers");
