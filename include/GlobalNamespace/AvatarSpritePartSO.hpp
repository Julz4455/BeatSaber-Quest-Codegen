// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AvatarPartSO`1
#include "GlobalNamespace/AvatarPartSO_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AvatarSpritePartSO
  class AvatarSpritePartSO : public GlobalNamespace::AvatarPartSO_1<UnityEngine::Sprite*> {
    public:
    // public UnityEngine.Sprite get_sprite()
    // Offset: 0xFB6964
    UnityEngine::Sprite* get_sprite();
    // public System.Void .ctor()
    // Offset: 0xFB69A8
    // Implemented from: AvatarPartSO`1
    // Base method: System.Void AvatarPartSO_1::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AvatarSpritePartSO* New_ctor();
  }; // AvatarSpritePartSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarSpritePartSO*, "", "AvatarSpritePartSO");
#pragma pack(pop)
