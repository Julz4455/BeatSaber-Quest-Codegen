// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Single
  struct Single : public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::IComparable_1<float>, public System::IEquatable_1<float> {
    public:
    // System.Single m_value
    // Offset: 0x0
    float m_value;
    // static field const value: static public System.Single MinValue
    static constexpr const float MinValue = -3.4028235e+38;
    // Get static field: static public System.Single MinValue
    static float _get_MinValue();
    // Set static field: static public System.Single MinValue
    static void _set_MinValue(float value);
    // static field const value: static public System.Single Epsilon
    static constexpr const float Epsilon = 1e-45;
    // Get static field: static public System.Single Epsilon
    static float _get_Epsilon();
    // Set static field: static public System.Single Epsilon
    static void _set_Epsilon(float value);
    // static field const value: static public System.Single MaxValue
    static constexpr const float MaxValue = 3.4028235e+38;
    // Get static field: static public System.Single MaxValue
    static float _get_MaxValue();
    // Set static field: static public System.Single MaxValue
    static void _set_MaxValue(float value);
    // Get static field: static public System.Single PositiveInfinity
    static float _get_PositiveInfinity();
    // Set static field: static public System.Single PositiveInfinity
    static void _set_PositiveInfinity(float value);
    // Get static field: static public System.Single NegativeInfinity
    static float _get_NegativeInfinity();
    // Set static field: static public System.Single NegativeInfinity
    static void _set_NegativeInfinity(float value);
    // Get static field: static public System.Single NaN
    static float _get_NaN();
    // Set static field: static public System.Single NaN
    static void _set_NaN(float value);
    // Creating value type constructor for type: Single
    Single(float m_value_ = {}) : m_value{m_value_} {}
    // static public System.Boolean IsInfinity(System.Single f)
    // Offset: 0xD4C23C
    static bool IsInfinity(float f);
    // static public System.Boolean IsPositiveInfinity(System.Single f)
    // Offset: 0xD4C254
    static bool IsPositiveInfinity(float f);
    // static public System.Boolean IsNegativeInfinity(System.Single f)
    // Offset: 0xD4C268
    static bool IsNegativeInfinity(float f);
    // static public System.Boolean IsNaN(System.Single f)
    // Offset: 0xD4C278
    static bool IsNaN(float f);
    // public System.String ToString(System.String format)
    // Offset: 0x998388
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public System.Single Parse(System.String s)
    // Offset: 0xD4C614
    static float Parse(::Il2CppString* s);
    // static public System.Single Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0xD4C650
    static float Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.Single Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0xD4C688
    static float Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // static private System.Single Parse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0xD4C648
    static float Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info);
    // static public System.Boolean TryParse(System.String s, System.Single result)
    // Offset: 0xD4C6DC
    static bool TryParse(::Il2CppString* s, float& result);
    // static public System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider, System.Single result)
    // Offset: 0xD4C7CC
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, float& result);
    // static private System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, System.Single result)
    // Offset: 0xD4C714
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, float& result);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0x998250
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::Il2CppObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Single value)
    // Offset: 0x998258
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable`1::CompareTo(System.Single value)
    int CompareTo(float value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x9982B4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.Single obj)
    // Offset: 0x9982BC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.Single obj)
    bool Equals(float obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x998308
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x99831C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0x998350
    // Implemented from: System.IConvertible
    // Base method: System.String IConvertible::ToString(System.IFormatProvider provider)
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0x9983C8
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider provider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0x99840C
    // Implemented from: System.IConvertible
    // Base method: System.TypeCode IConvertible::GetTypeCode()
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0x998414
    // Implemented from: System.IConvertible
    // Base method: System.Boolean IConvertible::ToBoolean(System.IFormatProvider provider)
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0x99841C
    // Implemented from: System.IConvertible
    // Base method: System.Char IConvertible::ToChar(System.IFormatProvider provider)
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0x998428
    // Implemented from: System.IConvertible
    // Base method: System.SByte IConvertible::ToSByte(System.IFormatProvider provider)
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0x998430
    // Implemented from: System.IConvertible
    // Base method: System.Byte IConvertible::ToByte(System.IFormatProvider provider)
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0x998438
    // Implemented from: System.IConvertible
    // Base method: System.Int16 IConvertible::ToInt16(System.IFormatProvider provider)
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0x998440
    // Implemented from: System.IConvertible
    // Base method: System.UInt16 IConvertible::ToUInt16(System.IFormatProvider provider)
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0x998448
    // Implemented from: System.IConvertible
    // Base method: System.Int32 IConvertible::ToInt32(System.IFormatProvider provider)
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0x998450
    // Implemented from: System.IConvertible
    // Base method: System.UInt32 IConvertible::ToUInt32(System.IFormatProvider provider)
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0x998458
    // Implemented from: System.IConvertible
    // Base method: System.Int64 IConvertible::ToInt64(System.IFormatProvider provider)
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0x998460
    // Implemented from: System.IConvertible
    // Base method: System.UInt64 IConvertible::ToUInt64(System.IFormatProvider provider)
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0x998468
    // Implemented from: System.IConvertible
    // Base method: System.Single IConvertible::ToSingle(System.IFormatProvider provider)
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0x998470
    // Implemented from: System.IConvertible
    // Base method: System.Double IConvertible::ToDouble(System.IFormatProvider provider)
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0x998478
    // Implemented from: System.IConvertible
    // Base method: System.Decimal IConvertible::ToDecimal(System.IFormatProvider provider)
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0x998480
    // Implemented from: System.IConvertible
    // Base method: System.DateTime IConvertible::ToDateTime(System.IFormatProvider provider)
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0x99848C
    // Implemented from: System.IConvertible
    // Base method: System.Object IConvertible::ToType(System.Type type, System.IFormatProvider provider)
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
  }; // System.Single
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Single, "System", "Single");
#pragma pack(pop)
