// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: GatewayIPAddressInformation
  class GatewayIPAddressInformation;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: Collection`1<T>
  template<typename T>
  class Collection_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.GatewayIPAddressInformationCollection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CB7550
  class GatewayIPAddressInformationCollection : public ::Il2CppObject/*, public System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*/ {
    public:
    // private System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.GatewayIPAddressInformation> addresses
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>* addresses;
    // Field size check
    static_assert(sizeof(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*) == 0x8);
    // Creating value type constructor for type: GatewayIPAddressInformationCollection
    GatewayIPAddressInformationCollection(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>* addresses_ = {}) noexcept : addresses{addresses_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>
    operator System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*>(this);
    }
    // Creating conversion operator: operator System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*
    constexpr operator System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*() const noexcept {
      return addresses;
    }
    // public System.Void CopyTo(System.Net.NetworkInformation.GatewayIPAddressInformation[] array, System.Int32 offset)
    // Offset: 0x135321C
    void CopyTo(::Array<System::Net::NetworkInformation::GatewayIPAddressInformation*>* array, int offset);
    // System.Void InternalAdd(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x135336C
    void InternalAdd(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // public System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.GatewayIPAddressInformation> GetEnumerator()
    // Offset: 0x135343C
    System::Collections::Generic::IEnumerator_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>* GetEnumerator();
    // protected internal System.Void .ctor()
    // Offset: 0x13531A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GatewayIPAddressInformationCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::GatewayIPAddressInformationCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GatewayIPAddressInformationCollection*, creationType>()));
    }
    // public System.Int32 get_Count()
    // Offset: 0x135328C
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection_1::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_Count
    // Maps to method: get_Count
    int System_Collections_Generic_ICollection_1_get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x13532E4
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::get_IsReadOnly()
    bool get_IsReadOnly();
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_IsReadOnly
    // Maps to method: get_IsReadOnly
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly();
    // public System.Void Add(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x13532EC
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::Add(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    void Add(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Add
    // Maps to method: Add
    void System_Collections_Generic_ICollection_1_Add(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // public System.Boolean Contains(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x13533D4
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::Contains(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    bool Contains(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Contains
    // Maps to method: Contains
    bool System_Collections_Generic_ICollection_1_Contains(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1353494
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Boolean Remove(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x13534A4
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::Remove(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    bool Remove(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Remove
    // Maps to method: Remove
    bool System_Collections_Generic_ICollection_1_Remove(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // public System.Void Clear()
    // Offset: 0x1353524
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::Clear()
    void Clear();
    // Creating proxy method: System_Collections_Generic_ICollection_1_Clear
    // Maps to method: Clear
    void System_Collections_Generic_ICollection_1_Clear();
  }; // System.Net.NetworkInformation.GatewayIPAddressInformationCollection
  #pragma pack(pop)
  static check_size<sizeof(GatewayIPAddressInformationCollection), 16 + sizeof(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*)> __System_Net_NetworkInformation_GatewayIPAddressInformationCollectionSizeCheck;
  static_assert(sizeof(GatewayIPAddressInformationCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*, "System.Net.NetworkInformation", "GatewayIPAddressInformationCollection");
