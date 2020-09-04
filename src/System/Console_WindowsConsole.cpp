// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Console/WindowsConsole
#include "System/Console_WindowsConsole.hpp"
// Including type: System.Console/WindowsConsole/WindowsCancelHandler
#include "System/Console_WindowsConsole_WindowsCancelHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Boolean ctrlHandlerAdded
bool System::Console::WindowsConsole::_get_ctrlHandlerAdded() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System", "Console/WindowsConsole", "ctrlHandlerAdded"));
}
// Autogenerated static field setter
// Set static field: static public System.Boolean ctrlHandlerAdded
void System::Console::WindowsConsole::_set_ctrlHandlerAdded(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Console/WindowsConsole", "ctrlHandlerAdded", value));
}
// Autogenerated static field getter
// Get static field: static private System.Console/WindowsConsole/WindowsCancelHandler cancelHandler
System::Console::WindowsConsole::WindowsCancelHandler* System::Console::WindowsConsole::_get_cancelHandler() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Console::WindowsConsole::WindowsCancelHandler*>("System", "Console/WindowsConsole", "cancelHandler"));
}
// Autogenerated static field setter
// Set static field: static private System.Console/WindowsConsole/WindowsCancelHandler cancelHandler
void System::Console::WindowsConsole::_set_cancelHandler(System::Console::WindowsConsole::WindowsCancelHandler* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Console/WindowsConsole", "cancelHandler", value));
}
// Autogenerated method: System.Console/WindowsConsole.GetConsoleCP
int System::Console::WindowsConsole::GetConsoleCP() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "Console/WindowsConsole", "GetConsoleCP"));
}
// Autogenerated method: System.Console/WindowsConsole.GetConsoleOutputCP
int System::Console::WindowsConsole::GetConsoleOutputCP() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "Console/WindowsConsole", "GetConsoleOutputCP"));
}
// Autogenerated method: System.Console/WindowsConsole.DoWindowsConsoleCancelEvent
bool System::Console::WindowsConsole::DoWindowsConsoleCancelEvent(int keyCode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Console/WindowsConsole", "DoWindowsConsoleCancelEvent", keyCode));
}
// Autogenerated method: System.Console/WindowsConsole.GetInputCodePage
int System::Console::WindowsConsole::GetInputCodePage() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "Console/WindowsConsole", "GetInputCodePage"));
}
// Autogenerated method: System.Console/WindowsConsole.GetOutputCodePage
int System::Console::WindowsConsole::GetOutputCodePage() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "Console/WindowsConsole", "GetOutputCodePage"));
}
// Autogenerated method: System.Console/WindowsConsole..cctor
void System::Console::WindowsConsole::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "Console/WindowsConsole", ".cctor"));
}
