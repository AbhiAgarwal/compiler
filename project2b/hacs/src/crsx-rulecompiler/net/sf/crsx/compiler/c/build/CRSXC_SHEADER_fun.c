/* C RULES FOR CRSX CRSXC MODULE SHEADER. */
#include "CRSXC.h" 
#ifdef __cplusplus
extern "C" {
#endif

/* FUNCTION SH-TopArgs. */
int conBindOffs_M_SH_TopArgs[] = {0 , 0};
char *nameFun_M_SH_TopArgs(Term term) { return  "SH-TopArgs" ; }
struct _ConstructionDescriptor descriptor_M_SH_TopArgs = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_SH_TopArgs), conBindOffs_M_SH_TopArgs, &nameFun_M_SH_TopArgs, &step_M_SH_TopArgs};

int step_M_SH_TopArgs(Sink sink__V1, Term term__V2)
{
  int term__V2_count = LINK_COUNT(term__V2); permitUnusedInt(term__V2_count);
  Term sub__V3 = FORCE(sink__V1->context, SUB(term__V2, 0));
  EnumOf_M__sList choice__V4 = (IS_VARIABLE_USE(sub__V3) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V3));
  switch (choice__V4)
  {
    case Data_M__sNil: { /* Function SHEADER-SH-TopArgs-1$SH-TopArgs$$Nil case $Nil */
      ASSERT(sink__V1->context, !strcmp(SYMBOL(term__V2),  "SH-TopArgs" ));
      Term sub__V5 = SUB(term__V2, 0); int sub__V5_count = term__V2_count*LINK_COUNT(sub__V5); permitUnusedInt(sub__V5_count);
      ASSERT(sink__V1->context, !strcmp(SYMBOL(sub__V5),  "$Nil" ));
      
      NamedPropertyLink namedP__V6 = LINK_NamedPropertyLink(sink__V1->context, NAMED_PROPERTIES(term__V2));
      VariablePropertyLink varP__V7 = LINK_VariablePropertyLink(sink__V1->context, VARIABLE_PROPERTIES(term__V2));
      UNLINK(sink__V1->context, term__V2);
      ADD_PROPERTIES(sink__V1, LINK_NamedPropertyLink(sink__V1->context, namedP__V6), LINK_VariablePropertyLink(sink__V1->context, varP__V7));
      { START(sink__V1, _M_SH_TopArgs_s2);
        END(sink__V1, _M_SH_TopArgs_s2); }
      UNLINK_NamedPropertyLink(sink__V1->context, namedP__V6); 
      UNLINK_VariablePropertyLink(sink__V1->context, varP__V7);
      
      return 1;
    break; } case Data_M__sCons: { /* Function SHEADER-SH-TopArgs-2$SH-TopArgs$$Cons case $Cons */
      ASSERT(sink__V1->context, !strcmp(SYMBOL(term__V2),  "SH-TopArgs" ));
      Term sub__V8 = SUB(term__V2, 0); int sub__V8_count = term__V2_count*LINK_COUNT(sub__V8); permitUnusedInt(sub__V8_count);
      ASSERT(sink__V1->context, !strcmp(SYMBOL(sub__V8),  "$Cons" ));
      Term sub__V9 = LINK(sink__V1->context, SUB(sub__V8, 0)); int sub__V9_count = sub__V8_count*LINK_COUNT(sub__V9); permitUnusedInt(sub__V9_count);
      /* sub__V9 = &#0-0 */
      Term sub__V10 = LINK(sink__V1->context, SUB(sub__V8, 1)); int sub__V10_count = sub__V8_count*LINK_COUNT(sub__V10); permitUnusedInt(sub__V10_count);
      /* sub__V10 = &#0-1 */
      
      NamedPropertyLink namedP__V11 = LINK_NamedPropertyLink(sink__V1->context, NAMED_PROPERTIES(term__V2));
      VariablePropertyLink varP__V12 = LINK_VariablePropertyLink(sink__V1->context, VARIABLE_PROPERTIES(term__V2));
      UNLINK(sink__V1->context, term__V2);
      ADD_PROPERTIES(sink__V1, LINK_NamedPropertyLink(sink__V1->context, namedP__V11), LINK_VariablePropertyLink(sink__V1->context, varP__V12));
      { START(sink__V1, _M_SH_TopArgs_s1);
        COPY(sink__V1, sub__V9);COPY(sink__V1, sub__V10);END(sink__V1, _M_SH_TopArgs_s1); }
      UNLINK_NamedPropertyLink(sink__V1->context, namedP__V11); 
      UNLINK_VariablePropertyLink(sink__V1->context, varP__V12);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION SH-TopArg$1. */
int conBindOffs_M_SH_TopArg_s1[] = {0 , 0};
char *nameFun_M_SH_TopArg_s1(Term term) { return  "SH-TopArg$1" ; }
struct _ConstructionDescriptor descriptor_M_SH_TopArg_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_SH_TopArg_s1), conBindOffs_M_SH_TopArg_s1, &nameFun_M_SH_TopArg_s1, &step_M_SH_TopArg_s1};

int step_M_SH_TopArg_s1(Sink sink__V13, Term term__V14)
{
  int term__V14_count = LINK_COUNT(term__V14); permitUnusedInt(term__V14_count);
  do {
    /* Contraction rule SHEADER-SH-TopArg-2. */
    ASSERT(sink__V13->context, !strcmp(SYMBOL(term__V14),  "SH-TopArg$1" ));
    Term sub__V15 = LINK(sink__V13->context, SUB(term__V14, 0)); int sub__V15_count = term__V14_count*LINK_COUNT(sub__V15); permitUnusedInt(sub__V15_count);
    CRSX_CHECK_SORT(sink__V13->context, sub__V15, &sort_M_Reified_xFormArgument); /* sub__V15 = &#2 */
    
    NamedPropertyLink namedP__V16 = LINK_NamedPropertyLink(sink__V13->context, NAMED_PROPERTIES(term__V14));
    VariablePropertyLink varP__V17 = LINK_VariablePropertyLink(sink__V13->context, VARIABLE_PROPERTIES(term__V14));
    UNLINK(sink__V13->context, term__V14);
    { START(sink__V13, _M_SH_TopDataArg);
      COPY(sink__V13, sub__V15);END(sink__V13, _M_SH_TopDataArg); }
    UNLINK_NamedPropertyLink(sink__V13->context, namedP__V16); 
    UNLINK_VariablePropertyLink(sink__V13->context, varP__V17);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-TopArg$2. */
int conBindOffs_M_SH_TopArg_s2[] = {0 , 0};
char *nameFun_M_SH_TopArg_s2(Term term) { return  "SH-TopArg$2" ; }
struct _ConstructionDescriptor descriptor_M_SH_TopArg_s2 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_SH_TopArg_s2), conBindOffs_M_SH_TopArg_s2, &nameFun_M_SH_TopArg_s2, &step_M_SH_TopArg_s2};

