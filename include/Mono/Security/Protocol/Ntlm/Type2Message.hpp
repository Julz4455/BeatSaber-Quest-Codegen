// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Protocol.Ntlm.MessageBase
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Autogenerated type: Mono.Security.Protocol.Ntlm.Type2Message
  class Type2Message : public Mono::Security::Protocol::Ntlm::MessageBase {
    public:
    // private System.Byte[] _nonce
    // Offset: 0x18
    ::Array<uint8_t>* nonce;
    // private System.String _targetName
    // Offset: 0x20
    ::Il2CppString* targetName;
    // private System.Byte[] _targetInfo
    // Offset: 0x28
    ::Array<uint8_t>* targetInfo;
    // public System.Void .ctor(System.Byte[] message)
    // Offset: 0x1B8ABA4
    static Type2Message* New_ctor(::Array<uint8_t>* message);
    // public System.Byte[] get_Nonce()
    // Offset: 0x1B89B78
    ::Array<uint8_t>* get_Nonce();
    // public System.String get_TargetName()
    // Offset: 0x1B8ACD4
    ::Il2CppString* get_TargetName();
    // public System.Byte[] get_TargetInfo()
    // Offset: 0x1B89AF8
    ::Array<uint8_t>* get_TargetInfo();
    // protected override System.Void Finalize()
    // Offset: 0x1B8AC58
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Decode(System.Byte[] message)
    // Offset: 0x1B8ACDC
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Void MessageBase::Decode(System.Byte[] message)
    void Decode(::Array<uint8_t>* message);
    // public override System.Byte[] GetBytes()
    // Offset: 0x1B8AE7C
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Byte[] MessageBase::GetBytes()
    ::Array<uint8_t>* GetBytes();
  }; // Mono.Security.Protocol.Ntlm.Type2Message
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::Type2Message*, "Mono.Security.Protocol.Ntlm", "Type2Message");
#pragma pack(pop)
