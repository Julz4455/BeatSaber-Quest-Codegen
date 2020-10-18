// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NoteCutInfoNetSerializable
#include "GlobalNamespace/NoteCutInfoNetSerializable.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NoteCutInfoNetSerializable..ctor
GlobalNamespace::NoteCutInfoNetSerializable* GlobalNamespace::NoteCutInfoNetSerializable::New_ctor(GlobalNamespace::NoteCutInfo* noteCutInfo, GlobalNamespace::NoteData* noteData, UnityEngine::Vector3 notePosition, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 moveVec) {
  return THROW_UNLESS(il2cpp_utils::New<NoteCutInfoNetSerializable*>(noteCutInfo, noteData, notePosition, noteRotation, moveVec));
}
// Autogenerated method: NoteCutInfoNetSerializable.LiteNetLib.Utils.INetSerializable.Deserialize
void GlobalNamespace::NoteCutInfoNetSerializable::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LiteNetLib.Utils.INetSerializable.Deserialize", reader));
}
// Autogenerated method: NoteCutInfoNetSerializable.LiteNetLib.Utils.INetSerializable.Serialize
void GlobalNamespace::NoteCutInfoNetSerializable::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LiteNetLib.Utils.INetSerializable.Serialize", writer));
}
// Autogenerated method: NoteCutInfoNetSerializable..ctor
GlobalNamespace::NoteCutInfoNetSerializable* GlobalNamespace::NoteCutInfoNetSerializable::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<NoteCutInfoNetSerializable*>());
}
