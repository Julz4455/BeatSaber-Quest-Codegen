// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshImportSettings
  // [] Offset: FFFFFFFF
  class MeshImportSettings : public ::Il2CppObject {
    public:
    // private System.Boolean m_Quads
    // Size: 0x1
    // Offset: 0x10
    bool m_Quads;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_Smoothing
    // Size: 0x1
    // Offset: 0x11
    bool m_Smoothing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Smoothing and: m_SmoothingThreshold
    char __padding1[0x2] = {};
    // private System.Single m_SmoothingThreshold
    // Size: 0x4
    // Offset: 0x14
    float m_SmoothingThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MeshImportSettings
    MeshImportSettings(bool m_Quads_ = {}, bool m_Smoothing_ = {}, float m_SmoothingThreshold_ = {}) noexcept : m_Quads{m_Quads_}, m_Smoothing{m_Smoothing_}, m_SmoothingThreshold{m_SmoothingThreshold_} {}
    // public System.Boolean get_quads()
    // Offset: 0x162BAC4
    bool get_quads();
    // public System.Void set_quads(System.Boolean value)
    // Offset: 0x162BACC
    void set_quads(bool value);
    // public System.Boolean get_smoothing()
    // Offset: 0x162BAD8
    bool get_smoothing();
    // public System.Void set_smoothing(System.Boolean value)
    // Offset: 0x162BAE0
    void set_smoothing(bool value);
    // public System.Single get_smoothingAngle()
    // Offset: 0x162BAEC
    float get_smoothingAngle();
    // public System.Void set_smoothingAngle(System.Single value)
    // Offset: 0x162BAF4
    void set_smoothingAngle(float value);
    // public override System.String ToString()
    // Offset: 0x162BAFC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x162BBC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshImportSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::MeshImportSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshImportSettings*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.MeshImportSettings
  #pragma pack(pop)
  static check_size<sizeof(MeshImportSettings), 20 + sizeof(float)> __UnityEngine_ProBuilder_MeshOperations_MeshImportSettingsSizeCheck;
  static_assert(sizeof(MeshImportSettings) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*, "UnityEngine.ProBuilder.MeshOperations", "MeshImportSettings");
