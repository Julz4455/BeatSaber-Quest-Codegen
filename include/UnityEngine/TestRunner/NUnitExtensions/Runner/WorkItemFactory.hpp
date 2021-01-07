// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
  // [] Offset: FFFFFFFF
  class WorkItemFactory : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: WorkItemFactory
    WorkItemFactory() noexcept {}
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem Create(NUnit.Framework.Interfaces.ITest loadedTest, NUnit.Framework.Interfaces.ITestFilter filter)
    // Offset: 0x117FB38
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* Create(NUnit::Framework::Interfaces::ITest* loadedTest, NUnit::Framework::Interfaces::ITestFilter* filter);
    // protected UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem Create(NUnit.Framework.Internal.TestMethod method, NUnit.Framework.Interfaces.ITestFilter filter, NUnit.Framework.Interfaces.ITest loadedTest)
    // Offset: 0xFFFFFFFF
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* Create(NUnit::Framework::Internal::TestMethod* method, NUnit::Framework::Interfaces::ITestFilter* filter, NUnit::Framework::Interfaces::ITest* loadedTest);
    // protected System.Void .ctor()
    // Offset: 0x11848E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WorkItemFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner").WithContext("WorkItemFactory").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WorkItemFactory*, creationType>()));
    }
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "WorkItemFactory");
#pragma pack(pop)
