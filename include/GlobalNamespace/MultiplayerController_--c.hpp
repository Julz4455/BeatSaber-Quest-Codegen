// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
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
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerController/<>c
  class MultiplayerController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly MultiplayerController/<>c <>9
    static GlobalNamespace::MultiplayerController::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerController/<>c <>9
    static void _set_$$9(GlobalNamespace::MultiplayerController::$$c* value);
    // Get static field: static public System.Func`2<LevelCompletionResults,System.Boolean> <>9__40_0
    static System::Func_2<GlobalNamespace::LevelCompletionResults*, bool>* _get_$$9__40_0();
    // Set static field: static public System.Func`2<LevelCompletionResults,System.Boolean> <>9__40_0
    static void _set_$$9__40_0(System::Func_2<GlobalNamespace::LevelCompletionResults*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0xFD1A00
    static void _cctor();
    // System.Boolean <HandleAllResultsCollected>b__40_0(LevelCompletionResults result)
    // Offset: 0xFD1A70
    bool $HandleAllResultsCollected$b__40_0(GlobalNamespace::LevelCompletionResults* result);
    // public System.Void .ctor()
    // Offset: 0xFD1A68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MultiplayerController::$$c* New_ctor();
  }; // MultiplayerController/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerController::$$c*, "", "MultiplayerController/<>c");
#pragma pack(pop)
