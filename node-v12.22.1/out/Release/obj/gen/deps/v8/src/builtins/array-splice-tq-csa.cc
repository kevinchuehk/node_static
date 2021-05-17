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

compiler::TNode<FixedArray> Extract10FixedArray_42(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_first, compiler::TNode<Smi> p_count, compiler::TNode<Smi> p_capacity) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_elements, p_first, p_count, p_capacity);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArrayBase> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 18);
    compiler::TNode<FixedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ExtractFixedArray(compiler::TNode<FixedArrayBase>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 17);
    compiler::TNode<FixedArray> tmp6;
    USE(tmp6);
    tmp6 = UnsafeCast10FixedArray_1403(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp5});
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<FixedArrayBase> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<FixedArray> tmp12;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 14);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

    compiler::TNode<Context> tmp13;
    compiler::TNode<FixedArrayBase> tmp14;
    compiler::TNode<Smi> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<FixedArray> tmp18;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
  return compiler::TNode<FixedArray>{tmp18};
}

compiler::TNode<FixedDoubleArray> Extract16FixedDoubleArray_43(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_first, compiler::TNode<Smi> p_count, compiler::TNode<Smi> p_capacity) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi, FixedDoubleArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi, FixedDoubleArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_elements, p_first, p_count, p_capacity);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArrayBase> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 24);
    compiler::TNode<FixedArray> tmp5;
    USE(tmp5);
    tmp5 = kEmptyFixedArray_212(state_);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp1}, compiler::TNode<HeapObject>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<FixedArrayBase> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 25);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp11});
    compiler::TNode<FixedDoubleArray> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).AllocateZeroedFixedDoubleArray(compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block1, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<FixedArrayBase> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Smi> tmp18;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 28);
    compiler::TNode<FixedArrayBase> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).ExtractFixedArray(compiler::TNode<FixedArrayBase>{tmp15}, compiler::TNode<Smi>{tmp16}, compiler::TNode<Smi>{tmp17}, compiler::TNode<Smi>{tmp18});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 27);
    compiler::TNode<FixedDoubleArray> tmp20;
    USE(tmp20);
    tmp20 = UnsafeCast16FixedDoubleArray_1407(state_, compiler::TNode<Context>{tmp14}, compiler::TNode<Object>{tmp19});
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp18, tmp20);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<FixedArrayBase> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<FixedDoubleArray> tmp26;
    ca_.Bind(&block1, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 21);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

    compiler::TNode<Context> tmp27;
    compiler::TNode<FixedArrayBase> tmp28;
    compiler::TNode<Smi> tmp29;
    compiler::TNode<Smi> tmp30;
    compiler::TNode<Smi> tmp31;
    compiler::TNode<FixedDoubleArray> tmp32;
    ca_.Bind(&block4, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
  return compiler::TNode<FixedDoubleArray>{tmp32};
}

