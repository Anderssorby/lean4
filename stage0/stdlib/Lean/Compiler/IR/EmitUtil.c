// Lean compiler output
// Module: Lean.Compiler.IR.EmitUtil
// Imports: Init Lean.Compiler.InitAttr Lean.Compiler.IR.CompilerM
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_IR_CollectUsedDecls_collectDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectFnBody(lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectVar___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectJP_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_isTailCallTo___boxed(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_IR_CollectUsedDecls_collectDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_usesModuleFrom___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectDecl_match__1(lean_object*);
lean_object* l_Lean_IR_mkVarJPMaps___closed__2;
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_CollectMaps_collectJP___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_IR_collectUsedDecls(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_forM___at_Lean_IR_addDecls___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl_match__1(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Name_isPrefixOf___closed__1;
lean_object* l_Std_RBNode_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Name_isPrefixOf___closed__2;
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectVar___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_IR_mkVarJPMaps___closed__1;
uint8_t l_Lean_IR_isTailCallTo(lean_object*, lean_object*);
lean_object* l_Lean_IR_isTailCallTo_match__1(lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectFnBody_match__1(lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectParams(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_reinsertAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at_Array_foldl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_AltCore_body(lean_object*);
lean_object* l_USize_ofNat___boxed(lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectFnBody___closed__1;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_get_init_fn_name_for(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_insert___closed__1;
lean_object* l_Lean_IR_CollectMaps_collectFnBody_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectVar_match__1(lean_object*);
lean_object* l_Std_mkHashMap___at_Lean_IR_mkVarJPMaps___spec__2(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectJP___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_CollectMaps_collectVar___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectJP___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_CollectMaps_collectVar___spec__3(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collect(lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
uint8_t l_List_foldr___at_Lean_IR_usesModuleFrom___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectFnBody___lambda__1(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectVar___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectJP(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectVar_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectJP___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody_match__1(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_CollectMaps_collectJP___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectDecl_match__1(lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectVar___spec__5___closed__1;
lean_object* l_Lean_IR_CollectMaps_collectJP_match__1(lean_object*);
lean_object* l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectVar___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectVar___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectJP___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at_Lean_IR_usesModuleFrom___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectDecl(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectJP___spec__2(lean_object*, lean_object*);
lean_object* l_Array_forM___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_mkVarJPMaps___closed__3;
lean_object* l_Lean_IR_mkVarJPMaps(lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collect___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_usesModuleFrom(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectFnBody___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forM___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectParams___lambda__1(lean_object*, lean_object*);
lean_object* l_Std_mkHashMap___at_Lean_IR_mkVarJPMaps___spec__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_isPrefixOf_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectParams___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody___closed__1;
lean_object* l_Lean_IR_isTailCallTo_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CollectMaps_collectParams___closed__1;
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody_match__2(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_IR_isTailCallTo_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 6)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 11)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_apply_5(x_2, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_apply_1(x_3, x_1);
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_14 = lean_apply_1(x_3, x_1);
return x_14;
}
}
else
{
lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_apply_1(x_3, x_1);
return x_15;
}
}
else
{
lean_object* x_16; 
lean_dec(x_2);
x_16 = lean_apply_1(x_3, x_1);
return x_16;
}
}
}
lean_object* l_Lean_IR_isTailCallTo_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_isTailCallTo_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_IR_isTailCallTo(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 2);
if (lean_obj_tag(x_3) == 6)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 3);
if (lean_obj_tag(x_4) == 11)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_nat_dec_eq(x_6, x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = lean_name_eq(x_7, x_1);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
lean_object* l_Lean_IR_isTailCallTo___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_isTailCallTo(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_List_foldr___at_Lean_IR_usesModuleFrom___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_1);
x_6 = l_List_foldr___at_Lean_IR_usesModuleFrom___spec__1(x_1, x_2, x_5);
x_7 = l_Lean_Name_isPrefixOf___closed__1;
x_8 = l_Lean_Name_isPrefixOf___closed__2;
x_9 = l_Lean_Name_isPrefixOf_match__1___rarg(x_1, x_4, x_7, x_8, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
return x_6;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
}
}
uint8_t l_Lean_IR_usesModuleFrom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_3 = l_Lean_Environment_allImportedModuleNames(x_1);
x_4 = lean_array_to_list(lean_box(0), x_3);
x_5 = 0;
x_6 = l_List_foldr___at_Lean_IR_usesModuleFrom___spec__1(x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_List_foldr___at_Lean_IR_usesModuleFrom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at_Lean_IR_usesModuleFrom___spec__1(x_1, x_4, x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_IR_usesModuleFrom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_usesModuleFrom(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collect(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Lean_NameSet_insert___closed__1;
x_5 = lean_box(0);
x_6 = l_Std_RBNode_insert___rarg(x_4, x_3, x_1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collect___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_CollectUsedDecls_collect(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 6:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
case 7:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_3, x_8, x_9);
return x_10;
}
default: 
{
lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_apply_1(x_4, x_1);
return x_11;
}
}
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_CollectUsedDecls_collectFnBody_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_4(x_2, x_6, x_7, x_8, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_4(x_3, x_11, x_12, x_13, x_14);
return x_15;
}
case 10:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_apply_4(x_4, x_16, x_17, x_18, x_19);
return x_20;
}
default: 
{
lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_apply_1(x_5, x_1);
return x_21;
}
}
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_CollectUsedDecls_collectFnBody_match__2___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 == x_4;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; 
x_9 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_6);
x_10 = lean_apply_4(x_1, x_5, x_9, x_6, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 1;
x_14 = x_3 + x_13;
x_3 = x_14;
x_5 = x_11;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_7);
return x_16;
}
}
}
lean_object* l_Array_foldlMUnsafe___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_nat_dec_lt(x_4, x_5);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_3);
x_11 = lean_nat_dec_le(x_5, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_usize_of_nat(x_4);
x_14 = lean_usize_of_nat(x_5);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__3(x_1, x_3, x_13, x_14, x_2, x_6, x_7);
return x_15;
}
}
}
}
lean_object* l_Array_forM___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_alloc_closure((void*)(l_Array_forM___at_Lean_IR_addDecls___spec__1___lambda__1___boxed), 5, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_box(0);
x_9 = l_Array_foldlMUnsafe___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__2(x_7, x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_AltCore_body(x_1);
x_5 = l_Lean_IR_CollectUsedDecls_collectFnBody(x_4, x_2, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_CollectUsedDecls_collectFnBody___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_CollectUsedDecls_collectFnBody___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
switch (lean_obj_tag(x_4)) {
case 6:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_IR_CollectUsedDecls_collect(x_6, x_2, x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_1 = x_5;
x_3 = x_8;
goto _start;
}
case 7:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = l_Lean_IR_CollectUsedDecls_collect(x_11, x_2, x_3);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_1 = x_10;
x_3 = x_13;
goto _start;
}
default: 
{
lean_object* x_15; 
lean_dec(x_4);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
lean_dec(x_1);
x_1 = x_15;
goto _start;
}
}
}
case 1:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_1, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
lean_dec(x_1);
lean_inc(x_2);
x_19 = l_Lean_IR_CollectUsedDecls_collectFnBody(x_17, x_2, x_3);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_1 = x_18;
x_3 = x_20;
goto _start;
}
case 10:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_1, 3);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_array_get_size(x_22);
x_24 = l_Lean_IR_CollectUsedDecls_collectFnBody___closed__1;
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Array_forM___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__1(x_24, x_22, x_25, x_23, x_2, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_26;
}
default: 
{
uint8_t x_27; 
x_27 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
x_1 = x_28;
goto _start;
}
else
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_2);
lean_dec(x_1);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_3);
return x_31;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__3(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_foldlMUnsafe___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Array_forM___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_forM___at_Lean_IR_CollectUsedDecls_collectFnBody___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_CollectUsedDecls_collectFnBody___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_CollectUsedDecls_collectInitDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
x_4 = lean_get_init_fn_name_for(x_2, x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Lean_IR_CollectUsedDecls_collect(x_7, x_2, x_3);
lean_dec(x_2);
return x_8;
}
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_4(x_3, x_10, x_11, x_12, x_13);
return x_14;
}
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_CollectUsedDecls_collectDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_CollectUsedDecls_collectDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_2);
x_6 = l_Lean_IR_CollectUsedDecls_collectInitDecl(x_4, x_2, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_IR_CollectUsedDecls_collectFnBody(x_5, x_2, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 1);
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
lean_inc(x_10);
lean_ctor_set(x_8, 0, x_10);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_12);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = l_Lean_IR_CollectUsedDecls_collectInitDecl(x_14, x_2, x_3);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 1);
x_18 = lean_ctor_get(x_15, 0);
lean_dec(x_18);
lean_inc(x_17);
lean_ctor_set(x_15, 0, x_17);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
lean_inc(x_19);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_IR_collectUsedDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_CollectUsedDecls_collectDecl(x_2, x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Lean_IR_CollectMaps_collectVar_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_CollectMaps_collectVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_CollectMaps_collectVar_match__1___rarg), 2, 0);
return x_2;
}
}
uint8_t l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectVar___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
static lean_object* _init_l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectVar___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_USize_ofNat___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectVar___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectVar___spec__5___closed__1;
x_7 = l_Std_HashMapImp_reinsertAux___rarg(x_6, x_1, x_3, x_4);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_CollectMaps_collectVar___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectVar___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_CollectMaps_collectVar___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_IR_CollectMaps_collectVar___spec__4(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectVar___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_nat_dec_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectVar___spec__6(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_nat_dec_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectVar___spec__6(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectVar___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectVar___spec__2(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Std_HashMapImp_expand___at_Lean_IR_CollectMaps_collectVar___spec__3(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectVar___spec__6(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = lean_usize_of_nat(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectVar___spec__2(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Std_HashMapImp_expand___at_Lean_IR_CollectMaps_collectVar___spec__3(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectVar___spec__6(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_IR_CollectMaps_collectVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectVar___spec__1(x_5, x_1, x_2);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectVar___spec__1(x_7, x_1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
}
lean_object* l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectVar___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectVar___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_CollectMaps_collectParams___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectVar___spec__1(x_6, x_3, x_4);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectVar___spec__1(x_8, x_3, x_4);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
}
static lean_object* _init_l_Lean_IR_CollectMaps_collectParams___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_CollectMaps_collectParams___lambda__1), 2, 0);
return x_1;
}
}
lean_object* l_Lean_IR_CollectMaps_collectParams(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_array_get_size(x_1);
x_4 = l_Lean_IR_CollectMaps_collectParams___closed__1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_foldlMUnsafe___at_Array_foldl___spec__1___rarg(x_4, x_2, x_1, x_5, x_3);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_IR_CollectMaps_collectParams___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_CollectMaps_collectParams(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_CollectMaps_collectJP_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_CollectMaps_collectJP_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_CollectMaps_collectJP_match__1___rarg), 2, 0);
return x_2;
}
}
uint8_t l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectJP___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectJP___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectVar___spec__5___closed__1;
x_7 = l_Std_HashMapImp_reinsertAux___rarg(x_6, x_1, x_3, x_4);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_CollectMaps_collectJP___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectJP___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_CollectMaps_collectJP___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_IR_CollectMaps_collectJP___spec__4(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectJP___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_nat_dec_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectJP___spec__6(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_nat_dec_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectJP___spec__6(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectJP___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectJP___spec__2(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Std_HashMapImp_expand___at_Lean_IR_CollectMaps_collectJP___spec__3(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectJP___spec__6(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = lean_usize_of_nat(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectJP___spec__2(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Std_HashMapImp_expand___at_Lean_IR_CollectMaps_collectJP___spec__3(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_Std_AssocList_replace___at_Lean_IR_CollectMaps_collectJP___spec__6(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_IR_CollectMaps_collectJP(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectJP___spec__1(x_5, x_1, x_2);
lean_ctor_set(x_3, 1, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectJP___spec__1(x_8, x_1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
lean_object* l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectJP___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_IR_CollectMaps_collectJP___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_CollectMaps_collectFnBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_4(x_2, x_6, x_7, x_8, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_4(x_3, x_11, x_12, x_13, x_14);
return x_15;
}
case 10:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_apply_4(x_4, x_16, x_17, x_18, x_19);
return x_20;
}
default: 
{
lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_apply_1(x_5, x_1);
return x_21;
}
}
}
}
lean_object* l_Lean_IR_CollectMaps_collectFnBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_CollectMaps_collectFnBody_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_IR_CollectMaps_collectFnBody___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_IR_AltCore_body(x_2);
x_4 = l_Lean_IR_CollectMaps_collectFnBody(x_3, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_CollectMaps_collectFnBody___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_CollectMaps_collectFnBody___lambda__1___boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_IR_CollectMaps_collectFnBody(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_IR_CollectMaps_collectFnBody(x_5, x_2);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectVar___spec__1(x_8, x_3, x_4);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
x_12 = l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectVar___spec__1(x_10, x_3, x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
case 1:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 3);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l_Lean_IR_CollectMaps_collectFnBody(x_17, x_2);
x_19 = l_Lean_IR_CollectMaps_collectFnBody(x_16, x_18);
x_20 = l_Lean_IR_CollectMaps_collectParams(x_15, x_19);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 1);
x_23 = l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectJP___spec__1(x_22, x_14, x_15);
lean_ctor_set(x_20, 1, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = l_Std_HashMapImp_insert___at_Lean_IR_CollectMaps_collectJP___spec__1(x_25, x_14, x_15);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
case 10:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_1, 3);
lean_inc(x_28);
lean_dec(x_1);
x_29 = lean_array_get_size(x_28);
x_30 = l_Lean_IR_CollectMaps_collectFnBody___closed__1;
x_31 = lean_unsigned_to_nat(0u);
x_32 = l_Array_foldlMUnsafe___at_Array_foldl___spec__1___rarg(x_30, x_2, x_28, x_31, x_29);
lean_dec(x_29);
lean_dec(x_28);
return x_32;
}
default: 
{
uint8_t x_33; 
x_33 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
x_1 = x_34;
goto _start;
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
}
}
lean_object* l_Lean_IR_CollectMaps_collectFnBody___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_CollectMaps_collectFnBody___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_CollectMaps_collectDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l_Lean_IR_CollectMaps_collectDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_CollectMaps_collectDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_CollectMaps_collectDecl(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_IR_CollectMaps_collectFnBody(x_4, x_2);
x_6 = l_Lean_IR_CollectMaps_collectParams(x_3, x_5);
lean_dec(x_3);
return x_6;
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
lean_object* l_Std_mkHashMap___at_Lean_IR_mkVarJPMaps___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Std_mkHashMap___at_Lean_IR_mkVarJPMaps___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_mkVarJPMaps___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_mkVarJPMaps___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_mkVarJPMaps___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_IR_mkVarJPMaps___closed__1;
x_2 = l_Lean_IR_mkVarJPMaps___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_mkVarJPMaps(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_IR_mkVarJPMaps___closed__3;
x_3 = l_Lean_IR_CollectMaps_collectDecl(x_1, x_2);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Compiler_InitAttr(lean_object*);
lean_object* initialize_Lean_Compiler_IR_CompilerM(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_IR_EmitUtil(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_CollectUsedDecls_collectFnBody___closed__1 = _init_l_Lean_IR_CollectUsedDecls_collectFnBody___closed__1();
lean_mark_persistent(l_Lean_IR_CollectUsedDecls_collectFnBody___closed__1);
l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectVar___spec__5___closed__1 = _init_l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectVar___spec__5___closed__1();
lean_mark_persistent(l_Std_AssocList_foldlM___at_Lean_IR_CollectMaps_collectVar___spec__5___closed__1);
l_Lean_IR_CollectMaps_collectParams___closed__1 = _init_l_Lean_IR_CollectMaps_collectParams___closed__1();
lean_mark_persistent(l_Lean_IR_CollectMaps_collectParams___closed__1);
l_Lean_IR_CollectMaps_collectFnBody___closed__1 = _init_l_Lean_IR_CollectMaps_collectFnBody___closed__1();
lean_mark_persistent(l_Lean_IR_CollectMaps_collectFnBody___closed__1);
l_Lean_IR_mkVarJPMaps___closed__1 = _init_l_Lean_IR_mkVarJPMaps___closed__1();
lean_mark_persistent(l_Lean_IR_mkVarJPMaps___closed__1);
l_Lean_IR_mkVarJPMaps___closed__2 = _init_l_Lean_IR_mkVarJPMaps___closed__2();
lean_mark_persistent(l_Lean_IR_mkVarJPMaps___closed__2);
l_Lean_IR_mkVarJPMaps___closed__3 = _init_l_Lean_IR_mkVarJPMaps___closed__3();
lean_mark_persistent(l_Lean_IR_mkVarJPMaps___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
