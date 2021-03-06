// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
  // Forward declaring type: CancellationTokenRegistration
  struct CancellationTokenRegistration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.CancellationToken
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAA3D0
  // [DebuggerDisplayAttribute] Offset: CAA3D0
  struct CancellationToken/*, public System::ValueType*/ {
    public:
    // private System.Threading.CancellationTokenSource m_source
    // Size: 0x8
    // Offset: 0x0
    System::Threading::CancellationTokenSource* m_source;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // Creating value type constructor for type: CancellationToken
    constexpr CancellationToken(System::Threading::CancellationTokenSource* m_source_ = {}) noexcept : m_source{m_source_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator System::Threading::CancellationTokenSource*
    constexpr operator System::Threading::CancellationTokenSource*() const noexcept {
      return m_source;
    }
    // Get static field: static private readonly System.Action`1<System.Object> s_ActionToActionObjShunt
    static System::Action_1<::Il2CppObject*>* _get_s_ActionToActionObjShunt();
    // Set static field: static private readonly System.Action`1<System.Object> s_ActionToActionObjShunt
    static void _set_s_ActionToActionObjShunt(System::Action_1<::Il2CppObject*>* value);
    // static public System.Threading.CancellationToken get_None()
    // Offset: 0x1A7A0D8
    static System::Threading::CancellationToken get_None();
    // public System.Boolean get_IsCancellationRequested()
    // Offset: 0xE142D8
    bool get_IsCancellationRequested();
    // public System.Boolean get_CanBeCanceled()
    // Offset: 0xE14310
    bool get_CanBeCanceled();
    // System.Void .ctor(System.Threading.CancellationTokenSource source)
    // Offset: 0xE14348
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  CancellationToken(System::Threading::CancellationTokenSource* source)
    // static private System.Void ActionToActionObjShunt(System.Object obj)
    // Offset: 0x1A7A1A8
    static void ActionToActionObjShunt(::Il2CppObject* obj);
    // public System.Threading.CancellationTokenRegistration Register(System.Action callback)
    // Offset: 0xE14350
    System::Threading::CancellationTokenRegistration Register(System::Action* callback);
    // public System.Threading.CancellationTokenRegistration Register(System.Action`1<System.Object> callback, System.Object state)
    // Offset: 0xE14358
    System::Threading::CancellationTokenRegistration Register(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* state);
    // System.Threading.CancellationTokenRegistration InternalRegisterWithoutEC(System.Action`1<System.Object> callback, System.Object state)
    // Offset: 0xE14360
    System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* state);
    // private System.Threading.CancellationTokenRegistration Register(System.Action`1<System.Object> callback, System.Object state, System.Boolean useSynchronizationContext, System.Boolean useExecutionContext)
    // Offset: 0xE14370
    System::Threading::CancellationTokenRegistration Register(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* state, bool useSynchronizationContext, bool useExecutionContext);
    // public System.Boolean Equals(System.Threading.CancellationToken other)
    // Offset: 0xE14380
    bool Equals(System::Threading::CancellationToken other);
    // public System.Void ThrowIfCancellationRequested()
    // Offset: 0xE14398
    void ThrowIfCancellationRequested();
    // System.Void ThrowIfSourceDisposed()
    // Offset: 0xE143A0
    void ThrowIfSourceDisposed();
    // private System.Void ThrowOperationCanceledException()
    // Offset: 0xE143A8
    void ThrowOperationCanceledException();
    // static private System.Void ThrowObjectDisposedException()
    // Offset: 0x1A7ADC0
    static void ThrowObjectDisposedException();
    // static private System.Void .cctor()
    // Offset: 0x1A7AE44
    static void _cctor();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xE14388
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE14390
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Threading.CancellationToken
  #pragma pack(pop)
  static check_size<sizeof(CancellationToken), 0 + sizeof(System::Threading::CancellationTokenSource*)> __System_Threading_CancellationTokenSizeCheck;
  static_assert(sizeof(CancellationToken) == 0x8);
  // static public System.Boolean op_Equality(System.Threading.CancellationToken left, System.Threading.CancellationToken right)
  // Offset: 0x1A7AC2C
  bool operator ==(const System::Threading::CancellationToken& left, const System::Threading::CancellationToken& right);
  // static public System.Boolean op_Inequality(System.Threading.CancellationToken left, System.Threading.CancellationToken right)
  // Offset: 0x1A7AC54
  bool operator !=(const System::Threading::CancellationToken& left, const System::Threading::CancellationToken& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationToken, "System.Threading", "CancellationToken");
