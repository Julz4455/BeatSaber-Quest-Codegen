// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Microsoft.Win32.SafeHandles.SafeFileHandle
#include "Microsoft/Win32/SafeHandles/SafeFileHandle.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Microsoft.Win32.SafeHandles.SafeFileHandle..ctor
Microsoft::Win32::SafeHandles::SafeFileHandle* Microsoft::Win32::SafeHandles::SafeFileHandle::New_ctor(System::IntPtr preexistingHandle, bool ownsHandle) {
  return (SafeFileHandle*)THROW_UNLESS(il2cpp_utils::New("Microsoft.Win32.SafeHandles", "SafeFileHandle", preexistingHandle, ownsHandle));
}
// Autogenerated method: Microsoft.Win32.SafeHandles.SafeFileHandle.ReleaseHandle
bool Microsoft::Win32::SafeHandles::SafeFileHandle::ReleaseHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ReleaseHandle"));
}
