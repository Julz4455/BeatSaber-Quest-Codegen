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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.BindingCondition
  // [] Offset: FFFFFFFF
  class BindingCondition : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: BindingCondition
    BindingCondition() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1260DFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindingCondition* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::BindingCondition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindingCondition*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Zenject.InjectContext c)
    // Offset: 0x1260E10
    bool Invoke(Zenject::InjectContext* c);
    // public System.IAsyncResult BeginInvoke(Zenject.InjectContext c, System.AsyncCallback callback, System.Object object)
    // Offset: 0x12611D4
    System::IAsyncResult* BeginInvoke(Zenject::InjectContext* c, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x12611F8
    bool EndInvoke(System::IAsyncResult* result);
  }; // Zenject.BindingCondition
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindingCondition*, "Zenject", "BindingCondition");
