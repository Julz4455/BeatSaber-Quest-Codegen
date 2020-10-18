// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.FloatingPointNumerics
  class FloatingPointNumerics : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Constraints::FloatingPointNumerics::FloatIntUnion
    struct FloatIntUnion;
    // Nested type: NUnit::Framework::Constraints::FloatingPointNumerics::DoubleLongUnion
    struct DoubleLongUnion;
    // static public System.Boolean AreAlmostEqualUlps(System.Single left, System.Single right, System.Int32 maxUlps)
    // Offset: 0x15E2DC0
    static bool AreAlmostEqualUlps(float left, float right, int maxUlps);
    // static public System.Boolean AreAlmostEqualUlps(System.Double left, System.Double right, System.Int64 maxUlps)
    // Offset: 0x15E2EDC
    static bool AreAlmostEqualUlps(double left, double right, int64_t maxUlps);
  }; // NUnit.Framework.Constraints.FloatingPointNumerics
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::FloatingPointNumerics*, "NUnit.Framework.Constraints", "FloatingPointNumerics");
#pragma pack(pop)
