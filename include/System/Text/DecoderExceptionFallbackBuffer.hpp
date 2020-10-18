// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.DecoderFallbackBuffer
#include "System/Text/DecoderFallbackBuffer.hpp"
// Completed includes
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.DecoderExceptionFallbackBuffer
  class DecoderExceptionFallbackBuffer : public System::Text::DecoderFallbackBuffer {
    public:
    // private System.Void Throw(System.Byte[] bytesUnknown, System.Int32 index)
    // Offset: 0x1884C2C
    void Throw(::Array<uint8_t>* bytesUnknown, int index);
    // public override System.Boolean Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    // Offset: 0x1884C20
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Boolean DecoderFallbackBuffer::Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    bool Fallback(::Array<uint8_t>* bytesUnknown, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x1884E48
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Char DecoderFallbackBuffer::GetNextChar()
    ::Il2CppChar GetNextChar();
    // public System.Void .ctor()
    // Offset: 0x1884BA4
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Void DecoderFallbackBuffer::.ctor()
    // Base method: System.Void Object::.ctor()
    static DecoderExceptionFallbackBuffer* New_ctor();
  }; // System.Text.DecoderExceptionFallbackBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderExceptionFallbackBuffer*, "System.Text", "DecoderExceptionFallbackBuffer");
#pragma pack(pop)
