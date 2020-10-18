// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.DeliveryMethod
#include "LiteNetLib/DeliveryMethod.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetSerializer
  class NetSerializer;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: NetManager
  class NetManager;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor
  class NetPacketProcessor : public ::Il2CppObject {
    public:
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::HashCache_1<T>
    template<typename T>
    class HashCache_1;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate
    class SubscribeDelegate;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass25_0_1<T>
    template<typename T>
    class $$c__DisplayClass25_0_1;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass26_0_2<T, TUserData>
    template<typename T, typename TUserData>
    class $$c__DisplayClass26_0_2;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass27_0_1<T>
    template<typename T>
    class $$c__DisplayClass27_0_1;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass28_0_2<T, TUserData>
    template<typename T, typename TUserData>
    class $$c__DisplayClass28_0_2;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass29_0_2<T, TUserData>
    template<typename T, typename TUserData>
    class $$c__DisplayClass29_0_2;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass30_0_1<T>
    template<typename T>
    class $$c__DisplayClass30_0_1;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass31_0_2<T, TUserData>
    template<typename T, typename TUserData>
    class $$c__DisplayClass31_0_2;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass32_0_1<T>
    template<typename T>
    class $$c__DisplayClass32_0_1;
    // private readonly LiteNetLib.Utils.NetSerializer _netSerializer
    // Offset: 0x10
    LiteNetLib::Utils::NetSerializer* netSerializer;
    // private readonly System.Collections.Generic.Dictionary`2<System.UInt64,LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate> _callbacks
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<uint64_t, LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate*>* callbacks;
    // private readonly LiteNetLib.Utils.NetDataWriter _netDataWriter
    // Offset: 0x20
    LiteNetLib::Utils::NetDataWriter* netDataWriter;
    // public System.Void .ctor(System.Int32 maxStringLength)
    // Offset: 0x2214414
    static NetPacketProcessor* New_ctor(int maxStringLength);
    // protected System.UInt64 GetHash()
    // Offset: 0xFFFFFFFF
    template<class T>
    uint64_t GetHash() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<uint64_t>(this, "GetHash", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // protected LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate GetCallbackFromData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2214584
    LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate* GetCallbackFromData(LiteNetLib::Utils::NetDataReader* reader);
    // protected System.Void WriteHash(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    template<class T>
    void WriteHash(LiteNetLib::Utils::NetDataWriter* writer) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "WriteHash", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, writer));
    }
    // public System.Void RegisterNestedType()
    // Offset: 0xFFFFFFFF
    template<class T>
    void RegisterNestedType() {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>> && is_value_type_v<T>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "RegisterNestedType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
    }
    // public System.Void RegisterNestedType(System.Action`2<LiteNetLib.Utils.NetDataWriter,T> writeDelegate, System.Func`2<LiteNetLib.Utils.NetDataReader,T> readDelegate)
    // Offset: 0xFFFFFFFF
    template<class T>
    void RegisterNestedType(System::Action_2<LiteNetLib::Utils::NetDataWriter*, T>* writeDelegate, System::Func_2<LiteNetLib::Utils::NetDataReader*, T>* readDelegate) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "RegisterNestedType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, writeDelegate, readDelegate));
    }
    // public System.Void RegisterNestedType(System.Func`1<T> constructor)
    // Offset: 0xFFFFFFFF
    template<class T>
    void RegisterNestedType(System::Func_1<T>* constructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "RegisterNestedType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, constructor));
    }
    // public System.Void ReadAllPackets(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x22146C4
    void ReadAllPackets(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void ReadAllPackets(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0x221471C
    void ReadAllPackets(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData);
    // public System.Void ReadPacket(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2214714
    void ReadPacket(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Send(LiteNetLib.NetPeer peer, T packet, LiteNetLib.DeliveryMethod options)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Send(LiteNetLib::NetPeer* peer, T packet, LiteNetLib::DeliveryMethod options) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "Send", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, peer, packet, options));
    }
    // public System.Void SendNetSerializable(LiteNetLib.NetPeer peer, T packet, LiteNetLib.DeliveryMethod options)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SendNetSerializable(LiteNetLib::NetPeer* peer, T packet, LiteNetLib::DeliveryMethod options) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SendNetSerializable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, peer, packet, options));
    }
    // public System.Void Send(LiteNetLib.NetManager manager, T packet, LiteNetLib.DeliveryMethod options)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Send(LiteNetLib::NetManager* manager, T packet, LiteNetLib::DeliveryMethod options) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "Send", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, manager, packet, options));
    }
    // public System.Void SendNetSerializable(LiteNetLib.NetManager manager, T packet, LiteNetLib.DeliveryMethod options)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SendNetSerializable(LiteNetLib::NetManager* manager, T packet, LiteNetLib::DeliveryMethod options) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SendNetSerializable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, manager, packet, options));
    }
    // public System.Void Write(LiteNetLib.Utils.NetDataWriter writer, T packet)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Write(LiteNetLib::Utils::NetDataWriter* writer, T packet) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "Write", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, writer, packet));
    }
    // public System.Void WriteNetSerializable(LiteNetLib.Utils.NetDataWriter writer, T packet)
    // Offset: 0xFFFFFFFF
    template<class T>
    void WriteNetSerializable(LiteNetLib::Utils::NetDataWriter* writer, T packet) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "WriteNetSerializable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, writer, packet));
    }
    // public System.Byte[] Write(T packet)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<uint8_t>* Write(T packet) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<uint8_t>*>(this, "Write", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, packet)));
    }
    // public System.Byte[] WriteNetSerializable(T packet)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<uint8_t>* WriteNetSerializable(T packet) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<uint8_t>*>(this, "WriteNetSerializable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, packet)));
    }
    // public System.Void ReadPacket(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0x2214778
    void ReadPacket(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData);
    // public System.Void Subscribe(System.Action`1<T> onReceive, System.Func`1<T> packetConstructor)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Subscribe(System::Action_1<T>* onReceive, System::Func_1<T>* packetConstructor) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "Subscribe", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, onReceive, packetConstructor));
    }
    // public System.Void Subscribe(System.Action`2<T,TUserData> onReceive, System.Func`1<T> packetConstructor)
    // Offset: 0xFFFFFFFF
    template<class T, class TUserData>
    void Subscribe(System::Action_2<T, TUserData>* onReceive, System::Func_1<T>* packetConstructor) {
      THROW_UNLESS((il2cpp_utils::RunGenericMethod(this, "Subscribe", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}, onReceive, packetConstructor)));
    }
    // public System.Void SubscribeReusable(System.Action`1<T> onReceive)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SubscribeReusable(System::Action_1<T>* onReceive) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SubscribeReusable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, onReceive));
    }
    // public System.Void SubscribeReusable(System.Action`2<T,TUserData> onReceive)
    // Offset: 0xFFFFFFFF
    template<class T, class TUserData>
    void SubscribeReusable(System::Action_2<T, TUserData>* onReceive) {
      THROW_UNLESS((il2cpp_utils::RunGenericMethod(this, "SubscribeReusable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}, onReceive)));
    }
    // public System.Void SubscribeNetSerializable(System.Action`2<T,TUserData> onReceive, System.Func`1<T> packetConstructor)
    // Offset: 0xFFFFFFFF
    template<class T, class TUserData>
    void SubscribeNetSerializable(System::Action_2<T, TUserData>* onReceive, System::Func_1<T>* packetConstructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS((il2cpp_utils::RunGenericMethod(this, "SubscribeNetSerializable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}, onReceive, packetConstructor)));
    }
    // public System.Void SubscribeNetSerializable(System.Action`1<T> onReceive, System.Func`1<T> packetConstructor)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SubscribeNetSerializable(System::Action_1<T>* onReceive, System::Func_1<T>* packetConstructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SubscribeNetSerializable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, onReceive, packetConstructor));
    }
    // public System.Void SubscribeNetSerializable(System.Action`2<T,TUserData> onReceive)
    // Offset: 0xFFFFFFFF
    template<class T, class TUserData>
    void SubscribeNetSerializable(System::Action_2<T, TUserData>* onReceive) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS((il2cpp_utils::RunGenericMethod(this, "SubscribeNetSerializable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}, onReceive)));
    }
    // public System.Void SubscribeNetSerializable(System.Action`1<T> onReceive)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SubscribeNetSerializable(System::Action_1<T>* onReceive) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SubscribeNetSerializable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, onReceive));
    }
    // public System.Boolean RemoveSubscription()
    // Offset: 0xFFFFFFFF
    template<class T>
    bool RemoveSubscription() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>(this, "RemoveSubscription", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public System.Void .ctor()
    // Offset: 0x2214338
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NetPacketProcessor* New_ctor();
  }; // LiteNetLib.Utils.NetPacketProcessor
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetPacketProcessor*, "LiteNetLib.Utils", "NetPacketProcessor");
#pragma pack(pop)
