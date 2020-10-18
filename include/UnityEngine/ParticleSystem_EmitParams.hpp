// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ParticleSystem/Particle
#include "UnityEngine/ParticleSystem_Particle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Color32 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ParticleSystem/EmitParams
  struct ParticleSystem::EmitParams : public System::ValueType {
    public:
    // private UnityEngine.ParticleSystem/Particle m_Particle
    // Offset: 0x0
    UnityEngine::ParticleSystem::Particle m_Particle;
    // private System.Boolean m_PositionSet
    // Offset: 0x84
    bool m_PositionSet;
    // private System.Boolean m_VelocitySet
    // Offset: 0x85
    bool m_VelocitySet;
    // private System.Boolean m_AxisOfRotationSet
    // Offset: 0x86
    bool m_AxisOfRotationSet;
    // private System.Boolean m_RotationSet
    // Offset: 0x87
    bool m_RotationSet;
    // private System.Boolean m_AngularVelocitySet
    // Offset: 0x88
    bool m_AngularVelocitySet;
    // private System.Boolean m_StartSizeSet
    // Offset: 0x89
    bool m_StartSizeSet;
    // private System.Boolean m_StartColorSet
    // Offset: 0x8A
    bool m_StartColorSet;
    // private System.Boolean m_RandomSeedSet
    // Offset: 0x8B
    bool m_RandomSeedSet;
    // private System.Boolean m_StartLifetimeSet
    // Offset: 0x8C
    bool m_StartLifetimeSet;
    // private System.Boolean m_MeshIndexSet
    // Offset: 0x8D
    bool m_MeshIndexSet;
    // private System.Boolean m_ApplyShapeToPosition
    // Offset: 0x8E
    bool m_ApplyShapeToPosition;
    // Creating value type constructor for type: EmitParams
    constexpr EmitParams(UnityEngine::ParticleSystem::Particle m_Particle_ = {}, bool m_PositionSet_ = {}, bool m_VelocitySet_ = {}, bool m_AxisOfRotationSet_ = {}, bool m_RotationSet_ = {}, bool m_AngularVelocitySet_ = {}, bool m_StartSizeSet_ = {}, bool m_StartColorSet_ = {}, bool m_RandomSeedSet_ = {}, bool m_StartLifetimeSet_ = {}, bool m_MeshIndexSet_ = {}, bool m_ApplyShapeToPosition_ = {}) noexcept : m_Particle{m_Particle_}, m_PositionSet{m_PositionSet_}, m_VelocitySet{m_VelocitySet_}, m_AxisOfRotationSet{m_AxisOfRotationSet_}, m_RotationSet{m_RotationSet_}, m_AngularVelocitySet{m_AngularVelocitySet_}, m_StartSizeSet{m_StartSizeSet_}, m_StartColorSet{m_StartColorSet_}, m_RandomSeedSet{m_RandomSeedSet_}, m_StartLifetimeSet{m_StartLifetimeSet_}, m_MeshIndexSet{m_MeshIndexSet_}, m_ApplyShapeToPosition{m_ApplyShapeToPosition_} {}
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0xDDE744
    void set_position(UnityEngine::Vector3 value);
    // public System.Void set_applyShapeToPosition(System.Boolean value)
    // Offset: 0xDDE758
    void set_applyShapeToPosition(bool value);
    // public System.Void set_rotation3D(UnityEngine.Vector3 value)
    // Offset: 0xDDE764
    void set_rotation3D(UnityEngine::Vector3 value);
    // public System.Void set_startColor(UnityEngine.Color32 value)
    // Offset: 0xDDE790
    void set_startColor(UnityEngine::Color32 value);
  }; // UnityEngine.ParticleSystem/EmitParams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
#pragma pack(pop)
