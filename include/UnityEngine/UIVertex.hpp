// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.UIVertex
  struct UIVertex : public System::ValueType {
    public:
    // public UnityEngine.Vector3 position
    // Offset: 0x0
    UnityEngine::Vector3 position;
    // public UnityEngine.Vector3 normal
    // Offset: 0xC
    UnityEngine::Vector3 normal;
    // public UnityEngine.Vector4 tangent
    // Offset: 0x18
    UnityEngine::Vector4 tangent;
    // public UnityEngine.Color32 color
    // Offset: 0x28
    UnityEngine::Color32 color;
    // public UnityEngine.Vector2 uv0
    // Offset: 0x2C
    UnityEngine::Vector2 uv0;
    // public UnityEngine.Vector2 uv1
    // Offset: 0x34
    UnityEngine::Vector2 uv1;
    // public UnityEngine.Vector2 uv2
    // Offset: 0x3C
    UnityEngine::Vector2 uv2;
    // public UnityEngine.Vector2 uv3
    // Offset: 0x44
    UnityEngine::Vector2 uv3;
    // Creating value type constructor for type: UIVertex
    constexpr UIVertex(UnityEngine::Vector3 position_ = {}, UnityEngine::Vector3 normal_ = {}, UnityEngine::Vector4 tangent_ = {}, UnityEngine::Color32 color_ = {}, UnityEngine::Vector2 uv0_ = {}, UnityEngine::Vector2 uv1_ = {}, UnityEngine::Vector2 uv2_ = {}, UnityEngine::Vector2 uv3_ = {}) noexcept : position{position_}, normal{normal_}, tangent{tangent_}, color{color_}, uv0{uv0_}, uv1{uv1_}, uv2{uv2_}, uv3{uv3_} {}
    // Get static field: static private readonly UnityEngine.Color32 s_DefaultColor
    static UnityEngine::Color32 _get_s_DefaultColor();
    // Set static field: static private readonly UnityEngine.Color32 s_DefaultColor
    static void _set_s_DefaultColor(UnityEngine::Color32 value);
    // Get static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static UnityEngine::Vector4 _get_s_DefaultTangent();
    // Set static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static void _set_s_DefaultTangent(UnityEngine::Vector4 value);
    // Get static field: static public UnityEngine.UIVertex simpleVert
    static UnityEngine::UIVertex _get_simpleVert();
    // Set static field: static public UnityEngine.UIVertex simpleVert
    static void _set_simpleVert(UnityEngine::UIVertex value);
    // static private System.Void .cctor()
    // Offset: 0x22181B0
    static void _cctor();
  }; // UnityEngine.UIVertex
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIVertex, "UnityEngine", "UIVertex");
#pragma pack(pop)
