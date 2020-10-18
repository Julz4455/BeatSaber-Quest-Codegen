// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
  // Forward declaring type: Room
  class Room;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
  class MatchmakingEnqueueResultAndRoom : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.MatchmakingEnqueueResult MatchmakingEnqueueResult
    // Offset: 0x10
    Oculus::Platform::Models::MatchmakingEnqueueResult* MatchmakingEnqueueResult;
    // public readonly Oculus.Platform.Models.Room Room
    // Offset: 0x18
    Oculus::Platform::Models::Room* Room;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1366028
    static MatchmakingEnqueueResultAndRoom* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*, "Oculus.Platform.Models", "MatchmakingEnqueueResultAndRoom");
#pragma pack(pop)
