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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MasterServerAvailabilityData
  class MasterServerAvailabilityData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus
    struct AvailabilityStatus;
    // Nested type: GlobalNamespace::MasterServerAvailabilityData::UserMessage
    class UserMessage;
    // Autogenerated type: MasterServerAvailabilityData/AvailabilityStatus
    struct AvailabilityStatus : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: AvailabilityStatus
      constexpr AvailabilityStatus(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServerAvailabilityData/AvailabilityStatus Online
      static constexpr const int Online = 0;
      // Get static field: static public MasterServerAvailabilityData/AvailabilityStatus Online
      static GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus _get_Online();
      // Set static field: static public MasterServerAvailabilityData/AvailabilityStatus Online
      static void _set_Online(GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus value);
      // static field const value: static public MasterServerAvailabilityData/AvailabilityStatus MaintenanceUpcoming
      static constexpr const int MaintenanceUpcoming = 1;
      // Get static field: static public MasterServerAvailabilityData/AvailabilityStatus MaintenanceUpcoming
      static GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus _get_MaintenanceUpcoming();
      // Set static field: static public MasterServerAvailabilityData/AvailabilityStatus MaintenanceUpcoming
      static void _set_MaintenanceUpcoming(GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus value);
      // static field const value: static public MasterServerAvailabilityData/AvailabilityStatus Offline
      static constexpr const int Offline = 2;
      // Get static field: static public MasterServerAvailabilityData/AvailabilityStatus Offline
      static GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus _get_Offline();
      // Set static field: static public MasterServerAvailabilityData/AvailabilityStatus Offline
      static void _set_Offline(GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus value);
    }; // MasterServerAvailabilityData/AvailabilityStatus
    // public System.String minimumAppVersion
    // Offset: 0x10
    ::Il2CppString* minimumAppVersion;
    // public MasterServerAvailabilityData/AvailabilityStatus status
    // Offset: 0x18
    GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus status;
    // public System.Int64 maintenanceStartTime
    // Offset: 0x20
    int64_t maintenanceStartTime;
    // public System.Int64 maintenanceEndTime
    // Offset: 0x28
    int64_t maintenanceEndTime;
    // public MasterServerAvailabilityData/UserMessage userMessage
    // Offset: 0x30
    GlobalNamespace::MasterServerAvailabilityData::UserMessage* userMessage;
    // public System.Void .ctor()
    // Offset: 0xED84E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MasterServerAvailabilityData* New_ctor();
  }; // MasterServerAvailabilityData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerAvailabilityData*, "", "MasterServerAvailabilityData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus, "", "MasterServerAvailabilityData/AvailabilityStatus");
#pragma pack(pop)
