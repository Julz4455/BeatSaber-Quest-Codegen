// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: MasterServer.IDedicatedServerMessage
#include "MasterServer/IDedicatedServerMessage.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.IDedicatedServerClientToServerMessage
  class IDedicatedServerClientToServerMessage : public MasterServer::IDedicatedServerMessage {
    public:
    // public System.String get_dedicatedServerId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_dedicatedServerId();
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0xFFFFFFFF
    int64_t get_dedicatedServerCreationTime();
  }; // MasterServer.IDedicatedServerClientToServerMessage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IDedicatedServerClientToServerMessage*, "MasterServer", "IDedicatedServerClientToServerMessage");
#pragma pack(pop)
