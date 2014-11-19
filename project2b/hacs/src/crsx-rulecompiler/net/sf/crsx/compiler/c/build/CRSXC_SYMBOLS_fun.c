/* C RULES FOR CRSX CRSXC MODULE SYMBOLS. */
#include "CRSXC.h" 
#ifdef __cplusplus
extern "C" {
#endif

/* FUNCTION ComputeSymbols$1. */
int conBindOffs_M_ComputeSymbols_s1[] = {0 , 0 , 0};
char *nameFun_M_ComputeSymbols_s1(Term term) { return  "ComputeSymbols$1" ; }
struct _ConstructionDescriptor descriptor_M_ComputeSymbols_s1 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_ComputeSymbols_s1), conBindOffs_M_ComputeSymbols_s1, &nameFun_M_ComputeSymbols_s1, &step_M_ComputeSymbols_s1};

int step_M_ComputeSymbols_s1(Sink sink__V1, Term term__V2)
{
  int term__V2_count = LINK_COUNT(term__V2); permitUnusedInt(term__V2_count);
  do {
    /* Contraction rule SYMBOLS-ComputeSymbols-1. */
    ASSERT(sink__V1->context, !strcmp(SYMBOL(term__V2),  "ComputeSymbols$1" ));
    Term sub__V3 = LINK(sink__V1->context, SUB(term__V2, 0)); int sub__V3_count = term__V2_count*LINK_COUNT(sub__V3); permitUnusedInt(sub__V3_count);
    /* sub__V3 = &#11 */
    Term sub__V4 = LINK(sink__V1->context, SUB(term__V2, 1)); int sub__V4_count = term__V2_count*LINK_COUNT(sub__V4); permitUnusedInt(sub__V4_count);
    /* sub__V4 = &#12 */
    
    NamedPropertyLink namedP__V5 = LINK_NamedPropertyLink(sink__V1->context, NAMED_PROPERTIES(term__V2));
    VariablePropertyLink varP__V6 = LINK_VariablePropertyLink(sink__V1->context, VARIABLE_PROPERTIES(term__V2));
    UNLINK(sink__V1->context, term__V2);
    { START(sink__V1, _M_ComputeSymbols2);
      COPY(sink__V1, sub__V3);COPY(sink__V1, sub__V4);{ Term term__V7;
        { char *value__V8 = getEnvValue(sink__V1->context,  "MODULE" );
          if (value__V8) term__V7 = makeStringLiteral(sink__V1->context, value__V8);
          else {term__V7 = makeStringLiteral(sink__V1->context,  "" ); }
        }
        COPY(sink__V1, term__V7); /*CONSERVATIVE*/ }
      END(sink__V1, _M_ComputeSymbols2); }
    UNLINK_NamedPropertyLink(sink__V1->context, namedP__V5); 
    UNLINK_VariablePropertyLink(sink__V1->context, varP__V6);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Data. */
int conBindOffs_M_X_Data[] = {0 , 0 , 0};
char *nameFun_M_X_Data(Term term) { return  "X-Data" ; }
struct _ConstructionDescriptor descriptor_M_X_Data = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_X_Data), conBindOffs_M_X_Data, &nameFun_M_X_Data, &step_M_X_Data};

