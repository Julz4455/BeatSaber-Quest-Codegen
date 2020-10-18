// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelMissionParser
  class LevelMissionParser : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::LevelMissionParser::ParserFunction
    class ParserFunction;
    // private System.Collections.Generic.Dictionary`2<System.String,LevelMissionParser/ParserFunction> _functions
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelMissionParser::ParserFunction*>* functions;
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelMissionParser::ParserFunction*>*
    constexpr operator System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelMissionParser::ParserFunction*>*() const noexcept {
      return functions;
    }
    // public System.Void AddFunction(System.String name, LevelMissionParser/ParserFunction function)
    // Offset: 0x1027564
    void AddFunction(::Il2CppString* name, GlobalNamespace::LevelMissionParser::ParserFunction* function);
    // public System.Boolean Parse(System.String s)
    // Offset: 0x10275D4
    bool Parse(::Il2CppString* s);
    // private System.Boolean Parse(System.String s, System.Int32 start, System.Int32 length)
    // Offset: 0x10275F0
    bool Parse(::Il2CppString* s, int start, int length);
    // private System.Boolean ParseFunction(System.String s, System.Int32 start, System.Int32 length)
    // Offset: 0x10278CC
    bool ParseFunction(::Il2CppString* s, int start, int length);
    // public System.Void .ctor()
    // Offset: 0x10274E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LevelMissionParser* New_ctor();
  }; // LevelMissionParser
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelMissionParser*, "", "LevelMissionParser");
#pragma pack(pop)
