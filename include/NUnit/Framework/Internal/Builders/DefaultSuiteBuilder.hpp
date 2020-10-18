// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ISuiteBuilder
#include "NUnit/Framework/Interfaces/ISuiteBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Builders
namespace NUnit::Framework::Internal::Builders {
  // Forward declaring type: NUnitTestFixtureBuilder
  class NUnitTestFixtureBuilder;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IFixtureBuilder
  class IFixtureBuilder;
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
  // Autogenerated type: NUnit.Framework.Internal.Builders.DefaultSuiteBuilder
  class DefaultSuiteBuilder : public ::Il2CppObject, public NUnit::Framework::Interfaces::ISuiteBuilder {
    public:
    // private NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder _defaultBuilder
    // Offset: 0x10
    NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder* defaultBuilder;
    // Creating conversion operator: operator NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*
    constexpr operator NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*() const noexcept {
      return defaultBuilder;
    }
    // private NUnit.Framework.Internal.TestSuite BuildMultipleFixtures(NUnit.Framework.Interfaces.ITypeInfo typeInfo, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestSuite> fixtures)
    // Offset: 0x15ED910
    NUnit::Framework::Internal::TestSuite* BuildMultipleFixtures(NUnit::Framework::Interfaces::ITypeInfo* typeInfo, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>* fixtures);
    // private NUnit.Framework.Interfaces.IFixtureBuilder[] GetFixtureBuilderAttributes(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x15ED57C
    ::Array<NUnit::Framework::Interfaces::IFixtureBuilder*>* GetFixtureBuilderAttributes(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // private System.Boolean HasArguments(NUnit.Framework.Interfaces.IFixtureBuilder attr)
    // Offset: 0x15EDCE4
    bool HasArguments(NUnit::Framework::Interfaces::IFixtureBuilder* attr);
    // public System.Boolean CanBuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x15ECBC8
    // Implemented from: NUnit.Framework.Interfaces.ISuiteBuilder
    // Base method: System.Boolean ISuiteBuilder::CanBuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    bool CanBuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // public NUnit.Framework.Internal.TestSuite BuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x15ECE9C
    // Implemented from: NUnit.Framework.Interfaces.ISuiteBuilder
    // Base method: NUnit.Framework.Internal.TestSuite ISuiteBuilder::BuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    NUnit::Framework::Internal::TestSuite* BuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // public System.Void .ctor()
    // Offset: 0x15DBE2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DefaultSuiteBuilder* New_ctor();
  }; // NUnit.Framework.Internal.Builders.DefaultSuiteBuilder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::DefaultSuiteBuilder*, "NUnit.Framework.Internal.Builders", "DefaultSuiteBuilder");
#pragma pack(pop)
