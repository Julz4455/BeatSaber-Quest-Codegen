// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberTypeObject
  class SaberTypeObject : public UnityEngine::MonoBehaviour {
    public:
    // private SaberType _saberType
    // Offset: 0x18
    GlobalNamespace::SaberType saberType;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public SaberType get_saberType()
    // Offset: 0xF83AFC
    GlobalNamespace::SaberType get_saberType();
    // public System.Void .ctor()
    // Offset: 0xF83B04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaberTypeObject* New_ctor();
  }; // SaberTypeObject
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberTypeObject*, "", "SaberTypeObject");
#pragma pack(pop)
