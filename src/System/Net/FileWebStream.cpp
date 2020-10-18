// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.FileWebStream
#include "System/Net/FileWebStream.hpp"
// Including type: System.Net.FileWebRequest
#include "System/Net/FileWebRequest.hpp"
// Including type: System.IO.FileMode
#include "System/IO/FileMode.hpp"
// Including type: System.IO.FileShare
#include "System/IO/FileShare.hpp"
// Including type: System.Net.CloseExState
#include "System/Net/CloseExState.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.FileWebStream..ctor
System::Net::FileWebStream* System::Net::FileWebStream::New_ctor(System::Net::FileWebRequest* request, ::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare sharing) {
  return THROW_UNLESS(il2cpp_utils::New<FileWebStream*>(request, path, mode, access, sharing));
}
// Autogenerated method: System.Net.FileWebStream..ctor
System::Net::FileWebStream* System::Net::FileWebStream::New_ctor(System::Net::FileWebRequest* request, ::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare sharing, int length, bool async) {
  return THROW_UNLESS(il2cpp_utils::New<FileWebStream*>(request, path, mode, access, sharing, length, async));
}
// Autogenerated method: System.Net.FileWebStream.CheckError
void System::Net::FileWebStream::CheckError() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckError"));
}
// Autogenerated method: System.Net.FileWebStream.Dispose
void System::Net::FileWebStream::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Net.FileWebStream.System.Net.ICloseEx.CloseEx
void System::Net::FileWebStream::System_Net_ICloseEx_CloseEx(System::Net::CloseExState closeState) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Net.ICloseEx.CloseEx", closeState));
}
// Autogenerated method: System.Net.FileWebStream.Read
int System::Net::FileWebStream::Read(::Array<uint8_t>* buffer, int offset, int size) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read", buffer, offset, size));
}
// Autogenerated method: System.Net.FileWebStream.Write
void System::Net::FileWebStream::Write(::Array<uint8_t>* buffer, int offset, int size) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", buffer, offset, size));
}
// Autogenerated method: System.Net.FileWebStream.BeginRead
System::IAsyncResult* System::Net::FileWebStream::BeginRead(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* callback, ::Il2CppObject* state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginRead", buffer, offset, size, callback, state));
}
// Autogenerated method: System.Net.FileWebStream.EndRead
int System::Net::FileWebStream::EndRead(System::IAsyncResult* ar) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "EndRead", ar));
}
// Autogenerated method: System.Net.FileWebStream.BeginWrite
System::IAsyncResult* System::Net::FileWebStream::BeginWrite(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* callback, ::Il2CppObject* state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginWrite", buffer, offset, size, callback, state));
}
// Autogenerated method: System.Net.FileWebStream.EndWrite
void System::Net::FileWebStream::EndWrite(System::IAsyncResult* ar) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndWrite", ar));
}
