// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRGrabber
  class OVRGrabber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: OVRGrabbable
  // [] Offset: FFFFFFFF
  class OVRGrabbable : public UnityEngine::MonoBehaviour {
    public:
    // protected System.Boolean m_allowOffhandGrab
    // Size: 0x1
    // Offset: 0x18
    bool m_allowOffhandGrab;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_snapPosition
    // Size: 0x1
    // Offset: 0x19
    bool m_snapPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_snapOrientation
    // Size: 0x1
    // Offset: 0x1A
    bool m_snapOrientation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_snapOrientation and: m_snapOffset
    char __padding2[0x5] = {};
    // protected UnityEngine.Transform m_snapOffset
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* m_snapOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.Collider[] m_grabPoints
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::Collider*>* m_grabPoints;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Collider*>*) == 0x8);
    // protected System.Boolean m_grabbedKinematic
    // Size: 0x1
    // Offset: 0x30
    bool m_grabbedKinematic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_grabbedKinematic and: m_grabbedCollider
    char __padding5[0x7] = {};
    // protected UnityEngine.Collider m_grabbedCollider
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Collider* m_grabbedCollider;
    // Field size check
    static_assert(sizeof(UnityEngine::Collider*) == 0x8);
    // protected OVRGrabber m_grabbedBy
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::OVRGrabber* m_grabbedBy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRGrabber*) == 0x8);
    // Creating value type constructor for type: OVRGrabbable
    OVRGrabbable(bool m_allowOffhandGrab_ = {}, bool m_snapPosition_ = {}, bool m_snapOrientation_ = {}, UnityEngine::Transform* m_snapOffset_ = {}, ::Array<UnityEngine::Collider*>* m_grabPoints_ = {}, bool m_grabbedKinematic_ = {}, UnityEngine::Collider* m_grabbedCollider_ = {}, GlobalNamespace::OVRGrabber* m_grabbedBy_ = {}) noexcept : m_allowOffhandGrab{m_allowOffhandGrab_}, m_snapPosition{m_snapPosition_}, m_snapOrientation{m_snapOrientation_}, m_snapOffset{m_snapOffset_}, m_grabPoints{m_grabPoints_}, m_grabbedKinematic{m_grabbedKinematic_}, m_grabbedCollider{m_grabbedCollider_}, m_grabbedBy{m_grabbedBy_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_allowOffhandGrab()
    // Offset: 0x11B2C0C
    bool get_allowOffhandGrab();
    // public System.Boolean get_isGrabbed()
    // Offset: 0x11B2C14
    bool get_isGrabbed();
    // public System.Boolean get_snapPosition()
    // Offset: 0x11B2C84
    bool get_snapPosition();
    // public System.Boolean get_snapOrientation()
    // Offset: 0x11B2C8C
    bool get_snapOrientation();
    // public UnityEngine.Transform get_snapOffset()
    // Offset: 0x11B2C94
    UnityEngine::Transform* get_snapOffset();
    // public OVRGrabber get_grabbedBy()
    // Offset: 0x11B2C9C
    GlobalNamespace::OVRGrabber* get_grabbedBy();
    // public UnityEngine.Transform get_grabbedTransform()
    // Offset: 0x11B2CA4
    UnityEngine::Transform* get_grabbedTransform();
    // public UnityEngine.Rigidbody get_grabbedRigidbody()
    // Offset: 0x11B2CC0
    UnityEngine::Rigidbody* get_grabbedRigidbody();
    // public UnityEngine.Collider[] get_grabPoints()
    // Offset: 0x11B2CDC
    ::Array<UnityEngine::Collider*>* get_grabPoints();
    // public System.Void GrabBegin(OVRGrabber hand, UnityEngine.Collider grabPoint)
    // Offset: 0x11B2CE4
    void GrabBegin(GlobalNamespace::OVRGrabber* hand, UnityEngine::Collider* grabPoint);
    // public System.Void GrabEnd(UnityEngine.Vector3 linearVelocity, UnityEngine.Vector3 angularVelocity)
    // Offset: 0x11B2D84
    void GrabEnd(UnityEngine::Vector3 linearVelocity, UnityEngine::Vector3 angularVelocity);
    // private System.Void Awake()
    // Offset: 0x11B2E78
    void Awake();
    // protected System.Void Start()
    // Offset: 0x11B2FE4
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x11B3050
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x11B31AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRGrabbable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRGrabbable").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRGrabbable*, creationType>()));
    }
  }; // OVRGrabbable
  static check_size<sizeof(OVRGrabbable), 64 + sizeof(GlobalNamespace::OVRGrabber*)> __GlobalNamespace_OVRGrabbableSizeCheck;
  static_assert(sizeof(OVRGrabbable) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGrabbable*, "", "OVRGrabbable");
#pragma pack(pop)
