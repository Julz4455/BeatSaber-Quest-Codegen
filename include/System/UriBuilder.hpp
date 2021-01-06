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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x68
  // Autogenerated type: System.UriBuilder
  // [] Offset: FFFFFFFF
  class UriBuilder : public ::Il2CppObject {
    public:
    // private System.Boolean _changed
    // Size: 0x1
    // Offset: 0x10
    bool changed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: changed and: fragment
    char __padding0[0x7] = {};
    // private System.String _fragment
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* fragment;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _host
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* host;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _password
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _path
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _port
    // Size: 0x4
    // Offset: 0x38
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: query
    char __padding5[0x4] = {};
    // private System.String _query
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* query;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _scheme
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* scheme;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _schemeDelimiter
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* schemeDelimiter;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Uri _uri
    // Size: 0x8
    // Offset: 0x58
    System::Uri* uri;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.String _username
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* username;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UriBuilder
    UriBuilder(bool changed_ = {}, ::Il2CppString* fragment_ = {}, ::Il2CppString* host_ = {}, ::Il2CppString* password_ = {}, ::Il2CppString* path_ = {}, int port_ = {}, ::Il2CppString* query_ = {}, ::Il2CppString* scheme_ = {}, ::Il2CppString* schemeDelimiter_ = {}, System::Uri* uri_ = {}, ::Il2CppString* username_ = {}) noexcept : changed{changed_}, fragment{fragment_}, host{host_}, password{password_}, path{path_}, port{port_}, query{query_}, scheme{scheme_}, schemeDelimiter{schemeDelimiter_}, uri{uri_}, username{username_} {}
    // public System.Void .ctor(System.String uri)
    // Offset: 0x19D3E20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UriBuilder* New_ctor(::Il2CppString* uri) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("UriBuilder").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UriBuilder*, creationType>(uri)));
    }
    // private System.Void Init(System.Uri uri)
    // Offset: 0x19D4000
    void Init(System::Uri* uri);
    // public System.Void .ctor(System.String schemeName, System.String hostName)
    // Offset: 0x19D43D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UriBuilder* New_ctor(::Il2CppString* schemeName, ::Il2CppString* hostName) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("UriBuilder").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UriBuilder*, creationType>(schemeName, hostName)));
    }
    // public System.Void .ctor(System.String scheme, System.String host, System.Int32 portNumber)
    // Offset: 0x19D4780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UriBuilder* New_ctor(::Il2CppString* scheme, ::Il2CppString* host, int portNumber) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("UriBuilder").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UriBuilder*, creationType>(scheme, host, portNumber)));
    }
    // public System.Void set_Host(System.String value)
    // Offset: 0x19D4690
    void set_Host(::Il2CppString* value);
    // public System.Void set_Path(System.String value)
    // Offset: 0x19D484C
    void set_Path(::Il2CppString* value);
    // public System.Void set_Port(System.Int32 value)
    // Offset: 0x19D47AC
    void set_Port(int value);
    // public System.Void set_Query(System.String value)
    // Offset: 0x19D4918
    void set_Query(::Il2CppString* value);
    // public System.Void set_Scheme(System.String value)
    // Offset: 0x19D4548
    void set_Scheme(::Il2CppString* value);
    // public System.Uri get_Uri()
    // Offset: 0x19D49E0
    System::Uri* get_Uri();
    // private System.Void SetFieldsFromUri(System.Uri uri)
    // Offset: 0x19D41F0
    void SetFieldsFromUri(System::Uri* uri);
    // public System.Void .ctor()
    // Offset: 0x19D3CD8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UriBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("UriBuilder").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UriBuilder*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object rparam)
    // Offset: 0x19D4A98
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object rparam)
    bool Equals(::Il2CppObject* rparam);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19D4AF8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x19D4B1C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.UriBuilder
  static check_size<sizeof(UriBuilder), 96 + sizeof(::Il2CppString*)> __System_UriBuilderSizeCheck;
  static_assert(sizeof(UriBuilder) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::UriBuilder*, "System", "UriBuilder");
#pragma pack(pop)
