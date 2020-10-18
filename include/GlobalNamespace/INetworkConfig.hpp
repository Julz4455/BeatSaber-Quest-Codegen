// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerEndPoint
  class MasterServerEndPoint;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: INetworkConfig
  class INetworkConfig {
    public:
    // public System.Int32 get_maxPartySize()
    // Offset: 0xFFFFFFFF
    int get_maxPartySize();
    // public System.Int32 get_discoveryPort()
    // Offset: 0xFFFFFFFF
    int get_discoveryPort();
    // public System.Int32 get_partyPort()
    // Offset: 0xFFFFFFFF
    int get_partyPort();
    // public System.Int32 get_multiplayerPort()
    // Offset: 0xFFFFFFFF
    int get_multiplayerPort();
    // public MasterServerEndPoint get_masterServerEndPoint()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MasterServerEndPoint* get_masterServerEndPoint();
    // public System.String get_masterServerStatusUrl()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_masterServerStatusUrl();
  }; // INetworkConfig
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INetworkConfig*, "", "INetworkConfig");
#pragma pack(pop)
