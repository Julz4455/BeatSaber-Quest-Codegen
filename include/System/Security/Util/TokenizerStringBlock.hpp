// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Autogenerated type: System.Security.Util.TokenizerStringBlock
  class TokenizerStringBlock : public ::Il2CppObject {
    public:
    // System.String[] m_block
    // Offset: 0x10
    ::Array<::Il2CppString*>* m_block;
    // System.Security.Util.TokenizerStringBlock m_next
    // Offset: 0x18
    System::Security::Util::TokenizerStringBlock* m_next;
    // public System.Void .ctor()
    // Offset: 0x143D5F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TokenizerStringBlock* New_ctor();
  }; // System.Security.Util.TokenizerStringBlock
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::TokenizerStringBlock*, "System.Security.Util", "TokenizerStringBlock");
#pragma pack(pop)
