// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.Debug
#include "Mono/Unity/Debug.hpp"
// Including type: Mono.Security.Interface.AlertDescription
#include "Mono/Security/Interface/AlertDescription.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_errorstate
#include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_x509verify_result
#include "Mono/Unity/UnityTls_unitytls_x509verify_result.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Unity.Debug.CheckAndThrow
void Mono::Unity::Debug::CheckAndThrow(Mono::Unity::UnityTls::unitytls_errorstate errorState, ::Il2CppString* context, Mono::Security::Interface::AlertDescription defaultAlert) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Mono.Unity", "Debug", "CheckAndThrow", errorState, context, defaultAlert));
}
// Autogenerated method: Mono.Unity.Debug.CheckAndThrow
void Mono::Unity::Debug::CheckAndThrow(Mono::Unity::UnityTls::unitytls_errorstate errorState, Mono::Unity::UnityTls::unitytls_x509verify_result verifyResult, ::Il2CppString* context, Mono::Security::Interface::AlertDescription defaultAlert) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Mono.Unity", "Debug", "CheckAndThrow", errorState, verifyResult, context, defaultAlert));
}