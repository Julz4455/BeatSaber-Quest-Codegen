// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PersistentScriptableObject
  class PersistentScriptableObject : public UnityEngine::ScriptableObject {
    public:
    // protected System.Void OnEnable()
    // Offset: 0x1091CB0
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x10A28F0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PersistentScriptableObject* New_ctor();
  }; // PersistentScriptableObject
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PersistentScriptableObject*, "", "PersistentScriptableObject");
#pragma pack(pop)
