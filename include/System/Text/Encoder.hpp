// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallback
  class EncoderFallback;
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.Encoder
  class Encoder : public ::Il2CppObject {
    public:
    // System.Text.EncoderFallback m_fallback
    // Offset: 0x10
    System::Text::EncoderFallback* m_fallback;
    // System.Text.EncoderFallbackBuffer m_fallbackBuffer
    // Offset: 0x18
    System::Text::EncoderFallbackBuffer* m_fallbackBuffer;
    // System.Void SerializeEncoder(System.Runtime.Serialization.SerializationInfo info)
    // Offset: 0x18865EC
    void SerializeEncoder(System::Runtime::Serialization::SerializationInfo* info);
    // public System.Text.EncoderFallback get_Fallback()
    // Offset: 0x1886660
    System::Text::EncoderFallback* get_Fallback();
    // public System.Text.EncoderFallbackBuffer get_FallbackBuffer()
    // Offset: 0x1883774
    System::Text::EncoderFallbackBuffer* get_FallbackBuffer();
    // System.Boolean get_InternalHasFallbackBuffer()
    // Offset: 0x1883764
    bool get_InternalHasFallbackBuffer();
    // public System.Void Reset()
    // Offset: 0x1886668
    void Reset();
    // public System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0xFFFFFFFF
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count, bool flush);
    // public System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Boolean flush)
    // Offset: 0x188673C
    int GetByteCount(::Il2CppChar* chars, int count, bool flush);
    // public System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Boolean flush)
    // Offset: 0xFFFFFFFF
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex, bool flush);
    // public System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush)
    // Offset: 0x18868BC
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush);
    // public System.Void Convert(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Boolean flush, out System.Int32 charsUsed, out System.Int32 bytesUsed, out System.Boolean completed)
    // Offset: 0x1886AE8
    void Convert(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex, int byteCount, bool flush, int& charsUsed, int& bytesUsed, bool& completed);
    // public System.Void Convert(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush, out System.Int32 charsUsed, out System.Int32 bytesUsed, out System.Boolean completed)
    // Offset: 0x1886E3C
    void Convert(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush, int& charsUsed, int& bytesUsed, bool& completed);
    // protected System.Void .ctor()
    // Offset: 0x1886658
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Encoder* New_ctor();
  }; // System.Text.Encoder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoder*, "System.Text", "Encoder");
#pragma pack(pop)