compiler::TNode<Object> FastArraySplice_44(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructArguments p_args, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_originalLengthNumber, compiler::TNode<Number> p_actualStartNumber, compiler::TNode<Smi> p_insertCount, compiler::TNode<Number> p_actualDeleteCountNumber, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Number, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSReceiver, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Map> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Map, Int32T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object, HeapObject> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object, HeapObject> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object, HeapObject, Int32T> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object, HeapObject, Int32T> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Number> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Number, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi, JSArray> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi, JSArray> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi, JSArray> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi, JSArray> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi, JSArray> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Object> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args.frame, p_args.base, p_args.length, p_o, p_originalLengthNumber, p_actualStartNumber, p_insertCount, p_actualDeleteCountNumber);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<Number> tmp5;
    compiler::TNode<Number> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Number> tmp8;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 115);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp9 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp5}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp5, tmp9);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp5);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<RawPtrT> tmp11;
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<Number> tmp15;
    compiler::TNode<Number> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Number> tmp18;
    compiler::TNode<Number> tmp19;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Number> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<Smi> tmp30;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 114);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 116);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp31 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp26}, &label0);
    ca_.Goto(&block5, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30, tmp26, tmp31);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30, tmp26);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<RawPtrT> tmp33;
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<JSReceiver> tmp36;
    compiler::TNode<Number> tmp37;
    compiler::TNode<Number> tmp38;
    compiler::TNode<Smi> tmp39;
    compiler::TNode<Number> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Number> tmp42;
    ca_.Bind(&block6, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<RawPtrT> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<JSReceiver> tmp47;
    compiler::TNode<Number> tmp48;
    compiler::TNode<Number> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Number> tmp51;
    compiler::TNode<Smi> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<Smi> tmp54;
    ca_.Bind(&block5, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 118);
    compiler::TNode<Smi> tmp55;
    USE(tmp55);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp55 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp51}, &label0);
    ca_.Goto(&block7, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp54, tmp51, tmp55);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp54, tmp51);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<RawPtrT> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<JSReceiver> tmp60;
    compiler::TNode<Number> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Number> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Number> tmp67;
    ca_.Bind(&block8, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<RawPtrT> tmp69;
    compiler::TNode<RawPtrT> tmp70;
    compiler::TNode<IntPtrT> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    compiler::TNode<Number> tmp73;
    compiler::TNode<Number> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<Number> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<Number> tmp79;
    compiler::TNode<Smi> tmp80;
    ca_.Bind(&block7, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 117);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 119);
    compiler::TNode<Smi> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp75}, compiler::TNode<Smi>{tmp80});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 120);
    compiler::TNode<Smi> tmp82;
    USE(tmp82);
    tmp82 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp77}, compiler::TNode<Smi>{tmp81});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 122);
    compiler::TNode<JSArray> tmp83;
    USE(tmp83);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp83 = Cast7JSArray_113(state_, compiler::TNode<HeapObject>{tmp72}, &label0);
    ca_.Goto(&block9, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp80, tmp81, tmp82, tmp72, tmp83);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp80, tmp81, tmp82, tmp72);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<RawPtrT> tmp85;
    compiler::TNode<RawPtrT> tmp86;
    compiler::TNode<IntPtrT> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<Number> tmp89;
    compiler::TNode<Number> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<Number> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<Smi> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<Smi> tmp97;
    compiler::TNode<JSReceiver> tmp98;
    ca_.Bind(&block10, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.Goto(&block1);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp99;
    compiler::TNode<RawPtrT> tmp100;
    compiler::TNode<RawPtrT> tmp101;
    compiler::TNode<IntPtrT> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<Number> tmp104;
    compiler::TNode<Number> tmp105;
    compiler::TNode<Smi> tmp106;
    compiler::TNode<Number> tmp107;
    compiler::TNode<Smi> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<Smi> tmp110;
    compiler::TNode<Smi> tmp111;
    compiler::TNode<Smi> tmp112;
    compiler::TNode<JSReceiver> tmp113;
    compiler::TNode<JSArray> tmp114;
    ca_.Bind(&block9, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 124);
    compiler::TNode<IntPtrT> tmp115 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp115);
    compiler::TNode<Map>tmp116 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp114, tmp115});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 125);
    compiler::TNode<BoolT> tmp117;
    USE(tmp117);
    tmp117 = CodeStubAssembler(state_).IsPrototypeInitialArrayPrototype(compiler::TNode<Context>{tmp99}, compiler::TNode<Map>{tmp116});
    compiler::TNode<BoolT> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp117});
    ca_.Branch(tmp118, &block11, &block12, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp114, tmp116);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp119;
    compiler::TNode<RawPtrT> tmp120;
    compiler::TNode<RawPtrT> tmp121;
    compiler::TNode<IntPtrT> tmp122;
    compiler::TNode<JSReceiver> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Number> tmp125;
    compiler::TNode<Smi> tmp126;
    compiler::TNode<Number> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<Smi> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<JSArray> tmp133;
    compiler::TNode<Map> tmp134;
    ca_.Bind(&block11, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp135;
    compiler::TNode<RawPtrT> tmp136;
    compiler::TNode<RawPtrT> tmp137;
    compiler::TNode<IntPtrT> tmp138;
    compiler::TNode<JSReceiver> tmp139;
    compiler::TNode<Number> tmp140;
    compiler::TNode<Number> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Number> tmp143;
    compiler::TNode<Smi> tmp144;
    compiler::TNode<Smi> tmp145;
    compiler::TNode<Smi> tmp146;
    compiler::TNode<Smi> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<JSArray> tmp149;
    compiler::TNode<Map> tmp150;
    ca_.Bind(&block12, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 126);
    compiler::TNode<BoolT> tmp151;
    USE(tmp151);
    tmp151 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp151, &block13, &block14, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp152;
    compiler::TNode<RawPtrT> tmp153;
    compiler::TNode<RawPtrT> tmp154;
    compiler::TNode<IntPtrT> tmp155;
    compiler::TNode<JSReceiver> tmp156;
    compiler::TNode<Number> tmp157;
    compiler::TNode<Number> tmp158;
    compiler::TNode<Smi> tmp159;
    compiler::TNode<Number> tmp160;
    compiler::TNode<Smi> tmp161;
    compiler::TNode<Smi> tmp162;
    compiler::TNode<Smi> tmp163;
    compiler::TNode<Smi> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<JSArray> tmp166;
    compiler::TNode<Map> tmp167;
    ca_.Bind(&block13, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp168;
    compiler::TNode<RawPtrT> tmp169;
    compiler::TNode<RawPtrT> tmp170;
    compiler::TNode<IntPtrT> tmp171;
    compiler::TNode<JSReceiver> tmp172;
    compiler::TNode<Number> tmp173;
    compiler::TNode<Number> tmp174;
    compiler::TNode<Smi> tmp175;
    compiler::TNode<Number> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<JSArray> tmp182;
    compiler::TNode<Map> tmp183;
    ca_.Bind(&block14, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 127);
    compiler::TNode<BoolT> tmp184;
    USE(tmp184);
    tmp184 = CodeStubAssembler(state_).IsArraySpeciesProtectorCellInvalid();
    ca_.Branch(tmp184, &block15, &block16, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp185;
    compiler::TNode<RawPtrT> tmp186;
    compiler::TNode<RawPtrT> tmp187;
    compiler::TNode<IntPtrT> tmp188;
    compiler::TNode<JSReceiver> tmp189;
    compiler::TNode<Number> tmp190;
    compiler::TNode<Number> tmp191;
    compiler::TNode<Smi> tmp192;
    compiler::TNode<Number> tmp193;
    compiler::TNode<Smi> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Smi> tmp197;
    compiler::TNode<Smi> tmp198;
    compiler::TNode<JSArray> tmp199;
    compiler::TNode<Map> tmp200;
    ca_.Bind(&block15, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200);
    ca_.Goto(&block1);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp201;
    compiler::TNode<RawPtrT> tmp202;
    compiler::TNode<RawPtrT> tmp203;
    compiler::TNode<IntPtrT> tmp204;
    compiler::TNode<JSReceiver> tmp205;
    compiler::TNode<Number> tmp206;
    compiler::TNode<Number> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<Number> tmp209;
    compiler::TNode<Smi> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<Smi> tmp212;
    compiler::TNode<Smi> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<JSArray> tmp215;
    compiler::TNode<Map> tmp216;
    ca_.Bind(&block16, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 130);
    compiler::TNode<Int32T> tmp217;
    USE(tmp217);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp217 = CodeStubAssembler(state_).EnsureArrayPushable(compiler::TNode<Map>{tmp216}, &label0);
    ca_.Goto(&block17, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp216, tmp217);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block18, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp216);
    }
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp218;
    compiler::TNode<RawPtrT> tmp219;
    compiler::TNode<RawPtrT> tmp220;
    compiler::TNode<IntPtrT> tmp221;
    compiler::TNode<JSReceiver> tmp222;
    compiler::TNode<Number> tmp223;
    compiler::TNode<Number> tmp224;
    compiler::TNode<Smi> tmp225;
    compiler::TNode<Number> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<Smi> tmp228;
    compiler::TNode<Smi> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Smi> tmp231;
    compiler::TNode<JSArray> tmp232;
    compiler::TNode<Map> tmp233;
    compiler::TNode<Map> tmp234;
    ca_.Bind(&block18, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234);
    ca_.Goto(&block1);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp235;
    compiler::TNode<RawPtrT> tmp236;
    compiler::TNode<RawPtrT> tmp237;
    compiler::TNode<IntPtrT> tmp238;
    compiler::TNode<JSReceiver> tmp239;
    compiler::TNode<Number> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<Smi> tmp242;
    compiler::TNode<Number> tmp243;
    compiler::TNode<Smi> tmp244;
    compiler::TNode<Smi> tmp245;
    compiler::TNode<Smi> tmp246;
    compiler::TNode<Smi> tmp247;
    compiler::TNode<Smi> tmp248;
    compiler::TNode<JSArray> tmp249;
    compiler::TNode<Map> tmp250;
    compiler::TNode<Map> tmp251;
    compiler::TNode<Int32T> tmp252;
    ca_.Bind(&block17, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 131);
    compiler::TNode<BoolT> tmp253;
    USE(tmp253);
    tmp253 = CodeStubAssembler(state_).IsFastElementsKind(compiler::TNode<Int32T>{tmp252});
    compiler::TNode<BoolT> tmp254;
    USE(tmp254);
    tmp254 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp253});
    ca_.Branch(tmp254, &block19, &block20, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp252);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp255;
    compiler::TNode<RawPtrT> tmp256;
    compiler::TNode<RawPtrT> tmp257;
    compiler::TNode<IntPtrT> tmp258;
    compiler::TNode<JSReceiver> tmp259;
    compiler::TNode<Number> tmp260;
    compiler::TNode<Number> tmp261;
    compiler::TNode<Smi> tmp262;
    compiler::TNode<Number> tmp263;
    compiler::TNode<Smi> tmp264;
    compiler::TNode<Smi> tmp265;
    compiler::TNode<Smi> tmp266;
    compiler::TNode<Smi> tmp267;
    compiler::TNode<Smi> tmp268;
    compiler::TNode<JSArray> tmp269;
    compiler::TNode<Map> tmp270;
    compiler::TNode<Int32T> tmp271;
    ca_.Bind(&block19, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271);
    ca_.Goto(&block1);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp272;
    compiler::TNode<RawPtrT> tmp273;
    compiler::TNode<RawPtrT> tmp274;
    compiler::TNode<IntPtrT> tmp275;
    compiler::TNode<JSReceiver> tmp276;
    compiler::TNode<Number> tmp277;
    compiler::TNode<Number> tmp278;
    compiler::TNode<Smi> tmp279;
    compiler::TNode<Number> tmp280;
    compiler::TNode<Smi> tmp281;
    compiler::TNode<Smi> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<Smi> tmp284;
    compiler::TNode<Smi> tmp285;
    compiler::TNode<JSArray> tmp286;
    compiler::TNode<Map> tmp287;
    compiler::TNode<Int32T> tmp288;
    ca_.Bind(&block20, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 133);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 134);
    compiler::TNode<IntPtrT> tmp289;
    USE(tmp289);
    tmp289 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 2);
    ca_.Goto(&block23, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp288, tmp289);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp290;
    compiler::TNode<RawPtrT> tmp291;
    compiler::TNode<RawPtrT> tmp292;
    compiler::TNode<IntPtrT> tmp293;
    compiler::TNode<JSReceiver> tmp294;
    compiler::TNode<Number> tmp295;
    compiler::TNode<Number> tmp296;
    compiler::TNode<Smi> tmp297;
    compiler::TNode<Number> tmp298;
    compiler::TNode<Smi> tmp299;
    compiler::TNode<Smi> tmp300;
    compiler::TNode<Smi> tmp301;
    compiler::TNode<Smi> tmp302;
    compiler::TNode<Smi> tmp303;
    compiler::TNode<JSArray> tmp304;
    compiler::TNode<Map> tmp305;
    compiler::TNode<Int32T> tmp306;
    compiler::TNode<Int32T> tmp307;
    compiler::TNode<IntPtrT> tmp308;
    ca_.Bind(&block23, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308);
    compiler::TNode<BoolT> tmp309;
    USE(tmp309);
    tmp309 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp308}, compiler::TNode<IntPtrT>{tmp293});
    ca_.Branch(tmp309, &block21, &block22, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp310;
    compiler::TNode<RawPtrT> tmp311;
    compiler::TNode<RawPtrT> tmp312;
    compiler::TNode<IntPtrT> tmp313;
    compiler::TNode<JSReceiver> tmp314;
    compiler::TNode<Number> tmp315;
    compiler::TNode<Number> tmp316;
    compiler::TNode<Smi> tmp317;
    compiler::TNode<Number> tmp318;
    compiler::TNode<Smi> tmp319;
    compiler::TNode<Smi> tmp320;
    compiler::TNode<Smi> tmp321;
    compiler::TNode<Smi> tmp322;
    compiler::TNode<Smi> tmp323;
    compiler::TNode<JSArray> tmp324;
    compiler::TNode<Map> tmp325;
    compiler::TNode<Int32T> tmp326;
    compiler::TNode<Int32T> tmp327;
    compiler::TNode<IntPtrT> tmp328;
    ca_.Bind(&block21, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 135);
    compiler::TNode<Object> tmp329;
    USE(tmp329);
    tmp329 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp311}, compiler::TNode<RawPtrT>{tmp312}, compiler::TNode<IntPtrT>{tmp313}}, compiler::TNode<IntPtrT>{tmp328});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 136);
    compiler::TNode<BoolT> tmp330;
    USE(tmp330);
    tmp330 = CodeStubAssembler(state_).IsFastSmiElementsKind(compiler::TNode<Int32T>{tmp326});
    ca_.Branch(tmp330, &block25, &block26, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp331;
    compiler::TNode<RawPtrT> tmp332;
    compiler::TNode<RawPtrT> tmp333;
    compiler::TNode<IntPtrT> tmp334;
    compiler::TNode<JSReceiver> tmp335;
    compiler::TNode<Number> tmp336;
    compiler::TNode<Number> tmp337;
    compiler::TNode<Smi> tmp338;
    compiler::TNode<Number> tmp339;
    compiler::TNode<Smi> tmp340;
    compiler::TNode<Smi> tmp341;
    compiler::TNode<Smi> tmp342;
    compiler::TNode<Smi> tmp343;
    compiler::TNode<Smi> tmp344;
    compiler::TNode<JSArray> tmp345;
    compiler::TNode<Map> tmp346;
    compiler::TNode<Int32T> tmp347;
    compiler::TNode<Int32T> tmp348;
    compiler::TNode<IntPtrT> tmp349;
    compiler::TNode<Object> tmp350;
    ca_.Bind(&block25, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 137);
    compiler::TNode<BoolT> tmp351;
    USE(tmp351);
    tmp351 = CodeStubAssembler(state_).TaggedIsNotSmi(compiler::TNode<Object>{tmp350});
    ca_.Branch(tmp351, &block28, &block29, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp352;
    compiler::TNode<RawPtrT> tmp353;
    compiler::TNode<RawPtrT> tmp354;
    compiler::TNode<IntPtrT> tmp355;
    compiler::TNode<JSReceiver> tmp356;
    compiler::TNode<Number> tmp357;
    compiler::TNode<Number> tmp358;
    compiler::TNode<Smi> tmp359;
    compiler::TNode<Number> tmp360;
    compiler::TNode<Smi> tmp361;
    compiler::TNode<Smi> tmp362;
    compiler::TNode<Smi> tmp363;
    compiler::TNode<Smi> tmp364;
    compiler::TNode<Smi> tmp365;
    compiler::TNode<JSArray> tmp366;
    compiler::TNode<Map> tmp367;
    compiler::TNode<Int32T> tmp368;
    compiler::TNode<Int32T> tmp369;
    compiler::TNode<IntPtrT> tmp370;
    compiler::TNode<Object> tmp371;
    ca_.Bind(&block28, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 138);
    compiler::TNode<HeapObject> tmp372;
    USE(tmp372);
    tmp372 = UnsafeCast10HeapObject_1413(state_, compiler::TNode<Context>{tmp352}, compiler::TNode<Object>{tmp371});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 139);
    compiler::TNode<BoolT> tmp373;
    USE(tmp373);
    tmp373 = CodeStubAssembler(state_).IsHeapNumber(compiler::TNode<HeapObject>{tmp372});
    ca_.Branch(tmp373, &block30, &block31, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp374;
    compiler::TNode<RawPtrT> tmp375;
    compiler::TNode<RawPtrT> tmp376;
    compiler::TNode<IntPtrT> tmp377;
    compiler::TNode<JSReceiver> tmp378;
    compiler::TNode<Number> tmp379;
    compiler::TNode<Number> tmp380;
    compiler::TNode<Smi> tmp381;
    compiler::TNode<Number> tmp382;
    compiler::TNode<Smi> tmp383;
    compiler::TNode<Smi> tmp384;
    compiler::TNode<Smi> tmp385;
    compiler::TNode<Smi> tmp386;
    compiler::TNode<Smi> tmp387;
    compiler::TNode<JSArray> tmp388;
    compiler::TNode<Map> tmp389;
    compiler::TNode<Int32T> tmp390;
    compiler::TNode<Int32T> tmp391;
    compiler::TNode<IntPtrT> tmp392;
    compiler::TNode<Object> tmp393;
    compiler::TNode<HeapObject> tmp394;
    ca_.Bind(&block30, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 140);
    compiler::TNode<Int32T> tmp395;
    USE(tmp395);
    tmp395 = AllowDoubleElements_217(state_, compiler::TNode<Int32T>{tmp390});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 139);
    ca_.Goto(&block33, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp396;
    compiler::TNode<RawPtrT> tmp397;
    compiler::TNode<RawPtrT> tmp398;
    compiler::TNode<IntPtrT> tmp399;
    compiler::TNode<JSReceiver> tmp400;
    compiler::TNode<Number> tmp401;
    compiler::TNode<Number> tmp402;
    compiler::TNode<Smi> tmp403;
    compiler::TNode<Number> tmp404;
    compiler::TNode<Smi> tmp405;
    compiler::TNode<Smi> tmp406;
    compiler::TNode<Smi> tmp407;
    compiler::TNode<Smi> tmp408;
    compiler::TNode<Smi> tmp409;
    compiler::TNode<JSArray> tmp410;
    compiler::TNode<Map> tmp411;
    compiler::TNode<Int32T> tmp412;
    compiler::TNode<Int32T> tmp413;
    compiler::TNode<IntPtrT> tmp414;
    compiler::TNode<Object> tmp415;
    compiler::TNode<HeapObject> tmp416;
    ca_.Bind(&block31, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 141);
    compiler::TNode<Int32T> tmp417;
    USE(tmp417);
    tmp417 = AllowNonNumberElements_218(state_, compiler::TNode<Int32T>{tmp412});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 139);
    ca_.Goto(&block32, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp418;
    compiler::TNode<RawPtrT> tmp419;
    compiler::TNode<RawPtrT> tmp420;
    compiler::TNode<IntPtrT> tmp421;
    compiler::TNode<JSReceiver> tmp422;
    compiler::TNode<Number> tmp423;
    compiler::TNode<Number> tmp424;
    compiler::TNode<Smi> tmp425;
    compiler::TNode<Number> tmp426;
    compiler::TNode<Smi> tmp427;
    compiler::TNode<Smi> tmp428;
    compiler::TNode<Smi> tmp429;
    compiler::TNode<Smi> tmp430;
    compiler::TNode<Smi> tmp431;
    compiler::TNode<JSArray> tmp432;
    compiler::TNode<Map> tmp433;
    compiler::TNode<Int32T> tmp434;
    compiler::TNode<Int32T> tmp435;
    compiler::TNode<IntPtrT> tmp436;
    compiler::TNode<Object> tmp437;
    compiler::TNode<HeapObject> tmp438;
    compiler::TNode<Int32T> tmp439;
    ca_.Bind(&block33, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439);
    ca_.Goto(&block32, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp440;
    compiler::TNode<RawPtrT> tmp441;
    compiler::TNode<RawPtrT> tmp442;
    compiler::TNode<IntPtrT> tmp443;
    compiler::TNode<JSReceiver> tmp444;
    compiler::TNode<Number> tmp445;
    compiler::TNode<Number> tmp446;
    compiler::TNode<Smi> tmp447;
    compiler::TNode<Number> tmp448;
    compiler::TNode<Smi> tmp449;
    compiler::TNode<Smi> tmp450;
    compiler::TNode<Smi> tmp451;
    compiler::TNode<Smi> tmp452;
    compiler::TNode<Smi> tmp453;
    compiler::TNode<JSArray> tmp454;
    compiler::TNode<Map> tmp455;
    compiler::TNode<Int32T> tmp456;
    compiler::TNode<Int32T> tmp457;
    compiler::TNode<IntPtrT> tmp458;
    compiler::TNode<Object> tmp459;
    compiler::TNode<HeapObject> tmp460;
    compiler::TNode<Int32T> tmp461;
    ca_.Bind(&block32, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 137);
    ca_.Goto(&block29, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp461, tmp457, tmp458, tmp459);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp462;
    compiler::TNode<RawPtrT> tmp463;
    compiler::TNode<RawPtrT> tmp464;
    compiler::TNode<IntPtrT> tmp465;
    compiler::TNode<JSReceiver> tmp466;
    compiler::TNode<Number> tmp467;
    compiler::TNode<Number> tmp468;
    compiler::TNode<Smi> tmp469;
    compiler::TNode<Number> tmp470;
    compiler::TNode<Smi> tmp471;
    compiler::TNode<Smi> tmp472;
    compiler::TNode<Smi> tmp473;
    compiler::TNode<Smi> tmp474;
    compiler::TNode<Smi> tmp475;
    compiler::TNode<JSArray> tmp476;
    compiler::TNode<Map> tmp477;
    compiler::TNode<Int32T> tmp478;
    compiler::TNode<Int32T> tmp479;
    compiler::TNode<IntPtrT> tmp480;
    compiler::TNode<Object> tmp481;
    ca_.Bind(&block29, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 136);
    ca_.Goto(&block27, tmp462, tmp463, tmp464, tmp465, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp482;
    compiler::TNode<RawPtrT> tmp483;
    compiler::TNode<RawPtrT> tmp484;
    compiler::TNode<IntPtrT> tmp485;
    compiler::TNode<JSReceiver> tmp486;
    compiler::TNode<Number> tmp487;
    compiler::TNode<Number> tmp488;
    compiler::TNode<Smi> tmp489;
    compiler::TNode<Number> tmp490;
    compiler::TNode<Smi> tmp491;
    compiler::TNode<Smi> tmp492;
    compiler::TNode<Smi> tmp493;
    compiler::TNode<Smi> tmp494;
    compiler::TNode<Smi> tmp495;
    compiler::TNode<JSArray> tmp496;
    compiler::TNode<Map> tmp497;
    compiler::TNode<Int32T> tmp498;
    compiler::TNode<Int32T> tmp499;
    compiler::TNode<IntPtrT> tmp500;
    compiler::TNode<Object> tmp501;
    ca_.Bind(&block26, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 143);
    compiler::TNode<BoolT> tmp502;
    USE(tmp502);
    tmp502 = CodeStubAssembler(state_).IsDoubleElementsKind(compiler::TNode<Int32T>{tmp498});
    ca_.Branch(tmp502, &block34, &block35, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp498, tmp499, tmp500, tmp501);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp503;
    compiler::TNode<RawPtrT> tmp504;
    compiler::TNode<RawPtrT> tmp505;
    compiler::TNode<IntPtrT> tmp506;
    compiler::TNode<JSReceiver> tmp507;
    compiler::TNode<Number> tmp508;
    compiler::TNode<Number> tmp509;
    compiler::TNode<Smi> tmp510;
    compiler::TNode<Number> tmp511;
    compiler::TNode<Smi> tmp512;
    compiler::TNode<Smi> tmp513;
    compiler::TNode<Smi> tmp514;
    compiler::TNode<Smi> tmp515;
    compiler::TNode<Smi> tmp516;
    compiler::TNode<JSArray> tmp517;
    compiler::TNode<Map> tmp518;
    compiler::TNode<Int32T> tmp519;
    compiler::TNode<Int32T> tmp520;
    compiler::TNode<IntPtrT> tmp521;
    compiler::TNode<Object> tmp522;
    ca_.Bind(&block34, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 144);
    compiler::TNode<BoolT> tmp523;
    USE(tmp523);
    tmp523 = CodeStubAssembler(state_).IsNumber(compiler::TNode<Object>{tmp522});
    compiler::TNode<BoolT> tmp524;
    USE(tmp524);
    tmp524 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp523});
    ca_.Branch(tmp524, &block36, &block37, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509, tmp510, tmp511, tmp512, tmp513, tmp514, tmp515, tmp516, tmp517, tmp518, tmp519, tmp520, tmp521, tmp522);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp525;
    compiler::TNode<RawPtrT> tmp526;
    compiler::TNode<RawPtrT> tmp527;
    compiler::TNode<IntPtrT> tmp528;
    compiler::TNode<JSReceiver> tmp529;
    compiler::TNode<Number> tmp530;
    compiler::TNode<Number> tmp531;
    compiler::TNode<Smi> tmp532;
    compiler::TNode<Number> tmp533;
    compiler::TNode<Smi> tmp534;
    compiler::TNode<Smi> tmp535;
    compiler::TNode<Smi> tmp536;
    compiler::TNode<Smi> tmp537;
    compiler::TNode<Smi> tmp538;
    compiler::TNode<JSArray> tmp539;
    compiler::TNode<Map> tmp540;
    compiler::TNode<Int32T> tmp541;
    compiler::TNode<Int32T> tmp542;
    compiler::TNode<IntPtrT> tmp543;
    compiler::TNode<Object> tmp544;
    ca_.Bind(&block36, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 145);
    compiler::TNode<Int32T> tmp545;
    USE(tmp545);
    tmp545 = AllowNonNumberElements_218(state_, compiler::TNode<Int32T>{tmp541});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 144);
    ca_.Goto(&block37, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp545, tmp542, tmp543, tmp544);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp546;
    compiler::TNode<RawPtrT> tmp547;
    compiler::TNode<RawPtrT> tmp548;
    compiler::TNode<IntPtrT> tmp549;
    compiler::TNode<JSReceiver> tmp550;
    compiler::TNode<Number> tmp551;
    compiler::TNode<Number> tmp552;
    compiler::TNode<Smi> tmp553;
    compiler::TNode<Number> tmp554;
    compiler::TNode<Smi> tmp555;
    compiler::TNode<Smi> tmp556;
    compiler::TNode<Smi> tmp557;
    compiler::TNode<Smi> tmp558;
    compiler::TNode<Smi> tmp559;
    compiler::TNode<JSArray> tmp560;
    compiler::TNode<Map> tmp561;
    compiler::TNode<Int32T> tmp562;
    compiler::TNode<Int32T> tmp563;
    compiler::TNode<IntPtrT> tmp564;
    compiler::TNode<Object> tmp565;
    ca_.Bind(&block37, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564, &tmp565);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 143);
    ca_.Goto(&block35, tmp546, tmp547, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557, tmp558, tmp559, tmp560, tmp561, tmp562, tmp563, tmp564, tmp565);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp566;
    compiler::TNode<RawPtrT> tmp567;
    compiler::TNode<RawPtrT> tmp568;
    compiler::TNode<IntPtrT> tmp569;
    compiler::TNode<JSReceiver> tmp570;
    compiler::TNode<Number> tmp571;
    compiler::TNode<Number> tmp572;
    compiler::TNode<Smi> tmp573;
    compiler::TNode<Number> tmp574;
    compiler::TNode<Smi> tmp575;
    compiler::TNode<Smi> tmp576;
    compiler::TNode<Smi> tmp577;
    compiler::TNode<Smi> tmp578;
    compiler::TNode<Smi> tmp579;
    compiler::TNode<JSArray> tmp580;
    compiler::TNode<Map> tmp581;
    compiler::TNode<Int32T> tmp582;
    compiler::TNode<Int32T> tmp583;
    compiler::TNode<IntPtrT> tmp584;
    compiler::TNode<Object> tmp585;
    ca_.Bind(&block35, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 136);
    ca_.Goto(&block27, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp576, tmp577, tmp578, tmp579, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp586;
    compiler::TNode<RawPtrT> tmp587;
    compiler::TNode<RawPtrT> tmp588;
    compiler::TNode<IntPtrT> tmp589;
    compiler::TNode<JSReceiver> tmp590;
    compiler::TNode<Number> tmp591;
    compiler::TNode<Number> tmp592;
    compiler::TNode<Smi> tmp593;
    compiler::TNode<Number> tmp594;
    compiler::TNode<Smi> tmp595;
    compiler::TNode<Smi> tmp596;
    compiler::TNode<Smi> tmp597;
    compiler::TNode<Smi> tmp598;
    compiler::TNode<Smi> tmp599;
    compiler::TNode<JSArray> tmp600;
    compiler::TNode<Map> tmp601;
    compiler::TNode<Int32T> tmp602;
    compiler::TNode<Int32T> tmp603;
    compiler::TNode<IntPtrT> tmp604;
    compiler::TNode<Object> tmp605;
    ca_.Bind(&block27, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 134);
    ca_.Goto(&block24, tmp586, tmp587, tmp588, tmp589, tmp590, tmp591, tmp592, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp606;
    compiler::TNode<RawPtrT> tmp607;
    compiler::TNode<RawPtrT> tmp608;
    compiler::TNode<IntPtrT> tmp609;
    compiler::TNode<JSReceiver> tmp610;
    compiler::TNode<Number> tmp611;
    compiler::TNode<Number> tmp612;
    compiler::TNode<Smi> tmp613;
    compiler::TNode<Number> tmp614;
    compiler::TNode<Smi> tmp615;
    compiler::TNode<Smi> tmp616;
    compiler::TNode<Smi> tmp617;
    compiler::TNode<Smi> tmp618;
    compiler::TNode<Smi> tmp619;
    compiler::TNode<JSArray> tmp620;
    compiler::TNode<Map> tmp621;
    compiler::TNode<Int32T> tmp622;
    compiler::TNode<Int32T> tmp623;
    compiler::TNode<IntPtrT> tmp624;
    ca_.Bind(&block24, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624);
    compiler::TNode<IntPtrT> tmp625;
    USE(tmp625);
    tmp625 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp626;
    USE(tmp626);
    tmp626 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp624}, compiler::TNode<IntPtrT>{tmp625});
    ca_.Goto(&block23, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp614, tmp615, tmp616, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp626);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp627;
    compiler::TNode<RawPtrT> tmp628;
    compiler::TNode<RawPtrT> tmp629;
    compiler::TNode<IntPtrT> tmp630;
    compiler::TNode<JSReceiver> tmp631;
    compiler::TNode<Number> tmp632;
    compiler::TNode<Number> tmp633;
    compiler::TNode<Smi> tmp634;
    compiler::TNode<Number> tmp635;
    compiler::TNode<Smi> tmp636;
    compiler::TNode<Smi> tmp637;
    compiler::TNode<Smi> tmp638;
    compiler::TNode<Smi> tmp639;
    compiler::TNode<Smi> tmp640;
    compiler::TNode<JSArray> tmp641;
    compiler::TNode<Map> tmp642;
    compiler::TNode<Int32T> tmp643;
    compiler::TNode<Int32T> tmp644;
    compiler::TNode<IntPtrT> tmp645;
    ca_.Bind(&block22, &tmp627, &tmp628, &tmp629, &tmp630, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 150);
    compiler::TNode<BoolT> tmp646;
    USE(tmp646);
    tmp646 = ElementsKindNotEqual_72(state_, compiler::TNode<Int32T>{tmp643}, compiler::TNode<Int32T>{tmp644});
    ca_.Branch(tmp646, &block38, &block39, tmp627, tmp628, tmp629, tmp630, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp644);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp647;
    compiler::TNode<RawPtrT> tmp648;
    compiler::TNode<RawPtrT> tmp649;
    compiler::TNode<IntPtrT> tmp650;
    compiler::TNode<JSReceiver> tmp651;
    compiler::TNode<Number> tmp652;
    compiler::TNode<Number> tmp653;
    compiler::TNode<Smi> tmp654;
    compiler::TNode<Number> tmp655;
    compiler::TNode<Smi> tmp656;
    compiler::TNode<Smi> tmp657;
    compiler::TNode<Smi> tmp658;
    compiler::TNode<Smi> tmp659;
    compiler::TNode<Smi> tmp660;
    compiler::TNode<JSArray> tmp661;
    compiler::TNode<Map> tmp662;
    compiler::TNode<Int32T> tmp663;
    compiler::TNode<Int32T> tmp664;
    ca_.Bind(&block38, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 151);
    compiler::TNode<Int32T> tmp665;
    USE(tmp665);
    tmp665 = Convert7ATint3214ATElementsKind_172(state_, compiler::TNode<Int32T>{tmp663});
    compiler::TNode<Smi> tmp666;
    USE(tmp666);
    tmp666 = Convert5ATSmi7ATint32_176(state_, compiler::TNode<Int32T>{tmp665});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 152);
    CodeStubAssembler(state_).CallRuntime(Runtime::kTransitionElementsKindWithKind, tmp647, tmp661, tmp666);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 150);
    ca_.Goto(&block39, tmp647, tmp648, tmp649, tmp650, tmp651, tmp652, tmp653, tmp654, tmp655, tmp656, tmp657, tmp658, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp668;
    compiler::TNode<RawPtrT> tmp669;
    compiler::TNode<RawPtrT> tmp670;
    compiler::TNode<IntPtrT> tmp671;
    compiler::TNode<JSReceiver> tmp672;
    compiler::TNode<Number> tmp673;
    compiler::TNode<Number> tmp674;
    compiler::TNode<Smi> tmp675;
    compiler::TNode<Number> tmp676;
    compiler::TNode<Smi> tmp677;
    compiler::TNode<Smi> tmp678;
    compiler::TNode<Smi> tmp679;
    compiler::TNode<Smi> tmp680;
    compiler::TNode<Smi> tmp681;
    compiler::TNode<JSArray> tmp682;
    compiler::TNode<Map> tmp683;
    compiler::TNode<Int32T> tmp684;
    compiler::TNode<Int32T> tmp685;
    ca_.Bind(&block39, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 156);
    compiler::TNode<IntPtrT> tmp686 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp686);
    compiler::TNode<Number>tmp687 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp682, tmp686});
    compiler::TNode<Smi> tmp688;
    USE(tmp688);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp688 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp687}, &label0);
    ca_.Goto(&block40, tmp668, tmp669, tmp670, tmp671, tmp672, tmp673, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp687, tmp688);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block41, tmp668, tmp669, tmp670, tmp671, tmp672, tmp673, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp687);
    }
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp689;
    compiler::TNode<RawPtrT> tmp690;
    compiler::TNode<RawPtrT> tmp691;
    compiler::TNode<IntPtrT> tmp692;
    compiler::TNode<JSReceiver> tmp693;
    compiler::TNode<Number> tmp694;
    compiler::TNode<Number> tmp695;
    compiler::TNode<Smi> tmp696;
    compiler::TNode<Number> tmp697;
    compiler::TNode<Smi> tmp698;
    compiler::TNode<Smi> tmp699;
    compiler::TNode<Smi> tmp700;
    compiler::TNode<Smi> tmp701;
    compiler::TNode<Smi> tmp702;
    compiler::TNode<JSArray> tmp703;
    compiler::TNode<Map> tmp704;
    compiler::TNode<Int32T> tmp705;
    compiler::TNode<Int32T> tmp706;
    compiler::TNode<Number> tmp707;
    ca_.Bind(&block41, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704, &tmp705, &tmp706, &tmp707);
    ca_.Goto(&block1);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp708;
    compiler::TNode<RawPtrT> tmp709;
    compiler::TNode<RawPtrT> tmp710;
    compiler::TNode<IntPtrT> tmp711;
    compiler::TNode<JSReceiver> tmp712;
    compiler::TNode<Number> tmp713;
    compiler::TNode<Number> tmp714;
    compiler::TNode<Smi> tmp715;
    compiler::TNode<Number> tmp716;
    compiler::TNode<Smi> tmp717;
    compiler::TNode<Smi> tmp718;
    compiler::TNode<Smi> tmp719;
    compiler::TNode<Smi> tmp720;
    compiler::TNode<Smi> tmp721;
    compiler::TNode<JSArray> tmp722;
    compiler::TNode<Map> tmp723;
    compiler::TNode<Int32T> tmp724;
    compiler::TNode<Int32T> tmp725;
    compiler::TNode<Number> tmp726;
    compiler::TNode<Smi> tmp727;
    ca_.Bind(&block40, &tmp708, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715, &tmp716, &tmp717, &tmp718, &tmp719, &tmp720, &tmp721, &tmp722, &tmp723, &tmp724, &tmp725, &tmp726, &tmp727);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 157);
    compiler::TNode<BoolT> tmp728;
    USE(tmp728);
    tmp728 = CodeStubAssembler(state_).SmiNotEqual(compiler::TNode<Smi>{tmp717}, compiler::TNode<Smi>{tmp727});
    ca_.Branch(tmp728, &block42, &block43, tmp708, tmp709, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp716, tmp717, tmp718, tmp719, tmp720, tmp721, tmp722, tmp723, tmp724, tmp725, tmp727);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp729;
    compiler::TNode<RawPtrT> tmp730;
    compiler::TNode<RawPtrT> tmp731;
    compiler::TNode<IntPtrT> tmp732;
    compiler::TNode<JSReceiver> tmp733;
    compiler::TNode<Number> tmp734;
    compiler::TNode<Number> tmp735;
    compiler::TNode<Smi> tmp736;
    compiler::TNode<Number> tmp737;
    compiler::TNode<Smi> tmp738;
    compiler::TNode<Smi> tmp739;
    compiler::TNode<Smi> tmp740;
    compiler::TNode<Smi> tmp741;
    compiler::TNode<Smi> tmp742;
    compiler::TNode<JSArray> tmp743;
    compiler::TNode<Map> tmp744;
    compiler::TNode<Int32T> tmp745;
    compiler::TNode<Int32T> tmp746;
    compiler::TNode<Smi> tmp747;
    ca_.Bind(&block42, &tmp729, &tmp730, &tmp731, &tmp732, &tmp733, &tmp734, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739, &tmp740, &tmp741, &tmp742, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747);
    ca_.Goto(&block1);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp748;
    compiler::TNode<RawPtrT> tmp749;
    compiler::TNode<RawPtrT> tmp750;
    compiler::TNode<IntPtrT> tmp751;
    compiler::TNode<JSReceiver> tmp752;
    compiler::TNode<Number> tmp753;
    compiler::TNode<Number> tmp754;
    compiler::TNode<Smi> tmp755;
    compiler::TNode<Number> tmp756;
    compiler::TNode<Smi> tmp757;
    compiler::TNode<Smi> tmp758;
    compiler::TNode<Smi> tmp759;
    compiler::TNode<Smi> tmp760;
    compiler::TNode<Smi> tmp761;
    compiler::TNode<JSArray> tmp762;
    compiler::TNode<Map> tmp763;
    compiler::TNode<Int32T> tmp764;
    compiler::TNode<Int32T> tmp765;
    compiler::TNode<Smi> tmp766;
    ca_.Bind(&block43, &tmp748, &tmp749, &tmp750, &tmp751, &tmp752, &tmp753, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758, &tmp759, &tmp760, &tmp761, &tmp762, &tmp763, &tmp764, &tmp765, &tmp766);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 160);
    compiler::TNode<JSArray> tmp767;
    tmp767 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kExtractFastJSArray, tmp748, tmp762, tmp758, tmp759));
    USE(tmp767);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 159);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 162);
    compiler::TNode<Smi> tmp768;
    USE(tmp768);
    tmp768 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp769;
    USE(tmp769);
    tmp769 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp761}, compiler::TNode<Smi>{tmp768});
    ca_.Branch(tmp769, &block44, &block45, tmp748, tmp749, tmp750, tmp751, tmp752, tmp753, tmp754, tmp755, tmp756, tmp757, tmp758, tmp759, tmp760, tmp761, tmp762, tmp763, tmp764, tmp765, tmp766, tmp767);
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp770;
    compiler::TNode<RawPtrT> tmp771;
    compiler::TNode<RawPtrT> tmp772;
    compiler::TNode<IntPtrT> tmp773;
    compiler::TNode<JSReceiver> tmp774;
    compiler::TNode<Number> tmp775;
    compiler::TNode<Number> tmp776;
    compiler::TNode<Smi> tmp777;
    compiler::TNode<Number> tmp778;
    compiler::TNode<Smi> tmp779;
    compiler::TNode<Smi> tmp780;
    compiler::TNode<Smi> tmp781;
    compiler::TNode<Smi> tmp782;
    compiler::TNode<Smi> tmp783;
    compiler::TNode<JSArray> tmp784;
    compiler::TNode<Map> tmp785;
    compiler::TNode<Int32T> tmp786;
    compiler::TNode<Int32T> tmp787;
    compiler::TNode<Smi> tmp788;
    compiler::TNode<JSArray> tmp789;
    ca_.Bind(&block44, &tmp770, &tmp771, &tmp772, &tmp773, &tmp774, &tmp775, &tmp776, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 163);
    compiler::TNode<IntPtrT> tmp790 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp790);
    compiler::TNode<FixedArray> tmp791;
    USE(tmp791);
    tmp791 = kEmptyFixedArray_212(state_);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp784, tmp790}, tmp791);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 164);
    compiler::TNode<IntPtrT> tmp792 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp792);
    compiler::TNode<Number> tmp793;
    USE(tmp793);
    tmp793 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp784, tmp792}, tmp793);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 165);
    ca_.Goto(&block2, tmp770, tmp771, tmp772, tmp773, tmp774, tmp775, tmp776, tmp777, tmp778, tmp789);
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp794;
    compiler::TNode<RawPtrT> tmp795;
    compiler::TNode<RawPtrT> tmp796;
    compiler::TNode<IntPtrT> tmp797;
    compiler::TNode<JSReceiver> tmp798;
    compiler::TNode<Number> tmp799;
    compiler::TNode<Number> tmp800;
    compiler::TNode<Smi> tmp801;
    compiler::TNode<Number> tmp802;
    compiler::TNode<Smi> tmp803;
    compiler::TNode<Smi> tmp804;
    compiler::TNode<Smi> tmp805;
    compiler::TNode<Smi> tmp806;
    compiler::TNode<Smi> tmp807;
    compiler::TNode<JSArray> tmp808;
    compiler::TNode<Map> tmp809;
    compiler::TNode<Int32T> tmp810;
    compiler::TNode<Int32T> tmp811;
    compiler::TNode<Smi> tmp812;
    compiler::TNode<JSArray> tmp813;
    ca_.Bind(&block45, &tmp794, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802, &tmp803, &tmp804, &tmp805, &tmp806, &tmp807, &tmp808, &tmp809, &tmp810, &tmp811, &tmp812, &tmp813);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 168);
    compiler::TNode<BoolT> tmp814;
    USE(tmp814);
    tmp814 = CodeStubAssembler(state_).IsFastSmiOrTaggedElementsKind(compiler::TNode<Int32T>{tmp810});
    ca_.Branch(tmp814, &block46, &block47, tmp794, tmp795, tmp796, tmp797, tmp798, tmp799, tmp800, tmp801, tmp802, tmp803, tmp804, tmp805, tmp806, tmp807, tmp808, tmp809, tmp810, tmp811, tmp812, tmp813);
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp815;
    compiler::TNode<RawPtrT> tmp816;
    compiler::TNode<RawPtrT> tmp817;
    compiler::TNode<IntPtrT> tmp818;
    compiler::TNode<JSReceiver> tmp819;
    compiler::TNode<Number> tmp820;
    compiler::TNode<Number> tmp821;
    compiler::TNode<Smi> tmp822;
    compiler::TNode<Number> tmp823;
    compiler::TNode<Smi> tmp824;
    compiler::TNode<Smi> tmp825;
    compiler::TNode<Smi> tmp826;
    compiler::TNode<Smi> tmp827;
    compiler::TNode<Smi> tmp828;
    compiler::TNode<JSArray> tmp829;
    compiler::TNode<Map> tmp830;
    compiler::TNode<Int32T> tmp831;
    compiler::TNode<Int32T> tmp832;
    compiler::TNode<Smi> tmp833;
    compiler::TNode<JSArray> tmp834;
    ca_.Bind(&block46, &tmp815, &tmp816, &tmp817, &tmp818, &tmp819, &tmp820, &tmp821, &tmp822, &tmp823, &tmp824, &tmp825, &tmp826, &tmp827, &tmp828, &tmp829, &tmp830, &tmp831, &tmp832, &tmp833, &tmp834);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 170);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 171);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 169);
    FastSplice10FixedArray90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1432(state_, compiler::TNode<Context>{tmp815}, TorqueStructArguments{compiler::TNode<RawPtrT>{tmp816}, compiler::TNode<RawPtrT>{tmp817}, compiler::TNode<IntPtrT>{tmp818}}, compiler::TNode<JSArray>{tmp829}, compiler::TNode<Smi>{tmp833}, compiler::TNode<Smi>{tmp828}, compiler::TNode<Smi>{tmp825}, compiler::TNode<Smi>{tmp822}, compiler::TNode<Smi>{tmp826});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 168);
    ca_.Goto(&block48, tmp815, tmp816, tmp817, tmp818, tmp819, tmp820, tmp821, tmp822, tmp823, tmp824, tmp825, tmp826, tmp827, tmp828, tmp829, tmp830, tmp831, tmp832, tmp833, tmp834);
  }

  if (block47.is_used()) {
    compiler::TNode<Context> tmp835;
    compiler::TNode<RawPtrT> tmp836;
    compiler::TNode<RawPtrT> tmp837;
    compiler::TNode<IntPtrT> tmp838;
    compiler::TNode<JSReceiver> tmp839;
    compiler::TNode<Number> tmp840;
    compiler::TNode<Number> tmp841;
    compiler::TNode<Smi> tmp842;
    compiler::TNode<Number> tmp843;
    compiler::TNode<Smi> tmp844;
    compiler::TNode<Smi> tmp845;
    compiler::TNode<Smi> tmp846;
    compiler::TNode<Smi> tmp847;
    compiler::TNode<Smi> tmp848;
    compiler::TNode<JSArray> tmp849;
    compiler::TNode<Map> tmp850;
    compiler::TNode<Int32T> tmp851;
    compiler::TNode<Int32T> tmp852;
    compiler::TNode<Smi> tmp853;
    compiler::TNode<JSArray> tmp854;
    ca_.Bind(&block47, &tmp835, &tmp836, &tmp837, &tmp838, &tmp839, &tmp840, &tmp841, &tmp842, &tmp843, &tmp844, &tmp845, &tmp846, &tmp847, &tmp848, &tmp849, &tmp850, &tmp851, &tmp852, &tmp853, &tmp854);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 174);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 175);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 173);
    FastSplice16FixedDoubleArray20UT5ATSmi10HeapNumber_1433(state_, compiler::TNode<Context>{tmp835}, TorqueStructArguments{compiler::TNode<RawPtrT>{tmp836}, compiler::TNode<RawPtrT>{tmp837}, compiler::TNode<IntPtrT>{tmp838}}, compiler::TNode<JSArray>{tmp849}, compiler::TNode<Smi>{tmp853}, compiler::TNode<Smi>{tmp848}, compiler::TNode<Smi>{tmp845}, compiler::TNode<Smi>{tmp842}, compiler::TNode<Smi>{tmp846});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 168);
    ca_.Goto(&block48, tmp835, tmp836, tmp837, tmp838, tmp839, tmp840, tmp841, tmp842, tmp843, tmp844, tmp845, tmp846, tmp847, tmp848, tmp849, tmp850, tmp851, tmp852, tmp853, tmp854);
  }

  if (block48.is_used()) {
    compiler::TNode<Context> tmp855;
    compiler::TNode<RawPtrT> tmp856;
    compiler::TNode<RawPtrT> tmp857;
    compiler::TNode<IntPtrT> tmp858;
    compiler::TNode<JSReceiver> tmp859;
    compiler::TNode<Number> tmp860;
    compiler::TNode<Number> tmp861;
    compiler::TNode<Smi> tmp862;
    compiler::TNode<Number> tmp863;
    compiler::TNode<Smi> tmp864;
    compiler::TNode<Smi> tmp865;
    compiler::TNode<Smi> tmp866;
    compiler::TNode<Smi> tmp867;
    compiler::TNode<Smi> tmp868;
    compiler::TNode<JSArray> tmp869;
    compiler::TNode<Map> tmp870;
    compiler::TNode<Int32T> tmp871;
    compiler::TNode<Int32T> tmp872;
    compiler::TNode<Smi> tmp873;
    compiler::TNode<JSArray> tmp874;
    ca_.Bind(&block48, &tmp855, &tmp856, &tmp857, &tmp858, &tmp859, &tmp860, &tmp861, &tmp862, &tmp863, &tmp864, &tmp865, &tmp866, &tmp867, &tmp868, &tmp869, &tmp870, &tmp871, &tmp872, &tmp873, &tmp874);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 178);
    ca_.Goto(&block2, tmp855, tmp856, tmp857, tmp858, tmp859, tmp860, tmp861, tmp862, tmp863, tmp874);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp875;
    compiler::TNode<RawPtrT> tmp876;
    compiler::TNode<RawPtrT> tmp877;
    compiler::TNode<IntPtrT> tmp878;
    compiler::TNode<JSReceiver> tmp879;
    compiler::TNode<Number> tmp880;
    compiler::TNode<Number> tmp881;
    compiler::TNode<Smi> tmp882;
    compiler::TNode<Number> tmp883;
    compiler::TNode<Object> tmp884;
    ca_.Bind(&block2, &tmp875, &tmp876, &tmp877, &tmp878, &tmp879, &tmp880, &tmp881, &tmp882, &tmp883, &tmp884);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 109);
    ca_.Goto(&block49, tmp875, tmp876, tmp877, tmp878, tmp879, tmp880, tmp881, tmp882, tmp883, tmp884);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp885;
    compiler::TNode<RawPtrT> tmp886;
    compiler::TNode<RawPtrT> tmp887;
    compiler::TNode<IntPtrT> tmp888;
    compiler::TNode<JSReceiver> tmp889;
    compiler::TNode<Number> tmp890;
    compiler::TNode<Number> tmp891;
    compiler::TNode<Smi> tmp892;
    compiler::TNode<Number> tmp893;
    compiler::TNode<Object> tmp894;
    ca_.Bind(&block49, &tmp885, &tmp886, &tmp887, &tmp888, &tmp889, &tmp890, &tmp891, &tmp892, &tmp893, &tmp894);
  return compiler::TNode<Object>{tmp894};
}

