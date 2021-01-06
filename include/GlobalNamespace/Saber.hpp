// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: SaberMovementData
  class SaberMovementData;
  // Forward declaring type: SaberSwingRatingCounter
  class SaberSwingRatingCounter;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  // Autogenerated type: Saber
  // [] Offset: FFFFFFFF
  class Saber : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _saberBladeTopTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* saberBladeTopTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _saberBladeBottomTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* saberBladeBottomTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _handleTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* handleTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private SaberTypeObject _saberType
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SaberTypeObject* saberType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTypeObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCACDC
    // private System.Boolean <disableCutting>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool disableCutting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableCutting and: movementData
    char __padding4[0x7] = {};
    // private readonly SaberMovementData _movementData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SaberMovementData* movementData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberMovementData*) == 0x8);
    // private readonly System.Collections.Generic.List`1<SaberSwingRatingCounter> _swingRatingCounters
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::SaberSwingRatingCounter*>* swingRatingCounters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::SaberSwingRatingCounter*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<SaberSwingRatingCounter> _unusedSwingRatingCounters
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::SaberSwingRatingCounter*>* unusedSwingRatingCounters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::SaberSwingRatingCounter*>*) == 0x8);
    // private UnityEngine.Vector3 _saberBladeTopPos
    // Size: 0xC
    // Offset: 0x58
    UnityEngine::Vector3 saberBladeTopPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _saberBladeBottomPos
    // Size: 0xC
    // Offset: 0x64
    UnityEngine::Vector3 saberBladeBottomPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Saber
    Saber(UnityEngine::Transform* saberBladeTopTransform_ = {}, UnityEngine::Transform* saberBladeBottomTransform_ = {}, UnityEngine::Transform* handleTransform_ = {}, GlobalNamespace::SaberTypeObject* saberType_ = {}, bool disableCutting_ = {}, GlobalNamespace::SaberMovementData* movementData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::SaberSwingRatingCounter*>* swingRatingCounters_ = {}, System::Collections::Generic::List_1<GlobalNamespace::SaberSwingRatingCounter*>* unusedSwingRatingCounters_ = {}, UnityEngine::Vector3 saberBladeTopPos_ = {}, UnityEngine::Vector3 saberBladeBottomPos_ = {}) noexcept : saberBladeTopTransform{saberBladeTopTransform_}, saberBladeBottomTransform{saberBladeBottomTransform_}, handleTransform{handleTransform_}, saberType{saberType_}, disableCutting{disableCutting_}, movementData{movementData_}, swingRatingCounters{swingRatingCounters_}, unusedSwingRatingCounters{unusedSwingRatingCounters_}, saberBladeTopPos{saberBladeTopPos_}, saberBladeBottomPos{saberBladeBottomPos_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kNumberOfPreallocatedSwingRatingCounters
    static constexpr const int kNumberOfPreallocatedSwingRatingCounters = 20;
    // Get static field: static private System.Int32 kNumberOfPreallocatedSwingRatingCounters
    static int _get_kNumberOfPreallocatedSwingRatingCounters();
    // Set static field: static private System.Int32 kNumberOfPreallocatedSwingRatingCounters
    static void _set_kNumberOfPreallocatedSwingRatingCounters(int value);
    // public SaberType get_saberType()
    // Offset: 0xF37360
    GlobalNamespace::SaberType get_saberType();
    // public UnityEngine.Vector3 get_saberBladeTopPos()
    // Offset: 0xF3737C
    UnityEngine::Vector3 get_saberBladeTopPos();
    // public UnityEngine.Vector3 get_saberBladeBottomPos()
    // Offset: 0xF37388
    UnityEngine::Vector3 get_saberBladeBottomPos();
    // public UnityEngine.Vector3 get_handlePos()
    // Offset: 0xF37394
    UnityEngine::Vector3 get_handlePos();
    // public UnityEngine.Quaternion get_handleRot()
    // Offset: 0xF373B0
    UnityEngine::Quaternion get_handleRot();
    // public System.Single get_bladeSpeed()
    // Offset: 0xF373CC
    float get_bladeSpeed();
    // public SaberMovementData get_movementData()
    // Offset: 0xF373E8
    GlobalNamespace::SaberMovementData* get_movementData();
    // public System.Boolean get_disableCutting()
    // Offset: 0xF373F0
    bool get_disableCutting();
    // public System.Void set_disableCutting(System.Boolean value)
    // Offset: 0xF373F8
    void set_disableCutting(bool value);
    // protected System.Void Start()
    // Offset: 0xF37404
    void Start();
    // public System.Void ManualUpdate()
    // Offset: 0xF374A4
    void ManualUpdate();
    // public SaberSwingRatingCounter CreateSwingRatingCounter(UnityEngine.Transform noteTransform)
    // Offset: 0xF3768C
    GlobalNamespace::SaberSwingRatingCounter* CreateSwingRatingCounter(UnityEngine::Transform* noteTransform);
    // protected System.Void OnDrawGizmos()
    // Offset: 0xF37768
    void OnDrawGizmos();
    // public System.Void OverridePositionAndRotation(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0xF37860
    void OverridePositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // public System.Void .ctor()
    // Offset: 0xF378DC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Saber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Saber").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Saber*, creationType>()));
    }
  }; // Saber
  static check_size<sizeof(Saber), 100 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_SaberSizeCheck;
  static_assert(sizeof(Saber) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Saber*, "", "Saber");
#pragma pack(pop)
