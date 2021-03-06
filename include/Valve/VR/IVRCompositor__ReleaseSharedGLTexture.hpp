// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/_ReleaseSharedGLTexture
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CFB6DC
  class IVRCompositor::_ReleaseSharedGLTexture : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReleaseSharedGLTexture
    _ReleaseSharedGLTexture() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EBD654
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_ReleaseSharedGLTexture* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_ReleaseSharedGLTexture*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle)
    // Offset: 0x1EBD668
    bool Invoke(uint glTextureId, System::IntPtr glSharedTextureHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EBD8FC
    System::IAsyncResult* BeginInvoke(uint glTextureId, System::IntPtr glSharedTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EBD9A8
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_ReleaseSharedGLTexture
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_ReleaseSharedGLTexture*, "Valve.VR", "IVRCompositor/_ReleaseSharedGLTexture");
