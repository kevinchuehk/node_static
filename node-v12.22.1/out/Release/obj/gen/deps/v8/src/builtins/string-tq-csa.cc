#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/heap/factory-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/source-text-module.h"
#include "src/objects/stack-frame-info.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "torque-generated/../../deps/v8/src/builtins/arguments-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-copywithin-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-every-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-filter-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-find-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-foreach-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-join-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-lastindexof-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-map-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-of-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-reduce-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-shift-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-some-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-unshift-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/base-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/bigint-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/boolean-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/collections-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/data-view-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/extras-utils-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/frames-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/internal-coverage-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/iterator-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/math-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/object-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-constructor-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-delete-property-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-get-property-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-get-prototype-of-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-has-property-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-is-extensible-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-prevent-extensions-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-revocable-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-revoke-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-set-property-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-set-prototype-of-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/reflect-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/regexp-source-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/regexp-test-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/regexp-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-endswith-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-html-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-iterator-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-pad-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-repeat-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-slice-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-startswith-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-substring-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-find-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-findindex-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-foreach-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-reduce-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-reduceright-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-some-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/../../deps/v8/third_party/v8/builtins/array-sort-tq-csa.h"
#include "torque-generated/../../deps/v8/test/torque/test-torque-tq-csa.h"
#include "torque-generated/../../deps/v8/src/objects/intl-objects-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(StringPrototypeToString, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 12);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToThisValue(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, PrimitiveType::kString, "String.prototype.toString");
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(StringPrototypeValueOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 19);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToThisValue(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, PrimitiveType::kString, "String.prototype.valueOf");
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(StringToList, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<String> parameter1 = UncheckedCast<String>(Parameter(Descriptor::kString));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, IntPtrT, NativeContext, Map, JSArray, FixedArray, Smi, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, IntPtrT, NativeContext, Map, JSArray, FixedArray, Smi, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, IntPtrT, NativeContext, Map, JSArray, FixedArray, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<String> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 30);
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).LoadStringLengthAsWord(compiler::TNode<String>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 32);
    compiler::TNode<NativeContext> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 33);
    compiler::TNode<Map> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadJSArrayElementsMap(PACKED_ELEMENTS, compiler::TNode<NativeContext>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 35);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiTag(compiler::TNode<IntPtrT>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 34);
    compiler::TNode<JSArray> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).AllocateJSArray(PACKED_ELEMENTS, compiler::TNode<Map>{tmp4}, compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<Smi>{tmp5}, CodeStubAssembler::kAllowLargeObjectAllocation);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 37);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp7);
    compiler::TNode<FixedArrayBase>tmp8 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp6, tmp7});
    compiler::TNode<FixedArray> tmp9;
    USE(tmp9);
    tmp9 = UnsafeCast10FixedArray_1403(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp8});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 39);
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 40);
    compiler::TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 41);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp9, tmp10, tmp11);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<String> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<NativeContext> tmp15;
    compiler::TNode<Map> tmp16;
    compiler::TNode<JSArray> tmp17;
    compiler::TNode<FixedArray> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    compiler::TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp20}, compiler::TNode<IntPtrT>{tmp14});
    ca_.Branch(tmp21, &block1, &block2, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<String> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<NativeContext> tmp25;
    compiler::TNode<Map> tmp26;
    compiler::TNode<JSArray> tmp27;
    compiler::TNode<FixedArray> tmp28;
    compiler::TNode<Smi> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    ca_.Bind(&block1, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 42);
    compiler::TNode<Int32T> tmp31;
    USE(tmp31);
    tmp31 = StringBuiltinsAssembler(state_).LoadSurrogatePairAt(compiler::TNode<String>{tmp23}, compiler::TNode<IntPtrT>{tmp24}, compiler::TNode<IntPtrT>{tmp30}, UnicodeEncoding::UTF16);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 43);
    compiler::TNode<String> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).StringFromSingleUTF16EncodedCodePoint(compiler::TNode<Int32T>{tmp31});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 44);
    StoreFixedArrayDirect_215(state_, compiler::TNode<FixedArray>{tmp28}, compiler::TNode<Smi>{tmp29}, compiler::TNode<Object>{tmp32});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 46);
    compiler::TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).LoadStringLengthAsWord(compiler::TNode<String>{tmp32});
    compiler::TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp30}, compiler::TNode<IntPtrT>{tmp33});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 47);
    compiler::TNode<Smi> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp29}, compiler::TNode<Smi>{tmp35});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 41);
    ca_.Goto(&block3, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp36, tmp34);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<String> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<NativeContext> tmp40;
    compiler::TNode<Map> tmp41;
    compiler::TNode<JSArray> tmp42;
    compiler::TNode<FixedArray> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    ca_.Bind(&block2, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 51);
    compiler::TNode<IntPtrT> tmp46 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp46);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp42, tmp46}, tmp44);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 53);
    CodeStubAssembler(state_).Return(tmp42);
  }
}

