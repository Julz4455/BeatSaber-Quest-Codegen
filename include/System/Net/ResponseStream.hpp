// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListenerResponse
  class HttpListenerResponse;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.ResponseStream
  class ResponseStream : public System::IO::Stream {
    public:
    // private System.Net.HttpListenerResponse response
    // Offset: 0x28
    System::Net::HttpListenerResponse* response;
    // private System.Boolean ignore_errors
    // Offset: 0x30
    bool ignore_errors;
    // private System.Boolean disposed
    // Offset: 0x31
    bool disposed;
    // private System.Boolean trailer_sent
    // Offset: 0x32
    bool trailer_sent;
    // private System.IO.Stream stream
    // Offset: 0x38
    System::IO::Stream* stream;
    // Get static field: static private System.Byte[] crlf
    static ::Array<uint8_t>* _get_crlf();
    // Set static field: static private System.Byte[] crlf
    static void _set_crlf(::Array<uint8_t>* value);
    // System.Void .ctor(System.IO.Stream stream, System.Net.HttpListenerResponse response, System.Boolean ignore_errors)
    // Offset: 0x12CEA40
    static ResponseStream* New_ctor(System::IO::Stream* stream, System::Net::HttpListenerResponse* response, bool ignore_errors);
    // private System.IO.MemoryStream GetHeaders(System.Boolean closing)
    // Offset: 0x12CEEA0
    System::IO::MemoryStream* GetHeaders(bool closing);
    // static private System.Byte[] GetChunkSizeBytes(System.Int32 size, System.Boolean final)
    // Offset: 0x12CF004
    static ::Array<uint8_t>* GetChunkSizeBytes(int size, bool final);
    // System.Void InternalWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x12CF0C8
    void InternalWrite(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Boolean get_CanRead()
    // Offset: 0x12CEAEC
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x12CEAF4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x12CEAFC
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x12CEB04
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x12CEB64
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x12CEBC4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Close()
    // Offset: 0x12CEC24
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x12CF204
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x12CF208
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback cback, System.Object state)
    // Offset: 0x12CF528
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback cback, System.Object state)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* cback, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult ares)
    // Offset: 0x12CF778
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult ares)
    void EndWrite(System::IAsyncResult* ares);
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x12CF9CC
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback cback, System.Object state)
    // Offset: 0x12CFA2C
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback cback, System.Object state)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* cback, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult ares)
    // Offset: 0x12CFA8C
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult ares)
    int EndRead(System::IAsyncResult* ares);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x12CFAEC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x12CFB4C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // static private System.Void .cctor()
    // Offset: 0x12CFBAC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.cctor()
    static void _cctor();
  }; // System.Net.ResponseStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ResponseStream*, "System.Net", "ResponseStream");
#pragma pack(pop)
