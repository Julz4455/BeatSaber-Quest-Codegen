// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/EnumByteSerializer`1
#include "LiteNetLib/Utils/NetSerializer_EnumByteSerializer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/EnumIntSerializer`1
  template<typename T>
  class NetSerializer::EnumIntSerializer_1 : public LiteNetLib::Utils::NetSerializer::EnumByteSerializer_1<T> {
    public:
    // public System.Void .ctor(System.Reflection.PropertyInfo property, System.Type propertyType)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/EnumByteSerializer`1
    // Base method: System.Void EnumByteSerializer_1::.ctor(System.Reflection.PropertyInfo property, System.Type propertyType)
    static NetSerializer::EnumIntSerializer_1<T>* New_ctor(System::Reflection::PropertyInfo* property, System::Type* propertyType) {
      return THROW_UNLESS(il2cpp_utils::New<NetSerializer::EnumIntSerializer_1<T>*>(property, propertyType));
    }
    // public override System.Void Read(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/EnumByteSerializer`1
    // Base method: System.Void EnumByteSerializer_1::Read(T inf, LiteNetLib.Utils.NetDataReader r)
    void Read(T inf, LiteNetLib::Utils::NetDataReader* r) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Read", inf, r));
    }
    // public override System.Void Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/EnumByteSerializer`1
    // Base method: System.Void EnumByteSerializer_1::Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    void Write(T inf, LiteNetLib::Utils::NetDataWriter* w) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", inf, w));
    }
  }; // LiteNetLib.Utils.NetSerializer/EnumIntSerializer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::EnumIntSerializer_1, "LiteNetLib.Utils", "NetSerializer/EnumIntSerializer`1");
#pragma pack(pop)
