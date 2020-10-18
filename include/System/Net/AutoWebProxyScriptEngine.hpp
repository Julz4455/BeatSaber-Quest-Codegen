// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.AutoWebProxyScriptEngine
  class AutoWebProxyScriptEngine : public ::Il2CppObject {
    public:
    // public System.Boolean GetProxies(System.Uri destination, out System.Collections.Generic.IList`1<System.String> proxyList)
    // Offset: 0x14D5C5C
    bool GetProxies(System::Uri* destination, System::Collections::Generic::IList_1<::Il2CppString*>*& proxyList);
    // public System.Boolean GetProxies(System.Uri destination, out System.Collections.Generic.IList`1<System.String> proxyList, ref System.Int32 syncStatus)
    // Offset: 0x14D5C80
    bool GetProxies(System::Uri* destination, System::Collections::Generic::IList_1<::Il2CppString*>*& proxyList, int& syncStatus);
  }; // System.Net.AutoWebProxyScriptEngine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::AutoWebProxyScriptEngine*, "System.Net", "AutoWebProxyScriptEngine");
#pragma pack(pop)
