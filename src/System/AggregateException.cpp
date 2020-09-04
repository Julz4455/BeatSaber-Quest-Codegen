// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.AggregateException
#include "System/AggregateException.hpp"
// Including type: System.Collections.ObjectModel.ReadOnlyCollection`1
#include "System/Collections/ObjectModel/ReadOnlyCollection_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Runtime.ExceptionServices.ExceptionDispatchInfo
#include "System/Runtime/ExceptionServices/ExceptionDispatchInfo.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.AggregateException..ctor
System::AggregateException* System::AggregateException::New_ctor(System::Collections::Generic::IEnumerable_1<System::Exception*>* innerExceptions) {
  return (AggregateException*)THROW_UNLESS(il2cpp_utils::New("System", "AggregateException", innerExceptions));
}
// Autogenerated method: System.AggregateException..ctor
System::AggregateException* System::AggregateException::New_ctor(::Array<System::Exception*>* innerExceptions) {
  return (AggregateException*)THROW_UNLESS(il2cpp_utils::New("System", "AggregateException", innerExceptions));
}
// Creating initializer_list -> params proxy for: System.Void .ctor(params System.Exception[] innerExceptions)
System::AggregateException* System::AggregateException::New_ctor(std::initializer_list<System::Exception*> innerExceptions) {
  return System::AggregateException::New_ctor(::Array<System::Exception*>::New(innerExceptions));
}
// Autogenerated method: System.AggregateException..ctor
System::AggregateException* System::AggregateException::New_ctor(::Il2CppString* message, System::Collections::Generic::IEnumerable_1<System::Exception*>* innerExceptions) {
  return (AggregateException*)THROW_UNLESS(il2cpp_utils::New("System", "AggregateException", message, innerExceptions));
}
// Autogenerated method: System.AggregateException..ctor
System::AggregateException* System::AggregateException::New_ctor(::Il2CppString* message, ::Array<System::Exception*>* innerExceptions) {
  return (AggregateException*)THROW_UNLESS(il2cpp_utils::New("System", "AggregateException", message, innerExceptions));
}
// Creating initializer_list -> params proxy for: System.Void .ctor(System.String message, params System.Exception[] innerExceptions)
System::AggregateException* System::AggregateException::New_ctor(::Il2CppString* message, std::initializer_list<System::Exception*> innerExceptions) {
  return System::AggregateException::New_ctor(message, ::Array<System::Exception*>::New(innerExceptions));
}
// Autogenerated method: System.AggregateException..ctor
System::AggregateException* System::AggregateException::New_ctor(::Il2CppString* message, System::Collections::Generic::IList_1<System::Exception*>* innerExceptions) {
  return (AggregateException*)THROW_UNLESS(il2cpp_utils::New("System", "AggregateException", message, innerExceptions));
}
// Autogenerated method: System.AggregateException..ctor
System::AggregateException* System::AggregateException::New_ctor(System::Collections::Generic::IEnumerable_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
  return (AggregateException*)THROW_UNLESS(il2cpp_utils::New("System", "AggregateException", innerExceptionInfos));
}
// Autogenerated method: System.AggregateException..ctor
System::AggregateException* System::AggregateException::New_ctor(::Il2CppString* message, System::Collections::Generic::IEnumerable_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
  return (AggregateException*)THROW_UNLESS(il2cpp_utils::New("System", "AggregateException", message, innerExceptionInfos));
}
// Autogenerated method: System.AggregateException..ctor
System::AggregateException* System::AggregateException::New_ctor(::Il2CppString* message, System::Collections::Generic::IList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
  return (AggregateException*)THROW_UNLESS(il2cpp_utils::New("System", "AggregateException", message, innerExceptionInfos));
}
// Autogenerated method: System.AggregateException.get_InnerExceptions
System::Collections::ObjectModel::ReadOnlyCollection_1<System::Exception*>* System::AggregateException::get_InnerExceptions() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ObjectModel::ReadOnlyCollection_1<System::Exception*>*>(this, "get_InnerExceptions"));
}
// Autogenerated method: System.AggregateException.Flatten
System::AggregateException* System::AggregateException::Flatten() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::AggregateException*>(this, "Flatten"));
}
// Autogenerated method: System.AggregateException..ctor
System::AggregateException* System::AggregateException::New_ctor() {
  return (AggregateException*)THROW_UNLESS(il2cpp_utils::New("System", "AggregateException"));
}
// Autogenerated method: System.AggregateException..ctor
System::AggregateException* System::AggregateException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (AggregateException*)THROW_UNLESS(il2cpp_utils::New("System", "AggregateException", info, context));
}
// Autogenerated method: System.AggregateException.GetObjectData
void System::AggregateException::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::AggregateException::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  System::AggregateException::GetObjectData(info, context);
}
// Autogenerated method: System.AggregateException.ToString
::Il2CppString* System::AggregateException::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
