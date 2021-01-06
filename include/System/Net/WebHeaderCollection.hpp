// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.NameValueCollection
#include "System/Collections/Specialized/NameValueCollection.hpp"
// Including type: System.Net.WebHeaderCollectionType
#include "System/Net/WebHeaderCollectionType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HeaderInfoTable
  class HeaderInfoTable;
  // Forward declaring type: HttpRequestHeader
  struct HttpRequestHeader;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x72
  // Autogenerated type: System.Net.WebHeaderCollection
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D457A4
  // [DefaultMemberAttribute] Offset: D457A4
  class WebHeaderCollection : public System::Collections::Specialized::NameValueCollection {
    public:
    // Nested type: System::Net::WebHeaderCollection::RfcChar
    struct RfcChar;
    // private System.String[] m_CommonHeaders
    // Size: 0x8
    // Offset: 0x58
    ::Array<::Il2CppString*>* m_CommonHeaders;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Int32 m_NumCommonHeaders
    // Size: 0x4
    // Offset: 0x60
    int m_NumCommonHeaders;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_NumCommonHeaders and: m_InnerCollection
    char __padding1[0x4] = {};
    // private System.Collections.Specialized.NameValueCollection m_InnerCollection
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Specialized::NameValueCollection* m_InnerCollection;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::NameValueCollection*) == 0x8);
    // private System.Net.WebHeaderCollectionType m_Type
    // Size: 0x2
    // Offset: 0x70
    System::Net::WebHeaderCollectionType m_Type;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollectionType) == 0x2);
    // Creating value type constructor for type: WebHeaderCollection
    WebHeaderCollection(::Array<::Il2CppString*>* m_CommonHeaders_ = {}, int m_NumCommonHeaders_ = {}, System::Collections::Specialized::NameValueCollection* m_InnerCollection_ = {}, System::Net::WebHeaderCollectionType m_Type_ = {}) noexcept : m_CommonHeaders{m_CommonHeaders_}, m_NumCommonHeaders{m_NumCommonHeaders_}, m_InnerCollection{m_InnerCollection_}, m_Type{m_Type_} {}
    // Get static field: static private readonly System.Net.HeaderInfoTable HInfo
    static System::Net::HeaderInfoTable* _get_HInfo();
    // Set static field: static private readonly System.Net.HeaderInfoTable HInfo
    static void _set_HInfo(System::Net::HeaderInfoTable* value);
    // Get static field: static private readonly System.String[] s_CommonHeaderNames
    static ::Array<::Il2CppString*>* _get_s_CommonHeaderNames();
    // Set static field: static private readonly System.String[] s_CommonHeaderNames
    static void _set_s_CommonHeaderNames(::Array<::Il2CppString*>* value);
    // Get static field: static private readonly System.SByte[] s_CommonHeaderHints
    static ::Array<int8_t>* _get_s_CommonHeaderHints();
    // Set static field: static private readonly System.SByte[] s_CommonHeaderHints
    static void _set_s_CommonHeaderHints(::Array<int8_t>* value);
    // Get static field: static private readonly System.Char[] HttpTrimCharacters
    static ::Array<::Il2CppChar>* _get_HttpTrimCharacters();
    // Set static field: static private readonly System.Char[] HttpTrimCharacters
    static void _set_HttpTrimCharacters(::Array<::Il2CppChar>* value);
    // Get static field: static private System.Net.WebHeaderCollection/RfcChar[] RfcCharMap
    static ::Array<System::Net::WebHeaderCollection::RfcChar>* _get_RfcCharMap();
    // Set static field: static private System.Net.WebHeaderCollection/RfcChar[] RfcCharMap
    static void _set_RfcCharMap(::Array<System::Net::WebHeaderCollection::RfcChar>* value);
    // private System.Void NormalizeCommonHeaders()
    // Offset: 0x1223E14
    void NormalizeCommonHeaders();
    // private System.Collections.Specialized.NameValueCollection get_InnerCollection()
    // Offset: 0x1223F44
    System::Collections::Specialized::NameValueCollection* get_InnerCollection();
    // static System.Boolean AllowMultiValues(System.String name)
    // Offset: 0x121C294
    static bool AllowMultiValues(::Il2CppString* name);
    // private System.Boolean get_AllowHttpRequestHeader()
    // Offset: 0x1223FF8
    bool get_AllowHttpRequestHeader();
    // public System.Void Remove(System.Net.HttpRequestHeader header)
    // Offset: 0x1224030
    void Remove(System::Net::HttpRequestHeader header);
    // System.Void AddInternal(System.String name, System.String value)
    // Offset: 0x121C344
    void AddInternal(::Il2CppString* name, ::Il2CppString* value);
    // System.Void ChangeInternal(System.String name, System.String value)
    // Offset: 0x1224130
    void ChangeInternal(::Il2CppString* name, ::Il2CppString* value);
    // System.Void RemoveInternal(System.String name)
    // Offset: 0x1224190
    void RemoveInternal(::Il2CppString* name);
    // static System.String CheckBadChars(System.String name, System.Boolean isHeaderValue)
    // Offset: 0x12241F0
    static ::Il2CppString* CheckBadChars(::Il2CppString* name, bool isHeaderValue);
    // static System.Boolean ContainsNonAsciiChars(System.String token)
    // Offset: 0x122457C
    static bool ContainsNonAsciiChars(::Il2CppString* token);
    // System.Void ThrowOnRestrictedHeader(System.String headerName)
    // Offset: 0x1224604
    void ThrowOnRestrictedHeader(::Il2CppString* headerName);
    // public System.Void Add(System.String header)
    // Offset: 0x121A15C
    void Add(::Il2CppString* header);
    // System.Void SetInternal(System.String name, System.String value)
    // Offset: 0x121C3A4
    void SetInternal(::Il2CppString* name, ::Il2CppString* value);
    // static System.String GetAsString(System.Collections.Specialized.NameValueCollection cc, System.Boolean winInetCompat, System.Boolean forTrace)
    // Offset: 0x1224F10
    static ::Il2CppString* GetAsString(System::Collections::Specialized::NameValueCollection* cc, bool winInetCompat, bool forTrace);
    // System.Void .ctor(System.Net.WebHeaderCollectionType type)
    // Offset: 0x12251B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebHeaderCollection* New_ctor(System::Net::WebHeaderCollectionType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("WebHeaderCollection").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebHeaderCollection*, creationType>(type)));
    }
    // public override System.Void Add(System.String name, System.String value)
    // Offset: 0x1224790
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::Add(System.String name, System.String value)
    void Add(::Il2CppString* name, ::Il2CppString* value);
    // public override System.Void Set(System.String name, System.String value)
    // Offset: 0x1224948
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::Set(System.String name, System.String value)
    void Set(::Il2CppString* name, ::Il2CppString* value);
    // public override System.Void Remove(System.String name)
    // Offset: 0x1224B68
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::Remove(System.String name)
    void Remove(::Il2CppString* name);
    // public override System.String[] GetValues(System.String header)
    // Offset: 0x1224CA0
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String[] NameValueCollection::GetValues(System.String header)
    ::Array<::Il2CppString*>* GetValues(::Il2CppString* header);
    // public override System.String ToString()
    // Offset: 0x1224EA4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x121A044
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::.ctor()
    // Base method: System.Void NameObjectCollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebHeaderCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("WebHeaderCollection").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebHeaderCollection*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x12252AC
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebHeaderCollection* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("WebHeaderCollection").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebHeaderCollection*, creationType>(serializationInfo, streamingContext)));
    }
    // public override System.Void OnDeserialization(System.Object sender)
    // Offset: 0x122546C
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender);
    // Creating proxy method: System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
    // Maps to method: OnDeserialization
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1225470
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x12255E8
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // ABORTED: conflicts with another method. void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.String Get(System.String name)
    // Offset: 0x12255F4
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String NameValueCollection::Get(System.String name)
    ::Il2CppString* Get(::Il2CppString* name);
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1225958
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Collections.IEnumerator NameObjectCollectionBase::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.Int32 get_Count()
    // Offset: 0x12259D4
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Int32 NameObjectCollectionBase::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public override System.String Get(System.Int32 index)
    // Offset: 0x1225A0C
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String NameValueCollection::Get(System.Int32 index)
    ::Il2CppString* Get(int index);
    // public override System.String[] GetValues(System.Int32 index)
    // Offset: 0x1225A50
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String[] NameValueCollection::GetValues(System.Int32 index)
    ::Array<::Il2CppString*>* GetValues(int index);
    // public override System.String GetKey(System.Int32 index)
    // Offset: 0x1225A94
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String NameValueCollection::GetKey(System.Int32 index)
    ::Il2CppString* GetKey(int index);
    // static private System.Void .cctor()
    // Offset: 0x1225AD8
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.cctor()
    static void _cctor();
  }; // System.Net.WebHeaderCollection
  static check_size<sizeof(WebHeaderCollection), 112 + sizeof(System::Net::WebHeaderCollectionType)> __System_Net_WebHeaderCollectionSizeCheck;
  static_assert(sizeof(WebHeaderCollection) == 0x72);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebHeaderCollection*, "System.Net", "WebHeaderCollection");
#pragma pack(pop)
