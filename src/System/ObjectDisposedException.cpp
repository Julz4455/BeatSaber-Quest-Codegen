// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ObjectDisposedException
#include "System/ObjectDisposedException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.ObjectDisposedException..ctor
System::ObjectDisposedException* System::ObjectDisposedException::New_ctor(::Il2CppString* objectName, ::Il2CppString* message) {
  return (ObjectDisposedException*)THROW_UNLESS(il2cpp_utils::New("System", "ObjectDisposedException", objectName, message));
}
// Autogenerated method: System.ObjectDisposedException.get_ObjectName
::Il2CppString* System::ObjectDisposedException::get_ObjectName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_ObjectName"));
}
// Autogenerated method: System.ObjectDisposedException..ctor
System::ObjectDisposedException* System::ObjectDisposedException::New_ctor() {
  return (ObjectDisposedException*)THROW_UNLESS(il2cpp_utils::New("System", "ObjectDisposedException"));
}
// Autogenerated method: System.ObjectDisposedException..ctor
System::ObjectDisposedException* System::ObjectDisposedException::New_ctor(::Il2CppString* objectName) {
  return (ObjectDisposedException*)THROW_UNLESS(il2cpp_utils::New("System", "ObjectDisposedException", objectName));
}
// Autogenerated method: System.ObjectDisposedException.get_Message
::Il2CppString* System::ObjectDisposedException::get_Message() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Message"));
}
// Autogenerated method: System.ObjectDisposedException..ctor
System::ObjectDisposedException* System::ObjectDisposedException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (ObjectDisposedException*)THROW_UNLESS(il2cpp_utils::New("System", "ObjectDisposedException", info, context));
}
// Autogenerated method: System.ObjectDisposedException.GetObjectData
void System::ObjectDisposedException::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::ObjectDisposedException::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  System::ObjectDisposedException::GetObjectData(info, context);
}
