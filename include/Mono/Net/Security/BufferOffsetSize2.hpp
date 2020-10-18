// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.Security.BufferOffsetSize
#include "Mono/Net/Security/BufferOffsetSize.hpp"
// Completed includes
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Autogenerated type: Mono.Net.Security.BufferOffsetSize2
  class BufferOffsetSize2 : public Mono::Net::Security::BufferOffsetSize {
    public:
    // public readonly System.Int32 InitialSize
    // Offset: 0x28
    int InitialSize;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return InitialSize;
    }
    // public System.Void .ctor(System.Int32 size)
    // Offset: 0x141A55C
    static BufferOffsetSize2* New_ctor(int size);
    // public System.Void Reset()
    // Offset: 0x141A5D4
    void Reset();
    // public System.Void MakeRoom(System.Int32 size)
    // Offset: 0x141A670
    void MakeRoom(int size);
    // public System.Void AppendData(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x141A758
    void AppendData(::Array<uint8_t>* buffer, int offset, int size);
  }; // Mono.Net.Security.BufferOffsetSize2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::BufferOffsetSize2*, "Mono.Net.Security", "BufferOffsetSize2");
#pragma pack(pop)
