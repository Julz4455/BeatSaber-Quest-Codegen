// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ValidationUtil
#include "Zenject/ValidationUtil.hpp"
// Including type: Zenject.ValidationUtil/<>c
#include "Zenject/ValidationUtil_--c.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.ValidationUtil.CreateDefaultArgs
System::Collections::Generic::List_1<Zenject::TypeValuePair>* Zenject::ValidationUtil::CreateDefaultArgs(::Array<System::Type*>* argTypes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>("Zenject", "ValidationUtil", "CreateDefaultArgs", argTypes));
}
// Creating initializer_list -> params proxy for: System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateDefaultArgs(params System.Type[] argTypes)
System::Collections::Generic::List_1<Zenject::TypeValuePair>* Zenject::ValidationUtil::CreateDefaultArgs(std::initializer_list<System::Type*> argTypes) {
  return Zenject::ValidationUtil::CreateDefaultArgs(::Array<System::Type*>::New(argTypes));
}