compiler::TNode<Object> FillDeletedElementsArray_45(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_actualStart, compiler::TNode<Number> p_actualDeleteCount, compiler::TNode<JSReceiver> p_a) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Number, Number, Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Number, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_actualStart, p_actualDeleteCount, p_a);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 185);
    compiler::TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 188);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSReceiver> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Number> tmp9;
    compiler::TNode<JSReceiver> tmp10;
    compiler::TNode<Number> tmp11;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp11}, compiler::TNode<Number>{tmp9});
    ca_.Branch(tmp12, &block2, &block3, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<Number> tmp15;
    compiler::TNode<Number> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    compiler::TNode<Number> tmp18;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 190);
    compiler::TNode<Number> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp15}, compiler::TNode<Number>{tmp18});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 193);
    compiler::TNode<Oddball> tmp20;
    tmp20 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp13, tmp14, tmp19));
    USE(tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 196);
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = True_65(state_);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp20}, compiler::TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block5, &block6, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    compiler::TNode<Number> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<Oddball> tmp30;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 198);
    compiler::TNode<Object> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp23}, compiler::TNode<Object>{tmp24}, compiler::TNode<Object>{tmp29});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 201);
    compiler::TNode<Object> tmp32;
    tmp32 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp23, tmp27, tmp28, tmp31);
    USE(tmp32);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 196);
    ca_.Goto(&block6, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Number> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    compiler::TNode<Number> tmp38;
    compiler::TNode<Number> tmp39;
    compiler::TNode<Oddball> tmp40;
    ca_.Bind(&block6, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 205);
    compiler::TNode<Number> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp38}, compiler::TNode<Number>{tmp41});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 188);
    ca_.Goto(&block4, tmp33, tmp34, tmp35, tmp36, tmp37, tmp42);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Number> tmp45;
    compiler::TNode<Number> tmp46;
    compiler::TNode<JSReceiver> tmp47;
    compiler::TNode<Number> tmp48;
    ca_.Bind(&block3, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 208);
    compiler::TNode<String> tmp49;
    USE(tmp49);
    tmp49 = kLengthString_68(state_);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp43, tmp47, tmp49, tmp46);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 209);
    ca_.Goto(&block1, tmp43, tmp44, tmp45, tmp46, tmp47, tmp47);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<Number> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block1, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 181);
    ca_.Goto(&block7, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

    compiler::TNode<Context> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    compiler::TNode<Number> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
  return compiler::TNode<Object>{tmp62};
}

