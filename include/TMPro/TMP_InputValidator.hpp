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
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_InputValidator
  class TMP_InputValidator : public UnityEngine::ScriptableObject {
    public:
    // public System.Char Validate(ref System.String text, ref System.Int32 pos, System.Char ch)
    // Offset: 0xFFFFFFFF
    ::Il2CppChar Validate(::Il2CppString*& text, int& pos, ::Il2CppChar ch);
    // protected System.Void .ctor()
    // Offset: 0xBACD70
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_InputValidator* New_ctor();
  }; // TMPro.TMP_InputValidator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputValidator*, "TMPro", "TMP_InputValidator");
#pragma pack(pop)
