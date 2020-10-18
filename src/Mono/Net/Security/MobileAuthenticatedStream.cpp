// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.Security.MobileAuthenticatedStream
#include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream/OperationType
#include "Mono/Net/Security/MobileAuthenticatedStream_OperationType.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47
#include "Mono/Net/Security/MobileAuthenticatedStream_-ProcessAuthentication-d__47.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58
#include "Mono/Net/Security/MobileAuthenticatedStream_-StartOperation-d__58.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0
#include "Mono/Net/Security/MobileAuthenticatedStream_--c__DisplayClass66_0.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66
#include "Mono/Net/Security/MobileAuthenticatedStream_-InnerRead-d__66.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67
#include "Mono/Net/Security/MobileAuthenticatedStream_-InnerWrite-d__67.hpp"
// Including type: Mono.Net.Security.MobileTlsContext
#include "Mono/Net/Security/MobileTlsContext.hpp"
// Including type: System.Runtime.ExceptionServices.ExceptionDispatchInfo
#include "System/Runtime/ExceptionServices/ExceptionDispatchInfo.hpp"
// Including type: Mono.Net.Security.AsyncProtocolRequest
#include "Mono/Net/Security/AsyncProtocolRequest.hpp"
// Including type: Mono.Net.Security.BufferOffsetSize2
#include "Mono/Net/Security/BufferOffsetSize2.hpp"
// Including type: System.Net.Security.SslStream
#include "System/Net/Security/SslStream.hpp"
// Including type: Mono.Security.Interface.MonoTlsSettings
#include "Mono/Security/Interface/MonoTlsSettings.hpp"
// Including type: Mono.Security.Interface.MonoTlsProvider
#include "Mono/Security/Interface/MonoTlsProvider.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Security.Authentication.SslProtocols
#include "System/Security/Authentication/SslProtocols.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate
#include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System/Security/Cryptography/X509Certificates/X509CertificateCollection.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: Mono.Net.Security.BufferOffsetSize
#include "Mono/Net/Security/BufferOffsetSize.hpp"
// Including type: Mono.Net.Security.AsyncOperationStatus
#include "Mono/Net/Security/AsyncOperationStatus.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: System.IO.SeekOrigin
#include "System/IO/SeekOrigin.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 uniqueNameInteger
int Mono::Net::Security::MobileAuthenticatedStream::_get_uniqueNameInteger() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("Mono.Net.Security", "MobileAuthenticatedStream", "uniqueNameInteger"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 uniqueNameInteger
void Mono::Net::Security::MobileAuthenticatedStream::_set_uniqueNameInteger(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Net.Security", "MobileAuthenticatedStream", "uniqueNameInteger", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 nextId
int Mono::Net::Security::MobileAuthenticatedStream::_get_nextId() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("Mono.Net.Security", "MobileAuthenticatedStream", "nextId"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 nextId
void Mono::Net::Security::MobileAuthenticatedStream::_set_nextId(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Net.Security", "MobileAuthenticatedStream", "nextId", value));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream..ctor
Mono::Net::Security::MobileAuthenticatedStream* Mono::Net::Security::MobileAuthenticatedStream::New_ctor(System::IO::Stream* innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream* owner, Mono::Security::Interface::MonoTlsSettings* settings, Mono::Security::Interface::MonoTlsProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::New<MobileAuthenticatedStream*>(innerStream, leaveInnerStreamOpen, owner, settings, provider));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_Settings
Mono::Security::Interface::MonoTlsSettings* Mono::Net::Security::MobileAuthenticatedStream::get_Settings() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::MonoTlsSettings*>(this, "get_Settings"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_Provider
Mono::Security::Interface::MonoTlsProvider* Mono::Net::Security::MobileAuthenticatedStream::get_Provider() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::MonoTlsProvider*>(this, "get_Provider"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.CheckThrow
void Mono::Net::Security::MobileAuthenticatedStream::CheckThrow(bool authSuccessCheck, bool shutdownCheck) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckThrow", authSuccessCheck, shutdownCheck));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.GetSSPIException
System::Exception* Mono::Net::Security::MobileAuthenticatedStream::GetSSPIException(System::Exception* e) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>("Mono.Net.Security", "MobileAuthenticatedStream", "GetSSPIException", e));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.GetIOException
System::Exception* Mono::Net::Security::MobileAuthenticatedStream::GetIOException(System::Exception* e, ::Il2CppString* message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>("Mono.Net.Security", "MobileAuthenticatedStream", "GetIOException", e, message));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.SetException
System::Runtime::ExceptionServices::ExceptionDispatchInfo* Mono::Net::Security::MobileAuthenticatedStream::SetException(System::Exception* e) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, "SetException", e));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.ProcessAuthentication
System::Threading::Tasks::Task* Mono::Net::Security::MobileAuthenticatedStream::ProcessAuthentication(bool runSynchronously, bool serverMode, ::Il2CppString* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool clientCertRequired) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "ProcessAuthentication", runSynchronously, serverMode, targetHost, enabledProtocols, serverCertificate, clientCertificates, clientCertRequired));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.CreateContext
Mono::Net::Security::MobileTlsContext* Mono::Net::Security::MobileAuthenticatedStream::CreateContext(bool serverMode, ::Il2CppString* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Net::Security::MobileTlsContext*>(this, "CreateContext", serverMode, targetHost, enabledProtocols, serverCertificate, clientCertificates, askForClientCert));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.StartOperation
System::Threading::Tasks::Task_1<int>* Mono::Net::Security::MobileAuthenticatedStream::StartOperation(Mono::Net::Security::MobileAuthenticatedStream::OperationType type, Mono::Net::Security::AsyncProtocolRequest* asyncRequest, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<int>*>(this, "StartOperation", type, asyncRequest, cancellationToken));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.InternalRead
int Mono::Net::Security::MobileAuthenticatedStream::InternalRead(::Array<uint8_t>* buffer, int offset, int size, bool& outWantMore) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "InternalRead", buffer, offset, size, outWantMore));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.InternalRead
System::ValueTuple_2<int, bool> Mono::Net::Security::MobileAuthenticatedStream::InternalRead(Mono::Net::Security::AsyncProtocolRequest* asyncRequest, Mono::Net::Security::BufferOffsetSize* internalBuffer, ::Array<uint8_t>* buffer, int offset, int size) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::ValueTuple_2<int, bool>>(this, "InternalRead", asyncRequest, internalBuffer, buffer, offset, size)));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.InternalWrite
bool Mono::Net::Security::MobileAuthenticatedStream::InternalWrite(::Array<uint8_t>* buffer, int offset, int size) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "InternalWrite", buffer, offset, size));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.InternalWrite
bool Mono::Net::Security::MobileAuthenticatedStream::InternalWrite(Mono::Net::Security::AsyncProtocolRequest* asyncRequest, Mono::Net::Security::BufferOffsetSize2* internalBuffer, ::Array<uint8_t>* buffer, int offset, int size) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "InternalWrite", asyncRequest, internalBuffer, buffer, offset, size));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.InnerRead
System::Threading::Tasks::Task_1<int>* Mono::Net::Security::MobileAuthenticatedStream::InnerRead(bool sync, int requestedSize, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<int>*>(this, "InnerRead", sync, requestedSize, cancellationToken));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.InnerWrite
System::Threading::Tasks::Task* Mono::Net::Security::MobileAuthenticatedStream::InnerWrite(bool sync, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "InnerWrite", sync, cancellationToken));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.ProcessHandshake
Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::MobileAuthenticatedStream::ProcessHandshake(Mono::Net::Security::AsyncOperationStatus status) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Net::Security::AsyncOperationStatus>(this, "ProcessHandshake", status));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.ProcessRead
System::ValueTuple_2<int, bool> Mono::Net::Security::MobileAuthenticatedStream::ProcessRead(Mono::Net::Security::BufferOffsetSize* userBuffer) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::ValueTuple_2<int, bool>>(this, "ProcessRead", userBuffer)));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.ProcessWrite
System::ValueTuple_2<int, bool> Mono::Net::Security::MobileAuthenticatedStream::ProcessWrite(Mono::Net::Security::BufferOffsetSize* userBuffer) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::ValueTuple_2<int, bool>>(this, "ProcessWrite", userBuffer)));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.<InnerWrite>b__67_0
void Mono::Net::Security::MobileAuthenticatedStream::$InnerWrite$b__67_0() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<InnerWrite>b__67_0"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.AuthenticateAsClient
void Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClient(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AuthenticateAsClient", targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.AuthenticateAsServer
void Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsServer(System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AuthenticateAsServer", serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_AuthenticatedStream
System::Net::Security::AuthenticatedStream* Mono::Net::Security::MobileAuthenticatedStream::get_AuthenticatedStream() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Security::AuthenticatedStream*>(this, "get_AuthenticatedStream"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.BeginRead
System::IAsyncResult* Mono::Net::Security::MobileAuthenticatedStream::BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginRead", buffer, offset, count, asyncCallback, asyncState));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.EndRead
int Mono::Net::Security::MobileAuthenticatedStream::EndRead(System::IAsyncResult* asyncResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "EndRead", asyncResult));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.BeginWrite
System::IAsyncResult* Mono::Net::Security::MobileAuthenticatedStream::BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginWrite", buffer, offset, count, asyncCallback, asyncState));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.EndWrite
void Mono::Net::Security::MobileAuthenticatedStream::EndWrite(System::IAsyncResult* asyncResult) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndWrite", asyncResult));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.Read
int Mono::Net::Security::MobileAuthenticatedStream::Read(::Array<uint8_t>* buffer, int offset, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read", buffer, offset, count));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.Write
void Mono::Net::Security::MobileAuthenticatedStream::Write(::Array<uint8_t>* buffer, int offset, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", buffer, offset, count));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.ReadAsync
System::Threading::Tasks::Task_1<int>* Mono::Net::Security::MobileAuthenticatedStream::ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<int>*>(this, "ReadAsync", buffer, offset, count, cancellationToken));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.WriteAsync
System::Threading::Tasks::Task* Mono::Net::Security::MobileAuthenticatedStream::WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "WriteAsync", buffer, offset, count, cancellationToken));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_IsAuthenticated
bool Mono::Net::Security::MobileAuthenticatedStream::get_IsAuthenticated() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsAuthenticated"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.Dispose
void Mono::Net::Security::MobileAuthenticatedStream::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.Flush
void Mono::Net::Security::MobileAuthenticatedStream::Flush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_InternalLocalCertificate
System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Net::Security::MobileAuthenticatedStream::get_InternalLocalCertificate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::X509Certificates::X509Certificate*>(this, "get_InternalLocalCertificate"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.Seek
int64_t Mono::Net::Security::MobileAuthenticatedStream::Seek(int64_t offset, System::IO::SeekOrigin origin) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "Seek", offset, origin));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.SetLength
void Mono::Net::Security::MobileAuthenticatedStream::SetLength(int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLength", value));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_CanRead
bool Mono::Net::Security::MobileAuthenticatedStream::get_CanRead() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanRead"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_CanWrite
bool Mono::Net::Security::MobileAuthenticatedStream::get_CanWrite() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanWrite"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_CanSeek
bool Mono::Net::Security::MobileAuthenticatedStream::get_CanSeek() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanSeek"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_Length
int64_t Mono::Net::Security::MobileAuthenticatedStream::get_Length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_Length"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_Position
int64_t Mono::Net::Security::MobileAuthenticatedStream::get_Position() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_Position"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.set_Position
void Mono::Net::Security::MobileAuthenticatedStream::set_Position(int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Position", value));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_ReadTimeout
int Mono::Net::Security::MobileAuthenticatedStream::get_ReadTimeout() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_ReadTimeout"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream.get_WriteTimeout
int Mono::Net::Security::MobileAuthenticatedStream::get_WriteTimeout() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_WriteTimeout"));
}
// Autogenerated method: Mono.Net.Security.MobileAuthenticatedStream..cctor
void Mono::Net::Security::MobileAuthenticatedStream::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Mono.Net.Security", "MobileAuthenticatedStream", ".cctor"));
}
