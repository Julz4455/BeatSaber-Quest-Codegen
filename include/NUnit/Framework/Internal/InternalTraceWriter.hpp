// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.InternalTraceWriter
  class InternalTraceWriter : public System::IO::TextWriter {
    public:
    // private System.IO.TextWriter writer
    // Offset: 0x28
    System::IO::TextWriter* writer;
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x2173870
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
  }; // NUnit.Framework.Internal.InternalTraceWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::InternalTraceWriter*, "NUnit.Framework.Internal", "InternalTraceWriter");
#pragma pack(pop)
