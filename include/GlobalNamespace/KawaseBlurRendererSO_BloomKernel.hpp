// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: KawaseBlurRendererSO
#include "GlobalNamespace/KawaseBlurRendererSO.hpp"
// Including type: KawaseBlurRendererSO/KernelSize
#include "GlobalNamespace/KawaseBlurRendererSO_KernelSize.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: KawaseBlurRendererSO/BloomKernel
  class KawaseBlurRendererSO::BloomKernel : public ::Il2CppObject {
    public:
    // public KawaseBlurRendererSO/KernelSize kernelSize
    // Offset: 0x10
    GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize;
    // public System.Int32 sharedPartWithNext
    // Offset: 0x14
    int sharedPartWithNext;
    // public System.Void .ctor()
    // Offset: 0x1FAC7B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static KawaseBlurRendererSO::BloomKernel* New_ctor();
  }; // KawaseBlurRendererSO/BloomKernel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBlurRendererSO::BloomKernel*, "", "KawaseBlurRendererSO/BloomKernel");
#pragma pack(pop)
