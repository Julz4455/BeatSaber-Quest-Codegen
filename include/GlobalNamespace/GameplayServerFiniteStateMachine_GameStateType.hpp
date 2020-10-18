// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayServerFiniteStateMachine
#include "GlobalNamespace/GameplayServerFiniteStateMachine.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayServerFiniteStateMachine/GameStateType
  struct GameplayServerFiniteStateMachine::GameStateType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: GameStateType
    constexpr GameStateType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GameplayServerFiniteStateMachine/GameStateType EmptyServer
    static constexpr const int EmptyServer = 0;
    // Get static field: static public GameplayServerFiniteStateMachine/GameStateType EmptyServer
    static GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType _get_EmptyServer();
    // Set static field: static public GameplayServerFiniteStateMachine/GameStateType EmptyServer
    static void _set_EmptyServer(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType value);
    // static field const value: static public GameplayServerFiniteStateMachine/GameStateType SelectingLevel
    static constexpr const int SelectingLevel = 1;
    // Get static field: static public GameplayServerFiniteStateMachine/GameStateType SelectingLevel
    static GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType _get_SelectingLevel();
    // Set static field: static public GameplayServerFiniteStateMachine/GameStateType SelectingLevel
    static void _set_SelectingLevel(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType value);
    // static field const value: static public GameplayServerFiniteStateMachine/GameStateType StartingLevel
    static constexpr const int StartingLevel = 2;
    // Get static field: static public GameplayServerFiniteStateMachine/GameStateType StartingLevel
    static GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType _get_StartingLevel();
    // Set static field: static public GameplayServerFiniteStateMachine/GameStateType StartingLevel
    static void _set_StartingLevel(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType value);
    // static field const value: static public GameplayServerFiniteStateMachine/GameStateType RunningLevel
    static constexpr const int RunningLevel = 3;
    // Get static field: static public GameplayServerFiniteStateMachine/GameStateType RunningLevel
    static GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType _get_RunningLevel();
    // Set static field: static public GameplayServerFiniteStateMachine/GameStateType RunningLevel
    static void _set_RunningLevel(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType value);
  }; // GameplayServerFiniteStateMachine/GameStateType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType, "", "GameplayServerFiniteStateMachine/GameStateType");
#pragma pack(pop)
