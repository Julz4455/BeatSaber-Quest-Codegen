// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.RotationLimitPolygonal
#include "RootMotion/FinalIK/RotationLimitPolygonal.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.RotationLimitPolygonal/ReachCone
  class RotationLimitPolygonal::ReachCone : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3[] tetrahedron
    // Offset: 0x10
    ::Array<UnityEngine::Vector3>* tetrahedron;
    // public System.Single volume
    // Offset: 0x18
    float volume;
    // public UnityEngine.Vector3 S
    // Offset: 0x1C
    UnityEngine::Vector3 S;
    // public UnityEngine.Vector3 B
    // Offset: 0x28
    UnityEngine::Vector3 B;
    // public UnityEngine.Vector3 get_o()
    // Offset: 0x18EEF84
    UnityEngine::Vector3 get_o();
    // public UnityEngine.Vector3 get_a()
    // Offset: 0x18EEFBC
    UnityEngine::Vector3 get_a();
    // public UnityEngine.Vector3 get_b()
    // Offset: 0x18EEFF8
    UnityEngine::Vector3 get_b();
    // public UnityEngine.Vector3 get_c()
    // Offset: 0x18EF034
    UnityEngine::Vector3 get_c();
    // public System.Void .ctor(UnityEngine.Vector3 _o, UnityEngine.Vector3 _a, UnityEngine.Vector3 _b, UnityEngine.Vector3 _c)
    // Offset: 0x18EE714
    static RotationLimitPolygonal::ReachCone* New_ctor(UnityEngine::Vector3 _o, UnityEngine::Vector3 _a, UnityEngine::Vector3 _b, UnityEngine::Vector3 _c);
    // public System.Boolean get_isValid()
    // Offset: 0x18EE0C8
    bool get_isValid();
    // public System.Void Calculate()
    // Offset: 0x18EE888
    void Calculate();
  }; // RootMotion.FinalIK.RotationLimitPolygonal/ReachCone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*, "RootMotion.FinalIK", "RotationLimitPolygonal/ReachCone");
#pragma pack(pop)
