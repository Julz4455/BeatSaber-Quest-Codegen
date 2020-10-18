// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve
#include "Org/BouncyCastle/Math/EC/Custom/GM/SM2P256V1Curve.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractECLookupTable
#include "Org/BouncyCastle/Math/EC/AbstractECLookupTable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.GM
namespace Org::BouncyCastle::Math::EC::Custom::GM {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve/SM2P256V1LookupTable
  class SM2P256V1Curve::SM2P256V1LookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    // private readonly Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve m_outer
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve* m_outer;
    // private readonly System.UInt32[] m_table
    // Offset: 0x18
    ::Array<uint>* m_table;
    // private readonly System.Int32 m_size
    // Offset: 0x20
    int m_size;
    // System.Void .ctor(Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve outer, System.UInt32[] table, System.Int32 size)
    // Offset: 0x1B2E308
    static SM2P256V1Curve::SM2P256V1LookupTable* New_ctor(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve* outer, ::Array<uint>* table, int size);
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1B2E750
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Array<uint>* x, ::Array<uint>* y);
    // public override System.Int32 get_Size()
    // Offset: 0x1B2E60C
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x1B2E614
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x1B2E84C
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve/SM2P256V1LookupTable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::SM2P256V1LookupTable*, "Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve/SM2P256V1LookupTable");
#pragma pack(pop)
