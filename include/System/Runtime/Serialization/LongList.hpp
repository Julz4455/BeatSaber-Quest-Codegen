// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.LongList
  class LongList : public ::Il2CppObject {
    public:
    // private System.Int64[] m_values
    // Offset: 0x10
    ::Array<int64_t>* m_values;
    // private System.Int32 m_count
    // Offset: 0x18
    int m_count;
    // private System.Int32 m_totalItems
    // Offset: 0x1C
    int m_totalItems;
    // private System.Int32 m_currentItem
    // Offset: 0x20
    int m_currentItem;
    // System.Void .ctor(System.Int32 startingSize)
    // Offset: 0x14CF728
    static LongList* New_ctor(int startingSize);
    // System.Void Add(System.Int64 value)
    // Offset: 0x14CF7A4
    void Add(int64_t value);
    // System.Int32 get_Count()
    // Offset: 0x14CF8D4
    int get_Count();
    // System.Void StartEnumeration()
    // Offset: 0x14CF8DC
    void StartEnumeration();
    // System.Boolean MoveNext()
    // Offset: 0x14CF8E8
    bool MoveNext();
    // System.Int64 get_Current()
    // Offset: 0x14CF950
    int64_t get_Current();
    // System.Boolean RemoveElement(System.Int64 value)
    // Offset: 0x14CF990
    bool RemoveElement(int64_t value);
    // private System.Void EnlargeArray()
    // Offset: 0x14CF830
    void EnlargeArray();
    // System.Void .ctor()
    // Offset: 0x14CF720
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LongList* New_ctor();
  }; // System.Runtime.Serialization.LongList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::LongList*, "System.Runtime.Serialization", "LongList");
#pragma pack(pop)
