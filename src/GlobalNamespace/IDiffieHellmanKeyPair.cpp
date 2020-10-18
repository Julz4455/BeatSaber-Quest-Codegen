// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IDiffieHellmanKeyPair
#include "GlobalNamespace/IDiffieHellmanKeyPair.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: IDiffieHellmanKeyPair.get_publicKey
::Array<uint8_t>* GlobalNamespace::IDiffieHellmanKeyPair::get_publicKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_publicKey"));
}
// Autogenerated method: IDiffieHellmanKeyPair.GetPreMasterSecretAsync
System::Threading::Tasks::Task_1<::Array<uint8_t>*>* GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecretAsync(::Array<uint8_t>* clientPublicKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<::Array<uint8_t>*>*>(this, "GetPreMasterSecretAsync", clientPublicKey));
}
