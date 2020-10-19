// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/FastCallSpecific`2
#include "LiteNetLib/Utils/NetSerializer_FastCallSpecific_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/StringSerializer`1
  template<typename T>
  class NetSerializer::StringSerializer_1 : public LiteNetLib::Utils::NetSerializer::FastCallSpecific_2<T, ::Il2CppString*> {
    public:
    // private readonly System.Int32 _maxLength
    // Offset: 0x0
    int maxLength;
    // public System.Void .ctor(System.Int32 maxLength)
    // Offset: 0xFFFFFFFF
    static NetSerializer::StringSerializer_1<T>* New_ctor(int maxLength) {
      return THROW_UNLESS(il2cpp_utils::New<NetSerializer::StringSerializer_1<T>*>(maxLength));
    }
    // public override System.Void Read(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::Read(T inf, LiteNetLib.Utils.NetDataReader r)
    void Read(T inf, LiteNetLib::Utils::NetDataReader* r) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Read", inf, r));
    }
    // public override System.Void Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    void Write(T inf, LiteNetLib::Utils::NetDataWriter* w) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", inf, w));
    }
    // public override System.Void ReadArray(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::ReadArray(T inf, LiteNetLib.Utils.NetDataReader r)
    void ReadArray(T inf, LiteNetLib::Utils::NetDataReader* r) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadArray", inf, r));
    }
    // public override System.Void WriteArray(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::WriteArray(T inf, LiteNetLib.Utils.NetDataWriter w)
    void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter* w) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteArray", inf, w));
    }
  }; // LiteNetLib.Utils.NetSerializer/StringSerializer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::StringSerializer_1, "LiteNetLib.Utils", "NetSerializer/StringSerializer`1");
#pragma pack(pop)