// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRSimpleJSON.JSONNode/Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
// Completed includes
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Autogenerated type: OVRSimpleJSON.JSONNode/KeyEnumerator
  struct JSONNode::KeyEnumerator : public System::ValueType {
    public:
    // private OVRSimpleJSON.JSONNode/Enumerator m_Enumerator
    // Offset: 0x0
    OVRSimpleJSON::JSONNode::Enumerator m_Enumerator;
    // Creating value type constructor for type: KeyEnumerator
    constexpr KeyEnumerator(OVRSimpleJSON::JSONNode::Enumerator m_Enumerator_ = {}) noexcept : m_Enumerator{m_Enumerator_} {}
    // Creating conversion operator: operator OVRSimpleJSON::JSONNode::Enumerator
    constexpr operator OVRSimpleJSON::JSONNode::Enumerator() const noexcept {
      return m_Enumerator;
    }
    // public System.Void .ctor(System.Collections.Generic.List`1/Enumerator<OVRSimpleJSON.JSONNode> aArrayEnum)
    // Offset: 0xDB52CC
    KeyEnumerator(typename System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>::Enumerator aArrayEnum);
    // public System.Void .ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,OVRSimpleJSON.JSONNode> aDictEnum)
    // Offset: 0xDB5340
    KeyEnumerator(typename System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>::Enumerator aDictEnum);
    // public System.Void .ctor(OVRSimpleJSON.JSONNode/Enumerator aEnumerator)
    // Offset: 0xDB53D0
    // ABORTED: conflicts with another method.  KeyEnumerator(OVRSimpleJSON::JSONNode::Enumerator aEnumerator);
    // public System.String get_Current()
    // Offset: 0xDB5400
    ::Il2CppString* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0xDB5408
    bool MoveNext();
    // public OVRSimpleJSON.JSONNode/KeyEnumerator GetEnumerator()
    // Offset: 0xDB5410
    OVRSimpleJSON::JSONNode::KeyEnumerator GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/KeyEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::KeyEnumerator, "OVRSimpleJSON", "JSONNode/KeyEnumerator");
#pragma pack(pop)
