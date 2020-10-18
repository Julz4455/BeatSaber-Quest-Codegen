// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Settings
#include "TMPro/TMP_Settings.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Settings/LineBreakingTable
  class TMP_Settings::LineBreakingTable : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.Dictionary`2<System.Int32,System.Char> leadingCharacters
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>* leadingCharacters;
    // public System.Collections.Generic.Dictionary`2<System.Int32,System.Char> followingCharacters
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>* followingCharacters;
    // public System.Void .ctor()
    // Offset: 0xF8EFBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_Settings::LineBreakingTable* New_ctor();
  }; // TMPro.TMP_Settings/LineBreakingTable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Settings::LineBreakingTable*, "TMPro", "TMP_Settings/LineBreakingTable");
#pragma pack(pop)
