// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.Comparer
  class Comparer : public ::Il2CppObject, public System::Collections::IComparer {
    public:
    // private System.Int32 System.Collections.IComparer.Compare(System.Object ol, System.Object or)
    // Offset: 0x14D77D4
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object ol, System.Object or)
    int System_Collections_IComparer_Compare(::Il2CppObject* ol, ::Il2CppObject* _or);
    // public System.Void .ctor()
    // Offset: 0x14D78B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Comparer* New_ctor();
  }; // System.Net.Comparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Comparer*, "System.Net", "Comparer");
#pragma pack(pop)