int step_M_SH_TopArg_s2(Sink sink__V18, Term term__V19)
{
  int term__V19_count = LINK_COUNT(term__V19); permitUnusedInt(term__V19_count);
  do {
    /* Contraction rule SHEADER-SH-TopArg-1. */
    ASSERT(sink__V18->context, !strcmp(SYMBOL(term__V19),  "SH-TopArg$2" ));
    Term sub__V20 = SUB(term__V19, 0); int sub__V20_count = term__V19_count*LINK_COUNT(sub__V20); permitUnusedInt(sub__V20_count);
    CRSX_CHECK_SORT(sink__V18->context, sub__V20, &sort_M_Reified_xFormArgument); /* sub__V20 = &#2 */
    
    NamedPropertyLink namedP__V21 = LINK_NamedPropertyLink(sink__V18->context, NAMED_PROPERTIES(term__V19));
    VariablePropertyLink varP__V22 = LINK_VariablePropertyLink(sink__V18->context, VARIABLE_PROPERTIES(term__V19));
    UNLINK(sink__V18->context, term__V19);
    { START(sink__V18, _M__sTextCons);
      { START(sink__V18, _M__sTextChars);
        LITERAL(sink__V18,  ",Closure" ); END(sink__V18, _M__sTextChars); }
      { START(sink__V18, _M__sTextNil); END(sink__V18, _M__sTextNil); }
      END(sink__V18, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V18->context, namedP__V21); 
    UNLINK_VariablePropertyLink(sink__V18->context, varP__V22);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-Arg$10. */
int conBindOffs_M_SH_Arg_s10[] = {0 , 0};
char *nameFun_M_SH_Arg_s10(Term term) { return  "SH-Arg$10" ; }
struct _ConstructionDescriptor descriptor_M_SH_Arg_s10 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_SH_Arg_s10), conBindOffs_M_SH_Arg_s10, &nameFun_M_SH_Arg_s10, &step_M_SH_Arg_s10};

int step_M_SH_Arg_s10(Sink sink__V23, Term term__V24)
{
  int term__V24_count = LINK_COUNT(term__V24); permitUnusedInt(term__V24_count);
  do {
    /* Contraction rule SHEADER-SH-Arg-1. */
    ASSERT(sink__V23->context, !strcmp(SYMBOL(term__V24),  "SH-Arg$10" ));
    Term sub__V25 = SUB(term__V24, 0); int sub__V25_count = term__V24_count*LINK_COUNT(sub__V25); permitUnusedInt(sub__V25_count);
    /* sub__V25 = &#2 */
    
    NamedPropertyLink namedP__V26 = LINK_NamedPropertyLink(sink__V23->context, NAMED_PROPERTIES(term__V24));
    VariablePropertyLink varP__V27 = LINK_VariablePropertyLink(sink__V23->context, VARIABLE_PROPERTIES(term__V24));
    UNLINK(sink__V23->context, term__V24);
    { START(sink__V23, _M__sTextNil); END(sink__V23, _M__sTextNil); } UNLINK_NamedPropertyLink(sink__V23->context, namedP__V26); 
    UNLINK_VariablePropertyLink(sink__V23->context, varP__V27);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-TopDataArg$2. */
int conBindOffs_M_SH_TopDataArg_s2[] = {0 , 0 , 0 , 1};
char *nameFun_M_SH_TopDataArg_s2(Term term) { return  "SH-TopDataArg$2" ; }
struct _ConstructionDescriptor descriptor_M_SH_TopDataArg_s2 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_SH_TopDataArg_s2), conBindOffs_M_SH_TopDataArg_s2, &nameFun_M_SH_TopDataArg_s2, &step_M_SH_TopDataArg_s2};

int step_M_SH_TopDataArg_s2(Sink sink__V28, Term term__V29)
{
  int term__V29_count = LINK_COUNT(term__V29); permitUnusedInt(term__V29_count);
  do {
    /* Contraction rule SHEADER-SH-TopDataArg-1. */
    ASSERT(sink__V28->context, !strcmp(SYMBOL(term__V29),  "SH-TopDataArg$2" ));
    Term sub__V30 = SUB(term__V29, 0); int sub__V30_count = term__V29_count*LINK_COUNT(sub__V30); permitUnusedInt(sub__V30_count);
    CRSX_CHECK_SORT(sink__V28->context, sub__V30, &sort_M_Reified_xKind); /* sub__V30 = &#11 */
    Term sub__V31 = SUB(term__V29, 1); int sub__V31_count = term__V29_count*LINK_COUNT(sub__V31); permitUnusedInt(sub__V31_count);
    CRSX_CHECK_SORT(sink__V28->context, sub__V31, &sort_M_Reified_xSort); /* sub__V31 = &#12 */
    Variable x__V32 = linkVariable(sink__V28->context, BINDER(term__V29,2,0)); if (term__V29_count <= 1) UNBIND(x__V32);
    Term sub__V33 = LINK(sink__V28->context, SUB(term__V29, 2)); int sub__V33_count = term__V29_count*LINK_COUNT(sub__V33); permitUnusedInt(sub__V33_count);
    CRSX_CHECK_SORT(sink__V28->context, sub__V33, &sort_M_Reified_xFormArgument); /* sub__V33 = &#13 */
    Variable y__V34 = x__V32; permitUnusedVariable(y__V34);
    
    NamedPropertyLink namedP__V35 = LINK_NamedPropertyLink(sink__V28->context, NAMED_PROPERTIES(term__V29));
    VariablePropertyLink varP__V36 = LINK_VariablePropertyLink(sink__V28->context, VARIABLE_PROPERTIES(term__V29));
    UNLINK(sink__V28->context, term__V29);
    { START(sink__V28, _M__sTextCons);
      { START(sink__V28, _M__sTextChars);
        LITERAL(sink__V28,  ",Variable" ); END(sink__V28, _M__sTextChars); }
      { START(sink__V28, _M__sTextCons);
        { START(sink__V28, _M__sTextEmbed);
          { START(sink__V28, _M_AsText);
            { START(sink__V28, _M_SH_TopDataArg);
              COPY(sink__V28, sub__V33); /* REUSED SUBSTITUTION */ END(sink__V28, _M_SH_TopDataArg); }
            END(sink__V28, _M_AsText); }
          END(sink__V28, _M__sTextEmbed); }
        { START(sink__V28, _M__sTextNil);
          END(sink__V28, _M__sTextNil); }
        END(sink__V28, _M__sTextCons); }
      END(sink__V28, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V28->context, namedP__V35); 
    UNLINK_VariablePropertyLink(sink__V28->context, varP__V36); unlinkVariable(sink__V28->context, x__V32);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-TopDataArg$1. */
int conBindOffs_M_SH_TopDataArg_s1[] = {0 , 0};
char *nameFun_M_SH_TopDataArg_s1(Term term) { return  "SH-TopDataArg$1" ; }
struct _ConstructionDescriptor descriptor_M_SH_TopDataArg_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_SH_TopDataArg_s1), conBindOffs_M_SH_TopDataArg_s1, &nameFun_M_SH_TopDataArg_s1, &step_M_SH_TopDataArg_s1};

int step_M_SH_TopDataArg_s1(Sink sink__V37, Term term__V38)
{
  int term__V38_count = LINK_COUNT(term__V38); permitUnusedInt(term__V38_count);
  do {
    /* Contraction rule SHEADER-SH-TopDataArg-2. */
    ASSERT(sink__V37->context, !strcmp(SYMBOL(term__V38),  "SH-TopDataArg$1" ));
    Term sub__V39 = SUB(term__V38, 0); int sub__V39_count = term__V38_count*LINK_COUNT(sub__V39); permitUnusedInt(sub__V39_count);
    CRSX_CHECK_SORT(sink__V37->context, sub__V39, &sort_M_Reified_xSort); /* sub__V39 = &#11 */
    
    NamedPropertyLink namedP__V40 = LINK_NamedPropertyLink(sink__V37->context, NAMED_PROPERTIES(term__V38));
    VariablePropertyLink varP__V41 = LINK_VariablePropertyLink(sink__V37->context, VARIABLE_PROPERTIES(term__V38));
    UNLINK(sink__V37->context, term__V38);
    { START(sink__V37, _M__sTextCons);
      { START(sink__V37, _M__sTextChars);
        LITERAL(sink__V37,  ",Term" ); END(sink__V37, _M__sTextChars); }
      { START(sink__V37, _M__sTextNil); END(sink__V37, _M__sTextNil); }
      END(sink__V37, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V37->context, namedP__V40); 
    UNLINK_VariablePropertyLink(sink__V37->context, varP__V41);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-Arg$7. */
int conBindOffs_M_SH_Arg_s7[] = {0 , 0 , 0 , 0 , 0 , 0};
char *nameFun_M_SH_Arg_s7(Term term) { return  "SH-Arg$7" ; }
struct _ConstructionDescriptor descriptor_M_SH_Arg_s7 = {&sort_M_Reified_xVariable, 0, 5, sizeof(STRUCT_Con_M_SH_Arg_s7), conBindOffs_M_SH_Arg_s7, &nameFun_M_SH_Arg_s7, &step_M_SH_Arg_s7};

int step_M_SH_Arg_s7(Sink sink__V42, Term term__V43)
{
  int term__V43_count = LINK_COUNT(term__V43); permitUnusedInt(term__V43_count);
  Term sub__V44 = FORCE(sink__V42->context, SUB(term__V43, 0));
  EnumOf_M__sBoolean choice__V45 = (IS_VARIABLE_USE(sub__V44) ? VarOf_M__sBoolean : (EnumOf_M__sBoolean) TAG(sub__V44));
  switch (choice__V45)
  {
    case Data_M__sTrue: { /* Function SHEADER-SH-Arg-3$SH-Arg$7$$True case $True */
      ASSERT(sink__V42->context, !strcmp(SYMBOL(term__V43),  "SH-Arg$7" ));
      Term sub__V46 = SUB(term__V43, 0); int sub__V46_count = term__V43_count*LINK_COUNT(sub__V46); permitUnusedInt(sub__V46_count);
      ASSERT(sink__V42->context, !strcmp(SYMBOL(sub__V46),  "$True" ));
      Term sub__V47 = LINK(sink__V42->context, SUB(term__V43, 1)); int sub__V47_count = term__V43_count*LINK_COUNT(sub__V47); permitUnusedInt(sub__V47_count);
      CRSX_CHECK_SORT(sink__V42->context, sub__V47, &sort_M_Reified_xSort); /* sub__V47 = &#0 */
      Term sub__V48 = LINK(sink__V42->context, SUB(term__V43, 2)); int sub__V48_count = term__V43_count*LINK_COUNT(sub__V48); permitUnusedInt(sub__V48_count);
      CRSX_CHECK_SORT(sink__V42->context, sub__V48, &sort_M_Reified_xForm); /* sub__V48 = &#1 */
      Term sub__V49 = LINK(sink__V42->context, SUB(term__V43, 3)); int sub__V49_count = term__V43_count*LINK_COUNT(sub__V49); permitUnusedInt(sub__V49_count);
      /* sub__V49 = &#2 */
      Term sub__V50 = LINK(sink__V42->context, SUB(term__V43, 4)); int sub__V50_count = term__V43_count*LINK_COUNT(sub__V50); permitUnusedInt(sub__V50_count);
      CRSX_CHECK_SORT(sink__V42->context, sub__V50, &sort_M_Reified_xSort); /* sub__V50 = &#3 */
      
      NamedPropertyLink namedP__V51 = LINK_NamedPropertyLink(sink__V42->context, NAMED_PROPERTIES(term__V43));
      VariablePropertyLink varP__V52 = LINK_VariablePropertyLink(sink__V42->context, VARIABLE_PROPERTIES(term__V43));
      UNLINK(sink__V42->context, term__V43);
      ADD_PROPERTIES(sink__V42, LINK_NamedPropertyLink(sink__V42->context, namedP__V51), LINK_VariablePropertyLink(sink__V42->context, varP__V52));
      { START(sink__V42, _M_SH_Arg_s9);
        COPY(sink__V42, sub__V47);COPY(sink__V42, sub__V48);COPY(sink__V42, sub__V49);COPY(sink__V42, sub__V50);END(sink__V42, _M_SH_Arg_s9); }
      UNLINK_NamedPropertyLink(sink__V42->context, namedP__V51); 
      UNLINK_VariablePropertyLink(sink__V42->context, varP__V52);
      
      return 1;
    break; } case Data_M__sFalse: { /* Function SHEADER-SH-Arg-4$SH-Arg$7$$False case $False */
      ASSERT(sink__V42->context, !strcmp(SYMBOL(term__V43),  "SH-Arg$7" ));
      Term sub__V53 = SUB(term__V43, 0); int sub__V53_count = term__V43_count*LINK_COUNT(sub__V53); permitUnusedInt(sub__V53_count);
      ASSERT(sink__V42->context, !strcmp(SYMBOL(sub__V53),  "$False" ));
      Term sub__V54 = LINK(sink__V42->context, SUB(term__V43, 1)); int sub__V54_count = term__V43_count*LINK_COUNT(sub__V54); permitUnusedInt(sub__V54_count);
      CRSX_CHECK_SORT(sink__V42->context, sub__V54, &sort_M_Reified_xSort); /* sub__V54 = &#0 */
      Term sub__V55 = LINK(sink__V42->context, SUB(term__V43, 2)); int sub__V55_count = term__V43_count*LINK_COUNT(sub__V55); permitUnusedInt(sub__V55_count);
      CRSX_CHECK_SORT(sink__V42->context, sub__V55, &sort_M_Reified_xForm); /* sub__V55 = &#1 */
      Term sub__V56 = LINK(sink__V42->context, SUB(term__V43, 3)); int sub__V56_count = term__V43_count*LINK_COUNT(sub__V56); permitUnusedInt(sub__V56_count);
      /* sub__V56 = &#2 */
      Term sub__V57 = LINK(sink__V42->context, SUB(term__V43, 4)); int sub__V57_count = term__V43_count*LINK_COUNT(sub__V57); permitUnusedInt(sub__V57_count);
      CRSX_CHECK_SORT(sink__V42->context, sub__V57, &sort_M_Reified_xSort); /* sub__V57 = &#3 */
      
      NamedPropertyLink namedP__V58 = LINK_NamedPropertyLink(sink__V42->context, NAMED_PROPERTIES(term__V43));
      VariablePropertyLink varP__V59 = LINK_VariablePropertyLink(sink__V42->context, VARIABLE_PROPERTIES(term__V43));
      UNLINK(sink__V42->context, term__V43);
      ADD_PROPERTIES(sink__V42, LINK_NamedPropertyLink(sink__V42->context, namedP__V58), LINK_VariablePropertyLink(sink__V42->context, varP__V59));
      { START(sink__V42, _M_SH_Arg_s8);
        COPY(sink__V42, sub__V54);COPY(sink__V42, sub__V55);COPY(sink__V42, sub__V56);COPY(sink__V42, sub__V57);END(sink__V42, _M_SH_Arg_s8); }
      UNLINK_NamedPropertyLink(sink__V42->context, namedP__V58); 
      UNLINK_VariablePropertyLink(sink__V42->context, varP__V59);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION SH-Arg$9. */
int conBindOffs_M_SH_Arg_s9[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_SH_Arg_s9(Term term) { return  "SH-Arg$9" ; }
struct _ConstructionDescriptor descriptor_M_SH_Arg_s9 = {&sort_M_Reified_xVariable, 0, 4, sizeof(STRUCT_Con_M_SH_Arg_s9), conBindOffs_M_SH_Arg_s9, &nameFun_M_SH_Arg_s9, &step_M_SH_Arg_s9};

int step_M_SH_Arg_s9(Sink sink__V60, Term term__V61)
{
  int term__V61_count = LINK_COUNT(term__V61); permitUnusedInt(term__V61_count);
  do {
    /* Contraction rule SHEADER-SH-Arg-3. */
    ASSERT(sink__V60->context, !strcmp(SYMBOL(term__V61),  "SH-Arg$9" ));
    Term sub__V62 = SUB(term__V61, 0); int sub__V62_count = term__V61_count*LINK_COUNT(sub__V62); permitUnusedInt(sub__V62_count);
    CRSX_CHECK_SORT(sink__V60->context, sub__V62, &sort_M_Reified_xSort); /* sub__V62 = &#112 */
    Term sub__V63 = LINK(sink__V60->context, SUB(term__V61, 1)); int sub__V63_count = term__V61_count*LINK_COUNT(sub__V63); permitUnusedInt(sub__V63_count);
    CRSX_CHECK_SORT(sink__V60->context, sub__V63, &sort_M_Reified_xForm); /* sub__V63 = &#113 */
    Term sub__V64 = LINK(sink__V60->context, SUB(term__V61, 2)); int sub__V64_count = term__V61_count*LINK_COUNT(sub__V64); permitUnusedInt(sub__V64_count);
    /* sub__V64 = &#12 */
    Term sub__V65 = SUB(term__V61, 3); int sub__V65_count = term__V61_count*LINK_COUNT(sub__V65); permitUnusedInt(sub__V65_count);
    CRSX_CHECK_SORT(sink__V60->context, sub__V65, &sort_M_Reified_xSort); /* sub__V65 = &#111 */
    
    NamedPropertyLink namedP__V66 = LINK_NamedPropertyLink(sink__V60->context, NAMED_PROPERTIES(term__V61));
    VariablePropertyLink varP__V67 = LINK_VariablePropertyLink(sink__V60->context, VARIABLE_PROPERTIES(term__V61));
    UNLINK(sink__V60->context, term__V61);
    { START(sink__V60, _M_SH_Arg);
      { START(sink__V60, _M__sCons);
        COPY(sink__V60, sub__V63);COPY(sink__V60, sub__V64);END(sink__V60, _M__sCons); }
      { START(sink__V60, _M__sTrue); END(sink__V60, _M__sTrue); } END(sink__V60, _M_SH_Arg); }
    UNLINK_NamedPropertyLink(sink__V60->context, namedP__V66); 
    UNLINK_VariablePropertyLink(sink__V60->context, varP__V67);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-Arg$8. */
int conBindOffs_M_SH_Arg_s8[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_SH_Arg_s8(Term term) { return  "SH-Arg$8" ; }
struct _ConstructionDescriptor descriptor_M_SH_Arg_s8 = {&sort_M_Reified_xVariable, 0, 4, sizeof(STRUCT_Con_M_SH_Arg_s8), conBindOffs_M_SH_Arg_s8, &nameFun_M_SH_Arg_s8, &step_M_SH_Arg_s8};

int step_M_SH_Arg_s8(Sink sink__V68, Term term__V69)
{
  int term__V69_count = LINK_COUNT(term__V69); permitUnusedInt(term__V69_count);
  do {
    /* Contraction rule SHEADER-SH-Arg-4. */
    ASSERT(sink__V68->context, !strcmp(SYMBOL(term__V69),  "SH-Arg$8" ));
    Term sub__V70 = SUB(term__V69, 0); int sub__V70_count = term__V69_count*LINK_COUNT(sub__V70); permitUnusedInt(sub__V70_count);
    CRSX_CHECK_SORT(sink__V68->context, sub__V70, &sort_M_Reified_xSort); /* sub__V70 = &#112 */
    Term sub__V71 = LINK(sink__V68->context, SUB(term__V69, 1)); int sub__V71_count = term__V69_count*LINK_COUNT(sub__V71); permitUnusedInt(sub__V71_count);
    CRSX_CHECK_SORT(sink__V68->context, sub__V71, &sort_M_Reified_xForm); /* sub__V71 = &#113 */
    Term sub__V72 = LINK(sink__V68->context, SUB(term__V69, 2)); int sub__V72_count = term__V69_count*LINK_COUNT(sub__V72); permitUnusedInt(sub__V72_count);
    /* sub__V72 = &#12 */
    Term sub__V73 = SUB(term__V69, 3); int sub__V73_count = term__V69_count*LINK_COUNT(sub__V73); permitUnusedInt(sub__V73_count);
    CRSX_CHECK_SORT(sink__V68->context, sub__V73, &sort_M_Reified_xSort); /* sub__V73 = &#111 */
    
    NamedPropertyLink namedP__V74 = LINK_NamedPropertyLink(sink__V68->context, NAMED_PROPERTIES(term__V69));
    VariablePropertyLink varP__V75 = LINK_VariablePropertyLink(sink__V68->context, VARIABLE_PROPERTIES(term__V69));
    UNLINK(sink__V68->context, term__V69);
    { START(sink__V68, _M__sTextCons);
      { START(sink__V68, _M__sTextChars);
        LITERAL(sink__V68,  ",NamedPropertyLink,VariablePropertyLink" );
        END(sink__V68, _M__sTextChars); }
      { START(sink__V68, _M__sTextCons);
        { START(sink__V68, _M__sTextEmbed);
          { START(sink__V68, _M_AsText);
            { START(sink__V68, _M_SH_Arg);
              { START(sink__V68, _M__sCons);
                COPY(sink__V68, sub__V71);COPY(sink__V68, sub__V72);END(sink__V68, _M__sCons); }
              { START(sink__V68, _M__sTrue);
                END(sink__V68, _M__sTrue); }
              END(sink__V68, _M_SH_Arg); }
            END(sink__V68, _M_AsText); }
          END(sink__V68, _M__sTextEmbed); }
        { START(sink__V68, _M__sTextNil);
          END(sink__V68, _M__sTextNil); }
        END(sink__V68, _M__sTextCons); }
      END(sink__V68, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V68->context, namedP__V74); 
    UNLINK_VariablePropertyLink(sink__V68->context, varP__V75);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-Arg$3. */
int conBindOffs_M_SH_Arg_s3[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_SH_Arg_s3(Term term) { return  "SH-Arg$3" ; }
struct _ConstructionDescriptor descriptor_M_SH_Arg_s3 = {&sort_M_Reified_xVariable, 0, 4, sizeof(STRUCT_Con_M_SH_Arg_s3), conBindOffs_M_SH_Arg_s3, &nameFun_M_SH_Arg_s3, &step_M_SH_Arg_s3};

int step_M_SH_Arg_s3(Sink sink__V76, Term term__V77)
{
  int term__V77_count = LINK_COUNT(term__V77); permitUnusedInt(term__V77_count);
  Term sub__V78 = FORCE(sink__V76->context, SUB(term__V77, 0));
  EnumOf_M__sList choice__V79 = (IS_VARIABLE_USE(sub__V78) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V78));
  switch (choice__V79)
  {
    case Data_M__sNil: { /* Function SHEADER-SH-Arg-5$SH-Arg$3$$Nil case $Nil */
      ASSERT(sink__V76->context, !strcmp(SYMBOL(term__V77),  "SH-Arg$3" ));
      Term sub__V80 = SUB(term__V77, 0); int sub__V80_count = term__V77_count*LINK_COUNT(sub__V80); permitUnusedInt(sub__V80_count);
      ASSERT(sink__V76->context, !strcmp(SYMBOL(sub__V80),  "$Nil" ));
      Term sub__V81 = LINK(sink__V76->context, SUB(term__V77, 1)); int sub__V81_count = term__V77_count*LINK_COUNT(sub__V81); permitUnusedInt(sub__V81_count);
      /* sub__V81 = &#0 */
      Term sub__V82 = LINK(sink__V76->context, SUB(term__V77, 2)); int sub__V82_count = term__V77_count*LINK_COUNT(sub__V82); permitUnusedInt(sub__V82_count);
      /* sub__V82 = &#1 */
      Term sub__V83 = LINK(sink__V76->context, SUB(term__V77, 3)); int sub__V83_count = term__V77_count*LINK_COUNT(sub__V83); permitUnusedInt(sub__V83_count);
      /* sub__V83 = &#2 */
      
      NamedPropertyLink namedP__V84 = LINK_NamedPropertyLink(sink__V76->context, NAMED_PROPERTIES(term__V77));
      VariablePropertyLink varP__V85 = LINK_VariablePropertyLink(sink__V76->context, VARIABLE_PROPERTIES(term__V77));
      UNLINK(sink__V76->context, term__V77);
      ADD_PROPERTIES(sink__V76, LINK_NamedPropertyLink(sink__V76->context, namedP__V84), LINK_VariablePropertyLink(sink__V76->context, varP__V85));
      { START(sink__V76, _M_SH_Arg_s4);
        COPY(sink__V76, sub__V81);COPY(sink__V76, sub__V82);COPY(sink__V76, sub__V83);END(sink__V76, _M_SH_Arg_s4); }
      UNLINK_NamedPropertyLink(sink__V76->context, namedP__V84); 
      UNLINK_VariablePropertyLink(sink__V76->context, varP__V85);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION SH-Arg$4. */
int conBindOffs_M_SH_Arg_s4[] = {0 , 0 , 0 , 0};
char *nameFun_M_SH_Arg_s4(Term term) { return  "SH-Arg$4" ; }
struct _ConstructionDescriptor descriptor_M_SH_Arg_s4 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_SH_Arg_s4), conBindOffs_M_SH_Arg_s4, &nameFun_M_SH_Arg_s4, &step_M_SH_Arg_s4};

int step_M_SH_Arg_s4(Sink sink__V86, Term term__V87)
{
  int term__V87_count = LINK_COUNT(term__V87); permitUnusedInt(term__V87_count);
  do {
    /* Contraction rule SHEADER-SH-Arg-5. */
    ASSERT(sink__V86->context, !strcmp(SYMBOL(term__V87),  "SH-Arg$4" ));
    Term sub__V88 = LINK(sink__V86->context, SUB(term__V87, 0)); int sub__V88_count = term__V87_count*LINK_COUNT(sub__V88); permitUnusedInt(sub__V88_count);
    /* sub__V88 = &#112 */
    Term sub__V89 = SUB(term__V87, 1); int sub__V89_count = term__V87_count*LINK_COUNT(sub__V89); permitUnusedInt(sub__V89_count);
    /* sub__V89 = &#111 */
    Term sub__V90 = SUB(term__V87, 2); int sub__V90_count = term__V87_count*LINK_COUNT(sub__V90); permitUnusedInt(sub__V90_count);
    /* sub__V90 = &#2 */
    
    NamedPropertyLink namedP__V91 = LINK_NamedPropertyLink(sink__V86->context, NAMED_PROPERTIES(term__V87));
    VariablePropertyLink varP__V92 = LINK_VariablePropertyLink(sink__V86->context, VARIABLE_PROPERTIES(term__V87));
    UNLINK(sink__V86->context, term__V87);
    { START(sink__V86, _M_SH_TopArgs);
      COPY(sink__V86, sub__V88);END(sink__V86, _M_SH_TopArgs); }
    UNLINK_NamedPropertyLink(sink__V86->context, namedP__V91); 
    UNLINK_VariablePropertyLink(sink__V86->context, varP__V92);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-Arg$5. */
int conBindOffs_M_SH_Arg_s5[] = {0 , 0 , 0};
char *nameFun_M_SH_Arg_s5(Term term) { return  "SH-Arg$5" ; }
struct _ConstructionDescriptor descriptor_M_SH_Arg_s5 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_SH_Arg_s5), conBindOffs_M_SH_Arg_s5, &nameFun_M_SH_Arg_s5, &step_M_SH_Arg_s5};

int step_M_SH_Arg_s5(Sink sink__V93, Term term__V94)
{
  int term__V94_count = LINK_COUNT(term__V94); permitUnusedInt(term__V94_count);
  do {
    /* Contraction rule SHEADER-SH-Arg-2. */
    ASSERT(sink__V93->context, !strcmp(SYMBOL(term__V94),  "SH-Arg$5" ));
    Term sub__V95 = LINK(sink__V93->context, SUB(term__V94, 0)); int sub__V95_count = term__V94_count*LINK_COUNT(sub__V95); permitUnusedInt(sub__V95_count);
    /* sub__V95 = &#12 */
    Term sub__V96 = LINK(sink__V93->context, SUB(term__V94, 1)); int sub__V96_count = term__V94_count*LINK_COUNT(sub__V96); permitUnusedInt(sub__V96_count);
    /* sub__V96 = &#2 */
    
    NamedPropertyLink namedP__V97 = LINK_NamedPropertyLink(sink__V93->context, NAMED_PROPERTIES(term__V94));
    VariablePropertyLink varP__V98 = LINK_VariablePropertyLink(sink__V93->context, VARIABLE_PROPERTIES(term__V94));
    UNLINK(sink__V93->context, term__V94);
    { START(sink__V93, _M_SH_Arg);
      COPY(sink__V93, sub__V95);COPY(sink__V93, sub__V96);END(sink__V93, _M_SH_Arg); }
    UNLINK_NamedPropertyLink(sink__V93->context, namedP__V97); 
    UNLINK_VariablePropertyLink(sink__V93->context, varP__V98);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-Arg$1. */
int conBindOffs_M_SH_Arg_s1[] = {0 , 0 , 0 , 0};
char *nameFun_M_SH_Arg_s1(Term term) { return  "SH-Arg$1" ; }
struct _ConstructionDescriptor descriptor_M_SH_Arg_s1 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_SH_Arg_s1), conBindOffs_M_SH_Arg_s1, &nameFun_M_SH_Arg_s1, &step_M_SH_Arg_s1};

int step_M_SH_Arg_s1(Sink sink__V99, Term term__V100)
{
  int term__V100_count = LINK_COUNT(term__V100); permitUnusedInt(term__V100_count);
  do {
    /* Contraction rule SHEADER-SH-Arg-2$SH-Arg$1$SORT-ALLOWS-VARIABLES. */
    ASSERT(sink__V99->context, !strcmp(SYMBOL(term__V100),  "SH-Arg$1" ));
    Term sub__V101 = SUB(term__V100, 0); int sub__V101_count = term__V100_count*LINK_COUNT(sub__V101); permitUnusedInt(sub__V101_count);
    FORCE(sink__V99->context, sub__V101); SUB(term__V100, 0) = sub__V101;
    if (strcmp(SYMBOL(sub__V101),  "SORT-ALLOWS-VARIABLES" )) { break;}
    Term sub__V102 = LINK(sink__V99->context, SUB(term__V100, 1)); int sub__V102_count = term__V100_count*LINK_COUNT(sub__V102); permitUnusedInt(sub__V102_count);
    /* sub__V102 = &#0 */
    Term sub__V103 = LINK(sink__V99->context, SUB(term__V100, 2)); int sub__V103_count = term__V100_count*LINK_COUNT(sub__V103); permitUnusedInt(sub__V103_count);
    /* sub__V103 = &#1 */
    
    NamedPropertyLink namedP__V104 = LINK_NamedPropertyLink(sink__V99->context, NAMED_PROPERTIES(term__V100));
    VariablePropertyLink varP__V105 = LINK_VariablePropertyLink(sink__V99->context, VARIABLE_PROPERTIES(term__V100));
    UNLINK(sink__V99->context, term__V100);
    ADD_PROPERTIES(sink__V99, LINK_NamedPropertyLink(sink__V99->context, namedP__V104), LINK_VariablePropertyLink(sink__V99->context, varP__V105));
    { START(sink__V99, _M_SH_Arg_s5);
      COPY(sink__V99, sub__V102);COPY(sink__V99, sub__V103);END(sink__V99, _M_SH_Arg_s5); }
    UNLINK_NamedPropertyLink(sink__V99->context, namedP__V104); 
    UNLINK_VariablePropertyLink(sink__V99->context, varP__V105);
    
    return 1;
  } while (0);
  do {
    /* Contraction rule SHEADER-SH-Arg-3$SH-Arg$1$SORT-SET. */
    ASSERT(sink__V99->context, !strcmp(SYMBOL(term__V100),  "SH-Arg$1" ));
    Term sub__V106 = SUB(term__V100, 0); int sub__V106_count = term__V100_count*LINK_COUNT(sub__V106); permitUnusedInt(sub__V106_count);
    FORCE(sink__V99->context, sub__V106); SUB(term__V100, 0) = sub__V106;
    if (strcmp(SYMBOL(sub__V106),  "SORT-SET" )) { break;}
    Term sub__V107 = LINK(sink__V99->context, SUB(sub__V106, 0)); int sub__V107_count = sub__V106_count*LINK_COUNT(sub__V107); permitUnusedInt(sub__V107_count);
    CRSX_CHECK_SORT(sink__V99->context, sub__V107, &sort_M_Reified_xSort); /* sub__V107 = &#0-0 */
    Term sub__V108 = LINK(sink__V99->context, SUB(sub__V106, 1)); int sub__V108_count = sub__V106_count*LINK_COUNT(sub__V108); permitUnusedInt(sub__V108_count);
    CRSX_CHECK_SORT(sink__V99->context, sub__V108, &sort_M_Reified_xSort); /* sub__V108 = &#0-1 */
    Term sub__V109 = LINK(sink__V99->context, SUB(sub__V106, 2)); int sub__V109_count = sub__V106_count*LINK_COUNT(sub__V109); permitUnusedInt(sub__V109_count);
    CRSX_CHECK_SORT(sink__V99->context, sub__V109, &sort_M_Reified_xForm); /* sub__V109 = &#0-2 */
    Term sub__V110 = LINK(sink__V99->context, SUB(term__V100, 1)); int sub__V110_count = term__V100_count*LINK_COUNT(sub__V110); permitUnusedInt(sub__V110_count);
    /* sub__V110 = &#3 */
    Term sub__V111 = LINK(sink__V99->context, SUB(term__V100, 2)); int sub__V111_count = term__V100_count*LINK_COUNT(sub__V111); permitUnusedInt(sub__V111_count);
    /* sub__V111 = &#4 */
    
    NamedPropertyLink namedP__V112 = LINK_NamedPropertyLink(sink__V99->context, NAMED_PROPERTIES(term__V100));
    VariablePropertyLink varP__V113 = LINK_VariablePropertyLink(sink__V99->context, VARIABLE_PROPERTIES(term__V100));
    UNLINK(sink__V99->context, term__V100);
    ADD_PROPERTIES(sink__V99, LINK_NamedPropertyLink(sink__V99->context, namedP__V112), LINK_VariablePropertyLink(sink__V99->context, varP__V113));
    { START(sink__V99, _M_SH_Arg_s7);
      COPY(sink__V99, sub__V111);COPY(sink__V99, sub__V108);COPY(sink__V99, sub__V109);COPY(sink__V99, sub__V110);COPY(sink__V99, sub__V107);END(sink__V99, _M_SH_Arg_s7); }
    UNLINK_NamedPropertyLink(sink__V99->context, namedP__V112); 
    UNLINK_VariablePropertyLink(sink__V99->context, varP__V113);
    
    return 1;
  } while (0);
  do {
    /* Contraction rule SHEADER-SH-Arg-5$SH-Arg$1$FORM. */
    ASSERT(sink__V99->context, !strcmp(SYMBOL(term__V100),  "SH-Arg$1" ));
    Term sub__V114 = SUB(term__V100, 0); int sub__V114_count = term__V100_count*LINK_COUNT(sub__V114); permitUnusedInt(sub__V114_count);
    FORCE(sink__V99->context, sub__V114); SUB(term__V100, 0) = sub__V114;
    if (strcmp(SYMBOL(sub__V114),  "FORM" )) { break;}
    Term sub__V115 = LINK(sink__V99->context, SUB(sub__V114, 0)); int sub__V115_count = sub__V114_count*LINK_COUNT(sub__V115); permitUnusedInt(sub__V115_count);
    /* sub__V115 = &#0-0 */
    Term sub__V116 = LINK(sink__V99->context, SUB(sub__V114, 1)); int sub__V116_count = sub__V114_count*LINK_COUNT(sub__V116); permitUnusedInt(sub__V116_count);
    /* sub__V116 = &#0-1 */
    Term sub__V117 = LINK(sink__V99->context, SUB(term__V100, 1)); int sub__V117_count = term__V100_count*LINK_COUNT(sub__V117); permitUnusedInt(sub__V117_count);
    /* sub__V117 = &#2 */
    Term sub__V118 = LINK(sink__V99->context, SUB(term__V100, 2)); int sub__V118_count = term__V100_count*LINK_COUNT(sub__V118); permitUnusedInt(sub__V118_count);
    /* sub__V118 = &#3 */
    
    NamedPropertyLink namedP__V119 = LINK_NamedPropertyLink(sink__V99->context, NAMED_PROPERTIES(term__V100));
    VariablePropertyLink varP__V120 = LINK_VariablePropertyLink(sink__V99->context, VARIABLE_PROPERTIES(term__V100));
    UNLINK(sink__V99->context, term__V100);
    ADD_PROPERTIES(sink__V99, LINK_NamedPropertyLink(sink__V99->context, namedP__V119), LINK_VariablePropertyLink(sink__V99->context, varP__V120));
    { START(sink__V99, _M_SH_Arg_s3);
      COPY(sink__V99, sub__V117);COPY(sink__V99, sub__V116);COPY(sink__V99, sub__V115);COPY(sink__V99, sub__V118);END(sink__V99, _M_SH_Arg_s3); }
    UNLINK_NamedPropertyLink(sink__V99->context, namedP__V119); 
    UNLINK_VariablePropertyLink(sink__V99->context, varP__V120);
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-Arg. */
int conBindOffs_M_SH_Arg[] = {0 , 0 , 0};
char *nameFun_M_SH_Arg(Term term) { return  "SH-Arg" ; }
struct _ConstructionDescriptor descriptor_M_SH_Arg = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_SH_Arg), conBindOffs_M_SH_Arg, &nameFun_M_SH_Arg, &step_M_SH_Arg};

int step_M_SH_Arg(Sink sink__V121, Term term__V122)
{
  int term__V122_count = LINK_COUNT(term__V122); permitUnusedInt(term__V122_count);
  Term sub__V123 = FORCE(sink__V121->context, SUB(term__V122, 0));
  EnumOf_M__sList choice__V124 = (IS_VARIABLE_USE(sub__V123) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V123));
  switch (choice__V124)
  {
    case Data_M__sNil: { /* Function SHEADER-SH-Arg-1$SH-Arg$$Nil case $Nil */
      ASSERT(sink__V121->context, !strcmp(SYMBOL(term__V122),  "SH-Arg" ));
      Term sub__V125 = SUB(term__V122, 0); int sub__V125_count = term__V122_count*LINK_COUNT(sub__V125); permitUnusedInt(sub__V125_count);
      ASSERT(sink__V121->context, !strcmp(SYMBOL(sub__V125),  "$Nil" ));
      Term sub__V126 = LINK(sink__V121->context, SUB(term__V122, 1)); int sub__V126_count = term__V122_count*LINK_COUNT(sub__V126); permitUnusedInt(sub__V126_count);
      /* sub__V126 = &#0 */
      
      NamedPropertyLink namedP__V127 = LINK_NamedPropertyLink(sink__V121->context, NAMED_PROPERTIES(term__V122));
      VariablePropertyLink varP__V128 = LINK_VariablePropertyLink(sink__V121->context, VARIABLE_PROPERTIES(term__V122));
      UNLINK(sink__V121->context, term__V122);
      ADD_PROPERTIES(sink__V121, LINK_NamedPropertyLink(sink__V121->context, namedP__V127), LINK_VariablePropertyLink(sink__V121->context, varP__V128));
      { START(sink__V121, _M_SH_Arg_s10);
        COPY(sink__V121, sub__V126);END(sink__V121, _M_SH_Arg_s10); }
      UNLINK_NamedPropertyLink(sink__V121->context, namedP__V127); 
      UNLINK_VariablePropertyLink(sink__V121->context, varP__V128);
      
      return 1;
    break; } case Data_M__sCons: { /* Function SHEADER-SH-Arg-4$SH-Arg$$Cons case $Cons */
      ASSERT(sink__V121->context, !strcmp(SYMBOL(term__V122),  "SH-Arg" ));
      Term sub__V129 = SUB(term__V122, 0); int sub__V129_count = term__V122_count*LINK_COUNT(sub__V129); permitUnusedInt(sub__V129_count);
      ASSERT(sink__V121->context, !strcmp(SYMBOL(sub__V129),  "$Cons" ));
      Term sub__V130 = LINK(sink__V121->context, SUB(sub__V129, 0)); int sub__V130_count = sub__V129_count*LINK_COUNT(sub__V130); permitUnusedInt(sub__V130_count);
      /* sub__V130 = &#0-0 */
      Term sub__V131 = LINK(sink__V121->context, SUB(sub__V129, 1)); int sub__V131_count = sub__V129_count*LINK_COUNT(sub__V131); permitUnusedInt(sub__V131_count);
      /* sub__V131 = &#0-1 */
      Term sub__V132 = LINK(sink__V121->context, SUB(term__V122, 1)); int sub__V132_count = term__V122_count*LINK_COUNT(sub__V132); permitUnusedInt(sub__V132_count);
      /* sub__V132 = &#2 */
      
      NamedPropertyLink namedP__V133 = LINK_NamedPropertyLink(sink__V121->context, NAMED_PROPERTIES(term__V122));
      VariablePropertyLink varP__V134 = LINK_VariablePropertyLink(sink__V121->context, VARIABLE_PROPERTIES(term__V122));
      UNLINK(sink__V121->context, term__V122);
      ADD_PROPERTIES(sink__V121, LINK_NamedPropertyLink(sink__V121->context, namedP__V133), LINK_VariablePropertyLink(sink__V121->context, varP__V134));
      { START(sink__V121, _M_SH_Arg_s1);
        COPY(sink__V121, sub__V130);COPY(sink__V121, sub__V131);COPY(sink__V121, sub__V132);END(sink__V121, _M_SH_Arg_s1); }
      UNLINK_NamedPropertyLink(sink__V121->context, namedP__V133); 
      UNLINK_VariablePropertyLink(sink__V121->context, varP__V134);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION SH-TopArgs$1. */
int conBindOffs_M_SH_TopArgs_s1[] = {0 , 0 , 0};
char *nameFun_M_SH_TopArgs_s1(Term term) { return  "SH-TopArgs$1" ; }
struct _ConstructionDescriptor descriptor_M_SH_TopArgs_s1 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_SH_TopArgs_s1), conBindOffs_M_SH_TopArgs_s1, &nameFun_M_SH_TopArgs_s1, &step_M_SH_TopArgs_s1};

int step_M_SH_TopArgs_s1(Sink sink__V135, Term term__V136)
{
  int term__V136_count = LINK_COUNT(term__V136); permitUnusedInt(term__V136_count);
  do {
    /* Contraction rule SHEADER-SH-TopArgs-2. */
    ASSERT(sink__V135->context, !strcmp(SYMBOL(term__V136),  "SH-TopArgs$1" ));
    Term sub__V137 = LINK(sink__V135->context, SUB(term__V136, 0)); int sub__V137_count = term__V136_count*LINK_COUNT(sub__V137); permitUnusedInt(sub__V137_count);
    /* sub__V137 = &#11 */
    Term sub__V138 = LINK(sink__V135->context, SUB(term__V136, 1)); int sub__V138_count = term__V136_count*LINK_COUNT(sub__V138); permitUnusedInt(sub__V138_count);
    /* sub__V138 = &#12 */
    
    NamedPropertyLink namedP__V139 = LINK_NamedPropertyLink(sink__V135->context, NAMED_PROPERTIES(term__V136));
    VariablePropertyLink varP__V140 = LINK_VariablePropertyLink(sink__V135->context, VARIABLE_PROPERTIES(term__V136));
    UNLINK(sink__V135->context, term__V136);
    { START(sink__V135, _M__sTextCons);
      { START(sink__V135, _M__sTextEmbed);
        { START(sink__V135, _M_AsText);
          { START(sink__V135, _M_SH_TopArg);
            { START(sink__V135, _M_HasFunctionalFormBinders);
              COPY(sink__V135, LINK(sink__V135->context, sub__V137));END(sink__V135, _M_HasFunctionalFormBinders); }
            COPY(sink__V135, sub__V137);END(sink__V135, _M_SH_TopArg); }
          END(sink__V135, _M_AsText); }
        END(sink__V135, _M__sTextEmbed); }
      { START(sink__V135, _M__sTextCons);
        { START(sink__V135, _M__sTextEmbed);
          { START(sink__V135, _M_AsText);
            { START(sink__V135, _M_SH_TopArgs);
              COPY(sink__V135, sub__V138);END(sink__V135, _M_SH_TopArgs); }
            END(sink__V135, _M_AsText); }
          END(sink__V135, _M__sTextEmbed); }
        { START(sink__V135, _M__sTextNil);
          END(sink__V135, _M__sTextNil); }
        END(sink__V135, _M__sTextCons); }
      END(sink__V135, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V135->context, namedP__V139); 
    UNLINK_VariablePropertyLink(sink__V135->context, varP__V140);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-TopArgs$2. */
int conBindOffs_M_SH_TopArgs_s2[] = {0};
char *nameFun_M_SH_TopArgs_s2(Term term) { return  "SH-TopArgs$2" ; }
struct _ConstructionDescriptor descriptor_M_SH_TopArgs_s2 = {&sort_M_Reified_xVariable, 0, 0, sizeof(STRUCT_Con_M_SH_TopArgs_s2), conBindOffs_M_SH_TopArgs_s2, &nameFun_M_SH_TopArgs_s2, &step_M_SH_TopArgs_s2};

int step_M_SH_TopArgs_s2(Sink sink__V141, Term term__V142)
{
  int term__V142_count = LINK_COUNT(term__V142); permitUnusedInt(term__V142_count);
  do {
    /* Contraction rule SHEADER-SH-TopArgs-1. */
    ASSERT(sink__V141->context, !strcmp(SYMBOL(term__V142),  "SH-TopArgs$2" ));
    
    NamedPropertyLink namedP__V143 = LINK_NamedPropertyLink(sink__V141->context, NAMED_PROPERTIES(term__V142));
    VariablePropertyLink varP__V144 = LINK_VariablePropertyLink(sink__V141->context, VARIABLE_PROPERTIES(term__V142));
    UNLINK(sink__V141->context, term__V142);
    { START(sink__V141, _M__sTextNil); END(sink__V141, _M__sTextNil); }
    UNLINK_NamedPropertyLink(sink__V141->context, namedP__V143); 
    UNLINK_VariablePropertyLink(sink__V141->context, varP__V144);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-Function. */
int conBindOffs_M_SH_Function[] = {0 , 0 , 0 , 0 , 0 , 0 , 0};
char *nameFun_M_SH_Function(Term term) { return  "SH-Function" ; }
struct _ConstructionDescriptor descriptor_M_SH_Function = {&sort_M_Reified_xVariable, 0, 6, sizeof(STRUCT_Con_M_SH_Function), conBindOffs_M_SH_Function, &nameFun_M_SH_Function, &step_M_SH_Function};

int step_M_SH_Function(Sink sink__V145, Term term__V146)
{
  int term__V146_count = LINK_COUNT(term__V146); permitUnusedInt(term__V146_count);
  do {
    /* Contraction rule SHEADER-SH-Function-1. */
    ASSERT(sink__V145->context, !strcmp(SYMBOL(term__V146),  "SH-Function" ));
    Term sub__V147 = SUB(term__V146, 0); int sub__V147_count = term__V146_count*LINK_COUNT(sub__V147); permitUnusedInt(sub__V147_count);
    /* sub__V147 = &#1 */
    Term sub__V148 = SUB(term__V146, 1); int sub__V148_count = term__V146_count*LINK_COUNT(sub__V148); permitUnusedInt(sub__V148_count);
    /* sub__V148 = &#2 */
    Term sub__V149 = LINK(sink__V145->context, SUB(term__V146, 2)); int sub__V149_count = term__V146_count*LINK_COUNT(sub__V149); permitUnusedInt(sub__V149_count);
    /* sub__V149 = &#3 */
    Term sub__V150 = LINK(sink__V145->context, SUB(term__V146, 3)); int sub__V150_count = term__V146_count*LINK_COUNT(sub__V150); permitUnusedInt(sub__V150_count);
    /* sub__V150 = &#4 */
    Term sub__V151 = SUB(term__V146, 4); int sub__V151_count = term__V146_count*LINK_COUNT(sub__V151); permitUnusedInt(sub__V151_count);
    CRSX_CHECK_SORT(sink__V145->context, sub__V151, &sort_M_Reified_xSort); /* sub__V151 = &#5 */
    Term sub__V152 = SUB(term__V146, 5); int sub__V152_count = term__V146_count*LINK_COUNT(sub__V152); permitUnusedInt(sub__V152_count);
    /* sub__V152 = &#6 */
    
    NamedPropertyLink namedP__V153 = LINK_NamedPropertyLink(sink__V145->context, NAMED_PROPERTIES(term__V146));
    VariablePropertyLink varP__V154 = LINK_VariablePropertyLink(sink__V145->context, VARIABLE_PROPERTIES(term__V146));
    UNLINK(sink__V145->context, term__V146);
    { START(sink__V145, _M__sTextCons);
      { START(sink__V145, _M__sTextEmbed);
        { START(sink__V145, _M_AsText);
          { START(sink__V145, _M_MapText_s1);
            COPY(sink__V145, LINK(sink__V145->context, sub__V150));{ Variable x__V155 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V145->context,"x__V155");
              Variable binds__V156[1] = {x__V155}; BINDS(sink__V145, 1, binds__V156);
              { START(sink__V145, _M_H_Form);
                USE(sink__V145, linkVariable(sink__V145->context, x__V155));
                END(sink__V145, _M_H_Form); }
               }
            END(sink__V145, _M_MapText_s1); }
          END(sink__V145, _M_AsText); }
        END(sink__V145, _M__sTextEmbed); }
      { START(sink__V145, _M__sTextCons);
        { START(sink__V145, _M__sTextChars);
          LITERAL(sink__V145,  "extern int " ); END(sink__V145, _M__sTextChars); }
        { START(sink__V145, _M__sTextCons);
          { START(sink__V145, _M__sTextEmbed);
            { START(sink__V145, _M_AsText);
              { START(sink__V145, _M_Step);
                COPY(sink__V145, LINK(sink__V145->context, sub__V149));END(sink__V145, _M_Step); }
              END(sink__V145, _M_AsText); }
            END(sink__V145, _M__sTextEmbed); }
          { START(sink__V145, _M__sTextCons);
            { START(sink__V145, _M__sTextChars);
              LITERAL(sink__V145,  "(Sink,Term);" ); END(sink__V145, _M__sTextChars); }
            { START(sink__V145, _M__sTextCons);
              { START(sink__V145, _M__sTextBreak);
                LITERAL(sink__V145,  "\n" ); END(sink__V145, _M__sTextBreak); }
              { START(sink__V145, _M__sTextCons);
                { START(sink__V145, _M__sTextChars);
                  LITERAL(sink__V145,  "extern int " ); END(sink__V145, _M__sTextChars); }
                { START(sink__V145, _M__sTextCons);
                  { START(sink__V145, _M__sTextEmbed);
                    { START(sink__V145, _M_AsText);
                      { START(sink__V145, _M_MANGLE);
                        COPY(sink__V145, sub__V149);END(sink__V145, _M_MANGLE); }
                      END(sink__V145, _M_AsText); }
                    END(sink__V145, _M__sTextEmbed); }
                  { START(sink__V145, _M__sTextCons);
                    { START(sink__V145, _M__sTextChars);
                      LITERAL(sink__V145,  "(Sink" ); END(sink__V145, _M__sTextChars); }
                    { START(sink__V145, _M__sTextCons);
                      { START(sink__V145, _M__sTextEmbed);
                        { START(sink__V145, _M_AsText);
                          { START(sink__V145, _M_SH_Arg);
                            COPY(sink__V145, sub__V150);{ START(sink__V145, _M__sFalse);
                              END(sink__V145, _M__sFalse); }
                            END(sink__V145, _M_SH_Arg); }
                          END(sink__V145, _M_AsText); }
                        END(sink__V145, _M__sTextEmbed); }
                      { START(sink__V145, _M__sTextCons);
                        { START(sink__V145, _M__sTextChars);
                          LITERAL(sink__V145,  ");" ); END(sink__V145, _M__sTextChars); }
                        { START(sink__V145, _M__sTextCons);
                          { START(sink__V145, _M__sTextBreak);
                            LITERAL(sink__V145,  "\n" ); END(sink__V145, _M__sTextBreak); }
                          { START(sink__V145, _M__sTextNil);
                            END(sink__V145, _M__sTextNil); }
                          END(sink__V145, _M__sTextCons); }
                        END(sink__V145, _M__sTextCons); }
                      END(sink__V145, _M__sTextCons); }
                    END(sink__V145, _M__sTextCons); }
                  END(sink__V145, _M__sTextCons); }
                END(sink__V145, _M__sTextCons); }
              END(sink__V145, _M__sTextCons); }
            END(sink__V145, _M__sTextCons); }
          END(sink__V145, _M__sTextCons); }
        END(sink__V145, _M__sTextCons); }
      END(sink__V145, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V145->context, namedP__V153); 
    UNLINK_VariablePropertyLink(sink__V145->context, varP__V154);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SH-TopArg. */
int conBindOffs_M_SH_TopArg[] = {0 , 0 , 0};
char *nameFun_M_SH_TopArg(Term term) { return  "SH-TopArg" ; }
struct _ConstructionDescriptor descriptor_M_SH_TopArg = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_SH_TopArg), conBindOffs_M_SH_TopArg, &nameFun_M_SH_TopArg, &step_M_SH_TopArg};

int step_M_SH_TopArg(Sink sink__V157, Term term__V158)
{
  int term__V158_count = LINK_COUNT(term__V158); permitUnusedInt(term__V158_count);
  Term sub__V159 = FORCE(sink__V157->context, SUB(term__V158, 0));
  EnumOf_M__sBoolean choice__V160 = (IS_VARIABLE_USE(sub__V159) ? VarOf_M__sBoolean : (EnumOf_M__sBoolean) TAG(sub__V159));
  switch (choice__V160)
  {
    case Data_M__sTrue: { /* Function SHEADER-SH-TopArg-1$SH-TopArg$$True case $True */
      ASSERT(sink__V157->context, !strcmp(SYMBOL(term__V158),  "SH-TopArg" ));
      Term sub__V161 = SUB(term__V158, 0); int sub__V161_count = term__V158_count*LINK_COUNT(sub__V161); permitUnusedInt(sub__V161_count);
      ASSERT(sink__V157->context, !strcmp(SYMBOL(sub__V161),  "$True" ));
      Term sub__V162 = LINK(sink__V157->context, SUB(term__V158, 1)); int sub__V162_count = term__V158_count*LINK_COUNT(sub__V162); permitUnusedInt(sub__V162_count);
      CRSX_CHECK_SORT(sink__V157->context, sub__V162, &sort_M_Reified_xFormArgument); /* sub__V162 = &#0 */
      
      NamedPropertyLink namedP__V163 = LINK_NamedPropertyLink(sink__V157->context, NAMED_PROPERTIES(term__V158));
      VariablePropertyLink varP__V164 = LINK_VariablePropertyLink(sink__V157->context, VARIABLE_PROPERTIES(term__V158));
      UNLINK(sink__V157->context, term__V158);
      ADD_PROPERTIES(sink__V157, LINK_NamedPropertyLink(sink__V157->context, namedP__V163), LINK_VariablePropertyLink(sink__V157->context, varP__V164));
      { START(sink__V157, _M_SH_TopArg_s2);
        COPY(sink__V157, sub__V162);END(sink__V157, _M_SH_TopArg_s2); }
      UNLINK_NamedPropertyLink(sink__V157->context, namedP__V163); 
      UNLINK_VariablePropertyLink(sink__V157->context, varP__V164);
      
      return 1;
    break; } case Data_M__sFalse: { /* Function SHEADER-SH-TopArg-2$SH-TopArg$$False case $False */
      ASSERT(sink__V157->context, !strcmp(SYMBOL(term__V158),  "SH-TopArg" ));
      Term sub__V165 = SUB(term__V158, 0); int sub__V165_count = term__V158_count*LINK_COUNT(sub__V165); permitUnusedInt(sub__V165_count);
      ASSERT(sink__V157->context, !strcmp(SYMBOL(sub__V165),  "$False" ));
      Term sub__V166 = LINK(sink__V157->context, SUB(term__V158, 1)); int sub__V166_count = term__V158_count*LINK_COUNT(sub__V166); permitUnusedInt(sub__V166_count);
      CRSX_CHECK_SORT(sink__V157->context, sub__V166, &sort_M_Reified_xFormArgument); /* sub__V166 = &#0 */
      
      NamedPropertyLink namedP__V167 = LINK_NamedPropertyLink(sink__V157->context, NAMED_PROPERTIES(term__V158));
      VariablePropertyLink varP__V168 = LINK_VariablePropertyLink(sink__V157->context, VARIABLE_PROPERTIES(term__V158));
      UNLINK(sink__V157->context, term__V158);
      ADD_PROPERTIES(sink__V157, LINK_NamedPropertyLink(sink__V157->context, namedP__V167), LINK_VariablePropertyLink(sink__V157->context, varP__V168));
      { START(sink__V157, _M_SH_TopArg_s1);
        COPY(sink__V157, sub__V166);END(sink__V157, _M_SH_TopArg_s1); }
      UNLINK_NamedPropertyLink(sink__V157->context, namedP__V167); 
      UNLINK_VariablePropertyLink(sink__V157->context, varP__V168);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION SH-TopDataArg. */
int conBindOffs_M_SH_TopDataArg[] = {0 , 0};
char *nameFun_M_SH_TopDataArg(Term term) { return  "SH-TopDataArg" ; }
struct _ConstructionDescriptor descriptor_M_SH_TopDataArg = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_SH_TopDataArg), conBindOffs_M_SH_TopDataArg, &nameFun_M_SH_TopDataArg, &step_M_SH_TopDataArg};

int step_M_SH_TopDataArg(Sink sink__V169, Term term__V170)
{
  int term__V170_count = LINK_COUNT(term__V170); permitUnusedInt(term__V170_count);
  Term sub__V171 = FORCE(sink__V169->context, SUB(term__V170, 0));
  EnumOf_M_Reified_xFormArgument choice__V172 = (IS_VARIABLE_USE(sub__V171) ? VarOf_M_Reified_xFormArgument : (EnumOf_M_Reified_xFormArgument) TAG(sub__V171));
  switch (choice__V172)
  {
    case Data_M_FORM_BINDER: { /* Function SHEADER-SH-TopDataArg-1$SH-TopDataArg$FORM-BINDER case FORM-BINDER */
      ASSERT(sink__V169->context, !strcmp(SYMBOL(term__V170),  "SH-TopDataArg" ));
      Term sub__V173 = SUB(term__V170, 0); int sub__V173_count = term__V170_count*LINK_COUNT(sub__V173); permitUnusedInt(sub__V173_count);
      CRSX_CHECK_SORT(sink__V169->context, sub__V173, &sort_M_Reified_xFormArgument); ASSERT(sink__V169->context, !strcmp(SYMBOL(sub__V173),  "FORM-BINDER" ));
      Term sub__V174 = LINK(sink__V169->context, SUB(sub__V173, 0)); int sub__V174_count = sub__V173_count*LINK_COUNT(sub__V174); permitUnusedInt(sub__V174_count);
      CRSX_CHECK_SORT(sink__V169->context, sub__V174, &sort_M_Reified_xKind); /* sub__V174 = &#0-0 */
      Term sub__V175 = LINK(sink__V169->context, SUB(sub__V173, 1)); int sub__V175_count = sub__V173_count*LINK_COUNT(sub__V175); permitUnusedInt(sub__V175_count);
      CRSX_CHECK_SORT(sink__V169->context, sub__V175, &sort_M_Reified_xSort); /* sub__V175 = &#0-1 */
      Variable y__V176 = linkVariable(sink__V169->context, BINDER(sub__V173,2,0)); if (sub__V173_count <= 1) UNBIND(y__V176);
      Term sub__V177 = LINK(sink__V169->context, SUB(sub__V173, 2)); int sub__V177_count = sub__V173_count*LINK_COUNT(sub__V177); permitUnusedInt(sub__V177_count);
      CRSX_CHECK_SORT(sink__V169->context, sub__V177, &sort_M_Reified_xFormArgument); /* sub__V177 = &#0-2 */
      
      NamedPropertyLink namedP__V178 = LINK_NamedPropertyLink(sink__V169->context, NAMED_PROPERTIES(term__V170));
      VariablePropertyLink varP__V179 = LINK_VariablePropertyLink(sink__V169->context, VARIABLE_PROPERTIES(term__V170));
      UNLINK(sink__V169->context, term__V170);
      ADD_PROPERTIES(sink__V169, LINK_NamedPropertyLink(sink__V169->context, namedP__V178), LINK_VariablePropertyLink(sink__V169->context, varP__V179));
      { START(sink__V169, _M_SH_TopDataArg_s2);
        COPY(sink__V169, sub__V174);COPY(sink__V169, sub__V175);{ if (!IS_BOUND(y__V176)) { REBIND(linkVariable(sink__V169->context, y__V176));
            Variable binds__V180[1] = {y__V176}; BINDS(sink__V169, 1, binds__V180);
            COPY(sink__V169, sub__V177); /* REUSED SUBSTITUTION */  }
          else { Variable b__V181 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V169->context,"b__V181");
            Variable binds__V182[1] = {b__V181}; BINDS(sink__V169, 1, binds__V182);
            {
              Term arg__V183;
              { Sink buf__V184 = ALLOCA_BUFFER(sink__V169->context);
                USE(buf__V184, linkVariable(buf__V184->context, b__V181));
                arg__V183 = BUFFER_TERM(buf__V184); FREE_BUFFER(buf__V184); }
              Variable vars__V185[1] = {y__V176};
              Term args__V186[1] = {arg__V183};
              struct _SubstitutionFrame substitution__V187 = {NULL, 0, 1, vars__V185, args__V186};
              SUBSTITUTE(sink__V169, sub__V177, &substitution__V187); }
                }
           }
        END(sink__V169, _M_SH_TopDataArg_s2); }
      UNLINK_NamedPropertyLink(sink__V169->context, namedP__V178); 
      UNLINK_VariablePropertyLink(sink__V169->context, varP__V179); unlinkVariable(sink__V169->context, y__V176);
      
      return 1;
    break; } case Data_M_FORM_ARGUMENT: { /* Function SHEADER-SH-TopDataArg-2$SH-TopDataArg$FORM-ARGUMENT case FORM-ARGUMENT */
      ASSERT(sink__V169->context, !strcmp(SYMBOL(term__V170),  "SH-TopDataArg" ));
      Term sub__V188 = SUB(term__V170, 0); int sub__V188_count = term__V170_count*LINK_COUNT(sub__V188); permitUnusedInt(sub__V188_count);
      CRSX_CHECK_SORT(sink__V169->context, sub__V188, &sort_M_Reified_xFormArgument); ASSERT(sink__V169->context, !strcmp(SYMBOL(sub__V188),  "FORM-ARGUMENT" ));
      Term sub__V189 = LINK(sink__V169->context, SUB(sub__V188, 0)); int sub__V189_count = sub__V188_count*LINK_COUNT(sub__V189); permitUnusedInt(sub__V189_count);
      CRSX_CHECK_SORT(sink__V169->context, sub__V189, &sort_M_Reified_xSort); /* sub__V189 = &#0-0 */
      
      NamedPropertyLink namedP__V190 = LINK_NamedPropertyLink(sink__V169->context, NAMED_PROPERTIES(term__V170));
      VariablePropertyLink varP__V191 = LINK_VariablePropertyLink(sink__V169->context, VARIABLE_PROPERTIES(term__V170));
      UNLINK(sink__V169->context, term__V170);
      ADD_PROPERTIES(sink__V169, LINK_NamedPropertyLink(sink__V169->context, namedP__V190), LINK_VariablePropertyLink(sink__V169->context, varP__V191));
      { START(sink__V169, _M_SH_TopDataArg_s1);
        COPY(sink__V169, sub__V189);END(sink__V169, _M_SH_TopDataArg_s1); }
      UNLINK_NamedPropertyLink(sink__V169->context, namedP__V190); 
      UNLINK_VariablePropertyLink(sink__V169->context, varP__V191);
      
      return 1;
    } default: break;
  }
  return 0;
}

#ifdef __cplusplus
}
#endif
/* END OF C RULES FOR CRSX CRSXC MODULE SHEADER. */
