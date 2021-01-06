// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.NewLineHandling
#include "System/Xml/NewLineHandling.hpp"
// Including type: System.Xml.TriState
#include "System/Xml/TriState.hpp"
// Including type: System.Xml.NamespaceHandling
#include "System/Xml/NamespaceHandling.hpp"
// Including type: System.Xml.ConformanceLevel
#include "System/Xml/ConformanceLevel.hpp"
// Including type: System.Xml.XmlOutputMethod
#include "System/Xml/XmlOutputMethod.hpp"
// Including type: System.Xml.XmlStandalone
#include "System/Xml/XmlStandalone.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x86
  // Autogenerated type: System.Xml.XmlWriterSettings
  // [] Offset: FFFFFFFF
  class XmlWriterSettings : public ::Il2CppObject {
    public:
    // private System.Boolean useAsync
    // Size: 0x1
    // Offset: 0x10
    bool useAsync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAsync and: encoding
    char __padding0[0x7] = {};
    // private System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x18
    System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Boolean omitXmlDecl
    // Size: 0x1
    // Offset: 0x20
    bool omitXmlDecl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: omitXmlDecl and: newLineHandling
    char __padding2[0x3] = {};
    // private System.Xml.NewLineHandling newLineHandling
    // Size: 0x4
    // Offset: 0x24
    System::Xml::NewLineHandling newLineHandling;
    // Field size check
    static_assert(sizeof(System::Xml::NewLineHandling) == 0x4);
    // private System.String newLineChars
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* newLineChars;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Xml.TriState indent
    // Size: 0x4
    // Offset: 0x30
    System::Xml::TriState indent;
    // Field size check
    static_assert(sizeof(System::Xml::TriState) == 0x4);
    // Padding between fields: indent and: indentChars
    char __padding5[0x4] = {};
    // private System.String indentChars
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* indentChars;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean newLineOnAttributes
    // Size: 0x1
    // Offset: 0x40
    bool newLineOnAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean closeOutput
    // Size: 0x1
    // Offset: 0x41
    bool closeOutput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closeOutput and: namespaceHandling
    char __padding8[0x2] = {};
    // private System.Xml.NamespaceHandling namespaceHandling
    // Size: 0x4
    // Offset: 0x44
    System::Xml::NamespaceHandling namespaceHandling;
    // Field size check
    static_assert(sizeof(System::Xml::NamespaceHandling) == 0x4);
    // private System.Xml.ConformanceLevel conformanceLevel
    // Size: 0x4
    // Offset: 0x48
    System::Xml::ConformanceLevel conformanceLevel;
    // Field size check
    static_assert(sizeof(System::Xml::ConformanceLevel) == 0x4);
    // private System.Boolean checkCharacters
    // Size: 0x1
    // Offset: 0x4C
    bool checkCharacters;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean writeEndDocumentOnClose
    // Size: 0x1
    // Offset: 0x4D
    bool writeEndDocumentOnClose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: writeEndDocumentOnClose and: outputMethod
    char __padding12[0x2] = {};
    // private System.Xml.XmlOutputMethod outputMethod
    // Size: 0x4
    // Offset: 0x50
    System::Xml::XmlOutputMethod outputMethod;
    // Field size check
    static_assert(sizeof(System::Xml::XmlOutputMethod) == 0x4);
    // Padding between fields: outputMethod and: cdataSections
    char __padding13[0x4] = {};
    // private System.Collections.Generic.List`1<System.Xml.XmlQualifiedName> cdataSections
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>* cdataSections;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>*) == 0x8);
    // private System.Boolean doNotEscapeUriAttributes
    // Size: 0x1
    // Offset: 0x60
    bool doNotEscapeUriAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean mergeCDataSections
    // Size: 0x1
    // Offset: 0x61
    bool mergeCDataSections;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mergeCDataSections and: mediaType
    char __padding16[0x6] = {};
    // private System.String mediaType
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* mediaType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String docTypeSystem
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* docTypeSystem;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String docTypePublic
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* docTypePublic;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Xml.XmlStandalone standalone
    // Size: 0x4
    // Offset: 0x80
    System::Xml::XmlStandalone standalone;
    // Field size check
    static_assert(sizeof(System::Xml::XmlStandalone) == 0x4);
    // private System.Boolean autoXmlDecl
    // Size: 0x1
    // Offset: 0x84
    bool autoXmlDecl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isReadOnly
    // Size: 0x1
    // Offset: 0x85
    bool isReadOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: XmlWriterSettings
    XmlWriterSettings(bool useAsync_ = {}, System::Text::Encoding* encoding_ = {}, bool omitXmlDecl_ = {}, System::Xml::NewLineHandling newLineHandling_ = {}, ::Il2CppString* newLineChars_ = {}, System::Xml::TriState indent_ = {}, ::Il2CppString* indentChars_ = {}, bool newLineOnAttributes_ = {}, bool closeOutput_ = {}, System::Xml::NamespaceHandling namespaceHandling_ = {}, System::Xml::ConformanceLevel conformanceLevel_ = {}, bool checkCharacters_ = {}, bool writeEndDocumentOnClose_ = {}, System::Xml::XmlOutputMethod outputMethod_ = {}, System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>* cdataSections_ = {}, bool doNotEscapeUriAttributes_ = {}, bool mergeCDataSections_ = {}, ::Il2CppString* mediaType_ = {}, ::Il2CppString* docTypeSystem_ = {}, ::Il2CppString* docTypePublic_ = {}, System::Xml::XmlStandalone standalone_ = {}, bool autoXmlDecl_ = {}, bool isReadOnly_ = {}) noexcept : useAsync{useAsync_}, encoding{encoding_}, omitXmlDecl{omitXmlDecl_}, newLineHandling{newLineHandling_}, newLineChars{newLineChars_}, indent{indent_}, indentChars{indentChars_}, newLineOnAttributes{newLineOnAttributes_}, closeOutput{closeOutput_}, namespaceHandling{namespaceHandling_}, conformanceLevel{conformanceLevel_}, checkCharacters{checkCharacters_}, writeEndDocumentOnClose{writeEndDocumentOnClose_}, outputMethod{outputMethod_}, cdataSections{cdataSections_}, doNotEscapeUriAttributes{doNotEscapeUriAttributes_}, mergeCDataSections{mergeCDataSections_}, mediaType{mediaType_}, docTypeSystem{docTypeSystem_}, docTypePublic{docTypePublic_}, standalone{standalone_}, autoXmlDecl{autoXmlDecl_}, isReadOnly{isReadOnly_} {}
    // public System.Boolean get_Async()
    // Offset: 0x19DAE28
    bool get_Async();
    // public System.Text.Encoding get_Encoding()
    // Offset: 0x19DAE30
    System::Text::Encoding* get_Encoding();
    // public System.Boolean get_OmitXmlDeclaration()
    // Offset: 0x19DAE38
    bool get_OmitXmlDeclaration();
    // public System.Xml.NewLineHandling get_NewLineHandling()
    // Offset: 0x19DAE40
    System::Xml::NewLineHandling get_NewLineHandling();
    // public System.String get_NewLineChars()
    // Offset: 0x19DAE48
    ::Il2CppString* get_NewLineChars();
    // public System.Boolean get_Indent()
    // Offset: 0x19DAE50
    bool get_Indent();
    // public System.Void set_Indent(System.Boolean value)
    // Offset: 0x19DAE60
    void set_Indent(bool value);
    // public System.String get_IndentChars()
    // Offset: 0x19DAFA8
    ::Il2CppString* get_IndentChars();
    // public System.Boolean get_NewLineOnAttributes()
    // Offset: 0x19DAFB0
    bool get_NewLineOnAttributes();
    // public System.Boolean get_CloseOutput()
    // Offset: 0x19DAFB8
    bool get_CloseOutput();
    // public System.Xml.ConformanceLevel get_ConformanceLevel()
    // Offset: 0x19DAFC0
    System::Xml::ConformanceLevel get_ConformanceLevel();
    // public System.Void set_ConformanceLevel(System.Xml.ConformanceLevel value)
    // Offset: 0x19DAFC8
    void set_ConformanceLevel(System::Xml::ConformanceLevel value);
    // public System.Boolean get_CheckCharacters()
    // Offset: 0x19DB070
    bool get_CheckCharacters();
    // public System.Xml.NamespaceHandling get_NamespaceHandling()
    // Offset: 0x19DB078
    System::Xml::NamespaceHandling get_NamespaceHandling();
    // public System.Boolean get_WriteEndDocumentOnClose()
    // Offset: 0x19DB080
    bool get_WriteEndDocumentOnClose();
    // public System.Xml.XmlOutputMethod get_OutputMethod()
    // Offset: 0x19DB088
    System::Xml::XmlOutputMethod get_OutputMethod();
    // System.Void set_OutputMethod(System.Xml.XmlOutputMethod value)
    // Offset: 0x19DB090
    void set_OutputMethod(System::Xml::XmlOutputMethod value);
    // public System.Xml.XmlWriterSettings Clone()
    // Offset: 0x19DB098
    System::Xml::XmlWriterSettings* Clone();
    // System.Collections.Generic.List`1<System.Xml.XmlQualifiedName> get_CDataSectionElements()
    // Offset: 0x19DB15C
    System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>* get_CDataSectionElements();
    // public System.Boolean get_DoNotEscapeUriAttributes()
    // Offset: 0x19DB164
    bool get_DoNotEscapeUriAttributes();
    // System.Boolean get_MergeCDataSections()
    // Offset: 0x19DB16C
    bool get_MergeCDataSections();
    // System.String get_MediaType()
    // Offset: 0x19DB174
    ::Il2CppString* get_MediaType();
    // System.String get_DocTypeSystem()
    // Offset: 0x19DB17C
    ::Il2CppString* get_DocTypeSystem();
    // System.String get_DocTypePublic()
    // Offset: 0x19DB184
    ::Il2CppString* get_DocTypePublic();
    // System.Xml.XmlStandalone get_Standalone()
    // Offset: 0x19DB18C
    System::Xml::XmlStandalone get_Standalone();
    // System.Boolean get_AutoXmlDeclaration()
    // Offset: 0x19DB194
    bool get_AutoXmlDeclaration();
    // System.Xml.TriState get_IndentInternal()
    // Offset: 0x19DB19C
    System::Xml::TriState get_IndentInternal();
    // System.Boolean get_IsQuerySpecific()
    // Offset: 0x19DB1A4
    bool get_IsQuerySpecific();
    // System.Xml.XmlWriter CreateWriter(System.IO.Stream output)
    // Offset: 0x19DA640
    System::Xml::XmlWriter* CreateWriter(System::IO::Stream* output);
    // System.Xml.XmlWriter CreateWriter(System.IO.TextWriter output)
    // Offset: 0x19DAA78
    System::Xml::XmlWriter* CreateWriter(System::IO::TextWriter* output);
    // System.Void set_ReadOnly(System.Boolean value)
    // Offset: 0x19DB21C
    void set_ReadOnly(bool value);
    // private System.Void CheckReadOnly(System.String propertyName)
    // Offset: 0x19DAED0
    void CheckReadOnly(::Il2CppString* propertyName);
    // private System.Void Initialize()
    // Offset: 0x19DAD10
    void Initialize();
    // public System.Void .ctor()
    // Offset: 0x19DA5BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlWriterSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Xml").WithContext("XmlWriterSettings").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlWriterSettings*, creationType>()));
    }
  }; // System.Xml.XmlWriterSettings
  static check_size<sizeof(XmlWriterSettings), 133 + sizeof(bool)> __System_Xml_XmlWriterSettingsSizeCheck;
  static_assert(sizeof(XmlWriterSettings) == 0x86);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWriterSettings*, "System.Xml", "XmlWriterSettings");
#pragma pack(pop)
