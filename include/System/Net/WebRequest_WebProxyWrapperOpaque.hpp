// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.Net.IWebProxy
#include "System/Net/IWebProxy.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebProxy
  class WebProxy;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.WebRequest/WebProxyWrapperOpaque
  class WebRequest::WebProxyWrapperOpaque : public ::Il2CppObject, public System::Net::IWebProxy {
    public:
    // protected readonly System.Net.WebProxy webProxy
    // Offset: 0x10
    System::Net::WebProxy* webProxy;
    // Creating conversion operator: operator System::Net::WebProxy*
    constexpr operator System::Net::WebProxy*() const noexcept {
      return webProxy;
    }
    // public System.Uri GetProxy(System.Uri destination)
    // Offset: 0x13C9D90
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Uri IWebProxy::GetProxy(System.Uri destination)
    System::Uri* GetProxy(System::Uri* destination);
    // public System.Boolean IsBypassed(System.Uri host)
    // Offset: 0x13C9DA8
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Boolean IWebProxy::IsBypassed(System.Uri host)
    bool IsBypassed(System::Uri* host);
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x13C9DC0
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Net.ICredentials IWebProxy::get_Credentials()
    System::Net::ICredentials* get_Credentials();
  }; // System.Net.WebRequest/WebProxyWrapperOpaque
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebRequest::WebProxyWrapperOpaque*, "System.Net", "WebRequest/WebProxyWrapperOpaque");
#pragma pack(pop)
