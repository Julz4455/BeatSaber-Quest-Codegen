// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.MessageWithUserAndRoomList
#include "Oculus/Platform/MessageWithUserAndRoomList.hpp"
// Including type: Oculus.Platform.Models.UserAndRoomList
#include "Oculus/Platform/Models/UserAndRoomList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithUserAndRoomList.GetDataFromMessage
Oculus::Platform::Models::UserAndRoomList* Oculus::Platform::MessageWithUserAndRoomList::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::UserAndRoomList*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithUserAndRoomList..ctor
Oculus::Platform::MessageWithUserAndRoomList* Oculus::Platform::MessageWithUserAndRoomList::New_ctor(System::IntPtr c_message) {
  return (MessageWithUserAndRoomList*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithUserAndRoomList", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithUserAndRoomList.GetUserAndRoomList
Oculus::Platform::Models::UserAndRoomList* Oculus::Platform::MessageWithUserAndRoomList::GetUserAndRoomList() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::UserAndRoomList*>(this, "GetUserAndRoomList"));
}
