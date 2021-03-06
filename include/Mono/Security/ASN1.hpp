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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.ASN1
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CB4928
  class ASN1 : public ::Il2CppObject {
    public:
    // private System.Byte m_nTag
    // Size: 0x1
    // Offset: 0x10
    uint8_t m_nTag;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: m_nTag and: m_aValue
    char __padding0[0x7] = {};
    // private System.Byte[] m_aValue
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* m_aValue;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Collections.ArrayList elist
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ArrayList* elist;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: ASN1
    ASN1(uint8_t m_nTag_ = {}, ::Array<uint8_t>* m_aValue_ = {}, System::Collections::ArrayList* elist_ = {}) noexcept : m_nTag{m_nTag_}, m_aValue{m_aValue_}, elist{elist_} {}
    // public System.Void .ctor(System.Byte tag)
    // Offset: 0x1BE7704
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ASN1* New_ctor(uint8_t tag) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::ASN1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ASN1*, creationType>(tag)));
    }
    // public System.Void .ctor(System.Byte tag, System.Byte[] data)
    // Offset: 0x1BE773C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ASN1* New_ctor(uint8_t tag, ::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::ASN1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ASN1*, creationType>(tag, data)));
    }
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1BE7780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ASN1* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::ASN1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ASN1*, creationType>(data)));
    }
    // public System.Int32 get_Count()
    // Offset: 0x1BE7A48
    int get_Count();
    // public System.Byte get_Tag()
    // Offset: 0x1BE7A64
    uint8_t get_Tag();
    // public System.Int32 get_Length()
    // Offset: 0x1BE7A6C
    int get_Length();
    // public System.Byte[] get_Value()
    // Offset: 0x1BE7A84
    ::Array<uint8_t>* get_Value();
    // public System.Void set_Value(System.Byte[] value)
    // Offset: 0x1BE7B1C
    void set_Value(::Array<uint8_t>* value);
    // private System.Boolean CompareArray(System.Byte[] array1, System.Byte[] array2)
    // Offset: 0x1BE7BC4
    bool CompareArray(::Array<uint8_t>* array1, ::Array<uint8_t>* array2);
    // public System.Boolean CompareValue(System.Byte[] value)
    // Offset: 0x1BE7C40
    bool CompareValue(::Array<uint8_t>* value);
    // public Mono.Security.ASN1 Add(Mono.Security.ASN1 asn1)
    // Offset: 0x1BE7C50
    Mono::Security::ASN1* Add(Mono::Security::ASN1* asn1);
    // public System.Byte[] GetBytes()
    // Offset: 0x1BE7CF8
    ::Array<uint8_t>* GetBytes();
    // protected System.Void Decode(System.Byte[] asn1, ref System.Int32 anPos, System.Int32 anLength)
    // Offset: 0x1BE7910
    void Decode(::Array<uint8_t>* asn1, int& anPos, int anLength);
    // protected System.Void DecodeTLV(System.Byte[] asn1, ref System.Int32 pos, out System.Byte tag, out System.Int32 length, out System.Byte[] content)
    // Offset: 0x1BE8320
    void DecodeTLV(::Array<uint8_t>* asn1, int& pos, uint8_t& tag, int& length, ::Array<uint8_t>*& content);
    // public Mono.Security.ASN1 get_Item(System.Int32 index)
    // Offset: 0x1BE846C
    Mono::Security::ASN1* get_Item(int index);
    // public Mono.Security.ASN1 Element(System.Int32 index, System.Byte anTag)
    // Offset: 0x1BE85AC
    Mono::Security::ASN1* Element(int index, uint8_t anTag);
    // public override System.String ToString()
    // Offset: 0x1BE8708
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Security.ASN1
  #pragma pack(pop)
  static check_size<sizeof(ASN1), 32 + sizeof(System::Collections::ArrayList*)> __Mono_Security_ASN1SizeCheck;
  static_assert(sizeof(ASN1) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::ASN1*, "Mono.Security", "ASN1");
