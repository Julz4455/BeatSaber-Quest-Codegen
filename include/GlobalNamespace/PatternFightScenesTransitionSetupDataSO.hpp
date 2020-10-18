// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Skipping declaration: PatternFightEndStateType because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PatternFightScenesTransitionSetupDataSO
  class PatternFightScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // Nested type: GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType
    struct PatternFightEndStateType;
    // Autogenerated type: PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType
    struct PatternFightEndStateType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: PatternFightEndStateType
      constexpr PatternFightEndStateType(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType Completed
      static constexpr const int Completed = 0;
      // Get static field: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType Completed
      static GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType _get_Completed();
      // Set static field: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType Completed
      static void _set_Completed(GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType value);
      // static field const value: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType ReturnToMenu
      static constexpr const int ReturnToMenu = 1;
      // Get static field: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType ReturnToMenu
      static GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType _get_ReturnToMenu();
      // Set static field: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType ReturnToMenu
      static void _set_ReturnToMenu(GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType value);
    }; // PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType
    // private EnvironmentInfoSO _environmentInfo
    // Offset: 0x28
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // private SceneInfo _patternFightSceneInfo
    // Offset: 0x30
    GlobalNamespace::SceneInfo* patternFightSceneInfo;
    // private SceneInfo _gameCoreSceneInfo
    // Offset: 0x38
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // private System.Action`2<PatternFightScenesTransitionSetupDataSO,PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType> didFinishEvent
    // Offset: 0x40
    System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`2<PatternFightScenesTransitionSetupDataSO,PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType> value)
    // Offset: 0xFD5D0C
    void add_didFinishEvent(System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<PatternFightScenesTransitionSetupDataSO,PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType> value)
    // Offset: 0xFD5DB0
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>* value);
    // public System.Void Init(PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0xFD539C
    void Init(GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);
    // public System.Void Finish(PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType endState)
    // Offset: 0xFD5E54
    void Finish(GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType endState);
    // public System.Void .ctor()
    // Offset: 0xFD5ECC
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PatternFightScenesTransitionSetupDataSO* New_ctor();
  }; // PatternFightScenesTransitionSetupDataSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, "", "PatternFightScenesTransitionSetupDataSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType, "", "PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType");
#pragma pack(pop)
