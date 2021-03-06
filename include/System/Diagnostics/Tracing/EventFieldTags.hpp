// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventFieldTags
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct EventFieldTags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EventFieldTags
    constexpr EventFieldTags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.Tracing.EventFieldTags None
    static constexpr const int None = 0;
    // Get static field: static public System.Diagnostics.Tracing.EventFieldTags None
    static System::Diagnostics::Tracing::EventFieldTags _get_None();
    // Set static field: static public System.Diagnostics.Tracing.EventFieldTags None
    static void _set_None(System::Diagnostics::Tracing::EventFieldTags value);
  }; // System.Diagnostics.Tracing.EventFieldTags
  #pragma pack(pop)
  static check_size<sizeof(EventFieldTags), 0 + sizeof(int)> __System_Diagnostics_Tracing_EventFieldTagsSizeCheck;
  static_assert(sizeof(EventFieldTags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventFieldTags, "System.Diagnostics.Tracing", "EventFieldTags");
