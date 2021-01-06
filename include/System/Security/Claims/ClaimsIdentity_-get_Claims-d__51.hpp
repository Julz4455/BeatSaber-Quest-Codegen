// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Claims.ClaimsIdentity
#include "System/Security/Claims/ClaimsIdentity.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Claims
namespace System::Security::Claims {
  // Forward declaring type: Claim
  class Claim;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Size: 0x40
  // Autogenerated type: System.Security.Claims.ClaimsIdentity/<get_Claims>d__51
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D3A1C0
  class ClaimsIdentity::$get_Claims$d__51 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>, public System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Security.Claims.Claim <>2__current
    // Size: 0x8
    // Offset: 0x18
    System::Security::Claims::Claim* $$2__current;
    // Field size check
    static_assert(sizeof(System::Security::Claims::Claim*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public System.Security.Claims.ClaimsIdentity <>4__this
    // Size: 0x8
    // Offset: 0x28
    System::Security::Claims::ClaimsIdentity* $$4__this;
    // Field size check
    static_assert(sizeof(System::Security::Claims::ClaimsIdentity*) == 0x8);
    // private System.Int32 <i>5__1
    // Size: 0x4
    // Offset: 0x30
    int $i$5__1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <j>5__2
    // Size: 0x4
    // Offset: 0x34
    int $j$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.IEnumerator`1<System.Security.Claims.Claim> <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>*) == 0x8);
    // Creating value type constructor for type: $get_Claims$d__51
    $get_Claims$d__51(int $$1__state_ = {}, System::Security::Claims::Claim* $$2__current_ = {}, int $$l__initialThreadId_ = {}, System::Security::Claims::ClaimsIdentity* $$4__this_ = {}, int $i$5__1_ = {}, int $j$5__2_ = {}, System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $i$5__1{$i$5__1_}, $j$5__2{$j$5__2_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>
    operator System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>
    operator System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1453DAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity::$get_Claims$d__51* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Claims").WithContext("$get_Claims$d__51").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity::$get_Claims$d__51*, creationType>($$1__state)));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0x1454F4C
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1454F30
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x145500C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Security.Claims.Claim System.Collections.Generic.IEnumerator<System.Security.Claims.Claim>.get_Current()
    // Offset: 0x14553C8
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    System::Security::Claims::Claim* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14553D0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1455430
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Security.Claims.Claim> System.Collections.Generic.IEnumerable<System.Security.Claims.Claim>.GetEnumerator()
    // Offset: 0x1455438
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x14554EC
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Security.Claims.ClaimsIdentity/<get_Claims>d__51
  static check_size<sizeof(ClaimsIdentity::$get_Claims$d__51), 56 + sizeof(System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>*)> __System_Security_Claims_ClaimsIdentity_$get_Claims$d__51SizeCheck;
  static_assert(sizeof(ClaimsIdentity::$get_Claims$d__51) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Claims::ClaimsIdentity::$get_Claims$d__51*, "System.Security.Claims", "ClaimsIdentity/<get_Claims>d__51");
#pragma pack(pop)
