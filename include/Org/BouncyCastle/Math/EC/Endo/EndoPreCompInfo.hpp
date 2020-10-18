// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
#include "Org/BouncyCastle/Math/EC/Multiplier/PreCompInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ECEndomorphism
  class ECEndomorphism;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.EndoPreCompInfo
  class EndoPreCompInfo : public ::Il2CppObject, public Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo {
    public:
    // protected Org.BouncyCastle.Math.EC.Endo.ECEndomorphism m_endomorphism
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;
    // protected Org.BouncyCastle.Math.EC.ECPoint m_mappedPoint
    // Offset: 0x18
    Org::BouncyCastle::Math::EC::ECPoint* m_mappedPoint;
    // public Org.BouncyCastle.Math.EC.Endo.ECEndomorphism get_Endomorphism()
    // Offset: 0x201BA0C
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* get_Endomorphism();
    // public System.Void set_Endomorphism(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism value)
    // Offset: 0x201BA14
    void set_Endomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);
    // public Org.BouncyCastle.Math.EC.ECPoint get_MappedPoint()
    // Offset: 0x201BA1C
    Org::BouncyCastle::Math::EC::ECPoint* get_MappedPoint();
    // public System.Void set_MappedPoint(Org.BouncyCastle.Math.EC.ECPoint value)
    // Offset: 0x201BA24
    void set_MappedPoint(Org::BouncyCastle::Math::EC::ECPoint* value);
    // public System.Void .ctor()
    // Offset: 0x201BA2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EndoPreCompInfo* New_ctor();
  }; // Org.BouncyCastle.Math.EC.Endo.EndoPreCompInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*, "Org.BouncyCastle.Math.EC.Endo", "EndoPreCompInfo");
#pragma pack(pop)
