#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_STRING_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_STRING_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

void GenerateStringAt_331(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::TNode<Object> p_position, const char* p_methodName, compiler::CodeAssemblerLabel* label_IfInBounds, compiler::TypedCodeAssemblerVariable<String>* label_IfInBounds_parameter_0, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_IfInBounds_parameter_1, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_IfInBounds_parameter_2, compiler::CodeAssemblerLabel* label_IfOutOfBounds);
compiler::TNode<IntPtrT> Convert8ATintptr8ATintptr_1464(compiler::CodeAssemblerState* state_, compiler::TNode<IntPtrT> p_i);
compiler::TNode<Symbol> Cast6Symbol_1465(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_STRING_TQ_H_
