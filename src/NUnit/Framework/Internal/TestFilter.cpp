// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NUnit.Framework.Internal.TestFilter
#include "NUnit/Framework/Internal/TestFilter.hpp"
// Including type: NUnit.Framework.Internal.TestFilter/EmptyFilter
#include "NUnit/Framework/Internal/TestFilter_EmptyFilter.hpp"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: NUnit.Framework.Interfaces.TNode
#include "NUnit/Framework/Interfaces/TNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly NUnit.Framework.Internal.TestFilter Empty
NUnit::Framework::Internal::TestFilter* NUnit::Framework::Internal::TestFilter::_get_Empty() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<NUnit::Framework::Internal::TestFilter*>("NUnit.Framework.Internal", "TestFilter", "Empty"));
}
// Autogenerated static field setter
// Set static field: static public readonly NUnit.Framework.Internal.TestFilter Empty
void NUnit::Framework::Internal::TestFilter::_set_Empty(NUnit::Framework::Internal::TestFilter* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "TestFilter", "Empty", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestFilter.Match
bool NUnit::Framework::Internal::TestFilter::Match(NUnit::Framework::Interfaces::ITest* test) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Match", test));
}
// Autogenerated method: NUnit.Framework.Internal.TestFilter.MatchParent
bool NUnit::Framework::Internal::TestFilter::MatchParent(NUnit::Framework::Interfaces::ITest* test) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MatchParent", test));
}
// Autogenerated method: NUnit.Framework.Internal.TestFilter.MatchDescendant
bool NUnit::Framework::Internal::TestFilter::MatchDescendant(NUnit::Framework::Interfaces::ITest* test) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MatchDescendant", test));
}
// Autogenerated method: NUnit.Framework.Internal.TestFilter..cctor
void NUnit::Framework::Internal::TestFilter::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Internal", "TestFilter", ".cctor"));
}
// Autogenerated method: NUnit.Framework.Internal.TestFilter.Pass
bool NUnit::Framework::Internal::TestFilter::Pass(NUnit::Framework::Interfaces::ITest* test) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Pass", test));
}
// Autogenerated method: NUnit.Framework.Internal.TestFilter.IsExplicitMatch
bool NUnit::Framework::Internal::TestFilter::IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsExplicitMatch", test));
}
// Autogenerated method: NUnit.Framework.Internal.TestFilter.ToXml
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Internal::TestFilter::ToXml(bool recursive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::TNode*>(this, "ToXml", recursive));
}
// Autogenerated method: NUnit.Framework.Internal.TestFilter.AddToXml
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Internal::TestFilter::AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::TNode*>(this, "AddToXml", parentNode, recursive));
}
// Autogenerated method: NUnit.Framework.Internal.TestFilter..ctor
NUnit::Framework::Internal::TestFilter* NUnit::Framework::Internal::TestFilter::New_ctor() {
  return (TestFilter*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal", "TestFilter"));
}
