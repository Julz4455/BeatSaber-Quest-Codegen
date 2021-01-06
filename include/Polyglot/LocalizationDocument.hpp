// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.GoogleDriveDownloadFormat
#include "Polyglot/GoogleDriveDownloadFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x31
  // Autogenerated type: Polyglot.LocalizationDocument
  // [] Offset: FFFFFFFF
  class LocalizationDocument : public ::Il2CppObject {
    public:
    // private System.String docsId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* docsId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String sheetId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* sheetId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private Polyglot.GoogleDriveDownloadFormat format
    // Size: 0x4
    // Offset: 0x20
    Polyglot::GoogleDriveDownloadFormat format;
    // Field size check
    static_assert(sizeof(Polyglot::GoogleDriveDownloadFormat) == 0x4);
    // Padding between fields: format and: textAsset
    char __padding2[0x4] = {};
    // private UnityEngine.TextAsset textAsset
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::TextAsset* textAsset;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAsset*) == 0x8);
    // private System.Boolean downloadOnStart
    // Size: 0x1
    // Offset: 0x30
    bool downloadOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LocalizationDocument
    LocalizationDocument(::Il2CppString* docsId_ = {}, ::Il2CppString* sheetId_ = {}, Polyglot::GoogleDriveDownloadFormat format_ = {}, UnityEngine::TextAsset* textAsset_ = {}, bool downloadOnStart_ = {}) noexcept : docsId{docsId_}, sheetId{sheetId_}, format{format_}, textAsset{textAsset_}, downloadOnStart{downloadOnStart_} {}
    // public UnityEngine.TextAsset get_TextAsset()
    // Offset: 0x1985FE4
    UnityEngine::TextAsset* get_TextAsset();
    // public System.Void set_TextAsset(UnityEngine.TextAsset value)
    // Offset: 0x1985FEC
    void set_TextAsset(UnityEngine::TextAsset* value);
    // public System.String get_DocsId()
    // Offset: 0x1985FF4
    ::Il2CppString* get_DocsId();
    // public System.Void set_DocsId(System.String value)
    // Offset: 0x1985FFC
    void set_DocsId(::Il2CppString* value);
    // public System.String get_SheetId()
    // Offset: 0x1986004
    ::Il2CppString* get_SheetId();
    // public System.Void set_SheetId(System.String value)
    // Offset: 0x198600C
    void set_SheetId(::Il2CppString* value);
    // public Polyglot.GoogleDriveDownloadFormat get_Format()
    // Offset: 0x1986014
    Polyglot::GoogleDriveDownloadFormat get_Format();
    // public System.Void set_Format(Polyglot.GoogleDriveDownloadFormat value)
    // Offset: 0x198601C
    void set_Format(Polyglot::GoogleDriveDownloadFormat value);
    // public System.Boolean get_DownloadOnStart()
    // Offset: 0x1986024
    bool get_DownloadOnStart();
    // public System.Void set_DownloadOnStart(System.Boolean value)
    // Offset: 0x198602C
    void set_DownloadOnStart(bool value);
    // public System.Void .ctor()
    // Offset: 0x1986038
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationDocument* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Polyglot").WithContext("LocalizationDocument").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationDocument*, creationType>()));
    }
  }; // Polyglot.LocalizationDocument
  static check_size<sizeof(LocalizationDocument), 48 + sizeof(bool)> __Polyglot_LocalizationDocumentSizeCheck;
  static_assert(sizeof(LocalizationDocument) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizationDocument*, "Polyglot", "LocalizationDocument");
#pragma pack(pop)
