// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ILobbyGameStateController
#include "GlobalNamespace/ILobbyGameStateController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ILobbyHostGameStateController
  class ILobbyHostGameStateController : public GlobalNamespace::ILobbyGameStateController {
    public:
    // public System.Void StartGame()
    // Offset: 0xFFFFFFFF
    void StartGame();
    // public System.Void CancelGame()
    // Offset: 0xFFFFFFFF
    void CancelGame();
  }; // ILobbyHostGameStateController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILobbyHostGameStateController*, "", "ILobbyHostGameStateController");
#pragma pack(pop)
