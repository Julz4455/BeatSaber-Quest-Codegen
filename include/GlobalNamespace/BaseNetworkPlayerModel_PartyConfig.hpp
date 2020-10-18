// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseNetworkPlayerModel
#include "GlobalNamespace/BaseNetworkPlayerModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: INetworkPlayerModel because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BaseNetworkPlayerModel/PartyConfig
  class BaseNetworkPlayerModel::PartyConfig : public ::Il2CppObject {
    public:
    // public GameplayServerConfiguration configuration
    // Offset: 0x10
    GlobalNamespace::GameplayServerConfiguration configuration;
    // public System.Int32 maxPartySize
    // Offset: 0x28
    int maxPartySize;
    // public INetworkPlayerModel partyManager
    // Offset: 0x30
    GlobalNamespace::INetworkPlayerModel* partyManager;
    // public System.Void .ctor()
    // Offset: 0xFBAF54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BaseNetworkPlayerModel::PartyConfig* New_ctor();
  }; // BaseNetworkPlayerModel/PartyConfig
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNetworkPlayerModel::PartyConfig*, "", "BaseNetworkPlayerModel/PartyConfig");
#pragma pack(pop)
