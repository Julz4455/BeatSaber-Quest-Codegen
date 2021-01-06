// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListener
  class HttpListener;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x40
  // Autogenerated type: System.Net.ListenerPrefix
  // [] Offset: FFFFFFFF
  class ListenerPrefix : public ::Il2CppObject {
    public:
    // private System.String original
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* original;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String host
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* host;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.UInt16 port
    // Size: 0x2
    // Offset: 0x20
    uint16_t port;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: port and: path
    char __padding2[0x6] = {};
    // private System.String path
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean secure
    // Size: 0x1
    // Offset: 0x30
    bool secure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: secure and: Listener
    char __padding4[0x7] = {};
    // public System.Net.HttpListener Listener
    // Size: 0x8
    // Offset: 0x38
    System::Net::HttpListener* Listener;
    // Field size check
    static_assert(sizeof(System::Net::HttpListener*) == 0x8);
    // Creating value type constructor for type: ListenerPrefix
    ListenerPrefix(::Il2CppString* original_ = {}, ::Il2CppString* host_ = {}, uint16_t port_ = {}, ::Il2CppString* path_ = {}, bool secure_ = {}, System::Net::HttpListener* Listener_ = {}) noexcept : original{original_}, host{host_}, port{port_}, path{path_}, secure{secure_}, Listener{Listener_} {}
    // public System.Void .ctor(System.String prefix)
    // Offset: 0x12BE6D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListenerPrefix* New_ctor(::Il2CppString* prefix) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("ListenerPrefix").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListenerPrefix*, creationType>(prefix)));
    }
    // public System.Boolean get_Secure()
    // Offset: 0x12BEA40
    bool get_Secure();
    // public System.String get_Host()
    // Offset: 0x12BEA48
    ::Il2CppString* get_Host();
    // public System.Int32 get_Port()
    // Offset: 0x12BEA50
    int get_Port();
    // public System.String get_Path()
    // Offset: 0x12BEA58
    ::Il2CppString* get_Path();
    // private System.Void Parse(System.String uri)
    // Offset: 0x12BE714
    void Parse(::Il2CppString* uri);
    // static public System.Void CheckUri(System.String uri)
    // Offset: 0x12B0718
    static void CheckUri(::Il2CppString* uri);
    // public override System.String ToString()
    // Offset: 0x12BEA38
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x12BEA60
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12BEAF4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Net.ListenerPrefix
  static check_size<sizeof(ListenerPrefix), 56 + sizeof(System::Net::HttpListener*)> __System_Net_ListenerPrefixSizeCheck;
  static_assert(sizeof(ListenerPrefix) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::ListenerPrefix*, "System.Net", "ListenerPrefix");
#pragma pack(pop)
