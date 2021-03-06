// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutInfo
  // [] Offset: FFFFFFFF
  class NoteCutInfo : public ::Il2CppObject {
    public:
    // public readonly System.Boolean speedOK
    // Size: 0x1
    // Offset: 0x10
    bool speedOK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean directionOK
    // Size: 0x1
    // Offset: 0x11
    bool directionOK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean saberTypeOK
    // Size: 0x1
    // Offset: 0x12
    bool saberTypeOK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean wasCutTooSoon
    // Size: 0x1
    // Offset: 0x13
    bool wasCutTooSoon;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Single saberSpeed
    // Size: 0x4
    // Offset: 0x14
    float saberSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly UnityEngine.Vector3 saberDir
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 saberDir;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public readonly SaberType saberType
    // Size: 0x4
    // Offset: 0x24
    GlobalNamespace::SaberType saberType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberType) == 0x4);
    // public readonly System.Single timeDeviation
    // Size: 0x4
    // Offset: 0x28
    float timeDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single cutDirDeviation
    // Size: 0x4
    // Offset: 0x2C
    float cutDirDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly UnityEngine.Vector3 cutPoint
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 cutPoint;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 cutNormal
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 cutNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public readonly System.Single cutAngle
    // Size: 0x4
    // Offset: 0x48
    float cutAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single cutDistanceToCenter
    // Size: 0x4
    // Offset: 0x4C
    float cutDistanceToCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly ISaberSwingRatingCounter swingRatingCounter
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ISaberSwingRatingCounter*) == 0x8);
    // Creating value type constructor for type: NoteCutInfo
    NoteCutInfo(bool speedOK_ = {}, bool directionOK_ = {}, bool saberTypeOK_ = {}, bool wasCutTooSoon_ = {}, float saberSpeed_ = {}, UnityEngine::Vector3 saberDir_ = {}, GlobalNamespace::SaberType saberType_ = {}, float timeDeviation_ = {}, float cutDirDeviation_ = {}, UnityEngine::Vector3 cutPoint_ = {}, UnityEngine::Vector3 cutNormal_ = {}, float cutAngle_ = {}, float cutDistanceToCenter_ = {}, GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter_ = {}) noexcept : speedOK{speedOK_}, directionOK{directionOK_}, saberTypeOK{saberTypeOK_}, wasCutTooSoon{wasCutTooSoon_}, saberSpeed{saberSpeed_}, saberDir{saberDir_}, saberType{saberType_}, timeDeviation{timeDeviation_}, cutDirDeviation{cutDirDeviation_}, cutPoint{cutPoint_}, cutNormal{cutNormal_}, cutAngle{cutAngle_}, cutDistanceToCenter{cutDistanceToCenter_}, swingRatingCounter{swingRatingCounter_} {}
    // public System.Boolean get_allIsOK()
    // Offset: 0x226D844
    bool get_allIsOK();
    // public System.Boolean get_allExceptSaberTypeIsOK()
    // Offset: 0x226D874
    bool get_allExceptSaberTypeIsOK();
    // public System.String get_failText()
    // Offset: 0x226D89C
    ::Il2CppString* get_failText();
    // public System.Void .ctor(System.Boolean speedOK, System.Boolean directionOK, System.Boolean saberTypeOK, System.Boolean wasCutTooSoon, System.Single saberSpeed, UnityEngine.Vector3 saberDir, SaberType saberType, System.Single timeDeviation, System.Single cutDirDeviation, UnityEngine.Vector3 cutPoint, UnityEngine.Vector3 cutNormal, System.Single cutDistanceToCenter, System.Single cutAngle, ISaberSwingRatingCounter swingRatingCounter)
    // Offset: 0x226D938
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutInfo* New_ctor(bool speedOK, bool directionOK, bool saberTypeOK, bool wasCutTooSoon, float saberSpeed, UnityEngine::Vector3 saberDir, GlobalNamespace::SaberType saberType, float timeDeviation, float cutDirDeviation, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, float cutDistanceToCenter, float cutAngle, GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutInfo*, creationType>(speedOK, directionOK, saberTypeOK, wasCutTooSoon, saberSpeed, saberDir, saberType, timeDeviation, cutDirDeviation, cutPoint, cutNormal, cutDistanceToCenter, cutAngle, swingRatingCounter)));
    }
  }; // NoteCutInfo
  #pragma pack(pop)
  static check_size<sizeof(NoteCutInfo), 80 + sizeof(GlobalNamespace::ISaberSwingRatingCounter*)> __GlobalNamespace_NoteCutInfoSizeCheck;
  static_assert(sizeof(NoteCutInfo) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutInfo*, "", "NoteCutInfo");
