// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.LineRenderer
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CBDAB4
  // [NativeHeaderAttribute] Offset: CBDAB4
  class LineRenderer : public UnityEngine::Renderer {
    public:
    // Creating value type constructor for type: LineRenderer
    LineRenderer() noexcept {}
    // public System.Void set_startWidth(System.Single value)
    // Offset: 0x1A256D4
    void set_startWidth(float value);
    // public System.Void set_endWidth(System.Single value)
    // Offset: 0x1A25724
    void set_endWidth(float value);
    // public System.Void set_useWorldSpace(System.Boolean value)
    // Offset: 0x1A25774
    void set_useWorldSpace(bool value);
    // public System.Void set_startColor(UnityEngine.Color value)
    // Offset: 0x1A257C4
    void set_startColor(UnityEngine::Color value);
    // public System.Void set_endColor(UnityEngine.Color value)
    // Offset: 0x1A2586C
    void set_endColor(UnityEngine::Color value);
    // public System.Void set_positionCount(System.Int32 value)
    // Offset: 0x1A25914
    void set_positionCount(int value);
    // public System.Void SetPosition(System.Int32 index, UnityEngine.Vector3 position)
    // Offset: 0x1A25964
    void SetPosition(int index, UnityEngine::Vector3 position);
    // public System.Void SetPositions(UnityEngine.Vector3[] positions)
    // Offset: 0x1A25A24
    void SetPositions(::Array<UnityEngine::Vector3>* positions);
    // private System.Void set_startColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1A2581C
    void set_startColor_Injected(UnityEngine::Color& value);
    // private System.Void set_endColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1A258C4
    void set_endColor_Injected(UnityEngine::Color& value);
    // private System.Void SetPosition_Injected(System.Int32 index, ref UnityEngine.Vector3 position)
    // Offset: 0x1A259CC
    void SetPosition_Injected(int index, UnityEngine::Vector3& position);
  }; // UnityEngine.LineRenderer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
