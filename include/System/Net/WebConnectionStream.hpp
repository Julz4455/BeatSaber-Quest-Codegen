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
  // Forward declaring type: WebConnection
  class WebConnection;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: WebConnectionData
  class WebConnectionData;
  // Forward declaring type: SimpleAsyncCallback
  class SimpleAsyncCallback;
  // Forward declaring type: SimpleAsyncResult
  class SimpleAsyncResult;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
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
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.WebConnectionStream
  class WebConnectionStream : public System::IO::Stream {
    public:
    // Nested type: System::Net::WebConnectionStream::$$c__DisplayClass75_0
    class $$c__DisplayClass75_0;
    // Nested type: System::Net::WebConnectionStream::$$c__DisplayClass76_0
    class $$c__DisplayClass76_0;
    // Nested type: System::Net::WebConnectionStream::$$c__DisplayClass80_0
    class $$c__DisplayClass80_0;
    // private System.Boolean isRead
    // Offset: 0x28
    bool isRead;
    // private System.Net.WebConnection cnc
    // Offset: 0x30
    System::Net::WebConnection* cnc;
    // private System.Net.HttpWebRequest request
    // Offset: 0x38
    System::Net::HttpWebRequest* request;
    // private System.Byte[] readBuffer
    // Offset: 0x40
    ::Array<uint8_t>* readBuffer;
    // private System.Int32 readBufferOffset
    // Offset: 0x48
    int readBufferOffset;
    // private System.Int32 readBufferSize
    // Offset: 0x4C
    int readBufferSize;
    // private System.Int32 stream_length
    // Offset: 0x50
    int stream_length;
    // private System.Int64 contentLength
    // Offset: 0x58
    int64_t contentLength;
    // private System.Int64 totalRead
    // Offset: 0x60
    int64_t totalRead;
    // System.Int64 totalWritten
    // Offset: 0x68
    int64_t totalWritten;
    // private System.Boolean nextReadCalled
    // Offset: 0x70
    bool nextReadCalled;
    // private System.Int32 pendingReads
    // Offset: 0x74
    int pendingReads;
    // private System.Int32 pendingWrites
    // Offset: 0x78
    int pendingWrites;
    // private System.Threading.ManualResetEvent pending
    // Offset: 0x80
    System::Threading::ManualResetEvent* pending;
    // private System.Boolean allowBuffering
    // Offset: 0x88
    bool allowBuffering;
    // private System.Boolean sendChunked
    // Offset: 0x89
    bool sendChunked;
    // private System.IO.MemoryStream writeBuffer
    // Offset: 0x90
    System::IO::MemoryStream* writeBuffer;
    // private System.Boolean requestWritten
    // Offset: 0x98
    bool requestWritten;
    // private System.Byte[] headers
    // Offset: 0xA0
    ::Array<uint8_t>* headers;
    // private System.Boolean disposed
    // Offset: 0xA8
    bool disposed;
    // private System.Boolean headersSent
    // Offset: 0xA9
    bool headersSent;
    // private System.Object locker
    // Offset: 0xB0
    ::Il2CppObject* locker;
    // private System.Boolean initRead
    // Offset: 0xB8
    bool initRead;
    // private System.Boolean read_eof
    // Offset: 0xB9
    bool read_eof;
    // private System.Boolean complete_request_written
    // Offset: 0xBA
    bool complete_request_written;
    // private System.Int32 read_timeout
    // Offset: 0xBC
    int read_timeout;
    // private System.Int32 write_timeout
    // Offset: 0xC0
    int write_timeout;
    // private System.AsyncCallback cb_wrapper
    // Offset: 0xC8
    System::AsyncCallback* cb_wrapper;
    // System.Boolean IgnoreIOErrors
    // Offset: 0xD0
    bool IgnoreIOErrors;
    // private System.Boolean <GetResponseOnClose>k__BackingField
    // Offset: 0xD1
    bool GetResponseOnClose;
    // Get static field: static private System.Byte[] crlf
    static ::Array<uint8_t>* _get_crlf();
    // Set static field: static private System.Byte[] crlf
    static void _set_crlf(::Array<uint8_t>* value);
    // public System.Void .ctor(System.Net.WebConnection cnc, System.Net.WebConnectionData data)
    // Offset: 0x13BC374
    static WebConnectionStream* New_ctor(System::Net::WebConnection* cnc, System::Net::WebConnectionData* data);
    // public System.Void .ctor(System.Net.WebConnection cnc, System.Net.HttpWebRequest request)
    // Offset: 0x13BCE0C
    static WebConnectionStream* New_ctor(System::Net::WebConnection* cnc, System::Net::HttpWebRequest* request);
    // private System.Boolean CheckAuthHeader(System.String headerName)
    // Offset: 0x13C1174
    bool CheckAuthHeader(::Il2CppString* headerName);
    // private System.Boolean IsNtlmAuth()
    // Offset: 0x13C0C30
    bool IsNtlmAuth();
    // System.Void CheckResponseInBuffer()
    // Offset: 0x13BC730
    void CheckResponseInBuffer();
    // System.Net.WebConnection get_Connection()
    // Offset: 0x13C120C
    System::Net::WebConnection* get_Connection();
    // System.Boolean get_CompleteRequestWritten()
    // Offset: 0x13C1224
    bool get_CompleteRequestWritten();
    // System.Void set_SendChunked(System.Boolean value)
    // Offset: 0x13C122C
    void set_SendChunked(bool value);
    // System.Void set_ReadBuffer(System.Byte[] value)
    // Offset: 0x13C1238
    void set_ReadBuffer(::Array<uint8_t>* value);
    // System.Void set_ReadBufferOffset(System.Int32 value)
    // Offset: 0x13C1240
    void set_ReadBufferOffset(int value);
    // System.Void set_ReadBufferSize(System.Int32 value)
    // Offset: 0x13C1248
    void set_ReadBufferSize(int value);
    // System.Byte[] get_WriteBuffer()
    // Offset: 0x13C1250
    ::Array<uint8_t>* get_WriteBuffer();
    // System.Int32 get_WriteBufferLength()
    // Offset: 0x13C1274
    int get_WriteBufferLength();
    // System.Void ForceCompletion()
    // Offset: 0x13BC784
    void ForceCompletion();
    // System.Void CheckComplete()
    // Offset: 0x13C12A0
    void CheckComplete();
    // System.Void ReadAll()
    // Offset: 0x13C0D74
    void ReadAll();
    // private System.Void WriteCallbackWrapper(System.IAsyncResult r)
    // Offset: 0x13C12E4
    void WriteCallbackWrapper(System::IAsyncResult* r);
    // private System.Void ReadCallbackWrapper(System.IAsyncResult r)
    // Offset: 0x13C1540
    void ReadCallbackWrapper(System::IAsyncResult* r);
    // private System.Void WriteAsyncCB(System.IAsyncResult r)
    // Offset: 0x13C1FB4
    void WriteAsyncCB(System::IAsyncResult* r);
    // private System.Void CheckWriteOverflow(System.Int64 contentLength, System.Int64 totalWritten, System.Int64 size)
    // Offset: 0x13C2988
    void CheckWriteOverflow(int64_t contentLength, int64_t totalWritten, int64_t size);
    // System.Void SetHeadersAsync(System.Boolean setInternalLength, System.Net.SimpleAsyncCallback callback)
    // Offset: 0x13C2DDC
    void SetHeadersAsync(bool setInternalLength, System::Net::SimpleAsyncCallback* callback);
    // private System.Boolean SetHeadersAsync(System.Net.SimpleAsyncResult result, System.Boolean setInternalLength)
    // Offset: 0x13C2EB0
    bool SetHeadersAsync(System::Net::SimpleAsyncResult* result, bool setInternalLength);
    // System.Boolean get_RequestWritten()
    // Offset: 0x13C31C4
    bool get_RequestWritten();
    // System.Boolean WriteRequestAsync(System.Net.SimpleAsyncResult result)
    // Offset: 0x13C31CC
    bool WriteRequestAsync(System::Net::SimpleAsyncResult* result);
    // System.Void InternalClose()
    // Offset: 0x13C33B8
    void InternalClose();
    // System.Boolean get_GetResponseOnClose()
    // Offset: 0x13C33C4
    bool get_GetResponseOnClose();
    // System.Void KillBuffer()
    // Offset: 0x13C22A0
    void KillBuffer();
    // public override System.Int32 get_ReadTimeout()
    // Offset: 0x13C1214
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_ReadTimeout()
    int get_ReadTimeout();
    // public override System.Int32 get_WriteTimeout()
    // Offset: 0x13C121C
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_WriteTimeout()
    int get_WriteTimeout();
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x13C1764
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    int Read(::Array<uint8_t>* buffer, int offset, int size);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0x13C18DC
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult r)
    // Offset: 0x13C1C1C
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult r)
    int EndRead(System::IAsyncResult* r);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0x13C22AC
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult r)
    // Offset: 0x13C2A5C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult r)
    void EndWrite(System::IAsyncResult* r);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x13C2C58
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    void Write(::Array<uint8_t>* buffer, int offset, int size);
    // public override System.Void Flush()
    // Offset: 0x13C2DD8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Void Close()
    // Offset: 0x13C33CC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Close()
    void Close();
    // public override System.Int64 Seek(System.Int64 a, System.IO.SeekOrigin b)
    // Offset: 0x13C36D8
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 a, System.IO.SeekOrigin b)
    int64_t Seek(int64_t a, System::IO::SeekOrigin b);
    // public override System.Void SetLength(System.Int64 a)
    // Offset: 0x13C3738
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 a)
    void SetLength(int64_t a);
    // public override System.Boolean get_CanSeek()
    // Offset: 0x13C3798
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanRead()
    // Offset: 0x13C37A0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x13C37C0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x13C37E0
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x13C385C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x13C38BC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // static private System.Void .cctor()
    // Offset: 0x13C391C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.cctor()
    static void _cctor();
  }; // System.Net.WebConnectionStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnectionStream*, "System.Net", "WebConnectionStream");
#pragma pack(pop)
