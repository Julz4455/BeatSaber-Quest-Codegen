// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TypeInitializationException
#include "System/TypeInitializationException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.TypeInitializationException.get_TypeName
::Il2CppString* System::TypeInitializationException::get_TypeName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_TypeName"));
}
// Autogenerated method: System.TypeInitializationException..ctor
System::TypeInitializationException* System::TypeInitializationException::New_ctor() {
  return (TypeInitializationException*)THROW_UNLESS(il2cpp_utils::New("System", "TypeInitializationException"));
}
// Autogenerated method: System.TypeInitializationException..ctor
System::TypeInitializationException* System::TypeInitializationException::New_ctor(::Il2CppString* fullTypeName, System::Exception* innerException) {
  return (TypeInitializationException*)THROW_UNLESS(il2cpp_utils::New("System", "TypeInitializationException", fullTypeName, innerException));
}
// Autogenerated method: System.TypeInitializationException..ctor
System::TypeInitializationException* System::TypeInitializationException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (TypeInitializationException*)THROW_UNLESS(il2cpp_utils::New("System", "TypeInitializationException", info, context));
}
// Autogenerated method: System.TypeInitializationException.GetObjectData
void System::TypeInitializationException::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::TypeInitializationException::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  System::TypeInitializationException::GetObjectData(info, context);
}
