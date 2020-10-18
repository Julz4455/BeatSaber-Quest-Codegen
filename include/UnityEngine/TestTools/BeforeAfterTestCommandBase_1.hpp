// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Skipping declaration: <ExecuteEnumerable>d__9 because it is already included!
  // Forward declaring type: TestCommandPcHelper
  class TestCommandPcHelper;
  // Forward declaring type: BeforeAfterTestCommandState
  class BeforeAfterTestCommandState;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
  // Skipping declaration: IEnumerable because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogScope
  class LogScope;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
  template<typename T>
  class BeforeAfterTestCommandBase_1 : public NUnit::Framework::Internal::Commands::DelegatingTestCommand, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand {
    public:
    // Nested type: UnityEngine::TestTools::BeforeAfterTestCommandBase_1::$ExecuteEnumerable$d__9<T>
    class $ExecuteEnumerable$d__9;
    // Autogenerated type: UnityEngine.TestTools.BeforeAfterTestCommandBase`1/<ExecuteEnumerable>d__9
    class $ExecuteEnumerable$d__9 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = BeforeAfterTestCommandBase_1<T>*;
      static constexpr std::string_view NESTED_NAME = "$ExecuteEnumerable$d__9";
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private System.Object <>2__current
      // Offset: 0x0
      ::Il2CppObject* $$2__current;
      // private System.Int32 <>l__initialThreadId
      // Offset: 0x0
      int $$l__initialThreadId;
      // private NUnit.Framework.Internal.ITestExecutionContext context
      // Offset: 0x0
      NUnit::Framework::Internal::ITestExecutionContext* context;
      // public NUnit.Framework.Internal.ITestExecutionContext <>3__context
      // Offset: 0x0
      NUnit::Framework::Internal::ITestExecutionContext* $$3__context;
      // public UnityEngine.TestTools.BeforeAfterTestCommandBase`1<T> <>4__this
      // Offset: 0x0
      UnityEngine::TestTools::BeforeAfterTestCommandBase_1<T>* $$4__this;
      // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <unityContext>5__2
      // Offset: 0x0
      UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* $unityContext$5__2;
      // private UnityEngine.TestTools.BeforeAfterTestCommandState <state>5__3
      // Offset: 0x0
      UnityEngine::TestTools::BeforeAfterTestCommandState* $state$5__3;
      // private System.Collections.IEnumerator <enumerator>5__4
      // Offset: 0x0
      System::Collections::IEnumerator* $enumerator$5__4;
      // private UnityEngine.TestTools.Logging.LogScope <logScope>5__5
      // Offset: 0x0
      UnityEngine::TestTools::Logging::LogScope* $logScope$5__5;
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      static typename BeforeAfterTestCommandBase_1<T>::$ExecuteEnumerable$d__9* New_ctor(int $$1__state) {
        return THROW_UNLESS(il2cpp_utils::New<typename BeforeAfterTestCommandBase_1<T>::$ExecuteEnumerable$d__9*>($$1__state));
      }
      // private System.Void <>m__Finally1()
      // Offset: 0xFFFFFFFF
      void $$m__Finally1() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<>m__Finally1"));
      }
      // private System.Void <>m__Finally2()
      // Offset: 0xFFFFFFFF
      void $$m__Finally2() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<>m__Finally2"));
      }
      // private System.Void <>m__Finally3()
      // Offset: 0xFFFFFFFF
      void $$m__Finally3() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<>m__Finally3"));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
      }
      // Creating proxy method: System_Collections_IEnumerator_MoveNext
      // Maps to method: MoveNext
      bool System_Collections_IEnumerator_MoveNext() {
        return MoveNext();
      }
      // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator_1::get_Current()
      ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current() {
        return THROW_UNLESS((il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.Generic.IEnumerator<System.Object>.get_Current")));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
      }
      // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerable`1
      // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
      System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
        return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this, "System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator")));
      }
      // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerable
      // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
      System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
      }
    }; // UnityEngine.TestTools.BeforeAfterTestCommandBase`1/<ExecuteEnumerable>d__9
    // private System.String m_BeforeErrorPrefix
    // Offset: 0x0
    ::Il2CppString* m_BeforeErrorPrefix;
    // private System.String m_AfterErrorPrefix
    // Offset: 0x0
    ::Il2CppString* m_AfterErrorPrefix;
    // private System.Boolean m_SkipYieldAfterActions
    // Offset: 0x0
    bool m_SkipYieldAfterActions;
    // protected T[] BeforeActions
    // Offset: 0x0
    ::Array<T>* BeforeActions;
    // protected T[] AfterActions
    // Offset: 0x0
    ::Array<T>* AfterActions;
    // Autogenerated static field getter
    // Get static field: static private UnityEngine.TestTools.TestCommandPcHelper pcHelper
    static UnityEngine::TestTools::TestCommandPcHelper* _get_pcHelper() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::TestTools::TestCommandPcHelper*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeforeAfterTestCommandBase_1<T>*>::get(), "pcHelper"));
    }
    // Autogenerated static field setter
    // Set static field: static private UnityEngine.TestTools.TestCommandPcHelper pcHelper
    static void _set_pcHelper(UnityEngine::TestTools::TestCommandPcHelper* value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeforeAfterTestCommandBase_1<T>*>::get(), "pcHelper", value));
    }
    // protected System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand, System.String beforeErrorPrefix, System.String afterErrorPrefix, System.Boolean skipYieldAfterActions)
    // Offset: 0xFFFFFFFF
    static BeforeAfterTestCommandBase_1<T>* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand, ::Il2CppString* beforeErrorPrefix, ::Il2CppString* afterErrorPrefix, bool skipYieldAfterActions) {
      return THROW_UNLESS(il2cpp_utils::New<BeforeAfterTestCommandBase_1<T>*>(innerCommand, beforeErrorPrefix, afterErrorPrefix, skipYieldAfterActions));
    }
    // protected System.Collections.IEnumerator InvokeBefore(T action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* InvokeBefore(T action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "InvokeBefore", action, test, context));
    }
    // protected System.Collections.IEnumerator InvokeAfter(T action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* InvokeAfter(T action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "InvokeAfter", action, test, context));
    }
    // protected UnityEngine.TestTools.BeforeAfterTestCommandState GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0xFFFFFFFF
    UnityEngine::TestTools::BeforeAfterTestCommandState* GetState(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TestTools::BeforeAfterTestCommandState*>(this, "GetState", context));
    }
    // static UnityEngine.TestTools.TestCommandPcHelper get_ActivePcHelper()
    // Offset: 0xFFFFFFFF
    static UnityEngine::TestTools::TestCommandPcHelper* get_ActivePcHelper() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TestTools::TestCommandPcHelper*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeforeAfterTestCommandBase_1<T>*>::get(), "get_ActivePcHelper"));
    }
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
    // Base method: System.Collections.IEnumerable IEnumerableTestMethodCommand::ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerable*>(this, "ExecuteEnumerable", context));
    }
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestResult*>(this, "Execute", context));
    }
  }; // UnityEngine.TestTools.BeforeAfterTestCommandBase`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::TestTools::BeforeAfterTestCommandBase_1, "UnityEngine.TestTools", "BeforeAfterTestCommandBase`1");
#pragma pack(pop)
