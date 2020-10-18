// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Mono.Security
namespace Mono::Security {
  // Autogenerated type: Mono.Security.BitConverterLE
  class BitConverterLE : public ::Il2CppObject {
    public:
    // static private System.Byte[] GetUIntBytes(System.Byte* bytes)
    // Offset: 0x1B80230
    static ::Array<uint8_t>* GetUIntBytes(uint8_t* bytes);
    // static private System.Byte[] GetULongBytes(System.Byte* bytes)
    // Offset: 0x1B8034C
    static ::Array<uint8_t>* GetULongBytes(uint8_t* bytes);
    // static System.Byte[] GetBytes(System.Int32 value)
    // Offset: 0x1B7ED78
    static ::Array<uint8_t>* GetBytes(int value);
    // static System.Byte[] GetBytes(System.Int64 value)
    // Offset: 0x1B804E8
    static ::Array<uint8_t>* GetBytes(int64_t value);
    // static private System.Void UShortFromBytes(System.Byte* dst, System.Byte[] src, System.Int32 startIndex)
    // Offset: 0x1B8050C
    static void UShortFromBytes(uint8_t* dst, ::Array<uint8_t>* src, int startIndex);
    // static private System.Void UIntFromBytes(System.Byte* dst, System.Byte[] src, System.Int32 startIndex)
    // Offset: 0x1B80600
    static void UIntFromBytes(uint8_t* dst, ::Array<uint8_t>* src, int startIndex);
    // static System.Int32 ToInt32(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1B7FF98
    static int ToInt32(::Array<uint8_t>* value, int startIndex);
    // static System.UInt16 ToUInt16(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1B80764
    static uint16_t ToUInt16(::Array<uint8_t>* value, int startIndex);
    // static System.UInt32 ToUInt32(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x1B7FF68
    static uint ToUInt32(::Array<uint8_t>* value, int startIndex);
  }; // Mono.Security.BitConverterLE
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::BitConverterLE*, "Mono.Security", "BitConverterLE");
#pragma pack(pop)