void HandleForwardCase_46(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Number> p_itemCount, compiler::TNode<Number> p_actualStart, compiler::TNode<Number> p_actualDeleteCount) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_len, p_itemCount, p_actualStart, p_actualDeleteCount);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    compiler::TNode<Number> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 219);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 222);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp4);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSReceiver> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Number> tmp9;
    compiler::TNode<Number> tmp10;
    compiler::TNode<Number> tmp11;
    compiler::TNode<Number> tmp12;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    compiler::TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp8}, compiler::TNode<Number>{tmp11});
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp12}, compiler::TNode<Number>{tmp13});
    ca_.Branch(tmp14, &block2, &block3, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSReceiver> tmp16;
    compiler::TNode<Number> tmp17;
    compiler::TNode<Number> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Number> tmp21;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 224);
    compiler::TNode<Number> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp21}, compiler::TNode<Number>{tmp20});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 226);
    compiler::TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp21}, compiler::TNode<Number>{tmp18});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 229);
    compiler::TNode<Oddball> tmp24;
    tmp24 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp15, tmp16, tmp22));
    USE(tmp24);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 232);
    compiler::TNode<Oddball> tmp25;
    USE(tmp25);
    tmp25 = True_65(state_);
    compiler::TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp24}, compiler::TNode<HeapObject>{tmp25});
    ca_.Branch(tmp26, &block5, &block6, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<JSReceiver> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<Number> tmp30;
    compiler::TNode<Number> tmp31;
    compiler::TNode<Number> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Oddball> tmp36;
    ca_.Bind(&block5, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 234);
    compiler::TNode<Object> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp27}, compiler::TNode<Object>{tmp28}, compiler::TNode<Object>{tmp34});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 237);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp27, tmp28, tmp35, tmp37);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 232);
    ca_.Goto(&block7, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Number> tmp42;
    compiler::TNode<Number> tmp43;
    compiler::TNode<Number> tmp44;
    compiler::TNode<Number> tmp45;
    compiler::TNode<Number> tmp46;
    compiler::TNode<Number> tmp47;
    compiler::TNode<Oddball> tmp48;
    ca_.Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 242);
    compiler::TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_166(state_, LanguageMode::kStrict);
    compiler::TNode<Oddball> tmp50;
    tmp50 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp39, tmp40, tmp47, tmp49));
    USE(tmp50);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 232);
    ca_.Goto(&block7, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<Number> tmp54;
    compiler::TNode<Number> tmp55;
    compiler::TNode<Number> tmp56;
    compiler::TNode<Number> tmp57;
    compiler::TNode<Number> tmp58;
    compiler::TNode<Number> tmp59;
    compiler::TNode<Oddball> tmp60;
    ca_.Bind(&block7, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 245);
    compiler::TNode<Number> tmp61;
    USE(tmp61);
    tmp61 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp57}, compiler::TNode<Number>{tmp61});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 222);
    ca_.Goto(&block4, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp62);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    compiler::TNode<Number> tmp65;
    compiler::TNode<Number> tmp66;
    compiler::TNode<Number> tmp67;
    compiler::TNode<Number> tmp68;
    compiler::TNode<Number> tmp69;
    ca_.Bind(&block3, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 249);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 252);
    ca_.Goto(&block10, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp65);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    compiler::TNode<Number> tmp72;
    compiler::TNode<Number> tmp73;
    compiler::TNode<Number> tmp74;
    compiler::TNode<Number> tmp75;
    compiler::TNode<Number> tmp76;
    ca_.Bind(&block10, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    compiler::TNode<Number> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp72}, compiler::TNode<Number>{tmp75});
    compiler::TNode<Number> tmp78;
    USE(tmp78);
    tmp78 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp77}, compiler::TNode<Number>{tmp73});
    compiler::TNode<BoolT> tmp79;
    USE(tmp79);
    tmp79 = NumberIsGreaterThan_77(state_, compiler::TNode<Number>{tmp76}, compiler::TNode<Number>{tmp78});
    ca_.Branch(tmp79, &block8, &block9, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp80;
    compiler::TNode<JSReceiver> tmp81;
    compiler::TNode<Number> tmp82;
    compiler::TNode<Number> tmp83;
    compiler::TNode<Number> tmp84;
    compiler::TNode<Number> tmp85;
    compiler::TNode<Number> tmp86;
    ca_.Bind(&block8, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 254);
    compiler::TNode<Number> tmp87;
    USE(tmp87);
    tmp87 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp88;
    USE(tmp88);
    tmp88 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp86}, compiler::TNode<Number>{tmp87});
    compiler::TNode<Smi> tmp89;
    USE(tmp89);
    tmp89 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_166(state_, LanguageMode::kStrict);
    compiler::TNode<Oddball> tmp90;
    tmp90 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp80, tmp81, tmp88, tmp89));
    USE(tmp90);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 256);
    compiler::TNode<Number> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp92;
    USE(tmp92);
    tmp92 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp86}, compiler::TNode<Number>{tmp91});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 252);
    ca_.Goto(&block10, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp92);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<JSReceiver> tmp94;
    compiler::TNode<Number> tmp95;
    compiler::TNode<Number> tmp96;
    compiler::TNode<Number> tmp97;
    compiler::TNode<Number> tmp98;
    compiler::TNode<Number> tmp99;
    ca_.Bind(&block9, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 216);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 214);
    ca_.Goto(&block1, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp100;
    compiler::TNode<JSReceiver> tmp101;
    compiler::TNode<Number> tmp102;
    compiler::TNode<Number> tmp103;
    compiler::TNode<Number> tmp104;
    compiler::TNode<Number> tmp105;
    ca_.Bind(&block1, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.Goto(&block11, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105);
  }

    compiler::TNode<Context> tmp106;
    compiler::TNode<JSReceiver> tmp107;
    compiler::TNode<Number> tmp108;
    compiler::TNode<Number> tmp109;
    compiler::TNode<Number> tmp110;
    compiler::TNode<Number> tmp111;
    ca_.Bind(&block11, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
}

void HandleBackwardCase_47(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Number> p_itemCount, compiler::TNode<Number> p_actualStart, compiler::TNode<Number> p_actualDeleteCount) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_len, p_itemCount, p_actualStart, p_actualDeleteCount);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    compiler::TNode<Number> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 267);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp2}, compiler::TNode<Number>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 270);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<Number> tmp9;
    compiler::TNode<Number> tmp10;
    compiler::TNode<Number> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = NumberIsGreaterThan_77(state_, compiler::TNode<Number>{tmp13}, compiler::TNode<Number>{tmp11});
    ca_.Branch(tmp14, &block2, &block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSReceiver> tmp16;
    compiler::TNode<Number> tmp17;
    compiler::TNode<Number> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Number> tmp21;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 272);
    compiler::TNode<Number> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp21}, compiler::TNode<Number>{tmp20});
    compiler::TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp22}, compiler::TNode<Number>{tmp23});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 275);
    compiler::TNode<Number> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp21}, compiler::TNode<Number>{tmp18});
    compiler::TNode<Number> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp25}, compiler::TNode<Number>{tmp26});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 278);
    compiler::TNode<Oddball> tmp28;
    tmp28 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp15, tmp16, tmp24));
    USE(tmp28);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 281);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = True_65(state_);
    compiler::TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp28}, compiler::TNode<HeapObject>{tmp29});
    ca_.Branch(tmp30, &block5, &block6, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp24, tmp27, tmp28);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Number> tmp36;
    compiler::TNode<Number> tmp37;
    compiler::TNode<Number> tmp38;
    compiler::TNode<Number> tmp39;
    compiler::TNode<Oddball> tmp40;
    ca_.Bind(&block5, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 283);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp31}, compiler::TNode<Object>{tmp32}, compiler::TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 286);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp31, tmp32, tmp39, tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 281);
    ca_.Goto(&block7, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Number> tmp45;
    compiler::TNode<Number> tmp46;
    compiler::TNode<Number> tmp47;
    compiler::TNode<Number> tmp48;
    compiler::TNode<Number> tmp49;
    compiler::TNode<Number> tmp50;
    compiler::TNode<Number> tmp51;
    compiler::TNode<Oddball> tmp52;
    ca_.Bind(&block6, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 291);
    compiler::TNode<Smi> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_166(state_, LanguageMode::kStrict);
    compiler::TNode<Oddball> tmp54;
    tmp54 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp43, tmp44, tmp51, tmp53));
    USE(tmp54);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 281);
    ca_.Goto(&block7, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<Number> tmp57;
    compiler::TNode<Number> tmp58;
    compiler::TNode<Number> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<Number> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Number> tmp63;
    compiler::TNode<Oddball> tmp64;
    ca_.Bind(&block7, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 295);
    compiler::TNode<Number> tmp65;
    USE(tmp65);
    tmp65 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp66;
    USE(tmp66);
    tmp66 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp61}, compiler::TNode<Number>{tmp65});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 270);
    ca_.Goto(&block4, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp66);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp67;
    compiler::TNode<JSReceiver> tmp68;
    compiler::TNode<Number> tmp69;
    compiler::TNode<Number> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<Number> tmp72;
    compiler::TNode<Number> tmp73;
    ca_.Bind(&block3, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 264);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 262);
    ca_.Goto(&block1, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<Number> tmp76;
    compiler::TNode<Number> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<Number> tmp79;
    ca_.Bind(&block1, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.Goto(&block8, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79);
  }

    compiler::TNode<Context> tmp80;
    compiler::TNode<JSReceiver> tmp81;
    compiler::TNode<Number> tmp82;
    compiler::TNode<Number> tmp83;
    compiler::TNode<Number> tmp84;
    compiler::TNode<Number> tmp85;
    ca_.Bind(&block8, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
}

compiler::TNode<Object> SlowSplice_48(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructArguments p_arguments, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Number> p_actualStart, compiler::TNode<Smi> p_insertCount, compiler::TNode<Number> p_actualDeleteCount) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_arguments.frame, p_arguments.base, p_arguments.length, p_o, p_len, p_actualStart, p_insertCount, p_actualDeleteCount);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<Number> tmp5;
    compiler::TNode<Number> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Number> tmp8;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 303);
    compiler::TNode<JSReceiver> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).ArraySpeciesCreate(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}, compiler::TNode<Number>{tmp8});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 304);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 307);
    compiler::TNode<Object> tmp10;
    USE(tmp10);
    tmp10 = FillDeletedElementsArray_45(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<JSReceiver>{tmp4}, compiler::TNode<Number>{tmp6}, compiler::TNode<Number>{tmp8}, compiler::TNode<JSReceiver>{tmp9});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 317);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp7}, compiler::TNode<Number>{tmp8});
    ca_.Branch(tmp11, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    compiler::TNode<JSReceiver> tmp16;
    compiler::TNode<Number> tmp17;
    compiler::TNode<Number> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<Number> tmp22;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 319);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 318);
    HandleForwardCase_46(state_, compiler::TNode<Context>{tmp12}, compiler::TNode<JSReceiver>{tmp16}, compiler::TNode<Number>{tmp17}, compiler::TNode<Number>{tmp22}, compiler::TNode<Number>{tmp18}, compiler::TNode<Number>{tmp20});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 317);
    ca_.Goto(&block4, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    compiler::TNode<Number> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<Smi> tmp30;
    compiler::TNode<Number> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block3, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 321);
    compiler::TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = NumberIsGreaterThan_77(state_, compiler::TNode<Number>{tmp33}, compiler::TNode<Number>{tmp31});
    ca_.Branch(tmp34, &block5, &block6, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<RawPtrT> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<Number> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Number> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Number> tmp45;
    ca_.Bind(&block5, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 323);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 322);
    HandleBackwardCase_47(state_, compiler::TNode<Context>{tmp35}, compiler::TNode<JSReceiver>{tmp39}, compiler::TNode<Number>{tmp40}, compiler::TNode<Number>{tmp45}, compiler::TNode<Number>{tmp41}, compiler::TNode<Number>{tmp43});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 321);
    ca_.Goto(&block6, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp46;
    compiler::TNode<RawPtrT> tmp47;
    compiler::TNode<RawPtrT> tmp48;
    compiler::TNode<IntPtrT> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<Number> tmp51;
    compiler::TNode<Number> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Number> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<Number> tmp56;
    ca_.Bind(&block6, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 317);
    ca_.Goto(&block4, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<RawPtrT> tmp58;
    compiler::TNode<RawPtrT> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Number> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Number> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<Number> tmp67;
    ca_.Bind(&block4, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 327);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 332);
    compiler::TNode<IntPtrT> tmp68;
    USE(tmp68);
    tmp68 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 2);
    compiler::TNode<BoolT> tmp69;
    USE(tmp69);
    tmp69 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp60}, compiler::TNode<IntPtrT>{tmp68});
    ca_.Branch(tmp69, &block7, &block8, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp70;
    compiler::TNode<RawPtrT> tmp71;
    compiler::TNode<RawPtrT> tmp72;
    compiler::TNode<IntPtrT> tmp73;
    compiler::TNode<JSReceiver> tmp74;
    compiler::TNode<Number> tmp75;
    compiler::TNode<Number> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    compiler::TNode<Number> tmp80;
    compiler::TNode<Number> tmp81;
    ca_.Bind(&block7, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 333);
    compiler::TNode<IntPtrT> tmp82;
    USE(tmp82);
    tmp82 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 2);
    ca_.Goto(&block11, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp83;
    compiler::TNode<RawPtrT> tmp84;
    compiler::TNode<RawPtrT> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<JSReceiver> tmp87;
    compiler::TNode<Number> tmp88;
    compiler::TNode<Number> tmp89;
    compiler::TNode<Smi> tmp90;
    compiler::TNode<Number> tmp91;
    compiler::TNode<JSReceiver> tmp92;
    compiler::TNode<Number> tmp93;
    compiler::TNode<Number> tmp94;
    compiler::TNode<IntPtrT> tmp95;
    ca_.Bind(&block11, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    compiler::TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp95}, compiler::TNode<IntPtrT>{tmp86});
    ca_.Branch(tmp96, &block9, &block10, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<RawPtrT> tmp98;
    compiler::TNode<RawPtrT> tmp99;
    compiler::TNode<IntPtrT> tmp100;
    compiler::TNode<JSReceiver> tmp101;
    compiler::TNode<Number> tmp102;
    compiler::TNode<Number> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Number> tmp105;
    compiler::TNode<JSReceiver> tmp106;
    compiler::TNode<Number> tmp107;
    compiler::TNode<Number> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    ca_.Bind(&block9, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 334);
    compiler::TNode<Object> tmp110;
    USE(tmp110);
    tmp110 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp98}, compiler::TNode<RawPtrT>{tmp99}, compiler::TNode<IntPtrT>{tmp100}}, compiler::TNode<IntPtrT>{tmp109});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 336);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp97, tmp101, tmp108, tmp110);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 339);
    compiler::TNode<Number> tmp112;
    USE(tmp112);
    tmp112 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp113;
    USE(tmp113);
    tmp113 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp108}, compiler::TNode<Number>{tmp112});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 333);
    ca_.Goto(&block12, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp113, tmp109);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp114;
    compiler::TNode<RawPtrT> tmp115;
    compiler::TNode<RawPtrT> tmp116;
    compiler::TNode<IntPtrT> tmp117;
    compiler::TNode<JSReceiver> tmp118;
    compiler::TNode<Number> tmp119;
    compiler::TNode<Number> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<Number> tmp122;
    compiler::TNode<JSReceiver> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Number> tmp125;
    compiler::TNode<IntPtrT> tmp126;
    ca_.Bind(&block12, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    compiler::TNode<IntPtrT> tmp127;
    USE(tmp127);
    tmp127 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp128;
    USE(tmp128);
    tmp128 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp126}, compiler::TNode<IntPtrT>{tmp127});
    ca_.Goto(&block11, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp128);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp129;
    compiler::TNode<RawPtrT> tmp130;
    compiler::TNode<RawPtrT> tmp131;
    compiler::TNode<IntPtrT> tmp132;
    compiler::TNode<JSReceiver> tmp133;
    compiler::TNode<Number> tmp134;
    compiler::TNode<Number> tmp135;
    compiler::TNode<Smi> tmp136;
    compiler::TNode<Number> tmp137;
    compiler::TNode<JSReceiver> tmp138;
    compiler::TNode<Number> tmp139;
    compiler::TNode<Number> tmp140;
    compiler::TNode<IntPtrT> tmp141;
    ca_.Bind(&block10, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 332);
    ca_.Goto(&block8, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp142;
    compiler::TNode<RawPtrT> tmp143;
    compiler::TNode<RawPtrT> tmp144;
    compiler::TNode<IntPtrT> tmp145;
    compiler::TNode<JSReceiver> tmp146;
    compiler::TNode<Number> tmp147;
    compiler::TNode<Number> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<Number> tmp150;
    compiler::TNode<JSReceiver> tmp151;
    compiler::TNode<Number> tmp152;
    compiler::TNode<Number> tmp153;
    ca_.Bind(&block8, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 345);
    compiler::TNode<String> tmp154;
    USE(tmp154);
    tmp154 = kLengthString_68(state_);
    compiler::TNode<Number> tmp155;
    USE(tmp155);
    tmp155 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp147}, compiler::TNode<Number>{tmp150});
    compiler::TNode<Number> tmp156;
    USE(tmp156);
    tmp156 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp155}, compiler::TNode<Number>{tmp152});
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp142, tmp146, tmp154, tmp156);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 347);
    ca_.Goto(&block1, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp158;
    compiler::TNode<RawPtrT> tmp159;
    compiler::TNode<RawPtrT> tmp160;
    compiler::TNode<IntPtrT> tmp161;
    compiler::TNode<JSReceiver> tmp162;
    compiler::TNode<Number> tmp163;
    compiler::TNode<Number> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<Number> tmp166;
    compiler::TNode<Object> tmp167;
    ca_.Bind(&block1, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 299);
    ca_.Goto(&block13, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167);
  }

    compiler::TNode<Context> tmp168;
    compiler::TNode<RawPtrT> tmp169;
    compiler::TNode<RawPtrT> tmp170;
    compiler::TNode<IntPtrT> tmp171;
    compiler::TNode<JSReceiver> tmp172;
    compiler::TNode<Number> tmp173;
    compiler::TNode<Number> tmp174;
    compiler::TNode<Smi> tmp175;
    compiler::TNode<Number> tmp176;
    compiler::TNode<Object> tmp177;
    ca_.Bind(&block13, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
  return compiler::TNode<Object>{tmp177};
}

