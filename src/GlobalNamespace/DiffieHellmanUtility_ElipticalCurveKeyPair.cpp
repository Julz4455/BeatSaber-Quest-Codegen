// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DiffieHellmanUtility/ElipticalCurveKeyPair
#include "GlobalNamespace/DiffieHellmanUtility_ElipticalCurveKeyPair.hpp"
// Including type: DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0
#include "GlobalNamespace/DiffieHellmanUtility_ElipticalCurveKeyPair_--c__DisplayClass5_0.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/ECPrivateKeyParameters.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: DiffieHellmanUtility/ElipticalCurveKeyPair..ctor
GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair* GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::New_ctor(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters, ::Array<uint8_t>* publicKey) {
  return THROW_UNLESS(il2cpp_utils::New<DiffieHellmanUtility::ElipticalCurveKeyPair*>(privateKeyParameters, publicKey));
}
// Autogenerated method: DiffieHellmanUtility/ElipticalCurveKeyPair.get_publicKey
::Array<uint8_t>* GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::get_publicKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_publicKey"));
}
// Autogenerated method: DiffieHellmanUtility/ElipticalCurveKeyPair.GetPreMasterSecretAsync
System::Threading::Tasks::Task_1<::Array<uint8_t>*>* GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::GetPreMasterSecretAsync(::Array<uint8_t>* clientPublicKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<::Array<uint8_t>*>*>(this, "GetPreMasterSecretAsync", clientPublicKey));
}
