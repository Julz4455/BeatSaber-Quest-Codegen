// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlUtf8RawTextWriter
#include "System/Xml/XmlUtf8RawTextWriter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
  // Skipping declaration: XmlStandalone because it is already included!
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.TextUtf8RawTextWriter
  class TextUtf8RawTextWriter : public System::Xml::XmlUtf8RawTextWriter {
    public:
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x178D6F0
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    static TextUtf8RawTextWriter* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings);
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x178D6F4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x178D6F8
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::Il2CppString* xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x178D6FC
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x178D700
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x178D704
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x178D708
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x178D70C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::StartElementContent()
    void StartElementContent();
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x178D710
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x178D71C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // override System.Void WriteNamespaceDeclaration(System.String prefix, System.String ns)
    // Offset: 0x178D724
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteNamespaceDeclaration(System.String prefix, System.String ns)
    void WriteNamespaceDeclaration(::Il2CppString* prefix, ::Il2CppString* ns);
    // override System.Boolean get_SupportsNamespaceDeclarationInChunks()
    // Offset: 0x178D728
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Boolean XmlUtf8RawTextWriter::get_SupportsNamespaceDeclarationInChunks()
    bool get_SupportsNamespaceDeclarationInChunks();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x178D730
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x178D780
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x178D784
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x178D788
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x178D78C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x178D790
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x178D794
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String textBlock)
    // Offset: 0x178D7A4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteString(System.String textBlock)
    void WriteString(::Il2CppString* textBlock);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x178D7B4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x178D818
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x178D828
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
  }; // System.Xml.TextUtf8RawTextWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::TextUtf8RawTextWriter*, "System.Xml", "TextUtf8RawTextWriter");
#pragma pack(pop)
