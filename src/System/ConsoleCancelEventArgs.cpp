// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.ConsoleCancelEventArgs
#include "System/ConsoleCancelEventArgs.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.ConsoleCancelEventArgs..ctor
System::ConsoleCancelEventArgs* System::ConsoleCancelEventArgs::New_ctor(System::ConsoleSpecialKey type) {
  return (ConsoleCancelEventArgs*)THROW_UNLESS(il2cpp_utils::New("System", "ConsoleCancelEventArgs", type));
}
// Autogenerated method: System.ConsoleCancelEventArgs.get_Cancel
bool System::ConsoleCancelEventArgs::get_Cancel() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_Cancel"));
}
// Autogenerated method: System.ConsoleCancelEventArgs..ctor
System::ConsoleCancelEventArgs* System::ConsoleCancelEventArgs::New_ctor() {
  return (ConsoleCancelEventArgs*)THROW_UNLESS(il2cpp_utils::New("System", "ConsoleCancelEventArgs"));
}
