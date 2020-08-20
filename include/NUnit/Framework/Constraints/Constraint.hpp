// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.IConstraint
#include "NUnit/Framework/Constraints/IConstraint.hpp"
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
  // Autogenerated type: NUnit.Framework.Constraints.Constraint
  class Constraint : public ::Il2CppObject, public NUnit::Framework::Constraints::IConstraint {
    public:
    // private System.Lazy`1<System.String> _displayName
    // Offset: 0x10
    System::Lazy_1<::Il2CppString*>* displayName;
    // private System.String <Description>k__BackingField
    // Offset: 0x18
    ::Il2CppString* Description;
    // private System.Object[] <Arguments>k__BackingField
    // Offset: 0x20
    ::Array<::Il2CppObject*>* Arguments;
    // private NUnit.Framework.Constraints.ConstraintBuilder <Builder>k__BackingField
    // Offset: 0x28
    NUnit::Framework::Constraints::ConstraintBuilder* Builder;
    // protected System.Void .ctor(System.Object[] args)
    // Offset: 0xFD1EC8
    static Constraint* New_ctor(::Array<::Il2CppObject*>* args);
    // public System.String get_DisplayName()
    // Offset: 0xFD1FA0
    ::Il2CppString* get_DisplayName();
    // public System.Object[] get_Arguments()
    // Offset: 0xFD2000
    ::Array<::Il2CppObject*>* get_Arguments();
    // private System.Void set_Arguments(System.Object[] value)
    // Offset: 0xFD2008
    void set_Arguments(::Array<::Il2CppObject*>* value);
    // public NUnit.Framework.Constraints.ConstraintBuilder get_Builder()
    // Offset: 0xFD2010
    NUnit::Framework::Constraints::ConstraintBuilder* get_Builder();
    // protected System.String GetStringRepresentation()
    // Offset: 0xFD20A0
    ::Il2CppString* GetStringRepresentation();
    // static private System.String _displayable(System.Object o)
    // Offset: 0xFD21F4
    static ::Il2CppString* _displayable(::Il2CppObject* o);
    // private System.String <.ctor>b__0()
    // Offset: 0xFD2408
    ::Il2CppString* $_ctor$b__0();
    // public System.String get_Description()
    // Offset: 0xFD1FF8
    // Implemented from: NUnit.Framework.Constraints.IConstraint
    // Base method: System.String IConstraint::get_Description()
    ::Il2CppString* get_Description();
    // public System.Void set_Builder(NUnit.Framework.Constraints.ConstraintBuilder value)
    // Offset: 0xFD2018
    // Implemented from: NUnit.Framework.Constraints.IConstraint
    // Base method: System.Void IConstraint::set_Builder(NUnit.Framework.Constraints.ConstraintBuilder value)
    void set_Builder(NUnit::Framework::Constraints::ConstraintBuilder* value);
    // public NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Constraints.IConstraint
    // Base method: NUnit.Framework.Constraints.ConstraintResult IConstraint::ApplyTo(System.Object actual)
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
    // public override System.String ToString()
    // Offset: 0xFD2020
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // private NUnit.Framework.Constraints.IConstraint NUnit.Framework.Constraints.IResolveConstraint.Resolve()
    // Offset: 0xFD232C
    // Implemented from: NUnit.Framework.Constraints.IResolveConstraint
    // Base method: NUnit.Framework.Constraints.IConstraint IResolveConstraint::Resolve()
    NUnit::Framework::Constraints::IConstraint* NUnit_Framework_Constraints_IResolveConstraint_Resolve();
  }; // NUnit.Framework.Constraints.Constraint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::Constraint*, "NUnit.Framework.Constraints", "Constraint");
#pragma pack(pop)
