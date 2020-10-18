// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: QuaternionSerializable
#include "GlobalNamespace/QuaternionSerializable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PoseSerializable
  struct PoseSerializable : public System::ValueType, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::PoseSerializable> {
    public:
    // public Vector3Serializable position
    // Offset: 0x0
    GlobalNamespace::Vector3Serializable position;
    // public QuaternionSerializable rotation
    // Offset: 0xC
    GlobalNamespace::QuaternionSerializable rotation;
    // Creating value type constructor for type: PoseSerializable
    constexpr PoseSerializable(GlobalNamespace::Vector3Serializable position_ = {}, GlobalNamespace::QuaternionSerializable rotation_ = {}) noexcept : position{position_}, rotation{rotation_} {}
    // public System.Void .ctor(Vector3Serializable position, QuaternionSerializable rotation)
    // Offset: 0xDDC1F0
    // ABORTED: conflicts with another method.  PoseSerializable(GlobalNamespace::Vector3Serializable position, GlobalNamespace::QuaternionSerializable rotation);
    // static public PoseSerializable get_identity()
    // Offset: 0x21BD69C
    static GlobalNamespace::PoseSerializable get_identity();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xDDC204
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xDDC234
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(PoseSerializable other)
    // Offset: 0xDDC264
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(PoseSerializable other)
    bool Equals(GlobalNamespace::PoseSerializable other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xDDC29C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xDDC2A4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xDDC2E8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // PoseSerializable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PoseSerializable, "", "PoseSerializable");
#pragma pack(pop)
