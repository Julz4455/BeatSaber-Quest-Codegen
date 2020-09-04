// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRBone
  class OVRBone;
  // Forward declaring type: OVRBoneCapsule
  class OVRBoneCapsule;
  // Skipping declaration: SkeletonType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRSkeleton
  class OVRSkeleton : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider
    class IOVRSkeletonDataProvider;
    // Nested type: GlobalNamespace::OVRSkeleton::SkeletonPoseData
    struct SkeletonPoseData;
    // Nested type: GlobalNamespace::OVRSkeleton::SkeletonType
    struct SkeletonType;
    // Nested type: GlobalNamespace::OVRSkeleton::BoneId
    struct BoneId;
    // Autogenerated type: OVRSkeleton/SkeletonType
    struct SkeletonType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: SkeletonType
      constexpr SkeletonType(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRSkeleton/SkeletonType None
      static constexpr const int None = -1;
      // Get static field: static public OVRSkeleton/SkeletonType None
      static GlobalNamespace::OVRSkeleton::SkeletonType _get_None();
      // Set static field: static public OVRSkeleton/SkeletonType None
      static void _set_None(GlobalNamespace::OVRSkeleton::SkeletonType value);
      // static field const value: static public OVRSkeleton/SkeletonType HandLeft
      static constexpr const int HandLeft = 0;
      // Get static field: static public OVRSkeleton/SkeletonType HandLeft
      static GlobalNamespace::OVRSkeleton::SkeletonType _get_HandLeft();
      // Set static field: static public OVRSkeleton/SkeletonType HandLeft
      static void _set_HandLeft(GlobalNamespace::OVRSkeleton::SkeletonType value);
      // static field const value: static public OVRSkeleton/SkeletonType HandRight
      static constexpr const int HandRight = 1;
      // Get static field: static public OVRSkeleton/SkeletonType HandRight
      static GlobalNamespace::OVRSkeleton::SkeletonType _get_HandRight();
      // Set static field: static public OVRSkeleton/SkeletonType HandRight
      static void _set_HandRight(GlobalNamespace::OVRSkeleton::SkeletonType value);
    }; // OVRSkeleton/SkeletonType
    // private OVRSkeleton/SkeletonType _skeletonType
    // Offset: 0x18
    GlobalNamespace::OVRSkeleton::SkeletonType skeletonType;
    // private OVRSkeleton/IOVRSkeletonDataProvider _dataProvider
    // Offset: 0x20
    GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider* dataProvider;
    // private System.Boolean _updateRootPose
    // Offset: 0x28
    bool updateRootPose;
    // private System.Boolean _updateRootScale
    // Offset: 0x29
    bool updateRootScale;
    // private System.Boolean _enablePhysicsCapsules
    // Offset: 0x2A
    bool enablePhysicsCapsules;
    // private UnityEngine.GameObject _bonesGO
    // Offset: 0x30
    UnityEngine::GameObject* bonesGO;
    // private UnityEngine.GameObject _bindPosesGO
    // Offset: 0x38
    UnityEngine::GameObject* bindPosesGO;
    // private UnityEngine.GameObject _capsulesGO
    // Offset: 0x40
    UnityEngine::GameObject* capsulesGO;
    // protected System.Collections.Generic.List`1<OVRBone> _bones
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>* bones;
    // private System.Collections.Generic.List`1<OVRBone> _bindPoses
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>* bindPoses;
    // private System.Collections.Generic.List`1<OVRBoneCapsule> _capsules
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::OVRBoneCapsule*>* capsules;
    // private readonly UnityEngine.Quaternion wristFixupRotation
    // Offset: 0x60
    UnityEngine::Quaternion wristFixupRotation;
    // private System.Boolean <IsInitialized>k__BackingField
    // Offset: 0x70
    bool IsInitialized;
    // private System.Boolean <IsDataValid>k__BackingField
    // Offset: 0x71
    bool IsDataValid;
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Offset: 0x72
    bool IsDataHighConfidence;
    // private System.Collections.Generic.IList`1<OVRBone> <Bones>k__BackingField
    // Offset: 0x78
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* Bones;
    // private System.Collections.Generic.IList`1<OVRBone> <BindPoses>k__BackingField
    // Offset: 0x80
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* BindPoses;
    // private System.Collections.Generic.IList`1<OVRBoneCapsule> <Capsules>k__BackingField
    // Offset: 0x88
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* Capsules;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_IsInitialized()
    // Offset: 0xF597A4
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0xF597AC
    void set_IsInitialized(bool value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0xF597B8
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0xF597C0
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0xF597CC
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0xF597D4
    void set_IsDataHighConfidence(bool value);
    // public System.Collections.Generic.IList`1<OVRBone> get_Bones()
    // Offset: 0xF597E0
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* get_Bones();
    // protected System.Void set_Bones(System.Collections.Generic.IList`1<OVRBone> value)
    // Offset: 0xF597E8
    void set_Bones(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* value);
    // public System.Collections.Generic.IList`1<OVRBone> get_BindPoses()
    // Offset: 0xF597F0
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* get_BindPoses();
    // private System.Void set_BindPoses(System.Collections.Generic.IList`1<OVRBone> value)
    // Offset: 0xF597F8
    void set_BindPoses(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* value);
    // public System.Collections.Generic.IList`1<OVRBoneCapsule> get_Capsules()
    // Offset: 0xF59800
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* get_Capsules();
    // private System.Void set_Capsules(System.Collections.Generic.IList`1<OVRBoneCapsule> value)
    // Offset: 0xF59808
    void set_Capsules(System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* value);
    // public OVRSkeleton/SkeletonType GetSkeletonType()
    // Offset: 0xF59810
    GlobalNamespace::OVRSkeleton::SkeletonType GetSkeletonType();
    // private System.Void Awake()
    // Offset: 0xF59818
    void Awake();
    // private System.Void Start()
    // Offset: 0xF599A0
    void Start();
    // private System.Void Initialize()
    // Offset: 0xF599B4
    void Initialize();
    // protected System.Void InitializeBones(OVRPlugin/Skeleton skeleton)
    // Offset: 0xF5A86C
    void InitializeBones(GlobalNamespace::OVRPlugin::Skeleton skeleton);
    // private System.Void InitializeBindPose(OVRPlugin/Skeleton skeleton)
    // Offset: 0xF59A94
    void InitializeBindPose(GlobalNamespace::OVRPlugin::Skeleton skeleton);
    // private System.Void InitializeCapsules(OVRPlugin/Skeleton skeleton)
    // Offset: 0xF59FE0
    void InitializeCapsules(GlobalNamespace::OVRPlugin::Skeleton skeleton);
    // private System.Void Update()
    // Offset: 0xF5AD90
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0xF5B15C
    void FixedUpdate();
    // public OVRSkeleton/BoneId GetCurrentStartBoneId()
    // Offset: 0xF5B400
    GlobalNamespace::OVRSkeleton::BoneId GetCurrentStartBoneId();
    // public OVRSkeleton/BoneId GetCurrentEndBoneId()
    // Offset: 0xF5B410
    GlobalNamespace::OVRSkeleton::BoneId GetCurrentEndBoneId();
    // private OVRSkeleton/BoneId GetCurrentMaxSkinnableBoneId()
    // Offset: 0xF5B424
    GlobalNamespace::OVRSkeleton::BoneId GetCurrentMaxSkinnableBoneId();
    // public System.Int32 GetCurrentNumBones()
    // Offset: 0xF5B438
    int GetCurrentNumBones();
    // public System.Int32 GetCurrentNumSkinnableBones()
    // Offset: 0xF5B44C
    int GetCurrentNumSkinnableBones();
    // public System.Void .ctor()
    // Offset: 0xF5B460
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRSkeleton* New_ctor();
  }; // OVRSkeleton
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeleton*, "", "OVRSkeleton");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeleton::SkeletonType, "", "OVRSkeleton/SkeletonType");
#pragma pack(pop)
