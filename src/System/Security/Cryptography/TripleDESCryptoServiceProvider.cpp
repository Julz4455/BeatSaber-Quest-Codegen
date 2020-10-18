// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.TripleDESCryptoServiceProvider
#include "System/Security/Cryptography/TripleDESCryptoServiceProvider.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.TripleDESCryptoServiceProvider..ctor
System::Security::Cryptography::TripleDESCryptoServiceProvider* System::Security::Cryptography::TripleDESCryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<TripleDESCryptoServiceProvider*>());
}
// Autogenerated method: System.Security.Cryptography.TripleDESCryptoServiceProvider.CreateEncryptor
System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateEncryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::ICryptoTransform*>(this, "CreateEncryptor", rgbKey, rgbIV));
}
// Autogenerated method: System.Security.Cryptography.TripleDESCryptoServiceProvider.CreateDecryptor
System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateDecryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::ICryptoTransform*>(this, "CreateDecryptor", rgbKey, rgbIV));
}
// Autogenerated method: System.Security.Cryptography.TripleDESCryptoServiceProvider.GenerateKey
void System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateKey() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GenerateKey"));
}
// Autogenerated method: System.Security.Cryptography.TripleDESCryptoServiceProvider.GenerateIV
void System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateIV() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GenerateIV"));
}
