// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CentralLeaderboardViewController
#include "GlobalNamespace/CentralLeaderboardViewController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CentralLeaderboardViewController/LeaderboardPanel
  class CentralLeaderboardViewController::LeaderboardPanel : public ::Il2CppObject {
    public:
    // public readonly System.String title
    // Offset: 0x10
    ::Il2CppString* title;
    // public readonly System.String hint
    // Offset: 0x18
    ::Il2CppString* hint;
    // public readonly System.Boolean mixed
    // Offset: 0x20
    bool mixed;
    // public System.Void .ctor(System.String title, System.String hint, System.Boolean mixed)
    // Offset: 0xF1E4F0
    static CentralLeaderboardViewController::LeaderboardPanel* New_ctor(::Il2CppString* title, ::Il2CppString* hint, bool mixed);
  }; // CentralLeaderboardViewController/LeaderboardPanel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*, "", "CentralLeaderboardViewController/LeaderboardPanel");
#pragma pack(pop)
