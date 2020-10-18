// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DiffieHellmanUtility
#include "GlobalNamespace/DiffieHellmanUtility.hpp"
// Including type: IDiffieHellmanKeyPair
#include "GlobalNamespace/IDiffieHellmanKeyPair.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHPrivateKeyParameters
  class DHPrivateKeyParameters;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DiffieHellmanUtility/DiffieHellmanKeyPair
  class DiffieHellmanUtility::DiffieHellmanKeyPair : public ::Il2CppObject, public GlobalNamespace::IDiffieHellmanKeyPair {
    public:
    // Nested type: GlobalNamespace::DiffieHellmanUtility::DiffieHellmanKeyPair::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // private readonly Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters _privateKeyParameters
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters;
    // private readonly System.Byte[] _publicKey
    // Offset: 0x18
    ::Array<uint8_t>* publicKey;
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters privateKeyParameters, System.Byte[] publicKey)
    // Offset: 0x1161E74
    static DiffieHellmanUtility::DiffieHellmanKeyPair* New_ctor(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters, ::Array<uint8_t>* publicKey);
    // public System.Byte[] get_publicKey()
    // Offset: 0x1162434
    // Implemented from: IDiffieHellmanKeyPair
    // Base method: System.Byte[] IDiffieHellmanKeyPair::get_publicKey()
    ::Array<uint8_t>* get_publicKey();
    // public System.Threading.Tasks.Task`1<System.Byte[]> GetPreMasterSecretAsync(System.Byte[] clientPublicKey)
    // Offset: 0x116243C
    // Implemented from: IDiffieHellmanKeyPair
    // Base method: System.Threading.Tasks.Task`1<System.Byte[]> IDiffieHellmanKeyPair::GetPreMasterSecretAsync(System.Byte[] clientPublicKey)
    System::Threading::Tasks::Task_1<::Array<uint8_t>*>* GetPreMasterSecretAsync(::Array<uint8_t>* clientPublicKey);
  }; // DiffieHellmanUtility/DiffieHellmanKeyPair
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DiffieHellmanUtility::DiffieHellmanKeyPair*, "", "DiffieHellmanUtility/DiffieHellmanKeyPair");
#pragma pack(pop)
