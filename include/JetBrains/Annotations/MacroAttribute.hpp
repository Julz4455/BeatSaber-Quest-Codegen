// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x28
  // Autogenerated type: JetBrains.Annotations.MacroAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D826EC
  class MacroAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD82E88
    // private System.String <Expression>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Expression;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD82E98
    // private System.Int32 <Editable>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int Editable;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Editable and: Target
    char __padding1[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD82EA8
    // private System.String <Target>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Target;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MacroAttribute
    MacroAttribute(::Il2CppString* Expression_ = {}, int Editable_ = {}, ::Il2CppString* Target_ = {}) noexcept : Expression{Expression_}, Editable{Editable_}, Target{Target_} {}
    // public System.String get_Expression()
    // Offset: 0x19EE61C
    ::Il2CppString* get_Expression();
    // public System.Void set_Expression(System.String value)
    // Offset: 0x19EE624
    void set_Expression(::Il2CppString* value);
    // public System.Int32 get_Editable()
    // Offset: 0x19EE62C
    int get_Editable();
    // public System.Void set_Editable(System.Int32 value)
    // Offset: 0x19EE634
    void set_Editable(int value);
    // public System.String get_Target()
    // Offset: 0x19EE63C
    ::Il2CppString* get_Target();
    // public System.Void set_Target(System.String value)
    // Offset: 0x19EE644
    void set_Target(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x19EE64C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacroAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("JetBrains::Annotations").WithContext("MacroAttribute").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacroAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.MacroAttribute
  static check_size<sizeof(MacroAttribute), 32 + sizeof(::Il2CppString*)> __JetBrains_Annotations_MacroAttributeSizeCheck;
  static_assert(sizeof(MacroAttribute) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::MacroAttribute*, "JetBrains.Annotations", "MacroAttribute");
#pragma pack(pop)
