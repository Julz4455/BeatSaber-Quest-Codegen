// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Diagnostics.Tracing.SessionMask
#include "System/Diagnostics/Tracing/SessionMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.SessionMask..ctor
System::Diagnostics::Tracing::SessionMask* System::Diagnostics::Tracing::SessionMask::New_ctor(uint mask) {
  return (SessionMask*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "SessionMask", mask));
}
// Autogenerated method: System.Diagnostics.Tracing.SessionMask.IsEqualOrSupersetOf
bool System::Diagnostics::Tracing::SessionMask::IsEqualOrSupersetOf(System::Diagnostics::Tracing::SessionMask m) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "IsEqualOrSupersetOf", m));
}
// Autogenerated method: System.Diagnostics.Tracing.SessionMask.get_All
System::Diagnostics::Tracing::SessionMask System::Diagnostics::Tracing::SessionMask::get_All() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::SessionMask>("System.Diagnostics.Tracing", "SessionMask", "get_All"));
}
// Autogenerated method: System.Diagnostics.Tracing.SessionMask.FromId
System::Diagnostics::Tracing::SessionMask System::Diagnostics::Tracing::SessionMask::FromId(int perEventSourceSessionId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::SessionMask>("System.Diagnostics.Tracing", "SessionMask", "FromId", perEventSourceSessionId));
}
// Autogenerated method: System.Diagnostics.Tracing.SessionMask.ToEventKeywords
uint64_t System::Diagnostics::Tracing::SessionMask::ToEventKeywords() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(*this, "ToEventKeywords"));
}
// Autogenerated method: System.Diagnostics.Tracing.SessionMask.FromEventKeywords
System::Diagnostics::Tracing::SessionMask System::Diagnostics::Tracing::SessionMask::FromEventKeywords(uint64_t m) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::SessionMask>("System.Diagnostics.Tracing", "SessionMask", "FromEventKeywords", m));
}
// Autogenerated method: System.Diagnostics.Tracing.SessionMask.get_Item
bool System::Diagnostics::Tracing::SessionMask::get_Item(int perEventSourceSessionId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "get_Item", perEventSourceSessionId));
}
// Autogenerated method: System.Diagnostics.Tracing.SessionMask.set_Item
void System::Diagnostics::Tracing::SessionMask::set_Item(int perEventSourceSessionId, bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_Item", perEventSourceSessionId, value));
}
