// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CentralLeaderboardViewController
#include "GlobalNamespace/CentralLeaderboardViewController.hpp"
// Including type: HMUI.IconSegmentedControl
#include "HMUI/IconSegmentedControl.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CentralLeaderboardViewController/<>c
  class CentralLeaderboardViewController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly CentralLeaderboardViewController/<>c <>9
    static GlobalNamespace::CentralLeaderboardViewController::$$c* _get_$$9();
    // Set static field: static public readonly CentralLeaderboardViewController/<>c <>9
    static void _set_$$9(GlobalNamespace::CentralLeaderboardViewController::$$c* value);
    // Get static field: static public System.Func`2<CentralLeaderboardViewController/LeaderboardPanel,System.String> <>9__26_1
    static System::Func_2<GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*, ::Il2CppString*>* _get_$$9__26_1();
    // Set static field: static public System.Func`2<CentralLeaderboardViewController/LeaderboardPanel,System.String> <>9__26_1
    static void _set_$$9__26_1(System::Func_2<GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<CentralLeaderboardViewController/ScoreScopeInfo,HMUI.IconSegmentedControl/DataItem> <>9__26_2
    static System::Func_2<GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*, HMUI::IconSegmentedControl::DataItem*>* _get_$$9__26_2();
    // Set static field: static public System.Func`2<CentralLeaderboardViewController/ScoreScopeInfo,HMUI.IconSegmentedControl/DataItem> <>9__26_2
    static void _set_$$9__26_2(System::Func_2<GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*, HMUI::IconSegmentedControl::DataItem*>* value);
    // Get static field: static public System.Func`2<GameplayModifierParamsSO,System.String> <>9__37_0
    static System::Func_2<GlobalNamespace::GameplayModifierParamsSO*, ::Il2CppString*>* _get_$$9__37_0();
    // Set static field: static public System.Func`2<GameplayModifierParamsSO,System.String> <>9__37_0
    static void _set_$$9__37_0(System::Func_2<GlobalNamespace::GameplayModifierParamsSO*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xF1EE20
    static void _cctor();
    // System.String <DidActivate>b__26_1(CentralLeaderboardViewController/LeaderboardPanel x)
    // Offset: 0xF1EE90
    ::Il2CppString* $DidActivate$b__26_1(GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel* x);
    // HMUI.IconSegmentedControl/DataItem <DidActivate>b__26_2(CentralLeaderboardViewController/ScoreScopeInfo x)
    // Offset: 0xF1EEA8
    HMUI::IconSegmentedControl::DataItem* $DidActivate$b__26_2(GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo* x);
    // System.String <LoadScoresAsync>b__37_0(GameplayModifierParamsSO m)
    // Offset: 0xF1EF24
    ::Il2CppString* $LoadScoresAsync$b__37_0(GlobalNamespace::GameplayModifierParamsSO* m);
    // public System.Void .ctor()
    // Offset: 0xF1EE88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CentralLeaderboardViewController::$$c* New_ctor();
  }; // CentralLeaderboardViewController/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CentralLeaderboardViewController::$$c*, "", "CentralLeaderboardViewController/<>c");
#pragma pack(pop)