TF_BUILTIN(ArrayPrototypeSplice, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number, Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number, Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 355);
    compiler::TNode<JSReceiver> tmp5;
    tmp5 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kToObject, tmp3, tmp4));
    USE(tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 358);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = GetLengthProperty_244(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 361);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 362);
    compiler::TNode<Number> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp8});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 367);
    compiler::TNode<Number> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp9}, compiler::TNode<Number>{tmp10});
    ca_.Branch(tmp11, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp8, tmp9);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    compiler::TNode<Number> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Number> tmp20;
    ca_.Bind(&block1, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 368);
    compiler::TNode<Number> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp18}, compiler::TNode<Number>{tmp20});
    compiler::TNode<Number> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = Max_81(state_, compiler::TNode<Number>{tmp21}, compiler::TNode<Number>{tmp22});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 367);
    ca_.Goto(&block4, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp23);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<Number> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Number> tmp32;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 369);
    compiler::TNode<Number> tmp33;
    USE(tmp33);
    tmp33 = Min_80(state_, compiler::TNode<Number>{tmp32}, compiler::TNode<Number>{tmp30});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 367);
    ca_.Goto(&block3, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<Number> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Number> tmp42;
    compiler::TNode<Number> tmp43;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block3, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<JSReceiver> tmp49;
    compiler::TNode<Number> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<Number> tmp52;
    compiler::TNode<Number> tmp53;
    ca_.Bind(&block3, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 371);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 372);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 374);
    compiler::TNode<IntPtrT> tmp54;
    USE(tmp54);
    tmp54 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp46}, compiler::TNode<IntPtrT>{tmp54});
    ca_.Branch(tmp55, &block5, &block6, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, ca_.Uninitialized<Smi>(), ca_.Uninitialized<Number>());
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Number> tmp64;
    compiler::TNode<Number> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Number> tmp67;
    ca_.Bind(&block5, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 376);
    compiler::TNode<Smi> tmp68;
    USE(tmp68);
    tmp68 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 378);
    compiler::TNode<Number> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 374);
    ca_.Goto(&block7, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp68, tmp69);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp70;
    compiler::TNode<RawPtrT> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    compiler::TNode<Context> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<Number> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<Number> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Number> tmp81;
    ca_.Bind(&block6, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 380);
    compiler::TNode<IntPtrT> tmp82;
    USE(tmp82);
    tmp82 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<BoolT> tmp83;
    USE(tmp83);
    tmp83 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp72}, compiler::TNode<IntPtrT>{tmp82});
    ca_.Branch(tmp83, &block8, &block9, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp84;
    compiler::TNode<RawPtrT> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<Context> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<JSReceiver> tmp89;
    compiler::TNode<Number> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Number> tmp92;
    compiler::TNode<Number> tmp93;
    compiler::TNode<Smi> tmp94;
    compiler::TNode<Number> tmp95;
    ca_.Bind(&block8, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 382);
    compiler::TNode<Smi> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 384);
    compiler::TNode<Number> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp90}, compiler::TNode<Number>{tmp93});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 380);
    ca_.Goto(&block10, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp96, tmp97);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp98;
    compiler::TNode<RawPtrT> tmp99;
    compiler::TNode<IntPtrT> tmp100;
    compiler::TNode<Context> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<Number> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Number> tmp106;
    compiler::TNode<Number> tmp107;
    compiler::TNode<Smi> tmp108;
    compiler::TNode<Number> tmp109;
    ca_.Bind(&block9, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 388);
    compiler::TNode<Smi> tmp110;
    USE(tmp110);
    tmp110 = Convert5ATSmi8ATintptr_184(state_, compiler::TNode<IntPtrT>{tmp100});
    compiler::TNode<Smi> tmp111;
    USE(tmp111);
    tmp111 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    compiler::TNode<Smi> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp110}, compiler::TNode<Smi>{tmp111});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 390);
    compiler::TNode<IntPtrT> tmp113;
    USE(tmp113);
    tmp113 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<Object> tmp114;
    USE(tmp114);
    tmp114 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp98}, compiler::TNode<RawPtrT>{tmp99}, compiler::TNode<IntPtrT>{tmp100}}, compiler::TNode<IntPtrT>{tmp113});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 391);
    compiler::TNode<Number> tmp115;
    USE(tmp115);
    tmp115 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp101}, compiler::TNode<Object>{tmp114});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 393);
    compiler::TNode<Number> tmp116;
    USE(tmp116);
    tmp116 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<Number> tmp117;
    USE(tmp117);
    tmp117 = Max_81(state_, compiler::TNode<Number>{tmp115}, compiler::TNode<Number>{tmp116});
    compiler::TNode<Number> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp104}, compiler::TNode<Number>{tmp107});
    compiler::TNode<Number> tmp119;
    USE(tmp119);
    tmp119 = Min_80(state_, compiler::TNode<Number>{tmp117}, compiler::TNode<Number>{tmp118});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 386);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 380);
    ca_.Goto(&block10, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp112, tmp119);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp120;
    compiler::TNode<RawPtrT> tmp121;
    compiler::TNode<IntPtrT> tmp122;
    compiler::TNode<Context> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<JSReceiver> tmp125;
    compiler::TNode<Number> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<Number> tmp128;
    compiler::TNode<Number> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<Number> tmp131;
    ca_.Bind(&block10, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 374);
    ca_.Goto(&block7, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp132;
    compiler::TNode<RawPtrT> tmp133;
    compiler::TNode<IntPtrT> tmp134;
    compiler::TNode<Context> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<JSReceiver> tmp137;
    compiler::TNode<Number> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Number> tmp140;
    compiler::TNode<Number> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Number> tmp143;
    ca_.Bind(&block7, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 398);
    compiler::TNode<Number> tmp144;
    USE(tmp144);
    tmp144 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp138}, compiler::TNode<Number>{tmp142});
    compiler::TNode<Number> tmp145;
    USE(tmp145);
    tmp145 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp144}, compiler::TNode<Number>{tmp143});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 399);
    compiler::TNode<Number> tmp146;
    USE(tmp146);
    tmp146 = FromConstexpr20UT5ATSmi10HeapNumber19ATconstexpr_float64_157(state_, kMaxSafeInteger);
    compiler::TNode<BoolT> tmp147;
    USE(tmp147);
    tmp147 = NumberIsGreaterThan_77(state_, compiler::TNode<Number>{tmp145}, compiler::TNode<Number>{tmp146});
    ca_.Branch(tmp147, &block11, &block12, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp148;
    compiler::TNode<RawPtrT> tmp149;
    compiler::TNode<IntPtrT> tmp150;
    compiler::TNode<Context> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<JSReceiver> tmp153;
    compiler::TNode<Number> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<Number> tmp156;
    compiler::TNode<Number> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Number> tmp159;
    compiler::TNode<Number> tmp160;
    ca_.Bind(&block11, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 400);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp151}, MessageTemplate::kInvalidArrayLength, compiler::TNode<Object>{tmp155});
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp161;
    compiler::TNode<RawPtrT> tmp162;
    compiler::TNode<IntPtrT> tmp163;
    compiler::TNode<Context> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<JSReceiver> tmp166;
    compiler::TNode<Number> tmp167;
    compiler::TNode<Object> tmp168;
    compiler::TNode<Number> tmp169;
    compiler::TNode<Number> tmp170;
    compiler::TNode<Smi> tmp171;
    compiler::TNode<Number> tmp172;
    compiler::TNode<Number> tmp173;
    ca_.Bind(&block12, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 405);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 406);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 404);
    compiler::TNode<Object> tmp174;
    USE(tmp174);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp174 = FastArraySplice_44(state_, compiler::TNode<Context>{tmp164}, TorqueStructArguments{compiler::TNode<RawPtrT>{tmp161}, compiler::TNode<RawPtrT>{tmp162}, compiler::TNode<IntPtrT>{tmp163}}, compiler::TNode<JSReceiver>{tmp166}, compiler::TNode<Number>{tmp167}, compiler::TNode<Number>{tmp170}, compiler::TNode<Smi>{tmp171}, compiler::TNode<Number>{tmp172}, &label0);
    ca_.Goto(&block15, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp164, tmp161, tmp162, tmp163, tmp166, tmp167, tmp170, tmp171, tmp172, tmp174);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp164, tmp161, tmp162, tmp163, tmp166, tmp167, tmp170, tmp171, tmp172);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<RawPtrT> tmp175;
    compiler::TNode<RawPtrT> tmp176;
    compiler::TNode<IntPtrT> tmp177;
    compiler::TNode<Context> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<JSReceiver> tmp180;
    compiler::TNode<Number> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<Number> tmp183;
    compiler::TNode<Number> tmp184;
    compiler::TNode<Smi> tmp185;
    compiler::TNode<Number> tmp186;
    compiler::TNode<Number> tmp187;
    compiler::TNode<Context> tmp188;
    compiler::TNode<RawPtrT> tmp189;
    compiler::TNode<RawPtrT> tmp190;
    compiler::TNode<IntPtrT> tmp191;
    compiler::TNode<JSReceiver> tmp192;
    compiler::TNode<Number> tmp193;
    compiler::TNode<Number> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Number> tmp196;
    ca_.Bind(&block16, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196);
    ca_.Goto(&block14, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187);
  }

  if (block15.is_used()) {
    compiler::TNode<RawPtrT> tmp197;
    compiler::TNode<RawPtrT> tmp198;
    compiler::TNode<IntPtrT> tmp199;
    compiler::TNode<Context> tmp200;
    compiler::TNode<Object> tmp201;
    compiler::TNode<JSReceiver> tmp202;
    compiler::TNode<Number> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<Number> tmp205;
    compiler::TNode<Number> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<Number> tmp208;
    compiler::TNode<Number> tmp209;
    compiler::TNode<Context> tmp210;
    compiler::TNode<RawPtrT> tmp211;
    compiler::TNode<RawPtrT> tmp212;
    compiler::TNode<IntPtrT> tmp213;
    compiler::TNode<JSReceiver> tmp214;
    compiler::TNode<Number> tmp215;
    compiler::TNode<Number> tmp216;
    compiler::TNode<Smi> tmp217;
    compiler::TNode<Number> tmp218;
    compiler::TNode<Object> tmp219;
    ca_.Bind(&block15, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219);
    arguments.PopAndReturn(tmp219);
  }

  if (block14.is_used()) {
    compiler::TNode<RawPtrT> tmp220;
    compiler::TNode<RawPtrT> tmp221;
    compiler::TNode<IntPtrT> tmp222;
    compiler::TNode<Context> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<JSReceiver> tmp225;
    compiler::TNode<Number> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<Number> tmp228;
    compiler::TNode<Number> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Number> tmp231;
    compiler::TNode<Number> tmp232;
    ca_.Bind(&block14, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 403);
    ca_.Goto(&block13, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232);
  }

  if (block13.is_used()) {
    compiler::TNode<RawPtrT> tmp233;
    compiler::TNode<RawPtrT> tmp234;
    compiler::TNode<IntPtrT> tmp235;
    compiler::TNode<Context> tmp236;
    compiler::TNode<Object> tmp237;
    compiler::TNode<JSReceiver> tmp238;
    compiler::TNode<Number> tmp239;
    compiler::TNode<Object> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<Number> tmp242;
    compiler::TNode<Smi> tmp243;
    compiler::TNode<Number> tmp244;
    compiler::TNode<Number> tmp245;
    ca_.Bind(&block13, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 413);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 414);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 412);
    compiler::TNode<Object> tmp246;
    USE(tmp246);
    tmp246 = SlowSplice_48(state_, compiler::TNode<Context>{tmp236}, TorqueStructArguments{compiler::TNode<RawPtrT>{tmp233}, compiler::TNode<RawPtrT>{tmp234}, compiler::TNode<IntPtrT>{tmp235}}, compiler::TNode<JSReceiver>{tmp238}, compiler::TNode<Number>{tmp239}, compiler::TNode<Number>{tmp242}, compiler::TNode<Smi>{tmp243}, compiler::TNode<Number>{tmp244});
    arguments.PopAndReturn(tmp246);
  }
}

