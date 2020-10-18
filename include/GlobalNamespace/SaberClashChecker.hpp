// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: SaberManager
  class SaberManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberClashChecker
  class SaberClashChecker : public ::Il2CppObject {
    public:
    // private System.Boolean _sabersAreClashing
    // Offset: 0x10
    bool sabersAreClashing;
    // private UnityEngine.Vector3 _clashingPoint
    // Offset: 0x14
    UnityEngine::Vector3 clashingPoint;
    // private Saber _leftSaber
    // Offset: 0x20
    GlobalNamespace::Saber* leftSaber;
    // private Saber _rightSaber
    // Offset: 0x28
    GlobalNamespace::Saber* rightSaber;
    // private System.Int32 _prevGetFrameNum
    // Offset: 0x30
    int prevGetFrameNum;
    // static field const value: static private System.Single kMinDistanceToClash
    static constexpr const float kMinDistanceToClash = 0.08;
    // Get static field: static private System.Single kMinDistanceToClash
    static float _get_kMinDistanceToClash();
    // Set static field: static private System.Single kMinDistanceToClash
    static void _set_kMinDistanceToClash(float value);
    // static field const value: static private System.Single kIgnoredTime
    static constexpr const float kIgnoredTime = 0.1;
    // Get static field: static private System.Single kIgnoredTime
    static float _get_kIgnoredTime();
    // Set static field: static private System.Single kIgnoredTime
    static void _set_kIgnoredTime(float value);
    // private System.Void Init(SaberManager saberManager)
    // Offset: 0xF7F8D0
    void Init(GlobalNamespace::SaberManager* saberManager);
    // public System.Boolean AreSabersClashing(out UnityEngine.Vector3 clashingPoint)
    // Offset: 0xF7F914
    bool AreSabersClashing(UnityEngine::Vector3& clashingPoint);
    // private System.Single SegmentToSegmentDist(UnityEngine.Vector3 fromA, UnityEngine.Vector3 toA, UnityEngine.Vector3 fromB, UnityEngine.Vector3 toB, out UnityEngine.Vector3 inbetweenPoint)
    // Offset: 0xF7FAEC
    float SegmentToSegmentDist(UnityEngine::Vector3 fromA, UnityEngine::Vector3 toA, UnityEngine::Vector3 fromB, UnityEngine::Vector3 toB, UnityEngine::Vector3& inbetweenPoint);
    // public System.Void .ctor()
    // Offset: 0xF7FF98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SaberClashChecker* New_ctor();
  }; // SaberClashChecker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberClashChecker*, "", "SaberClashChecker");
#pragma pack(pop)
