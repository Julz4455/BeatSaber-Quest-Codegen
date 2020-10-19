// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Autogenerated type: Mono.Net.Security.BufferOffsetSize
  class BufferOffsetSize : public ::Il2CppObject {
    public:
    // public System.Byte[] Buffer
    // Offset: 0x10
    ::Array<uint8_t>* Buffer;
    // public System.Int32 Offset
    // Offset: 0x18
    int Offset;
    // public System.Int32 Size
    // Offset: 0x1C
    int Size;
    // public System.Int32 TotalBytes
    // Offset: 0x20
    int TotalBytes;
    // public System.Boolean Complete
    // Offset: 0x24
    bool Complete;
    // public System.Int32 get_EndOffset()
    // Offset: 0x11F0BC8
    int get_EndOffset();
    // public System.Int32 get_Remaining()
    // Offset: 0x11F0BD4
    int get_Remaining();
    // public System.Void .ctor(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x11F0728
    static BufferOffsetSize* New_ctor(::Array<uint8_t>* buffer, int offset, int size);
    // public override System.String ToString()
    // Offset: 0x11F0BFC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Net.Security.BufferOffsetSize
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::BufferOffsetSize*, "Mono.Net.Security", "BufferOffsetSize");
#pragma pack(pop)