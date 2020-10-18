// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.TripleDESTransform
#include "System/Security/Cryptography/TripleDESTransform.hpp"
// Including type: System.Security.Cryptography.DESTransform
#include "System/Security/Cryptography/DESTransform.hpp"
// Including type: System.Security.Cryptography.TripleDES
#include "System/Security/Cryptography/TripleDES.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.TripleDESTransform..ctor
System::Security::Cryptography::TripleDESTransform* System::Security::Cryptography::TripleDESTransform::New_ctor(System::Security::Cryptography::TripleDES* algo, bool encryption, ::Array<uint8_t>* key, ::Array<uint8_t>* iv) {
  return THROW_UNLESS(il2cpp_utils::New<TripleDESTransform*>(algo, encryption, key, iv));
}
// Autogenerated method: System.Security.Cryptography.TripleDESTransform.GetStrongKey
::Array<uint8_t>* System::Security::Cryptography::TripleDESTransform::GetStrongKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System.Security.Cryptography", "TripleDESTransform", "GetStrongKey"));
}
// Autogenerated method: System.Security.Cryptography.TripleDESTransform.ECB
void System::Security::Cryptography::TripleDESTransform::ECB(::Array<uint8_t>* input, ::Array<uint8_t>* output) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ECB", input, output));
}
