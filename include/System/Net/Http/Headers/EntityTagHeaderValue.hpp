// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.EntityTagHeaderValue
  class EntityTagHeaderValue : public ::Il2CppObject, public System::ICloneable {
    public:
    // private System.Boolean <IsWeak>k__BackingField
    // Offset: 0x10
    bool IsWeak;
    // private System.String <Tag>k__BackingField
    // Offset: 0x18
    ::Il2CppString* Tag;
    // Get static field: static private readonly System.Net.Http.Headers.EntityTagHeaderValue any
    static System::Net::Http::Headers::EntityTagHeaderValue* _get_any();
    // Set static field: static private readonly System.Net.Http.Headers.EntityTagHeaderValue any
    static void _set_any(System::Net::Http::Headers::EntityTagHeaderValue* value);
    // public System.Boolean get_IsWeak()
    // Offset: 0x13A02D8
    bool get_IsWeak();
    // System.Void set_IsWeak(System.Boolean value)
    // Offset: 0x13A02E0
    void set_IsWeak(bool value);
    // public System.String get_Tag()
    // Offset: 0x13A02EC
    ::Il2CppString* get_Tag();
    // System.Void set_Tag(System.String value)
    // Offset: 0x13A02F4
    void set_Tag(::Il2CppString* value);
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.EntityTagHeaderValue parsedValue)
    // Offset: 0x13A0420
    static bool TryParse(::Il2CppString* input, System::Net::Http::Headers::EntityTagHeaderValue*& parsedValue);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.EntityTagHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x13A0524
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::EntityTagHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.EntityTagHeaderValue> result)
    // Offset: 0x13A0790
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::EntityTagHeaderValue*>*& result);
    // static private System.Void .cctor()
    // Offset: 0x13A089C
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x13A02D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EntityTagHeaderValue* New_ctor();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x13A02FC
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x13A0304
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x13A03CC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x13A0830
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.EntityTagHeaderValue
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::EntityTagHeaderValue*, "System.Net.Http.Headers", "EntityTagHeaderValue");
#pragma pack(pop)
