// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.Localization
#include "Polyglot/Localization.hpp"
// Including type: Polyglot.LocalizationDocument
#include "Polyglot/LocalizationDocument.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Polyglot.LocalizationAsset
#include "Polyglot/LocalizationAsset.hpp"
// Including type: UnityEngine.Events.UnityEvent
#include "UnityEngine/Events/UnityEvent.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: Polyglot.LanguageDirection
#include "Polyglot/LanguageDirection.hpp"
// Including type: UnityEngine.SystemLanguage
#include "UnityEngine/SystemLanguage.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String KeyNotFound
::Il2CppString* Polyglot::Localization::_get_KeyNotFound() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("Polyglot", "Localization", "KeyNotFound"));
}
// Autogenerated static field setter
// Set static field: static private System.String KeyNotFound
void Polyglot::Localization::_set_KeyNotFound(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Polyglot", "Localization", "KeyNotFound", value));
}
// Autogenerated static field getter
// Get static field: static private Polyglot.Localization instance
Polyglot::Localization* Polyglot::Localization::_get_instance() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Polyglot::Localization*>("Polyglot", "Localization", "instance"));
}
// Autogenerated static field setter
// Set static field: static private Polyglot.Localization instance
void Polyglot::Localization::_set_instance(Polyglot::Localization* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Polyglot", "Localization", "instance", value));
}
// Autogenerated method: Polyglot.Localization.get_CustomDocument
Polyglot::LocalizationDocument* Polyglot::Localization::get_CustomDocument() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Polyglot::LocalizationDocument*>(this, "get_CustomDocument"));
}
// Autogenerated method: Polyglot.Localization.get_InputFiles
System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* Polyglot::Localization::get_InputFiles() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>*>(this, "get_InputFiles"));
}
// Autogenerated method: Polyglot.Localization.get_Instance
Polyglot::Localization* Polyglot::Localization::get_Instance() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Polyglot::Localization*>("Polyglot", "Localization", "get_Instance"));
}
// Autogenerated method: Polyglot.Localization.set_Instance
void Polyglot::Localization::set_Instance(Polyglot::Localization* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Polyglot", "Localization", "set_Instance", value));
}
// Autogenerated method: Polyglot.Localization.get_HasInstance
bool Polyglot::Localization::get_HasInstance() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Polyglot", "Localization", "get_HasInstance"));
}
// Autogenerated method: Polyglot.Localization.get_SupportedLanguages
System::Collections::Generic::List_1<Polyglot::Language>* Polyglot::Localization::get_SupportedLanguages() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<Polyglot::Language>*>(this, "get_SupportedLanguages"));
}
// Autogenerated method: Polyglot.Localization.get_SelectedLanguageDirection
Polyglot::LanguageDirection Polyglot::Localization::get_SelectedLanguageDirection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Polyglot::LanguageDirection>(this, "get_SelectedLanguageDirection"));
}
// Autogenerated method: Polyglot.Localization.GetLanguageDirection
Polyglot::LanguageDirection Polyglot::Localization::GetLanguageDirection(Polyglot::Language language) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Polyglot::LanguageDirection>(this, "GetLanguageDirection", language));
}
// Autogenerated method: Polyglot.Localization.get_SelectedLanguageIndex
int Polyglot::Localization::get_SelectedLanguageIndex() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_SelectedLanguageIndex"));
}
// Autogenerated method: Polyglot.Localization.get_SelectedLanguage
Polyglot::Language Polyglot::Localization::get_SelectedLanguage() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Polyglot::Language>(this, "get_SelectedLanguage"));
}
// Autogenerated method: Polyglot.Localization.set_SelectedLanguage
void Polyglot::Localization::set_SelectedLanguage(Polyglot::Language value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_SelectedLanguage", value));
}
// Autogenerated method: Polyglot.Localization.IsLanguageSupported
bool Polyglot::Localization::IsLanguageSupported(Polyglot::Language language) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsLanguageSupported", language));
}
// Autogenerated method: Polyglot.Localization.InvokeOnLocalize
void Polyglot::Localization::InvokeOnLocalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeOnLocalize"));
}
// Autogenerated method: Polyglot.Localization.get_EnglishLanguageNames
System::Collections::Generic::List_1<::Il2CppString*>* Polyglot::Localization::get_EnglishLanguageNames() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<::Il2CppString*>*>(this, "get_EnglishLanguageNames"));
}
// Autogenerated method: Polyglot.Localization.get_LocalizedLanguageNames
System::Collections::Generic::List_1<::Il2CppString*>* Polyglot::Localization::get_LocalizedLanguageNames() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<::Il2CppString*>*>(this, "get_LocalizedLanguageNames"));
}
// Autogenerated method: Polyglot.Localization.get_EnglishLanguageName
::Il2CppString* Polyglot::Localization::get_EnglishLanguageName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_EnglishLanguageName"));
}
// Autogenerated method: Polyglot.Localization.get_LocalizedLanguageName
::Il2CppString* Polyglot::Localization::get_LocalizedLanguageName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_LocalizedLanguageName"));
}
// Autogenerated method: Polyglot.Localization.SelectLanguage
void Polyglot::Localization::SelectLanguage(int selected) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectLanguage", selected));
}
// Autogenerated method: Polyglot.Localization.SelectLanguage
void Polyglot::Localization::SelectLanguage(Polyglot::Language selected) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectLanguage", selected));
}
// Autogenerated method: Polyglot.Localization.ConvertSystemLanguage
Polyglot::Language Polyglot::Localization::ConvertSystemLanguage(UnityEngine::SystemLanguage selected) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Polyglot::Language>(this, "ConvertSystemLanguage", selected));
}
// Autogenerated method: Polyglot.Localization.AddOnLocalizeEvent
void Polyglot::Localization::AddOnLocalizeEvent(Polyglot::ILocalize* localize) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddOnLocalizeEvent", localize));
}
// Autogenerated method: Polyglot.Localization.RemoveOnLocalizeEvent
void Polyglot::Localization::RemoveOnLocalizeEvent(Polyglot::ILocalize* localize) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveOnLocalizeEvent", localize));
}
// Autogenerated method: Polyglot.Localization.Get
::Il2CppString* Polyglot::Localization::Get(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Polyglot", "Localization", "Get", key));
}
// Autogenerated method: Polyglot.Localization.Get
::Il2CppString* Polyglot::Localization::Get(::Il2CppString* key, Polyglot::Language language) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Polyglot", "Localization", "Get", key, language));
}
// Autogenerated method: Polyglot.Localization.KeyExist
bool Polyglot::Localization::KeyExist(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Polyglot", "Localization", "KeyExist", key));
}
// Autogenerated method: Polyglot.Localization.GetKeys
System::Collections::Generic::List_1<::Il2CppString*>* Polyglot::Localization::GetKeys() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<::Il2CppString*>*>("Polyglot", "Localization", "GetKeys"));
}
// Autogenerated method: Polyglot.Localization.GetFormat
::Il2CppString* Polyglot::Localization::GetFormat(::Il2CppString* key, ::Array<::Il2CppObject*>* arguments) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Polyglot", "Localization", "GetFormat", key, arguments));
}
// Creating initializer_list -> params proxy for: System.String GetFormat(System.String key, params System.Object[] arguments)
::Il2CppString* Polyglot::Localization::GetFormat(::Il2CppString* key, std::initializer_list<::Il2CppObject*> arguments) {
  return Polyglot::Localization::GetFormat(key, ::Array<::Il2CppObject*>::New(arguments));
}
// Autogenerated method: Polyglot.Localization.InputFilesContains
bool Polyglot::Localization::InputFilesContains(Polyglot::LocalizationDocument* doc) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "InputFilesContains", doc));
}
// Autogenerated method: Polyglot.Localization..ctor
Polyglot::Localization* Polyglot::Localization::New_ctor() {
  return (Localization*)THROW_UNLESS(il2cpp_utils::New("Polyglot", "Localization"));
}
