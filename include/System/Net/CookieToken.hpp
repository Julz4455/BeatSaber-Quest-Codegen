// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.CookieToken
  struct CookieToken : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: CookieToken
    constexpr CookieToken(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.CookieToken Nothing
    static constexpr const int Nothing = 0;
    // Get static field: static public System.Net.CookieToken Nothing
    static System::Net::CookieToken _get_Nothing();
    // Set static field: static public System.Net.CookieToken Nothing
    static void _set_Nothing(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken NameValuePair
    static constexpr const int NameValuePair = 1;
    // Get static field: static public System.Net.CookieToken NameValuePair
    static System::Net::CookieToken _get_NameValuePair();
    // Set static field: static public System.Net.CookieToken NameValuePair
    static void _set_NameValuePair(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Attribute
    static constexpr const int Attribute = 2;
    // Get static field: static public System.Net.CookieToken Attribute
    static System::Net::CookieToken _get_Attribute();
    // Set static field: static public System.Net.CookieToken Attribute
    static void _set_Attribute(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken EndToken
    static constexpr const int EndToken = 3;
    // Get static field: static public System.Net.CookieToken EndToken
    static System::Net::CookieToken _get_EndToken();
    // Set static field: static public System.Net.CookieToken EndToken
    static void _set_EndToken(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken EndCookie
    static constexpr const int EndCookie = 4;
    // Get static field: static public System.Net.CookieToken EndCookie
    static System::Net::CookieToken _get_EndCookie();
    // Set static field: static public System.Net.CookieToken EndCookie
    static void _set_EndCookie(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken End
    static constexpr const int End = 5;
    // Get static field: static public System.Net.CookieToken End
    static System::Net::CookieToken _get_End();
    // Set static field: static public System.Net.CookieToken End
    static void _set_End(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Equals
    static constexpr const int Equals = 6;
    // Get static field: static public System.Net.CookieToken Equals
    static System::Net::CookieToken _get_Equals();
    // Set static field: static public System.Net.CookieToken Equals
    static void _set_Equals(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Comment
    static constexpr const int Comment = 7;
    // Get static field: static public System.Net.CookieToken Comment
    static System::Net::CookieToken _get_Comment();
    // Set static field: static public System.Net.CookieToken Comment
    static void _set_Comment(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken CommentUrl
    static constexpr const int CommentUrl = 8;
    // Get static field: static public System.Net.CookieToken CommentUrl
    static System::Net::CookieToken _get_CommentUrl();
    // Set static field: static public System.Net.CookieToken CommentUrl
    static void _set_CommentUrl(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken CookieName
    static constexpr const int CookieName = 9;
    // Get static field: static public System.Net.CookieToken CookieName
    static System::Net::CookieToken _get_CookieName();
    // Set static field: static public System.Net.CookieToken CookieName
    static void _set_CookieName(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Discard
    static constexpr const int Discard = 10;
    // Get static field: static public System.Net.CookieToken Discard
    static System::Net::CookieToken _get_Discard();
    // Set static field: static public System.Net.CookieToken Discard
    static void _set_Discard(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Domain
    static constexpr const int Domain = 11;
    // Get static field: static public System.Net.CookieToken Domain
    static System::Net::CookieToken _get_Domain();
    // Set static field: static public System.Net.CookieToken Domain
    static void _set_Domain(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Expires
    static constexpr const int Expires = 12;
    // Get static field: static public System.Net.CookieToken Expires
    static System::Net::CookieToken _get_Expires();
    // Set static field: static public System.Net.CookieToken Expires
    static void _set_Expires(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken MaxAge
    static constexpr const int MaxAge = 13;
    // Get static field: static public System.Net.CookieToken MaxAge
    static System::Net::CookieToken _get_MaxAge();
    // Set static field: static public System.Net.CookieToken MaxAge
    static void _set_MaxAge(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Path
    static constexpr const int Path = 14;
    // Get static field: static public System.Net.CookieToken Path
    static System::Net::CookieToken _get_Path();
    // Set static field: static public System.Net.CookieToken Path
    static void _set_Path(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Port
    static constexpr const int Port = 15;
    // Get static field: static public System.Net.CookieToken Port
    static System::Net::CookieToken _get_Port();
    // Set static field: static public System.Net.CookieToken Port
    static void _set_Port(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Secure
    static constexpr const int Secure = 16;
    // Get static field: static public System.Net.CookieToken Secure
    static System::Net::CookieToken _get_Secure();
    // Set static field: static public System.Net.CookieToken Secure
    static void _set_Secure(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken HttpOnly
    static constexpr const int HttpOnly = 17;
    // Get static field: static public System.Net.CookieToken HttpOnly
    static System::Net::CookieToken _get_HttpOnly();
    // Set static field: static public System.Net.CookieToken HttpOnly
    static void _set_HttpOnly(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Unknown
    static constexpr const int Unknown = 18;
    // Get static field: static public System.Net.CookieToken Unknown
    static System::Net::CookieToken _get_Unknown();
    // Set static field: static public System.Net.CookieToken Unknown
    static void _set_Unknown(System::Net::CookieToken value);
    // static field const value: static public System.Net.CookieToken Version
    static constexpr const int Version = 19;
    // Get static field: static public System.Net.CookieToken Version
    static System::Net::CookieToken _get_Version();
    // Set static field: static public System.Net.CookieToken Version
    static void _set_Version(System::Net::CookieToken value);
  }; // System.Net.CookieToken
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieToken, "System.Net", "CookieToken");
#pragma pack(pop)
