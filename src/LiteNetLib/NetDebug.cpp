// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NetDebug
#include "LiteNetLib/NetDebug.hpp"
// Including type: LiteNetLib.INetLogger
#include "LiteNetLib/INetLogger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public LiteNetLib.INetLogger Logger
LiteNetLib::INetLogger* LiteNetLib::NetDebug::_get_Logger() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<LiteNetLib::INetLogger*>("LiteNetLib", "NetDebug", "Logger"));
}
// Autogenerated static field setter
// Set static field: static public LiteNetLib.INetLogger Logger
void LiteNetLib::NetDebug::_set_Logger(LiteNetLib::INetLogger* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("LiteNetLib", "NetDebug", "Logger", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Object DebugLogLock
::Il2CppObject* LiteNetLib::NetDebug::_get_DebugLogLock() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppObject*>("LiteNetLib", "NetDebug", "DebugLogLock"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Object DebugLogLock
void LiteNetLib::NetDebug::_set_DebugLogLock(::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("LiteNetLib", "NetDebug", "DebugLogLock", value));
}
// Autogenerated method: LiteNetLib.NetDebug.WriteLogic
void LiteNetLib::NetDebug::WriteLogic(LiteNetLib::NetLogLevel logLevel, ::Il2CppString* str, ::Array<::Il2CppObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod("LiteNetLib", "NetDebug", "WriteLogic", logLevel, str, args));
}
// Creating initializer_list -> params proxy for: System.Void WriteLogic(LiteNetLib.NetLogLevel logLevel, System.String str, params System.Object[] args)
void LiteNetLib::NetDebug::WriteLogic(LiteNetLib::NetLogLevel logLevel, ::Il2CppString* str, std::initializer_list<::Il2CppObject*> args) {
  LiteNetLib::NetDebug::WriteLogic(logLevel, str, ::Array<::Il2CppObject*>::New(args));
}
// Autogenerated method: LiteNetLib.NetDebug.Write
void LiteNetLib::NetDebug::Write(::Il2CppString* str, ::Array<::Il2CppObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod("LiteNetLib", "NetDebug", "Write", str, args));
}
// Creating initializer_list -> params proxy for: System.Void Write(System.String str, params System.Object[] args)
void LiteNetLib::NetDebug::Write(::Il2CppString* str, std::initializer_list<::Il2CppObject*> args) {
  LiteNetLib::NetDebug::Write(str, ::Array<::Il2CppObject*>::New(args));
}
// Autogenerated method: LiteNetLib.NetDebug.Write
void LiteNetLib::NetDebug::Write(LiteNetLib::NetLogLevel level, ::Il2CppString* str, ::Array<::Il2CppObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod("LiteNetLib", "NetDebug", "Write", level, str, args));
}
// Creating initializer_list -> params proxy for: System.Void Write(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
void LiteNetLib::NetDebug::Write(LiteNetLib::NetLogLevel level, ::Il2CppString* str, std::initializer_list<::Il2CppObject*> args) {
  LiteNetLib::NetDebug::Write(level, str, ::Array<::Il2CppObject*>::New(args));
}
// Autogenerated method: LiteNetLib.NetDebug.WriteForce
void LiteNetLib::NetDebug::WriteForce(::Il2CppString* str, ::Array<::Il2CppObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod("LiteNetLib", "NetDebug", "WriteForce", str, args));
}
// Creating initializer_list -> params proxy for: System.Void WriteForce(System.String str, params System.Object[] args)
void LiteNetLib::NetDebug::WriteForce(::Il2CppString* str, std::initializer_list<::Il2CppObject*> args) {
  LiteNetLib::NetDebug::WriteForce(str, ::Array<::Il2CppObject*>::New(args));
}
// Autogenerated method: LiteNetLib.NetDebug.WriteForce
void LiteNetLib::NetDebug::WriteForce(LiteNetLib::NetLogLevel level, ::Il2CppString* str, ::Array<::Il2CppObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod("LiteNetLib", "NetDebug", "WriteForce", level, str, args));
}
// Creating initializer_list -> params proxy for: System.Void WriteForce(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
void LiteNetLib::NetDebug::WriteForce(LiteNetLib::NetLogLevel level, ::Il2CppString* str, std::initializer_list<::Il2CppObject*> args) {
  LiteNetLib::NetDebug::WriteForce(level, str, ::Array<::Il2CppObject*>::New(args));
}
// Autogenerated method: LiteNetLib.NetDebug.WriteError
void LiteNetLib::NetDebug::WriteError(::Il2CppString* str, ::Array<::Il2CppObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod("LiteNetLib", "NetDebug", "WriteError", str, args));
}
// Creating initializer_list -> params proxy for: System.Void WriteError(System.String str, params System.Object[] args)
void LiteNetLib::NetDebug::WriteError(::Il2CppString* str, std::initializer_list<::Il2CppObject*> args) {
  LiteNetLib::NetDebug::WriteError(str, ::Array<::Il2CppObject*>::New(args));
}
// Autogenerated method: LiteNetLib.NetDebug..cctor
void LiteNetLib::NetDebug::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("LiteNetLib", "NetDebug", ".cctor"));
}
