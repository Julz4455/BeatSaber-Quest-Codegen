// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.BitConverter
  class BitConverter : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Boolean IsLittleEndian
    static bool _get_IsLittleEndian();
    // Set static field: static public readonly System.Boolean IsLittleEndian
    static void _set_IsLittleEndian(bool value);
    // static private System.Boolean AmILittleEndian()
    // Offset: 0x15CBA44
    static bool AmILittleEndian();
    // static public System.Byte[] GetBytes(System.Int16 value)
    // Offset: 0x15CBA4C
    static ::Array<uint8_t>* GetBytes(int16_t value);
    // static public System.Byte[] GetBytes(System.Int32 value)
    // Offset: 0x15CBAC0
    static ::Array<uint8_t>* GetBytes(int value);
    // static public System.Byte[] GetBytes(System.Int64 value)
    // Offset: 0x15CBB34
    static ::Array<uint8_t>* GetBytes(int64_t value);
    // static public System.Byte[] GetBytes(System.UInt16 value)
    // Offset: 0x15CBBA8
    static ::Array<uint8_t>* GetBytes(uint16_t value);
    // static public System.Byte[] GetBytes(System.UInt32 value)
    // Offset: 0x15CBC0C
    static ::Array<uint8_t>* GetBytes(uint value);
    // static public System.Char ToChar(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x15CBC70
    static ::Il2CppChar ToChar(::Array<uint8_t>* value, int startIndex);
    // static public System.Int16 ToInt16(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x15CBD34
    static int16_t ToInt16(::Array<uint8_t>* value, int startIndex);
    // static public System.Int32 ToInt32(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x15CBE44
    static int ToInt32(::Array<uint8_t>* value, int startIndex);
    // static public System.Int64 ToInt64(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x15CBF70
    static int64_t ToInt64(::Array<uint8_t>* value, int startIndex);
    // static public System.UInt16 ToUInt16(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x15CC0C8
    static uint16_t ToUInt16(::Array<uint8_t>* value, int startIndex);
    // static public System.UInt32 ToUInt32(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x15CC18C
    static uint ToUInt32(::Array<uint8_t>* value, int startIndex);
    // static public System.UInt64 ToUInt64(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x15CC250
    static uint64_t ToUInt64(::Array<uint8_t>* value, int startIndex);
    // static public System.Single ToSingle(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x15CC314
    static float ToSingle(::Array<uint8_t>* value, int startIndex);
    // static public System.Double ToDouble(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x15CC3E0
    static double ToDouble(::Array<uint8_t>* value, int startIndex);
    // static private System.Char GetHexValue(System.Int32 i)
    // Offset: 0x15CC4AC
    static ::Il2CppChar GetHexValue(int i);
    // static public System.String ToString(System.Byte[] value, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x15CC4C4
    static ::Il2CppString* ToString(::Array<uint8_t>* value, int startIndex, int length);
    // static public System.String ToString(System.Byte[] value)
    // Offset: 0x15CC830
    static ::Il2CppString* ToString(::Array<uint8_t>* value);
    // static public System.Int64 DoubleToInt64Bits(System.Double value)
    // Offset: 0x15CC8D8
    static int64_t DoubleToInt64Bits(double value);
    // static public System.Double Int64BitsToDouble(System.Int64 value)
    // Offset: 0x15CC8E0
    static double Int64BitsToDouble(int64_t value);
    // static private System.Void .cctor()
    // Offset: 0x15CC8E8
    static void _cctor();
  }; // System.BitConverter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::BitConverter*, "System", "BitConverter");
#pragma pack(pop)
