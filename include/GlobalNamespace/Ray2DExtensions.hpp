// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray2D
  struct Ray2D;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Ray2DExtensions
  class Ray2DExtensions : public ::Il2CppObject {
    public:
    // static public System.Int32 CircleIntersections(UnityEngine.Ray2D ray, UnityEngine.Vector2 circleCenter, System.Single radius, System.Single[] distances)
    // Offset: 0x10A323C
    static int CircleIntersections(UnityEngine::Ray2D ray, UnityEngine::Vector2 circleCenter, float radius, ::Array<float>* distances);
  }; // Ray2DExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Ray2DExtensions*, "", "Ray2DExtensions");
#pragma pack(pop)