void GenerateStringAt_331(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::TNode<Object> p_position, const char* p_methodName, compiler::CodeAssemblerLabel* label_IfInBounds, compiler::TypedCodeAssemblerVariable<String>* label_IfInBounds_parameter_0, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_IfInBounds_parameter_1, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_IfInBounds_parameter_2, compiler::CodeAssemblerLabel* label_IfOutOfBounds) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_position);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 61);
    compiler::TNode<String> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr6String18ATconstexpr_string_154(state_, p_methodName);
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).ToThisString(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 65);
    compiler::TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 64);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 66);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).TaggedIsNotSmi(compiler::TNode<Object>{tmp5});
    ca_.Branch(tmp6, &block3, &block4, tmp0, tmp1, tmp2, tmp4, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<String> tmp10;
    compiler::TNode<Number> tmp11;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<String> tmp15;
    compiler::TNode<Number> tmp16;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 67);
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = UnsafeCast5ATSmi_1404(state_, compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp16});
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiUntag(compiler::TNode<Smi>{tmp17});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 68);
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).LoadStringLengthAsWord(compiler::TNode<String>{tmp15});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 69);
    compiler::TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp18});
    compiler::TNode<UintPtrT> tmp21;
    USE(tmp21);
    tmp21 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp19});
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).UintPtrGreaterThanOrEqual(compiler::TNode<UintPtrT>{tmp20}, compiler::TNode<UintPtrT>{tmp21});
    ca_.Branch(tmp22, &block5, &block6, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp19);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<String> tmp26;
    compiler::TNode<Number> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.Goto(&block2);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<String> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    ca_.Bind(&block6, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 70);
    ca_.Goto(&block1, tmp33, tmp35, tmp36);
  }

  if (block1.is_used()) {
    compiler::TNode<String> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    ca_.Bind(&block1, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 56);
    *label_IfInBounds_parameter_2 = tmp39;
    *label_IfInBounds_parameter_1 = tmp38;
    *label_IfInBounds_parameter_0 = tmp37;
    ca_.Goto(label_IfInBounds);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_IfOutOfBounds);
  }
}

TF_BUILTIN(StringPrototypeCharAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kPosition));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, String, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 77);
    compiler::TypedCodeAssemblerVariable<String> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    GenerateStringAt_331(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<Object>{tmp2}, "String.prototype.charAt", &label0, &result_0_0, &result_0_1, &result_0_2, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp2, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<String> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block4, tmp3, tmp4, tmp5, tmp8, tmp9, tmp10);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block2, tmp11, tmp12, tmp13);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<String> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 81);
    compiler::TNode<Int32T> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).StringCharCodeAt(compiler::TNode<String>{tmp19}, compiler::TNode<IntPtrT>{tmp20});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 82);
    compiler::TNode<String> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).StringFromSingleCharCode(compiler::TNode<Int32T>{tmp22});
    CodeStubAssembler(state_).Return(tmp23);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 85);
    compiler::TNode<String> tmp27;
    USE(tmp27);
    tmp27 = kEmptyString_67(state_);
    CodeStubAssembler(state_).Return(tmp27);
  }
}

TF_BUILTIN(StringPrototypeCharCodeAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kPosition));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, String, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 93);
    compiler::TypedCodeAssemblerVariable<String> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    GenerateStringAt_331(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<Object>{tmp2}, "String.prototype.charCodeAt", &label0, &result_0_0, &result_0_1, &result_0_2, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp2, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<String> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block4, tmp3, tmp4, tmp5, tmp8, tmp9, tmp10);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block2, tmp11, tmp12, tmp13);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<String> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 97);
    compiler::TNode<Int32T> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).StringCharCodeAt(compiler::TNode<String>{tmp19}, compiler::TNode<IntPtrT>{tmp20});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 98);
    compiler::TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = Convert5ATSmi7ATint32_176(state_, compiler::TNode<Int32T>{tmp22});
    CodeStubAssembler(state_).Return(tmp23);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 101);
    compiler::TNode<HeapNumber> tmp27;
    USE(tmp27);
    tmp27 = kNaN_69(state_);
    CodeStubAssembler(state_).Return(tmp27);
  }
}

