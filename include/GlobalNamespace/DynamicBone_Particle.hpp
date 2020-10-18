// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DynamicBone
#include "GlobalNamespace/DynamicBone.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
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
  // Autogenerated type: DynamicBone/Particle
  class DynamicBone::Particle : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform m_Transform
    // Offset: 0x10
    UnityEngine::Transform* m_Transform;
    // public System.Int32 m_ParentIndex
    // Offset: 0x18
    int m_ParentIndex;
    // public System.Single m_Damping
    // Offset: 0x1C
    float m_Damping;
    // public System.Single m_Elasticity
    // Offset: 0x20
    float m_Elasticity;
    // public System.Single m_Stiffness
    // Offset: 0x24
    float m_Stiffness;
    // public System.Single m_Inert
    // Offset: 0x28
    float m_Inert;
    // public System.Single m_Radius
    // Offset: 0x2C
    float m_Radius;
    // public System.Single m_BoneLength
    // Offset: 0x30
    float m_BoneLength;
    // public UnityEngine.Vector3 m_Position
    // Offset: 0x34
    UnityEngine::Vector3 m_Position;
    // public UnityEngine.Vector3 m_PrevPosition
    // Offset: 0x40
    UnityEngine::Vector3 m_PrevPosition;
    // public UnityEngine.Vector3 m_EndOffset
    // Offset: 0x4C
    UnityEngine::Vector3 m_EndOffset;
    // public UnityEngine.Vector3 m_InitLocalPosition
    // Offset: 0x58
    UnityEngine::Vector3 m_InitLocalPosition;
    // public UnityEngine.Quaternion m_InitLocalRotation
    // Offset: 0x64
    UnityEngine::Quaternion m_InitLocalRotation;
    // public System.Void .ctor()
    // Offset: 0x2203A8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DynamicBone::Particle* New_ctor();
  }; // DynamicBone/Particle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBone::Particle*, "", "DynamicBone/Particle");
#pragma pack(pop)
