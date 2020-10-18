// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.Security.MobileAuthenticatedStream
#include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Security.Authentication.SslProtocols
#include "System/Security/Authentication/SslProtocols.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: AsyncProtocolResult
  class AsyncProtocolResult;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Autogenerated type: Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47
  struct MobileAuthenticatedStream::$ProcessAuthentication$d__47 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.Boolean serverMode
    // Offset: 0x20
    bool serverMode;
    // public System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate
    // Offset: 0x28
    System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate;
    // public System.String targetHost
    // Offset: 0x30
    ::Il2CppString* targetHost;
    // public Mono.Net.Security.MobileAuthenticatedStream <>4__this
    // Offset: 0x38
    Mono::Net::Security::MobileAuthenticatedStream* $$4__this;
    // public System.Boolean runSynchronously
    // Offset: 0x40
    bool runSynchronously;
    // public System.Security.Authentication.SslProtocols enabledProtocols
    // Offset: 0x44
    System::Security::Authentication::SslProtocols enabledProtocols;
    // public System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates
    // Offset: 0x48
    System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates;
    // public System.Boolean clientCertRequired
    // Offset: 0x50
    bool clientCertRequired;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Mono.Net.Security.AsyncProtocolResult> <>u__1
    // Offset: 0x58
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<Mono::Net::Security::AsyncProtocolResult*>::ConfiguredTaskAwaiter $$u__1;
    // Creating value type constructor for type: $ProcessAuthentication$d__47
    constexpr $ProcessAuthentication$d__47(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, bool serverMode_ = {}, System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate_ = {}, ::Il2CppString* targetHost_ = {}, Mono::Net::Security::MobileAuthenticatedStream* $$4__this_ = {}, bool runSynchronously_ = {}, System::Security::Authentication::SslProtocols enabledProtocols_ = {}, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates_ = {}, bool clientCertRequired_ = {}, typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<Mono::Net::Security::AsyncProtocolResult*>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, serverMode{serverMode_}, serverCertificate{serverCertificate_}, targetHost{targetHost_}, $$4__this{$$4__this_}, runSynchronously{runSynchronously_}, enabledProtocols{enabledProtocols_}, clientCertificates{clientCertificates_}, clientCertRequired{clientCertRequired_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xDB3194
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDB319C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47, "Mono.Net.Security", "MobileAuthenticatedStream/<ProcessAuthentication>d__47");
#pragma pack(pop)
