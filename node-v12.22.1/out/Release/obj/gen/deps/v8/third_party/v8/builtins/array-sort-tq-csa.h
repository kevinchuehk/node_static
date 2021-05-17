#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<IntPtrT> CalculateWorkArrayLength_385(compiler::CodeAssemblerState* state_, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Number> p_initialReceiverLength);
compiler::TNode<SortState> NewSortState_386(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<HeapObject> p_comparefn, compiler::TNode<Number> p_initialReceiverLength);
  compiler::TNode<Smi> kSuccess_387(compiler::CodeAssemblerState* state_);
  int31_t kMaxMergePending_388(compiler::CodeAssemblerState* state_);
  int31_t kMinGallopWins_389(compiler::CodeAssemblerState* state_);
  compiler::TNode<Smi> kSortStateTempSize_390(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> GetPendingRunsSize_391(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
compiler::TNode<Smi> GetPendingRunBase_392(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
void SetPendingRunBase_393(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
compiler::TNode<Smi> GetPendingRunLength_394(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
void SetPendingRunLength_395(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
void PushRun_396(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_base, compiler::TNode<Smi> p_length);
compiler::TNode<FixedArray> GetTempArray_397(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_requestedSize);
void BinaryInsertionSort_398(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_low, compiler::TNode<Smi> p_startArg, compiler::TNode<Smi> p_high);
compiler::TNode<Smi> CountAndMakeRun_399(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_lowArg, compiler::TNode<Smi> p_high);
void ReverseRange_400(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_array, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to);
void MergeLow_401(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg);
void MergeHigh_402(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg);
compiler::TNode<Smi> ComputeMinRunLength_403(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_nArg);
compiler::TNode<BoolT> RunInvariantEstablished_404(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_n);
void MergeCollapse_405(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void MergeForceCollapse_406(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void ArrayTimSortImpl_407(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_length);
compiler::TNode<Smi> CompactReceiverElementsIntoWorkArray_408(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void CopyWorkArrayToReceiver_409(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_numberOfNonUndefined);
compiler::TNode<JSReceiver> LoadSortStateReceiver_1280(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateReceiver_1281(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<JSReceiver> p_v);
compiler::TNode<Map> LoadSortStateInitialReceiverMap_1282(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateInitialReceiverMap_1283(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Map> p_v);
compiler::TNode<Number> LoadSortStateInitialReceiverLength_1284(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateInitialReceiverLength_1285(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Number> p_v);
compiler::TNode<HeapObject> LoadSortStateUserCmpFn_1286(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateUserCmpFn_1287(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateSortComparePtr_1288(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateSortComparePtr_1289(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateLoadFn_1290(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateLoadFn_1291(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateStoreFn_1292(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateStoreFn_1293(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateDeleteFn_1294(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateDeleteFn_1295(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateCanUseSameAccessorFn_1296(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateCanUseSameAccessorFn_1297(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<Smi> LoadSortStateMinGallop_1298(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateMinGallop_1299(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSortStatePendingRunsSize_1300(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStatePendingRunsSize_1301(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<FixedArray> LoadSortStatePendingRuns_1302(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStatePendingRuns_1303(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<FixedArray> LoadSortStateWorkArray_1304(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateWorkArray_1305(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<FixedArray> LoadSortStateTempArray_1306(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateTempArray_1307(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<Smi> LoadSortStateSortLength_1308(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateSortLength_1309(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSortStateNumberOfUndefined_1310(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateNumberOfUndefined_1311(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Number> _method_SortState_Compare(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_this, compiler::TNode<Object> p_x, compiler::TNode<Object> p_y);
void _method_SortState_CheckAccessor(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_this, compiler::CodeAssemblerLabel* label_Bailout);
void _method_SortState_ResetToGenericAccessor(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_this);
compiler::TNode<JSObject> UnsafeCast8JSObject_1468(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<HeapNumber> UnsafeCast10HeapNumber_1469(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<HeapObject> Cast84UT19ATCallableApiObject17ATCallableJSProxy11ATUndefined15JSBoundFunction10JSFunction_1470(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_
