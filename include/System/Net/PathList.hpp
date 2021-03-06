// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: SortedList
  class SortedList;
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.PathList
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CB7448
  class PathList : public ::Il2CppObject {
    public:
    // Nested type: System::Net::PathList::PathListComparer
    class PathListComparer;
    // private System.Collections.SortedList m_list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::SortedList* m_list;
    // Field size check
    static_assert(sizeof(System::Collections::SortedList*) == 0x8);
    // Creating value type constructor for type: PathList
    PathList(System::Collections::SortedList* m_list_ = {}) noexcept : m_list{m_list_} {}
    // Creating conversion operator: operator System::Collections::SortedList*
    constexpr operator System::Collections::SortedList*() const noexcept {
      return m_list;
    }
    // public System.Int32 get_Count()
    // Offset: 0x1358658
    int get_Count();
    // public System.Int32 GetCookiesCount()
    // Offset: 0x135867C
    int GetCookiesCount();
    // public System.Collections.ICollection get_Values()
    // Offset: 0x1358A30
    System::Collections::ICollection* get_Values();
    // public System.Object get_Item(System.String s)
    // Offset: 0x1358A54
    ::Il2CppObject* get_Item(::Il2CppString* s);
    // public System.Void set_Item(System.String s, System.Object value)
    // Offset: 0x1358A78
    void set_Item(::Il2CppString* s, ::Il2CppObject* value);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1358B5C
    System::Collections::IEnumerator* GetEnumerator();
    // public System.Object get_SyncRoot()
    // Offset: 0x1358A0C
    ::Il2CppObject* get_SyncRoot();
    // public System.Void .ctor()
    // Offset: 0x1358588
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::PathList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathList*, creationType>()));
    }
  }; // System.Net.PathList
  #pragma pack(pop)
  static check_size<sizeof(PathList), 16 + sizeof(System::Collections::SortedList*)> __System_Net_PathListSizeCheck;
  static_assert(sizeof(PathList) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::PathList*, "System.Net", "PathList");
