// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NamedPreset
  class NamedPreset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NamedPresetsSO
  class NamedPresetsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // public NamedPreset[] get_namedPresets()
    // Offset: 0xFFFFFFFF
    ::Array<GlobalNamespace::NamedPreset*>* get_namedPresets();
    // protected System.Void .ctor()
    // Offset: 0xF08A4C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NamedPresetsSO* New_ctor();
  }; // NamedPresetsSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedPresetsSO*, "", "NamedPresetsSO");
#pragma pack(pop)
