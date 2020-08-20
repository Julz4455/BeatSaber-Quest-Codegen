// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/FailCommand.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand/<ExecuteEnumerable>d__4
  class FailCommand::$ExecuteEnumerable$d__4 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // private NUnit.Framework.Internal.ITestExecutionContext context
    // Offset: 0x28
    NUnit::Framework::Internal::ITestExecutionContext* context;
    // public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    // Offset: 0x30
    NUnit::Framework::Internal::ITestExecutionContext* $$3__context;
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand <>4__this
    // Offset: 0x38
    UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand* $$4__this;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xD91474
    static FailCommand::$ExecuteEnumerable$d__4* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xD914AC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xD914B0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xD915C4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xD915CC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xD9162C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0xD91634
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xD916F8
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand/<ExecuteEnumerable>d__4
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::$ExecuteEnumerable$d__4*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "FailCommand/<ExecuteEnumerable>d__4");
#pragma pack(pop)
