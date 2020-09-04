// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Number/NumberBuffer
#include "System/Number_NumberBuffer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Int32 NumberBufferBytes
int System::Number::NumberBuffer::_get_NumberBufferBytes() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System", "Number/NumberBuffer", "NumberBufferBytes"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Int32 NumberBufferBytes
void System::Number::NumberBuffer::_set_NumberBufferBytes(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Number/NumberBuffer", "NumberBufferBytes", value));
}
// Autogenerated method: System.Number/NumberBuffer..ctor
System::Number::NumberBuffer* System::Number::NumberBuffer::New_ctor(uint8_t* stackBuffer) {
  return (Number::NumberBuffer*)THROW_UNLESS(il2cpp_utils::New("System", "Number/NumberBuffer", stackBuffer));
}
// Autogenerated method: System.Number/NumberBuffer.PackForNative
uint8_t* System::Number::NumberBuffer::PackForNative() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>(*this, "PackForNative"));
}
// Autogenerated method: System.Number/NumberBuffer..cctor
void System::Number::NumberBuffer::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "Number/NumberBuffer", ".cctor"));
}
