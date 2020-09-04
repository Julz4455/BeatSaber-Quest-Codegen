// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.MessageWithPartyUnderCurrentParty
#include "Oculus/Platform/MessageWithPartyUnderCurrentParty.hpp"
// Including type: Oculus.Platform.Models.Party
#include "Oculus/Platform/Models/Party.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithPartyUnderCurrentParty.GetDataFromMessage
Oculus::Platform::Models::Party* Oculus::Platform::MessageWithPartyUnderCurrentParty::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::Party*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithPartyUnderCurrentParty..ctor
Oculus::Platform::MessageWithPartyUnderCurrentParty* Oculus::Platform::MessageWithPartyUnderCurrentParty::New_ctor(System::IntPtr c_message) {
  return (MessageWithPartyUnderCurrentParty*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithPartyUnderCurrentParty", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithPartyUnderCurrentParty.GetParty
Oculus::Platform::Models::Party* Oculus::Platform::MessageWithPartyUnderCurrentParty::GetParty() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::Party*>(this, "GetParty"));
}
