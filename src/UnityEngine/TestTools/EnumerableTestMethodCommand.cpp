// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.TestTools.EnumerableTestMethodCommand
#include "UnityEngine/TestTools/EnumerableTestMethodCommand.hpp"
// Including type: UnityEngine.TestTools.EnumerableTestMethodCommand/<ExecuteEnumerable>d__2
#include "UnityEngine/TestTools/EnumerableTestMethodCommand_-ExecuteEnumerable-d__2.hpp"
// Including type: UnityEngine.TestTools.EnumerableTestMethodCommand/<ExecuteEnumerableAndRecordExceptions>d__3
#include "UnityEngine/TestTools/EnumerableTestMethodCommand_-ExecuteEnumerableAndRecordExceptions-d__3.hpp"
// Including type: NUnit.Framework.Internal.TestMethod
#include "NUnit/Framework/Internal/TestMethod.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: NUnit.Framework.Internal.ITestExecutionContext
#include "NUnit/Framework/Internal/ITestExecutionContext.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestTools.EnumerableTestMethodCommand..ctor
UnityEngine::TestTools::EnumerableTestMethodCommand* UnityEngine::TestTools::EnumerableTestMethodCommand::New_ctor(NUnit::Framework::Internal::TestMethod* testMethod) {
  return (EnumerableTestMethodCommand*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.TestTools", "EnumerableTestMethodCommand", testMethod));
}
// Autogenerated method: UnityEngine.TestTools.EnumerableTestMethodCommand.ExecuteEnumerableAndRecordExceptions
System::Collections::IEnumerator* UnityEngine::TestTools::EnumerableTestMethodCommand::ExecuteEnumerableAndRecordExceptions(System::Collections::IEnumerator* enumerator, NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>("UnityEngine.TestTools", "EnumerableTestMethodCommand", "ExecuteEnumerableAndRecordExceptions", enumerator, context));
}
// Autogenerated method: UnityEngine.TestTools.EnumerableTestMethodCommand.ExecuteEnumerable
System::Collections::IEnumerable* UnityEngine::TestTools::EnumerableTestMethodCommand::ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerable*>(this, "ExecuteEnumerable", context));
}
// Autogenerated method: UnityEngine.TestTools.EnumerableTestMethodCommand.Execute
NUnit::Framework::Internal::TestResult* UnityEngine::TestTools::EnumerableTestMethodCommand::Execute(NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestResult*>(this, "Execute", context));
}
