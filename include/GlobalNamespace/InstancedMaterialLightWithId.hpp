// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockColorSetter
  class MaterialPropertyBlockColorSetter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  // Autogenerated type: InstancedMaterialLightWithId
  // [] Offset: FFFFFFFF
  class InstancedMaterialLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private MaterialPropertyBlockColorSetter _materialPropertyBlockColorSetter
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MaterialPropertyBlockColorSetter* materialPropertyBlockColorSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockColorSetter*) == 0x8);
    // private System.Boolean _setColorOnly
    // Size: 0x1
    // Offset: 0x38
    bool setColorOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: setColorOnly and: intensity
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0xDA4F7C
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x3C
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0xDA5020
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x40
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x44
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: InstancedMaterialLightWithId
    InstancedMaterialLightWithId(GlobalNamespace::MaterialPropertyBlockColorSetter* materialPropertyBlockColorSetter_ = {}, bool setColorOnly_ = {}, float intensity_ = {}, float minAlpha_ = {}, UnityEngine::Color color_ = {}) noexcept : materialPropertyBlockColorSetter{materialPropertyBlockColorSetter_}, setColorOnly{setColorOnly_}, intensity{intensity_}, minAlpha{minAlpha_}, color{color_} {}
    // protected override System.Void OnEnable()
    // Offset: 0x1879590
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::OnEnable()
    void OnEnable();
    // public override System.Void ColorWasSet(UnityEngine.Color newColor)
    // Offset: 0x18795F8
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color newColor)
    void ColorWasSet(UnityEngine::Color newColor);
    // public System.Void .ctor()
    // Offset: 0x18796E0
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstancedMaterialLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("InstancedMaterialLightWithId").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstancedMaterialLightWithId*, creationType>()));
    }
  }; // InstancedMaterialLightWithId
  static check_size<sizeof(InstancedMaterialLightWithId), 68 + sizeof(UnityEngine::Color)> __GlobalNamespace_InstancedMaterialLightWithIdSizeCheck;
  static_assert(sizeof(InstancedMaterialLightWithId) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstancedMaterialLightWithId*, "", "InstancedMaterialLightWithId");
#pragma pack(pop)
