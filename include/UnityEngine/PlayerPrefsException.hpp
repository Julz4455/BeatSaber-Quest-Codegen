// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PlayerPrefsException
  class PlayerPrefsException : public System::Exception {
    public:
    // public System.Void .ctor(System.String error)
    // Offset: 0x1BA0EB4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String error)
    static PlayerPrefsException* New_ctor(::Il2CppString* error);
  }; // UnityEngine.PlayerPrefsException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerPrefsException*, "UnityEngine", "PlayerPrefsException");
#pragma pack(pop)
