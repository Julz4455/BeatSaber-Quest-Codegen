// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Valve.VR.CVRDriverManager
#include "Valve/VR/CVRDriverManager.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.CVRDriverManager..ctor
Valve::VR::CVRDriverManager* Valve::VR::CVRDriverManager::New_ctor(System::IntPtr pInterface) {
  return (CVRDriverManager*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "CVRDriverManager", pInterface));
}
// Autogenerated method: Valve.VR.CVRDriverManager.GetDriverCount
uint Valve::VR::CVRDriverManager::GetDriverCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetDriverCount"));
}
// Autogenerated method: Valve.VR.CVRDriverManager.GetDriverName
uint Valve::VR::CVRDriverManager::GetDriverName(uint nDriver, System::Text::StringBuilder* pchValue, uint unBufferSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetDriverName", nDriver, pchValue, unBufferSize));
}