int step_M_X_Data(Sink sink__V9, Term term__V10)
{
  int term__V10_count = LINK_COUNT(term__V10); permitUnusedInt(term__V10_count);
  Term sub__V11 = FORCE(sink__V9->context, SUB(term__V10, 0));
  EnumOf_M_Reified_xSort choice__V12 = (IS_VARIABLE_USE(sub__V11) ? VarOf_M_Reified_xSort : (EnumOf_M_Reified_xSort) TAG(sub__V11));
  switch (choice__V12)
  {
    case Data_M_SORT: { /* Function SYMBOLS-X-Data-1$X-Data$SORT case SORT */
      ASSERT(sink__V9->context, !strcmp(SYMBOL(term__V10),  "X-Data" ));
      Term sub__V13 = SUB(term__V10, 0); int sub__V13_count = term__V10_count*LINK_COUNT(sub__V13); permitUnusedInt(sub__V13_count);
      CRSX_CHECK_SORT(sink__V9->context, sub__V13, &sort_M_Reified_xSort); ASSERT(sink__V9->context, !strcmp(SYMBOL(sub__V13),  "SORT" ));
      Term sub__V14 = LINK(sink__V9->context, SUB(sub__V13, 0)); int sub__V14_count = sub__V13_count*LINK_COUNT(sub__V14); permitUnusedInt(sub__V14_count);
      /* sub__V14 = &#0-0 */
      Term sub__V15 = LINK(sink__V9->context, SUB(sub__V13, 1)); int sub__V15_count = sub__V13_count*LINK_COUNT(sub__V15); permitUnusedInt(sub__V15_count);
      /* sub__V15 = &#0-1 */
      Term sub__V16 = LINK(sink__V9->context, SUB(term__V10, 1)); int sub__V16_count = term__V10_count*LINK_COUNT(sub__V16); permitUnusedInt(sub__V16_count);
      /* sub__V16 = &#2 */
      
      NamedPropertyLink namedP__V17 = LINK_NamedPropertyLink(sink__V9->context, NAMED_PROPERTIES(term__V10));
      VariablePropertyLink varP__V18 = LINK_VariablePropertyLink(sink__V9->context, VARIABLE_PROPERTIES(term__V10));
      UNLINK(sink__V9->context, term__V10);
      ADD_PROPERTIES(sink__V9, LINK_NamedPropertyLink(sink__V9->context, namedP__V17), LINK_VariablePropertyLink(sink__V9->context, varP__V18));
      { START(sink__V9, _M_X_Data_s1);
        COPY(sink__V9, sub__V14);COPY(sink__V9, sub__V15);COPY(sink__V9, sub__V16);END(sink__V9, _M_X_Data_s1); }
      UNLINK_NamedPropertyLink(sink__V9->context, namedP__V17); 
      UNLINK_VariablePropertyLink(sink__V9->context, varP__V18);
      
      return 1;
    break; } case Data_M_SORT_PROPERTY: { /* Function SYMBOLS-X-Data-2$X-Data$SORT-PROPERTY case SORT-PROPERTY */
      ASSERT(sink__V9->context, !strcmp(SYMBOL(term__V10),  "X-Data" ));
      Term sub__V19 = SUB(term__V10, 0); int sub__V19_count = term__V10_count*LINK_COUNT(sub__V19); permitUnusedInt(sub__V19_count);
      CRSX_CHECK_SORT(sink__V9->context, sub__V19, &sort_M_Reified_xSort); ASSERT(sink__V9->context, !strcmp(SYMBOL(sub__V19),  "SORT-PROPERTY" ));
      Term sub__V20 = LINK(sink__V9->context, SUB(sub__V19, 0)); int sub__V20_count = sub__V19_count*LINK_COUNT(sub__V20); permitUnusedInt(sub__V20_count);
      CRSX_CHECK_SORT(sink__V9->context, sub__V20, &sort_M_Reified_xSort); /* sub__V20 = &#0-0 */
      Term sub__V21 = LINK(sink__V9->context, SUB(sub__V19, 1)); int sub__V21_count = sub__V19_count*LINK_COUNT(sub__V21); permitUnusedInt(sub__V21_count);
      CRSX_CHECK_SORT(sink__V9->context, sub__V21, &sort_M_Reified_xSort); /* sub__V21 = &#0-1 */
      Term sub__V22 = LINK(sink__V9->context, SUB(sub__V19, 2)); int sub__V22_count = sub__V19_count*LINK_COUNT(sub__V22); permitUnusedInt(sub__V22_count);
      CRSX_CHECK_SORT(sink__V9->context, sub__V22, &sort_M_Reified_xSort); /* sub__V22 = &#0-2 */
      Term sub__V23 = LINK(sink__V9->context, SUB(term__V10, 1)); int sub__V23_count = term__V10_count*LINK_COUNT(sub__V23); permitUnusedInt(sub__V23_count);
      /* sub__V23 = &#3 */
      
      NamedPropertyLink namedP__V24 = LINK_NamedPropertyLink(sink__V9->context, NAMED_PROPERTIES(term__V10));
      VariablePropertyLink varP__V25 = LINK_VariablePropertyLink(sink__V9->context, VARIABLE_PROPERTIES(term__V10));
      UNLINK(sink__V9->context, term__V10);
      ADD_PROPERTIES(sink__V9, LINK_NamedPropertyLink(sink__V9->context, namedP__V24), LINK_VariablePropertyLink(sink__V9->context, varP__V25));
      { START(sink__V9, _M_X_Data_s2);
        COPY(sink__V9, sub__V20);COPY(sink__V9, sub__V21);COPY(sink__V9, sub__V22);COPY(sink__V9, sub__V23);END(sink__V9, _M_X_Data_s2); }
      UNLINK_NamedPropertyLink(sink__V9->context, namedP__V24); 
      UNLINK_VariablePropertyLink(sink__V9->context, varP__V25);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION X-Declaration. */
int conBindOffs_M_X_Declaration[] = {0 , 0};
char *nameFun_M_X_Declaration(Term term) { return  "X-Declaration" ; }
struct _ConstructionDescriptor descriptor_M_X_Declaration = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_X_Declaration), conBindOffs_M_X_Declaration, &nameFun_M_X_Declaration, &step_M_X_Declaration};

int step_M_X_Declaration(Sink sink__V26, Term term__V27)
{
  int term__V27_count = LINK_COUNT(term__V27); permitUnusedInt(term__V27_count);
  Term sub__V28 = FORCE(sink__V26->context, SUB(term__V27, 0));
  EnumOf_M_Reified_xDeclaration choice__V29 = (IS_VARIABLE_USE(sub__V28) ? VarOf_M_Reified_xDeclaration : (EnumOf_M_Reified_xDeclaration) TAG(sub__V28));
  switch (choice__V29)
  {
    case Data_M_DATA: { /* Function SYMBOLS-Data$X-Declaration$DATA case DATA */
      ASSERT(sink__V26->context, !strcmp(SYMBOL(term__V27),  "X-Declaration" ));
      Term sub__V30 = SUB(term__V27, 0); int sub__V30_count = term__V27_count*LINK_COUNT(sub__V30); permitUnusedInt(sub__V30_count);
      CRSX_CHECK_SORT(sink__V26->context, sub__V30, &sort_M_Reified_xDeclaration); ASSERT(sink__V26->context, !strcmp(SYMBOL(sub__V30),  "DATA" ));
      Term sub__V31 = LINK(sink__V26->context, SUB(sub__V30, 0)); int sub__V31_count = sub__V30_count*LINK_COUNT(sub__V31); permitUnusedInt(sub__V31_count);
      CRSX_CHECK_SORT(sink__V26->context, sub__V31, &sort_M_Reified_xSort); /* sub__V31 = &#0-0 */
      Term sub__V32 = LINK(sink__V26->context, SUB(sub__V30, 1)); int sub__V32_count = sub__V30_count*LINK_COUNT(sub__V32); permitUnusedInt(sub__V32_count);
      /* sub__V32 = &#0-1 */
      
      NamedPropertyLink namedP__V33 = LINK_NamedPropertyLink(sink__V26->context, NAMED_PROPERTIES(term__V27));
      VariablePropertyLink varP__V34 = LINK_VariablePropertyLink(sink__V26->context, VARIABLE_PROPERTIES(term__V27));
      UNLINK(sink__V26->context, term__V27);
      ADD_PROPERTIES(sink__V26, LINK_NamedPropertyLink(sink__V26->context, namedP__V33), LINK_VariablePropertyLink(sink__V26->context, varP__V34));
      { START(sink__V26, _M_X_Declaration_s1);
        COPY(sink__V26, sub__V31);COPY(sink__V26, sub__V32);END(sink__V26, _M_X_Declaration_s1); }
      UNLINK_NamedPropertyLink(sink__V26->context, namedP__V33); 
      UNLINK_VariablePropertyLink(sink__V26->context, varP__V34);
      
      return 1;
    break; } case Data_M_FUNCTION: { /* Function SYMBOLS-Function$X-Declaration$FUNCTION case FUNCTION */
      ASSERT(sink__V26->context, !strcmp(SYMBOL(term__V27),  "X-Declaration" ));
      Term sub__V35 = SUB(term__V27, 0); int sub__V35_count = term__V27_count*LINK_COUNT(sub__V35); permitUnusedInt(sub__V35_count);
      CRSX_CHECK_SORT(sink__V26->context, sub__V35, &sort_M_Reified_xDeclaration); ASSERT(sink__V26->context, !strcmp(SYMBOL(sub__V35),  "FUNCTION" ));
      Term sub__V36 = LINK(sink__V26->context, SUB(sub__V35, 0)); int sub__V36_count = sub__V35_count*LINK_COUNT(sub__V36); permitUnusedInt(sub__V36_count);
      /* sub__V36 = &#0-0 */
      Term sub__V37 = LINK(sink__V26->context, SUB(sub__V35, 1)); int sub__V37_count = sub__V35_count*LINK_COUNT(sub__V37); permitUnusedInt(sub__V37_count);
      /* sub__V37 = &#0-1 */
      Term sub__V38 = LINK(sink__V26->context, SUB(sub__V35, 2)); int sub__V38_count = sub__V35_count*LINK_COUNT(sub__V38); permitUnusedInt(sub__V38_count);
      /* sub__V38 = &#0-2 */
      Term sub__V39 = LINK(sink__V26->context, SUB(sub__V35, 3)); int sub__V39_count = sub__V35_count*LINK_COUNT(sub__V39); permitUnusedInt(sub__V39_count);
      /* sub__V39 = &#0-3 */
      Term sub__V40 = LINK(sink__V26->context, SUB(sub__V35, 4)); int sub__V40_count = sub__V35_count*LINK_COUNT(sub__V40); permitUnusedInt(sub__V40_count);
      /* sub__V40 = &#0-4 */
      Term sub__V41 = LINK(sink__V26->context, SUB(sub__V35, 5)); int sub__V41_count = sub__V35_count*LINK_COUNT(sub__V41); permitUnusedInt(sub__V41_count);
      CRSX_CHECK_SORT(sink__V26->context, sub__V41, &sort_M_Reified_xSort); /* sub__V41 = &#0-5 */
      Term sub__V42 = LINK(sink__V26->context, SUB(sub__V35, 6)); int sub__V42_count = sub__V35_count*LINK_COUNT(sub__V42); permitUnusedInt(sub__V42_count);
      /* sub__V42 = &#0-6 */
      
      NamedPropertyLink namedP__V43 = LINK_NamedPropertyLink(sink__V26->context, NAMED_PROPERTIES(term__V27));
      VariablePropertyLink varP__V44 = LINK_VariablePropertyLink(sink__V26->context, VARIABLE_PROPERTIES(term__V27));
      UNLINK(sink__V26->context, term__V27);
      ADD_PROPERTIES(sink__V26, LINK_NamedPropertyLink(sink__V26->context, namedP__V43), LINK_VariablePropertyLink(sink__V26->context, varP__V44));
      { START(sink__V26, _M_X_Declaration_s2);
        COPY(sink__V26, sub__V36);COPY(sink__V26, sub__V37);COPY(sink__V26, sub__V38);COPY(sink__V26, sub__V39);COPY(sink__V26, sub__V40);COPY(sink__V26, sub__V41);COPY(sink__V26, sub__V42);END(sink__V26, _M_X_Declaration_s2); }
      UNLINK_NamedPropertyLink(sink__V26->context, namedP__V43); 
      UNLINK_VariablePropertyLink(sink__V26->context, varP__V44);
      
      return 1;
    break; } case Data_M_POLYMORPHIC: { /* Function SYMBOLS-Polymorphic$X-Declaration$POLYMORPHIC case POLYMORPHIC */
      ASSERT(sink__V26->context, !strcmp(SYMBOL(term__V27),  "X-Declaration" ));
      Term sub__V45 = SUB(term__V27, 0); int sub__V45_count = term__V27_count*LINK_COUNT(sub__V45); permitUnusedInt(sub__V45_count);
      CRSX_CHECK_SORT(sink__V26->context, sub__V45, &sort_M_Reified_xDeclaration); ASSERT(sink__V26->context, !strcmp(SYMBOL(sub__V45),  "POLYMORPHIC" ));
      Variable y__V46 = linkVariable(sink__V26->context, BINDER(sub__V45,0,0)); if (sub__V45_count <= 1) UNBIND(y__V46);
      Term sub__V47 = LINK(sink__V26->context, SUB(sub__V45, 0)); int sub__V47_count = sub__V45_count*LINK_COUNT(sub__V47); permitUnusedInt(sub__V47_count);
      CRSX_CHECK_SORT(sink__V26->context, sub__V47, &sort_M_Reified_xDeclaration); /* sub__V47 = &#0-0 */
      
      NamedPropertyLink namedP__V48 = LINK_NamedPropertyLink(sink__V26->context, NAMED_PROPERTIES(term__V27));
      VariablePropertyLink varP__V49 = LINK_VariablePropertyLink(sink__V26->context, VARIABLE_PROPERTIES(term__V27));
      UNLINK(sink__V26->context, term__V27);
      ADD_PROPERTIES(sink__V26, LINK_NamedPropertyLink(sink__V26->context, namedP__V48), LINK_VariablePropertyLink(sink__V26->context, varP__V49));
      { START(sink__V26, _M_X_Declaration_s3);
        { if (!IS_BOUND(y__V46)) { REBIND(linkVariable(sink__V26->context, y__V46));
            Variable binds__V50[1] = {y__V46}; BINDS(sink__V26, 1, binds__V50);
            COPY(sink__V26, sub__V47); /* REUSED SUBSTITUTION */  }
          else { Variable b__V51 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V26->context,"b__V51");
            Variable binds__V52[1] = {b__V51}; BINDS(sink__V26, 1, binds__V52);
            {
              Term arg__V53;
              { Sink buf__V54 = ALLOCA_BUFFER(sink__V26->context);
                USE(buf__V54, linkVariable(buf__V54->context, b__V51));
                arg__V53 = BUFFER_TERM(buf__V54); FREE_BUFFER(buf__V54); }
              Variable vars__V55[1] = {y__V46};
              Term args__V56[1] = {arg__V53};
              struct _SubstitutionFrame substitution__V57 = {NULL, 0, 1, vars__V55, args__V56};
              SUBSTITUTE(sink__V26, sub__V47, &substitution__V57); }
                }
           }
        END(sink__V26, _M_X_Declaration_s3); }
      UNLINK_NamedPropertyLink(sink__V26->context, namedP__V48); 
      UNLINK_VariablePropertyLink(sink__V26->context, varP__V49); unlinkVariable(sink__V26->context, y__V46);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION X-Function. */
int conBindOffs_M_X_Function[] = {0 , 0 , 0 , 0 , 0 , 0 , 0};
char *nameFun_M_X_Function(Term term) { return  "X-Function" ; }
struct _ConstructionDescriptor descriptor_M_X_Function = {&sort_M_Reified_xVariable, 0, 6, sizeof(STRUCT_Con_M_X_Function), conBindOffs_M_X_Function, &nameFun_M_X_Function, &step_M_X_Function};

int step_M_X_Function(Sink sink__V58, Term term__V59)
{
  int term__V59_count = LINK_COUNT(term__V59); permitUnusedInt(term__V59_count);
  do {
    /* Contraction rule SYMBOLS-X-Function-1. */
    ASSERT(sink__V58->context, !strcmp(SYMBOL(term__V59),  "X-Function" ));
    Term sub__V60 = SUB(term__V59, 0); int sub__V60_count = term__V59_count*LINK_COUNT(sub__V60); permitUnusedInt(sub__V60_count);
    /* sub__V60 = &#1 */
    Term sub__V61 = SUB(term__V59, 1); int sub__V61_count = term__V59_count*LINK_COUNT(sub__V61); permitUnusedInt(sub__V61_count);
    /* sub__V61 = &#2 */
    Term sub__V62 = SUB(term__V59, 2); int sub__V62_count = term__V59_count*LINK_COUNT(sub__V62); permitUnusedInt(sub__V62_count);
    /* sub__V62 = &#3 */
    Term sub__V63 = LINK(sink__V58->context, SUB(term__V59, 3)); int sub__V63_count = term__V59_count*LINK_COUNT(sub__V63); permitUnusedInt(sub__V63_count);
    /* sub__V63 = &#4 */
    Term sub__V64 = SUB(term__V59, 4); int sub__V64_count = term__V59_count*LINK_COUNT(sub__V64); permitUnusedInt(sub__V64_count);
    CRSX_CHECK_SORT(sink__V58->context, sub__V64, &sort_M_Reified_xSort); /* sub__V64 = &#5 */
    Term sub__V65 = SUB(term__V59, 5); int sub__V65_count = term__V59_count*LINK_COUNT(sub__V65); permitUnusedInt(sub__V65_count);
    /* sub__V65 = &#6 */
    
    NamedPropertyLink namedP__V66 = LINK_NamedPropertyLink(sink__V58->context, NAMED_PROPERTIES(term__V59));
    VariablePropertyLink varP__V67 = LINK_VariablePropertyLink(sink__V58->context, VARIABLE_PROPERTIES(term__V59));
    UNLINK(sink__V58->context, term__V59);
    { START(sink__V58, _M__sTextCons);
      { START(sink__V58, _M__sTextEmbed);
        { START(sink__V58, _M_AsText);
          { START(sink__V58, _M_MapText_s1);
            COPY(sink__V58, sub__V63);{ Variable x__V68 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V58->context,"x__V68");
              Variable binds__V69[1] = {x__V68}; BINDS(sink__V58, 1, binds__V69);
              { START(sink__V58, _M_X_Form);
                USE(sink__V58, linkVariable(sink__V58->context, x__V68));
                END(sink__V58, _M_X_Form); }
               }
            END(sink__V58, _M_MapText_s1); }
          END(sink__V58, _M_AsText); }
        END(sink__V58, _M__sTextEmbed); }
      { START(sink__V58, _M__sTextNil); END(sink__V58, _M__sTextNil); }
      END(sink__V58, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V58->context, namedP__V66); 
    UNLINK_VariablePropertyLink(sink__V58->context, varP__V67);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Declarations. */
int conBindOffs_M_X_Declarations[] = {0 , 0};
char *nameFun_M_X_Declarations(Term term) { return  "X-Declarations" ; }
struct _ConstructionDescriptor descriptor_M_X_Declarations = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_X_Declarations), conBindOffs_M_X_Declarations, &nameFun_M_X_Declarations, &step_M_X_Declarations};

int step_M_X_Declarations(Sink sink__V70, Term term__V71)
{
  int term__V71_count = LINK_COUNT(term__V71); permitUnusedInt(term__V71_count);
  Term sub__V72 = FORCE(sink__V70->context, SUB(term__V71, 0));
  EnumOf_M__sList choice__V73 = (IS_VARIABLE_USE(sub__V72) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V72));
  switch (choice__V73)
  {
    case Data_M__sCons: { /* Function SYMBOLS-X-Declarations-1$X-Declarations$$Cons case $Cons */
      ASSERT(sink__V70->context, !strcmp(SYMBOL(term__V71),  "X-Declarations" ));
      Term sub__V74 = SUB(term__V71, 0); int sub__V74_count = term__V71_count*LINK_COUNT(sub__V74); permitUnusedInt(sub__V74_count);
      ASSERT(sink__V70->context, !strcmp(SYMBOL(sub__V74),  "$Cons" ));
      Term sub__V75 = LINK(sink__V70->context, SUB(sub__V74, 0)); int sub__V75_count = sub__V74_count*LINK_COUNT(sub__V75); permitUnusedInt(sub__V75_count);
      /* sub__V75 = &#0-0 */
      Term sub__V76 = LINK(sink__V70->context, SUB(sub__V74, 1)); int sub__V76_count = sub__V74_count*LINK_COUNT(sub__V76); permitUnusedInt(sub__V76_count);
      /* sub__V76 = &#0-1 */
      
      NamedPropertyLink namedP__V77 = LINK_NamedPropertyLink(sink__V70->context, NAMED_PROPERTIES(term__V71));
      VariablePropertyLink varP__V78 = LINK_VariablePropertyLink(sink__V70->context, VARIABLE_PROPERTIES(term__V71));
      UNLINK(sink__V70->context, term__V71);
      ADD_PROPERTIES(sink__V70, LINK_NamedPropertyLink(sink__V70->context, namedP__V77), LINK_VariablePropertyLink(sink__V70->context, varP__V78));
      { START(sink__V70, _M_X_Declarations_s1);
        COPY(sink__V70, sub__V75);COPY(sink__V70, sub__V76);END(sink__V70, _M_X_Declarations_s1); }
      UNLINK_NamedPropertyLink(sink__V70->context, namedP__V77); 
      UNLINK_VariablePropertyLink(sink__V70->context, varP__V78);
      
      return 1;
    break; } case Data_M__sNil: { /* Function SYMBOLS-X-Declarations-2$X-Declarations$$Nil case $Nil */
      ASSERT(sink__V70->context, !strcmp(SYMBOL(term__V71),  "X-Declarations" ));
      Term sub__V79 = SUB(term__V71, 0); int sub__V79_count = term__V71_count*LINK_COUNT(sub__V79); permitUnusedInt(sub__V79_count);
      ASSERT(sink__V70->context, !strcmp(SYMBOL(sub__V79),  "$Nil" ));
      
      NamedPropertyLink namedP__V80 = LINK_NamedPropertyLink(sink__V70->context, NAMED_PROPERTIES(term__V71));
      VariablePropertyLink varP__V81 = LINK_VariablePropertyLink(sink__V70->context, VARIABLE_PROPERTIES(term__V71));
      UNLINK(sink__V70->context, term__V71);
      ADD_PROPERTIES(sink__V70, LINK_NamedPropertyLink(sink__V70->context, namedP__V80), LINK_VariablePropertyLink(sink__V70->context, varP__V81));
      { START(sink__V70, _M_X_Declarations_s2);
        END(sink__V70, _M_X_Declarations_s2); }
      UNLINK_NamedPropertyLink(sink__V70->context, namedP__V80); 
      UNLINK_VariablePropertyLink(sink__V70->context, varP__V81);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION ComputeSymbols. */
int conBindOffs_M_ComputeSymbols[] = {0 , 0};
char *nameFun_M_ComputeSymbols(Term term) { return  "ComputeSymbols" ; }
struct _ConstructionDescriptor descriptor_M_ComputeSymbols = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_ComputeSymbols), conBindOffs_M_ComputeSymbols, &nameFun_M_ComputeSymbols, &step_M_ComputeSymbols};

int step_M_ComputeSymbols(Sink sink__V82, Term term__V83)
{
  int term__V83_count = LINK_COUNT(term__V83); permitUnusedInt(term__V83_count);
  Term sub__V84 = FORCE(sink__V82->context, SUB(term__V83, 0));
  EnumOf_M_Reify_xCRSX choice__V85 = (IS_VARIABLE_USE(sub__V84) ? VarOf_M_Reify_xCRSX : (EnumOf_M_Reify_xCRSX) TAG(sub__V84));
  switch (choice__V85)
  {
    case Data_M_CRSX: { /* Function SYMBOLS-ComputeSymbols-1$ComputeSymbols$CRSX case CRSX */
      ASSERT(sink__V82->context, !strcmp(SYMBOL(term__V83),  "ComputeSymbols" ));
      Term sub__V86 = SUB(term__V83, 0); int sub__V86_count = term__V83_count*LINK_COUNT(sub__V86); permitUnusedInt(sub__V86_count);
      CRSX_CHECK_SORT(sink__V82->context, sub__V86, &sort_M_Reify_xCRSX); ASSERT(sink__V82->context, !strcmp(SYMBOL(sub__V86),  "CRSX" ));
      Term sub__V87 = LINK(sink__V82->context, SUB(sub__V86, 0)); int sub__V87_count = sub__V86_count*LINK_COUNT(sub__V87); permitUnusedInt(sub__V87_count);
      /* sub__V87 = &#0-0 */
      Term sub__V88 = LINK(sink__V82->context, SUB(sub__V86, 1)); int sub__V88_count = sub__V86_count*LINK_COUNT(sub__V88); permitUnusedInt(sub__V88_count);
      /* sub__V88 = &#0-1 */
      
      NamedPropertyLink namedP__V89 = LINK_NamedPropertyLink(sink__V82->context, NAMED_PROPERTIES(term__V83));
      VariablePropertyLink varP__V90 = LINK_VariablePropertyLink(sink__V82->context, VARIABLE_PROPERTIES(term__V83));
      UNLINK(sink__V82->context, term__V83);
      ADD_PROPERTIES(sink__V82, LINK_NamedPropertyLink(sink__V82->context, namedP__V89), LINK_VariablePropertyLink(sink__V82->context, varP__V90));
      { START(sink__V82, _M_ComputeSymbols_s1);
        COPY(sink__V82, sub__V87);COPY(sink__V82, sub__V88);END(sink__V82, _M_ComputeSymbols_s1); }
      UNLINK_NamedPropertyLink(sink__V82->context, namedP__V89); 
      UNLINK_VariablePropertyLink(sink__V82->context, varP__V90);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION X-Form. */
int conBindOffs_M_X_Form[] = {0 , 0};
char *nameFun_M_X_Form(Term term) { return  "X-Form" ; }
struct _ConstructionDescriptor descriptor_M_X_Form = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_X_Form), conBindOffs_M_X_Form, &nameFun_M_X_Form, &step_M_X_Form};

int step_M_X_Form(Sink sink__V91, Term term__V92)
{
  int term__V92_count = LINK_COUNT(term__V92); permitUnusedInt(term__V92_count);
  Term sub__V93 = FORCE(sink__V91->context, SUB(term__V92, 0));
  EnumOf_M_Reified_xForm choice__V94 = (IS_VARIABLE_USE(sub__V93) ? VarOf_M_Reified_xForm : (EnumOf_M_Reified_xForm) TAG(sub__V93));
  switch (choice__V94)
  {
    case Data_M_SORT_SET: { /* Function SYMBOLS-X-Form-1$X-Form$SORT-SET case SORT-SET */
      ASSERT(sink__V91->context, !strcmp(SYMBOL(term__V92),  "X-Form" ));
      Term sub__V95 = SUB(term__V92, 0); int sub__V95_count = term__V92_count*LINK_COUNT(sub__V95); permitUnusedInt(sub__V95_count);
      CRSX_CHECK_SORT(sink__V91->context, sub__V95, &sort_M_Reified_xForm); ASSERT(sink__V91->context, !strcmp(SYMBOL(sub__V95),  "SORT-SET" ));
      Term sub__V96 = LINK(sink__V91->context, SUB(sub__V95, 0)); int sub__V96_count = sub__V95_count*LINK_COUNT(sub__V96); permitUnusedInt(sub__V96_count);
      CRSX_CHECK_SORT(sink__V91->context, sub__V96, &sort_M_Reified_xSort); /* sub__V96 = &#0-0 */
      Term sub__V97 = LINK(sink__V91->context, SUB(sub__V95, 1)); int sub__V97_count = sub__V95_count*LINK_COUNT(sub__V97); permitUnusedInt(sub__V97_count);
      CRSX_CHECK_SORT(sink__V91->context, sub__V97, &sort_M_Reified_xSort); /* sub__V97 = &#0-1 */
      Term sub__V98 = LINK(sink__V91->context, SUB(sub__V95, 2)); int sub__V98_count = sub__V95_count*LINK_COUNT(sub__V98); permitUnusedInt(sub__V98_count);
      CRSX_CHECK_SORT(sink__V91->context, sub__V98, &sort_M_Reified_xForm); /* sub__V98 = &#0-2 */
      
      NamedPropertyLink namedP__V99 = LINK_NamedPropertyLink(sink__V91->context, NAMED_PROPERTIES(term__V92));
      VariablePropertyLink varP__V100 = LINK_VariablePropertyLink(sink__V91->context, VARIABLE_PROPERTIES(term__V92));
      UNLINK(sink__V91->context, term__V92);
      ADD_PROPERTIES(sink__V91, LINK_NamedPropertyLink(sink__V91->context, namedP__V99), LINK_VariablePropertyLink(sink__V91->context, varP__V100));
      { START(sink__V91, _M_X_Form_s6);
        COPY(sink__V91, sub__V96);COPY(sink__V91, sub__V97);COPY(sink__V91, sub__V98);END(sink__V91, _M_X_Form_s6); }
      UNLINK_NamedPropertyLink(sink__V91->context, namedP__V99); 
      UNLINK_VariablePropertyLink(sink__V91->context, varP__V100);
      
      return 1;
    break; } case Data_M_SORT_ALLOWS_VARIABLES: { /* Function SYMBOLS-X-Form-2$X-Form$SORT-ALLOWS-VARIABLES case SORT-ALLOWS-VARIABLES */
      ASSERT(sink__V91->context, !strcmp(SYMBOL(term__V92),  "X-Form" ));
      Term sub__V101 = SUB(term__V92, 0); int sub__V101_count = term__V92_count*LINK_COUNT(sub__V101); permitUnusedInt(sub__V101_count);
      CRSX_CHECK_SORT(sink__V91->context, sub__V101, &sort_M_Reified_xForm); ASSERT(sink__V91->context, !strcmp(SYMBOL(sub__V101),  "SORT-ALLOWS-VARIABLES" ));
      
      NamedPropertyLink namedP__V102 = LINK_NamedPropertyLink(sink__V91->context, NAMED_PROPERTIES(term__V92));
      VariablePropertyLink varP__V103 = LINK_VariablePropertyLink(sink__V91->context, VARIABLE_PROPERTIES(term__V92));
      UNLINK(sink__V91->context, term__V92);
      ADD_PROPERTIES(sink__V91, LINK_NamedPropertyLink(sink__V91->context, namedP__V102), LINK_VariablePropertyLink(sink__V91->context, varP__V103));
      { START(sink__V91, _M_X_Form_s5); END(sink__V91, _M_X_Form_s5); }
      UNLINK_NamedPropertyLink(sink__V91->context, namedP__V102); 
      UNLINK_VariablePropertyLink(sink__V91->context, varP__V103);
      
      return 1;
    break; } case Data_M_FORM: { /* Function SYMBOLS-X-Form-3$X-Form$FORM case FORM */
      ASSERT(sink__V91->context, !strcmp(SYMBOL(term__V92),  "X-Form" ));
      Term sub__V104 = SUB(term__V92, 0); int sub__V104_count = term__V92_count*LINK_COUNT(sub__V104); permitUnusedInt(sub__V104_count);
      CRSX_CHECK_SORT(sink__V91->context, sub__V104, &sort_M_Reified_xForm); ASSERT(sink__V91->context, !strcmp(SYMBOL(sub__V104),  "FORM" ));
      Term sub__V105 = LINK(sink__V91->context, SUB(sub__V104, 0)); int sub__V105_count = sub__V104_count*LINK_COUNT(sub__V105); permitUnusedInt(sub__V105_count);
      /* sub__V105 = &#0-0 */
      Term sub__V106 = LINK(sink__V91->context, SUB(sub__V104, 1)); int sub__V106_count = sub__V104_count*LINK_COUNT(sub__V106); permitUnusedInt(sub__V106_count);
      /* sub__V106 = &#0-1 */
      
      NamedPropertyLink namedP__V107 = LINK_NamedPropertyLink(sink__V91->context, NAMED_PROPERTIES(term__V92));
      VariablePropertyLink varP__V108 = LINK_VariablePropertyLink(sink__V91->context, VARIABLE_PROPERTIES(term__V92));
      UNLINK(sink__V91->context, term__V92);
      ADD_PROPERTIES(sink__V91, LINK_NamedPropertyLink(sink__V91->context, namedP__V107), LINK_VariablePropertyLink(sink__V91->context, varP__V108));
      { START(sink__V91, _M_X_Form_s2);
        COPY(sink__V91, sub__V106);COPY(sink__V91, sub__V105);END(sink__V91, _M_X_Form_s2); }
      UNLINK_NamedPropertyLink(sink__V91->context, namedP__V107); 
      UNLINK_VariablePropertyLink(sink__V91->context, varP__V108);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION X-Data$2. */
int conBindOffs_M_X_Data_s2[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_X_Data_s2(Term term) { return  "X-Data$2" ; }
struct _ConstructionDescriptor descriptor_M_X_Data_s2 = {&sort_M_Reified_xVariable, 0, 4, sizeof(STRUCT_Con_M_X_Data_s2), conBindOffs_M_X_Data_s2, &nameFun_M_X_Data_s2, &step_M_X_Data_s2};

int step_M_X_Data_s2(Sink sink__V109, Term term__V110)
{
  int term__V110_count = LINK_COUNT(term__V110); permitUnusedInt(term__V110_count);
  do {
    /* Contraction rule SYMBOLS-X-Data-2. */
    ASSERT(sink__V109->context, !strcmp(SYMBOL(term__V110),  "X-Data$2" ));
    Term sub__V111 = SUB(term__V110, 0); int sub__V111_count = term__V110_count*LINK_COUNT(sub__V111); permitUnusedInt(sub__V111_count);
    CRSX_CHECK_SORT(sink__V109->context, sub__V111, &sort_M_Reified_xSort); /* sub__V111 = &#11 */
    Term sub__V112 = SUB(term__V110, 1); int sub__V112_count = term__V110_count*LINK_COUNT(sub__V112); permitUnusedInt(sub__V112_count);
    CRSX_CHECK_SORT(sink__V109->context, sub__V112, &sort_M_Reified_xSort); /* sub__V112 = &#12 */
    Term sub__V113 = LINK(sink__V109->context, SUB(term__V110, 2)); int sub__V113_count = term__V110_count*LINK_COUNT(sub__V113); permitUnusedInt(sub__V113_count);
    CRSX_CHECK_SORT(sink__V109->context, sub__V113, &sort_M_Reified_xSort); /* sub__V113 = &#13 */
    Term sub__V114 = LINK(sink__V109->context, SUB(term__V110, 3)); int sub__V114_count = term__V110_count*LINK_COUNT(sub__V114); permitUnusedInt(sub__V114_count);
    /* sub__V114 = &#2 */
    
    NamedPropertyLink namedP__V115 = LINK_NamedPropertyLink(sink__V109->context, NAMED_PROPERTIES(term__V110));
    VariablePropertyLink varP__V116 = LINK_VariablePropertyLink(sink__V109->context, VARIABLE_PROPERTIES(term__V110));
    UNLINK(sink__V109->context, term__V110);
    { START(sink__V109, _M_X_Data);
      COPY(sink__V109, sub__V113);COPY(sink__V109, sub__V114);END(sink__V109, _M_X_Data); }
    UNLINK_NamedPropertyLink(sink__V109->context, namedP__V115); 
    UNLINK_VariablePropertyLink(sink__V109->context, varP__V116);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Data$1. */
int conBindOffs_M_X_Data_s1[] = {0 , 0 , 0 , 0};
char *nameFun_M_X_Data_s1(Term term) { return  "X-Data$1" ; }
struct _ConstructionDescriptor descriptor_M_X_Data_s1 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_X_Data_s1), conBindOffs_M_X_Data_s1, &nameFun_M_X_Data_s1, &step_M_X_Data_s1};

int step_M_X_Data_s1(Sink sink__V117, Term term__V118)
{
  int term__V118_count = LINK_COUNT(term__V118); permitUnusedInt(term__V118_count);
  do {
    /* Contraction rule SYMBOLS-X-Data-1. */
    ASSERT(sink__V117->context, !strcmp(SYMBOL(term__V118),  "X-Data$1" ));
    Term sub__V119 = SUB(term__V118, 0); int sub__V119_count = term__V118_count*LINK_COUNT(sub__V119); permitUnusedInt(sub__V119_count);
    /* sub__V119 = &#11 */
    Term sub__V120 = SUB(term__V118, 1); int sub__V120_count = term__V118_count*LINK_COUNT(sub__V120); permitUnusedInt(sub__V120_count);
    /* sub__V120 = &#12 */
    Term sub__V121 = LINK(sink__V117->context, SUB(term__V118, 2)); int sub__V121_count = term__V118_count*LINK_COUNT(sub__V121); permitUnusedInt(sub__V121_count);
    /* sub__V121 = &#2 */
    
    NamedPropertyLink namedP__V122 = LINK_NamedPropertyLink(sink__V117->context, NAMED_PROPERTIES(term__V118));
    VariablePropertyLink varP__V123 = LINK_VariablePropertyLink(sink__V117->context, VARIABLE_PROPERTIES(term__V118));
    UNLINK(sink__V117->context, term__V118);
    { START(sink__V117, _M__sTextCons);
      { START(sink__V117, _M__sTextEmbed);
        { START(sink__V117, _M_AsText);
          { START(sink__V117, _M_MapText_s1);
            COPY(sink__V117, sub__V121);{ Variable x__V124 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V117->context,"x__V124");
              Variable binds__V125[1] = {x__V124}; BINDS(sink__V117, 1, binds__V125);
              { START(sink__V117, _M_X_Form);
                USE(sink__V117, linkVariable(sink__V117->context, x__V124));
                END(sink__V117, _M_X_Form); }
               }
            END(sink__V117, _M_MapText_s1); }
          END(sink__V117, _M_AsText); }
        END(sink__V117, _M__sTextEmbed); }
      { START(sink__V117, _M__sTextNil);
        END(sink__V117, _M__sTextNil); }
      END(sink__V117, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V117->context, namedP__V122); 
    UNLINK_VariablePropertyLink(sink__V117->context, varP__V123);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Form$5. */
int conBindOffs_M_X_Form_s5[] = {0};
char *nameFun_M_X_Form_s5(Term term) { return  "X-Form$5" ; }
struct _ConstructionDescriptor descriptor_M_X_Form_s5 = {&sort_M_Reified_xVariable, 0, 0, sizeof(STRUCT_Con_M_X_Form_s5), conBindOffs_M_X_Form_s5, &nameFun_M_X_Form_s5, &step_M_X_Form_s5};

int step_M_X_Form_s5(Sink sink__V126, Term term__V127)
{
  int term__V127_count = LINK_COUNT(term__V127); permitUnusedInt(term__V127_count);
  do {
    /* Contraction rule SYMBOLS-X-Form-2. */
    ASSERT(sink__V126->context, !strcmp(SYMBOL(term__V127),  "X-Form$5" ));
    
    NamedPropertyLink namedP__V128 = LINK_NamedPropertyLink(sink__V126->context, NAMED_PROPERTIES(term__V127));
    VariablePropertyLink varP__V129 = LINK_VariablePropertyLink(sink__V126->context, VARIABLE_PROPERTIES(term__V127));
    UNLINK(sink__V126->context, term__V127);
    { START(sink__V126, _M__sTextNil); END(sink__V126, _M__sTextNil); }
    UNLINK_NamedPropertyLink(sink__V126->context, namedP__V128); 
    UNLINK_VariablePropertyLink(sink__V126->context, varP__V129);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Form$6. */
int conBindOffs_M_X_Form_s6[] = {0 , 0 , 0 , 0};
char *nameFun_M_X_Form_s6(Term term) { return  "X-Form$6" ; }
struct _ConstructionDescriptor descriptor_M_X_Form_s6 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_X_Form_s6), conBindOffs_M_X_Form_s6, &nameFun_M_X_Form_s6, &step_M_X_Form_s6};

int step_M_X_Form_s6(Sink sink__V130, Term term__V131)
{
  int term__V131_count = LINK_COUNT(term__V131); permitUnusedInt(term__V131_count);
  do {
    /* Contraction rule SYMBOLS-X-Form-1. */
    ASSERT(sink__V130->context, !strcmp(SYMBOL(term__V131),  "X-Form$6" ));
    Term sub__V132 = SUB(term__V131, 0); int sub__V132_count = term__V131_count*LINK_COUNT(sub__V132); permitUnusedInt(sub__V132_count);
    CRSX_CHECK_SORT(sink__V130->context, sub__V132, &sort_M_Reified_xSort); /* sub__V132 = &#11 */
    Term sub__V133 = SUB(term__V131, 1); int sub__V133_count = term__V131_count*LINK_COUNT(sub__V133); permitUnusedInt(sub__V133_count);
    CRSX_CHECK_SORT(sink__V130->context, sub__V133, &sort_M_Reified_xSort); /* sub__V133 = &#12 */
    Term sub__V134 = LINK(sink__V130->context, SUB(term__V131, 2)); int sub__V134_count = term__V131_count*LINK_COUNT(sub__V134); permitUnusedInt(sub__V134_count);
    CRSX_CHECK_SORT(sink__V130->context, sub__V134, &sort_M_Reified_xForm); /* sub__V134 = &#13 */
    
    NamedPropertyLink namedP__V135 = LINK_NamedPropertyLink(sink__V130->context, NAMED_PROPERTIES(term__V131));
    VariablePropertyLink varP__V136 = LINK_VariablePropertyLink(sink__V130->context, VARIABLE_PROPERTIES(term__V131));
    UNLINK(sink__V130->context, term__V131);
    { START(sink__V130, _M_X_Form);
      COPY(sink__V130, sub__V134);END(sink__V130, _M_X_Form); }
    UNLINK_NamedPropertyLink(sink__V130->context, namedP__V135); 
    UNLINK_VariablePropertyLink(sink__V130->context, varP__V136);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Form$3. */
int conBindOffs_M_X_Form_s3[] = {0 , 0 , 0 , 0};
char *nameFun_M_X_Form_s3(Term term) { return  "X-Form$3" ; }
struct _ConstructionDescriptor descriptor_M_X_Form_s3 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_X_Form_s3), conBindOffs_M_X_Form_s3, &nameFun_M_X_Form_s3, &step_M_X_Form_s3};

int step_M_X_Form_s3(Sink sink__V137, Term term__V138)
{
  int term__V138_count = LINK_COUNT(term__V138); permitUnusedInt(term__V138_count);
  do {
    /* Contraction rule SYMBOLS-X-Form-4. */
    ASSERT(sink__V137->context, !strcmp(SYMBOL(term__V138),  "X-Form$3" ));
    Term sub__V139 = SUB(term__V138, 0); int sub__V139_count = term__V138_count*LINK_COUNT(sub__V139); permitUnusedInt(sub__V139_count);
    /* sub__V139 = &#121 */
    Term sub__V140 = SUB(term__V138, 1); int sub__V140_count = term__V138_count*LINK_COUNT(sub__V140); permitUnusedInt(sub__V140_count);
    /* sub__V140 = &#122 */
    Term sub__V141 = LINK(sink__V137->context, SUB(term__V138, 2)); int sub__V141_count = term__V138_count*LINK_COUNT(sub__V141); permitUnusedInt(sub__V141_count);
    UNLINK_SUB(sink__V137->context, term__V138,  2); NORMALIZE(sink__V137->context, sub__V141); SUB(term__V138,  2) = LINK(sink__V137->context, sub__V141);
    /* sub__V141 = &#11 */
    
    NamedPropertyLink namedP__V142 = LINK_NamedPropertyLink(sink__V137->context, NAMED_PROPERTIES(term__V138));
    VariablePropertyLink varP__V143 = LINK_VariablePropertyLink(sink__V137->context, VARIABLE_PROPERTIES(term__V138));
    UNLINK(sink__V137->context, term__V138);
    { START(sink__V137, _M__sTextCons);
      { START(sink__V137, _M__sTextBreak);
        LITERAL(sink__V137,  "\n" ); END(sink__V137, _M__sTextBreak); }
      { START(sink__V137, _M__sTextCons);
        { START(sink__V137, _M__sTextChars);
          LITERAL(sink__V137,  "{" ); END(sink__V137, _M__sTextChars); }
        { START(sink__V137, _M__sTextCons);
          { START(sink__V137, _M__sTextEmbed);
            { START(sink__V137, _M_AsText);
              { START(sink__V137, _M_STRING);
                COPY(sink__V137, LINK(sink__V137->context, sub__V141));END(sink__V137, _M_STRING); }
              END(sink__V137, _M_AsText); }
            END(sink__V137, _M__sTextEmbed); }
          { START(sink__V137, _M__sTextCons);
            { START(sink__V137, _M__sTextChars);
              LITERAL(sink__V137,  ", &" ); END(sink__V137, _M__sTextChars); }
            { START(sink__V137, _M__sTextCons);
              { START(sink__V137, _M__sTextEmbed);
                { START(sink__V137, _M_AsText);
                  { START(sink__V137, _M_Descriptor);
                    COPY(sink__V137, sub__V141);END(sink__V137, _M_Descriptor); }
                  END(sink__V137, _M_AsText); }
                END(sink__V137, _M__sTextEmbed); }
              { START(sink__V137, _M__sTextCons);
                { START(sink__V137, _M__sTextChars);
                  LITERAL(sink__V137,  "}," ); END(sink__V137, _M__sTextChars); }
                { START(sink__V137, _M__sTextNil);
                  END(sink__V137, _M__sTextNil); }
                END(sink__V137, _M__sTextCons); }
              END(sink__V137, _M__sTextCons); }
            END(sink__V137, _M__sTextCons); }
          END(sink__V137, _M__sTextCons); }
        END(sink__V137, _M__sTextCons); }
      END(sink__V137, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V137->context, namedP__V142); 
    UNLINK_VariablePropertyLink(sink__V137->context, varP__V143);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Form$4. */
int conBindOffs_M_X_Form_s4[] = {0 , 0};
char *nameFun_M_X_Form_s4(Term term) { return  "X-Form$4" ; }
struct _ConstructionDescriptor descriptor_M_X_Form_s4 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_X_Form_s4), conBindOffs_M_X_Form_s4, &nameFun_M_X_Form_s4, &step_M_X_Form_s4};

int step_M_X_Form_s4(Sink sink__V144, Term term__V145)
{
  int term__V145_count = LINK_COUNT(term__V145); permitUnusedInt(term__V145_count);
  do {
    /* Contraction rule SYMBOLS-X-Form-3. */
    ASSERT(sink__V144->context, !strcmp(SYMBOL(term__V145),  "X-Form$4" ));
    Term sub__V146 = LINK(sink__V144->context, SUB(term__V145, 0)); int sub__V146_count = term__V145_count*LINK_COUNT(sub__V146); permitUnusedInt(sub__V146_count);
    UNLINK_SUB(sink__V144->context, term__V145,  0); NORMALIZE(sink__V144->context, sub__V146); SUB(term__V145,  0) = LINK(sink__V144->context, sub__V146);
    /* sub__V146 = &#11 */
    
    NamedPropertyLink namedP__V147 = LINK_NamedPropertyLink(sink__V144->context, NAMED_PROPERTIES(term__V145));
    VariablePropertyLink varP__V148 = LINK_VariablePropertyLink(sink__V144->context, VARIABLE_PROPERTIES(term__V145));
    UNLINK(sink__V144->context, term__V145);
    { START(sink__V144, _M__sTextCons);
      { START(sink__V144, _M__sTextBreak);
        LITERAL(sink__V144,  "\n" ); END(sink__V144, _M__sTextBreak); }
      { START(sink__V144, _M__sTextCons);
        { START(sink__V144, _M__sTextChars);
          LITERAL(sink__V144,  "{" ); END(sink__V144, _M__sTextChars); }
        { START(sink__V144, _M__sTextCons);
          { START(sink__V144, _M__sTextEmbed);
            { START(sink__V144, _M_AsText);
              { START(sink__V144, _M_STRING);
                COPY(sink__V144, LINK(sink__V144->context, sub__V146));END(sink__V144, _M_STRING); }
              END(sink__V144, _M_AsText); }
            END(sink__V144, _M__sTextEmbed); }
          { START(sink__V144, _M__sTextCons);
            { START(sink__V144, _M__sTextChars);
              LITERAL(sink__V144,  ", &" ); END(sink__V144, _M__sTextChars); }
            { START(sink__V144, _M__sTextCons);
              { START(sink__V144, _M__sTextEmbed);
                { START(sink__V144, _M_AsText);
                  { START(sink__V144, _M_Descriptor);
                    COPY(sink__V144, sub__V146);END(sink__V144, _M_Descriptor); }
                  END(sink__V144, _M_AsText); }
                END(sink__V144, _M__sTextEmbed); }
              { START(sink__V144, _M__sTextCons);
                { START(sink__V144, _M__sTextChars);
                  LITERAL(sink__V144,  "}," ); END(sink__V144, _M__sTextChars); }
                { START(sink__V144, _M__sTextNil);
                  END(sink__V144, _M__sTextNil); }
                END(sink__V144, _M__sTextCons); }
              END(sink__V144, _M__sTextCons); }
            END(sink__V144, _M__sTextCons); }
          END(sink__V144, _M__sTextCons); }
        END(sink__V144, _M__sTextCons); }
      END(sink__V144, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V144->context, namedP__V147); 
    UNLINK_VariablePropertyLink(sink__V144->context, varP__V148);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Form$2. */
int conBindOffs_M_X_Form_s2[] = {0 , 0 , 0};
char *nameFun_M_X_Form_s2(Term term) { return  "X-Form$2" ; }
struct _ConstructionDescriptor descriptor_M_X_Form_s2 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_X_Form_s2), conBindOffs_M_X_Form_s2, &nameFun_M_X_Form_s2, &step_M_X_Form_s2};

int step_M_X_Form_s2(Sink sink__V149, Term term__V150)
{
  int term__V150_count = LINK_COUNT(term__V150); permitUnusedInt(term__V150_count);
  Term sub__V151 = FORCE(sink__V149->context, SUB(term__V150, 0));
  EnumOf_M__sList choice__V152 = (IS_VARIABLE_USE(sub__V151) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V151));
  switch (choice__V152)
  {
    case Data_M__sNil: { /* Function SYMBOLS-X-Form-3$X-Form$2$$Nil case $Nil */
      ASSERT(sink__V149->context, !strcmp(SYMBOL(term__V150),  "X-Form$2" ));
      Term sub__V153 = SUB(term__V150, 0); int sub__V153_count = term__V150_count*LINK_COUNT(sub__V153); permitUnusedInt(sub__V153_count);
      ASSERT(sink__V149->context, !strcmp(SYMBOL(sub__V153),  "$Nil" ));
      Term sub__V154 = LINK(sink__V149->context, SUB(term__V150, 1)); int sub__V154_count = term__V150_count*LINK_COUNT(sub__V154); permitUnusedInt(sub__V154_count);
      /* sub__V154 = &#0 */
      
      NamedPropertyLink namedP__V155 = LINK_NamedPropertyLink(sink__V149->context, NAMED_PROPERTIES(term__V150));
      VariablePropertyLink varP__V156 = LINK_VariablePropertyLink(sink__V149->context, VARIABLE_PROPERTIES(term__V150));
      UNLINK(sink__V149->context, term__V150);
      ADD_PROPERTIES(sink__V149, LINK_NamedPropertyLink(sink__V149->context, namedP__V155), LINK_VariablePropertyLink(sink__V149->context, varP__V156));
      { START(sink__V149, _M_X_Form_s4);
        COPY(sink__V149, sub__V154);END(sink__V149, _M_X_Form_s4); }
      UNLINK_NamedPropertyLink(sink__V149->context, namedP__V155); 
      UNLINK_VariablePropertyLink(sink__V149->context, varP__V156);
      
      return 1;
    break; } case Data_M__sCons: { /* Function SYMBOLS-X-Form-4$X-Form$2$$Cons case $Cons */
      ASSERT(sink__V149->context, !strcmp(SYMBOL(term__V150),  "X-Form$2" ));
      Term sub__V157 = SUB(term__V150, 0); int sub__V157_count = term__V150_count*LINK_COUNT(sub__V157); permitUnusedInt(sub__V157_count);
      ASSERT(sink__V149->context, !strcmp(SYMBOL(sub__V157),  "$Cons" ));
      Term sub__V158 = LINK(sink__V149->context, SUB(sub__V157, 0)); int sub__V158_count = sub__V157_count*LINK_COUNT(sub__V158); permitUnusedInt(sub__V158_count);
      /* sub__V158 = &#0-0 */
      Term sub__V159 = LINK(sink__V149->context, SUB(sub__V157, 1)); int sub__V159_count = sub__V157_count*LINK_COUNT(sub__V159); permitUnusedInt(sub__V159_count);
      /* sub__V159 = &#0-1 */
      Term sub__V160 = LINK(sink__V149->context, SUB(term__V150, 1)); int sub__V160_count = term__V150_count*LINK_COUNT(sub__V160); permitUnusedInt(sub__V160_count);
      /* sub__V160 = &#2 */
      
      NamedPropertyLink namedP__V161 = LINK_NamedPropertyLink(sink__V149->context, NAMED_PROPERTIES(term__V150));
      VariablePropertyLink varP__V162 = LINK_VariablePropertyLink(sink__V149->context, VARIABLE_PROPERTIES(term__V150));
      UNLINK(sink__V149->context, term__V150);
      ADD_PROPERTIES(sink__V149, LINK_NamedPropertyLink(sink__V149->context, namedP__V161), LINK_VariablePropertyLink(sink__V149->context, varP__V162));
      { START(sink__V149, _M_X_Form_s3);
        COPY(sink__V149, sub__V158);COPY(sink__V149, sub__V159);COPY(sink__V149, sub__V160);END(sink__V149, _M_X_Form_s3); }
      UNLINK_NamedPropertyLink(sink__V149->context, namedP__V161); 
      UNLINK_VariablePropertyLink(sink__V149->context, varP__V162);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION X-Declaration$3. */
int conBindOffs_M_X_Declaration_s3[] = {0 , 1};
char *nameFun_M_X_Declaration_s3(Term term) { return  "X-Declaration$3" ; }
struct _ConstructionDescriptor descriptor_M_X_Declaration_s3 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_X_Declaration_s3), conBindOffs_M_X_Declaration_s3, &nameFun_M_X_Declaration_s3, &step_M_X_Declaration_s3};

int step_M_X_Declaration_s3(Sink sink__V163, Term term__V164)
{
  int term__V164_count = LINK_COUNT(term__V164); permitUnusedInt(term__V164_count);
  do {
    /* Contraction rule SYMBOLS-Polymorphic. */
    ASSERT(sink__V163->context, !strcmp(SYMBOL(term__V164),  "X-Declaration$3" ));
    Variable x__V165 = linkVariable(sink__V163->context, BINDER(term__V164,0,0)); if (term__V164_count <= 1) UNBIND(x__V165);
    Term sub__V166 = LINK(sink__V163->context, SUB(term__V164, 0)); int sub__V166_count = term__V164_count*LINK_COUNT(sub__V166); permitUnusedInt(sub__V166_count);
    CRSX_CHECK_SORT(sink__V163->context, sub__V166, &sort_M_Reified_xDeclaration); /* sub__V166 = &#11 */
    Variable y__V167 = x__V165; permitUnusedVariable(y__V167);
    
    NamedPropertyLink namedP__V168 = LINK_NamedPropertyLink(sink__V163->context, NAMED_PROPERTIES(term__V164));
    VariablePropertyLink varP__V169 = LINK_VariablePropertyLink(sink__V163->context, VARIABLE_PROPERTIES(term__V164));
    UNLINK(sink__V163->context, term__V164);
    { START(sink__V163, _M_X_Declaration);
      COPY(sink__V163, sub__V166); /* REUSED SUBSTITUTION */ END(sink__V163, _M_X_Declaration); }
    UNLINK_NamedPropertyLink(sink__V163->context, namedP__V168); 
    UNLINK_VariablePropertyLink(sink__V163->context, varP__V169); unlinkVariable(sink__V163->context, x__V165);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Declaration$1. */
int conBindOffs_M_X_Declaration_s1[] = {0 , 0 , 0};
char *nameFun_M_X_Declaration_s1(Term term) { return  "X-Declaration$1" ; }
struct _ConstructionDescriptor descriptor_M_X_Declaration_s1 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_X_Declaration_s1), conBindOffs_M_X_Declaration_s1, &nameFun_M_X_Declaration_s1, &step_M_X_Declaration_s1};

int step_M_X_Declaration_s1(Sink sink__V170, Term term__V171)
{
  int term__V171_count = LINK_COUNT(term__V171); permitUnusedInt(term__V171_count);
  do {
    /* Contraction rule SYMBOLS-Data. */
    ASSERT(sink__V170->context, !strcmp(SYMBOL(term__V171),  "X-Declaration$1" ));
    Term sub__V172 = LINK(sink__V170->context, SUB(term__V171, 0)); int sub__V172_count = term__V171_count*LINK_COUNT(sub__V172); permitUnusedInt(sub__V172_count);
    CRSX_CHECK_SORT(sink__V170->context, sub__V172, &sort_M_Reified_xSort); /* sub__V172 = &#11 */
    Term sub__V173 = LINK(sink__V170->context, SUB(term__V171, 1)); int sub__V173_count = term__V171_count*LINK_COUNT(sub__V173); permitUnusedInt(sub__V173_count);
    /* sub__V173 = &#12 */
    
    NamedPropertyLink namedP__V174 = LINK_NamedPropertyLink(sink__V170->context, NAMED_PROPERTIES(term__V171));
    VariablePropertyLink varP__V175 = LINK_VariablePropertyLink(sink__V170->context, VARIABLE_PROPERTIES(term__V171));
    UNLINK(sink__V170->context, term__V171);
    { START(sink__V170, _M_X_Data);
      COPY(sink__V170, sub__V172);COPY(sink__V170, sub__V173);END(sink__V170, _M_X_Data); }
    UNLINK_NamedPropertyLink(sink__V170->context, namedP__V174); 
    UNLINK_VariablePropertyLink(sink__V170->context, varP__V175);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Declaration$2. */
int conBindOffs_M_X_Declaration_s2[] = {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0};
char *nameFun_M_X_Declaration_s2(Term term) { return  "X-Declaration$2" ; }
struct _ConstructionDescriptor descriptor_M_X_Declaration_s2 = {&sort_M_Reified_xVariable, 0, 7, sizeof(STRUCT_Con_M_X_Declaration_s2), conBindOffs_M_X_Declaration_s2, &nameFun_M_X_Declaration_s2, &step_M_X_Declaration_s2};

int step_M_X_Declaration_s2(Sink sink__V176, Term term__V177)
{
  int term__V177_count = LINK_COUNT(term__V177); permitUnusedInt(term__V177_count);
  do {
    /* Contraction rule SYMBOLS-Function. */
    ASSERT(sink__V176->context, !strcmp(SYMBOL(term__V177),  "X-Declaration$2" ));
    Term sub__V178 = LINK(sink__V176->context, SUB(term__V177, 0)); int sub__V178_count = term__V177_count*LINK_COUNT(sub__V178); permitUnusedInt(sub__V178_count);
    /* sub__V178 = &#11 */
    Term sub__V179 = LINK(sink__V176->context, SUB(term__V177, 1)); int sub__V179_count = term__V177_count*LINK_COUNT(sub__V179); permitUnusedInt(sub__V179_count);
    /* sub__V179 = &#12 */
    Term sub__V180 = SUB(term__V177, 2); int sub__V180_count = term__V177_count*LINK_COUNT(sub__V180); permitUnusedInt(sub__V180_count);
    /* sub__V180 = &#13 */
    Term sub__V181 = LINK(sink__V176->context, SUB(term__V177, 3)); int sub__V181_count = term__V177_count*LINK_COUNT(sub__V181); permitUnusedInt(sub__V181_count);
    /* sub__V181 = &#14 */
    Term sub__V182 = LINK(sink__V176->context, SUB(term__V177, 4)); int sub__V182_count = term__V177_count*LINK_COUNT(sub__V182); permitUnusedInt(sub__V182_count);
    /* sub__V182 = &#15 */
    Term sub__V183 = LINK(sink__V176->context, SUB(term__V177, 5)); int sub__V183_count = term__V177_count*LINK_COUNT(sub__V183); permitUnusedInt(sub__V183_count);
    CRSX_CHECK_SORT(sink__V176->context, sub__V183, &sort_M_Reified_xSort); /* sub__V183 = &#16 */
    Term sub__V184 = LINK(sink__V176->context, SUB(term__V177, 6)); int sub__V184_count = term__V177_count*LINK_COUNT(sub__V184); permitUnusedInt(sub__V184_count);
    /* sub__V184 = &#17 */
    
    NamedPropertyLink namedP__V185 = LINK_NamedPropertyLink(sink__V176->context, NAMED_PROPERTIES(term__V177));
    VariablePropertyLink varP__V186 = LINK_VariablePropertyLink(sink__V176->context, VARIABLE_PROPERTIES(term__V177));
    UNLINK(sink__V176->context, term__V177);
    { START(sink__V176, _M_X_Function);
      COPY(sink__V176, sub__V178);COPY(sink__V176, sub__V179);COPY(sink__V176, sub__V181);COPY(sink__V176, sub__V182);COPY(sink__V176, sub__V183);COPY(sink__V176, sub__V184);END(sink__V176, _M_X_Function); }
    UNLINK_NamedPropertyLink(sink__V176->context, namedP__V185); 
    UNLINK_VariablePropertyLink(sink__V176->context, varP__V186);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION ComputeSymbols2. */
int conBindOffs_M_ComputeSymbols2[] = {0 , 0 , 0 , 0};
char *nameFun_M_ComputeSymbols2(Term term) { return  "ComputeSymbols2" ; }
struct _ConstructionDescriptor descriptor_M_ComputeSymbols2 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_ComputeSymbols2), conBindOffs_M_ComputeSymbols2, &nameFun_M_ComputeSymbols2, &step_M_ComputeSymbols2};

int step_M_ComputeSymbols2(Sink sink__V187, Term term__V188)
{
  int term__V188_count = LINK_COUNT(term__V188); permitUnusedInt(term__V188_count);
  do {
    /* Contraction rule SYMBOLS-ComputeSymbols2-1. */
    ASSERT(sink__V187->context, !strcmp(SYMBOL(term__V188),  "ComputeSymbols2" ));
    Term sub__V189 = SUB(term__V188, 0); int sub__V189_count = term__V188_count*LINK_COUNT(sub__V189); permitUnusedInt(sub__V189_count);
    /* sub__V189 = &#1 */
    Term sub__V190 = LINK(sink__V187->context, SUB(term__V188, 1)); int sub__V190_count = term__V188_count*LINK_COUNT(sub__V190); permitUnusedInt(sub__V190_count);
    /* sub__V190 = &#2 */
    Term sub__V191 = SUB(term__V188, 2); int sub__V191_count = term__V188_count*LINK_COUNT(sub__V191); permitUnusedInt(sub__V191_count);
    /* sub__V191 = &#3 */
    
    NamedPropertyLink namedP__V192 = LINK_NamedPropertyLink(sink__V187->context, NAMED_PROPERTIES(term__V188));
    VariablePropertyLink varP__V193 = LINK_VariablePropertyLink(sink__V187->context, VARIABLE_PROPERTIES(term__V188));
    UNLINK(sink__V187->context, term__V188);
    { START(sink__V187, _M__sTextCons);
      { START(sink__V187, _M__sTextEmbed);
        { START(sink__V187, _M_AsText);
          { START(sink__V187, _M_X_Declarations);
            COPY(sink__V187, sub__V190);END(sink__V187, _M_X_Declarations); }
          END(sink__V187, _M_AsText); }
        END(sink__V187, _M__sTextEmbed); }
      { START(sink__V187, _M__sTextCons);
        { START(sink__V187, _M__sTextBreak);
          LITERAL(sink__V187,  "\n" ); END(sink__V187, _M__sTextBreak); }
        { START(sink__V187, _M__sTextNil);
          END(sink__V187, _M__sTextNil); }
        END(sink__V187, _M__sTextCons); }
      END(sink__V187, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V187->context, namedP__V192); 
    UNLINK_VariablePropertyLink(sink__V187->context, varP__V193);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Declarations$1. */
int conBindOffs_M_X_Declarations_s1[] = {0 , 0 , 0};
char *nameFun_M_X_Declarations_s1(Term term) { return  "X-Declarations$1" ; }
struct _ConstructionDescriptor descriptor_M_X_Declarations_s1 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_X_Declarations_s1), conBindOffs_M_X_Declarations_s1, &nameFun_M_X_Declarations_s1, &step_M_X_Declarations_s1};

int step_M_X_Declarations_s1(Sink sink__V194, Term term__V195)
{
  int term__V195_count = LINK_COUNT(term__V195); permitUnusedInt(term__V195_count);
  do {
    /* Contraction rule SYMBOLS-X-Declarations-1. */
    ASSERT(sink__V194->context, !strcmp(SYMBOL(term__V195),  "X-Declarations$1" ));
    Term sub__V196 = LINK(sink__V194->context, SUB(term__V195, 0)); int sub__V196_count = term__V195_count*LINK_COUNT(sub__V196); permitUnusedInt(sub__V196_count);
    /* sub__V196 = &#11 */
    Term sub__V197 = LINK(sink__V194->context, SUB(term__V195, 1)); int sub__V197_count = term__V195_count*LINK_COUNT(sub__V197); permitUnusedInt(sub__V197_count);
    /* sub__V197 = &#12 */
    
    NamedPropertyLink namedP__V198 = LINK_NamedPropertyLink(sink__V194->context, NAMED_PROPERTIES(term__V195));
    VariablePropertyLink varP__V199 = LINK_VariablePropertyLink(sink__V194->context, VARIABLE_PROPERTIES(term__V195));
    UNLINK(sink__V194->context, term__V195);
    { START(sink__V194, _M__sTextCons);
      { START(sink__V194, _M__sTextEmbed);
        { START(sink__V194, _M_AsText);
          { START(sink__V194, _M_X_Declaration);
            COPY(sink__V194, sub__V196);END(sink__V194, _M_X_Declaration); }
          END(sink__V194, _M_AsText); }
        END(sink__V194, _M__sTextEmbed); }
      { START(sink__V194, _M__sTextCons);
        { START(sink__V194, _M__sTextEmbed);
          { START(sink__V194, _M_AsText);
            { START(sink__V194, _M_X_Declarations);
              COPY(sink__V194, sub__V197);END(sink__V194, _M_X_Declarations); }
            END(sink__V194, _M_AsText); }
          END(sink__V194, _M__sTextEmbed); }
        { START(sink__V194, _M__sTextNil);
          END(sink__V194, _M__sTextNil); }
        END(sink__V194, _M__sTextCons); }
      END(sink__V194, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V194->context, namedP__V198); 
    UNLINK_VariablePropertyLink(sink__V194->context, varP__V199);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION X-Declarations$2. */
int conBindOffs_M_X_Declarations_s2[] = {0};
char *nameFun_M_X_Declarations_s2(Term term) { return  "X-Declarations$2" ; }
struct _ConstructionDescriptor descriptor_M_X_Declarations_s2 = {&sort_M_Reified_xVariable, 0, 0, sizeof(STRUCT_Con_M_X_Declarations_s2), conBindOffs_M_X_Declarations_s2, &nameFun_M_X_Declarations_s2, &step_M_X_Declarations_s2};

int step_M_X_Declarations_s2(Sink sink__V200, Term term__V201)
{
  int term__V201_count = LINK_COUNT(term__V201); permitUnusedInt(term__V201_count);
  do {
    /* Contraction rule SYMBOLS-X-Declarations-2. */
    ASSERT(sink__V200->context, !strcmp(SYMBOL(term__V201),  "X-Declarations$2" ));
    
    NamedPropertyLink namedP__V202 = LINK_NamedPropertyLink(sink__V200->context, NAMED_PROPERTIES(term__V201));
    VariablePropertyLink varP__V203 = LINK_VariablePropertyLink(sink__V200->context, VARIABLE_PROPERTIES(term__V201));
    UNLINK(sink__V200->context, term__V201);
    { START(sink__V200, _M__sTextNil); END(sink__V200, _M__sTextNil); }
    UNLINK_NamedPropertyLink(sink__V200->context, namedP__V202); 
    UNLINK_VariablePropertyLink(sink__V200->context, varP__V203);
    return 1;
  } while (0);
  return 0;
}

#ifdef __cplusplus
}
#endif
/* END OF C RULES FOR CRSX CRSXC MODULE SYMBOLS. */
