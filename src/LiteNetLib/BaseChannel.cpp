// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: LiteNetLib.BaseChannel
#include "LiteNetLib/BaseChannel.hpp"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
// Including type: System.Collections.Generic.Queue`1
#include "System/Collections/Generic/Queue_1.hpp"
// Including type: LiteNetLib.NetPacket
#include "LiteNetLib/NetPacket.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.BaseChannel..ctor
LiteNetLib::BaseChannel* LiteNetLib::BaseChannel::New_ctor(LiteNetLib::NetPeer* peer) {
  return THROW_UNLESS(il2cpp_utils::New<BaseChannel*>(peer));
}
// Autogenerated method: LiteNetLib.BaseChannel.get_PacketsInQueue
int LiteNetLib::BaseChannel::get_PacketsInQueue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_PacketsInQueue"));
}
// Autogenerated method: LiteNetLib.BaseChannel.AddToQueue
void LiteNetLib::BaseChannel::AddToQueue(LiteNetLib::NetPacket* packet) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddToQueue", packet));
}
// Autogenerated method: LiteNetLib.BaseChannel.SendNextPackets
void LiteNetLib::BaseChannel::SendNextPackets() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendNextPackets"));
}
// Autogenerated method: LiteNetLib.BaseChannel.ProcessPacket
bool LiteNetLib::BaseChannel::ProcessPacket(LiteNetLib::NetPacket* packet) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ProcessPacket", packet));
}
