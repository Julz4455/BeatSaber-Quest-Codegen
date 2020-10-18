// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestParameters
#include "NUnit/Framework/Internal/TestParameters.hpp"
// Including type: NUnit.Framework.Interfaces.ITestCaseData
#include "NUnit/Framework/Interfaces/ITestCaseData.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestCaseParameters
  class TestCaseParameters : public NUnit::Framework::Internal::TestParameters, public NUnit::Framework::Interfaces::ITestCaseData {
    public:
    // private System.Object _expectedResult
    // Offset: 0x38
    ::Il2CppObject* expectedResult;
    // private System.Boolean <HasExpectedResult>k__BackingField
    // Offset: 0x40
    bool HasExpectedResult;
    // public System.Object get_ExpectedResult()
    // Offset: 0x2177F38
    ::Il2CppObject* get_ExpectedResult();
    // public System.Boolean get_HasExpectedResult()
    // Offset: 0x2177F40
    bool get_HasExpectedResult();
    // public System.Void .ctor()
    // Offset: 0x2177E28
    // Implemented from: NUnit.Framework.Internal.TestParameters
    // Base method: System.Void TestParameters::.ctor()
    // Base method: System.Void Object::.ctor()
    static TestCaseParameters* New_ctor();
    // public System.Void .ctor(System.Object[] args)
    // Offset: 0x2177EA4
    // Implemented from: NUnit.Framework.Internal.TestParameters
    // Base method: System.Void TestParameters::.ctor(System.Object[] args)
    static TestCaseParameters* New_ctor(::Array<::Il2CppObject*>* args);
  }; // NUnit.Framework.Internal.TestCaseParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestCaseParameters*, "NUnit.Framework.Internal", "TestCaseParameters");
#pragma pack(pop)
