// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.LeaderboardEntryList
  class LeaderboardEntryList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::LeaderboardEntry*> {
    public:
    // public readonly System.UInt64 TotalCount
    // Offset: 0x28
    uint64_t TotalCount;
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return TotalCount;
    }
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0x1364C6C
    static LeaderboardEntryList* New_ctor(System::IntPtr a);
  }; // Oculus.Platform.Models.LeaderboardEntryList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LeaderboardEntryList*, "Oculus.Platform.Models", "LeaderboardEntryList");
#pragma pack(pop)
