// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.RegistryKeyComparer
#include "Microsoft/Win32/RegistryKeyComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Microsoft.Win32.RegistryKeyComparer.Equals
bool Microsoft::Win32::RegistryKeyComparer::Equals(::Il2CppObject* x, ::Il2CppObject* y) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", x, y));
}
bool Microsoft::Win32::RegistryKeyComparer::System_Collections_IEqualityComparer_Equals(::Il2CppObject* x, ::Il2CppObject* y) {
  return Microsoft::Win32::RegistryKeyComparer::Equals(x, y);
}
// Autogenerated method: Microsoft.Win32.RegistryKeyComparer.GetHashCode
int Microsoft::Win32::RegistryKeyComparer::GetHashCode(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", obj));
}
int Microsoft::Win32::RegistryKeyComparer::System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* obj) {
  return Microsoft::Win32::RegistryKeyComparer::GetHashCode(obj);
}
// Autogenerated method: Microsoft.Win32.RegistryKeyComparer..ctor
Microsoft::Win32::RegistryKeyComparer* Microsoft::Win32::RegistryKeyComparer::New_ctor() {
  return (RegistryKeyComparer*)THROW_UNLESS(il2cpp_utils::New("Microsoft.Win32", "RegistryKeyComparer"));
}
