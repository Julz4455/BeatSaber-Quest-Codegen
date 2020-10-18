// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder
#include "UnityEngine/TestTools/NUnitExtensions/UnityTestAssemblyBuilder.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: TestPlatform
  struct TestPlatform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
  // Autogenerated type: UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder/<BuildAsync>d__3
  class UnityTestAssemblyBuilder::$BuildAsync$d__3 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<NUnit::Framework::Interfaces::ITest*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private NUnit.Framework.Interfaces.ITest <>2__current
    // Offset: 0x18
    NUnit::Framework::Interfaces::ITest* $$2__current;
    // public UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder <>4__this
    // Offset: 0x20
    UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder* $$4__this;
    // public System.Reflection.Assembly[] assemblies
    // Offset: 0x28
    ::Array<System::Reflection::Assembly*>* assemblies;
    // public UnityEngine.TestTools.TestPlatform[] testPlatforms
    // Offset: 0x30
    ::Array<UnityEngine::TestTools::TestPlatform>* testPlatforms;
    // public System.Collections.Generic.IDictionary`2<System.String,System.Object> options
    // Offset: 0x38
    System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options;
    // private NUnit.Framework.Internal.TestSuite <suite>5__2
    // Offset: 0x40
    NUnit::Framework::Internal::TestSuite* $suite$5__2;
    // private System.Int32 <index>5__3
    // Offset: 0x48
    int $index$5__3;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x12C08F0
    static UnityTestAssemblyBuilder::$BuildAsync$d__3* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x12C09EC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x12C09F0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private NUnit.Framework.Interfaces.ITest System.Collections.Generic.IEnumerator<NUnit.Framework.Interfaces.ITest>.get_Current()
    // Offset: 0x12C0CE0
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    NUnit::Framework::Interfaces::ITest* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12C0CE8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x12C0D48
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder/<BuildAsync>d__3
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3*, "UnityEngine.TestTools.NUnitExtensions", "UnityTestAssemblyBuilder/<BuildAsync>d__3");
#pragma pack(pop)
