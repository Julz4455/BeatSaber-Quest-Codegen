// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionLevelFailedController
#include "GlobalNamespace/MissionLevelFailedController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionLevelFailedController/InitData
  class MissionLevelFailedController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean autoRestart
    // Offset: 0x10
    bool autoRestart;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return autoRestart;
    }
    // public System.Void .ctor(System.Boolean autoRestart)
    // Offset: 0xEDCD8C
    static MissionLevelFailedController::InitData* New_ctor(bool autoRestart);
  }; // MissionLevelFailedController/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelFailedController::InitData*, "", "MissionLevelFailedController/InitData");
#pragma pack(pop)
