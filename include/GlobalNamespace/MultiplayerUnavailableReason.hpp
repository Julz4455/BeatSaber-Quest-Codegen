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
  // Autogenerated type: MultiplayerUnavailableReason
  struct MultiplayerUnavailableReason : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: MultiplayerUnavailableReason
    constexpr MultiplayerUnavailableReason(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerUnavailableReason NetworkUnreachable
    static constexpr const int NetworkUnreachable = 1;
    // Get static field: static public MultiplayerUnavailableReason NetworkUnreachable
    static GlobalNamespace::MultiplayerUnavailableReason _get_NetworkUnreachable();
    // Set static field: static public MultiplayerUnavailableReason NetworkUnreachable
    static void _set_NetworkUnreachable(GlobalNamespace::MultiplayerUnavailableReason value);
    // static field const value: static public MultiplayerUnavailableReason UpdateRequired
    static constexpr const int UpdateRequired = 2;
    // Get static field: static public MultiplayerUnavailableReason UpdateRequired
    static GlobalNamespace::MultiplayerUnavailableReason _get_UpdateRequired();
    // Set static field: static public MultiplayerUnavailableReason UpdateRequired
    static void _set_UpdateRequired(GlobalNamespace::MultiplayerUnavailableReason value);
    // static field const value: static public MultiplayerUnavailableReason ServerOffline
    static constexpr const int ServerOffline = 3;
    // Get static field: static public MultiplayerUnavailableReason ServerOffline
    static GlobalNamespace::MultiplayerUnavailableReason _get_ServerOffline();
    // Set static field: static public MultiplayerUnavailableReason ServerOffline
    static void _set_ServerOffline(GlobalNamespace::MultiplayerUnavailableReason value);
    // static field const value: static public MultiplayerUnavailableReason MaintenanceMode
    static constexpr const int MaintenanceMode = 4;
    // Get static field: static public MultiplayerUnavailableReason MaintenanceMode
    static GlobalNamespace::MultiplayerUnavailableReason _get_MaintenanceMode();
    // Set static field: static public MultiplayerUnavailableReason MaintenanceMode
    static void _set_MaintenanceMode(GlobalNamespace::MultiplayerUnavailableReason value);
  }; // MultiplayerUnavailableReason
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerUnavailableReason, "", "MultiplayerUnavailableReason");
#pragma pack(pop)
