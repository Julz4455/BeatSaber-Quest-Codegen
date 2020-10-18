// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SmallBufferPool
#include "GlobalNamespace/SmallBufferPool.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kCacheSmallSize
int GlobalNamespace::SmallBufferPool::_get_kCacheSmallSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "SmallBufferPool", "kCacheSmallSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kCacheSmallSize
void GlobalNamespace::SmallBufferPool::_set_kCacheSmallSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SmallBufferPool", "kCacheSmallSize", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kCacheMediumSize
int GlobalNamespace::SmallBufferPool::_get_kCacheMediumSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "SmallBufferPool", "kCacheMediumSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kCacheMediumSize
void GlobalNamespace::SmallBufferPool::_set_kCacheMediumSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SmallBufferPool", "kCacheMediumSize", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kCacheLargeSize
int GlobalNamespace::SmallBufferPool::_get_kCacheLargeSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "SmallBufferPool", "kCacheLargeSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kCacheLargeSize
void GlobalNamespace::SmallBufferPool::_set_kCacheLargeSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SmallBufferPool", "kCacheLargeSize", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kCacheMaxSize
int GlobalNamespace::SmallBufferPool::_get_kCacheMaxSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "SmallBufferPool", "kCacheMaxSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kCacheMaxSize
void GlobalNamespace::SmallBufferPool::_set_kCacheMaxSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SmallBufferPool", "kCacheMaxSize", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kCacheSmallMaxCapacity
int GlobalNamespace::SmallBufferPool::_get_kCacheSmallMaxCapacity() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "SmallBufferPool", "kCacheSmallMaxCapacity"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kCacheSmallMaxCapacity
void GlobalNamespace::SmallBufferPool::_set_kCacheSmallMaxCapacity(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SmallBufferPool", "kCacheSmallMaxCapacity", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kCacheMediumMaxCapacity
int GlobalNamespace::SmallBufferPool::_get_kCacheMediumMaxCapacity() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "SmallBufferPool", "kCacheMediumMaxCapacity"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kCacheMediumMaxCapacity
void GlobalNamespace::SmallBufferPool::_set_kCacheMediumMaxCapacity(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SmallBufferPool", "kCacheMediumMaxCapacity", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kCacheLargeMaxCapacity
int GlobalNamespace::SmallBufferPool::_get_kCacheLargeMaxCapacity() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "SmallBufferPool", "kCacheLargeMaxCapacity"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kCacheLargeMaxCapacity
void GlobalNamespace::SmallBufferPool::_set_kCacheLargeMaxCapacity(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SmallBufferPool", "kCacheLargeMaxCapacity", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kCacheMaxMaxCapacity
int GlobalNamespace::SmallBufferPool::_get_kCacheMaxMaxCapacity() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "SmallBufferPool", "kCacheMaxMaxCapacity"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kCacheMaxMaxCapacity
void GlobalNamespace::SmallBufferPool::_set_kCacheMaxMaxCapacity(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SmallBufferPool", "kCacheMaxMaxCapacity", value));
}
// Autogenerated method: SmallBufferPool.GetBuffer
::Array<uint8_t>* GlobalNamespace::SmallBufferPool::GetBuffer(int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetBuffer", length));
}
// Autogenerated method: SmallBufferPool.ReleaseBuffer
void GlobalNamespace::SmallBufferPool::ReleaseBuffer(::Array<uint8_t>* buffer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReleaseBuffer", buffer));
}
// Autogenerated method: SmallBufferPool..ctor
GlobalNamespace::SmallBufferPool* GlobalNamespace::SmallBufferPool::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SmallBufferPool*>());
}
