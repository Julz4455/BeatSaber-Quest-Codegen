// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.CookieVariant
#include "System/Net/CookieVariant.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: Comparer
  class Comparer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.Cookie
  class Cookie : public ::Il2CppObject {
    public:
    // private System.String m_comment
    // Offset: 0x10
    ::Il2CppString* m_comment;
    // private System.Uri m_commentUri
    // Offset: 0x18
    System::Uri* m_commentUri;
    // private System.Net.CookieVariant m_cookieVariant
    // Offset: 0x20
    System::Net::CookieVariant m_cookieVariant;
    // private System.Boolean m_discard
    // Offset: 0x24
    bool m_discard;
    // private System.String m_domain
    // Offset: 0x28
    ::Il2CppString* m_domain;
    // private System.Boolean m_domain_implicit
    // Offset: 0x30
    bool m_domain_implicit;
    // private System.DateTime m_expires
    // Offset: 0x38
    System::DateTime m_expires;
    // private System.String m_name
    // Offset: 0x40
    ::Il2CppString* m_name;
    // private System.String m_path
    // Offset: 0x48
    ::Il2CppString* m_path;
    // private System.Boolean m_path_implicit
    // Offset: 0x50
    bool m_path_implicit;
    // private System.String m_port
    // Offset: 0x58
    ::Il2CppString* m_port;
    // private System.Boolean m_port_implicit
    // Offset: 0x60
    bool m_port_implicit;
    // private System.Int32[] m_port_list
    // Offset: 0x68
    ::Array<int>* m_port_list;
    // private System.Boolean m_secure
    // Offset: 0x70
    bool m_secure;
    // private System.Boolean m_httpOnly
    // Offset: 0x71
    bool m_httpOnly;
    // private System.DateTime m_timeStamp
    // Offset: 0x78
    System::DateTime m_timeStamp;
    // private System.String m_value
    // Offset: 0x80
    ::Il2CppString* m_value;
    // private System.Int32 m_version
    // Offset: 0x88
    int m_version;
    // private System.String m_domainKey
    // Offset: 0x90
    ::Il2CppString* m_domainKey;
    // System.Boolean IsQuotedVersion
    // Offset: 0x98
    bool IsQuotedVersion;
    // System.Boolean IsQuotedDomain
    // Offset: 0x99
    bool IsQuotedDomain;
    // Get static field: static readonly System.Char[] PortSplitDelimiters
    static ::Array<::Il2CppChar>* _get_PortSplitDelimiters();
    // Set static field: static readonly System.Char[] PortSplitDelimiters
    static void _set_PortSplitDelimiters(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] Reserved2Name
    static ::Array<::Il2CppChar>* _get_Reserved2Name();
    // Set static field: static readonly System.Char[] Reserved2Name
    static void _set_Reserved2Name(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] Reserved2Value
    static ::Array<::Il2CppChar>* _get_Reserved2Value();
    // Set static field: static readonly System.Char[] Reserved2Value
    static void _set_Reserved2Value(::Array<::Il2CppChar>* value);
    // Get static field: static private System.Net.Comparer staticComparer
    static System::Net::Comparer* _get_staticComparer();
    // Set static field: static private System.Net.Comparer staticComparer
    static void _set_staticComparer(System::Net::Comparer* value);
    // public System.String get_Comment()
    // Offset: 0x14D838C
    ::Il2CppString* get_Comment();
    // public System.Void set_Comment(System.String value)
    // Offset: 0x14D8394
    void set_Comment(::Il2CppString* value);
    // public System.Void set_CommentUri(System.Uri value)
    // Offset: 0x14D8404
    void set_CommentUri(System::Uri* value);
    // public System.Void set_HttpOnly(System.Boolean value)
    // Offset: 0x14D840C
    void set_HttpOnly(bool value);
    // public System.Void set_Discard(System.Boolean value)
    // Offset: 0x14D8418
    void set_Discard(bool value);
    // public System.String get_Domain()
    // Offset: 0x14D8424
    ::Il2CppString* get_Domain();
    // public System.Void set_Domain(System.String value)
    // Offset: 0x14D842C
    void set_Domain(::Il2CppString* value);
    // private System.String get__Domain()
    // Offset: 0x14D84D0
    ::Il2CppString* get__Domain();
    // public System.Boolean get_Expired()
    // Offset: 0x14D85A4
    bool get_Expired();
    // public System.Void set_Expires(System.DateTime value)
    // Offset: 0x14D8680
    void set_Expires(System::DateTime value);
    // public System.String get_Name()
    // Offset: 0x14D8688
    ::Il2CppString* get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0x14D8690
    void set_Name(::Il2CppString* value);
    // System.Boolean InternalSetName(System.String value)
    // Offset: 0x14D87E8
    bool InternalSetName(::Il2CppString* value);
    // public System.String get_Path()
    // Offset: 0x14D890C
    ::Il2CppString* get_Path();
    // public System.Void set_Path(System.String value)
    // Offset: 0x14D8914
    void set_Path(::Il2CppString* value);
    // private System.String get__Path()
    // Offset: 0x14D899C
    ::Il2CppString* get__Path();
    // System.Boolean get_Plain()
    // Offset: 0x14D8594
    bool get_Plain();
    // static private System.Boolean IsDomainEqualToHost(System.String domain, System.String host)
    // Offset: 0x14D8A34
    static bool IsDomainEqualToHost(::Il2CppString* domain, ::Il2CppString* host);
    // System.Boolean VerifySetDefaults(System.Net.CookieVariant variant, System.Uri uri, System.Boolean isLocalDomain, System.String localDomain, System.Boolean set_default, System.Boolean isThrow)
    // Offset: 0x14D8A98
    bool VerifySetDefaults(System::Net::CookieVariant variant, System::Uri* uri, bool isLocalDomain, ::Il2CppString* localDomain, bool set_default, bool isThrow);
    // static private System.Boolean DomainCharsTest(System.String name)
    // Offset: 0x14D9534
    static bool DomainCharsTest(::Il2CppString* name);
    // public System.String get_Port()
    // Offset: 0x14D96A0
    ::Il2CppString* get_Port();
    // public System.Void set_Port(System.String value)
    // Offset: 0x14D96A8
    void set_Port(::Il2CppString* value);
    // System.Int32[] get_PortList()
    // Offset: 0x14D998C
    ::Array<int>* get_PortList();
    // private System.String get__Port()
    // Offset: 0x14D9994
    ::Il2CppString* get__Port();
    // public System.Boolean get_Secure()
    // Offset: 0x14D9A54
    bool get_Secure();
    // public System.Void set_Secure(System.Boolean value)
    // Offset: 0x14D9A5C
    void set_Secure(bool value);
    // public System.String get_Value()
    // Offset: 0x14D9A68
    ::Il2CppString* get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x14D9A70
    void set_Value(::Il2CppString* value);
    // System.Net.CookieVariant get_Variant()
    // Offset: 0x14D9AF0
    System::Net::CookieVariant get_Variant();
    // System.String get_DomainKey()
    // Offset: 0x14D9AF8
    ::Il2CppString* get_DomainKey();
    // public System.Int32 get_Version()
    // Offset: 0x14D9B14
    int get_Version();
    // public System.Void set_Version(System.Int32 value)
    // Offset: 0x14D9B1C
    void set_Version(int value);
    // private System.String get__Version()
    // Offset: 0x14D9BC4
    ::Il2CppString* get__Version();
    // static System.Collections.IComparer GetComparer()
    // Offset: 0x14D9CC0
    static System::Collections::IComparer* GetComparer();
    // static private System.Void .cctor()
    // Offset: 0x14DA468
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x14D8238
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Cookie* New_ctor();
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0x14D9D28
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.Int32 GetHashCode()
    // Offset: 0x14D9E08
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x14DA0E4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Cookie
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Cookie*, "System.Net", "Cookie");
#pragma pack(pop)
