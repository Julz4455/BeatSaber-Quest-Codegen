// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DefaultBinder
#include "System/DefaultBinder.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.DefaultBinder/BinderState
  class DefaultBinder::BinderState : public ::Il2CppObject {
    public:
    // System.Int32[] m_argsMap
    // Offset: 0x10
    ::Array<int>* m_argsMap;
    // System.Int32 m_originalSize
    // Offset: 0x18
    int m_originalSize;
    // System.Boolean m_isParamArray
    // Offset: 0x1C
    bool m_isParamArray;
    // System.Void .ctor(System.Int32[] argsMap, System.Int32 originalSize, System.Boolean isParamArray)
    // Offset: 0x19C36B4
    static DefaultBinder::BinderState* New_ctor(::Array<int>* argsMap, int originalSize, bool isParamArray);
  }; // System.DefaultBinder/BinderState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DefaultBinder::BinderState*, "System", "DefaultBinder/BinderState");
#pragma pack(pop)
