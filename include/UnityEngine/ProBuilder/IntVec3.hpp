// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.IntVec3
  struct IntVec3 : public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::IntVec3> {
    public:
    // public UnityEngine.Vector3 value
    // Offset: 0x0
    UnityEngine::Vector3 value;
    // Creating value type constructor for type: IntVec3
    IntVec3(UnityEngine::Vector3 value_ = {}) : value{value_} {}
    // public System.Single get_x()
    // Offset: 0x9A2660
    float get_x();
    // public System.Single get_y()
    // Offset: 0x9A2668
    float get_y();
    // public System.Single get_z()
    // Offset: 0x9A2670
    float get_z();
    // public System.Void .ctor(UnityEngine.Vector3 vector)
    // Offset: 0x9A2678
    static IntVec3* New_ctor(UnityEngine::Vector3 vector);
    // public System.Boolean Equals(UnityEngine.Vector3 p)
    // Offset: 0x9A2694
    bool Equals(UnityEngine::Vector3 p);
    // static private System.Int32 round(System.Single v)
    // Offset: 0xEF9D24
    static int round(float v);
    // public override System.String ToString()
    // Offset: 0x9A2684
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(UnityEngine.ProBuilder.IntVec3 p)
    // Offset: 0x9A268C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.ProBuilder.IntVec3 p)
    bool Equals(UnityEngine::ProBuilder::IntVec3 p);
    // public override System.Boolean Equals(System.Object b)
    // Offset: 0x9A269C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object b)
    bool Equals(::Il2CppObject* b);
    // public override System.Int32 GetHashCode()
    // Offset: 0x9A26A4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.IntVec3
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.IntVec3 a, UnityEngine.ProBuilder.IntVec3 b)
  // Offset: 0xEF9C18
  bool operator ==(const UnityEngine::ProBuilder::IntVec3& a, const UnityEngine::ProBuilder::IntVec3& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.IntVec3 a, UnityEngine.ProBuilder.IntVec3 b)
  // Offset: 0xEF9CE8
  bool operator !=(const UnityEngine::ProBuilder::IntVec3& a, const UnityEngine::ProBuilder::IntVec3& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::IntVec3, "UnityEngine.ProBuilder", "IntVec3");
#pragma pack(pop)
