// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NetManager/NetPeerEnumerator
#include "LiteNetLib/NetManager_NetPeerEnumerator.hpp"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.NetManager/NetPeerEnumerator..ctor
LiteNetLib::NetManager::NetPeerEnumerator::NetPeerEnumerator(LiteNetLib::NetPeer* p) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, ".ctor", p));
}
// Autogenerated method: LiteNetLib.NetManager/NetPeerEnumerator.Dispose
void LiteNetLib::NetManager::NetPeerEnumerator::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Dispose"));
}
void LiteNetLib::NetManager::NetPeerEnumerator::System_IDisposable_Dispose() {
  LiteNetLib::NetManager::NetPeerEnumerator::Dispose();
}
// Autogenerated method: LiteNetLib.NetManager/NetPeerEnumerator.MoveNext
bool LiteNetLib::NetManager::NetPeerEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "MoveNext"));
}
bool LiteNetLib::NetManager::NetPeerEnumerator::System_Collections_IEnumerator_MoveNext() {
  return LiteNetLib::NetManager::NetPeerEnumerator::MoveNext();
}
// Autogenerated method: LiteNetLib.NetManager/NetPeerEnumerator.Reset
void LiteNetLib::NetManager::NetPeerEnumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Reset"));
}
void LiteNetLib::NetManager::NetPeerEnumerator::System_Collections_IEnumerator_Reset() {
  LiteNetLib::NetManager::NetPeerEnumerator::Reset();
}
// Autogenerated method: LiteNetLib.NetManager/NetPeerEnumerator.get_Current
LiteNetLib::NetPeer* LiteNetLib::NetManager::NetPeerEnumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<LiteNetLib::NetPeer*>(*this, "get_Current"));
}
LiteNetLib::NetPeer* LiteNetLib::NetManager::NetPeerEnumerator::System_Collections_Generic_IEnumerator_1_get_Current() {
  return LiteNetLib::NetManager::NetPeerEnumerator::get_Current();
}
// Autogenerated method: LiteNetLib.NetManager/NetPeerEnumerator.System.Collections.IEnumerator.get_Current
::Il2CppObject* LiteNetLib::NetManager::NetPeerEnumerator::System_Collections_IEnumerator_get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(*this, "System.Collections.IEnumerator.get_Current"));
}
