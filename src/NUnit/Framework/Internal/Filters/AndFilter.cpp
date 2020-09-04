// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Filters.AndFilter
#include "NUnit/Framework/Internal/Filters/AndFilter.hpp"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.Filters.AndFilter..ctor
NUnit::Framework::Internal::Filters::AndFilter* NUnit::Framework::Internal::Filters::AndFilter::New_ctor() {
  return (AndFilter*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal.Filters", "AndFilter"));
}
// Autogenerated method: NUnit.Framework.Internal.Filters.AndFilter..ctor
NUnit::Framework::Internal::Filters::AndFilter* NUnit::Framework::Internal::Filters::AndFilter::New_ctor(::Array<NUnit::Framework::Interfaces::ITestFilter*>* filters) {
  return (AndFilter*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal.Filters", "AndFilter", filters));
}
// Creating initializer_list -> params proxy for: System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
NUnit::Framework::Internal::Filters::AndFilter* NUnit::Framework::Internal::Filters::AndFilter::New_ctor(std::initializer_list<NUnit::Framework::Interfaces::ITestFilter*> filters) {
  return NUnit::Framework::Internal::Filters::AndFilter::New_ctor(::Array<NUnit::Framework::Interfaces::ITestFilter*>::New(filters));
}
// Autogenerated method: NUnit.Framework.Internal.Filters.AndFilter.Pass
bool NUnit::Framework::Internal::Filters::AndFilter::Pass(NUnit::Framework::Interfaces::ITest* test) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Pass", test));
}
// Autogenerated method: NUnit.Framework.Internal.Filters.AndFilter.Match
bool NUnit::Framework::Internal::Filters::AndFilter::Match(NUnit::Framework::Interfaces::ITest* test) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Match", test));
}
// Autogenerated method: NUnit.Framework.Internal.Filters.AndFilter.IsExplicitMatch
bool NUnit::Framework::Internal::Filters::AndFilter::IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsExplicitMatch", test));
}
// Autogenerated method: NUnit.Framework.Internal.Filters.AndFilter.get_ElementName
::Il2CppString* NUnit::Framework::Internal::Filters::AndFilter::get_ElementName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_ElementName"));
}
