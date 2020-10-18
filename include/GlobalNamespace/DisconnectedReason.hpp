// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DisconnectedReason
  struct DisconnectedReason : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: DisconnectedReason
    constexpr DisconnectedReason(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DisconnectedReason Unknown
    static constexpr const int Unknown = 1;
    // Get static field: static public DisconnectedReason Unknown
    static GlobalNamespace::DisconnectedReason _get_Unknown();
    // Set static field: static public DisconnectedReason Unknown
    static void _set_Unknown(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason UserInitiated
    static constexpr const int UserInitiated = 2;
    // Get static field: static public DisconnectedReason UserInitiated
    static GlobalNamespace::DisconnectedReason _get_UserInitiated();
    // Set static field: static public DisconnectedReason UserInitiated
    static void _set_UserInitiated(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason Timeout
    static constexpr const int Timeout = 3;
    // Get static field: static public DisconnectedReason Timeout
    static GlobalNamespace::DisconnectedReason _get_Timeout();
    // Set static field: static public DisconnectedReason Timeout
    static void _set_Timeout(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason Kicked
    static constexpr const int Kicked = 4;
    // Get static field: static public DisconnectedReason Kicked
    static GlobalNamespace::DisconnectedReason _get_Kicked();
    // Set static field: static public DisconnectedReason Kicked
    static void _set_Kicked(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason ServerAtCapacity
    static constexpr const int ServerAtCapacity = 5;
    // Get static field: static public DisconnectedReason ServerAtCapacity
    static GlobalNamespace::DisconnectedReason _get_ServerAtCapacity();
    // Set static field: static public DisconnectedReason ServerAtCapacity
    static void _set_ServerAtCapacity(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason ServerShutDown
    static constexpr const int ServerShutDown = 6;
    // Get static field: static public DisconnectedReason ServerShutDown
    static GlobalNamespace::DisconnectedReason _get_ServerShutDown();
    // Set static field: static public DisconnectedReason ServerShutDown
    static void _set_ServerShutDown(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason MasterServerUnreachable
    static constexpr const int MasterServerUnreachable = 7;
    // Get static field: static public DisconnectedReason MasterServerUnreachable
    static GlobalNamespace::DisconnectedReason _get_MasterServerUnreachable();
    // Set static field: static public DisconnectedReason MasterServerUnreachable
    static void _set_MasterServerUnreachable(GlobalNamespace::DisconnectedReason value);
  }; // DisconnectedReason
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisconnectedReason, "", "DisconnectedReason");
#pragma pack(pop)
