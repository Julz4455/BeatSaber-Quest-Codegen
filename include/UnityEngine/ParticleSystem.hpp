// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Color32
  struct Color32;
  // Forward declaring type: ParticleSystemStopBehavior
  struct ParticleSystemStopBehavior;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ParticleSystem
  class ParticleSystem : public UnityEngine::Component {
    public:
    // Nested type: UnityEngine::ParticleSystem::MainModule
    struct MainModule;
    // Nested type: UnityEngine::ParticleSystem::EmissionModule
    struct EmissionModule;
    // Nested type: UnityEngine::ParticleSystem::ShapeModule
    struct ShapeModule;
    // Nested type: UnityEngine::ParticleSystem::Particle
    struct Particle;
    // Nested type: UnityEngine::ParticleSystem::MinMaxCurve
    struct MinMaxCurve;
    // Nested type: UnityEngine::ParticleSystem::MinMaxGradient
    struct MinMaxGradient;
    // Nested type: UnityEngine::ParticleSystem::EmitParams
    struct EmitParams;
    // Nested type: UnityEngine::ParticleSystem::ForceOverLifetimeModule
    struct ForceOverLifetimeModule;
    // public System.Void Emit(UnityEngine.Vector3 position, UnityEngine.Vector3 velocity, System.Single size, System.Single lifetime, UnityEngine.Color32 color)
    // Offset: 0x221E0B8
    void Emit(UnityEngine::Vector3 position, UnityEngine::Vector3 velocity, float size, float lifetime, UnityEngine::Color32 color);
    // public System.Void Emit(UnityEngine.ParticleSystem/Particle particle)
    // Offset: 0x221E444
    void Emit(UnityEngine::ParticleSystem::Particle particle);
    // public System.Int32 get_particleCount()
    // Offset: 0x221E494
    int get_particleCount();
    // public System.Single get_time()
    // Offset: 0x221E4D4
    float get_time();
    // public System.UInt32 get_randomSeed()
    // Offset: 0x221E514
    uint get_randomSeed();
    // public System.Void set_randomSeed(System.UInt32 value)
    // Offset: 0x221E554
    void set_randomSeed(uint value);
    // public System.Boolean get_useAutoRandomSeed()
    // Offset: 0x221E5A4
    bool get_useAutoRandomSeed();
    // public System.Void set_useAutoRandomSeed(System.Boolean value)
    // Offset: 0x221E5E4
    void set_useAutoRandomSeed(bool value);
    // public System.Void SetParticles(out UnityEngine.ParticleSystem/Particle[] particles, System.Int32 size, System.Int32 offset)
    // Offset: 0x221E634
    void SetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size, int offset);
    // public System.Void SetParticles(out UnityEngine.ParticleSystem/Particle[] particles, System.Int32 size)
    // Offset: 0x221E69C
    void SetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size);
    // public System.Int32 GetParticles(out UnityEngine.ParticleSystem/Particle[] particles, System.Int32 size, System.Int32 offset)
    // Offset: 0x221E6F8
    int GetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size, int offset);
    // public System.Int32 GetParticles(out UnityEngine.ParticleSystem/Particle[] particles, System.Int32 size)
    // Offset: 0x221E760
    int GetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size);
    // public System.Int32 GetParticles(out UnityEngine.ParticleSystem/Particle[] particles)
    // Offset: 0x221E7BC
    int GetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles);
    // public System.Void Simulate(System.Single t, System.Boolean withChildren, System.Boolean restart, System.Boolean fixedTimeStep)
    // Offset: 0x221E814
    void Simulate(float t, bool withChildren, bool restart, bool fixedTimeStep);
    // public System.Void Simulate(System.Single t, System.Boolean withChildren, System.Boolean restart)
    // Offset: 0x221E88C
    void Simulate(float t, bool withChildren, bool restart);
    // public System.Void Play(System.Boolean withChildren)
    // Offset: 0x221E8F8
    void Play(bool withChildren);
    // public System.Void Play()
    // Offset: 0x221E948
    void Play();
    // public System.Void Stop(System.Boolean withChildren, UnityEngine.ParticleSystemStopBehavior stopBehavior)
    // Offset: 0x221E98C
    void Stop(bool withChildren, UnityEngine::ParticleSystemStopBehavior stopBehavior);
    // public System.Void Clear(System.Boolean withChildren)
    // Offset: 0x221E9E4
    void Clear(bool withChildren);
    // public System.Void Clear()
    // Offset: 0x221EA34
    void Clear();
    // public System.Void Emit(System.Int32 count)
    // Offset: 0x221EA78
    void Emit(int count);
    // private System.Void Emit_Internal(System.Int32 count)
    // Offset: 0x221EAC8
    void Emit_Internal(int count);
    // public System.Void Emit(UnityEngine.ParticleSystem/EmitParams emitParams, System.Int32 count)
    // Offset: 0x221EB18
    void Emit(UnityEngine::ParticleSystem::EmitParams emitParams, int count);
    // private System.Void EmitOld_Internal(ref UnityEngine.ParticleSystem/Particle particle)
    // Offset: 0x221E3F4
    void EmitOld_Internal(UnityEngine::ParticleSystem::Particle& particle);
    // public UnityEngine.ParticleSystem/MainModule get_main()
    // Offset: 0x221EBC8
    UnityEngine::ParticleSystem::MainModule get_main();
    // public UnityEngine.ParticleSystem/EmissionModule get_emission()
    // Offset: 0x221EBFC
    UnityEngine::ParticleSystem::EmissionModule get_emission();
    // public UnityEngine.ParticleSystem/ShapeModule get_shape()
    // Offset: 0x221EC30
    UnityEngine::ParticleSystem::ShapeModule get_shape();
    // public UnityEngine.ParticleSystem/ForceOverLifetimeModule get_forceOverLifetime()
    // Offset: 0x221EC64
    UnityEngine::ParticleSystem::ForceOverLifetimeModule get_forceOverLifetime();
    // private System.Void Emit_Injected(ref UnityEngine.ParticleSystem/EmitParams emitParams, System.Int32 count)
    // Offset: 0x221EB70
    void Emit_Injected(UnityEngine::ParticleSystem::EmitParams& emitParams, int count);
  }; // UnityEngine.ParticleSystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
#pragma pack(pop)
