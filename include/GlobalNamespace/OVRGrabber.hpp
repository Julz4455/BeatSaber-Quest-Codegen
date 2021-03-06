// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/Controller
#include "GlobalNamespace/OVRInput.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRGrabbable
  class OVRGrabbable;
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: OVRGrabber
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: CF5884
  class OVRGrabber : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single grabBegin
    // Size: 0x4
    // Offset: 0x18
    float grabBegin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single grabEnd
    // Size: 0x4
    // Offset: 0x1C
    float grabEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean alreadyUpdated
    // Size: 0x1
    // Offset: 0x20
    bool alreadyUpdated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_parentHeldObject
    // Size: 0x1
    // Offset: 0x21
    bool m_parentHeldObject;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_moveHandPosition
    // Size: 0x1
    // Offset: 0x22
    bool m_moveHandPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_moveHandPosition and: m_gripTransform
    char __padding4[0x5] = {};
    // protected UnityEngine.Transform m_gripTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* m_gripTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.Collider[] m_grabVolumes
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::Collider*>* m_grabVolumes;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Collider*>*) == 0x8);
    // protected OVRInput/Controller m_controller
    // Size: 0x4
    // Offset: 0x38
    GlobalNamespace::OVRInput::Controller m_controller;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::Controller) == 0x4);
    // Padding between fields: m_controller and: m_parentTransform
    char __padding7[0x4] = {};
    // protected UnityEngine.Transform m_parentTransform
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* m_parentTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.GameObject m_player
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::GameObject* m_player;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // protected System.Boolean m_grabVolumeEnabled
    // Size: 0x1
    // Offset: 0x50
    bool m_grabVolumeEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_grabVolumeEnabled and: m_lastPos
    char __padding10[0x3] = {};
    // protected UnityEngine.Vector3 m_lastPos
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 m_lastPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // protected UnityEngine.Quaternion m_lastRot
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Quaternion m_lastRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // protected UnityEngine.Quaternion m_anchorOffsetRotation
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Quaternion m_anchorOffsetRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // protected UnityEngine.Vector3 m_anchorOffsetPosition
    // Size: 0xC
    // Offset: 0x80
    UnityEngine::Vector3 m_anchorOffsetPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // protected System.Single m_prevFlex
    // Size: 0x4
    // Offset: 0x8C
    float m_prevFlex;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected OVRGrabbable m_grabbedObj
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::OVRGrabbable* m_grabbedObj;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRGrabbable*) == 0x8);
    // protected UnityEngine.Vector3 m_grabbedObjectPosOff
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 m_grabbedObjectPosOff;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // protected UnityEngine.Quaternion m_grabbedObjectRotOff
    // Size: 0x10
    // Offset: 0xA4
    UnityEngine::Quaternion m_grabbedObjectRotOff;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Padding between fields: m_grabbedObjectRotOff and: m_grabCandidates
    char __padding18[0x4] = {};
    // protected System.Collections.Generic.Dictionary`2<OVRGrabbable,System.Int32> m_grabCandidates
    // Size: 0x8
    // Offset: 0xB8
    System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGrabbable*, int>* m_grabCandidates;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGrabbable*, int>*) == 0x8);
    // protected System.Boolean m_operatingWithoutOVRCameraRig
    // Size: 0x1
    // Offset: 0xC0
    bool m_operatingWithoutOVRCameraRig;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVRGrabber
    OVRGrabber(float grabBegin_ = {}, float grabEnd_ = {}, bool alreadyUpdated_ = {}, bool m_parentHeldObject_ = {}, bool m_moveHandPosition_ = {}, UnityEngine::Transform* m_gripTransform_ = {}, ::Array<UnityEngine::Collider*>* m_grabVolumes_ = {}, GlobalNamespace::OVRInput::Controller m_controller_ = {}, UnityEngine::Transform* m_parentTransform_ = {}, UnityEngine::GameObject* m_player_ = {}, bool m_grabVolumeEnabled_ = {}, UnityEngine::Vector3 m_lastPos_ = {}, UnityEngine::Quaternion m_lastRot_ = {}, UnityEngine::Quaternion m_anchorOffsetRotation_ = {}, UnityEngine::Vector3 m_anchorOffsetPosition_ = {}, float m_prevFlex_ = {}, GlobalNamespace::OVRGrabbable* m_grabbedObj_ = {}, UnityEngine::Vector3 m_grabbedObjectPosOff_ = {}, UnityEngine::Quaternion m_grabbedObjectRotOff_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGrabbable*, int>* m_grabCandidates_ = {}, bool m_operatingWithoutOVRCameraRig_ = {}) noexcept : grabBegin{grabBegin_}, grabEnd{grabEnd_}, alreadyUpdated{alreadyUpdated_}, m_parentHeldObject{m_parentHeldObject_}, m_moveHandPosition{m_moveHandPosition_}, m_gripTransform{m_gripTransform_}, m_grabVolumes{m_grabVolumes_}, m_controller{m_controller_}, m_parentTransform{m_parentTransform_}, m_player{m_player_}, m_grabVolumeEnabled{m_grabVolumeEnabled_}, m_lastPos{m_lastPos_}, m_lastRot{m_lastRot_}, m_anchorOffsetRotation{m_anchorOffsetRotation_}, m_anchorOffsetPosition{m_anchorOffsetPosition_}, m_prevFlex{m_prevFlex_}, m_grabbedObj{m_grabbedObj_}, m_grabbedObjectPosOff{m_grabbedObjectPosOff_}, m_grabbedObjectRotOff{m_grabbedObjectRotOff_}, m_grabCandidates{m_grabCandidates_}, m_operatingWithoutOVRCameraRig{m_operatingWithoutOVRCameraRig_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public OVRGrabbable get_grabbedObject()
    // Offset: 0x139F02C
    GlobalNamespace::OVRGrabbable* get_grabbedObject();
    // public System.Void ForceRelease(OVRGrabbable grabbable)
    // Offset: 0x139EF54
    void ForceRelease(GlobalNamespace::OVRGrabbable* grabbable);
    // protected System.Void Awake()
    // Offset: 0x139F2B8
    void Awake();
    // protected System.Void Start()
    // Offset: 0x139F3F4
    void Start();
    // public System.Void Update()
    // Offset: 0x139F788
    void Update();
    // public System.Void FixedUpdate()
    // Offset: 0x139F790
    void FixedUpdate();
    // private System.Void OnUpdatedAnchors()
    // Offset: 0x139F7A0
    void OnUpdatedAnchors();
    // private System.Void OnDestroy()
    // Offset: 0x139FAA0
    void OnDestroy();
    // private System.Void OnTriggerEnter(UnityEngine.Collider otherCollider)
    // Offset: 0x139FB28
    void OnTriggerEnter(UnityEngine::Collider* otherCollider);
    // private System.Void OnTriggerExit(UnityEngine.Collider otherCollider)
    // Offset: 0x139FC30
    void OnTriggerExit(UnityEngine::Collider* otherCollider);
    // protected System.Void CheckForGrabOrRelease(System.Single prevFlex)
    // Offset: 0x139FA60
    void CheckForGrabOrRelease(float prevFlex);
    // protected System.Void GrabBegin()
    // Offset: 0x139FD60
    void GrabBegin();
    // protected System.Void MoveGrabbedObject(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot, System.Boolean forceTeleport)
    // Offset: 0x13A04BC
    void MoveGrabbedObject(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot, bool forceTeleport);
    // protected System.Void GrabEnd()
    // Offset: 0x139F034
    void GrabEnd();
    // protected System.Void GrabbableRelease(UnityEngine.Vector3 linearVelocity, UnityEngine.Vector3 angularVelocity)
    // Offset: 0x13A12A8
    void GrabbableRelease(UnityEngine::Vector3 linearVelocity, UnityEngine::Vector3 angularVelocity);
    // protected System.Void GrabVolumeEnable(System.Boolean enabled)
    // Offset: 0x13A1334
    void GrabVolumeEnable(bool enabled);
    // protected System.Void OffhandGrabbed(OVRGrabbable grabbable)
    // Offset: 0x13A141C
    void OffhandGrabbed(GlobalNamespace::OVRGrabbable* grabbable);
    // protected System.Void SetPlayerIgnoreCollision(UnityEngine.GameObject grabbable, System.Boolean ignore)
    // Offset: 0x139F624
    void SetPlayerIgnoreCollision(UnityEngine::GameObject* grabbable, bool ignore);
    // private System.Void <Awake>b__24_0(OVRCameraRig r)
    // Offset: 0x13A15BC
    void $Awake$b__24_0(GlobalNamespace::OVRCameraRig* r);
    // public System.Void .ctor()
    // Offset: 0x13A1520
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRGrabber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRGrabber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRGrabber*, creationType>()));
    }
  }; // OVRGrabber
  #pragma pack(pop)
  static check_size<sizeof(OVRGrabber), 192 + sizeof(bool)> __GlobalNamespace_OVRGrabberSizeCheck;
  static_assert(sizeof(OVRGrabber) == 0xC1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGrabber*, "", "OVRGrabber");
