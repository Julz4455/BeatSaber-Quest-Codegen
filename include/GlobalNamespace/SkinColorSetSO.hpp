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
  // Forward declaring type: SkinColorSO
  class SkinColorSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SkinColorSetSO
  class SkinColorSetSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private SkinColorSO[] _colors
    // Offset: 0x18
    ::Array<GlobalNamespace::SkinColorSO*>* colors;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public SkinColorSO[] get_colors()
    // Offset: 0xEF0D6C
    ::Array<GlobalNamespace::SkinColorSO*>* get_colors();
    // public System.Void .ctor()
    // Offset: 0xEF0D74
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SkinColorSetSO* New_ctor();
  }; // SkinColorSetSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SkinColorSetSO*, "", "SkinColorSetSO");
#pragma pack(pop)
