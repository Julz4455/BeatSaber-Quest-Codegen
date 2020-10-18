// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionObjectiveChecker
#include "GlobalNamespace/MissionObjectiveChecker.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnergyMissionObjectiveChecker
  class EnergyMissionObjectiveChecker : public GlobalNamespace::MissionObjectiveChecker {
    public:
    // private GameEnergyCounter _energyCounter
    // Offset: 0x48
    GlobalNamespace::GameEnergyCounter* energyCounter;
    // protected System.Void OnDestroy()
    // Offset: 0xF64E8C
    void OnDestroy();
    // private System.Void HandleEnergyDidChange(System.Single energy)
    // Offset: 0xF64F64
    void HandleEnergyDidChange(float energy);
    // private System.Void CheckAndUpdateStatus()
    // Offset: 0xF64F9C
    void CheckAndUpdateStatus();
    // protected override System.Void Init()
    // Offset: 0xF65018
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0xF65118
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnergyMissionObjectiveChecker* New_ctor();
  }; // EnergyMissionObjectiveChecker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnergyMissionObjectiveChecker*, "", "EnergyMissionObjectiveChecker");
#pragma pack(pop)
