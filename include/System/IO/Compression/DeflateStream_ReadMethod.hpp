// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Compression.DeflateStream
#include "System/IO/Compression/DeflateStream.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Autogenerated type: System.IO.Compression.DeflateStream/ReadMethod
  class DeflateStream::ReadMethod : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x172EE9C
    static DeflateStream::ReadMethod* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Int32 Invoke(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x172F744
    int Invoke(::Array<uint8_t>* array, int offset, int count);
    // public System.IAsyncResult BeginInvoke(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object object)
    // Offset: 0x172EEB0
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>* array, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x172F390
    int EndInvoke(System::IAsyncResult* result);
  }; // System.IO.Compression.DeflateStream/ReadMethod
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::DeflateStream::ReadMethod*, "System.IO.Compression", "DeflateStream/ReadMethod");
#pragma pack(pop)