void FastSplice10FixedArray90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1432(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructArguments p_args, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_length, compiler::TNode<Smi> p_newLength, compiler::TNode<Smi> p_actualStart, compiler::TNode<Smi> p_insertCount, compiler::TNode<Smi> p_actualDeleteCount) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi, Smi, FixedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi, Smi, FixedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedArray, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedArray, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedArray, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedArray, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args.frame, p_args.base, p_args.length, p_a, p_length, p_newLength, p_actualStart, p_insertCount, p_actualDeleteCount);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<JSArray> tmp4;
    compiler::TNode<Smi> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 59);
    EnsureWriteableFastElements_50(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<JSArray>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 61);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiNotEqual(compiler::TNode<Smi>{tmp8}, compiler::TNode<Smi>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<JSArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 62);
    compiler::TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp21);
    compiler::TNode<FixedArrayBase>tmp22 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp15, tmp21});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 63);
    compiler::TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp18}, compiler::TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 64);
    compiler::TNode<Smi> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp18}, compiler::TNode<Smi>{tmp20});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 65);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp16}, compiler::TNode<Smi>{tmp20});
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp25}, compiler::TNode<Smi>{tmp18});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 66);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp19}, compiler::TNode<Smi>{tmp20});
    ca_.Branch(tmp27, &block4, &block5, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp22, tmp23, tmp24, tmp26);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<JSArray> tmp32;
    compiler::TNode<Smi> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<FixedArrayBase> tmp38;
    compiler::TNode<Smi> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<Smi> tmp41;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 69);
    compiler::TNode<FixedArray> tmp42;
    USE(tmp42);
    tmp42 = UnsafeCast10FixedArray_1403(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 68);
    DoMoveElements10FixedArray_1483(state_, compiler::TNode<FixedArray>{tmp42}, compiler::TNode<Smi>{tmp39}, compiler::TNode<Smi>{tmp40}, compiler::TNode<Smi>{tmp41});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 71);
    compiler::TNode<FixedArray> tmp43;
    USE(tmp43);
    tmp43 = UnsafeCast10FixedArray_1403(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 70);
    StoreHoles10FixedArray_1484(state_, compiler::TNode<FixedArray>{tmp43}, compiler::TNode<Smi>{tmp34}, compiler::TNode<Smi>{tmp33});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 66);
    ca_.Goto(&block6, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<JSArray> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Smi> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<FixedArrayBase> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<Smi> tmp57;
    ca_.Bind(&block5, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 72);
    compiler::TNode<BoolT> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp52}, compiler::TNode<Smi>{tmp53});
    ca_.Branch(tmp58, &block7, &block8, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<RawPtrT> tmp60;
    compiler::TNode<RawPtrT> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<JSArray> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Smi> tmp67;
    compiler::TNode<Smi> tmp68;
    compiler::TNode<FixedArrayBase> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<Smi> tmp72;
    ca_.Bind(&block7, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 74);
    compiler::TNode<IntPtrT> tmp73 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp73);
    compiler::TNode<Smi>tmp74 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp69, tmp73});
    compiler::TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiLessThanOrEqual(compiler::TNode<Smi>{tmp65}, compiler::TNode<Smi>{tmp74});
    ca_.Branch(tmp75, &block9, &block10, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<RawPtrT> tmp77;
    compiler::TNode<RawPtrT> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    compiler::TNode<JSArray> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<Smi> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<Smi> tmp85;
    compiler::TNode<FixedArrayBase> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    ca_.Bind(&block9, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 76);
    compiler::TNode<FixedArray> tmp90;
    USE(tmp90);
    tmp90 = UnsafeCast10FixedArray_1403(state_, compiler::TNode<Context>{tmp76}, compiler::TNode<Object>{tmp86});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 75);
    DoMoveElements10FixedArray_1483(state_, compiler::TNode<FixedArray>{tmp90}, compiler::TNode<Smi>{tmp87}, compiler::TNode<Smi>{tmp88}, compiler::TNode<Smi>{tmp89});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 74);
    ca_.Goto(&block11, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp91;
    compiler::TNode<RawPtrT> tmp92;
    compiler::TNode<RawPtrT> tmp93;
    compiler::TNode<IntPtrT> tmp94;
    compiler::TNode<JSArray> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<Smi> tmp97;
    compiler::TNode<Smi> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<FixedArrayBase> tmp101;
    compiler::TNode<Smi> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<Smi> tmp104;
    ca_.Bind(&block10, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 79);
    compiler::TNode<Smi> tmp105;
    USE(tmp105);
    tmp105 = CodeStubAssembler(state_).CalculateNewElementsCapacity(compiler::TNode<Smi>{tmp97});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 81);
    compiler::TNode<Smi> tmp106;
    USE(tmp106);
    tmp106 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<FixedArray> tmp107;
    USE(tmp107);
    tmp107 = Extract10FixedArray_42(state_, compiler::TNode<Context>{tmp91}, compiler::TNode<FixedArrayBase>{tmp101}, compiler::TNode<Smi>{tmp106}, compiler::TNode<Smi>{tmp98}, compiler::TNode<Smi>{tmp105});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 80);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 82);
    compiler::TNode<IntPtrT> tmp108 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp108);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp95, tmp108}, tmp107);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 83);
    compiler::TNode<IntPtrT> tmp109 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp109);
    compiler::TNode<Smi>tmp110 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp101, tmp109});
    compiler::TNode<Smi> tmp111;
    USE(tmp111);
    tmp111 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp110}, compiler::TNode<Smi>{tmp111});
    ca_.Branch(tmp112, &block12, &block13, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp107);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<RawPtrT> tmp114;
    compiler::TNode<RawPtrT> tmp115;
    compiler::TNode<IntPtrT> tmp116;
    compiler::TNode<JSArray> tmp117;
    compiler::TNode<Smi> tmp118;
    compiler::TNode<Smi> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<Smi> tmp122;
    compiler::TNode<FixedArrayBase> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<Smi> tmp125;
    compiler::TNode<Smi> tmp126;
    compiler::TNode<Smi> tmp127;
    compiler::TNode<FixedArray> tmp128;
    ca_.Bind(&block12, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 85);
    compiler::TNode<FixedArray> tmp129;
    USE(tmp129);
    tmp129 = UnsafeCast10FixedArray_1403(state_, compiler::TNode<Context>{tmp113}, compiler::TNode<Object>{tmp123});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 86);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 84);
    DoCopyElements10FixedArray_1485(state_, compiler::TNode<FixedArray>{tmp128}, compiler::TNode<Smi>{tmp124}, compiler::TNode<FixedArray>{tmp129}, compiler::TNode<Smi>{tmp125}, compiler::TNode<Smi>{tmp126});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 83);
    ca_.Goto(&block13, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp130;
    compiler::TNode<RawPtrT> tmp131;
    compiler::TNode<RawPtrT> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<JSArray> tmp134;
    compiler::TNode<Smi> tmp135;
    compiler::TNode<Smi> tmp136;
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Smi> tmp139;
    compiler::TNode<FixedArrayBase> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Smi> tmp143;
    compiler::TNode<Smi> tmp144;
    compiler::TNode<FixedArray> tmp145;
    ca_.Bind(&block13, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 77);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 74);
    ca_.Goto(&block11, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp146;
    compiler::TNode<RawPtrT> tmp147;
    compiler::TNode<RawPtrT> tmp148;
    compiler::TNode<IntPtrT> tmp149;
    compiler::TNode<JSArray> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<Smi> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<FixedArrayBase> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Smi> tmp159;
    ca_.Bind(&block11, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 72);
    ca_.Goto(&block8, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp160;
    compiler::TNode<RawPtrT> tmp161;
    compiler::TNode<RawPtrT> tmp162;
    compiler::TNode<IntPtrT> tmp163;
    compiler::TNode<JSArray> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<Smi> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<FixedArrayBase> tmp170;
    compiler::TNode<Smi> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Smi> tmp173;
    ca_.Bind(&block8, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 66);
    ca_.Goto(&block6, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp174;
    compiler::TNode<RawPtrT> tmp175;
    compiler::TNode<RawPtrT> tmp176;
    compiler::TNode<IntPtrT> tmp177;
    compiler::TNode<JSArray> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<Smi> tmp182;
    compiler::TNode<Smi> tmp183;
    compiler::TNode<FixedArrayBase> tmp184;
    compiler::TNode<Smi> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<Smi> tmp187;
    ca_.Bind(&block6, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 61);
    ca_.Goto(&block3, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp188;
    compiler::TNode<RawPtrT> tmp189;
    compiler::TNode<RawPtrT> tmp190;
    compiler::TNode<IntPtrT> tmp191;
    compiler::TNode<JSArray> tmp192;
    compiler::TNode<Smi> tmp193;
    compiler::TNode<Smi> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Smi> tmp197;
    ca_.Bind(&block3, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 93);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 94);
    compiler::TNode<Smi> tmp198;
    USE(tmp198);
    tmp198 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp199;
    USE(tmp199);
    tmp199 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp196}, compiler::TNode<Smi>{tmp198});
    ca_.Branch(tmp199, &block14, &block15, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp195);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp200;
    compiler::TNode<RawPtrT> tmp201;
    compiler::TNode<RawPtrT> tmp202;
    compiler::TNode<IntPtrT> tmp203;
    compiler::TNode<JSArray> tmp204;
    compiler::TNode<Smi> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<Smi> tmp209;
    compiler::TNode<Smi> tmp210;
    ca_.Bind(&block14, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 96);
    compiler::TNode<IntPtrT> tmp211 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp211);
    compiler::TNode<FixedArrayBase>tmp212 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp204, tmp211});
    compiler::TNode<FixedArray> tmp213;
    USE(tmp213);
    tmp213 = UnsafeCast10FixedArray_1403(state_, compiler::TNode<Context>{tmp200}, compiler::TNode<Object>{tmp212});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 95);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 97);
    compiler::TNode<IntPtrT> tmp214;
    USE(tmp214);
    tmp214 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 2);
    ca_.Goto(&block18, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp213, tmp214);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp215;
    compiler::TNode<RawPtrT> tmp216;
    compiler::TNode<RawPtrT> tmp217;
    compiler::TNode<IntPtrT> tmp218;
    compiler::TNode<JSArray> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<Smi> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<Smi> tmp224;
    compiler::TNode<Smi> tmp225;
    compiler::TNode<FixedArray> tmp226;
    compiler::TNode<IntPtrT> tmp227;
    ca_.Bind(&block18, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227);
    compiler::TNode<BoolT> tmp228;
    USE(tmp228);
    tmp228 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp227}, compiler::TNode<IntPtrT>{tmp218});
    ca_.Branch(tmp228, &block16, &block17, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp229;
    compiler::TNode<RawPtrT> tmp230;
    compiler::TNode<RawPtrT> tmp231;
    compiler::TNode<IntPtrT> tmp232;
    compiler::TNode<JSArray> tmp233;
    compiler::TNode<Smi> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<Smi> tmp238;
    compiler::TNode<Smi> tmp239;
    compiler::TNode<FixedArray> tmp240;
    compiler::TNode<IntPtrT> tmp241;
    ca_.Bind(&block16, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 98);
    compiler::TNode<Object> tmp242;
    USE(tmp242);
    tmp242 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp230}, compiler::TNode<RawPtrT>{tmp231}, compiler::TNode<IntPtrT>{tmp232}}, compiler::TNode<IntPtrT>{tmp241});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 101);
    compiler::TNode<Smi> tmp243;
    USE(tmp243);
    tmp243 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp244;
    USE(tmp244);
    tmp244 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp239}, compiler::TNode<Smi>{tmp243});
    compiler::TNode<Object> tmp245;
    USE(tmp245);
    tmp245 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1406(state_, compiler::TNode<Context>{tmp229}, compiler::TNode<Object>{tmp242});
    StoreFixedArrayDirect_215(state_, compiler::TNode<FixedArray>{tmp240}, compiler::TNode<Smi>{tmp239}, compiler::TNode<Object>{tmp245});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 97);
    ca_.Goto(&block19, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp244, tmp240, tmp241);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp246;
    compiler::TNode<RawPtrT> tmp247;
    compiler::TNode<RawPtrT> tmp248;
    compiler::TNode<IntPtrT> tmp249;
    compiler::TNode<JSArray> tmp250;
    compiler::TNode<Smi> tmp251;
    compiler::TNode<Smi> tmp252;
    compiler::TNode<Smi> tmp253;
    compiler::TNode<Smi> tmp254;
    compiler::TNode<Smi> tmp255;
    compiler::TNode<Smi> tmp256;
    compiler::TNode<FixedArray> tmp257;
    compiler::TNode<IntPtrT> tmp258;
    ca_.Bind(&block19, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258);
    compiler::TNode<IntPtrT> tmp259;
    USE(tmp259);
    tmp259 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp260;
    USE(tmp260);
    tmp260 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp258}, compiler::TNode<IntPtrT>{tmp259});
    ca_.Goto(&block18, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp260);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp261;
    compiler::TNode<RawPtrT> tmp262;
    compiler::TNode<RawPtrT> tmp263;
    compiler::TNode<IntPtrT> tmp264;
    compiler::TNode<JSArray> tmp265;
    compiler::TNode<Smi> tmp266;
    compiler::TNode<Smi> tmp267;
    compiler::TNode<Smi> tmp268;
    compiler::TNode<Smi> tmp269;
    compiler::TNode<Smi> tmp270;
    compiler::TNode<Smi> tmp271;
    compiler::TNode<FixedArray> tmp272;
    compiler::TNode<IntPtrT> tmp273;
    ca_.Bind(&block17, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 94);
    ca_.Goto(&block15, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp274;
    compiler::TNode<RawPtrT> tmp275;
    compiler::TNode<RawPtrT> tmp276;
    compiler::TNode<IntPtrT> tmp277;
    compiler::TNode<JSArray> tmp278;
    compiler::TNode<Smi> tmp279;
    compiler::TNode<Smi> tmp280;
    compiler::TNode<Smi> tmp281;
    compiler::TNode<Smi> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<Smi> tmp284;
    ca_.Bind(&block15, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 106);
    compiler::TNode<IntPtrT> tmp285 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp285);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp278, tmp285}, tmp280);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 57);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 169);
    ca_.Goto(&block1, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp286;
    compiler::TNode<RawPtrT> tmp287;
    compiler::TNode<RawPtrT> tmp288;
    compiler::TNode<IntPtrT> tmp289;
    compiler::TNode<JSArray> tmp290;
    compiler::TNode<Smi> tmp291;
    compiler::TNode<Smi> tmp292;
    compiler::TNode<Smi> tmp293;
    compiler::TNode<Smi> tmp294;
    compiler::TNode<Smi> tmp295;
    ca_.Bind(&block1, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295);
    ca_.Goto(&block20, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295);
  }

    compiler::TNode<Context> tmp296;
    compiler::TNode<RawPtrT> tmp297;
    compiler::TNode<RawPtrT> tmp298;
    compiler::TNode<IntPtrT> tmp299;
    compiler::TNode<JSArray> tmp300;
    compiler::TNode<Smi> tmp301;
    compiler::TNode<Smi> tmp302;
    compiler::TNode<Smi> tmp303;
    compiler::TNode<Smi> tmp304;
    compiler::TNode<Smi> tmp305;
    ca_.Bind(&block20, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305);
}

