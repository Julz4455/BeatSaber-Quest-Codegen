// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  // Autogenerated type: UnityLightWithId
  // [] Offset: FFFFFFFF
  class UnityLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private UnityEngine.Light _light
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Light* light;
    // Field size check
    static_assert(sizeof(UnityEngine::Light*) == 0x8);
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x38
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x3C
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: UnityLightWithId
    UnityLightWithId(UnityEngine::Light* light_ = {}, float intensity_ = {}, float minAlpha_ = {}) noexcept : light{light_}, intensity{intensity_}, minAlpha{minAlpha_} {}
    // public UnityEngine.Color get_color()
    // Offset: 0x1882D90
    UnityEngine::Color get_color();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1882DAC
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1882E7C
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("UnityLightWithId").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityLightWithId*, creationType>()));
    }
  }; // UnityLightWithId
  static check_size<sizeof(UnityLightWithId), 60 + sizeof(float)> __GlobalNamespace_UnityLightWithIdSizeCheck;
  static_assert(sizeof(UnityLightWithId) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityLightWithId*, "", "UnityLightWithId");
#pragma pack(pop)
