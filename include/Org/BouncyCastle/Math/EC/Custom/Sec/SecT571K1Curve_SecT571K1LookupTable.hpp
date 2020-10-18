// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Curve
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT571K1Curve.hpp"
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
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Curve/SecT571K1LookupTable
  class SecT571K1Curve::SecT571K1LookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    // private readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Curve m_outer
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Curve* m_outer;
    // private readonly System.UInt64[] m_table
    // Offset: 0x18
    ::Array<uint64_t>* m_table;
    // private readonly System.Int32 m_size
    // Offset: 0x20
    int m_size;
    // System.Void .ctor(Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Curve outer, System.UInt64[] table, System.Int32 size)
    // Offset: 0x2013354
    static SecT571K1Curve::SecT571K1LookupTable* New_ctor(Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Curve* outer, ::Array<uint64_t>* table, int size);
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0x20135F4
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Array<uint64_t>* x, ::Array<uint64_t>* y);
    // public override System.Int32 get_Size()
    // Offset: 0x20134C0
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x20134C8
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x20136F0
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Curve/SecT571K1LookupTable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Curve::SecT571K1LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT571K1Curve/SecT571K1LookupTable");
#pragma pack(pop)
