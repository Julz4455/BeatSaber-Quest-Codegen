// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.X509.X509Stores
#include "Mono/Security/X509/X509Stores.hpp"
// Including type: Mono.Security.X509.X509Store
#include "Mono/Security/X509/X509Store.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Security.X509.X509Stores..ctor
Mono::Security::X509::X509Stores* Mono::Security::X509::X509Stores::New_ctor(::Il2CppString* path, bool newFormat) {
  return THROW_UNLESS(il2cpp_utils::New<X509Stores*>(path, newFormat));
}
// Autogenerated method: Mono.Security.X509.X509Stores.Open
Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::Open(::Il2CppString* storeName, bool create) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::X509::X509Store*>(this, "Open", storeName, create));
}
