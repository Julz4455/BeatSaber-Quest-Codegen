// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DisconnectedReasonMethods
  class DisconnectedReasonMethods : public ::Il2CppObject {
    public:
    // static field const value: static private System.String kDisconnectedUnknown
    static constexpr const char* kDisconnectedUnknown = "DISCONNECTED_UNKNOWN";
    // Get static field: static private System.String kDisconnectedUnknown
    static ::Il2CppString* _get_kDisconnectedUnknown();
    // Set static field: static private System.String kDisconnectedUnknown
    static void _set_kDisconnectedUnknown(::Il2CppString* value);
    // static field const value: static private System.String kDisconnectedUserInitiated
    static constexpr const char* kDisconnectedUserInitiated = "DISCONNECTED_USER_INITIATED";
    // Get static field: static private System.String kDisconnectedUserInitiated
    static ::Il2CppString* _get_kDisconnectedUserInitiated();
    // Set static field: static private System.String kDisconnectedUserInitiated
    static void _set_kDisconnectedUserInitiated(::Il2CppString* value);
    // static field const value: static private System.String kDisconnectedTimeout
    static constexpr const char* kDisconnectedTimeout = "DISCONNECTED_TIMEOUT";
    // Get static field: static private System.String kDisconnectedTimeout
    static ::Il2CppString* _get_kDisconnectedTimeout();
    // Set static field: static private System.String kDisconnectedTimeout
    static void _set_kDisconnectedTimeout(::Il2CppString* value);
    // static field const value: static private System.String kDisconnectedKicked
    static constexpr const char* kDisconnectedKicked = "DISCONNECTED_KICKED";
    // Get static field: static private System.String kDisconnectedKicked
    static ::Il2CppString* _get_kDisconnectedKicked();
    // Set static field: static private System.String kDisconnectedKicked
    static void _set_kDisconnectedKicked(::Il2CppString* value);
    // static field const value: static private System.String kDisconnectedServerAtCapacity
    static constexpr const char* kDisconnectedServerAtCapacity = "DISCONNECTED_SERVER_AT_CAPACITY";
    // Get static field: static private System.String kDisconnectedServerAtCapacity
    static ::Il2CppString* _get_kDisconnectedServerAtCapacity();
    // Set static field: static private System.String kDisconnectedServerAtCapacity
    static void _set_kDisconnectedServerAtCapacity(::Il2CppString* value);
    // static field const value: static private System.String kDisconnectedServerShutDown
    static constexpr const char* kDisconnectedServerShutDown = "DISCONNECTED_SERVER_SHUT_DOWN";
    // Get static field: static private System.String kDisconnectedServerShutDown
    static ::Il2CppString* _get_kDisconnectedServerShutDown();
    // Set static field: static private System.String kDisconnectedServerShutDown
    static void _set_kDisconnectedServerShutDown(::Il2CppString* value);
    // static field const value: static private System.String kDisconnectedMasterServerUnreachable
    static constexpr const char* kDisconnectedMasterServerUnreachable = "DISCONNECTED_MASTER_SERVER_UNREACHABLE";
    // Get static field: static private System.String kDisconnectedMasterServerUnreachable
    static ::Il2CppString* _get_kDisconnectedMasterServerUnreachable();
    // Set static field: static private System.String kDisconnectedMasterServerUnreachable
    static void _set_kDisconnectedMasterServerUnreachable(::Il2CppString* value);
    // static public System.String LocalizedKey(DisconnectedReason connectionFailedReason)
    // Offset: 0x2018E2C
    static ::Il2CppString* LocalizedKey(GlobalNamespace::DisconnectedReason connectionFailedReason);
    // static public System.String ErrorCode(DisconnectedReason disconnectedReason)
    // Offset: 0x2018E94
    static ::Il2CppString* ErrorCode(GlobalNamespace::DisconnectedReason disconnectedReason);
  }; // DisconnectedReasonMethods
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisconnectedReasonMethods*, "", "DisconnectedReasonMethods");
#pragma pack(pop)