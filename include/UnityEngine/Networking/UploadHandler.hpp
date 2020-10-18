// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.UploadHandler
  class UploadHandler : public ::Il2CppObject, public System::IDisposable {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // private System.Void Release()
    // Offset: 0x21FD7A0
    void Release();
    // System.Void .ctor()
    // Offset: 0x21FD7E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UploadHandler* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x21FD7E8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x21FC540
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // UnityEngine.Networking.UploadHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UploadHandler*, "UnityEngine.Networking", "UploadHandler");
#pragma pack(pop)
