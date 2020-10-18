// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
#include "Mono/Unity/UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_key
#include "Mono/Unity/UnityTls_unitytls_key.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_errorstate
#include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t..ctor
Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t*>(object, method));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t.Invoke
Mono::Unity::UnityTls::unitytls_key* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t::Invoke(uint8_t* buffer, System::IntPtr bufferLen, uint8_t* password, System::IntPtr passwordLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Unity::UnityTls::unitytls_key*>(this, "Invoke", buffer, bufferLen, password, passwordLen, errorState));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t.BeginInvoke
System::IAsyncResult* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t::BeginInvoke(uint8_t* buffer, System::IntPtr bufferLen, uint8_t* password, System::IntPtr passwordLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", buffer, bufferLen, password, passwordLen, errorState, callback, object));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t.EndInvoke
Mono::Unity::UnityTls::unitytls_key* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Unity::UnityTls::unitytls_key*>(this, "EndInvoke", result));
}
