// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/CustomType
#include "LiteNetLib/Utils/NetSerializer_CustomType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/CustomTypeStruct`1
  template<typename TProperty>
  class NetSerializer::CustomTypeStruct_1 : public LiteNetLib::Utils::NetSerializer::CustomType {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TProperty>> || std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<TProperty>>) && (!std::is_complete_v<std::remove_pointer_t<TProperty>> || is_value_type_v<TProperty>));
    public:
    // public override LiteNetLib.Utils.NetSerializer/FastCall`1<T> Get()
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/CustomType
    // Base method: LiteNetLib.Utils.NetSerializer/FastCall`1<T> CustomType::Get()
    template<class T>
    LiteNetLib::Utils::NetSerializer::FastCall_1<T>* Get() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<LiteNetLib::Utils::NetSerializer::FastCall_1<T>*>(this, "Get", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/CustomType
    // Base method: System.Void CustomType::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetSerializer::CustomTypeStruct_1<TProperty>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<NetSerializer::CustomTypeStruct_1<TProperty>*>());
    }
  }; // LiteNetLib.Utils.NetSerializer/CustomTypeStruct`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::CustomTypeStruct_1, "LiteNetLib.Utils", "NetSerializer/CustomTypeStruct`1");
#pragma pack(pop)
