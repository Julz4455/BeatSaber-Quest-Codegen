// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutDirection
  struct NoteCutDirection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: NoteCutDirectionExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class NoteCutDirectionExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NoteCutDirectionExtensions
    NoteCutDirectionExtensions() noexcept {}
    // static public UnityEngine.Vector2 Direction(NoteCutDirection cutDirection)
    // Offset: 0x19F5FB0
    static UnityEngine::Vector2 Direction(GlobalNamespace::NoteCutDirection cutDirection);
    // static public System.Single RotationAngle(NoteCutDirection cutDirection)
    // Offset: 0x19F6094
    static float RotationAngle(GlobalNamespace::NoteCutDirection cutDirection);
    // static public UnityEngine.Quaternion Rotation(NoteCutDirection cutDirection, System.Single offset)
    // Offset: 0x19F60B4
    static UnityEngine::Quaternion Rotation(GlobalNamespace::NoteCutDirection cutDirection, float offset);
    // static public System.Boolean IsMainDirection(NoteCutDirection cutDirection)
    // Offset: 0x19F6148
    static bool IsMainDirection(GlobalNamespace::NoteCutDirection cutDirection);
    // static public NoteCutDirection MainNoteCutDirectionFromCutDirAngle(System.Single angle)
    // Offset: 0x19F6154
    static GlobalNamespace::NoteCutDirection MainNoteCutDirectionFromCutDirAngle(float angle);
  }; // NoteCutDirectionExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutDirectionExtensions*, "", "NoteCutDirectionExtensions");
#pragma pack(pop)
