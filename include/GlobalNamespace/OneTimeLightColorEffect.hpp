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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OneTimeLightColorEffect
  class OneTimeLightColorEffect : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSO _color
    // Offset: 0x18
    GlobalNamespace::ColorSO* color;
    // private System.Single _alpha
    // Offset: 0x20
    float alpha;
    // private System.Int32 _lightsId
    // Offset: 0x24
    int lightsId;
    // private LightWithIdManager _lightWithIdManager
    // Offset: 0x28
    GlobalNamespace::LightWithIdManager* lightWithIdManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Update()
    // Offset: 0x100C560
    void Update();
    // public System.Void .ctor()
    // Offset: 0x100C5D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OneTimeLightColorEffect* New_ctor();
  }; // OneTimeLightColorEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OneTimeLightColorEffect*, "", "OneTimeLightColorEffect");
#pragma pack(pop)
