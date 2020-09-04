// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Zenject.ValidationMarker
#include "Zenject/ValidationMarker.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.ValidationMarker..ctor
Zenject::ValidationMarker* Zenject::ValidationMarker::New_ctor(System::Type* markedType, bool instantiateFailed) {
  return (ValidationMarker*)THROW_UNLESS(il2cpp_utils::New("Zenject", "ValidationMarker", markedType, instantiateFailed));
}
// Autogenerated method: Zenject.ValidationMarker..ctor
Zenject::ValidationMarker* Zenject::ValidationMarker::New_ctor(System::Type* markedType) {
  return (ValidationMarker*)THROW_UNLESS(il2cpp_utils::New("Zenject", "ValidationMarker", markedType));
}
// Autogenerated method: Zenject.ValidationMarker.get_InstantiateFailed
bool Zenject::ValidationMarker::get_InstantiateFailed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_InstantiateFailed"));
}
// Autogenerated method: Zenject.ValidationMarker.set_InstantiateFailed
void Zenject::ValidationMarker::set_InstantiateFailed(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_InstantiateFailed", value));
}
// Autogenerated method: Zenject.ValidationMarker.get_MarkedType
System::Type* Zenject::ValidationMarker::get_MarkedType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_MarkedType"));
}
// Autogenerated method: Zenject.ValidationMarker.set_MarkedType
void Zenject::ValidationMarker::set_MarkedType(System::Type* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_MarkedType", value));
}
