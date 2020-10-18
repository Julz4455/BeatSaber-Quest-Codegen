// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ParticleSystem/ShapeModule
  struct ParticleSystem::ShapeModule : public System::ValueType {
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Offset: 0x0
    UnityEngine::ParticleSystem* m_ParticleSystem;
    // Creating value type constructor for type: ShapeModule
    constexpr ShapeModule(UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating conversion operator: operator UnityEngine::ParticleSystem*
    constexpr operator UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0xDDEDD8
    // ABORTED: conflicts with another method.  ShapeModule(UnityEngine::ParticleSystem* particleSystem);
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0xDDEDE0
    void set_position(UnityEngine::Vector3 value);
    // public System.Void set_rotation(UnityEngine.Vector3 value)
    // Offset: 0xDDEDE8
    void set_rotation(UnityEngine::Vector3 value);
    // static private System.Void set_position_Injected(ref UnityEngine.ParticleSystem/ShapeModule _unity_self, ref UnityEngine.Vector3 value)
    // Offset: 0x221F8D8
    static void set_position_Injected(UnityEngine::ParticleSystem::ShapeModule& _unity_self, UnityEngine::Vector3& value);
    // static private System.Void set_rotation_Injected(ref UnityEngine.ParticleSystem/ShapeModule _unity_self, ref UnityEngine.Vector3 value)
    // Offset: 0x221F980
    static void set_rotation_Injected(UnityEngine::ParticleSystem::ShapeModule& _unity_self, UnityEngine::Vector3& value);
  }; // UnityEngine.ParticleSystem/ShapeModule
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::ShapeModule, "UnityEngine", "ParticleSystem/ShapeModule");
#pragma pack(pop)
