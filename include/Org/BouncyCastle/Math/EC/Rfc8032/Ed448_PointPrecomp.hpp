// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed448
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed448.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp
  class Ed448::PointPrecomp : public ::Il2CppObject {
    public:
    // System.UInt32[] x
    // Offset: 0x10
    ::Array<uint>* x;
    // System.UInt32[] y
    // Offset: 0x18
    ::Array<uint>* y;
    // public System.Void .ctor()
    // Offset: 0x1B614F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Ed448::PointPrecomp* New_ctor();
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecomp*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448/PointPrecomp");
#pragma pack(pop)
