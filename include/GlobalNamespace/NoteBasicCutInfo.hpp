// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorType
  struct ColorType;
  // Forward declaring type: NoteCutDirection
  struct NoteCutDirection;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteBasicCutInfo
  class NoteBasicCutInfo : public ::Il2CppObject {
    public:
    // static field const value: static private System.Single kCutAngleTolerance
    static constexpr const float kCutAngleTolerance = 60;
    // Get static field: static private System.Single kCutAngleTolerance
    static float _get_kCutAngleTolerance();
    // Set static field: static private System.Single kCutAngleTolerance
    static void _set_kCutAngleTolerance(float value);
    // static field const value: static private System.Single kMinBladeSpeedForCut
    static constexpr const float kMinBladeSpeedForCut = 2;
    // Get static field: static private System.Single kMinBladeSpeedForCut
    static float _get_kMinBladeSpeedForCut();
    // Set static field: static private System.Single kMinBladeSpeedForCut
    static void _set_kMinBladeSpeedForCut(float value);
    // static public System.Void GetBasicCutInfo(UnityEngine.Transform noteTransform, ColorType colorType, NoteCutDirection cutDirection, SaberType saberType, System.Single saberBladeSpeed, UnityEngine.Vector3 cutDirVec, out System.Boolean directionOK, out System.Boolean speedOK, out System.Boolean saberTypeOK, out System.Single cutDirDeviation, out System.Single cutDirAngle)
    // Offset: 0x21BC534
    static void GetBasicCutInfo(UnityEngine::Transform* noteTransform, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::SaberType saberType, float saberBladeSpeed, UnityEngine::Vector3 cutDirVec, bool& directionOK, bool& speedOK, bool& saberTypeOK, float& cutDirDeviation, float& cutDirAngle);
    // public System.Void .ctor()
    // Offset: 0x21BC778
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NoteBasicCutInfo* New_ctor();
  }; // NoteBasicCutInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteBasicCutInfo*, "", "NoteBasicCutInfo");
#pragma pack(pop)
