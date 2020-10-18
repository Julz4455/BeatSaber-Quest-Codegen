// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyCopyrightAttribute
  class AssemblyCopyrightAttribute : public System::Attribute {
    public:
    // private System.String m_copyright
    // Offset: 0x10
    ::Il2CppString* m_copyright;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_copyright;
    }
    // public System.Void .ctor(System.String copyright)
    // Offset: 0x1AB8D48
    static AssemblyCopyrightAttribute* New_ctor(::Il2CppString* copyright);
  }; // System.Reflection.AssemblyCopyrightAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyCopyrightAttribute*, "System.Reflection", "AssemblyCopyrightAttribute");
#pragma pack(pop)
