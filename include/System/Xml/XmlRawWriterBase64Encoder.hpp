// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.Base64Encoder
#include "System/Xml/Base64Encoder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlRawWriter
  class XmlRawWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlRawWriterBase64Encoder
  class XmlRawWriterBase64Encoder : public System::Xml::Base64Encoder {
    public:
    // private System.Xml.XmlRawWriter rawWriter
    // Offset: 0x28
    System::Xml::XmlRawWriter* rawWriter;
    // Creating conversion operator: operator System::Xml::XmlRawWriter*
    constexpr operator System::Xml::XmlRawWriter*() const noexcept {
      return rawWriter;
    }
    // System.Void .ctor(System.Xml.XmlRawWriter rawWriter)
    // Offset: 0x1795BCC
    static XmlRawWriterBase64Encoder* New_ctor(System::Xml::XmlRawWriter* rawWriter);
    // override System.Void WriteChars(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x1796000
    // Implemented from: System.Xml.Base64Encoder
    // Base method: System.Void Base64Encoder::WriteChars(System.Char[] chars, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* chars, int index, int count);
  }; // System.Xml.XmlRawWriterBase64Encoder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlRawWriterBase64Encoder*, "System.Xml", "XmlRawWriterBase64Encoder");
#pragma pack(pop)
