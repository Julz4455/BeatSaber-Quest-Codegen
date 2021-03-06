// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColorsGradient
  class BloomPrePassBackgroundColorsGradient;
  // Forward declaring type: ColorSO
  class ColorSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradientWithIds
  // [] Offset: FFFFFFFF
  class BloomPrePassBackgroundColorsGradientWithIds : public UnityEngine::MonoBehaviour {
    public:
    // private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomPrePassBackgroundColorsGradient* bloomPrePassBackgroundColorsGradient;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassBackgroundColorsGradient*) == 0x8);
    // [SpaceAttribute] Offset: 0xDA4E74
    // private ColorSO _skyColor
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSO* skyColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private System.Single _skyColorIntensity
    // Size: 0x4
    // Offset: 0x28
    float skyColorIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: skyColorIntensity and: groundColor
    char __padding2[0x4] = {};
    // private ColorSO _groundColor
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSO* groundColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private System.Single _groundColorIntensity
    // Size: 0x4
    // Offset: 0x38
    float groundColorIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BloomPrePassBackgroundColorsGradientWithIds
    BloomPrePassBackgroundColorsGradientWithIds(GlobalNamespace::BloomPrePassBackgroundColorsGradient* bloomPrePassBackgroundColorsGradient_ = {}, GlobalNamespace::ColorSO* skyColor_ = {}, float skyColorIntensity_ = {}, GlobalNamespace::ColorSO* groundColor_ = {}, float groundColorIntensity_ = {}) noexcept : bloomPrePassBackgroundColorsGradient{bloomPrePassBackgroundColorsGradient_}, skyColor{skyColor_}, skyColorIntensity{skyColorIntensity_}, groundColor{groundColor_}, groundColorIntensity{groundColorIntensity_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x18756CC
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1875900
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradientWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundColorsGradientWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradientWithIds*, creationType>()));
    }
  }; // BloomPrePassBackgroundColorsGradientWithIds
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradientWithIds), 56 + sizeof(float)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientWithIdsSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradientWithIds) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradientWithIds*, "", "BloomPrePassBackgroundColorsGradientWithIds");
