// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.MessageWithRoomList
#include "Oculus/Platform/MessageWithRoomList.hpp"
// Including type: Oculus.Platform.Models.RoomList
#include "Oculus/Platform/Models/RoomList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithRoomList.GetDataFromMessage
Oculus::Platform::Models::RoomList* Oculus::Platform::MessageWithRoomList::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::RoomList*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithRoomList..ctor
Oculus::Platform::MessageWithRoomList* Oculus::Platform::MessageWithRoomList::New_ctor(System::IntPtr c_message) {
  return (MessageWithRoomList*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithRoomList", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithRoomList.GetRoomList
Oculus::Platform::Models::RoomList* Oculus::Platform::MessageWithRoomList::GetRoomList() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::RoomList*>(this, "GetRoomList"));
}
