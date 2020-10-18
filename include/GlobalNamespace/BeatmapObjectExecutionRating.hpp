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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: BeatmapObjectExecutionRatingType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectExecutionRating
  class BeatmapObjectExecutionRating : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType
    struct BeatmapObjectExecutionRatingType;
    // Autogenerated type: BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType
    struct BeatmapObjectExecutionRatingType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: BeatmapObjectExecutionRatingType
      constexpr BeatmapObjectExecutionRatingType(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Note
      static constexpr const int Note = 0;
      // Get static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Note
      static GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType _get_Note();
      // Set static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Note
      static void _set_Note(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
      // static field const value: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Bomb
      static constexpr const int Bomb = 1;
      // Get static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Bomb
      static GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType _get_Bomb();
      // Set static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Bomb
      static void _set_Bomb(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
      // static field const value: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Obstacle
      static constexpr const int Obstacle = 2;
      // Get static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Obstacle
      static GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType _get_Obstacle();
      // Set static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Obstacle
      static void _set_Obstacle(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
    }; // BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType
    // private BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType <beatmapObjectRatingType>k__BackingField
    // Offset: 0x10
    GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType beatmapObjectRatingType;
    // private System.Single <time>k__BackingField
    // Offset: 0x14
    float time;
    // public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType get_beatmapObjectRatingType()
    // Offset: 0x105B654
    GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType get_beatmapObjectRatingType();
    // public System.Void set_beatmapObjectRatingType(BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType value)
    // Offset: 0x105B65C
    void set_beatmapObjectRatingType(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
    // public System.Single get_time()
    // Offset: 0x105B664
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x105B66C
    void set_time(float value);
    // public System.Void .ctor()
    // Offset: 0x105B674
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BeatmapObjectExecutionRating* New_ctor();
  }; // BeatmapObjectExecutionRating
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRating*, "", "BeatmapObjectExecutionRating");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType, "", "BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType");
#pragma pack(pop)
