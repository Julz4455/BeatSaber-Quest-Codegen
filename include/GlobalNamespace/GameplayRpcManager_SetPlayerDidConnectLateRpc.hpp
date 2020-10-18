// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: RemoteProcedureCall`2
#include "GlobalNamespace/RemoteProcedureCall_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayersAtGameStartNetSerializable
  class PlayersAtGameStartNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayRpcManager/SetPlayerDidConnectLateRpc
  class GameplayRpcManager::SetPlayerDidConnectLateRpc : public GlobalNamespace::RemoteProcedureCall_2<::Il2CppString*, GlobalNamespace::PlayersAtGameStartNetSerializable*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1164C54
    // Implemented from: RemoteProcedureCall`2
    // Base method: System.Void RemoteProcedureCall_2::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayRpcManager::SetPlayerDidConnectLateRpc* New_ctor();
  }; // GameplayRpcManager/SetPlayerDidConnectLateRpc
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLateRpc*, "", "GameplayRpcManager/SetPlayerDidConnectLateRpc");
#pragma pack(pop)
