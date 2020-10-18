// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Layers.Crc32cLayer
#include "LiteNetLib/Layers/Crc32cLayer.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.Layers.Crc32cLayer..ctor
LiteNetLib::Layers::Crc32cLayer* LiteNetLib::Layers::Crc32cLayer::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<Crc32cLayer*>());
}
// Autogenerated method: LiteNetLib.Layers.Crc32cLayer.ProcessInboundPacket
void LiteNetLib::Layers::Crc32cLayer::ProcessInboundPacket(System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>*& data, int& offset, int& length) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessInboundPacket", remoteEndPoint, data, offset, length));
}
// Autogenerated method: LiteNetLib.Layers.Crc32cLayer.ProcessOutBoundPacket
void LiteNetLib::Layers::Crc32cLayer::ProcessOutBoundPacket(System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>*& data, int& offset, int& length) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessOutBoundPacket", remoteEndPoint, data, offset, length));
}
