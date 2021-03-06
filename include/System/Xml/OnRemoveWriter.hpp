// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlRawWriter
  class XmlRawWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.OnRemoveWriter
  // [] Offset: FFFFFFFF
  class OnRemoveWriter : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnRemoveWriter
    OnRemoveWriter() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1869FF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnRemoveWriter* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::OnRemoveWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnRemoveWriter*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Xml.XmlRawWriter writer)
    // Offset: 0x186A00C
    void Invoke(System::Xml::XmlRawWriter* writer);
    // public System.IAsyncResult BeginInvoke(System.Xml.XmlRawWriter writer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x186A3C4
    System::IAsyncResult* BeginInvoke(System::Xml::XmlRawWriter* writer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x186A3E8
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Xml.OnRemoveWriter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::OnRemoveWriter*, "System.Xml", "OnRemoveWriter");
