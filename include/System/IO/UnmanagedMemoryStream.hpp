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
    // public System.Void .ctor(System.Byte* pointer, System.Int64 length)
    // Offset: 0x1011CCC
    static UnmanagedMemoryStream* New_ctor(uint8_t* pointer, int64_t length);
    // System.Void .ctor(System.Byte* pointer, System.Int64 length, System.Int64 capacity, System.IO.FileAccess access, System.Boolean skipSecurityCheck)
    // Offset: 0x1011D60
    static UnmanagedMemoryStream* New_ctor(uint8_t* pointer, int64_t length, int64_t capacity, System::IO::FileAccess access, bool skipSecurityCheck);
    // System.Void Initialize(System.Byte* pointer, System.Int64 length, System.Int64 capacity, System.IO.FileAccess access, System.Boolean skipSecurityCheck)
    // Offset: 0x1008F64
    void Initialize(uint8_t* pointer, int64_t length, int64_t capacity, System::IO::FileAccess access, bool skipSecurityCheck);
    // public System.Byte* get_PositionPointer()
    // Offset: 0x1012008
    uint8_t* get_PositionPointer();
    // protected System.Void .ctor()
    // Offset: 0x1008EF0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static UnmanagedMemoryStream* New_ctor();
    // public override System.Boolean get_CanRead()
    // Offset: 0x1011E04
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x1011E20
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1011E28
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1009274
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x1011E44
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 get_Length()
    // Offset: 0x1011EE0
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x1011F00
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x1011F38
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x101216C
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public override System.Int32 ReadByte()
    // Offset: 0x1012468
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    // Offset: 0x10125A4
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin loc);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1012700
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x1012AC4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
  }; // System.IO.UnmanagedMemoryStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::UnmanagedMemoryStream*, "System.IO", "UnmanagedMemoryStream");
#pragma pack(pop)
