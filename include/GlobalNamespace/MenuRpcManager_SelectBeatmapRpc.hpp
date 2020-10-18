// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall`1
#include "GlobalNamespace/RemoteProcedureCall_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuRpcManager/SelectBeatmapRpc
  class MenuRpcManager::SelectBeatmapRpc : public GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::BeatmapIdentifierNetSerializable*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1C34D20
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuRpcManager::SelectBeatmapRpc* New_ctor();
  }; // MenuRpcManager/SelectBeatmapRpc
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::SelectBeatmapRpc*, "", "MenuRpcManager/SelectBeatmapRpc");
#pragma pack(pop)
