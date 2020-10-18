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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/FastCallStatic`2
  template<typename TClass, typename TProperty>
  class NetSerializer::FastCallStatic_2 : public LiteNetLib::Utils::NetSerializer::FastCallSpecific_2<TClass, TProperty> {
    public:
    // private readonly System.Action`2<LiteNetLib.Utils.NetDataWriter,TProperty> _writer
    // Offset: 0x0
    System::Action_2<LiteNetLib::Utils::NetDataWriter*, TProperty>* writer;
    // private readonly System.Func`2<LiteNetLib.Utils.NetDataReader,TProperty> _reader
    // Offset: 0x0
    System::Func_2<LiteNetLib::Utils::NetDataReader*, TProperty>* reader;
    // public System.Void .ctor(System.Action`2<LiteNetLib.Utils.NetDataWriter,TProperty> write, System.Func`2<LiteNetLib.Utils.NetDataReader,TProperty> read)
    // Offset: 0xFFFFFFFF
    static NetSerializer::FastCallStatic_2<TClass, TProperty>* New_ctor(System::Action_2<LiteNetLib::Utils::NetDataWriter*, TProperty>* write, System::Func_2<LiteNetLib::Utils::NetDataReader*, TProperty>* read) {
      return THROW_UNLESS((il2cpp_utils::New<NetSerializer::FastCallStatic_2<TClass, TProperty>*>(write, read)));
    }
    // public override System.Void Read(TClass inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::Read(TClass inf, LiteNetLib.Utils.NetDataReader r)
    void Read(TClass inf, LiteNetLib::Utils::NetDataReader* r) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Read", inf, r));
    }
    // public override System.Void Write(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::Write(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    void Write(TClass inf, LiteNetLib::Utils::NetDataWriter* w) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", inf, w));
    }
    // public override System.Void ReadArray(TClass inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::ReadArray(TClass inf, LiteNetLib.Utils.NetDataReader r)
    void ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader* r) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadArray", inf, r));
    }
    // public override System.Void WriteArray(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::WriteArray(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    void WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter* w) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteArray", inf, w));
    }
  }; // LiteNetLib.Utils.NetSerializer/FastCallStatic`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::FastCallStatic_2, "LiteNetLib.Utils", "NetSerializer/FastCallStatic`2");
#pragma pack(pop)
