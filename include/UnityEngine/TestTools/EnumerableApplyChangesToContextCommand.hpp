// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.ApplyChangesToContextCommand
#include "NUnit/Framework/Internal/Commands/ApplyChangesToContextCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IApplyToContext
  class IApplyToContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.EnumerableApplyChangesToContextCommand
  class EnumerableApplyChangesToContextCommand : public NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand {
    public:
    // Nested type: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1
    class $ExecuteEnumerable$d__1;
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.IApplyToContext> changes)
    // Offset: 0x12B4714
    // Implemented from: NUnit.Framework.Internal.Commands.ApplyChangesToContextCommand
    // Base method: System.Void ApplyChangesToContextCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.IApplyToContext> changes)
    static EnumerableApplyChangesToContextCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::IApplyToContext*>* changes);
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x12BC30C
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
    // Base method: System.Collections.IEnumerable IEnumerableTestMethodCommand::ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestTools.EnumerableApplyChangesToContextCommand
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableApplyChangesToContextCommand*, "UnityEngine.TestTools", "EnumerableApplyChangesToContextCommand");
#pragma pack(pop)