void FastSplice16FixedDoubleArray20UT5ATSmi10HeapNumber_1433(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructArguments p_args, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_length, compiler::TNode<Smi> p_newLength, compiler::TNode<Smi> p_actualStart, compiler::TNode<Smi> p_insertCount, compiler::TNode<Smi> p_actualDeleteCount) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi, Smi, FixedDoubleArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi, Smi, FixedDoubleArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedDoubleArray, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedDoubleArray, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedDoubleArray, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedDoubleArray, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args.frame, p_args.base, p_args.length, p_a, p_length, p_newLength, p_actualStart, p_insertCount, p_actualDeleteCount);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<JSArray> tmp4;
    compiler::TNode<Smi> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 59);
    EnsureWriteableFastElements_50(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<JSArray>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 61);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiNotEqual(compiler::TNode<Smi>{tmp8}, compiler::TNode<Smi>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<JSArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 62);
    compiler::TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp21);
    compiler::TNode<FixedArrayBase>tmp22 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp15, tmp21});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 63);
    compiler::TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp18}, compiler::TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 64);
    compiler::TNode<Smi> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp18}, compiler::TNode<Smi>{tmp20});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 65);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp16}, compiler::TNode<Smi>{tmp20});
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp25}, compiler::TNode<Smi>{tmp18});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 66);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp19}, compiler::TNode<Smi>{tmp20});
    ca_.Branch(tmp27, &block4, &block5, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp22, tmp23, tmp24, tmp26);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<JSArray> tmp32;
    compiler::TNode<Smi> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<FixedArrayBase> tmp38;
    compiler::TNode<Smi> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<Smi> tmp41;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 69);
    compiler::TNode<FixedDoubleArray> tmp42;
    USE(tmp42);
    tmp42 = UnsafeCast16FixedDoubleArray_1407(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 68);
    DoMoveElements16FixedDoubleArray_1486(state_, compiler::TNode<FixedDoubleArray>{tmp42}, compiler::TNode<Smi>{tmp39}, compiler::TNode<Smi>{tmp40}, compiler::TNode<Smi>{tmp41});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 71);
    compiler::TNode<FixedDoubleArray> tmp43;
    USE(tmp43);
    tmp43 = UnsafeCast16FixedDoubleArray_1407(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 70);
    StoreHoles16FixedDoubleArray_1487(state_, compiler::TNode<FixedDoubleArray>{tmp43}, compiler::TNode<Smi>{tmp34}, compiler::TNode<Smi>{tmp33});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 66);
    ca_.Goto(&block6, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<JSArray> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Smi> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<FixedArrayBase> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<Smi> tmp57;
    ca_.Bind(&block5, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 72);
    compiler::TNode<BoolT> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp52}, compiler::TNode<Smi>{tmp53});
    ca_.Branch(tmp58, &block7, &block8, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<RawPtrT> tmp60;
    compiler::TNode<RawPtrT> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<JSArray> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Smi> tmp67;
    compiler::TNode<Smi> tmp68;
    compiler::TNode<FixedArrayBase> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<Smi> tmp72;
    ca_.Bind(&block7, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 74);
    compiler::TNode<IntPtrT> tmp73 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp73);
    compiler::TNode<Smi>tmp74 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp69, tmp73});
    compiler::TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiLessThanOrEqual(compiler::TNode<Smi>{tmp65}, compiler::TNode<Smi>{tmp74});
    ca_.Branch(tmp75, &block9, &block10, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<RawPtrT> tmp77;
    compiler::TNode<RawPtrT> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    compiler::TNode<JSArray> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<Smi> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<Smi> tmp85;
    compiler::TNode<FixedArrayBase> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    ca_.Bind(&block9, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 76);
    compiler::TNode<FixedDoubleArray> tmp90;
    USE(tmp90);
    tmp90 = UnsafeCast16FixedDoubleArray_1407(state_, compiler::TNode<Context>{tmp76}, compiler::TNode<Object>{tmp86});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 75);
    DoMoveElements16FixedDoubleArray_1486(state_, compiler::TNode<FixedDoubleArray>{tmp90}, compiler::TNode<Smi>{tmp87}, compiler::TNode<Smi>{tmp88}, compiler::TNode<Smi>{tmp89});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 74);
    ca_.Goto(&block11, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp91;
    compiler::TNode<RawPtrT> tmp92;
    compiler::TNode<RawPtrT> tmp93;
    compiler::TNode<IntPtrT> tmp94;
    compiler::TNode<JSArray> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<Smi> tmp97;
    compiler::TNode<Smi> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<FixedArrayBase> tmp101;
    compiler::TNode<Smi> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<Smi> tmp104;
    ca_.Bind(&block10, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 79);
    compiler::TNode<Smi> tmp105;
    USE(tmp105);
    tmp105 = CodeStubAssembler(state_).CalculateNewElementsCapacity(compiler::TNode<Smi>{tmp97});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 81);
    compiler::TNode<Smi> tmp106;
    USE(tmp106);
    tmp106 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<FixedDoubleArray> tmp107;
    USE(tmp107);
    tmp107 = Extract16FixedDoubleArray_43(state_, compiler::TNode<Context>{tmp91}, compiler::TNode<FixedArrayBase>{tmp101}, compiler::TNode<Smi>{tmp106}, compiler::TNode<Smi>{tmp98}, compiler::TNode<Smi>{tmp105});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 80);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 82);
    compiler::TNode<IntPtrT> tmp108 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp108);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp95, tmp108}, tmp107);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 83);
    compiler::TNode<IntPtrT> tmp109 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp109);
    compiler::TNode<Smi>tmp110 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp101, tmp109});
    compiler::TNode<Smi> tmp111;
    USE(tmp111);
    tmp111 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp110}, compiler::TNode<Smi>{tmp111});
    ca_.Branch(tmp112, &block12, &block13, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp107);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<RawPtrT> tmp114;
    compiler::TNode<RawPtrT> tmp115;
    compiler::TNode<IntPtrT> tmp116;
    compiler::TNode<JSArray> tmp117;
    compiler::TNode<Smi> tmp118;
    compiler::TNode<Smi> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<Smi> tmp122;
    compiler::TNode<FixedArrayBase> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<Smi> tmp125;
    compiler::TNode<Smi> tmp126;
    compiler::TNode<Smi> tmp127;
    compiler::TNode<FixedDoubleArray> tmp128;
    ca_.Bind(&block12, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 85);
    compiler::TNode<FixedDoubleArray> tmp129;
    USE(tmp129);
    tmp129 = UnsafeCast16FixedDoubleArray_1407(state_, compiler::TNode<Context>{tmp113}, compiler::TNode<Object>{tmp123});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 86);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 84);
    DoCopyElements16FixedDoubleArray_1488(state_, compiler::TNode<FixedDoubleArray>{tmp128}, compiler::TNode<Smi>{tmp124}, compiler::TNode<FixedDoubleArray>{tmp129}, compiler::TNode<Smi>{tmp125}, compiler::TNode<Smi>{tmp126});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 83);
    ca_.Goto(&block13, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp130;
    compiler::TNode<RawPtrT> tmp131;
    compiler::TNode<RawPtrT> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<JSArray> tmp134;
    compiler::TNode<Smi> tmp135;
    compiler::TNode<Smi> tmp136;
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Smi> tmp139;
    compiler::TNode<FixedArrayBase> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Smi> tmp143;
    compiler::TNode<Smi> tmp144;
    compiler::TNode<FixedDoubleArray> tmp145;
    ca_.Bind(&block13, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 77);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 74);
    ca_.Goto(&block11, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp146;
    compiler::TNode<RawPtrT> tmp147;
    compiler::TNode<RawPtrT> tmp148;
    compiler::TNode<IntPtrT> tmp149;
    compiler::TNode<JSArray> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<Smi> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<FixedArrayBase> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Smi> tmp159;
    ca_.Bind(&block11, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 72);
    ca_.Goto(&block8, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp160;
    compiler::TNode<RawPtrT> tmp161;
    compiler::TNode<RawPtrT> tmp162;
    compiler::TNode<IntPtrT> tmp163;
    compiler::TNode<JSArray> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<Smi> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<FixedArrayBase> tmp170;
    compiler::TNode<Smi> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Smi> tmp173;
    ca_.Bind(&block8, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 66);
    ca_.Goto(&block6, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp174;
    compiler::TNode<RawPtrT> tmp175;
    compiler::TNode<RawPtrT> tmp176;
    compiler::TNode<IntPtrT> tmp177;
    compiler::TNode<JSArray> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<Smi> tmp182;
    compiler::TNode<Smi> tmp183;
    compiler::TNode<FixedArrayBase> tmp184;
    compiler::TNode<Smi> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<Smi> tmp187;
    ca_.Bind(&block6, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 61);
    ca_.Goto(&block3, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp188;
    compiler::TNode<RawPtrT> tmp189;
    compiler::TNode<RawPtrT> tmp190;
    compiler::TNode<IntPtrT> tmp191;
    compiler::TNode<JSArray> tmp192;
    compiler::TNode<Smi> tmp193;
    compiler::TNode<Smi> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Smi> tmp197;
    ca_.Bind(&block3, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 93);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 94);
    compiler::TNode<Smi> tmp198;
    USE(tmp198);
    tmp198 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp199;
    USE(tmp199);
    tmp199 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp196}, compiler::TNode<Smi>{tmp198});
    ca_.Branch(tmp199, &block14, &block15, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp195);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp200;
    compiler::TNode<RawPtrT> tmp201;
    compiler::TNode<RawPtrT> tmp202;
    compiler::TNode<IntPtrT> tmp203;
    compiler::TNode<JSArray> tmp204;
    compiler::TNode<Smi> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<Smi> tmp209;
    compiler::TNode<Smi> tmp210;
    ca_.Bind(&block14, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 96);
    compiler::TNode<IntPtrT> tmp211 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp211);
    compiler::TNode<FixedArrayBase>tmp212 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp204, tmp211});
    compiler::TNode<FixedDoubleArray> tmp213;
    USE(tmp213);
    tmp213 = UnsafeCast16FixedDoubleArray_1407(state_, compiler::TNode<Context>{tmp200}, compiler::TNode<Object>{tmp212});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 95);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 97);
    compiler::TNode<IntPtrT> tmp214;
    USE(tmp214);
    tmp214 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 2);
    ca_.Goto(&block18, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp213, tmp214);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp215;
    compiler::TNode<RawPtrT> tmp216;
    compiler::TNode<RawPtrT> tmp217;
    compiler::TNode<IntPtrT> tmp218;
    compiler::TNode<JSArray> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<Smi> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<Smi> tmp224;
    compiler::TNode<Smi> tmp225;
    compiler::TNode<FixedDoubleArray> tmp226;
    compiler::TNode<IntPtrT> tmp227;
    ca_.Bind(&block18, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227);
    compiler::TNode<BoolT> tmp228;
    USE(tmp228);
    tmp228 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp227}, compiler::TNode<IntPtrT>{tmp218});
    ca_.Branch(tmp228, &block16, &block17, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp229;
    compiler::TNode<RawPtrT> tmp230;
    compiler::TNode<RawPtrT> tmp231;
    compiler::TNode<IntPtrT> tmp232;
    compiler::TNode<JSArray> tmp233;
    compiler::TNode<Smi> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<Smi> tmp238;
    compiler::TNode<Smi> tmp239;
    compiler::TNode<FixedDoubleArray> tmp240;
    compiler::TNode<IntPtrT> tmp241;
    ca_.Bind(&block16, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 98);
    compiler::TNode<Object> tmp242;
    USE(tmp242);
    tmp242 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp230}, compiler::TNode<RawPtrT>{tmp231}, compiler::TNode<IntPtrT>{tmp232}}, compiler::TNode<IntPtrT>{tmp241});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 101);
    compiler::TNode<Smi> tmp243;
    USE(tmp243);
    tmp243 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp244;
    USE(tmp244);
    tmp244 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp239}, compiler::TNode<Smi>{tmp243});
    compiler::TNode<Number> tmp245;
    USE(tmp245);
    tmp245 = UnsafeCast20UT5ATSmi10HeapNumber_1489(state_, compiler::TNode<Context>{tmp229}, compiler::TNode<Object>{tmp242});
    StoreFixedDoubleArrayDirect_214(state_, compiler::TNode<FixedDoubleArray>{tmp240}, compiler::TNode<Smi>{tmp239}, compiler::TNode<Number>{tmp245});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 97);
    ca_.Goto(&block19, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp244, tmp240, tmp241);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp246;
    compiler::TNode<RawPtrT> tmp247;
    compiler::TNode<RawPtrT> tmp248;
    compiler::TNode<IntPtrT> tmp249;
    compiler::TNode<JSArray> tmp250;
    compiler::TNode<Smi> tmp251;
    compiler::TNode<Smi> tmp252;
    compiler::TNode<Smi> tmp253;
    compiler::TNode<Smi> tmp254;
    compiler::TNode<Smi> tmp255;
    compiler::TNode<Smi> tmp256;
    compiler::TNode<FixedDoubleArray> tmp257;
    compiler::TNode<IntPtrT> tmp258;
    ca_.Bind(&block19, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258);
    compiler::TNode<IntPtrT> tmp259;
    USE(tmp259);
    tmp259 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp260;
    USE(tmp260);
    tmp260 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp258}, compiler::TNode<IntPtrT>{tmp259});
    ca_.Goto(&block18, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp260);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp261;
    compiler::TNode<RawPtrT> tmp262;
    compiler::TNode<RawPtrT> tmp263;
    compiler::TNode<IntPtrT> tmp264;
    compiler::TNode<JSArray> tmp265;
    compiler::TNode<Smi> tmp266;
    compiler::TNode<Smi> tmp267;
    compiler::TNode<Smi> tmp268;
    compiler::TNode<Smi> tmp269;
    compiler::TNode<Smi> tmp270;
    compiler::TNode<Smi> tmp271;
    compiler::TNode<FixedDoubleArray> tmp272;
    compiler::TNode<IntPtrT> tmp273;
    ca_.Bind(&block17, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 94);
    ca_.Goto(&block15, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp274;
    compiler::TNode<RawPtrT> tmp275;
    compiler::TNode<RawPtrT> tmp276;
    compiler::TNode<IntPtrT> tmp277;
    compiler::TNode<JSArray> tmp278;
    compiler::TNode<Smi> tmp279;
    compiler::TNode<Smi> tmp280;
    compiler::TNode<Smi> tmp281;
    compiler::TNode<Smi> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<Smi> tmp284;
    ca_.Bind(&block15, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 106);
    compiler::TNode<IntPtrT> tmp285 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp285);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp278, tmp285}, tmp280);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 57);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 173);
    ca_.Goto(&block1, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp286;
    compiler::TNode<RawPtrT> tmp287;
    compiler::TNode<RawPtrT> tmp288;
    compiler::TNode<IntPtrT> tmp289;
    compiler::TNode<JSArray> tmp290;
    compiler::TNode<Smi> tmp291;
    compiler::TNode<Smi> tmp292;
    compiler::TNode<Smi> tmp293;
    compiler::TNode<Smi> tmp294;
    compiler::TNode<Smi> tmp295;
    ca_.Bind(&block1, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295);
    ca_.Goto(&block20, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295);
  }

    compiler::TNode<Context> tmp296;
    compiler::TNode<RawPtrT> tmp297;
    compiler::TNode<RawPtrT> tmp298;
    compiler::TNode<IntPtrT> tmp299;
    compiler::TNode<JSArray> tmp300;
    compiler::TNode<Smi> tmp301;
    compiler::TNode<Smi> tmp302;
    compiler::TNode<Smi> tmp303;
    compiler::TNode<Smi> tmp304;
    compiler::TNode<Smi> tmp305;
    ca_.Bind(&block20, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305);
}

