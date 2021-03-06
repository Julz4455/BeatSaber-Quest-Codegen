// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PS4LevelProductsModelSO
#include "GlobalNamespace/PS4LevelProductsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PS4LevelProductsModelSO/LevelPackProductData
  // [] Offset: FFFFFFFF
  class PS4LevelProductsModelSO::LevelPackProductData : public ::Il2CppObject {
    public:
    // private System.String _productLabel
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* productLabel;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _categoryLabel
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* categoryLabel;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _packId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* packId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _packLevelPriceDiscountMul
    // Size: 0x4
    // Offset: 0x28
    float packLevelPriceDiscountMul;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: packLevelPriceDiscountMul and: levelProductsData
    char __padding3[0x4] = {};
    // private PS4LevelProductsModelSO/LevelProductData[] _levelProductsData
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>* levelProductsData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>*) == 0x8);
    // Creating value type constructor for type: LevelPackProductData
    LevelPackProductData(::Il2CppString* productLabel_ = {}, ::Il2CppString* categoryLabel_ = {}, ::Il2CppString* packId_ = {}, float packLevelPriceDiscountMul_ = {}, ::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>* levelProductsData_ = {}) noexcept : productLabel{productLabel_}, categoryLabel{categoryLabel_}, packId{packId_}, packLevelPriceDiscountMul{packLevelPriceDiscountMul_}, levelProductsData{levelProductsData_} {}
    // public System.String get_productLabel()
    // Offset: 0xF1F464
    ::Il2CppString* get_productLabel();
    // public System.String get_categoryLabel()
    // Offset: 0xF1F46C
    ::Il2CppString* get_categoryLabel();
    // public System.String get_levelPackId()
    // Offset: 0xF1F474
    ::Il2CppString* get_levelPackId();
    // public System.Single get_packLevelPriceDiscountMul()
    // Offset: 0xF1F47C
    float get_packLevelPriceDiscountMul();
    // public PS4LevelProductsModelSO/LevelProductData[] get_levelProductsData()
    // Offset: 0xF1F484
    ::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>* get_levelProductsData();
    // public System.Void .ctor()
    // Offset: 0xF1F48C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4LevelProductsModelSO::LevelPackProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4LevelProductsModelSO::LevelPackProductData*, creationType>()));
    }
  }; // PS4LevelProductsModelSO/LevelPackProductData
  #pragma pack(pop)
  static check_size<sizeof(PS4LevelProductsModelSO::LevelPackProductData), 48 + sizeof(::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>*)> __GlobalNamespace_PS4LevelProductsModelSO_LevelPackProductDataSizeCheck;
  static_assert(sizeof(PS4LevelProductsModelSO::LevelPackProductData) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*, "", "PS4LevelProductsModelSO/LevelPackProductData");
