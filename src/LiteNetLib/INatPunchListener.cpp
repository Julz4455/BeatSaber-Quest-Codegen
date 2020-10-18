// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.INatPunchListener
#include "LiteNetLib/INatPunchListener.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: LiteNetLib.NatAddressType
#include "LiteNetLib/NatAddressType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.INatPunchListener.OnNatIntroductionRequest
void LiteNetLib::INatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionRequest(System::Net::IPEndPoint* localEndPoint, System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* token) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnNatIntroductionRequest", localEndPoint, remoteEndPoint, token));
}
// Autogenerated method: LiteNetLib.INatPunchListener.OnNatIntroductionSuccess
void LiteNetLib::INatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionSuccess(System::Net::IPEndPoint* targetEndPoint, LiteNetLib::NatAddressType type, ::Il2CppString* token) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnNatIntroductionSuccess", targetEndPoint, type, token));
}
