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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FileCompressionHelper
  class FileCompressionHelper : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: GlobalNamespace::FileCompressionHelper::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // static public System.Void CreateZipFromDirectoryAsync(System.String sourceDirectoryName, System.String destinationArchiveFileName, System.Action`1<System.Boolean> finishCallback)
    // Offset: 0x10969F0
    static void CreateZipFromDirectoryAsync(::Il2CppString* sourceDirectoryName, ::Il2CppString* destinationArchiveFileName, System::Action_1<bool>* finishCallback);
    // static public System.Void ExtractZipToDirectoryAsync(System.String sourceArchiveFileName, System.String destinationDirectoryName, System.Action`1<System.Boolean> finishCallback)
    // Offset: 0x1096D10
    static void ExtractZipToDirectoryAsync(::Il2CppString* sourceArchiveFileName, ::Il2CppString* destinationDirectoryName, System::Action_1<bool>* finishCallback);
    // static public System.Boolean CreateZipFromDirectory(System.String sourceDirectoryName, System.String destinationArchiveFileName)
    // Offset: 0x1096E38
    static bool CreateZipFromDirectory(::Il2CppString* sourceDirectoryName, ::Il2CppString* destinationArchiveFileName);
    // static public System.Boolean ExtractZipToDirectory(System.String sourceArchiveFileName, System.String destinationDirectoryName)
    // Offset: 0x1096ED8
    static bool ExtractZipToDirectory(::Il2CppString* sourceArchiveFileName, ::Il2CppString* destinationDirectoryName);
    // public System.Void .ctor()
    // Offset: 0x1096F78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FileCompressionHelper* New_ctor();
  }; // FileCompressionHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileCompressionHelper*, "", "FileCompressionHelper");
#pragma pack(pop)
