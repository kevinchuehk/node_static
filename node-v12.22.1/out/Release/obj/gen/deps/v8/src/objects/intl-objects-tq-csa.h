#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_OBJECTS_INTL_OBJECTS_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_OBJECTS_INTL_OBJECTS_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<Foreign> LoadJSDateTimeFormatIcuLocale_1324(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatIcuLocale_1325(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Foreign> LoadJSDateTimeFormatIcuSimpleDateFormat_1326(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatIcuSimpleDateFormat_1327(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Foreign> LoadJSDateTimeFormatIcuDateIntervalFormat_1328(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatIcuDateIntervalFormat_1329(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<HeapObject> LoadJSDateTimeFormatBoundFormat_1330(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatBoundFormat_1331(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<Smi> LoadJSDateTimeFormatFlags_1332(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatFlags_1333(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<String> LoadJSListFormatLocale_1334(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o);
void StoreJSListFormatLocale_1335(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o, compiler::TNode<String> p_v);
compiler::TNode<Foreign> LoadJSListFormatIcuFormatter_1336(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o);
void StoreJSListFormatIcuFormatter_1337(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Smi> LoadJSListFormatFlags_1338(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o);
void StoreJSListFormatFlags_1339(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<String> LoadJSNumberFormatLocale_1340(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatLocale_1341(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<String> p_v);
compiler::TNode<Foreign> LoadJSNumberFormatIcuNumberFormatter_1342(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatIcuNumberFormatter_1343(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<HeapObject> LoadJSNumberFormatBoundFormat_1344(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatBoundFormat_1345(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<Smi> LoadJSNumberFormatFlags_1346(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatFlags_1347(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<String> LoadJSPluralRulesLocale_1348(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o);
void StoreJSPluralRulesLocale_1349(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<String> p_v);
compiler::TNode<Smi> LoadJSPluralRulesFlags_1350(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o);
void StoreJSPluralRulesFlags_1351(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Foreign> LoadJSPluralRulesIcuPluralRules_1352(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o);
void StoreJSPluralRulesIcuPluralRules_1353(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Foreign> LoadJSPluralRulesIcuNumberFormatter_1354(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o);
void StoreJSPluralRulesIcuNumberFormatter_1355(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<String> LoadJSRelativeTimeFormatLocale_1356(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o);
void StoreJSRelativeTimeFormatLocale_1357(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o, compiler::TNode<String> p_v);
compiler::TNode<Foreign> LoadJSRelativeTimeFormatIcuFormatter_1358(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o);
void StoreJSRelativeTimeFormatIcuFormatter_1359(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Smi> LoadJSRelativeTimeFormatFlags_1360(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o);
void StoreJSRelativeTimeFormatFlags_1361(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Foreign> LoadJSLocaleIcuLocale_1362(compiler::CodeAssemblerState* state_, compiler::TNode<JSLocale> p_o);
void StoreJSLocaleIcuLocale_1363(compiler::CodeAssemblerState* state_, compiler::TNode<JSLocale> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<String> LoadJSSegmenterLocale_1364(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o);
void StoreJSSegmenterLocale_1365(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o, compiler::TNode<String> p_v);
compiler::TNode<Foreign> LoadJSSegmenterIcuBreakIterator_1366(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o);
void StoreJSSegmenterIcuBreakIterator_1367(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Smi> LoadJSSegmenterFlags_1368(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o);
void StoreJSSegmenterFlags_1369(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Foreign> LoadJSSegmentIteratorIcuBreakIterator_1370(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o);
void StoreJSSegmentIteratorIcuBreakIterator_1371(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Foreign> LoadJSSegmentIteratorUnicodeString_1372(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o);
void StoreJSSegmentIteratorUnicodeString_1373(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Smi> LoadJSSegmentIteratorFlags_1374(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o);
void StoreJSSegmentIteratorFlags_1375(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<String> LoadJSV8BreakIteratorLocale_1376(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorLocale_1377(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<String> p_v);
compiler::TNode<Foreign> LoadJSV8BreakIteratorBreakIterator_1378(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBreakIterator_1379(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Foreign> LoadJSV8BreakIteratorUnicodeString_1380(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorUnicodeString_1381(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundAdoptText_1382(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundAdoptText_1383(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundFirst_1384(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundFirst_1385(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundNext_1386(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundNext_1387(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundCurrent_1388(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundCurrent_1389(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundBreakType_1390(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundBreakType_1391(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<Smi> LoadJSV8BreakIteratorBreakIteratorType_1392(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBreakIteratorType_1393(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Foreign> LoadJSCollatorIcuCollator_1394(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o);
void StoreJSCollatorIcuCollator_1395(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<HeapObject> LoadJSCollatorBoundCompare_1396(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o);
void StoreJSCollatorBoundCompare_1397(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o, compiler::TNode<HeapObject> p_v);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_OBJECTS_INTL_OBJECTS_TQ_H_
