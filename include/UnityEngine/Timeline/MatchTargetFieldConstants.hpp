// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.MatchTargetFields
#include "UnityEngine/Timeline/MatchTargetFields.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  // Autogenerated type: UnityEngine.Timeline.MatchTargetFieldConstants
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MatchTargetFieldConstants : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MatchTargetFieldConstants
    MatchTargetFieldConstants() noexcept {}
    // Get static field: static public UnityEngine.Timeline.MatchTargetFields All
    static UnityEngine::Timeline::MatchTargetFields _get_All();
    // Set static field: static public UnityEngine.Timeline.MatchTargetFields All
    static void _set_All(UnityEngine::Timeline::MatchTargetFields value);
    // Get static field: static public UnityEngine.Timeline.MatchTargetFields None
    static UnityEngine::Timeline::MatchTargetFields _get_None();
    // Set static field: static public UnityEngine.Timeline.MatchTargetFields None
    static void _set_None(UnityEngine::Timeline::MatchTargetFields value);
    // Get static field: static public UnityEngine.Timeline.MatchTargetFields Position
    static UnityEngine::Timeline::MatchTargetFields _get_Position();
    // Set static field: static public UnityEngine.Timeline.MatchTargetFields Position
    static void _set_Position(UnityEngine::Timeline::MatchTargetFields value);
    // Get static field: static public UnityEngine.Timeline.MatchTargetFields Rotation
    static UnityEngine::Timeline::MatchTargetFields _get_Rotation();
    // Set static field: static public UnityEngine.Timeline.MatchTargetFields Rotation
    static void _set_Rotation(UnityEngine::Timeline::MatchTargetFields value);
    // static public System.Boolean HasAny(UnityEngine.Timeline.MatchTargetFields me, UnityEngine.Timeline.MatchTargetFields fields)
    // Offset: 0x141DFFC
    static bool HasAny(UnityEngine::Timeline::MatchTargetFields me, UnityEngine::Timeline::MatchTargetFields fields);
    // static public UnityEngine.Timeline.MatchTargetFields Toggle(UnityEngine.Timeline.MatchTargetFields me, UnityEngine.Timeline.MatchTargetFields flag)
    // Offset: 0x141E080
    static UnityEngine::Timeline::MatchTargetFields Toggle(UnityEngine::Timeline::MatchTargetFields me, UnityEngine::Timeline::MatchTargetFields flag);
    // static private System.Void .cctor()
    // Offset: 0x141E088
    static void _cctor();
  }; // UnityEngine.Timeline.MatchTargetFieldConstants
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::MatchTargetFieldConstants*, "UnityEngine.Timeline", "MatchTargetFieldConstants");
#pragma pack(pop)
