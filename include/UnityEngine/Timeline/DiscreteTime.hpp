// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.Double
#include "System/Double.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Timeline.DiscreteTime
  // [] Offset: FFFFFFFF
  struct DiscreteTime/*, public System::ValueType, public System::IComparable*/ {
    public:
    // private readonly System.Int64 m_DiscreteTime
    // Size: 0x8
    // Offset: 0x0
    int64_t m_DiscreteTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: DiscreteTime
    constexpr DiscreteTime(int64_t m_DiscreteTime_ = {}) noexcept : m_DiscreteTime{m_DiscreteTime_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return m_DiscreteTime;
    }
    // static field const value: static private System.Double k_Tick
    static constexpr const double k_Tick = 1e-12;
    // Get static field: static private System.Double k_Tick
    static double _get_k_Tick();
    // Set static field: static private System.Double k_Tick
    static void _set_k_Tick(double value);
    // Get static field: static public readonly UnityEngine.Timeline.DiscreteTime kMaxTime
    static UnityEngine::Timeline::DiscreteTime _get_kMaxTime();
    // Set static field: static public readonly UnityEngine.Timeline.DiscreteTime kMaxTime
    static void _set_kMaxTime(UnityEngine::Timeline::DiscreteTime value);
    // static public System.Double get_tickValue()
    // Offset: 0x173159C
    static double get_tickValue();
    // public System.Void .ctor(UnityEngine.Timeline.DiscreteTime time)
    // Offset: 0xE0D168
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: is copy constructor.  DiscreteTime(UnityEngine::Timeline::DiscreteTime time)
    // private System.Void .ctor(System.Int64 time)
    // Offset: 0xE0D170
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  DiscreteTime(int64_t time)
    // public System.Void .ctor(System.Double time)
    // Offset: 0xE0D178
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    DiscreteTime(double time) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::DiscreteTime::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(time)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, time);
    }
    // public System.Void .ctor(System.Single time)
    // Offset: 0xE0D180
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    DiscreteTime(float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::DiscreteTime::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(time)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, time);
    }
    // public System.Void .ctor(System.Int32 time)
    // Offset: 0xE0D188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    DiscreteTime(int time) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::DiscreteTime::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(time)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, time);
    }
    // public System.Void .ctor(System.Int32 frame, System.Double fps)
    // Offset: 0xE0D190
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    DiscreteTime(int frame, double fps) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::DiscreteTime::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(frame, fps)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, frame, fps);
    }
    // public UnityEngine.Timeline.DiscreteTime OneTickBefore()
    // Offset: 0xE0D198
    UnityEngine::Timeline::DiscreteTime OneTickBefore();
    // public UnityEngine.Timeline.DiscreteTime OneTickAfter()
    // Offset: 0xE0D1A4
    UnityEngine::Timeline::DiscreteTime OneTickAfter();
    // public System.Int64 GetTick()
    // Offset: 0xE0D1B0
    int64_t GetTick();
    // static public UnityEngine.Timeline.DiscreteTime FromTicks(System.Int64 ticks)
    // Offset: 0x17319A8
    static UnityEngine::Timeline::DiscreteTime FromTicks(int64_t ticks);
    // public System.Boolean Equals(UnityEngine.Timeline.DiscreteTime other)
    // Offset: 0xE0D1C0
    bool Equals(UnityEngine::Timeline::DiscreteTime other);
    // static private System.Int64 DoubleToDiscreteTime(System.Double time)
    // Offset: 0x1731640
    static int64_t DoubleToDiscreteTime(double time);
    // static private System.Int64 FloatToDiscreteTime(System.Single time)
    // Offset: 0x1731774
    static int64_t FloatToDiscreteTime(float time);
    // static private System.Int64 IntToDiscreteTime(System.Int32 time)
    // Offset: 0x17318A8
    static int64_t IntToDiscreteTime(int time);
    // static private System.Double ToDouble(System.Int64 time)
    // Offset: 0x1731AD8
    static double ToDouble(int64_t time);
    // static private System.Single ToFloat(System.Int64 time)
    // Offset: 0x1731AEC
    static float ToFloat(int64_t time);
    // static public System.Double op_Explicit(UnityEngine.Timeline.DiscreteTime b)
    // Offset: 0x172EF5C
    explicit operator double();
    // static public System.Single op_Explicit(UnityEngine.Timeline.DiscreteTime b)
    // Offset: 0x1731B60
    explicit operator float();
    // static public System.Int64 op_Explicit(UnityEngine.Timeline.DiscreteTime b)
    // Offset: 0x1731BC4
    // ABORTED: conflicts with another method.  explicit operator int64_t();
    // static public UnityEngine.Timeline.DiscreteTime op_Explicit(System.Double time)
    // Offset: 0x172EF28
    explicit DiscreteTime(double& time);
    // static public UnityEngine.Timeline.DiscreteTime op_Explicit(System.Single time)
    // Offset: 0x1731BC8
    explicit DiscreteTime(float& time);
    // static public UnityEngine.Timeline.DiscreteTime op_Explicit(System.Int64 time)
    // Offset: 0x1731C1C
    explicit DiscreteTime(int64_t& time);
    // static public UnityEngine.Timeline.DiscreteTime Min(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
    // Offset: 0x1731D38
    static UnityEngine::Timeline::DiscreteTime Min(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs);
    // static public UnityEngine.Timeline.DiscreteTime Max(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
    // Offset: 0x1731DB0
    static UnityEngine::Timeline::DiscreteTime Max(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs);
    // static public System.Double SnapToNearestTick(System.Double time)
    // Offset: 0x1731E28
    static double SnapToNearestTick(double time);
    // static public System.Single SnapToNearestTick(System.Single time)
    // Offset: 0x1731EA8
    static float SnapToNearestTick(float time);
    // static public System.Int64 GetNearestTick(System.Double time)
    // Offset: 0x1731F18
    static int64_t GetNearestTick(double time);
    // static private System.Void .cctor()
    // Offset: 0x1731F84
    static void _cctor();
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0xE0D1B8
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object obj)
    int CompareTo(::Il2CppObject* obj);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* obj);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE0D1D0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0xE0D1D8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xE0D204
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Timeline.DiscreteTime
  #pragma pack(pop)
  static check_size<sizeof(DiscreteTime), 0 + sizeof(int64_t)> __UnityEngine_Timeline_DiscreteTimeSizeCheck;
  static_assert(sizeof(DiscreteTime) == 0x8);
  // static public System.Boolean op_Equality(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x1731C20
  bool operator ==(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x1731C2C
  bool operator !=(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public System.Boolean op_GreaterThan(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x1731CA0
  bool operator >(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public System.Boolean op_LessThan(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x1731CAC
  bool operator <(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public System.Boolean op_LessThanOrEqual(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x1731CB8
  bool operator <=(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public System.Boolean op_GreaterThanOrEqual(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x1731CC4
  bool operator >=(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public UnityEngine.Timeline.DiscreteTime op_Addition(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x1731CD0
  UnityEngine::Timeline::DiscreteTime operator+(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public UnityEngine.Timeline.DiscreteTime op_Subtraction(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x1731CD8
  UnityEngine::Timeline::DiscreteTime operator-(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::DiscreteTime, "UnityEngine.Timeline", "DiscreteTime");
