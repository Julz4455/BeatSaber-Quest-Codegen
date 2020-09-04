// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Activator
#include "System/Activator.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Including type: System.Reflection.Binder
#include "System/Reflection/Binder.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Activator.CreateInstance
::Il2CppObject* System::Activator::CreateInstance(System::Type* type, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* args, System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System", "Activator", "CreateInstance", type, bindingAttr, binder, args, culture));
}
// Autogenerated method: System.Activator.CreateInstance
::Il2CppObject* System::Activator::CreateInstance(System::Type* type, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* args, System::Globalization::CultureInfo* culture, ::Array<::Il2CppObject*>* activationAttributes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System", "Activator", "CreateInstance", type, bindingAttr, binder, args, culture, activationAttributes));
}
// Autogenerated method: System.Activator.CreateInstance
::Il2CppObject* System::Activator::CreateInstance(System::Type* type, ::Array<::Il2CppObject*>* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System", "Activator", "CreateInstance", type, args));
}
// Creating initializer_list -> params proxy for: System.Object CreateInstance(System.Type type, params System.Object[] args)
::Il2CppObject* System::Activator::CreateInstance(System::Type* type, std::initializer_list<::Il2CppObject*> args) {
  return System::Activator::CreateInstance(type, ::Array<::Il2CppObject*>::New(args));
}
// Autogenerated method: System.Activator.CreateInstance
::Il2CppObject* System::Activator::CreateInstance(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System", "Activator", "CreateInstance", type));
}
// Autogenerated method: System.Activator.CreateInstance
::Il2CppObject* System::Activator::CreateInstance(System::Type* type, bool nonPublic) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System", "Activator", "CreateInstance", type, nonPublic));
}
