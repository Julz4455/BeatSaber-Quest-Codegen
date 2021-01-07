// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  // Autogenerated type: System.KnownTerminals
  // [] Offset: FFFFFFFF
  class KnownTerminals : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: KnownTerminals
    KnownTerminals() noexcept {}
    // static public System.Byte[] get_linux()
    // Offset: 0x13B39C0
    static ::Array<uint8_t>* get_linux();
    // static public System.Byte[] get_xterm()
    // Offset: 0x13B3A2C
    static ::Array<uint8_t>* get_xterm();
    // static public System.Byte[] get_ansi()
    // Offset: 0x13B3A98
    static ::Array<uint8_t>* get_ansi();
  }; // System.KnownTerminals
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::KnownTerminals*, "System", "KnownTerminals");
#pragma pack(pop)
