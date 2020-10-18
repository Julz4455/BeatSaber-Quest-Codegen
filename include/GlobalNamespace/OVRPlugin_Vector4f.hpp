// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Vector4f
  struct OVRPlugin::Vector4f : public System::ValueType {
    public:
    // public System.Single x
    // Offset: 0x0
    float x;
    // public System.Single y
    // Offset: 0x4
    float y;
    // public System.Single z
    // Offset: 0x8
    float z;
    // public System.Single w
    // Offset: 0xC
    float w;
    // Creating value type constructor for type: Vector4f
    constexpr Vector4f(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Get static field: static public readonly OVRPlugin/Vector4f zero
    static GlobalNamespace::OVRPlugin::Vector4f _get_zero();
    // Set static field: static public readonly OVRPlugin/Vector4f zero
    static void _set_zero(GlobalNamespace::OVRPlugin::Vector4f value);
    // static private System.Void .cctor()
    // Offset: 0x1496660
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xDB502C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OVRPlugin/Vector4f
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Vector4f, "", "OVRPlugin/Vector4f");
#pragma pack(pop)
