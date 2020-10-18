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
  // Autogenerated type: System.Net.HttpStatusCode
  struct HttpStatusCode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: HttpStatusCode
    constexpr HttpStatusCode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.HttpStatusCode Continue
    static constexpr const int Continue = 100;
    // Get static field: static public System.Net.HttpStatusCode Continue
    static System::Net::HttpStatusCode _get_Continue();
    // Set static field: static public System.Net.HttpStatusCode Continue
    static void _set_Continue(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode SwitchingProtocols
    static constexpr const int SwitchingProtocols = 101;
    // Get static field: static public System.Net.HttpStatusCode SwitchingProtocols
    static System::Net::HttpStatusCode _get_SwitchingProtocols();
    // Set static field: static public System.Net.HttpStatusCode SwitchingProtocols
    static void _set_SwitchingProtocols(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode OK
    static constexpr const int OK = 200;
    // Get static field: static public System.Net.HttpStatusCode OK
    static System::Net::HttpStatusCode _get_OK();
    // Set static field: static public System.Net.HttpStatusCode OK
    static void _set_OK(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Created
    static constexpr const int Created = 201;
    // Get static field: static public System.Net.HttpStatusCode Created
    static System::Net::HttpStatusCode _get_Created();
    // Set static field: static public System.Net.HttpStatusCode Created
    static void _set_Created(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Accepted
    static constexpr const int Accepted = 202;
    // Get static field: static public System.Net.HttpStatusCode Accepted
    static System::Net::HttpStatusCode _get_Accepted();
    // Set static field: static public System.Net.HttpStatusCode Accepted
    static void _set_Accepted(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode NonAuthoritativeInformation
    static constexpr const int NonAuthoritativeInformation = 203;
    // Get static field: static public System.Net.HttpStatusCode NonAuthoritativeInformation
    static System::Net::HttpStatusCode _get_NonAuthoritativeInformation();
    // Set static field: static public System.Net.HttpStatusCode NonAuthoritativeInformation
    static void _set_NonAuthoritativeInformation(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode NoContent
    static constexpr const int NoContent = 204;
    // Get static field: static public System.Net.HttpStatusCode NoContent
    static System::Net::HttpStatusCode _get_NoContent();
    // Set static field: static public System.Net.HttpStatusCode NoContent
    static void _set_NoContent(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode ResetContent
    static constexpr const int ResetContent = 205;
    // Get static field: static public System.Net.HttpStatusCode ResetContent
    static System::Net::HttpStatusCode _get_ResetContent();
    // Set static field: static public System.Net.HttpStatusCode ResetContent
    static void _set_ResetContent(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode PartialContent
    static constexpr const int PartialContent = 206;
    // Get static field: static public System.Net.HttpStatusCode PartialContent
    static System::Net::HttpStatusCode _get_PartialContent();
    // Set static field: static public System.Net.HttpStatusCode PartialContent
    static void _set_PartialContent(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode MultipleChoices
    static constexpr const int MultipleChoices = 300;
    // Get static field: static public System.Net.HttpStatusCode MultipleChoices
    static System::Net::HttpStatusCode _get_MultipleChoices();
    // Set static field: static public System.Net.HttpStatusCode MultipleChoices
    static void _set_MultipleChoices(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Ambiguous
    static constexpr const int Ambiguous = 300;
    // Get static field: static public System.Net.HttpStatusCode Ambiguous
    static System::Net::HttpStatusCode _get_Ambiguous();
    // Set static field: static public System.Net.HttpStatusCode Ambiguous
    static void _set_Ambiguous(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode MovedPermanently
    static constexpr const int MovedPermanently = 301;
    // Get static field: static public System.Net.HttpStatusCode MovedPermanently
    static System::Net::HttpStatusCode _get_MovedPermanently();
    // Set static field: static public System.Net.HttpStatusCode MovedPermanently
    static void _set_MovedPermanently(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Moved
    static constexpr const int Moved = 301;
    // Get static field: static public System.Net.HttpStatusCode Moved
    static System::Net::HttpStatusCode _get_Moved();
    // Set static field: static public System.Net.HttpStatusCode Moved
    static void _set_Moved(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Found
    static constexpr const int Found = 302;
    // Get static field: static public System.Net.HttpStatusCode Found
    static System::Net::HttpStatusCode _get_Found();
    // Set static field: static public System.Net.HttpStatusCode Found
    static void _set_Found(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Redirect
    static constexpr const int Redirect = 302;
    // Get static field: static public System.Net.HttpStatusCode Redirect
    static System::Net::HttpStatusCode _get_Redirect();
    // Set static field: static public System.Net.HttpStatusCode Redirect
    static void _set_Redirect(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode SeeOther
    static constexpr const int SeeOther = 303;
    // Get static field: static public System.Net.HttpStatusCode SeeOther
    static System::Net::HttpStatusCode _get_SeeOther();
    // Set static field: static public System.Net.HttpStatusCode SeeOther
    static void _set_SeeOther(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode RedirectMethod
    static constexpr const int RedirectMethod = 303;
    // Get static field: static public System.Net.HttpStatusCode RedirectMethod
    static System::Net::HttpStatusCode _get_RedirectMethod();
    // Set static field: static public System.Net.HttpStatusCode RedirectMethod
    static void _set_RedirectMethod(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode NotModified
    static constexpr const int NotModified = 304;
    // Get static field: static public System.Net.HttpStatusCode NotModified
    static System::Net::HttpStatusCode _get_NotModified();
    // Set static field: static public System.Net.HttpStatusCode NotModified
    static void _set_NotModified(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode UseProxy
    static constexpr const int UseProxy = 305;
    // Get static field: static public System.Net.HttpStatusCode UseProxy
    static System::Net::HttpStatusCode _get_UseProxy();
    // Set static field: static public System.Net.HttpStatusCode UseProxy
    static void _set_UseProxy(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Unused
    static constexpr const int Unused = 306;
    // Get static field: static public System.Net.HttpStatusCode Unused
    static System::Net::HttpStatusCode _get_Unused();
    // Set static field: static public System.Net.HttpStatusCode Unused
    static void _set_Unused(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode TemporaryRedirect
    static constexpr const int TemporaryRedirect = 307;
    // Get static field: static public System.Net.HttpStatusCode TemporaryRedirect
    static System::Net::HttpStatusCode _get_TemporaryRedirect();
    // Set static field: static public System.Net.HttpStatusCode TemporaryRedirect
    static void _set_TemporaryRedirect(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode RedirectKeepVerb
    static constexpr const int RedirectKeepVerb = 307;
    // Get static field: static public System.Net.HttpStatusCode RedirectKeepVerb
    static System::Net::HttpStatusCode _get_RedirectKeepVerb();
    // Set static field: static public System.Net.HttpStatusCode RedirectKeepVerb
    static void _set_RedirectKeepVerb(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode BadRequest
    static constexpr const int BadRequest = 400;
    // Get static field: static public System.Net.HttpStatusCode BadRequest
    static System::Net::HttpStatusCode _get_BadRequest();
    // Set static field: static public System.Net.HttpStatusCode BadRequest
    static void _set_BadRequest(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Unauthorized
    static constexpr const int Unauthorized = 401;
    // Get static field: static public System.Net.HttpStatusCode Unauthorized
    static System::Net::HttpStatusCode _get_Unauthorized();
    // Set static field: static public System.Net.HttpStatusCode Unauthorized
    static void _set_Unauthorized(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode PaymentRequired
    static constexpr const int PaymentRequired = 402;
    // Get static field: static public System.Net.HttpStatusCode PaymentRequired
    static System::Net::HttpStatusCode _get_PaymentRequired();
    // Set static field: static public System.Net.HttpStatusCode PaymentRequired
    static void _set_PaymentRequired(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Forbidden
    static constexpr const int Forbidden = 403;
    // Get static field: static public System.Net.HttpStatusCode Forbidden
    static System::Net::HttpStatusCode _get_Forbidden();
    // Set static field: static public System.Net.HttpStatusCode Forbidden
    static void _set_Forbidden(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode NotFound
    static constexpr const int NotFound = 404;
    // Get static field: static public System.Net.HttpStatusCode NotFound
    static System::Net::HttpStatusCode _get_NotFound();
    // Set static field: static public System.Net.HttpStatusCode NotFound
    static void _set_NotFound(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode MethodNotAllowed
    static constexpr const int MethodNotAllowed = 405;
    // Get static field: static public System.Net.HttpStatusCode MethodNotAllowed
    static System::Net::HttpStatusCode _get_MethodNotAllowed();
    // Set static field: static public System.Net.HttpStatusCode MethodNotAllowed
    static void _set_MethodNotAllowed(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode NotAcceptable
    static constexpr const int NotAcceptable = 406;
    // Get static field: static public System.Net.HttpStatusCode NotAcceptable
    static System::Net::HttpStatusCode _get_NotAcceptable();
    // Set static field: static public System.Net.HttpStatusCode NotAcceptable
    static void _set_NotAcceptable(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode ProxyAuthenticationRequired
    static constexpr const int ProxyAuthenticationRequired = 407;
    // Get static field: static public System.Net.HttpStatusCode ProxyAuthenticationRequired
    static System::Net::HttpStatusCode _get_ProxyAuthenticationRequired();
    // Set static field: static public System.Net.HttpStatusCode ProxyAuthenticationRequired
    static void _set_ProxyAuthenticationRequired(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode RequestTimeout
    static constexpr const int RequestTimeout = 408;
    // Get static field: static public System.Net.HttpStatusCode RequestTimeout
    static System::Net::HttpStatusCode _get_RequestTimeout();
    // Set static field: static public System.Net.HttpStatusCode RequestTimeout
    static void _set_RequestTimeout(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Conflict
    static constexpr const int Conflict = 409;
    // Get static field: static public System.Net.HttpStatusCode Conflict
    static System::Net::HttpStatusCode _get_Conflict();
    // Set static field: static public System.Net.HttpStatusCode Conflict
    static void _set_Conflict(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode Gone
    static constexpr const int Gone = 410;
    // Get static field: static public System.Net.HttpStatusCode Gone
    static System::Net::HttpStatusCode _get_Gone();
    // Set static field: static public System.Net.HttpStatusCode Gone
    static void _set_Gone(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode LengthRequired
    static constexpr const int LengthRequired = 411;
    // Get static field: static public System.Net.HttpStatusCode LengthRequired
    static System::Net::HttpStatusCode _get_LengthRequired();
    // Set static field: static public System.Net.HttpStatusCode LengthRequired
    static void _set_LengthRequired(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode PreconditionFailed
    static constexpr const int PreconditionFailed = 412;
    // Get static field: static public System.Net.HttpStatusCode PreconditionFailed
    static System::Net::HttpStatusCode _get_PreconditionFailed();
    // Set static field: static public System.Net.HttpStatusCode PreconditionFailed
    static void _set_PreconditionFailed(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode RequestEntityTooLarge
    static constexpr const int RequestEntityTooLarge = 413;
    // Get static field: static public System.Net.HttpStatusCode RequestEntityTooLarge
    static System::Net::HttpStatusCode _get_RequestEntityTooLarge();
    // Set static field: static public System.Net.HttpStatusCode RequestEntityTooLarge
    static void _set_RequestEntityTooLarge(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode RequestUriTooLong
    static constexpr const int RequestUriTooLong = 414;
    // Get static field: static public System.Net.HttpStatusCode RequestUriTooLong
    static System::Net::HttpStatusCode _get_RequestUriTooLong();
    // Set static field: static public System.Net.HttpStatusCode RequestUriTooLong
    static void _set_RequestUriTooLong(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode UnsupportedMediaType
    static constexpr const int UnsupportedMediaType = 415;
    // Get static field: static public System.Net.HttpStatusCode UnsupportedMediaType
    static System::Net::HttpStatusCode _get_UnsupportedMediaType();
    // Set static field: static public System.Net.HttpStatusCode UnsupportedMediaType
    static void _set_UnsupportedMediaType(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode RequestedRangeNotSatisfiable
    static constexpr const int RequestedRangeNotSatisfiable = 416;
    // Get static field: static public System.Net.HttpStatusCode RequestedRangeNotSatisfiable
    static System::Net::HttpStatusCode _get_RequestedRangeNotSatisfiable();
    // Set static field: static public System.Net.HttpStatusCode RequestedRangeNotSatisfiable
    static void _set_RequestedRangeNotSatisfiable(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode ExpectationFailed
    static constexpr const int ExpectationFailed = 417;
    // Get static field: static public System.Net.HttpStatusCode ExpectationFailed
    static System::Net::HttpStatusCode _get_ExpectationFailed();
    // Set static field: static public System.Net.HttpStatusCode ExpectationFailed
    static void _set_ExpectationFailed(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode UpgradeRequired
    static constexpr const int UpgradeRequired = 426;
    // Get static field: static public System.Net.HttpStatusCode UpgradeRequired
    static System::Net::HttpStatusCode _get_UpgradeRequired();
    // Set static field: static public System.Net.HttpStatusCode UpgradeRequired
    static void _set_UpgradeRequired(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode InternalServerError
    static constexpr const int InternalServerError = 500;
    // Get static field: static public System.Net.HttpStatusCode InternalServerError
    static System::Net::HttpStatusCode _get_InternalServerError();
    // Set static field: static public System.Net.HttpStatusCode InternalServerError
    static void _set_InternalServerError(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode NotImplemented
    static constexpr const int NotImplemented = 501;
    // Get static field: static public System.Net.HttpStatusCode NotImplemented
    static System::Net::HttpStatusCode _get_NotImplemented();
    // Set static field: static public System.Net.HttpStatusCode NotImplemented
    static void _set_NotImplemented(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode BadGateway
    static constexpr const int BadGateway = 502;
    // Get static field: static public System.Net.HttpStatusCode BadGateway
    static System::Net::HttpStatusCode _get_BadGateway();
    // Set static field: static public System.Net.HttpStatusCode BadGateway
    static void _set_BadGateway(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode ServiceUnavailable
    static constexpr const int ServiceUnavailable = 503;
    // Get static field: static public System.Net.HttpStatusCode ServiceUnavailable
    static System::Net::HttpStatusCode _get_ServiceUnavailable();
    // Set static field: static public System.Net.HttpStatusCode ServiceUnavailable
    static void _set_ServiceUnavailable(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode GatewayTimeout
    static constexpr const int GatewayTimeout = 504;
    // Get static field: static public System.Net.HttpStatusCode GatewayTimeout
    static System::Net::HttpStatusCode _get_GatewayTimeout();
    // Set static field: static public System.Net.HttpStatusCode GatewayTimeout
    static void _set_GatewayTimeout(System::Net::HttpStatusCode value);
    // static field const value: static public System.Net.HttpStatusCode HttpVersionNotSupported
    static constexpr const int HttpVersionNotSupported = 505;
    // Get static field: static public System.Net.HttpStatusCode HttpVersionNotSupported
    static System::Net::HttpStatusCode _get_HttpVersionNotSupported();
    // Set static field: static public System.Net.HttpStatusCode HttpVersionNotSupported
    static void _set_HttpVersionNotSupported(System::Net::HttpStatusCode value);
  }; // System.Net.HttpStatusCode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpStatusCode, "System.Net", "HttpStatusCode");
#pragma pack(pop)
