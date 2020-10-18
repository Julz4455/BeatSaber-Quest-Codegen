// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithId
#include "GlobalNamespace/LightWithId.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SpawnRotationChevron
  class SpawnRotationChevron : public GlobalNamespace::LightWithId {
    public:
    // Nested type: GlobalNamespace::SpawnRotationChevron::Pool
    class Pool;
    // private TubeBloomPrePassLight[] _lights
    // Offset: 0x30
    ::Array<GlobalNamespace::TubeBloomPrePassLight*>* lights;
    // private UnityEngine.Color _color
    // Offset: 0x38
    UnityEngine::Color color;
    // private System.Single _lightAmount
    // Offset: 0x48
    float lightAmount;
    // public System.Void SetLightAmount(System.Single amount)
    // Offset: 0xEF4504
    void SetLightAmount(float amount);
    // private System.Void UpdateLights()
    // Offset: 0xEF4474
    void UpdateLights();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0xEF4468
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0xEF450C
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SpawnRotationChevron* New_ctor();
  }; // SpawnRotationChevron
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnRotationChevron*, "", "SpawnRotationChevron");
#pragma pack(pop)
