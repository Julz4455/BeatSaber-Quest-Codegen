// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlWellFormedWriter
#include "System/Xml/XmlWellFormedWriter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlWellFormedWriter/AttributeValueCache
  class XmlWellFormedWriter::AttributeValueCache : public ::Il2CppObject {
    public:
    // Nested type: System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType
    struct ItemType;
    // Nested type: System::Xml::XmlWellFormedWriter::AttributeValueCache::Item
    class Item;
    // Nested type: System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk
    class BufferChunk;
    // private System.Text.StringBuilder stringValue
    // Offset: 0x10
    System::Text::StringBuilder* stringValue;
    // private System.String singleStringValue
    // Offset: 0x18
    ::Il2CppString* singleStringValue;
    // private System.Xml.XmlWellFormedWriter/AttributeValueCache/Item[] items
    // Offset: 0x20
    ::Array<System::Xml::XmlWellFormedWriter::AttributeValueCache::Item*>* items;
    // private System.Int32 firstItem
    // Offset: 0x28
    int firstItem;
    // private System.Int32 lastItem
    // Offset: 0x2C
    int lastItem;
    // System.String get_StringValue()
    // Offset: 0x21F4C24
    ::Il2CppString* get_StringValue();
    // System.Void WriteEntityRef(System.String name)
    // Offset: 0x21F4C54
    void WriteEntityRef(::Il2CppString* name);
    // System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x21F4FD4
    void WriteCharEntity(::Il2CppChar ch);
    // System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x21F5070
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // System.Void WriteWhitespace(System.String ws)
    // Offset: 0x21F5144
    void WriteWhitespace(::Il2CppString* ws);
    // System.Void WriteString(System.String text)
    // Offset: 0x21F5198
    void WriteString(::Il2CppString* text);
    // System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x21F5210
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x21F5324
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // System.Void WriteRaw(System.String data)
    // Offset: 0x21F53EC
    void WriteRaw(::Il2CppString* data);
    // System.Void WriteValue(System.String value)
    // Offset: 0x21F5440
    void WriteValue(::Il2CppString* value);
    // System.Void Replay(System.Xml.XmlWriter writer)
    // Offset: 0x21F5494
    void Replay(System::Xml::XmlWriter* writer);
    // System.Void Trim()
    // Offset: 0x21F57A0
    void Trim();
    // System.Void Clear()
    // Offset: 0x21F5C5C
    void Clear();
    // private System.Void StartComplexValue()
    // Offset: 0x21F4DD0
    void StartComplexValue();
    // private System.Void AddItem(System.Xml.XmlWellFormedWriter/AttributeValueCache/ItemType type, System.Object data)
    // Offset: 0x21F4E24
    void AddItem(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType type, ::Il2CppObject* data);
    // public System.Void .ctor()
    // Offset: 0x21F5CBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static XmlWellFormedWriter::AttributeValueCache* New_ctor();
  }; // System.Xml.XmlWellFormedWriter/AttributeValueCache
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::AttributeValueCache*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache");
#pragma pack(pop)
