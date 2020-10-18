// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.NUnitEqualityComparer
#include "NUnit/Framework/Constraints/NUnitEqualityComparer.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.NUnitEqualityComparer/FailurePoint
  class NUnitEqualityComparer::FailurePoint : public ::Il2CppObject {
    public:
    // public System.Int64 Position
    // Offset: 0x10
    int64_t Position;
    // public System.Object ExpectedValue
    // Offset: 0x18
    ::Il2CppObject* ExpectedValue;
    // public System.Object ActualValue
    // Offset: 0x20
    ::Il2CppObject* ActualValue;
    // public System.Boolean ExpectedHasData
    // Offset: 0x28
    bool ExpectedHasData;
    // public System.Boolean ActualHasData
    // Offset: 0x29
    bool ActualHasData;
    // public System.Void .ctor()
    // Offset: 0x15E87BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NUnitEqualityComparer::FailurePoint* New_ctor();
  }; // NUnit.Framework.Constraints.NUnitEqualityComparer/FailurePoint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*, "NUnit.Framework.Constraints", "NUnitEqualityComparer/FailurePoint");
#pragma pack(pop)