void DoMoveElements10FixedArray_1483(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_dstIndex, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 35);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1});
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 36);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 34);
    TorqueMoveElements_230(state_, compiler::TNode<FixedArray>{tmp0}, compiler::TNode<IntPtrT>{tmp4}, compiler::TNode<IntPtrT>{tmp5}, compiler::TNode<IntPtrT>{tmp6});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 68);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArray> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10);
  }

    compiler::TNode<FixedArray> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14);
}

void StoreHoles10FixedArray_1484(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_holeStartIndex, compiler::TNode<Smi> p_holeEndIndex) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_holeStartIndex, p_holeEndIndex);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 41);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<FixedArray> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Smi> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5, &tmp6);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp6}, compiler::TNode<Smi>{tmp5});
    ca_.Branch(tmp7, &block2, &block3, tmp3, tmp4, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<FixedArray> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 42);
    StoreArrayHole_54(state_, compiler::TNode<FixedArray>{tmp8}, compiler::TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 41);
    ca_.Goto(&block5, tmp8, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    compiler::TNode<FixedArray> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14, &tmp15);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp15}, compiler::TNode<Smi>{tmp16});
    ca_.Goto(&block4, tmp12, tmp13, tmp14, tmp17);
  }

  if (block3.is_used()) {
    compiler::TNode<FixedArray> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Smi> tmp21;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 70);
    ca_.Goto(&block1, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArray> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block1, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block6, tmp22, tmp23, tmp24);
  }

    compiler::TNode<FixedArray> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    ca_.Bind(&block6, &tmp25, &tmp26, &tmp27);
}

void DoCopyElements10FixedArray_1485(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_dstElements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<FixedArray> p_srcElements, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_dstElements, p_dstIndex, p_srcElements, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<FixedArray> tmp2;
    compiler::TNode<Smi> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 50);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 51);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp3});
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 49);
    TorqueCopyElements_232(state_, compiler::TNode<FixedArray>{tmp0}, compiler::TNode<IntPtrT>{tmp5}, compiler::TNode<FixedArray>{tmp2}, compiler::TNode<IntPtrT>{tmp6}, compiler::TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 84);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArray> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<FixedArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<Smi> tmp12;
    ca_.Bind(&block1, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

    compiler::TNode<FixedArray> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<FixedArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
}

void DoMoveElements16FixedDoubleArray_1486(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_dstIndex, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 35);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1});
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 36);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 34);
    TorqueMoveElements_231(state_, compiler::TNode<FixedDoubleArray>{tmp0}, compiler::TNode<IntPtrT>{tmp4}, compiler::TNode<IntPtrT>{tmp5}, compiler::TNode<IntPtrT>{tmp6});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 68);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10);
  }

    compiler::TNode<FixedDoubleArray> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14);
}

void StoreHoles16FixedDoubleArray_1487(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_holeStartIndex, compiler::TNode<Smi> p_holeEndIndex) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_holeStartIndex, p_holeEndIndex);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 41);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Smi> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5, &tmp6);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp6}, compiler::TNode<Smi>{tmp5});
    ca_.Branch(tmp7, &block2, &block3, tmp3, tmp4, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 42);
    StoreArrayHole_53(state_, compiler::TNode<FixedDoubleArray>{tmp8}, compiler::TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 41);
    ca_.Goto(&block5, tmp8, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14, &tmp15);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp15}, compiler::TNode<Smi>{tmp16});
    ca_.Goto(&block4, tmp12, tmp13, tmp14, tmp17);
  }

  if (block3.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Smi> tmp21;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 70);
    ca_.Goto(&block1, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block1, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block6, tmp22, tmp23, tmp24);
  }

    compiler::TNode<FixedDoubleArray> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    ca_.Bind(&block6, &tmp25, &tmp26, &tmp27);
}

void DoCopyElements16FixedDoubleArray_1488(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_dstElements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<FixedDoubleArray> p_srcElements, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, FixedDoubleArray, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, FixedDoubleArray, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, FixedDoubleArray, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_dstElements, p_dstIndex, p_srcElements, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<FixedDoubleArray> tmp2;
    compiler::TNode<Smi> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 50);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 51);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp3});
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 49);
    TorqueCopyElements_233(state_, compiler::TNode<FixedDoubleArray>{tmp0}, compiler::TNode<IntPtrT>{tmp5}, compiler::TNode<FixedDoubleArray>{tmp2}, compiler::TNode<IntPtrT>{tmp6}, compiler::TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 84);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<FixedDoubleArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<Smi> tmp12;
    ca_.Bind(&block1, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

    compiler::TNode<FixedDoubleArray> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<FixedDoubleArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
}

compiler::TNode<Number> UnsafeCast20UT5ATSmi10HeapNumber_1489(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2790);
    compiler::TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-splice.tq", 101);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Number> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Number>{tmp8};
}

}  // namespace internal
}  // namespace v8

