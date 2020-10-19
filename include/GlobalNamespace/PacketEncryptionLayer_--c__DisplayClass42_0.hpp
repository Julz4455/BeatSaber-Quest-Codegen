// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PacketEncryptionLayer/<>c__DisplayClass42_0
  class PacketEncryptionLayer::$$c__DisplayClass42_0 : public ::Il2CppObject {
    public:
    // public System.Net.IPEndPoint endPoint
    // Offset: 0x10
    System::Net::IPEndPoint* endPoint;
    // Creating conversion operator: operator System::Net::IPEndPoint*
    constexpr operator System::Net::IPEndPoint*() const noexcept {
      return endPoint;
    }
    // System.Int32 <GetPotentialPendingEncryptionStates>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,PacketEncryptionLayer/EncryptionState> kvp)
    // Offset: 0x21F691C
    int $GetPotentialPendingEncryptionStates$b__0(System::Collections::Generic::KeyValuePair_2<int, GlobalNamespace::PacketEncryptionLayer::EncryptionState*> kvp);
    // public System.Void .ctor()
    // Offset: 0x21F4718
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PacketEncryptionLayer::$$c__DisplayClass42_0* New_ctor();
  }; // PacketEncryptionLayer/<>c__DisplayClass42_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::$$c__DisplayClass42_0*, "", "PacketEncryptionLayer/<>c__DisplayClass42_0");
#pragma pack(pop)