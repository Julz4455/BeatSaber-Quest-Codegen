// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/Controller
#include "GlobalNamespace/OVRInput.hpp"
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
  // Autogenerated type: OVRGrabber
  class OVRGrabber : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single grabBegin
    // Offset: 0x18
    float grabBegin;
    // public System.Single grabEnd
    // Offset: 0x1C
    float grabEnd;
    // private System.Boolean alreadyUpdated
    // Offset: 0x20
    bool alreadyUpdated;
    // protected System.Boolean m_parentHeldObject
    // Offset: 0x21
    bool m_parentHeldObject;
    // protected System.Boolean m_moveHandPosition
    // Offset: 0x22
    bool m_moveHandPosition;
    // protected UnityEngine.Transform m_gripTransform
    // Offset: 0x28
    UnityEngine::Transform* m_gripTransform;
    // protected UnityEngine.Collider[] m_grabVolumes
    // Offset: 0x30
    ::Array<UnityEngine::Collider*>* m_grabVolumes;
    // protected OVRInput/Controller m_controller
    // Offset: 0x38
    GlobalNamespace::OVRInput::Controller m_controller;
    // protected UnityEngine.Transform m_parentTransform
    // Offset: 0x40
    UnityEngine::Transform* m_parentTransform;
    // protected UnityEngine.GameObject m_player
    // Offset: 0x48
    UnityEngine::GameObject* m_player;
    // protected System.Boolean m_grabVolumeEnabled
    // Offset: 0x50
    bool m_grabVolumeEnabled;
    // protected UnityEngine.Vector3 m_lastPos
    // Offset: 0x54
    UnityEngine::Vector3 m_lastPos;
    // protected UnityEngine.Quaternion m_lastRot
    // Offset: 0x60
    UnityEngine::Quaternion m_lastRot;
    // protected UnityEngine.Quaternion m_anchorOffsetRotation
    // Offset: 0x70
    UnityEngine::Quaternion m_anchorOffsetRotation;
    // protected UnityEngine.Vector3 m_anchorOffsetPosition
    // Offset: 0x80
    UnityEngine::Vector3 m_anchorOffsetPosition;
    // protected System.Single m_prevFlex
    // Offset: 0x8C
    float m_prevFlex;
    // protected OVRGrabbable m_grabbedObj
    // Offset: 0x90
    GlobalNamespace::OVRGrabbable* m_grabbedObj;
    // protected UnityEngine.Vector3 m_grabbedObjectPosOff
    // Offset: 0x98
    UnityEngine::Vector3 m_grabbedObjectPosOff;
    // protected UnityEngine.Quaternion m_grabbedObjectRotOff
    // Offset: 0xA4
    UnityEngine::Quaternion m_grabbedObjectRotOff;
    // protected System.Collections.Generic.Dictionary`2<OVRGrabbable,System.Int32> m_grabCandidates
    // Offset: 0xB8
    System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGrabbable*, int>* m_grabCandidates;
    // protected System.Boolean m_operatingWithoutOVRCameraRig
    // Offset: 0xC0
    bool m_operatingWithoutOVRCameraRig;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public OVRGrabbable get_grabbedObject()
    // Offset: 0x1307150
    GlobalNamespace::OVRGrabbable* get_grabbedObject();
    // public System.Void ForceRelease(OVRGrabbable grabbable)
    // Offset: 0x1307078
    void ForceRelease(GlobalNamespace::OVRGrabbable* grabbable);
    // protected System.Void Awake()
    // Offset: 0x13073DC
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1307518
    void Start();
    // public System.Void Update()
    // Offset: 0x13078AC
    void Update();
    // public System.Void FixedUpdate()
    // Offset: 0x13078B4
    void FixedUpdate();
    // private System.Void OnUpdatedAnchors()
    // Offset: 0x13078C4
    void OnUpdatedAnchors();
    // private System.Void OnDestroy()
    // Offset: 0x1307BC4
    void OnDestroy();
    // private System.Void OnTriggerEnter(UnityEngine.Collider otherCollider)
    // Offset: 0x1307C4C
    void OnTriggerEnter(UnityEngine::Collider* otherCollider);
    // private System.Void OnTriggerExit(UnityEngine.Collider otherCollider)
    // Offset: 0x1307D54
    void OnTriggerExit(UnityEngine::Collider* otherCollider);
    // protected System.Void CheckForGrabOrRelease(System.Single prevFlex)
    // Offset: 0x1307B84
    void CheckForGrabOrRelease(float prevFlex);
    // protected System.Void GrabBegin()
    // Offset: 0x1307E84
    void GrabBegin();
    // protected System.Void MoveGrabbedObject(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot, System.Boolean forceTeleport)
    // Offset: 0x13085E0
    void MoveGrabbedObject(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot, bool forceTeleport);
    // protected System.Void GrabEnd()
    // Offset: 0x1307158
    void GrabEnd();
    // protected System.Void GrabbableRelease(UnityEngine.Vector3 linearVelocity, UnityEngine.Vector3 angularVelocity)
    // Offset: 0x13093CC
    void GrabbableRelease(UnityEngine::Vector3 linearVelocity, UnityEngine::Vector3 angularVelocity);
    // protected System.Void GrabVolumeEnable(System.Boolean enabled)
    // Offset: 0x1309458
    void GrabVolumeEnable(bool enabled);
    // protected System.Void OffhandGrabbed(OVRGrabbable grabbable)
    // Offset: 0x1309540
    void OffhandGrabbed(GlobalNamespace::OVRGrabbable* grabbable);
    // protected System.Void SetPlayerIgnoreCollision(UnityEngine.GameObject grabbable, System.Boolean ignore)
    // Offset: 0x1307748
    void SetPlayerIgnoreCollision(UnityEngine::GameObject* grabbable, bool ignore);
    // private System.Void <Awake>b__24_0(OVRCameraRig r)
    // Offset: 0x13096E0
    void $Awake$b__24_0(GlobalNamespace::OVRCameraRig* r);
    // public System.Void .ctor()
    // Offset: 0x1309644
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRGrabber* New_ctor();
  }; // OVRGrabber
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGrabber*, "", "OVRGrabber");
#pragma pack(pop)
