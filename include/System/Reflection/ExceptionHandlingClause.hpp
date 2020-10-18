// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.ExceptionHandlingClauseOptions
#include "System/Reflection/ExceptionHandlingClauseOptions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.ExceptionHandlingClause
  class ExceptionHandlingClause : public ::Il2CppObject {
    public:
    // System.Type catch_type
    // Offset: 0x10
    System::Type* catch_type;
    // System.Int32 filter_offset
    // Offset: 0x18
    int filter_offset;
    // System.Reflection.ExceptionHandlingClauseOptions flags
    // Offset: 0x1C
    System::Reflection::ExceptionHandlingClauseOptions flags;
    // System.Int32 try_offset
    // Offset: 0x20
    int try_offset;
    // System.Int32 try_length
    // Offset: 0x24
    int try_length;
    // System.Int32 handler_offset
    // Offset: 0x28
    int handler_offset;
    // System.Int32 handler_length
    // Offset: 0x2C
    int handler_length;
    // protected System.Void .ctor()
    // Offset: 0x18CBEB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ExceptionHandlingClause* New_ctor();
    // public override System.String ToString()
    // Offset: 0x18CBEBC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Reflection.ExceptionHandlingClause
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ExceptionHandlingClause*, "System.Reflection", "ExceptionHandlingClause");
#pragma pack(pop)
