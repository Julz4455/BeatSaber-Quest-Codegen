// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
#include "Mono/Unity/UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_tlsctx
#include "Mono/Unity/UnityTls_unitytls_tlsctx.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange
#include "Mono/Unity/UnityTls_unitytls_tlsctx_protocolrange.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
#include "Mono/Unity/UnityTls_unitytls_tlsctx_callbacks.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_errorstate
#include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t..ctor
Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t*>(object, method));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t.Invoke
Mono::Unity::UnityTls::unitytls_tlsctx* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t::Invoke(Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange supportedProtocols, Mono::Unity::UnityTls::unitytls_tlsctx_callbacks callbacks, uint8_t* cn, System::IntPtr cnLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Unity::UnityTls::unitytls_tlsctx*>(this, "Invoke", supportedProtocols, callbacks, cn, cnLen, errorState));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t.BeginInvoke
System::IAsyncResult* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t::BeginInvoke(Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange supportedProtocols, Mono::Unity::UnityTls::unitytls_tlsctx_callbacks callbacks, uint8_t* cn, System::IntPtr cnLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", supportedProtocols, callbacks, cn, cnLen, errorState, callback, object));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t.EndInvoke
Mono::Unity::UnityTls::unitytls_tlsctx* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Unity::UnityTls::unitytls_tlsctx*>(this, "EndInvoke", result));
}
