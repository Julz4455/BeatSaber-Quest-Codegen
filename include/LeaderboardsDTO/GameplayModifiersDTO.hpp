// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Autogenerated type: LeaderboardsDTO.GameplayModifiersDto
  struct GameplayModifiersDto : public System::Enum {
    public:
    // public System.UInt32 value__
    // Offset: 0x0
    uint value;
    // Creating value type constructor for type: GameplayModifiersDto
    constexpr GameplayModifiersDto(uint value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto None
    static constexpr const uint None = 0u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto None
    static LeaderboardsDTO::GameplayModifiersDto _get_None();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto None
    static void _set_None(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto NoFail
    static constexpr const uint NoFail = 1u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto NoFail
    static LeaderboardsDTO::GameplayModifiersDto _get_NoFail();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto NoFail
    static void _set_NoFail(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto InstaFail
    static constexpr const uint InstaFail = 2u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto InstaFail
    static LeaderboardsDTO::GameplayModifiersDto _get_InstaFail();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto InstaFail
    static void _set_InstaFail(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto FailOnSaberClash
    static constexpr const uint FailOnSaberClash = 4u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto FailOnSaberClash
    static LeaderboardsDTO::GameplayModifiersDto _get_FailOnSaberClash();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto FailOnSaberClash
    static void _set_FailOnSaberClash(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto FastNotes
    static constexpr const uint FastNotes = 8u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto FastNotes
    static LeaderboardsDTO::GameplayModifiersDto _get_FastNotes();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto FastNotes
    static void _set_FastNotes(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto DisappearingArrows
    static constexpr const uint DisappearingArrows = 16u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto DisappearingArrows
    static LeaderboardsDTO::GameplayModifiersDto _get_DisappearingArrows();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto DisappearingArrows
    static void _set_DisappearingArrows(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto NoBombs
    static constexpr const uint NoBombs = 32u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto NoBombs
    static LeaderboardsDTO::GameplayModifiersDto _get_NoBombs();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto NoBombs
    static void _set_NoBombs(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto SongSpeedFaster
    static constexpr const uint SongSpeedFaster = 64u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto SongSpeedFaster
    static LeaderboardsDTO::GameplayModifiersDto _get_SongSpeedFaster();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto SongSpeedFaster
    static void _set_SongSpeedFaster(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto SongSpeedSlower
    static constexpr const uint SongSpeedSlower = 128u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto SongSpeedSlower
    static LeaderboardsDTO::GameplayModifiersDto _get_SongSpeedSlower();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto SongSpeedSlower
    static void _set_SongSpeedSlower(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto EnabledObstacleTypeFullHeightOnly
    static constexpr const uint EnabledObstacleTypeFullHeightOnly = 256u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto EnabledObstacleTypeFullHeightOnly
    static LeaderboardsDTO::GameplayModifiersDto _get_EnabledObstacleTypeFullHeightOnly();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto EnabledObstacleTypeFullHeightOnly
    static void _set_EnabledObstacleTypeFullHeightOnly(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto EnabledObstacleTypeNoObstacles
    static constexpr const uint EnabledObstacleTypeNoObstacles = 512u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto EnabledObstacleTypeNoObstacles
    static LeaderboardsDTO::GameplayModifiersDto _get_EnabledObstacleTypeNoObstacles();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto EnabledObstacleTypeNoObstacles
    static void _set_EnabledObstacleTypeNoObstacles(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto EnergyTypeBattery
    static constexpr const uint EnergyTypeBattery = 1024u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto EnergyTypeBattery
    static LeaderboardsDTO::GameplayModifiersDto _get_EnergyTypeBattery();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto EnergyTypeBattery
    static void _set_EnergyTypeBattery(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto StrictAngles
    static constexpr const uint StrictAngles = 2048u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto StrictAngles
    static LeaderboardsDTO::GameplayModifiersDto _get_StrictAngles();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto StrictAngles
    static void _set_StrictAngles(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto NoArrows
    static constexpr const uint NoArrows = 4096u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto NoArrows
    static LeaderboardsDTO::GameplayModifiersDto _get_NoArrows();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto NoArrows
    static void _set_NoArrows(LeaderboardsDTO::GameplayModifiersDto value);
    // static field const value: static public LeaderboardsDTO.GameplayModifiersDto GhostNotes
    static constexpr const uint GhostNotes = 8192u;
    // Get static field: static public LeaderboardsDTO.GameplayModifiersDto GhostNotes
    static LeaderboardsDTO::GameplayModifiersDto _get_GhostNotes();
    // Set static field: static public LeaderboardsDTO.GameplayModifiersDto GhostNotes
    static void _set_GhostNotes(LeaderboardsDTO::GameplayModifiersDto value);
  }; // LeaderboardsDTO.GameplayModifiersDto
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::GameplayModifiersDto, "LeaderboardsDTO", "GameplayModifiersDto");
#pragma pack(pop)