TF_BUILTIN(StringPrototypeCodePointAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kPosition));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, String, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 109);
    compiler::TypedCodeAssemblerVariable<String> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    GenerateStringAt_331(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<Object>{tmp2}, "String.prototype.codePointAt", &label0, &result_0_0, &result_0_1, &result_0_2, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp2, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<String> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block4, tmp3, tmp4, tmp5, tmp8, tmp9, tmp10);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block2, tmp11, tmp12, tmp13);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<String> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 115);
    compiler::TNode<Int32T> tmp22;
    USE(tmp22);
    tmp22 = StringBuiltinsAssembler(state_).LoadSurrogatePairAt(compiler::TNode<String>{tmp19}, compiler::TNode<IntPtrT>{tmp21}, compiler::TNode<IntPtrT>{tmp20}, UnicodeEncoding::UTF32);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 116);
    compiler::TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = Convert5ATSmi7ATint32_176(state_, compiler::TNode<Int32T>{tmp22});
    CodeStubAssembler(state_).Return(tmp23);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 119);
    compiler::TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp27);
  }
}

TF_BUILTIN(StringPrototypeConcat, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, IntPtrT, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 128);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_154(state_, "String.prototype.concat");
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToThisString(compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, compiler::TNode<String>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 131);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr8ATintptr_1464(state_, compiler::TNode<IntPtrT>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 132);
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp7, tmp8);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<String> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    ca_.Bind(&block3, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp16}, compiler::TNode<IntPtrT>{tmp15});
    ca_.Branch(tmp17, &block1, &block2, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<RawPtrT> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<String> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    ca_.Bind(&block1, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 133);
    compiler::TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp18}, compiler::TNode<RawPtrT>{tmp19}, compiler::TNode<IntPtrT>{tmp20}}, compiler::TNode<IntPtrT>{tmp25});
    compiler::TNode<String> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp21}, compiler::TNode<Object>{tmp26});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 134);
    compiler::TNode<String> tmp28;
    USE(tmp28);
    tmp28 = StringAdd_82(state_, compiler::TNode<Context>{tmp21}, compiler::TNode<String>{tmp23}, compiler::TNode<String>{tmp27});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 132);
    ca_.Goto(&block4, tmp18, tmp19, tmp20, tmp21, tmp22, tmp28, tmp24, tmp25);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<String> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    compiler::TNode<IntPtrT> tmp37;
    USE(tmp37);
    tmp37 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp36}, compiler::TNode<IntPtrT>{tmp37});
    ca_.Goto(&block3, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp38);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<RawPtrT> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<Context> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<String> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    ca_.Bind(&block2, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 136);
    arguments.PopAndReturn(tmp44);
  }
}

TF_BUILTIN(StringConstructor, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kJSNewTarget));
USE(parameter2);
  TNode<JSFunction> parameter3 = UncheckedCast<JSFunction>(Parameter(Descriptor::kJSTarget));
USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String, Object, Object, Symbol> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<JSFunction> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 147);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr8ATintptr_1464(state_, compiler::TNode<IntPtrT>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 148);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 150);
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp7}, compiler::TNode<IntPtrT>{tmp8});
    ca_.Branch(tmp9, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, ca_.Uninitialized<String>());
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<RawPtrT> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<JSFunction> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<String> tmp18;
    ca_.Bind(&block1, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 151);
    compiler::TNode<String> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).EmptyStringConstant();
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 150);
    ca_.Goto(&block3, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp19);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<JSFunction> tmp26;
    compiler::TNode<IntPtrT> tmp27;
    compiler::TNode<String> tmp28;
    ca_.Bind(&block2, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 156);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp25}, compiler::TNode<HeapObject>{tmp29});
    ca_.Branch(tmp30, &block4, &block5, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<RawPtrT> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<JSFunction> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<String> tmp39;
    ca_.Bind(&block4, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 157);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp31}, compiler::TNode<RawPtrT>{tmp32}, compiler::TNode<IntPtrT>{tmp33}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 158);
    compiler::TNode<Symbol> tmp42;
    USE(tmp42);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp42 = Cast6Symbol_1465(state_, compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp41}, &label0);
    ca_.Goto(&block8, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41, tmp41, tmp42);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41, tmp41);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<RawPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<Context> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<JSFunction> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<String> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Object> tmp53;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.Goto(&block7, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp54;
    compiler::TNode<RawPtrT> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<JSFunction> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<String> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Symbol> tmp65;
    ca_.Bind(&block8, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 159);
    compiler::TNode<String> tmp66;
    tmp66 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kSymbolDescriptiveString, tmp57, tmp65)); 
    USE(tmp66);
    arguments.PopAndReturn(tmp66);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp67;
    compiler::TNode<RawPtrT> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<Context> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<JSFunction> tmp73;
    compiler::TNode<IntPtrT> tmp74;
    compiler::TNode<String> tmp75;
    compiler::TNode<Object> tmp76;
    ca_.Bind(&block7, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 161);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 158);
    ca_.Goto(&block6, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp77;
    compiler::TNode<RawPtrT> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    compiler::TNode<Context> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<JSFunction> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<String> tmp85;
    compiler::TNode<Object> tmp86;
    ca_.Bind(&block6, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 157);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 156);
    ca_.Goto(&block5, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp87;
    compiler::TNode<RawPtrT> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<Context> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<JSFunction> tmp93;
    compiler::TNode<IntPtrT> tmp94;
    compiler::TNode<String> tmp95;
    ca_.Bind(&block5, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 166);
    compiler::TNode<IntPtrT> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp87}, compiler::TNode<RawPtrT>{tmp88}, compiler::TNode<IntPtrT>{tmp89}}, compiler::TNode<IntPtrT>{tmp96});
    compiler::TNode<String> tmp98;
    USE(tmp98);
    tmp98 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp90}, compiler::TNode<Object>{tmp97});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 150);
    ca_.Goto(&block3, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp98);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp99;
    compiler::TNode<RawPtrT> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    compiler::TNode<Context> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<JSFunction> tmp105;
    compiler::TNode<IntPtrT> tmp106;
    compiler::TNode<String> tmp107;
    ca_.Bind(&block3, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 169);
    compiler::TNode<Oddball> tmp108;
    USE(tmp108);
    tmp108 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp109;
    USE(tmp109);
    tmp109 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp104}, compiler::TNode<HeapObject>{tmp108});
    ca_.Branch(tmp109, &block10, &block11, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp110;
    compiler::TNode<RawPtrT> tmp111;
    compiler::TNode<IntPtrT> tmp112;
    compiler::TNode<Context> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<JSFunction> tmp116;
    compiler::TNode<IntPtrT> tmp117;
    compiler::TNode<String> tmp118;
    ca_.Bind(&block10, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 170);
    arguments.PopAndReturn(tmp118);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp119;
    compiler::TNode<RawPtrT> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<Context> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<JSFunction> tmp125;
    compiler::TNode<IntPtrT> tmp126;
    compiler::TNode<String> tmp127;
    ca_.Bind(&block11, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 174);
    compiler::TNode<JSReceiver> tmp128;
    USE(tmp128);
    tmp128 = UnsafeCast10JSReceiver_1451(state_, compiler::TNode<Context>{tmp122}, compiler::TNode<Object>{tmp124});
    compiler::TNode<Map> tmp129;
    USE(tmp129);
    tmp129 = GetDerivedMap_56(state_, compiler::TNode<Context>{tmp122}, compiler::TNode<JSFunction>{tmp125}, compiler::TNode<JSReceiver>{tmp128});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 176);
    compiler::TNode<JSObject> tmp130;
    USE(tmp130);
    tmp130 = AllocateFastOrSlowJSObjectFromMap_57(state_, compiler::TNode<Context>{tmp122}, compiler::TNode<Map>{tmp129});
    compiler::TNode<JSPrimitiveWrapper> tmp131;
    USE(tmp131);
    tmp131 = UnsafeCast18JSPrimitiveWrapper_1452(state_, compiler::TNode<Context>{tmp122}, compiler::TNode<Object>{tmp130});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 177);
    compiler::TNode<IntPtrT> tmp132 = ca_.IntPtrConstant(JSPrimitiveWrapper::kValueOffset);
    USE(tmp132);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp131, tmp132}, tmp127);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 178);
    arguments.PopAndReturn(tmp131);
  }
}

TF_BUILTIN(StringAddConvertLeft, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kLeft));
  USE(parameter1);
  compiler::TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kRight));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 183);
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ToPrimitiveDefault_71(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = ToStringImpl_251(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3});
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = StringAdd_82(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<String>{tmp4}, compiler::TNode<String>{tmp2});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(StringAddConvertRight, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<String> parameter1 = UncheckedCast<String>(Parameter(Descriptor::kLeft));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kRight));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<String> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 188);
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ToPrimitiveDefault_71(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = ToStringImpl_251(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3});
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = StringAdd_82(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<String>{tmp1}, compiler::TNode<String>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

compiler::TNode<IntPtrT> Convert8ATintptr8ATintptr_1464(compiler::CodeAssemblerState* state_, compiler::TNode<IntPtrT> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2650);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 131);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<IntPtrT>{tmp4};
}

compiler::TNode<Symbol> Cast6Symbol_1465(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Symbol> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Symbol> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Symbol> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2026);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<Symbol> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast6Symbol_121(state_, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<Symbol> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Symbol> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string.tq", 158);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Symbol> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<Symbol>{tmp23};
}

}  // namespace internal
}  // namespace v8

