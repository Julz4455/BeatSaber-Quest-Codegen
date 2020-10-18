// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SortingLayer
  struct SortingLayer : public System::ValueType {
    public:
    // private System.Int32 m_Id
    // Offset: 0x0
    int m_Id;
    // Creating value type constructor for type: SortingLayer
    constexpr SortingLayer(int m_Id_ = {}) noexcept : m_Id{m_Id_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Id;
    }
    // static public System.Int32 GetLayerValueFromID(System.Int32 id)
    // Offset: 0x198FF88
    static int GetLayerValueFromID(int id);
  }; // UnityEngine.SortingLayer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SortingLayer, "UnityEngine", "SortingLayer");
#pragma pack(pop)
