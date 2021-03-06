// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.IAuthenticationModule
#include "System/Net/IAuthenticationModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Http
namespace Mono::Http {
  // Forward declaring type: NtlmSession
  class NtlmSession;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConditionalWeakTable`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: Mono.Http
namespace Mono::Http {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Http.NtlmClient
  // [] Offset: FFFFFFFF
  class NtlmClient : public ::Il2CppObject/*, public System::Net::IAuthenticationModule*/ {
    public:
    // Nested type: Mono::Http::NtlmClient::$$c
    class $$c;
    // Creating value type constructor for type: NtlmClient
    NtlmClient() noexcept {}
    // Creating interface conversion operator: operator System::Net::IAuthenticationModule
    operator System::Net::IAuthenticationModule() noexcept {
      return *reinterpret_cast<System::Net::IAuthenticationModule*>(this);
    }
    // Get static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Net.HttpWebRequest,Mono.Http.NtlmSession> cache
    static System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest*, Mono::Http::NtlmSession*>* _get_cache();
    // Set static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Net.HttpWebRequest,Mono.Http.NtlmSession> cache
    static void _set_cache(System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest*, Mono::Http::NtlmSession*>* value);
    // static private System.Void .cctor()
    // Offset: 0x149CB6C
    static void _cctor();
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x149C36C
    // Implemented from: System.Net.IAuthenticationModule
    // Base method: System.Net.Authorization IAuthenticationModule::Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    System::Net::Authorization* Authenticate(::Il2CppString* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Net.Authorization PreAuthenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x149CB14
    // Implemented from: System.Net.IAuthenticationModule
    // Base method: System.Net.Authorization IAuthenticationModule::PreAuthenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.String get_AuthenticationType()
    // Offset: 0x149CB1C
    // Implemented from: System.Net.IAuthenticationModule
    // Base method: System.String IAuthenticationModule::get_AuthenticationType()
    ::Il2CppString* get_AuthenticationType();
    // public System.Void .ctor()
    // Offset: 0x149CB64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtlmClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Http::NtlmClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtlmClient*, creationType>()));
    }
  }; // Mono.Http.NtlmClient
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Http::NtlmClient*, "Mono.Http", "NtlmClient");
