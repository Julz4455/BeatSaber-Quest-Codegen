// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Autogenerated type: NUnit.Framework.Internal.Commands.TestMethodCommand
  class TestMethodCommand : public NUnit::Framework::Internal::Commands::TestCommand {
    public:
    // private readonly NUnit.Framework.Internal.TestMethod testMethod
    // Offset: 0x18
    NUnit::Framework::Internal::TestMethod* testMethod;
    // private readonly System.Object[] arguments
    // Offset: 0x20
    ::Array<::Il2CppObject*>* arguments;
    // Deleting conversion operator: operator NUnit::Framework::Internal::Test*
    constexpr operator NUnit::Framework::Internal::Test*() const noexcept = delete;
    // public System.Void .ctor(NUnit.Framework.Internal.TestMethod testMethod)
    // Offset: 0x15F38F4
    static TestMethodCommand* New_ctor(NUnit::Framework::Internal::TestMethod* testMethod);
    // private System.Object RunTestMethod(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x15F3AF8
    ::Il2CppObject* RunTestMethod(NUnit::Framework::Internal::ITestExecutionContext* context);
    // private System.Object RunNonAsyncTestMethod(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x15F3AFC
    ::Il2CppObject* RunNonAsyncTestMethod(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x15F395C
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.TestMethodCommand
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::TestMethodCommand*, "NUnit.Framework.Internal.Commands", "TestMethodCommand");
#pragma pack(pop)
