// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
#include "Mono/Unity/UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_errorstate
#include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_error_code
#include "Mono/Unity/UnityTls_unitytls_error_code.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t..ctor
Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t*>(object, method));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t.Invoke
void Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t::Invoke(Mono::Unity::UnityTls::unitytls_errorstate* errorState, Mono::Unity::UnityTls::unitytls_error_code errorCode) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", errorState, errorCode));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t.BeginInvoke
System::IAsyncResult* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t::BeginInvoke(Mono::Unity::UnityTls::unitytls_errorstate* errorState, Mono::Unity::UnityTls::unitytls_error_code errorCode, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", errorState, errorCode, callback, object));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t.EndInvoke
void Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
