// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: Punycode
  class Punycode;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.IdnMapping
  // [] Offset: FFFFFFFF
  class IdnMapping : public ::Il2CppObject {
    public:
    // private System.Boolean allow_unassigned
    // Size: 0x1
    // Offset: 0x10
    bool allow_unassigned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean use_std3
    // Size: 0x1
    // Offset: 0x11
    bool use_std3;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: use_std3 and: puny
    char __padding1[0x6] = {};
    // private System.Globalization.Punycode puny
    // Size: 0x8
    // Offset: 0x18
    System::Globalization::Punycode* puny;
    // Field size check
    static_assert(sizeof(System::Globalization::Punycode*) == 0x8);
    // Creating value type constructor for type: IdnMapping
    IdnMapping(bool allow_unassigned_ = {}, bool use_std3_ = {}, System::Globalization::Punycode* puny_ = {}) noexcept : allow_unassigned{allow_unassigned_}, use_std3{use_std3_}, puny{puny_} {}
    // public System.String GetAscii(System.String unicode)
    // Offset: 0x19AF9C4
    ::Il2CppString* GetAscii(::Il2CppString* unicode);
    // public System.String GetAscii(System.String unicode, System.Int32 index, System.Int32 count)
    // Offset: 0x19AFA60
    ::Il2CppString* GetAscii(::Il2CppString* unicode, int index, int count);
    // private System.String Convert(System.String input, System.Int32 index, System.Int32 count, System.Boolean toAscii)
    // Offset: 0x19AFB70
    ::Il2CppString* Convert(::Il2CppString* input, int index, int count, bool toAscii);
    // private System.String ToAscii(System.String s, System.Int32 offset)
    // Offset: 0x19AFD9C
    ::Il2CppString* ToAscii(::Il2CppString* s, int offset);
    // private System.Void VerifyLength(System.String s, System.Int32 offset)
    // Offset: 0x19B0504
    void VerifyLength(::Il2CppString* s, int offset);
    // private System.String NamePrep(System.String s, System.Int32 offset)
    // Offset: 0x19B01B8
    ::Il2CppString* NamePrep(::Il2CppString* s, int offset);
    // private System.Void VerifyProhibitedCharacters(System.String s, System.Int32 offset)
    // Offset: 0x19B05FC
    void VerifyProhibitedCharacters(::Il2CppString* s, int offset);
    // private System.Void VerifyStd3AsciiRules(System.String s, System.Int32 offset)
    // Offset: 0x19B0314
    void VerifyStd3AsciiRules(::Il2CppString* s, int offset);
    // public System.String GetUnicode(System.String ascii)
    // Offset: 0x19B0848
    ::Il2CppString* GetUnicode(::Il2CppString* ascii);
    // public System.String GetUnicode(System.String ascii, System.Int32 index, System.Int32 count)
    // Offset: 0x19B08E4
    ::Il2CppString* GetUnicode(::Il2CppString* ascii, int index, int count);
    // private System.String ToUnicode(System.String s, System.Int32 offset)
    // Offset: 0x19AFFDC
    ::Il2CppString* ToUnicode(::Il2CppString* s, int offset);
    // public System.Void .ctor()
    // Offset: 0x19AF87C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IdnMapping* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::IdnMapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IdnMapping*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19AF8F0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19AF9A8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Globalization.IdnMapping
  #pragma pack(pop)
  static check_size<sizeof(IdnMapping), 24 + sizeof(System::Globalization::Punycode*)> __System_Globalization_IdnMappingSizeCheck;
  static_assert(sizeof(IdnMapping) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::IdnMapping*, "System.Globalization", "IdnMapping");
