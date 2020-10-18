// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 InitialSize
int LiteNetLib::Utils::NetDataWriter::_get_InitialSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("LiteNetLib.Utils", "NetDataWriter", "InitialSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 InitialSize
void LiteNetLib::Utils::NetDataWriter::_set_InitialSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("LiteNetLib.Utils", "NetDataWriter", "InitialSize", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.get_Capacity
int LiteNetLib::Utils::NetDataWriter::get_Capacity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Capacity"));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter..ctor
LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::New_ctor(bool autoResize) {
  return THROW_UNLESS(il2cpp_utils::New<NetDataWriter*>(autoResize));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter..ctor
LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::New_ctor(bool autoResize, int initialSize) {
  return THROW_UNLESS(il2cpp_utils::New<NetDataWriter*>(autoResize, initialSize));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.FromBytes
LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::FromBytes(::Array<uint8_t>* bytes, bool copy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<LiteNetLib::Utils::NetDataWriter*>("LiteNetLib.Utils", "NetDataWriter", "FromBytes", bytes, copy));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.FromBytes
LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::FromBytes(::Array<uint8_t>* bytes, int offset, int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<LiteNetLib::Utils::NetDataWriter*>("LiteNetLib.Utils", "NetDataWriter", "FromBytes", bytes, offset, length));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.FromString
LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::FromString(::Il2CppString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<LiteNetLib::Utils::NetDataWriter*>("LiteNetLib.Utils", "NetDataWriter", "FromString", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.ResizeIfNeed
void LiteNetLib::Utils::NetDataWriter::ResizeIfNeed(int newSize) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResizeIfNeed", newSize));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Reset
void LiteNetLib::Utils::NetDataWriter::Reset(int size) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset", size));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Reset
void LiteNetLib::Utils::NetDataWriter::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.CopyData
::Array<uint8_t>* LiteNetLib::Utils::NetDataWriter::CopyData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "CopyData"));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.get_Data
::Array<uint8_t>* LiteNetLib::Utils::NetDataWriter::get_Data() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_Data"));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.get_Length
int LiteNetLib::Utils::NetDataWriter::get_Length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Length"));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(double value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(uint64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(uint value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(::Il2CppChar value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(uint16_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(int16_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(int8_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(uint8_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(::Array<uint8_t>* data, int offset, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", data, offset, length));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(::Array<uint8_t>* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", data));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutSBytesWithLength
void LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength(::Array<int8_t>* data, int offset, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutSBytesWithLength", data, offset, length));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutSBytesWithLength
void LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength(::Array<int8_t>* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutSBytesWithLength", data));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutBytesWithLength
void LiteNetLib::Utils::NetDataWriter::PutBytesWithLength(::Array<uint8_t>* data, int offset, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutBytesWithLength", data, offset, length));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutBytesWithLength
void LiteNetLib::Utils::NetDataWriter::PutBytesWithLength(::Array<uint8_t>* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutBytesWithLength", data));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(System::Array* arr, int sz) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", arr, sz));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<double>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<int64_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<uint64_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<int>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<uint>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<uint16_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<int16_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<bool>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.PutArray
void LiteNetLib::Utils::NetDataWriter::PutArray(::Array<::Il2CppString*>* value, int maxLength) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutArray", value, maxLength));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(System::Net::IPEndPoint* endPoint) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", endPoint));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter.Put
void LiteNetLib::Utils::NetDataWriter::Put(::Il2CppString* value, int maxLength) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", value, maxLength));
}
// Autogenerated method: LiteNetLib.Utils.NetDataWriter..ctor
LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<NetDataWriter*>());
}
