// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x18
  // Autogenerated type: NetEase.Docker.ScoreData
  // [] Offset: FFFFFFFF
  struct ScoreData/*, public System::ValueType*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDB2618
    // [DebuggerBrowsableAttribute] Offset: 0xDB2618
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB2654
    // [DebuggerBrowsableAttribute] Offset: 0xDB2654
    // private System.Int32 <Score>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int Score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Score and: TimeStamp
    char __padding1[0x4] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xDB2690
    // [CompilerGeneratedAttribute] Offset: 0xDB2690
    // private System.Int64 <TimeStamp>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    int64_t TimeStamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: ScoreData
    constexpr ScoreData(::Il2CppString* Name_ = {}, int Score_ = {}, int64_t TimeStamp_ = {}) noexcept : Name{Name_}, Score{Score_}, TimeStamp{TimeStamp_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.String get_Name()
    // Offset: 0xCB9D94
    ::Il2CppString* get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0xCB9D9C
    void set_Name(::Il2CppString* value);
    // public System.Int32 get_Score()
    // Offset: 0xCB9DA4
    int get_Score();
    // public System.Void set_Score(System.Int32 value)
    // Offset: 0xCB9DAC
    void set_Score(int value);
    // public System.Void set_TimeStamp(System.Int64 value)
    // Offset: 0xCB9DB4
    void set_TimeStamp(int64_t value);
  }; // NetEase.Docker.ScoreData
  static check_size<sizeof(ScoreData), 16 + sizeof(int64_t)> __NetEase_Docker_ScoreDataSizeCheck;
  static_assert(sizeof(ScoreData) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::ScoreData, "NetEase.Docker", "ScoreData");
#pragma pack(pop)
