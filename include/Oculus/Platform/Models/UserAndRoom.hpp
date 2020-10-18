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
  // Forward declaring type: Room
  class Room;
  // Forward declaring type: User
  class User;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.UserAndRoom
  class UserAndRoom : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.Room RoomOptional
    // Offset: 0x10
    Oculus::Platform::Models::Room* RoomOptional;
    // public readonly Oculus.Platform.Models.Room Room
    // Offset: 0x18
    Oculus::Platform::Models::Room* Room;
    // public readonly Oculus.Platform.Models.User User
    // Offset: 0x20
    Oculus::Platform::Models::User* User;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x136BA80
    static UserAndRoom* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.UserAndRoom
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::UserAndRoom*, "Oculus.Platform.Models", "UserAndRoom");
#pragma pack(pop)
