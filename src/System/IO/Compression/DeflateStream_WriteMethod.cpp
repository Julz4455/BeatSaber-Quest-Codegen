// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Compression.DeflateStream/WriteMethod
#include "System/IO/Compression/DeflateStream_WriteMethod.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.Compression.DeflateStream/WriteMethod..ctor
System::IO::Compression::DeflateStream::WriteMethod* System::IO::Compression::DeflateStream::WriteMethod::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<DeflateStream::WriteMethod*>(object, method));
}
// Autogenerated method: System.IO.Compression.DeflateStream/WriteMethod.Invoke
void System::IO::Compression::DeflateStream::WriteMethod::Invoke(::Array<uint8_t>* array, int offset, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", array, offset, count));
}
// Autogenerated method: System.IO.Compression.DeflateStream/WriteMethod.BeginInvoke
System::IAsyncResult* System::IO::Compression::DeflateStream::WriteMethod::BeginInvoke(::Array<uint8_t>* array, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", array, offset, count, callback, object));
}
// Autogenerated method: System.IO.Compression.DeflateStream/WriteMethod.EndInvoke
void System::IO::Compression::DeflateStream::WriteMethod::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
