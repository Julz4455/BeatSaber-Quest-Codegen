// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Net.Configuration.DefaultProxySection
#include "System/Net/Configuration/DefaultProxySection.hpp"
// Including type: System.Configuration.ConfigurationPropertyCollection
#include "System/Configuration/ConfigurationPropertyCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Configuration.DefaultProxySection..ctor
System::Net::Configuration::DefaultProxySection* System::Net::Configuration::DefaultProxySection::New_ctor() {
  return (DefaultProxySection*)THROW_UNLESS(il2cpp_utils::New("System.Net.Configuration", "DefaultProxySection"));
}
// Autogenerated method: System.Net.Configuration.DefaultProxySection.get_Properties
System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::DefaultProxySection::get_Properties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Configuration::ConfigurationPropertyCollection*>(this, "get_Properties"));
}
// Autogenerated method: System.Net.Configuration.DefaultProxySection.Reset
void System::Net::Configuration::DefaultProxySection::Reset(System::Configuration::ConfigurationElement* parentElement) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset", parentElement));
}
