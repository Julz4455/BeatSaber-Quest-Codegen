// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.HeaderInfo
#include "System/Net/Http/Headers/HeaderInfo.hpp"
// Including type: System.Net.Http.Headers.HeaderInfo/HeaderTypeInfo`2
#include "System/Net/Http/Headers/HeaderInfo_HeaderTypeInfo_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: TryParseListDelegate`1<T>
  template<typename T>
  class TryParseListDelegate_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.HeaderInfo/CollectionHeaderTypeInfo`2
  template<typename T, typename U>
  class HeaderInfo::CollectionHeaderTypeInfo_2 : public System::Net::Http::Headers::HeaderInfo::HeaderTypeInfo_2<T, U> {
    public:
    // private readonly System.Int32 minimalCount
    // Offset: 0x0
    int minimalCount;
    // private readonly System.String separator
    // Offset: 0x0
    ::Il2CppString* separator;
    // private readonly System.Net.Http.Headers.TryParseListDelegate`1<T> parser
    // Offset: 0x0
    System::Net::Http::Headers::TryParseListDelegate_1<T>* parser;
    // Deleting conversion operator: operator System::Net::Http::Headers::TryParseDelegate_1<T>*
    constexpr operator System::Net::Http::Headers::TryParseDelegate_1<T>*() const noexcept = delete;
    // public System.Void .ctor(System.String name, System.Net.Http.Headers.TryParseListDelegate`1<T> parser, System.Net.Http.Headers.HttpHeaderKind headerKind, System.Int32 minimalCount, System.String separator)
    // Offset: 0xFFFFFFFF
    static HeaderInfo::CollectionHeaderTypeInfo_2<T, U>* New_ctor(::Il2CppString* name, System::Net::Http::Headers::TryParseListDelegate_1<T>* parser, System::Net::Http::Headers::HttpHeaderKind headerKind, int minimalCount, ::Il2CppString* separator) {
      return THROW_UNLESS((il2cpp_utils::New<HeaderInfo::CollectionHeaderTypeInfo_2<T, U>*>(name, parser, headerKind, minimalCount, separator)));
    }
    // public override System.String get_Separator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Net.Http.Headers.HeaderInfo
    // Base method: System.String HeaderInfo::get_Separator()
    ::Il2CppString* get_Separator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Separator"));
    }
    // public override System.Boolean TryParse(System.String value, out System.Object result)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Net.Http.Headers.HeaderInfo/HeaderTypeInfo`2
    // Base method: System.Boolean HeaderTypeInfo_2::TryParse(System.String value, out System.Object result)
    bool TryParse(::Il2CppString* value, ::Il2CppObject*& result) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryParse", value, result));
    }
  }; // System.Net.Http.Headers.HeaderInfo/CollectionHeaderTypeInfo`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::Http::Headers::HeaderInfo::CollectionHeaderTypeInfo_2, "System.Net.Http.Headers", "HeaderInfo/CollectionHeaderTypeInfo`2");
#pragma pack(pop)
