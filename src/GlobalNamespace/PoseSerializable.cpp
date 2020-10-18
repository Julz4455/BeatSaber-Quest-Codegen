// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PoseSerializable
#include "GlobalNamespace/PoseSerializable.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PoseSerializable..ctor
// ABORTED elsewhere.  GlobalNamespace::PoseSerializable::PoseSerializable(GlobalNamespace::Vector3Serializable position, GlobalNamespace::QuaternionSerializable rotation)
// Autogenerated method: PoseSerializable.get_identity
GlobalNamespace::PoseSerializable GlobalNamespace::PoseSerializable::get_identity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PoseSerializable>("", "PoseSerializable", "get_identity"));
}
// Autogenerated method: PoseSerializable.Serialize
void GlobalNamespace::PoseSerializable::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Serialize", writer));
}
void GlobalNamespace::PoseSerializable::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::PoseSerializable::Serialize(writer);
}
// Autogenerated method: PoseSerializable.Deserialize
void GlobalNamespace::PoseSerializable::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Deserialize", reader));
}
void GlobalNamespace::PoseSerializable::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::PoseSerializable::Deserialize(reader);
}
// Autogenerated method: PoseSerializable.Equals
bool GlobalNamespace::PoseSerializable::Equals(GlobalNamespace::PoseSerializable other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
// Autogenerated method: PoseSerializable.Equals
bool GlobalNamespace::PoseSerializable::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: PoseSerializable.GetHashCode
int GlobalNamespace::PoseSerializable::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: PoseSerializable.ToString
::Il2CppString* GlobalNamespace::PoseSerializable::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
}
