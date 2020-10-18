// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerTransforms
  class PlayerTransforms : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _headTransform
    // Offset: 0x18
    UnityEngine::Transform* headTransform;
    // private System.Boolean _overrideHeadPos
    // Offset: 0x20
    bool overrideHeadPos;
    // private UnityEngine.Vector3 _overriddenHeadPos
    // Offset: 0x24
    UnityEngine::Vector3 overriddenHeadPos;
    // private UnityEngine.Vector3 _headPos
    // Offset: 0x30
    UnityEngine::Vector3 headPos;
    // private UnityEngine.Quaternion _headRot
    // Offset: 0x3C
    UnityEngine::Quaternion headRot;
    // private UnityEngine.Quaternion _worldToLocalRot
    // Offset: 0x4C
    UnityEngine::Quaternion worldToLocalRot;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Vector3 get_headPos()
    // Offset: 0xF6F3E8
    UnityEngine::Vector3 get_headPos();
    // public UnityEngine.Quaternion get_headRot()
    // Offset: 0xF6F3F4
    UnityEngine::Quaternion get_headRot();
    // public UnityEngine.Quaternion get_worldToLocalRot()
    // Offset: 0xF6F400
    UnityEngine::Quaternion get_worldToLocalRot();
    // public System.Void OverrideHeadPos(UnityEngine.Vector3 pos)
    // Offset: 0xF6F40C
    void OverrideHeadPos(UnityEngine::Vector3 pos);
    // protected System.Void Start()
    // Offset: 0xF6F420
    void Start();
    // protected System.Void Update()
    // Offset: 0xF6F4DC
    void Update();
    // public System.Single MoveTowardsHead(System.Single start, System.Single end, UnityEngine.Quaternion noteInverseWorldRotation, System.Single t)
    // Offset: 0xF6F534
    float MoveTowardsHead(float start, float end, UnityEngine::Quaternion noteInverseWorldRotation, float t);
    // public System.Single HeadOffsetZ(UnityEngine.Quaternion noteInverseWorldRotation)
    // Offset: 0xF6F610
    float HeadOffsetZ(UnityEngine::Quaternion noteInverseWorldRotation);
    // public System.Void .ctor()
    // Offset: 0xF6F6D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerTransforms* New_ctor();
  }; // PlayerTransforms
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerTransforms*, "", "PlayerTransforms");
#pragma pack(pop)
