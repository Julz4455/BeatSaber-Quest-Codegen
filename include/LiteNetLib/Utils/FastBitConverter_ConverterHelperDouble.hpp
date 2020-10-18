// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.FastBitConverter
#include "LiteNetLib/Utils/FastBitConverter.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble
  struct FastBitConverter::ConverterHelperDouble : public System::ValueType {
    public:
    // public System.UInt64 Along
    // Offset: 0x0
    uint64_t Along;
    // public System.Double Adouble
    // Offset: 0x0
    double Adouble;
    // Creating value type constructor for type: ConverterHelperDouble
    constexpr ConverterHelperDouble(uint64_t Along_ = {}, double Adouble_ = {}) noexcept : Along{Along_}, Adouble{Adouble_} {}
  }; // LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::FastBitConverter::ConverterHelperDouble, "LiteNetLib.Utils", "FastBitConverter/ConverterHelperDouble");
#pragma pack(pop)
