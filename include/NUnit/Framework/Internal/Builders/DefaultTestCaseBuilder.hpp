// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITestCaseBuilder
#include "NUnit/Framework/Interfaces/ITestCaseBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Builders
namespace NUnit::Framework::Internal::Builders {
  // Forward declaring type: NUnitTestCaseBuilder
  class NUnitTestCaseBuilder;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Autogenerated type: NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder
  class DefaultTestCaseBuilder : public ::Il2CppObject, public NUnit::Framework::Interfaces::ITestCaseBuilder {
    public:
    // private NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder _nunitTestCaseBuilder
    // Offset: 0x10
    NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder* nunitTestCaseBuilder;
    // Creating conversion operator: operator NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*
    constexpr operator NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*() const noexcept {
      return nunitTestCaseBuilder;
    }
    // public System.Boolean CanBuildFrom(NUnit.Framework.Interfaces.IMethodInfo method)
    // Offset: 0x15EDE18
    bool CanBuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method);
    // private NUnit.Framework.Internal.Test BuildParameterizedMethodSuite(NUnit.Framework.Interfaces.IMethodInfo method, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestMethod> tests)
    // Offset: 0x15EE758
    NUnit::Framework::Internal::Test* BuildParameterizedMethodSuite(NUnit::Framework::Interfaces::IMethodInfo* method, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestMethod*>* tests);
    // private NUnit.Framework.Internal.Test BuildSingleTestMethod(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    // Offset: 0x15EE5D8
    NUnit::Framework::Internal::Test* BuildSingleTestMethod(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite);
    // public System.Boolean CanBuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite)
    // Offset: 0x15EDF78
    // Implemented from: NUnit.Framework.Interfaces.ITestCaseBuilder
    // Base method: System.Boolean ITestCaseBuilder::CanBuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite)
    bool CanBuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite);
    // public NUnit.Framework.Internal.Test BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite)
    // Offset: 0x15EDF7C
    // Implemented from: NUnit.Framework.Interfaces.ITestCaseBuilder
    // Base method: NUnit.Framework.Internal.Test ITestCaseBuilder::BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite)
    NUnit::Framework::Internal::Test* BuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite);
    // public System.Void .ctor()
    // Offset: 0x15EEA6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DefaultTestCaseBuilder* New_ctor();
  }; // NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::DefaultTestCaseBuilder*, "NUnit.Framework.Internal.Builders", "DefaultTestCaseBuilder");
#pragma pack(pop)
