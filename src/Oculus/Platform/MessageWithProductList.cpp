// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.MessageWithProductList
#include "Oculus/Platform/MessageWithProductList.hpp"
// Including type: Oculus.Platform.Models.ProductList
#include "Oculus/Platform/Models/ProductList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithProductList.GetDataFromMessage
Oculus::Platform::Models::ProductList* Oculus::Platform::MessageWithProductList::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::ProductList*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithProductList..ctor
Oculus::Platform::MessageWithProductList* Oculus::Platform::MessageWithProductList::New_ctor(System::IntPtr c_message) {
  return (MessageWithProductList*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithProductList", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithProductList.GetProductList
Oculus::Platform::Models::ProductList* Oculus::Platform::MessageWithProductList::GetProductList() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::ProductList*>(this, "GetProductList"));
}
