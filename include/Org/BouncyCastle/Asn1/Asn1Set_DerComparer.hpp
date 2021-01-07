// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Set
#include "Org/BouncyCastle/Asn1/Asn1Set.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x10
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1Set/DerComparer
  // [] Offset: FFFFFFFF
  class Asn1Set::DerComparer : public ::Il2CppObject/*, public System::Collections::IComparer*/ {
    public:
    // Creating value type constructor for type: DerComparer
    DerComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // public System.Int32 Compare(System.Object x, System.Object y)
    // Offset: 0x1376EEC
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object x, System.Object y)
    int Compare(::Il2CppObject* x, ::Il2CppObject* y);
    // Creating proxy method: System_Collections_IComparer_Compare
    // Maps to method: Compare
    int System_Collections_IComparer_Compare(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Void .ctor()
    // Offset: 0x1376ED8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1Set::DerComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1").WithContext("DerComparer").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1Set::DerComparer*, creationType>()));
    }
  }; // Org.BouncyCastle.Asn1.Asn1Set/DerComparer
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Set::DerComparer*, "Org.BouncyCastle.Asn1", "Asn1Set/DerComparer");
#pragma pack(pop)
