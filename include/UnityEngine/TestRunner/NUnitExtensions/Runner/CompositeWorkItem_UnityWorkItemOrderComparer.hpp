// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/CompositeWorkItem.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem/UnityWorkItemOrderComparer
  // [] Offset: FFFFFFFF
  class CompositeWorkItem::UnityWorkItemOrderComparer : public ::Il2CppObject/*, public System::Collections::Generic::IComparer_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>*/ {
    public:
    // Creating value type constructor for type: UnityWorkItemOrderComparer
    UnityWorkItemOrderComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::Generic::IComparer_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>
    operator System::Collections::Generic::IComparer_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IComparer_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>*>(this);
    }
    // public System.Int32 Compare(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem x, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem y)
    // Offset: 0x11821EC
    // Implemented from: System.Collections.Generic.IComparer`1
    // Base method: System.Int32 IComparer_1::Compare(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem x, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem y)
    int Compare(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* x, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* y);
    // public System.Void .ctor()
    // Offset: 0x117FE4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeWorkItem::UnityWorkItemOrderComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner").WithContext("UnityWorkItemOrderComparer").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeWorkItem::UnityWorkItemOrderComparer*, creationType>()));
    }
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem/UnityWorkItemOrderComparer
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "CompositeWorkItem/UnityWorkItemOrderComparer");
#pragma pack(pop)
