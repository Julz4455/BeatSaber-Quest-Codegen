// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.Parser
#include "System/Net/Http/Headers/Parser.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: DateTimeOffset
  struct DateTimeOffset;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  // Autogenerated type: System.Net.Http.Headers.Parser/DateTime
  // [] Offset: FFFFFFFF
  class Parser::DateTime : public ::Il2CppObject {
    public:
    // Nested type: System::Net::Http::Headers::Parser::DateTime::$$c
    class $$c;
    // Creating value type constructor for type: DateTime
    DateTime() noexcept {}
    // Get static field: static public readonly System.Func`2<System.Object,System.String> ToString
    static System::Func_2<::Il2CppObject*, ::Il2CppString*>* _get_ToString();
    // Set static field: static public readonly System.Func`2<System.Object,System.String> ToString
    static void _set_ToString(System::Func_2<::Il2CppObject*, ::Il2CppString*>* value);
    // static public System.Boolean TryParse(System.String input, out System.DateTimeOffset result)
    // Offset: 0x1206708
    static bool TryParse(::Il2CppString* input, System::DateTimeOffset& result);
    // static private System.Void .cctor()
    // Offset: 0x120677C
    static void _cctor();
  }; // System.Net.Http.Headers.Parser/DateTime
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::DateTime*, "System.Net.Http.Headers", "Parser/DateTime");
#pragma pack(pop)
