// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_RenderModel
#include "GlobalNamespace/SteamVR_RenderModel.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: CVRRenderModels
  class CVRRenderModels;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: SteamVR_RenderModel/<SetModelAsync>d__21
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D88C44
  class SteamVR_RenderModel::$SetModelAsync$d__21 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String renderModelName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* renderModelName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public SteamVR_RenderModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SteamVR_RenderModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_RenderModel*) == 0x8);
    // private SteamVR_RenderModel/RenderModelInterfaceHolder <holder>5__2
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder* $holder$5__2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder*) == 0x8);
    // private Valve.VR.CVRRenderModels <renderModels>5__3
    // Size: 0x8
    // Offset: 0x38
    Valve::VR::CVRRenderModels* $renderModels$5__3;
    // Field size check
    static_assert(sizeof(Valve::VR::CVRRenderModels*) == 0x8);
    // private System.String[] <renderModelNames>5__4
    // Size: 0x8
    // Offset: 0x40
    ::Array<::Il2CppString*>* $renderModelNames$5__4;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: $SetModelAsync$d__21
    $SetModelAsync$d__21(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, ::Il2CppString* renderModelName_ = {}, GlobalNamespace::SteamVR_RenderModel* $$4__this_ = {}, GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder* $holder$5__2_ = {}, Valve::VR::CVRRenderModels* $renderModels$5__3_ = {}, ::Array<::Il2CppString*>* $renderModelNames$5__4_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, renderModelName{renderModelName_}, $$4__this{$$4__this_}, $holder$5__2{$holder$5__2_}, $renderModels$5__3{$renderModels$5__3_}, $renderModelNames$5__4{$renderModelNames$5__4_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1112F14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_RenderModel::$SetModelAsync$d__21* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$SetModelAsync$d__21").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_RenderModel::$SetModelAsync$d__21*, creationType>($$1__state)));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0x1115900
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x11158E4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x11159C0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x111631C
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1116324
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1116384
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // SteamVR_RenderModel/<SetModelAsync>d__21
  static check_size<sizeof(SteamVR_RenderModel::$SetModelAsync$d__21), 64 + sizeof(::Array<::Il2CppString*>*)> __GlobalNamespace_SteamVR_RenderModel_$SetModelAsync$d__21SizeCheck;
  static_assert(sizeof(SteamVR_RenderModel::$SetModelAsync$d__21) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_RenderModel::$SetModelAsync$d__21*, "", "SteamVR_RenderModel/<SetModelAsync>d__21");
#pragma pack(pop)
