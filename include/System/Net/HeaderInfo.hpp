// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HeaderParser
  class HeaderParser;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x29
  // Autogenerated type: System.Net.HeaderInfo
  // [] Offset: FFFFFFFF
  class HeaderInfo : public ::Il2CppObject {
    public:
    // readonly System.Boolean IsRequestRestricted
    // Size: 0x1
    // Offset: 0x10
    bool IsRequestRestricted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // readonly System.Boolean IsResponseRestricted
    // Size: 0x1
    // Offset: 0x11
    bool IsResponseRestricted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsResponseRestricted and: Parser
    char __padding1[0x6] = {};
    // readonly System.Net.HeaderParser Parser
    // Size: 0x8
    // Offset: 0x18
    System::Net::HeaderParser* Parser;
    // Field size check
    static_assert(sizeof(System::Net::HeaderParser*) == 0x8);
    // readonly System.String HeaderName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* HeaderName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // readonly System.Boolean AllowMultiValues
    // Size: 0x1
    // Offset: 0x28
    bool AllowMultiValues;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HeaderInfo
    HeaderInfo(bool IsRequestRestricted_ = {}, bool IsResponseRestricted_ = {}, System::Net::HeaderParser* Parser_ = {}, ::Il2CppString* HeaderName_ = {}, bool AllowMultiValues_ = {}) noexcept : IsRequestRestricted{IsRequestRestricted_}, IsResponseRestricted{IsResponseRestricted_}, Parser{Parser_}, HeaderName{HeaderName_}, AllowMultiValues{AllowMultiValues_} {}
    // System.Void .ctor(System.String name, System.Boolean requestRestricted, System.Boolean responseRestricted, System.Boolean multi, System.Net.HeaderParser p)
    // Offset: 0x12A7878
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeaderInfo* New_ctor(::Il2CppString* name, bool requestRestricted, bool responseRestricted, bool multi, System::Net::HeaderParser* p) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HeaderInfo").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeaderInfo*, creationType>(name, requestRestricted, responseRestricted, multi, p)));
    }
  }; // System.Net.HeaderInfo
  static check_size<sizeof(HeaderInfo), 40 + sizeof(bool)> __System_Net_HeaderInfoSizeCheck;
  static_assert(sizeof(HeaderInfo) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HeaderInfo*, "System.Net", "HeaderInfo");
#pragma pack(pop)
