// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
#include "Mono/Unity/UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_tlsctx
#include "Mono/Unity/UnityTls_unitytls_tlsctx.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_errorstate
#include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t..ctor
Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t*>(object, method));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t.Invoke
System::IntPtr Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t::Invoke(Mono::Unity::UnityTls::unitytls_tlsctx* ctx, uint8_t* buffer, System::IntPtr bufferLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "Invoke", ctx, buffer, bufferLen, errorState));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t.BeginInvoke
System::IAsyncResult* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t::BeginInvoke(Mono::Unity::UnityTls::unitytls_tlsctx* ctx, uint8_t* buffer, System::IntPtr bufferLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ctx, buffer, bufferLen, errorState, callback, object));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t.EndInvoke
System::IntPtr Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "EndInvoke", result));
}
