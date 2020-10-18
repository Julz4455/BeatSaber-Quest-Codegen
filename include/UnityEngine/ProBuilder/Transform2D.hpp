// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Transform2D
  class Transform2D : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector2 position
    // Offset: 0x10
    UnityEngine::Vector2 position;
    // public System.Single rotation
    // Offset: 0x18
    float rotation;
    // public UnityEngine.Vector2 scale
    // Offset: 0x1C
    UnityEngine::Vector2 scale;
    // public System.Void .ctor(UnityEngine.Vector2 position, System.Single rotation, UnityEngine.Vector2 scale)
    // Offset: 0x2125C0C
    static Transform2D* New_ctor(UnityEngine::Vector2 position, float rotation, UnityEngine::Vector2 scale);
    // public UnityEngine.Vector2 TransformPoint(UnityEngine.Vector2 p)
    // Offset: 0x2125C68
    UnityEngine::Vector2 TransformPoint(UnityEngine::Vector2 p);
    // public override System.String ToString()
    // Offset: 0x2125D3C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Transform2D
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Transform2D*, "UnityEngine.ProBuilder", "Transform2D");
#pragma pack(pop)
