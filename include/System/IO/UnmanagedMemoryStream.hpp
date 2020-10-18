// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.FileAccess
#include "System/IO/FileAccess.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: SafeBuffer
  class SafeBuffer;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.UnmanagedMemoryStream
  class UnmanagedMemoryStream : public System::IO::Stream {
    public:
    // private System.Runtime.InteropServices.SafeBuffer _buffer
    // Offset: 0x28
    System::Runtime::InteropServices::SafeBuffer* buffer;
    // private System.Byte* _mem
    // Offset: 0x30
    uint8_t* mem;
    // private System.Int64 _length
    // Offset: 0x38
    int64_t length;
    // private System.Int64 _capacity
    // Offset: 0x40
    int64_t capacity;
    // private System.Int64 _position
    // Offset: 0x48
    int64_t position;
    // private System.Int64 _offset
    // Offset: 0x50
    int64_t offset;
    // private System.IO.FileAccess _access
    // Offset: 0x58
    System::IO::FileAccess access;
    // System.Boolean _isOpen
    // Offset: 0x5C
    bool isOpen;
    // private System.Threading.Tasks.Task`1<System.Int32> _lastReadTask
    // Offset: 0x60
    System::Threading::Tasks::Task_1<int>* lastReadTask;
    // public System.Void .ctor(System.Byte* pointer, System.Int64 length)
    // Offset: 0x15974A8
    static UnmanagedMemoryStream* New_ctor(uint8_t* pointer, int64_t length);
    // System.Void .ctor(System.Byte* pointer, System.Int64 length, System.Int64 capacity, System.IO.FileAccess access, System.Boolean skipSecurityCheck)
    // Offset: 0x159753C
    static UnmanagedMemoryStream* New_ctor(uint8_t* pointer, int64_t length, int64_t capacity, System::IO::FileAccess access, bool skipSecurityCheck);
    // System.Void Initialize(System.Byte* pointer, System.Int64 length, System.Int64 capacity, System.IO.FileAccess access, System.Boolean skipSecurityCheck)
    // Offset: 0x158D598
    void Initialize(uint8_t* pointer, int64_t length, int64_t capacity, System::IO::FileAccess access, bool skipSecurityCheck);
    // public System.Byte* get_PositionPointer()
    // Offset: 0x15977E4
    uint8_t* get_PositionPointer();
    // protected System.Void .ctor()
    // Offset: 0x158D524
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static UnmanagedMemoryStream* New_ctor();
    // public override System.Boolean get_CanRead()
    // Offset: 0x15975E0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x15975FC
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1597604
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x158D8A8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x1597620
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 get_Length()
    // Offset: 0x15976BC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x15976DC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x1597714
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1597918
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1597C14
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Int32 ReadByte()
    // Offset: 0x1597F48
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    // Offset: 0x1598084
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin loc);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x15981E0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x15983C8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1598790
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x1598A60
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
  }; // System.IO.UnmanagedMemoryStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::UnmanagedMemoryStream*, "System.IO", "UnmanagedMemoryStream");
#pragma pack(pop)
