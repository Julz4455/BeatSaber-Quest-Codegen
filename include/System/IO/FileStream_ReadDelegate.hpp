// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileStream
#include "System/IO/FileStream.hpp"
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
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileStream/ReadDelegate
  class FileStream::ReadDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1697C40
    static FileStream::ReadDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Int32 Invoke(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x16995BC
    int Invoke(::Array<uint8_t>* buffer, int offset, int count);
    // public System.IAsyncResult BeginInvoke(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1697C54
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1697E54
    int EndInvoke(System::IAsyncResult* result);
  }; // System.IO.FileStream/ReadDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileStream::ReadDelegate*, "System.IO", "FileStream/ReadDelegate");
#pragma pack(pop)
