// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: System.Net.ListenerPrefix
  class ListenerPrefix : public ::Il2CppObject {
    public:
    // private System.String original
    // Offset: 0x10
    ::Il2CppString* original;
    // private System.String host
    // Offset: 0x18
    ::Il2CppString* host;
    // private System.UInt16 port
    // Offset: 0x20
    uint16_t port;
    // private System.String path
    // Offset: 0x28
    ::Il2CppString* path;
    // private System.Boolean secure
    // Offset: 0x30
    bool secure;
    // public System.Net.HttpListener Listener
    // Offset: 0x38
    System::Net::HttpListener* Listener;
    // public System.Void .ctor(System.String prefix)
    // Offset: 0x1472DB0
    static ListenerPrefix* New_ctor(::Il2CppString* prefix);
    // public System.Boolean get_Secure()
    // Offset: 0x147311C
    bool get_Secure();
    // public System.String get_Host()
    // Offset: 0x1473124
    ::Il2CppString* get_Host();
    // public System.Int32 get_Port()
    // Offset: 0x147312C
    int get_Port();
    // public System.String get_Path()
    // Offset: 0x1473134
    ::Il2CppString* get_Path();
    // private System.Void Parse(System.String uri)
    // Offset: 0x1472DF0
    void Parse(::Il2CppString* uri);
    // static public System.Void CheckUri(System.String uri)
    // Offset: 0x1464DF4
    static void CheckUri(::Il2CppString* uri);
    // public override System.String ToString()
    // Offset: 0x1473114
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x147313C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x14731D0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Net.ListenerPrefix
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ListenerPrefix*, "System.Net", "ListenerPrefix");
#pragma pack(pop)
