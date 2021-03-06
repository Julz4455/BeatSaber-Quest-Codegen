// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: QuaternionSerializable
  // [] Offset: FFFFFFFF
  struct QuaternionSerializable/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::QuaternionSerializable>*/ {
    public:
    // private UnityEngine.Quaternion _q
    // Size: 0x10
    // Offset: 0x0
    UnityEngine::Quaternion q;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: QuaternionSerializable
    constexpr QuaternionSerializable(UnityEngine::Quaternion q_ = {}) noexcept : q{q_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::QuaternionSerializable>
    operator System::IEquatable_1<GlobalNamespace::QuaternionSerializable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::QuaternionSerializable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Quaternion
    constexpr operator UnityEngine::Quaternion() const noexcept {
      return q;
    }
    // static field const value: static private System.Single kSqrtTwo
    static constexpr const float kSqrtTwo = 1.4142135;
    // Get static field: static private System.Single kSqrtTwo
    static float _get_kSqrtTwo();
    // Set static field: static private System.Single kSqrtTwo
    static void _set_kSqrtTwo(float value);
    // static field const value: static private System.Single kOneOverSqrtTwo
    static constexpr const float kOneOverSqrtTwo = 0.70710677;
    // Get static field: static private System.Single kOneOverSqrtTwo
    static float _get_kOneOverSqrtTwo();
    // Set static field: static private System.Single kOneOverSqrtTwo
    static void _set_kOneOverSqrtTwo(float value);
    // static field const value: static private System.Single kScale
    static constexpr const float kScale = 23169.768;
    // Get static field: static private System.Single kScale
    static float _get_kScale();
    // Set static field: static private System.Single kScale
    static void _set_kScale(float value);
    // static field const value: static private System.Single kInvScale
    static constexpr const float kInvScale = 4.315969e-05;
    // Get static field: static private System.Single kInvScale
    static float _get_kInvScale();
    // Set static field: static private System.Single kInvScale
    static void _set_kInvScale(float value);
    // static public QuaternionSerializable get_identity()
    // Offset: 0x226E790
    static GlobalNamespace::QuaternionSerializable get_identity();
    // public System.Void .ctor(UnityEngine.Quaternion q)
    // Offset: 0xE2EC10
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  QuaternionSerializable(UnityEngine::Quaternion q)
    // public System.Void .ctor(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xE2EC18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    QuaternionSerializable(LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuaternionSerializable::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(reader)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, reader);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xE2EBE4
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xE2EBEC
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(QuaternionSerializable other)
    // Offset: 0xE2EBF4
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(QuaternionSerializable other)
    bool Equals(GlobalNamespace::QuaternionSerializable other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE2EBFC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE2EC04
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xE2EC24
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // QuaternionSerializable
  #pragma pack(pop)
  static check_size<sizeof(QuaternionSerializable), 0 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_QuaternionSerializableSizeCheck;
  static_assert(sizeof(QuaternionSerializable) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuaternionSerializable, "", "QuaternionSerializable");
