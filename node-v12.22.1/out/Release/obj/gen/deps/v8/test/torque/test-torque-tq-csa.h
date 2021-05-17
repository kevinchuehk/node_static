#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_TEST_TORQUE_TEST_TORQUE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_TEST_TORQUE_TEST_TORQUE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<BoolT> ElementsKindTestHelper1_410(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
bool ElementsKindTestHelper2_411(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
void LabelTestHelper1_412(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1);
void LabelTestHelper2_413(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0);
void LabelTestHelper3_414(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1);
void TestConstexpr1_415(compiler::CodeAssemblerState* state_);
void TestConstexprIf_416(compiler::CodeAssemblerState* state_);
void TestConstexprReturn_417(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabel_418(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabelWithOneParameter_419(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabelWithTwoParameters_420(compiler::CodeAssemblerState* state_);
void TestBuiltinSpecialization_421(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
void LabelTestHelper4_422(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5);
compiler::TNode<BoolT> CallLabelTestHelper4_423(compiler::CodeAssemblerState* state_, bool p_flag);
compiler::TNode<Oddball> TestPartiallyUnusedLabel_424(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> GenericMacroTest20UT5ATSmi10HeapObject_425(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2);
compiler::TNode<Object> GenericMacroTestWithLabels20UT5ATSmi10HeapObject_426(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y);
void TestMacroSpecialization_427(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestFunctionPointers_428(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Oddball> TestVariableRedeclaration_429(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestTernaryOperator_430(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
void TestFunctionPointerToGeneric_431(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
compiler::TNode<BuiltinPtr> TestTypeAlias_432(compiler::CodeAssemblerState* state_, compiler::TNode<BuiltinPtr> p_x);
compiler::TNode<Oddball> TestUnsafeCast_433(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Number> p_n);
void TestHexLiteral_434(compiler::CodeAssemblerState* state_);
void TestLargeIntegerLiterals_435(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
void TestMultilineAssert_436(compiler::CodeAssemblerState* state_);
void TestNewlineInString_437(compiler::CodeAssemblerState* state_);
  int31_t kConstexprConst_438(compiler::CodeAssemblerState* state_);
  compiler::TNode<IntPtrT> kIntptrConst_439(compiler::CodeAssemblerState* state_);
  compiler::TNode<Smi> kSmiConst_440(compiler::CodeAssemblerState* state_);
void TestModuleConstBindings_441(compiler::CodeAssemblerState* state_);
void TestLocalConstBindings_442(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> TestStruct1_443(compiler::CodeAssemblerState* state_, TorqueStructTestStructA p_i);
TorqueStructTestStructA TestStruct2_444(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
TorqueStructTestStructA TestStruct3_445(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
TorqueStructTestStructC TestStruct4_446(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void CallTestStructInLabel_448(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestForLoop_449(compiler::CodeAssemblerState* state_);
void TestSubtyping_450(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
compiler::TNode<Int32T> TypeswitchExample_451(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_x);
void TestTypeswitch_452(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestTypeswitchAsanLsanFailure_453(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_obj);
void TestGenericOverload_454(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestEquality_455(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<BoolT> TestOrAnd_456(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr_457(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
void TestLogicalOperators_458(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> TestCall_459(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);
void TestOtherwiseWithCode1_460(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode2_461(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode3_462(compiler::CodeAssemblerState* state_);
void TestForwardLabel_463(compiler::CodeAssemblerState* state_);
void TestQualifiedAccess_464(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestCatch1_465(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestCatch2Wrapper_466(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestCatch2_467(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestCatch3WrapperWithLabel_468(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort);
compiler::TNode<Smi> TestCatch3_469(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestIterator_470(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Map> p_map);
void TestFrame1_471(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestNew_472(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestStructConstructor_473(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<InternalClass> NewInternalClass_474(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
void TestInternalClass_475(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestConstInStructs_476(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> TestNewFixedArrayFromSpread_477(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestReferences_478(compiler::CodeAssemblerState* state_);
void TestSlices_479(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestSliceEnumeration_480(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestStaticAssert_481(compiler::CodeAssemblerState* state_);
void TestLoadEliminationFixed_482(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestLoadEliminationVariable_483(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestRedundantArrayElementCheck_484(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestRedundantSmiCheck_485(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<IntPtrT> TestGenericStruct1_486(compiler::CodeAssemblerState* state_);
TorqueStructTestTuple24TestTuple8ATintptr5ATSmi24TestTuple5ATSmi8ATintptr TestGenericStruct2_487(compiler::CodeAssemblerState* state_);
compiler::TNode<BoolT> BranchAndWriteResult_488(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x, compiler::TNode<SmiBox> p_box);
void TestBranchOnBoolOptimization_489(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Smi> p_input);
compiler::TNode<Smi> LoadInternalClassA_1312(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o);
void StoreInternalClassA_1313(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Number> LoadInternalClassB_1314(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o);
void StoreInternalClassB_1315(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Number> p_v);
void _method_InternalClass_Flip(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi);
compiler::TNode<Smi> LoadSmiPairA_1316(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o);
void StoreSmiPairA_1317(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSmiPairB_1318(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o);
void StoreSmiPairB_1319(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v);
TorqueStructReference5ATSmi _method_SmiPair_GetA(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_this);
compiler::TNode<Smi> LoadSmiBoxValue_1320(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o);
void StoreSmiBoxValue_1321(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSmiBoxUnrelated_1322(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o);
void StoreSmiBoxUnrelated_1323(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Object> GenericMacroTest5ATSmi_1471(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param);
compiler::TNode<Object> GenericMacroTestWithLabels5ATSmi_1472(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X);
compiler::TNode<Object> IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1473(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_x);
compiler::TNode<Smi> ExampleGenericOverload5ATSmi_1474(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_o);
compiler::TNode<Object> ExampleGenericOverload20UT5ATSmi10HeapObject_1475(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_o);
compiler::TNode<BoolT> Is7JSArray5ATSmi_1476(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Smi> p_o);
void Swap5ATSmi_1479(compiler::CodeAssemblerState* state_, TorqueStructReference5ATSmi p_a, TorqueStructReference5ATSmi p_b);
TorqueStructTestTuple5ATSmi8ATintptr TupleSwap8ATintptr5ATSmi_1480(compiler::CodeAssemblerState* state_, TorqueStructTestTuple8ATintptr5ATSmi p_tuple);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_TEST_TORQUE_TEST_TORQUE_TQ_H_
