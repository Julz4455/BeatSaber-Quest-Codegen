// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchOption
  struct SearchOption;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  // Autogenerated type: System.IO.FileSystemEnumerableFactory
  // [] Offset: FFFFFFFF
  class FileSystemEnumerableFactory : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: FileSystemEnumerableFactory
    FileSystemEnumerableFactory() noexcept {}
    // static System.Collections.Generic.IEnumerable`1<System.String> CreateFileNameIterator(System.String path, System.String originalUserPath, System.String searchPattern, System.Boolean includeFiles, System.Boolean includeDirs, System.IO.SearchOption searchOption, System.Boolean checkHost)
    // Offset: 0x1433CF0
    static System::Collections::Generic::IEnumerable_1<::Il2CppString*>* CreateFileNameIterator(::Il2CppString* path, ::Il2CppString* originalUserPath, ::Il2CppString* searchPattern, bool includeFiles, bool includeDirs, System::IO::SearchOption searchOption, bool checkHost);
  }; // System.IO.FileSystemEnumerableFactory
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemEnumerableFactory*, "System.IO", "FileSystemEnumerableFactory");
#pragma pack(pop)
