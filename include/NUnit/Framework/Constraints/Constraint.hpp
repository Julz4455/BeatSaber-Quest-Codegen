// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: NUnit.Framework.Constraints.IConstraint
#include "NUnit/Framework/Constraints/IConstraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Lazy`1<T>
  template<typename T>
  class Lazy_1;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintBuilder
  class ConstraintBuilder;
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.Constraint
  // [] Offset: FFFFFFFF
  class Constraint : public ::Il2CppObject/*, public NUnit::Framework::Constraints::IConstraint*/ {
    public:
    // private System.Lazy`1<System.String> _displayName
    // Size: 0x8
    // Offset: 0x10
    System::Lazy_1<::Il2CppString*>* displayName;
    // Field size check
    static_assert(sizeof(System::Lazy_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD250D8
    // private System.String <Description>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Description;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD250E8
    // private System.Object[] <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppObject*>* Arguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD250F8
    // private NUnit.Framework.Constraints.ConstraintBuilder <Builder>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Constraints::ConstraintBuilder* Builder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ConstraintBuilder*) == 0x8);
    // Creating value type constructor for type: Constraint
    Constraint(System::Lazy_1<::Il2CppString*>* displayName_ = {}, ::Il2CppString* Description_ = {}, ::Array<::Il2CppObject*>* Arguments_ = {}, NUnit::Framework::Constraints::ConstraintBuilder* Builder_ = {}) noexcept : displayName{displayName_}, Description{Description_}, Arguments{Arguments_}, Builder{Builder_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Constraints::IConstraint
    operator NUnit::Framework::Constraints::IConstraint() noexcept {
      return *reinterpret_cast<NUnit::Framework::Constraints::IConstraint*>(this);
    }
    // protected System.Void .ctor(params System.Object[] args)
    // Offset: 0x1698C38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Constraint* New_ctor(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::Constraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Constraint*, creationType>(args)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Constraint* New_ctor(std::initializer_list<::Il2CppObject*> args) {
      return New_ctor<creationType>(::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static Constraint* New_ctor(TParams&&... args) {
      return New_ctor<creationType>({args...});
    }
    // public System.String get_DisplayName()
    // Offset: 0x1698D10
    ::Il2CppString* get_DisplayName();
    // protected System.Void set_Description(System.String value)
    // Offset: 0x1698D70
    void set_Description(::Il2CppString* value);
    // public System.Object[] get_Arguments()
    // Offset: 0x1698D78
    ::Array<::Il2CppObject*>* get_Arguments();
    // private System.Void set_Arguments(System.Object[] value)
    // Offset: 0x1698D80
    void set_Arguments(::Array<::Il2CppObject*>* value);
    // public NUnit.Framework.Constraints.ConstraintBuilder get_Builder()
    // Offset: 0x1698D88
    NUnit::Framework::Constraints::ConstraintBuilder* get_Builder();
    // protected System.String GetStringRepresentation()
    // Offset: 0x1698E18
    ::Il2CppString* GetStringRepresentation();
    // static private System.String _displayable(System.Object o)
    // Offset: 0x1698F6C
    static ::Il2CppString* _displayable(::Il2CppObject* o);
    // private System.String <.ctor>b__0()
    // Offset: 0x1699180
    ::Il2CppString* $_ctor$b__0();
    // public System.String get_Description()
    // Offset: 0x1698D68
    // Implemented from: NUnit.Framework.Constraints.IConstraint
    // Base method: System.String IConstraint::get_Description()
    ::Il2CppString* get_Description();
    // public System.Void set_Builder(NUnit.Framework.Constraints.ConstraintBuilder value)
    // Offset: 0x1698D90
    // Implemented from: NUnit.Framework.Constraints.IConstraint
    // Base method: System.Void IConstraint::set_Builder(NUnit.Framework.Constraints.ConstraintBuilder value)
    void set_Builder(NUnit::Framework::Constraints::ConstraintBuilder* value);
    // public NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Constraints.IConstraint
    // Base method: NUnit.Framework.Constraints.ConstraintResult IConstraint::ApplyTo(System.Object actual)
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
    // public override System.String ToString()
    // Offset: 0x1698D98
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // private NUnit.Framework.Constraints.IConstraint NUnit.Framework.Constraints.IResolveConstraint.Resolve()
    // Offset: 0x16990A4
    // Implemented from: NUnit.Framework.Constraints.IResolveConstraint
    // Base method: NUnit.Framework.Constraints.IConstraint IResolveConstraint::Resolve()
    NUnit::Framework::Constraints::IConstraint* NUnit_Framework_Constraints_IResolveConstraint_Resolve();
  }; // NUnit.Framework.Constraints.Constraint
  #pragma pack(pop)
  static check_size<sizeof(Constraint), 40 + sizeof(NUnit::Framework::Constraints::ConstraintBuilder*)> __NUnit_Framework_Constraints_ConstraintSizeCheck;
  static_assert(sizeof(Constraint) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::Constraint*, "NUnit.Framework.Constraints", "Constraint");
