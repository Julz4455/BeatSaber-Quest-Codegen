// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DiffieHellmanUtility/DiffieHellmanKeyPair
#include "GlobalNamespace/DiffieHellmanUtility_DiffieHellmanKeyPair.hpp"
// Including type: DiffieHellmanUtility/DiffieHellmanKeyPair/<>c__DisplayClass5_0
#include "GlobalNamespace/DiffieHellmanUtility_DiffieHellmanKeyPair_--c__DisplayClass5_0.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/DHPrivateKeyParameters.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: DiffieHellmanUtility/DiffieHellmanKeyPair..ctor
GlobalNamespace::DiffieHellmanUtility::DiffieHellmanKeyPair* GlobalNamespace::DiffieHellmanUtility::DiffieHellmanKeyPair::New_ctor(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters, ::Array<uint8_t>* publicKey) {
  return THROW_UNLESS(il2cpp_utils::New<DiffieHellmanUtility::DiffieHellmanKeyPair*>(privateKeyParameters, publicKey));
}
// Autogenerated method: DiffieHellmanUtility/DiffieHellmanKeyPair.get_publicKey
::Array<uint8_t>* GlobalNamespace::DiffieHellmanUtility::DiffieHellmanKeyPair::get_publicKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_publicKey"));
}
// Autogenerated method: DiffieHellmanUtility/DiffieHellmanKeyPair.GetPreMasterSecretAsync
System::Threading::Tasks::Task_1<::Array<uint8_t>*>* GlobalNamespace::DiffieHellmanUtility::DiffieHellmanKeyPair::GetPreMasterSecretAsync(::Array<uint8_t>* clientPublicKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<::Array<uint8_t>*>*>(this, "GetPreMasterSecretAsync", clientPublicKey));
}
