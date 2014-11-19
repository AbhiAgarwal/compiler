/* C RULES FOR CRSX CRSXC MODULE Text. */
#include "CRSXC.h" 
#ifdef __cplusplus
extern "C" {
#endif

/* FUNCTION Text-Print1. */
int conBindOffs_M_Text_Print1[] = {0 , 0 , 0};
char *nameFun_M_Text_Print1(Term term) { return  "Text-Print1" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print1 = {NULL, 0, 2, sizeof(STRUCT_Con_M_Text_Print1), conBindOffs_M_Text_Print1, &nameFun_M_Text_Print1, &step_M_Text_Print1};

int step_M_Text_Print1(Sink sink__V1, Term term__V2)
{
  int term__V2_count = LINK_COUNT(term__V2); permitUnusedInt(term__V2_count);
  Term sub__V3 = FORCE(sink__V1->context, SUB(term__V2, 0));
  EnumOf_M_Reified_xVariable choice__V4 = (IS_VARIABLE_USE(sub__V3) ? VarOf_M_Reified_xVariable : (EnumOf_M_Reified_xVariable) TAG(sub__V3));
  switch (choice__V4)
  {
    case Data_M__sTextCons: { /* Function Text-Print1-5$Text-Print1$$TextCons case $TextCons */
      ASSERT(sink__V1->context, !strcmp(SYMBOL(term__V2),  "Text-Print1" ));
      Term sub__V5 = SUB(term__V2, 0); int sub__V5_count = term__V2_count*LINK_COUNT(sub__V5); permitUnusedInt(sub__V5_count);
      CRSX_CHECK_SORT(sink__V1->context, sub__V5, &sort_M_Reified_xVariable); ASSERT(sink__V1->context, !strcmp(SYMBOL(sub__V5),  "$TextCons" ));
      Term sub__V6 = LINK(sink__V1->context, SUB(sub__V5, 0)); int sub__V6_count = sub__V5_count*LINK_COUNT(sub__V6); permitUnusedInt(sub__V6_count);
      CRSX_CHECK_SORT(sink__V1->context, sub__V6, &sort_M_Text_Part); /* sub__V6 = &#0-0 */
      Term sub__V7 = LINK(sink__V1->context, SUB(sub__V5, 1)); int sub__V7_count = sub__V5_count*LINK_COUNT(sub__V7); permitUnusedInt(sub__V7_count);
      CRSX_CHECK_SORT(sink__V1->context, sub__V7, &sort_M_Reified_xVariable); /* sub__V7 = &#0-1 */
      
      NamedPropertyLink namedP__V8 = LINK_NamedPropertyLink(sink__V1->context, NAMED_PROPERTIES(sub__V5));
      VariablePropertyLink varP__V9 = LINK_VariablePropertyLink(sink__V1->context, VARIABLE_PROPERTIES(sub__V5));
      Term sub__V10 = LINK(sink__V1->context, SUB(term__V2, 1)); int sub__V10_count = term__V2_count*LINK_COUNT(sub__V10); permitUnusedInt(sub__V10_count);
      /* sub__V10 = &#2 */
      
      NamedPropertyLink namedP__V11 = LINK_NamedPropertyLink(sink__V1->context, NAMED_PROPERTIES(term__V2));
      VariablePropertyLink varP__V12 = LINK_VariablePropertyLink(sink__V1->context, VARIABLE_PROPERTIES(term__V2));
      UNLINK(sink__V1->context, term__V2);
      ADD_PROPERTIES(sink__V1, LINK_NamedPropertyLink(sink__V1->context, namedP__V11), LINK_VariablePropertyLink(sink__V1->context, varP__V12));
      { START(sink__V1, _M_Text_Print1_s1);
        COPY(sink__V1, sub__V6);COPY(sink__V1, sub__V7);COPY(sink__V1, sub__V10);ADD_PROPERTIES(sink__V1, LINK_NamedPropertyLink(sink__V1->context, namedP__V8), LINK_VariablePropertyLink(sink__V1->context, varP__V9));
        { START(sink__V1, _M_PropsOf_s_sTextCons);
          END(sink__V1, _M_PropsOf_s_sTextCons); }
        END(sink__V1, _M_Text_Print1_s1); }
      UNLINK_NamedPropertyLink(sink__V1->context, namedP__V11); 
      UNLINK_VariablePropertyLink(sink__V1->context, varP__V12);UNLINK_NamedPropertyLink(sink__V1->context, namedP__V8); 
      UNLINK_VariablePropertyLink(sink__V1->context, varP__V9);
      
      return 1;
    break; } case Data_M__sTextNil: { /* Function Text-Print1-8$Text-Print1$$TextNil case $TextNil */
      ASSERT(sink__V1->context, !strcmp(SYMBOL(term__V2),  "Text-Print1" ));
      Term sub__V13 = SUB(term__V2, 0); int sub__V13_count = term__V2_count*LINK_COUNT(sub__V13); permitUnusedInt(sub__V13_count);
      CRSX_CHECK_SORT(sink__V1->context, sub__V13, &sort_M_Reified_xVariable); ASSERT(sink__V1->context, !strcmp(SYMBOL(sub__V13),  "$TextNil" ));
      
      NamedPropertyLink namedP__V14 = LINK_NamedPropertyLink(sink__V1->context, NAMED_PROPERTIES(sub__V13));
      VariablePropertyLink varP__V15 = LINK_VariablePropertyLink(sink__V1->context, VARIABLE_PROPERTIES(sub__V13));
      Term sub__V16 = LINK(sink__V1->context, SUB(term__V2, 1)); int sub__V16_count = term__V2_count*LINK_COUNT(sub__V16); permitUnusedInt(sub__V16_count);
      /* sub__V16 = &#0 */
      
      NamedPropertyLink namedP__V17 = LINK_NamedPropertyLink(sink__V1->context, NAMED_PROPERTIES(term__V2));
      VariablePropertyLink varP__V18 = LINK_VariablePropertyLink(sink__V1->context, VARIABLE_PROPERTIES(term__V2));
      UNLINK(sink__V1->context, term__V2);
      ADD_PROPERTIES(sink__V1, LINK_NamedPropertyLink(sink__V1->context, namedP__V17), LINK_VariablePropertyLink(sink__V1->context, varP__V18));
      { START(sink__V1, _M_Text_Print1_s9);
        COPY(sink__V1, sub__V16);ADD_PROPERTIES(sink__V1, LINK_NamedPropertyLink(sink__V1->context, namedP__V14), LINK_VariablePropertyLink(sink__V1->context, varP__V15));
        { START(sink__V1, _M_PropsOf_s_sTextNil);
          END(sink__V1, _M_PropsOf_s_sTextNil); }
        END(sink__V1, _M_Text_Print1_s9); }
      UNLINK_NamedPropertyLink(sink__V1->context, namedP__V17); 
      UNLINK_VariablePropertyLink(sink__V1->context, varP__V18);UNLINK_NamedPropertyLink(sink__V1->context, namedP__V14); 
      UNLINK_VariablePropertyLink(sink__V1->context, varP__V15);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION Text-User. */
int conBindOffs_M_Text_User[] = {0 , 0 , 0};
char *nameFun_M_Text_User(Term term) { return  "Text-User" ; }
struct _ConstructionDescriptor descriptor_M_Text_User = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_Text_User), conBindOffs_M_Text_User, &nameFun_M_Text_User, &step_M_Text_User};

int step_M_Text_User(Sink sink__V19, Term term__V20)
{
  int term__V20_count = LINK_COUNT(term__V20); permitUnusedInt(term__V20_count);
  do {
    /* Contraction rule Text-User-1. */
    ASSERT(sink__V19->context, !strcmp(SYMBOL(term__V20),  "Text-User" ));
    Term sub__V21 = LINK(sink__V19->context, SUB(term__V20, 0)); int sub__V21_count = term__V20_count*LINK_COUNT(sub__V21); permitUnusedInt(sub__V21_count);
    /* sub__V21 = &#1 */
    Term sub__V22 = LINK(sink__V19->context, SUB(term__V20, 1)); int sub__V22_count = term__V20_count*LINK_COUNT(sub__V22); permitUnusedInt(sub__V22_count);
    CRSX_CHECK_SORT(sink__V19->context, sub__V22, &sort_M_Reified_xVariable); /* sub__V22 = &#2 */
    
    NamedPropertyLink namedP__V23 = LINK_NamedPropertyLink(sink__V19->context, NAMED_PROPERTIES(term__V20));
    VariablePropertyLink varP__V24 = LINK_VariablePropertyLink(sink__V19->context, VARIABLE_PROPERTIES(term__V20));
    UNLINK(sink__V19->context, term__V20);
    { START(sink__V19, _M__sTextCons);
      { START(sink__V19, _M__sTextChars);
        LITERAL(sink__V19,  "%" ); END(sink__V19, _M__sTextChars); }
      { START(sink__V19, _M__sTextCons);
        { START(sink__V19, _M__sTextChars);
          COPY(sink__V19, sub__V21);END(sink__V19, _M__sTextChars); }
        { START(sink__V19, _M__sTextCons);
          { START(sink__V19, _M__sTextChars);
            LITERAL(sink__V19,  "\u27ea" ); END(sink__V19, _M__sTextChars); }
          { START(sink__V19, _M__sTextCons);
            { START(sink__V19, _M__sTextEmbed);
              { START(sink__V19, _M_AsText);
                COPY(sink__V19, sub__V22);END(sink__V19, _M_AsText); }
              END(sink__V19, _M__sTextEmbed); }
            { START(sink__V19, _M__sTextCons);
              { START(sink__V19, _M__sTextChars);
                LITERAL(sink__V19,  "\u27eb" ); END(sink__V19, _M__sTextChars); }
              { START(sink__V19, _M__sTextNil);
                END(sink__V19, _M__sTextNil); }
              END(sink__V19, _M__sTextCons); }
            END(sink__V19, _M__sTextCons); }
          END(sink__V19, _M__sTextCons); }
        END(sink__V19, _M__sTextCons); }
      END(sink__V19, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V19->context, namedP__V23); 
    UNLINK_VariablePropertyLink(sink__V19->context, varP__V24);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-ReverseConcat$2. */
int conBindOffs_M_Text_ReverseConcat_s2[] = {0};
char *nameFun_M_Text_ReverseConcat_s2(Term term) { return  "Text-ReverseConcat$2" ; }
struct _ConstructionDescriptor descriptor_M_Text_ReverseConcat_s2 = {&sort_M_Reified_xVariable, 0, 0, sizeof(STRUCT_Con_M_Text_ReverseConcat_s2), conBindOffs_M_Text_ReverseConcat_s2, &nameFun_M_Text_ReverseConcat_s2, &step_M_Text_ReverseConcat_s2};

int step_M_Text_ReverseConcat_s2(Sink sink__V25, Term term__V26)
{
  int term__V26_count = LINK_COUNT(term__V26); permitUnusedInt(term__V26_count);
  do {
    /* Contraction rule Text-ReverseConcat-1. */
    ASSERT(sink__V25->context, !strcmp(SYMBOL(term__V26),  "Text-ReverseConcat$2" ));
    
    NamedPropertyLink namedP__V27 = LINK_NamedPropertyLink(sink__V25->context, NAMED_PROPERTIES(term__V26));
    VariablePropertyLink varP__V28 = LINK_VariablePropertyLink(sink__V25->context, VARIABLE_PROPERTIES(term__V26));
    UNLINK(sink__V25->context, term__V26);
    { START(sink__V25, _M__sTextNil); END(sink__V25, _M__sTextNil); } UNLINK_NamedPropertyLink(sink__V25->context, namedP__V27); 
    UNLINK_VariablePropertyLink(sink__V25->context, varP__V28);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-ReverseConcat$1. */
int conBindOffs_M_Text_ReverseConcat_s1[] = {0 , 0 , 0};
char *nameFun_M_Text_ReverseConcat_s1(Term term) { return  "Text-ReverseConcat$1" ; }
struct _ConstructionDescriptor descriptor_M_Text_ReverseConcat_s1 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_Text_ReverseConcat_s1), conBindOffs_M_Text_ReverseConcat_s1, &nameFun_M_Text_ReverseConcat_s1, &step_M_Text_ReverseConcat_s1};

int step_M_Text_ReverseConcat_s1(Sink sink__V29, Term term__V30)
{
  int term__V30_count = LINK_COUNT(term__V30); permitUnusedInt(term__V30_count);
  do {
    /* Contraction rule Text-ReverseConcat-2. */
    ASSERT(sink__V29->context, !strcmp(SYMBOL(term__V30),  "Text-ReverseConcat$1" ));
    Term sub__V31 = LINK(sink__V29->context, SUB(term__V30, 0)); int sub__V31_count = term__V30_count*LINK_COUNT(sub__V31); permitUnusedInt(sub__V31_count);
    /* sub__V31 = &#11 */
    Term sub__V32 = LINK(sink__V29->context, SUB(term__V30, 1)); int sub__V32_count = term__V30_count*LINK_COUNT(sub__V32); permitUnusedInt(sub__V32_count);
    /* sub__V32 = &#12 */
    
    NamedPropertyLink namedP__V33 = LINK_NamedPropertyLink(sink__V29->context, NAMED_PROPERTIES(term__V30));
    VariablePropertyLink varP__V34 = LINK_VariablePropertyLink(sink__V29->context, VARIABLE_PROPERTIES(term__V30));
    UNLINK(sink__V29->context, term__V30);
    { START(sink__V29, _M__sTextCons);
      { START(sink__V29, _M__sTextEmbed);
        { START(sink__V29, _M_AsText);
          { START(sink__V29, _M_Text_ReverseConcat);
            COPY(sink__V29, sub__V32);END(sink__V29, _M_Text_ReverseConcat); }
          END(sink__V29, _M_AsText); }
        END(sink__V29, _M__sTextEmbed); }
      { START(sink__V29, _M__sTextCons);
        { START(sink__V29, _M__sTextEmbed);
          { START(sink__V29, _M_AsText);
            COPY(sink__V29, sub__V31);END(sink__V29, _M_AsText); }
          END(sink__V29, _M__sTextEmbed); }
        { START(sink__V29, _M__sTextNil);
          END(sink__V29, _M__sTextNil); }
        END(sink__V29, _M__sTextCons); }
      END(sink__V29, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V29->context, namedP__V33); 
    UNLINK_VariablePropertyLink(sink__V29->context, varP__V34);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-String. */
int conBindOffs_M_Text_String[] = {0 , 0};
char *nameFun_M_Text_String(Term term) { return  "Text-String" ; }
struct _ConstructionDescriptor descriptor_M_Text_String = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Text_String), conBindOffs_M_Text_String, &nameFun_M_Text_String, &step_M_Text_String};

int step_M_Text_String(Sink sink__V35, Term term__V36)
{
  int term__V36_count = LINK_COUNT(term__V36); permitUnusedInt(term__V36_count);
  do {
    /* Contraction rule Text-String-1. */
    ASSERT(sink__V35->context, !strcmp(SYMBOL(term__V36),  "Text-String" ));
    Term sub__V37 = LINK(sink__V35->context, SUB(term__V36, 0)); int sub__V37_count = term__V36_count*LINK_COUNT(sub__V37); permitUnusedInt(sub__V37_count);
    CRSX_CHECK_SORT(sink__V35->context, sub__V37, &sort_M_Reified_xVariable); /* sub__V37 = &#1 */
    
    NamedPropertyLink namedP__V38 = LINK_NamedPropertyLink(sink__V35->context, NAMED_PROPERTIES(term__V36));
    VariablePropertyLink varP__V39 = LINK_VariablePropertyLink(sink__V35->context, VARIABLE_PROPERTIES(term__V36));
    UNLINK(sink__V35->context, term__V36);
    { START(sink__V35, _M__sTextCons);
      { START(sink__V35, _M__sTextChars);
        LITERAL(sink__V35,  "\u2020\u2020" ); END(sink__V35, _M__sTextChars); }
      { START(sink__V35, _M__sTextCons);
        { START(sink__V35, _M__sTextChars);
          LITERAL(sink__V35,  "\253253" ); END(sink__V35, _M__sTextChars); }
        { START(sink__V35, _M__sTextCons);
          { START(sink__V35, _M__sTextEmbed);
            { START(sink__V35, _M_AsText);
              COPY(sink__V35, sub__V37);END(sink__V35, _M_AsText); }
            END(sink__V35, _M__sTextEmbed); }
          { START(sink__V35, _M__sTextCons);
            { START(sink__V35, _M__sTextChars);
              LITERAL(sink__V35,  "\273273" ); END(sink__V35, _M__sTextChars); }
            { START(sink__V35, _M__sTextNil);
              END(sink__V35, _M__sTextNil); }
            END(sink__V35, _M__sTextCons); }
          END(sink__V35, _M__sTextCons); }
        END(sink__V35, _M__sTextCons); }
      END(sink__V35, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V35->context, namedP__V38); 
    UNLINK_VariablePropertyLink(sink__V35->context, varP__V39);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-ReverseConcat. */
int conBindOffs_M_Text_ReverseConcat[] = {0 , 0};
char *nameFun_M_Text_ReverseConcat(Term term) { return  "Text-ReverseConcat" ; }
struct _ConstructionDescriptor descriptor_M_Text_ReverseConcat = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Text_ReverseConcat), conBindOffs_M_Text_ReverseConcat, &nameFun_M_Text_ReverseConcat, &step_M_Text_ReverseConcat};

int step_M_Text_ReverseConcat(Sink sink__V40, Term term__V41)
{
  int term__V41_count = LINK_COUNT(term__V41); permitUnusedInt(term__V41_count);
  Term sub__V42 = FORCE(sink__V40->context, SUB(term__V41, 0));
  EnumOf_M__sList choice__V43 = (IS_VARIABLE_USE(sub__V42) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V42));
  switch (choice__V43)
  {
    case Data_M__sNil: { /* Function Text-ReverseConcat-1$Text-ReverseConcat$$Nil case $Nil */
      ASSERT(sink__V40->context, !strcmp(SYMBOL(term__V41),  "Text-ReverseConcat" ));
      Term sub__V44 = SUB(term__V41, 0); int sub__V44_count = term__V41_count*LINK_COUNT(sub__V44); permitUnusedInt(sub__V44_count);
      ASSERT(sink__V40->context, !strcmp(SYMBOL(sub__V44),  "$Nil" ));
      
      NamedPropertyLink namedP__V45 = LINK_NamedPropertyLink(sink__V40->context, NAMED_PROPERTIES(term__V41));
      VariablePropertyLink varP__V46 = LINK_VariablePropertyLink(sink__V40->context, VARIABLE_PROPERTIES(term__V41));
      UNLINK(sink__V40->context, term__V41);
      ADD_PROPERTIES(sink__V40, LINK_NamedPropertyLink(sink__V40->context, namedP__V45), LINK_VariablePropertyLink(sink__V40->context, varP__V46));
      { START(sink__V40, _M_Text_ReverseConcat_s2);
        END(sink__V40, _M_Text_ReverseConcat_s2); }
      UNLINK_NamedPropertyLink(sink__V40->context, namedP__V45); 
      UNLINK_VariablePropertyLink(sink__V40->context, varP__V46);
      
      return 1;
    break; } case Data_M__sCons: { /* Function Text-ReverseConcat-2$Text-ReverseConcat$$Cons case $Cons */
      ASSERT(sink__V40->context, !strcmp(SYMBOL(term__V41),  "Text-ReverseConcat" ));
      Term sub__V47 = SUB(term__V41, 0); int sub__V47_count = term__V41_count*LINK_COUNT(sub__V47); permitUnusedInt(sub__V47_count);
      ASSERT(sink__V40->context, !strcmp(SYMBOL(sub__V47),  "$Cons" ));
      Term sub__V48 = LINK(sink__V40->context, SUB(sub__V47, 0)); int sub__V48_count = sub__V47_count*LINK_COUNT(sub__V48); permitUnusedInt(sub__V48_count);
      /* sub__V48 = &#0-0 */
      Term sub__V49 = LINK(sink__V40->context, SUB(sub__V47, 1)); int sub__V49_count = sub__V47_count*LINK_COUNT(sub__V49); permitUnusedInt(sub__V49_count);
      /* sub__V49 = &#0-1 */
      
      NamedPropertyLink namedP__V50 = LINK_NamedPropertyLink(sink__V40->context, NAMED_PROPERTIES(term__V41));
      VariablePropertyLink varP__V51 = LINK_VariablePropertyLink(sink__V40->context, VARIABLE_PROPERTIES(term__V41));
      UNLINK(sink__V40->context, term__V41);
      ADD_PROPERTIES(sink__V40, LINK_NamedPropertyLink(sink__V40->context, namedP__V50), LINK_VariablePropertyLink(sink__V40->context, varP__V51));
      { START(sink__V40, _M_Text_ReverseConcat_s1);
        COPY(sink__V40, sub__V48);COPY(sink__V40, sub__V49);END(sink__V40, _M_Text_ReverseConcat_s1); }
      UNLINK_NamedPropertyLink(sink__V40->context, namedP__V50); 
      UNLINK_VariablePropertyLink(sink__V40->context, varP__V51);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION AsText. */
int conBindOffs_M_AsText[] = {0 , 0};
char *nameFun_M_AsText(Term term) { return  "AsText" ; }
struct _ConstructionDescriptor descriptor_M_AsText = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_AsText), conBindOffs_M_AsText, &nameFun_M_AsText, &step_M_AsText};

int step_M_AsText(Sink sink__V52, Term term__V53)
{
  int term__V53_count = LINK_COUNT(term__V53); permitUnusedInt(term__V53_count);
  do {
    /* Contraction rule Text-AsText-1. */
    ASSERT(sink__V52->context, !strcmp(SYMBOL(term__V53),  "AsText" ));
    Term sub__V54 = LINK(sink__V52->context, SUB(term__V53, 0)); int sub__V54_count = term__V53_count*LINK_COUNT(sub__V54); permitUnusedInt(sub__V54_count);
    /* sub__V54 = &#1 */
    
    NamedPropertyLink namedP__V55 = LINK_NamedPropertyLink(sink__V52->context, NAMED_PROPERTIES(term__V53));
    VariablePropertyLink varP__V56 = LINK_VariablePropertyLink(sink__V52->context, VARIABLE_PROPERTIES(term__V53));
    UNLINK(sink__V52->context, term__V53);
    COPY(sink__V52, sub__V54);UNLINK_NamedPropertyLink(sink__V52->context, namedP__V55); 
    UNLINK_VariablePropertyLink(sink__V52->context, varP__V56);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Embed. */
int conBindOffs_M_Text_Embed[] = {0 , 0};
char *nameFun_M_Text_Embed(Term term) { return  "Text-Embed" ; }
struct _ConstructionDescriptor descriptor_M_Text_Embed = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Text_Embed), conBindOffs_M_Text_Embed, &nameFun_M_Text_Embed, &step_M_Text_Embed};

int step_M_Text_Embed(Sink sink__V57, Term term__V58)
{
  int term__V58_count = LINK_COUNT(term__V58); permitUnusedInt(term__V58_count);
  do {
    /* Contraction rule Text-Embed-1. */
    ASSERT(sink__V57->context, !strcmp(SYMBOL(term__V58),  "Text-Embed" ));
    Term sub__V59 = LINK(sink__V57->context, SUB(term__V58, 0)); int sub__V59_count = term__V58_count*LINK_COUNT(sub__V59); permitUnusedInt(sub__V59_count);
    CRSX_CHECK_SORT(sink__V57->context, sub__V59, &sort_M_Reified_xVariable); /* sub__V59 = &#1 */
    
    NamedPropertyLink namedP__V60 = LINK_NamedPropertyLink(sink__V57->context, NAMED_PROPERTIES(term__V58));
    VariablePropertyLink varP__V61 = LINK_VariablePropertyLink(sink__V57->context, VARIABLE_PROPERTIES(term__V58));
    UNLINK(sink__V57->context, term__V58);
    { START(sink__V57, _M__sTextCons);
      { START(sink__V57, _M__sTextChars);
        LITERAL(sink__V57,  "\253253" ); END(sink__V57, _M__sTextChars); }
      { START(sink__V57, _M__sTextCons);
        { START(sink__V57, _M__sTextEmbed);
          { START(sink__V57, _M_AsText);
            COPY(sink__V57, sub__V59);END(sink__V57, _M_AsText); }
          END(sink__V57, _M__sTextEmbed); }
        { START(sink__V57, _M__sTextCons);
          { START(sink__V57, _M__sTextChars);
            LITERAL(sink__V57,  "\273273" ); END(sink__V57, _M__sTextChars); }
          { START(sink__V57, _M__sTextNil);
            END(sink__V57, _M__sTextNil); }
          END(sink__V57, _M__sTextCons); }
        END(sink__V57, _M__sTextCons); }
      END(sink__V57, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V57->context, namedP__V60); 
    UNLINK_VariablePropertyLink(sink__V57->context, varP__V61);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Print1$3. */
int conBindOffs_M_Text_Print1_s3[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_Text_Print1_s3(Term term) { return  "Text-Print1$3" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print1_s3 = {NULL, 0, 4, sizeof(STRUCT_Con_M_Text_Print1_s3), conBindOffs_M_Text_Print1_s3, &nameFun_M_Text_Print1_s3, &step_M_Text_Print1_s3};

int step_M_Text_Print1_s3(Sink sink__V62, Term term__V63)
{
  int term__V63_count = LINK_COUNT(term__V63); permitUnusedInt(term__V63_count);
  do {
    /* Contraction rule Text-Print1-1. */
    ASSERT(sink__V62->context, !strcmp(SYMBOL(term__V63),  "Text-Print1$3" ));
    Term sub__V64 = LINK(sink__V62->context, SUB(term__V63, 0)); int sub__V64_count = term__V63_count*LINK_COUNT(sub__V64); permitUnusedInt(sub__V64_count);
    /* sub__V64 = &#111 */
    Term sub__V65 = LINK(sink__V62->context, SUB(term__V63, 1)); int sub__V65_count = term__V63_count*LINK_COUNT(sub__V65); permitUnusedInt(sub__V65_count);
    CRSX_CHECK_SORT(sink__V62->context, sub__V65, &sort_M_Reified_xVariable); /* sub__V65 = &#12 */
    Term sub__V66 = LINK(sink__V62->context, SUB(term__V63, 2)); int sub__V66_count = term__V63_count*LINK_COUNT(sub__V66); permitUnusedInt(sub__V66_count);
    UNLINK_SUB(sink__V62->context, term__V63,  2); NORMALIZE(sink__V62->context, sub__V66); SUB(term__V63,  2) = LINK(sink__V62->context, sub__V66);
    /* sub__V66 = &#2 */
    Term sub__V67 = SUB(term__V63, 3); int sub__V67_count = term__V63_count*LINK_COUNT(sub__V67); permitUnusedInt(sub__V67_count);
    /* sub__V67 = &#propsof0 */
    
    NamedPropertyLink namedP__V68 = LINK_NamedPropertyLink(sink__V62->context, NAMED_PROPERTIES(sub__V67));
    VariablePropertyLink varP__V69 = LINK_VariablePropertyLink(sink__V62->context, VARIABLE_PROPERTIES(sub__V67));
    UNLINK(sink__V62->context, term__V63);
    { char *str__V70;
      { char *sub__V71[3]; size_t sublength__V72[3]; size_t length__V73 = 0;
        { Term t__V74;
          { Sink buf__V75 = ALLOCA_BUFFER(sink__V62->context);
            { START(buf__V75, _M_Text_Indent);
              COPY(buf__V75, LINK(buf__V75->context, sub__V66));END(buf__V75, _M_Text_Indent); }
            t__V74 = BUFFER_TERM(buf__V75); FREE_BUFFER(buf__V75); }
          FORCE(sink__V62->context, t__V74);
          length__V73 += (sublength__V72[0] = strlen(sub__V71[0] = SYMBOL(t__V74)));
          UNLINK(sink__V62->context, t__V74); FORCE(sink__V62->context, sub__V64); LINK(sink__V62->context, sub__V64);
          length__V73 += (sublength__V72[1] = strlen(sub__V71[1] = SYMBOL(sub__V64)));
           UNLINK(sink__V62->context, sub__V64);  UNLINK(sink__V62->context, sub__V64); { Term t__V76;
            { Sink buf__V77 = ALLOCA_BUFFER(sink__V62->context);
              { START(buf__V77, _M_Text_Print1);
                COPY(buf__V77, sub__V65);COPY(buf__V77, sub__V66);END(buf__V77, _M_Text_Print1); }
              t__V76 = BUFFER_TERM(buf__V77); FREE_BUFFER(buf__V77); }
            FORCE(sink__V62->context, t__V76);
            length__V73 += (sublength__V72[2] = strlen(sub__V71[2] = SYMBOL(t__V76)));
            UNLINK(sink__V62->context, t__V76); { char *str__V78 = ALLOCATE(sink__V62->context, length__V73+1), *p__V79 = str__V78;
              int i; for (i = 0; i < 3; ++i) { memcpy(p__V79, sub__V71[i], sublength__V72[i]); p__V79 += sublength__V72[i]; }
              *p__V79 = '\0';
              ASSERT(sink__V62->context, strlen(str__V78) == length__V73);
              str__V70 = str__V78; }
            
          }
        } }
      LITERALU(sink__V62, str__V70); }
    UNLINK_NamedPropertyLink(sink__V62->context, namedP__V68); 
    UNLINK_VariablePropertyLink(sink__V62->context, varP__V69);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Print1$2. */
int conBindOffs_M_Text_Print1_s2[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_Text_Print1_s2(Term term) { return  "Text-Print1$2" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print1_s2 = {NULL, 0, 4, sizeof(STRUCT_Con_M_Text_Print1_s2), conBindOffs_M_Text_Print1_s2, &nameFun_M_Text_Print1_s2, &step_M_Text_Print1_s2};

int step_M_Text_Print1_s2(Sink sink__V80, Term term__V81)
{
  int term__V81_count = LINK_COUNT(term__V81); permitUnusedInt(term__V81_count);
  do {
    /* Contraction rule Text-Print1-2. */
    ASSERT(sink__V80->context, !strcmp(SYMBOL(term__V81),  "Text-Print1$2" ));
    Term sub__V82 = LINK(sink__V80->context, SUB(term__V81, 0)); int sub__V82_count = term__V81_count*LINK_COUNT(sub__V82); permitUnusedInt(sub__V82_count);
    /* sub__V82 = &#111 */
    Term sub__V83 = LINK(sink__V80->context, SUB(term__V81, 1)); int sub__V83_count = term__V81_count*LINK_COUNT(sub__V83); permitUnusedInt(sub__V83_count);
    CRSX_CHECK_SORT(sink__V80->context, sub__V83, &sort_M_Reified_xVariable); /* sub__V83 = &#12 */
    Term sub__V84 = LINK(sink__V80->context, SUB(term__V81, 2)); int sub__V84_count = term__V81_count*LINK_COUNT(sub__V84); permitUnusedInt(sub__V84_count);
    UNLINK_SUB(sink__V80->context, term__V81,  2); NORMALIZE(sink__V80->context, sub__V84); SUB(term__V81,  2) = LINK(sink__V80->context, sub__V84);
    /* sub__V84 = &#2 */
    Term sub__V85 = SUB(term__V81, 3); int sub__V85_count = term__V81_count*LINK_COUNT(sub__V85); permitUnusedInt(sub__V85_count);
    /* sub__V85 = &#propsof0 */
    
    NamedPropertyLink namedP__V86 = LINK_NamedPropertyLink(sink__V80->context, NAMED_PROPERTIES(sub__V85));
    VariablePropertyLink varP__V87 = LINK_VariablePropertyLink(sink__V80->context, VARIABLE_PROPERTIES(sub__V85));
    UNLINK(sink__V80->context, term__V81);
    { char *str__V88;
      { char *sub__V89[4]; size_t sublength__V90[4]; size_t length__V91 = 0;
        { Term t__V92;
          { Sink buf__V93 = ALLOCA_BUFFER(sink__V80->context);
            { START(buf__V93, _M_Text_Indent);
              COPY(buf__V93, LINK(buf__V93->context, sub__V84));END(buf__V93, _M_Text_Indent); }
            t__V92 = BUFFER_TERM(buf__V93); FREE_BUFFER(buf__V93); }
          FORCE(sink__V80->context, t__V92);
          length__V91 += (sublength__V90[0] = strlen(sub__V89[0] = SYMBOL(t__V92)));
          UNLINK(sink__V80->context, t__V92); FORCE(sink__V80->context, sub__V82); LINK(sink__V80->context, sub__V82);
          length__V91 += (sublength__V90[1] = strlen(sub__V89[1] = SYMBOL(sub__V82)));
           UNLINK(sink__V80->context, sub__V82);  UNLINK(sink__V80->context, sub__V82); length__V91 += (sublength__V90[2] = strlen(sub__V89[2] =  "\n" ));
          { Term t__V94;
            { Sink buf__V95 = ALLOCA_BUFFER(sink__V80->context);
              { START(buf__V95, _M_Text_Print1);
                COPY(buf__V95, sub__V83);COPY(buf__V95, sub__V84);END(buf__V95, _M_Text_Print1); }
              t__V94 = BUFFER_TERM(buf__V95); FREE_BUFFER(buf__V95); }
            FORCE(sink__V80->context, t__V94);
            length__V91 += (sublength__V90[3] = strlen(sub__V89[3] = SYMBOL(t__V94)));
            UNLINK(sink__V80->context, t__V94); { char *str__V96 = ALLOCATE(sink__V80->context, length__V91+1), *p__V97 = str__V96;
              int i; for (i = 0; i < 4; ++i) { memcpy(p__V97, sub__V89[i], sublength__V90[i]); p__V97 += sublength__V90[i]; }
              *p__V97 = '\0';
              ASSERT(sink__V80->context, strlen(str__V96) == length__V91);
              str__V88 = str__V96; }
            
          }
        } }
      LITERALU(sink__V80, str__V88); }
    UNLINK_NamedPropertyLink(sink__V80->context, namedP__V86); 
    UNLINK_VariablePropertyLink(sink__V80->context, varP__V87);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Print1$1. */
int conBindOffs_M_Text_Print1_s1[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_Text_Print1_s1(Term term) { return  "Text-Print1$1" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print1_s1 = {NULL, 0, 4, sizeof(STRUCT_Con_M_Text_Print1_s1), conBindOffs_M_Text_Print1_s1, &nameFun_M_Text_Print1_s1, &step_M_Text_Print1_s1};

int step_M_Text_Print1_s1(Sink sink__V98, Term term__V99)
{
  int term__V99_count = LINK_COUNT(term__V99); permitUnusedInt(term__V99_count);
  Term sub__V100 = FORCE(sink__V98->context, SUB(term__V99, 0));
  EnumOf_M_Text_Part choice__V101 = (IS_VARIABLE_USE(sub__V100) ? VarOf_M_Text_Part : (EnumOf_M_Text_Part) TAG(sub__V100));
  switch (choice__V101)
  {
    case Data_M__sTextChars: { /* Function Text-Print1-1$Text-Print1$1$$TextChars case $TextChars */
      ASSERT(sink__V98->context, !strcmp(SYMBOL(term__V99),  "Text-Print1$1" ));
      Term sub__V102 = SUB(term__V99, 0); int sub__V102_count = term__V99_count*LINK_COUNT(sub__V102); permitUnusedInt(sub__V102_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V102, &sort_M_Text_Part); ASSERT(sink__V98->context, !strcmp(SYMBOL(sub__V102),  "$TextChars" ));
      Term sub__V103 = LINK(sink__V98->context, SUB(sub__V102, 0)); int sub__V103_count = sub__V102_count*LINK_COUNT(sub__V103); permitUnusedInt(sub__V103_count);
      /* sub__V103 = &#0-0 */
      Term sub__V104 = LINK(sink__V98->context, SUB(term__V99, 1)); int sub__V104_count = term__V99_count*LINK_COUNT(sub__V104); permitUnusedInt(sub__V104_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V104, &sort_M_Reified_xVariable); /* sub__V104 = &#1 */
      Term sub__V105 = LINK(sink__V98->context, SUB(term__V99, 2)); int sub__V105_count = term__V99_count*LINK_COUNT(sub__V105); permitUnusedInt(sub__V105_count);
      /* sub__V105 = &#2 */
      Term sub__V106 = LINK(sink__V98->context, SUB(term__V99, 3)); int sub__V106_count = term__V99_count*LINK_COUNT(sub__V106); permitUnusedInt(sub__V106_count);
      /* sub__V106 = &#3 */
      
      NamedPropertyLink namedP__V107 = LINK_NamedPropertyLink(sink__V98->context, NAMED_PROPERTIES(term__V99));
      VariablePropertyLink varP__V108 = LINK_VariablePropertyLink(sink__V98->context, VARIABLE_PROPERTIES(term__V99));
      UNLINK(sink__V98->context, term__V99);
      ADD_PROPERTIES(sink__V98, LINK_NamedPropertyLink(sink__V98->context, namedP__V107), LINK_VariablePropertyLink(sink__V98->context, varP__V108));
      { START(sink__V98, _M_Text_Print1_s3);
        COPY(sink__V98, sub__V103);COPY(sink__V98, sub__V104);COPY(sink__V98, sub__V105);COPY(sink__V98, sub__V106);END(sink__V98, _M_Text_Print1_s3); }
      UNLINK_NamedPropertyLink(sink__V98->context, namedP__V107); 
      UNLINK_VariablePropertyLink(sink__V98->context, varP__V108);
      
      return 1;
    break; } case Data_M__sTextBreak: { /* Function Text-Print1-2$Text-Print1$1$$TextBreak case $TextBreak */
      ASSERT(sink__V98->context, !strcmp(SYMBOL(term__V99),  "Text-Print1$1" ));
      Term sub__V109 = SUB(term__V99, 0); int sub__V109_count = term__V99_count*LINK_COUNT(sub__V109); permitUnusedInt(sub__V109_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V109, &sort_M_Text_Part); ASSERT(sink__V98->context, !strcmp(SYMBOL(sub__V109),  "$TextBreak" ));
      Term sub__V110 = LINK(sink__V98->context, SUB(sub__V109, 0)); int sub__V110_count = sub__V109_count*LINK_COUNT(sub__V110); permitUnusedInt(sub__V110_count);
      /* sub__V110 = &#0-0 */
      Term sub__V111 = LINK(sink__V98->context, SUB(term__V99, 1)); int sub__V111_count = term__V99_count*LINK_COUNT(sub__V111); permitUnusedInt(sub__V111_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V111, &sort_M_Reified_xVariable); /* sub__V111 = &#1 */
      Term sub__V112 = LINK(sink__V98->context, SUB(term__V99, 2)); int sub__V112_count = term__V99_count*LINK_COUNT(sub__V112); permitUnusedInt(sub__V112_count);
      /* sub__V112 = &#2 */
      Term sub__V113 = LINK(sink__V98->context, SUB(term__V99, 3)); int sub__V113_count = term__V99_count*LINK_COUNT(sub__V113); permitUnusedInt(sub__V113_count);
      /* sub__V113 = &#3 */
      
      NamedPropertyLink namedP__V114 = LINK_NamedPropertyLink(sink__V98->context, NAMED_PROPERTIES(term__V99));
      VariablePropertyLink varP__V115 = LINK_VariablePropertyLink(sink__V98->context, VARIABLE_PROPERTIES(term__V99));
      UNLINK(sink__V98->context, term__V99);
      ADD_PROPERTIES(sink__V98, LINK_NamedPropertyLink(sink__V98->context, namedP__V114), LINK_VariablePropertyLink(sink__V98->context, varP__V115));
      { START(sink__V98, _M_Text_Print1_s2);
        COPY(sink__V98, sub__V110);COPY(sink__V98, sub__V111);COPY(sink__V98, sub__V112);COPY(sink__V98, sub__V113);END(sink__V98, _M_Text_Print1_s2); }
      UNLINK_NamedPropertyLink(sink__V98->context, namedP__V114); 
      UNLINK_VariablePropertyLink(sink__V98->context, varP__V115);
      
      return 1;
    break; } case Data_M__sTextSeparator: { /* Function Text-Print1-3$Text-Print1$1$$TextSeparator case $TextSeparator */
      ASSERT(sink__V98->context, !strcmp(SYMBOL(term__V99),  "Text-Print1$1" ));
      Term sub__V116 = SUB(term__V99, 0); int sub__V116_count = term__V99_count*LINK_COUNT(sub__V116); permitUnusedInt(sub__V116_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V116, &sort_M_Text_Part); ASSERT(sink__V98->context, !strcmp(SYMBOL(sub__V116),  "$TextSeparator" ));
      Term sub__V117 = LINK(sink__V98->context, SUB(term__V99, 1)); int sub__V117_count = term__V99_count*LINK_COUNT(sub__V117); permitUnusedInt(sub__V117_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V117, &sort_M_Reified_xVariable); /* sub__V117 = &#0 */
      Term sub__V118 = LINK(sink__V98->context, SUB(term__V99, 2)); int sub__V118_count = term__V99_count*LINK_COUNT(sub__V118); permitUnusedInt(sub__V118_count);
      /* sub__V118 = &#1 */
      Term sub__V119 = LINK(sink__V98->context, SUB(term__V99, 3)); int sub__V119_count = term__V99_count*LINK_COUNT(sub__V119); permitUnusedInt(sub__V119_count);
      /* sub__V119 = &#2 */
      
      NamedPropertyLink namedP__V120 = LINK_NamedPropertyLink(sink__V98->context, NAMED_PROPERTIES(term__V99));
      VariablePropertyLink varP__V121 = LINK_VariablePropertyLink(sink__V98->context, VARIABLE_PROPERTIES(term__V99));
      UNLINK(sink__V98->context, term__V99);
      ADD_PROPERTIES(sink__V98, LINK_NamedPropertyLink(sink__V98->context, namedP__V120), LINK_VariablePropertyLink(sink__V98->context, varP__V121));
      { START(sink__V98, _M_Text_Print1_s7);
        COPY(sink__V98, sub__V117);COPY(sink__V98, sub__V118);COPY(sink__V98, sub__V119);END(sink__V98, _M_Text_Print1_s7); }
      UNLINK_NamedPropertyLink(sink__V98->context, namedP__V120); 
      UNLINK_VariablePropertyLink(sink__V98->context, varP__V121);
      
      return 1;
    break; } case Data_M__sTextGroup: { /* Function Text-Print1-4$Text-Print1$1$$TextGroup case $TextGroup */
      ASSERT(sink__V98->context, !strcmp(SYMBOL(term__V99),  "Text-Print1$1" ));
      Term sub__V122 = SUB(term__V99, 0); int sub__V122_count = term__V99_count*LINK_COUNT(sub__V122); permitUnusedInt(sub__V122_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V122, &sort_M_Text_Part); ASSERT(sink__V98->context, !strcmp(SYMBOL(sub__V122),  "$TextGroup" ));
      Term sub__V123 = LINK(sink__V98->context, SUB(sub__V122, 0)); int sub__V123_count = sub__V122_count*LINK_COUNT(sub__V123); permitUnusedInt(sub__V123_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V123, &sort_M_Reified_xVariable); /* sub__V123 = &#0-0 */
      Term sub__V124 = LINK(sink__V98->context, SUB(term__V99, 1)); int sub__V124_count = term__V99_count*LINK_COUNT(sub__V124); permitUnusedInt(sub__V124_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V124, &sort_M_Reified_xVariable); /* sub__V124 = &#1 */
      Term sub__V125 = LINK(sink__V98->context, SUB(term__V99, 2)); int sub__V125_count = term__V99_count*LINK_COUNT(sub__V125); permitUnusedInt(sub__V125_count);
      /* sub__V125 = &#2 */
      Term sub__V126 = LINK(sink__V98->context, SUB(term__V99, 3)); int sub__V126_count = term__V99_count*LINK_COUNT(sub__V126); permitUnusedInt(sub__V126_count);
      /* sub__V126 = &#3 */
      
      NamedPropertyLink namedP__V127 = LINK_NamedPropertyLink(sink__V98->context, NAMED_PROPERTIES(term__V99));
      VariablePropertyLink varP__V128 = LINK_VariablePropertyLink(sink__V98->context, VARIABLE_PROPERTIES(term__V99));
      UNLINK(sink__V98->context, term__V99);
      ADD_PROPERTIES(sink__V98, LINK_NamedPropertyLink(sink__V98->context, namedP__V127), LINK_VariablePropertyLink(sink__V98->context, varP__V128));
      { START(sink__V98, _M_Text_Print1_s5);
        COPY(sink__V98, sub__V123);COPY(sink__V98, sub__V124);COPY(sink__V98, sub__V125);COPY(sink__V98, sub__V126);END(sink__V98, _M_Text_Print1_s5); }
      UNLINK_NamedPropertyLink(sink__V98->context, namedP__V127); 
      UNLINK_VariablePropertyLink(sink__V98->context, varP__V128);
      
      return 1;
    break; } case Data_M__sTextIndent: { /* Function Text-Print1-5$Text-Print1$1$$TextIndent case $TextIndent */
      ASSERT(sink__V98->context, !strcmp(SYMBOL(term__V99),  "Text-Print1$1" ));
      Term sub__V129 = SUB(term__V99, 0); int sub__V129_count = term__V99_count*LINK_COUNT(sub__V129); permitUnusedInt(sub__V129_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V129, &sort_M_Text_Part); ASSERT(sink__V98->context, !strcmp(SYMBOL(sub__V129),  "$TextIndent" ));
      Term sub__V130 = LINK(sink__V98->context, SUB(sub__V129, 0)); int sub__V130_count = sub__V129_count*LINK_COUNT(sub__V130); permitUnusedInt(sub__V130_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V130, &sort_M_Reified_xVariable); /* sub__V130 = &#0-0 */
      Term sub__V131 = LINK(sink__V98->context, SUB(term__V99, 1)); int sub__V131_count = term__V99_count*LINK_COUNT(sub__V131); permitUnusedInt(sub__V131_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V131, &sort_M_Reified_xVariable); /* sub__V131 = &#1 */
      Term sub__V132 = LINK(sink__V98->context, SUB(term__V99, 2)); int sub__V132_count = term__V99_count*LINK_COUNT(sub__V132); permitUnusedInt(sub__V132_count);
      /* sub__V132 = &#2 */
      Term sub__V133 = LINK(sink__V98->context, SUB(term__V99, 3)); int sub__V133_count = term__V99_count*LINK_COUNT(sub__V133); permitUnusedInt(sub__V133_count);
      /* sub__V133 = &#3 */
      
      NamedPropertyLink namedP__V134 = LINK_NamedPropertyLink(sink__V98->context, NAMED_PROPERTIES(term__V99));
      VariablePropertyLink varP__V135 = LINK_VariablePropertyLink(sink__V98->context, VARIABLE_PROPERTIES(term__V99));
      UNLINK(sink__V98->context, term__V99);
      ADD_PROPERTIES(sink__V98, LINK_NamedPropertyLink(sink__V98->context, namedP__V134), LINK_VariablePropertyLink(sink__V98->context, varP__V135));
      { START(sink__V98, _M_Text_Print1_s6);
        COPY(sink__V98, sub__V130);COPY(sink__V98, sub__V131);COPY(sink__V98, sub__V132);COPY(sink__V98, sub__V133);END(sink__V98, _M_Text_Print1_s6); }
      UNLINK_NamedPropertyLink(sink__V98->context, namedP__V134); 
      UNLINK_VariablePropertyLink(sink__V98->context, varP__V135);
      
      return 1;
    break; } case Data_M__sTextEmbed: { /* Function Text-Print1-6$Text-Print1$1$$TextEmbed case $TextEmbed */
      ASSERT(sink__V98->context, !strcmp(SYMBOL(term__V99),  "Text-Print1$1" ));
      Term sub__V136 = SUB(term__V99, 0); int sub__V136_count = term__V99_count*LINK_COUNT(sub__V136); permitUnusedInt(sub__V136_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V136, &sort_M_Text_Part); ASSERT(sink__V98->context, !strcmp(SYMBOL(sub__V136),  "$TextEmbed" ));
      Term sub__V137 = LINK(sink__V98->context, SUB(sub__V136, 0)); int sub__V137_count = sub__V136_count*LINK_COUNT(sub__V137); permitUnusedInt(sub__V137_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V137, &sort_M_Reified_xVariable); /* sub__V137 = &#0-0 */
      Term sub__V138 = LINK(sink__V98->context, SUB(term__V99, 1)); int sub__V138_count = term__V99_count*LINK_COUNT(sub__V138); permitUnusedInt(sub__V138_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V138, &sort_M_Reified_xVariable); /* sub__V138 = &#1 */
      Term sub__V139 = LINK(sink__V98->context, SUB(term__V99, 2)); int sub__V139_count = term__V99_count*LINK_COUNT(sub__V139); permitUnusedInt(sub__V139_count);
      /* sub__V139 = &#2 */
      Term sub__V140 = LINK(sink__V98->context, SUB(term__V99, 3)); int sub__V140_count = term__V99_count*LINK_COUNT(sub__V140); permitUnusedInt(sub__V140_count);
      /* sub__V140 = &#3 */
      
      NamedPropertyLink namedP__V141 = LINK_NamedPropertyLink(sink__V98->context, NAMED_PROPERTIES(term__V99));
      VariablePropertyLink varP__V142 = LINK_VariablePropertyLink(sink__V98->context, VARIABLE_PROPERTIES(term__V99));
      UNLINK(sink__V98->context, term__V99);
      ADD_PROPERTIES(sink__V98, LINK_NamedPropertyLink(sink__V98->context, namedP__V141), LINK_VariablePropertyLink(sink__V98->context, varP__V142));
      { START(sink__V98, _M_Text_Print1_s4);
        COPY(sink__V98, sub__V137);COPY(sink__V98, sub__V138);COPY(sink__V98, sub__V139);COPY(sink__V98, sub__V140);END(sink__V98, _M_Text_Print1_s4); }
      UNLINK_NamedPropertyLink(sink__V98->context, namedP__V141); 
      UNLINK_VariablePropertyLink(sink__V98->context, varP__V142);
      
      return 1;
    break; } case Data_M__sTextString: { /* Function Text-Print1-7$Text-Print1$1$$TextString case $TextString */
      ASSERT(sink__V98->context, !strcmp(SYMBOL(term__V99),  "Text-Print1$1" ));
      Term sub__V143 = SUB(term__V99, 0); int sub__V143_count = term__V99_count*LINK_COUNT(sub__V143); permitUnusedInt(sub__V143_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V143, &sort_M_Text_Part); ASSERT(sink__V98->context, !strcmp(SYMBOL(sub__V143),  "$TextString" ));
      Term sub__V144 = LINK(sink__V98->context, SUB(sub__V143, 0)); int sub__V144_count = sub__V143_count*LINK_COUNT(sub__V144); permitUnusedInt(sub__V144_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V144, &sort_M_Reified_xVariable); /* sub__V144 = &#0-0 */
      Term sub__V145 = LINK(sink__V98->context, SUB(term__V99, 1)); int sub__V145_count = term__V99_count*LINK_COUNT(sub__V145); permitUnusedInt(sub__V145_count);
      CRSX_CHECK_SORT(sink__V98->context, sub__V145, &sort_M_Reified_xVariable); /* sub__V145 = &#1 */
      Term sub__V146 = LINK(sink__V98->context, SUB(term__V99, 2)); int sub__V146_count = term__V99_count*LINK_COUNT(sub__V146); permitUnusedInt(sub__V146_count);
      /* sub__V146 = &#2 */
      Term sub__V147 = LINK(sink__V98->context, SUB(term__V99, 3)); int sub__V147_count = term__V99_count*LINK_COUNT(sub__V147); permitUnusedInt(sub__V147_count);
      /* sub__V147 = &#3 */
      
      NamedPropertyLink namedP__V148 = LINK_NamedPropertyLink(sink__V98->context, NAMED_PROPERTIES(term__V99));
      VariablePropertyLink varP__V149 = LINK_VariablePropertyLink(sink__V98->context, VARIABLE_PROPERTIES(term__V99));
      UNLINK(sink__V98->context, term__V99);
      ADD_PROPERTIES(sink__V98, LINK_NamedPropertyLink(sink__V98->context, namedP__V148), LINK_VariablePropertyLink(sink__V98->context, varP__V149));
      { START(sink__V98, _M_Text_Print1_s8);
        COPY(sink__V98, sub__V144);COPY(sink__V98, sub__V145);COPY(sink__V98, sub__V146);COPY(sink__V98, sub__V147);END(sink__V98, _M_Text_Print1_s8); }
      UNLINK_NamedPropertyLink(sink__V98->context, namedP__V148); 
      UNLINK_VariablePropertyLink(sink__V98->context, varP__V149);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION Text-Print1$7. */
int conBindOffs_M_Text_Print1_s7[] = {0 , 0 , 0 , 0};
char *nameFun_M_Text_Print1_s7(Term term) { return  "Text-Print1$7" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print1_s7 = {NULL, 0, 3, sizeof(STRUCT_Con_M_Text_Print1_s7), conBindOffs_M_Text_Print1_s7, &nameFun_M_Text_Print1_s7, &step_M_Text_Print1_s7};

int step_M_Text_Print1_s7(Sink sink__V150, Term term__V151)
{
  int term__V151_count = LINK_COUNT(term__V151); permitUnusedInt(term__V151_count);
  do {
    /* Contraction rule Text-Print1-3. */
    ASSERT(sink__V150->context, !strcmp(SYMBOL(term__V151),  "Text-Print1$7" ));
    Term sub__V152 = LINK(sink__V150->context, SUB(term__V151, 0)); int sub__V152_count = term__V151_count*LINK_COUNT(sub__V152); permitUnusedInt(sub__V152_count);
    CRSX_CHECK_SORT(sink__V150->context, sub__V152, &sort_M_Reified_xVariable); /* sub__V152 = &#12 */
    Term sub__V153 = LINK(sink__V150->context, SUB(term__V151, 1)); int sub__V153_count = term__V151_count*LINK_COUNT(sub__V153); permitUnusedInt(sub__V153_count);
    /* sub__V153 = &#2 */
    Term sub__V154 = SUB(term__V151, 2); int sub__V154_count = term__V151_count*LINK_COUNT(sub__V154); permitUnusedInt(sub__V154_count);
    /* sub__V154 = &#propsof0 */
    
    NamedPropertyLink namedP__V155 = LINK_NamedPropertyLink(sink__V150->context, NAMED_PROPERTIES(sub__V154));
    VariablePropertyLink varP__V156 = LINK_VariablePropertyLink(sink__V150->context, VARIABLE_PROPERTIES(sub__V154));
    UNLINK(sink__V150->context, term__V151);
    { START(sink__V150, _M_Text_Print1);
      COPY(sink__V150, sub__V152);COPY(sink__V150, sub__V153);END(sink__V150, _M_Text_Print1); }
    UNLINK_NamedPropertyLink(sink__V150->context, namedP__V155); 
    UNLINK_VariablePropertyLink(sink__V150->context, varP__V156);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Print1$6. */
int conBindOffs_M_Text_Print1_s6[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_Text_Print1_s6(Term term) { return  "Text-Print1$6" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print1_s6 = {NULL, 0, 4, sizeof(STRUCT_Con_M_Text_Print1_s6), conBindOffs_M_Text_Print1_s6, &nameFun_M_Text_Print1_s6, &step_M_Text_Print1_s6};

int step_M_Text_Print1_s6(Sink sink__V157, Term term__V158)
{
  int term__V158_count = LINK_COUNT(term__V158); permitUnusedInt(term__V158_count);
  do {
    /* Contraction rule Text-Print1-5. */
    ASSERT(sink__V157->context, !strcmp(SYMBOL(term__V158),  "Text-Print1$6" ));
    Term sub__V159 = LINK(sink__V157->context, SUB(term__V158, 0)); int sub__V159_count = term__V158_count*LINK_COUNT(sub__V159); permitUnusedInt(sub__V159_count);
    CRSX_CHECK_SORT(sink__V157->context, sub__V159, &sort_M_Reified_xVariable); /* sub__V159 = &#111 */
    Term sub__V160 = LINK(sink__V157->context, SUB(term__V158, 1)); int sub__V160_count = term__V158_count*LINK_COUNT(sub__V160); permitUnusedInt(sub__V160_count);
    CRSX_CHECK_SORT(sink__V157->context, sub__V160, &sort_M_Reified_xVariable); /* sub__V160 = &#12 */
    Term sub__V161 = LINK(sink__V157->context, SUB(term__V158, 2)); int sub__V161_count = term__V158_count*LINK_COUNT(sub__V161); permitUnusedInt(sub__V161_count);
    UNLINK_SUB(sink__V157->context, term__V158,  2); NORMALIZE(sink__V157->context, sub__V161); SUB(term__V158,  2) = LINK(sink__V157->context, sub__V161);
    /* sub__V161 = &#2 */
    Term sub__V162 = SUB(term__V158, 3); int sub__V162_count = term__V158_count*LINK_COUNT(sub__V162); permitUnusedInt(sub__V162_count);
    /* sub__V162 = &#propsof0 */
    
    NamedPropertyLink namedP__V163 = LINK_NamedPropertyLink(sink__V157->context, NAMED_PROPERTIES(sub__V162));
    VariablePropertyLink varP__V164 = LINK_VariablePropertyLink(sink__V157->context, VARIABLE_PROPERTIES(sub__V162));
    UNLINK(sink__V157->context, term__V158);
    { char *str__V165;
      { char *sub__V166[2]; size_t sublength__V167[2]; size_t length__V168 = 0;
        { Term t__V169;
          { Sink buf__V170 = ALLOCA_BUFFER(sink__V157->context);
            { START(buf__V170, _M_Text_Print1);
              COPY(buf__V170, sub__V159);
              {
                double num__V171;num__V171 = DOUBLE(sub__V161);  
                {
                  double tmp__V172;tmp__V172 = (double) 2;  num__V171 += tmp__V172;
                }
                LITERALNF(buf__V170, (size_t) 31, "%G", num__V171);
              }END(buf__V170, _M_Text_Print1); }
            t__V169 = BUFFER_TERM(buf__V170); FREE_BUFFER(buf__V170); }
          FORCE(sink__V157->context, t__V169);
          length__V168 += (sublength__V167[0] = strlen(sub__V166[0] = SYMBOL(t__V169)));
          UNLINK(sink__V157->context, t__V169); { Term t__V173;
            { Sink buf__V174 = ALLOCA_BUFFER(sink__V157->context);
              { START(buf__V174, _M_Text_Print1);
                COPY(buf__V174, sub__V160);
                {
                  double num__V175;num__V175 = DOUBLE(sub__V161); UNLINK(buf__V174->context, sub__V161); 
                  
                  {
                    double tmp__V176;tmp__V176 = (double) 2;  num__V175 += tmp__V176;
                  }
                  LITERALNF(buf__V174, (size_t) 31, "%G", num__V175);
                }END(buf__V174, _M_Text_Print1); }
              t__V173 = BUFFER_TERM(buf__V174); FREE_BUFFER(buf__V174); }
            FORCE(sink__V157->context, t__V173);
            length__V168 += (sublength__V167[1] = strlen(sub__V166[1] = SYMBOL(t__V173)));
            UNLINK(sink__V157->context, t__V173); { char *str__V177 = ALLOCATE(sink__V157->context, length__V168+1), *p__V178 = str__V177;
              int i; for (i = 0; i < 2; ++i) { memcpy(p__V178, sub__V166[i], sublength__V167[i]); p__V178 += sublength__V167[i]; }
              *p__V178 = '\0';
              ASSERT(sink__V157->context, strlen(str__V177) == length__V168);
              str__V165 = str__V177; }
            
          }
        } }
      LITERALU(sink__V157, str__V165); }
    UNLINK_NamedPropertyLink(sink__V157->context, namedP__V163); 
    UNLINK_VariablePropertyLink(sink__V157->context, varP__V164);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Print1$5. */
int conBindOffs_M_Text_Print1_s5[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_Text_Print1_s5(Term term) { return  "Text-Print1$5" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print1_s5 = {NULL, 0, 4, sizeof(STRUCT_Con_M_Text_Print1_s5), conBindOffs_M_Text_Print1_s5, &nameFun_M_Text_Print1_s5, &step_M_Text_Print1_s5};

int step_M_Text_Print1_s5(Sink sink__V179, Term term__V180)
{
  int term__V180_count = LINK_COUNT(term__V180); permitUnusedInt(term__V180_count);
  do {
    /* Contraction rule Text-Print1-4. */
    ASSERT(sink__V179->context, !strcmp(SYMBOL(term__V180),  "Text-Print1$5" ));
    Term sub__V181 = LINK(sink__V179->context, SUB(term__V180, 0)); int sub__V181_count = term__V180_count*LINK_COUNT(sub__V181); permitUnusedInt(sub__V181_count);
    CRSX_CHECK_SORT(sink__V179->context, sub__V181, &sort_M_Reified_xVariable); /* sub__V181 = &#111 */
    Term sub__V182 = LINK(sink__V179->context, SUB(term__V180, 1)); int sub__V182_count = term__V180_count*LINK_COUNT(sub__V182); permitUnusedInt(sub__V182_count);
    CRSX_CHECK_SORT(sink__V179->context, sub__V182, &sort_M_Reified_xVariable); /* sub__V182 = &#12 */
    Term sub__V183 = LINK(sink__V179->context, SUB(term__V180, 2)); int sub__V183_count = term__V180_count*LINK_COUNT(sub__V183); permitUnusedInt(sub__V183_count);
    UNLINK_SUB(sink__V179->context, term__V180,  2); NORMALIZE(sink__V179->context, sub__V183); SUB(term__V180,  2) = LINK(sink__V179->context, sub__V183);
    /* sub__V183 = &#2 */
    Term sub__V184 = SUB(term__V180, 3); int sub__V184_count = term__V180_count*LINK_COUNT(sub__V184); permitUnusedInt(sub__V184_count);
    /* sub__V184 = &#propsof0 */
    
    NamedPropertyLink namedP__V185 = LINK_NamedPropertyLink(sink__V179->context, NAMED_PROPERTIES(sub__V184));
    VariablePropertyLink varP__V186 = LINK_VariablePropertyLink(sink__V179->context, VARIABLE_PROPERTIES(sub__V184));
    UNLINK(sink__V179->context, term__V180);
    { char *str__V187;
      { char *sub__V188[2]; size_t sublength__V189[2]; size_t length__V190 = 0;
        { Term t__V191;
          { Sink buf__V192 = ALLOCA_BUFFER(sink__V179->context);
            { START(buf__V192, _M_Text_Print1);
              COPY(buf__V192, sub__V181);COPY(buf__V192, LINK(buf__V192->context, sub__V183));END(buf__V192, _M_Text_Print1); }
            t__V191 = BUFFER_TERM(buf__V192); FREE_BUFFER(buf__V192); }
          FORCE(sink__V179->context, t__V191);
          length__V190 += (sublength__V189[0] = strlen(sub__V188[0] = SYMBOL(t__V191)));
          UNLINK(sink__V179->context, t__V191); { Term t__V193;
            { Sink buf__V194 = ALLOCA_BUFFER(sink__V179->context);
              { START(buf__V194, _M_Text_Print1);
                COPY(buf__V194, sub__V182);COPY(buf__V194, sub__V183);END(buf__V194, _M_Text_Print1); }
              t__V193 = BUFFER_TERM(buf__V194); FREE_BUFFER(buf__V194); }
            FORCE(sink__V179->context, t__V193);
            length__V190 += (sublength__V189[1] = strlen(sub__V188[1] = SYMBOL(t__V193)));
            UNLINK(sink__V179->context, t__V193); { char *str__V195 = ALLOCATE(sink__V179->context, length__V190+1), *p__V196 = str__V195;
              int i; for (i = 0; i < 2; ++i) { memcpy(p__V196, sub__V188[i], sublength__V189[i]); p__V196 += sublength__V189[i]; }
              *p__V196 = '\0';
              ASSERT(sink__V179->context, strlen(str__V195) == length__V190);
              str__V187 = str__V195; }
            
          }
        } }
      LITERALU(sink__V179, str__V187); }
    UNLINK_NamedPropertyLink(sink__V179->context, namedP__V185); 
    UNLINK_VariablePropertyLink(sink__V179->context, varP__V186);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Print1$4. */
int conBindOffs_M_Text_Print1_s4[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_Text_Print1_s4(Term term) { return  "Text-Print1$4" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print1_s4 = {NULL, 0, 4, sizeof(STRUCT_Con_M_Text_Print1_s4), conBindOffs_M_Text_Print1_s4, &nameFun_M_Text_Print1_s4, &step_M_Text_Print1_s4};

int step_M_Text_Print1_s4(Sink sink__V197, Term term__V198)
{
  int term__V198_count = LINK_COUNT(term__V198); permitUnusedInt(term__V198_count);
  do {
    /* Contraction rule Text-Print1-6. */
    ASSERT(sink__V197->context, !strcmp(SYMBOL(term__V198),  "Text-Print1$4" ));
    Term sub__V199 = LINK(sink__V197->context, SUB(term__V198, 0)); int sub__V199_count = term__V198_count*LINK_COUNT(sub__V199); permitUnusedInt(sub__V199_count);
    CRSX_CHECK_SORT(sink__V197->context, sub__V199, &sort_M_Reified_xVariable); /* sub__V199 = &#111 */
    Term sub__V200 = LINK(sink__V197->context, SUB(term__V198, 1)); int sub__V200_count = term__V198_count*LINK_COUNT(sub__V200); permitUnusedInt(sub__V200_count);
    CRSX_CHECK_SORT(sink__V197->context, sub__V200, &sort_M_Reified_xVariable); /* sub__V200 = &#12 */
    Term sub__V201 = LINK(sink__V197->context, SUB(term__V198, 2)); int sub__V201_count = term__V198_count*LINK_COUNT(sub__V201); permitUnusedInt(sub__V201_count);
    UNLINK_SUB(sink__V197->context, term__V198,  2); NORMALIZE(sink__V197->context, sub__V201); SUB(term__V198,  2) = LINK(sink__V197->context, sub__V201);
    /* sub__V201 = &#2 */
    Term sub__V202 = SUB(term__V198, 3); int sub__V202_count = term__V198_count*LINK_COUNT(sub__V202); permitUnusedInt(sub__V202_count);
    /* sub__V202 = &#propsof0 */
    
    NamedPropertyLink namedP__V203 = LINK_NamedPropertyLink(sink__V197->context, NAMED_PROPERTIES(sub__V202));
    VariablePropertyLink varP__V204 = LINK_VariablePropertyLink(sink__V197->context, VARIABLE_PROPERTIES(sub__V202));
    UNLINK(sink__V197->context, term__V198);
    { char *str__V205;
      { char *sub__V206[2]; size_t sublength__V207[2]; size_t length__V208 = 0;
        { Term t__V209;
          { Sink buf__V210 = ALLOCA_BUFFER(sink__V197->context);
            { START(buf__V210, _M_Text_Print1);
              COPY(buf__V210, sub__V199);COPY(buf__V210, LINK(buf__V210->context, sub__V201));END(buf__V210, _M_Text_Print1); }
            t__V209 = BUFFER_TERM(buf__V210); FREE_BUFFER(buf__V210); }
          FORCE(sink__V197->context, t__V209);
          length__V208 += (sublength__V207[0] = strlen(sub__V206[0] = SYMBOL(t__V209)));
          UNLINK(sink__V197->context, t__V209); { Term t__V211;
            { Sink buf__V212 = ALLOCA_BUFFER(sink__V197->context);
              { START(buf__V212, _M_Text_Print1);
                COPY(buf__V212, sub__V200);COPY(buf__V212, sub__V201);END(buf__V212, _M_Text_Print1); }
              t__V211 = BUFFER_TERM(buf__V212); FREE_BUFFER(buf__V212); }
            FORCE(sink__V197->context, t__V211);
            length__V208 += (sublength__V207[1] = strlen(sub__V206[1] = SYMBOL(t__V211)));
            UNLINK(sink__V197->context, t__V211); { char *str__V213 = ALLOCATE(sink__V197->context, length__V208+1), *p__V214 = str__V213;
              int i; for (i = 0; i < 2; ++i) { memcpy(p__V214, sub__V206[i], sublength__V207[i]); p__V214 += sublength__V207[i]; }
              *p__V214 = '\0';
              ASSERT(sink__V197->context, strlen(str__V213) == length__V208);
              str__V205 = str__V213; }
            
          }
        } }
      LITERALU(sink__V197, str__V205); }
    UNLINK_NamedPropertyLink(sink__V197->context, namedP__V203); 
    UNLINK_VariablePropertyLink(sink__V197->context, varP__V204);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Print1$9. */
int conBindOffs_M_Text_Print1_s9[] = {0 , 0 , 0};
char *nameFun_M_Text_Print1_s9(Term term) { return  "Text-Print1$9" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print1_s9 = {NULL, 0, 2, sizeof(STRUCT_Con_M_Text_Print1_s9), conBindOffs_M_Text_Print1_s9, &nameFun_M_Text_Print1_s9, &step_M_Text_Print1_s9};

int step_M_Text_Print1_s9(Sink sink__V215, Term term__V216)
{
  int term__V216_count = LINK_COUNT(term__V216); permitUnusedInt(term__V216_count);
  do {
    /* Contraction rule Text-Print1-8. */
    ASSERT(sink__V215->context, !strcmp(SYMBOL(term__V216),  "Text-Print1$9" ));
    Term sub__V217 = SUB(term__V216, 0); int sub__V217_count = term__V216_count*LINK_COUNT(sub__V217); permitUnusedInt(sub__V217_count);
    /* sub__V217 = &#2 */
    Term sub__V218 = SUB(term__V216, 1); int sub__V218_count = term__V216_count*LINK_COUNT(sub__V218); permitUnusedInt(sub__V218_count);
    /* sub__V218 = &#propsof0 */
    
    NamedPropertyLink namedP__V219 = LINK_NamedPropertyLink(sink__V215->context, NAMED_PROPERTIES(sub__V218));
    VariablePropertyLink varP__V220 = LINK_VariablePropertyLink(sink__V215->context, VARIABLE_PROPERTIES(sub__V218));
    UNLINK(sink__V215->context, term__V216);
    LITERAL(sink__V215,  "" ); UNLINK_NamedPropertyLink(sink__V215->context, namedP__V219); 
    UNLINK_VariablePropertyLink(sink__V215->context, varP__V220);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Print1$8. */
int conBindOffs_M_Text_Print1_s8[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_Text_Print1_s8(Term term) { return  "Text-Print1$8" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print1_s8 = {NULL, 0, 4, sizeof(STRUCT_Con_M_Text_Print1_s8), conBindOffs_M_Text_Print1_s8, &nameFun_M_Text_Print1_s8, &step_M_Text_Print1_s8};

int step_M_Text_Print1_s8(Sink sink__V221, Term term__V222)
{
  int term__V222_count = LINK_COUNT(term__V222); permitUnusedInt(term__V222_count);
  do {
    /* Contraction rule Text-Print1-7. */
    ASSERT(sink__V221->context, !strcmp(SYMBOL(term__V222),  "Text-Print1$8" ));
    Term sub__V223 = LINK(sink__V221->context, SUB(term__V222, 0)); int sub__V223_count = term__V222_count*LINK_COUNT(sub__V223); permitUnusedInt(sub__V223_count);
    CRSX_CHECK_SORT(sink__V221->context, sub__V223, &sort_M_Reified_xVariable); /* sub__V223 = &#111 */
    Term sub__V224 = LINK(sink__V221->context, SUB(term__V222, 1)); int sub__V224_count = term__V222_count*LINK_COUNT(sub__V224); permitUnusedInt(sub__V224_count);
    CRSX_CHECK_SORT(sink__V221->context, sub__V224, &sort_M_Reified_xVariable); /* sub__V224 = &#12 */
    Term sub__V225 = LINK(sink__V221->context, SUB(term__V222, 2)); int sub__V225_count = term__V222_count*LINK_COUNT(sub__V225); permitUnusedInt(sub__V225_count);
    UNLINK_SUB(sink__V221->context, term__V222,  2); NORMALIZE(sink__V221->context, sub__V225); SUB(term__V222,  2) = LINK(sink__V221->context, sub__V225);
    /* sub__V225 = &#2 */
    Term sub__V226 = SUB(term__V222, 3); int sub__V226_count = term__V222_count*LINK_COUNT(sub__V226); permitUnusedInt(sub__V226_count);
    /* sub__V226 = &#propsof0 */
    
    NamedPropertyLink namedP__V227 = LINK_NamedPropertyLink(sink__V221->context, NAMED_PROPERTIES(sub__V226));
    VariablePropertyLink varP__V228 = LINK_VariablePropertyLink(sink__V221->context, VARIABLE_PROPERTIES(sub__V226));
    UNLINK(sink__V221->context, term__V222);
    { char *str__V229;
      { char *sub__V230[2]; size_t sublength__V231[2]; size_t length__V232 = 0;
        { Term t__V233;
          { Sink buf__V234 = ALLOCA_BUFFER(sink__V221->context);
            { START(buf__V234, _M_Text_Print1);
              COPY(buf__V234, sub__V223);COPY(buf__V234, LINK(buf__V234->context, sub__V225));END(buf__V234, _M_Text_Print1); }
            t__V233 = BUFFER_TERM(buf__V234); FREE_BUFFER(buf__V234); }
          FORCE(sink__V221->context, t__V233);
          length__V232 += (sublength__V231[0] = strlen(sub__V230[0] = SYMBOL(t__V233)));
          UNLINK(sink__V221->context, t__V233); { Term t__V235;
            { Sink buf__V236 = ALLOCA_BUFFER(sink__V221->context);
              { START(buf__V236, _M_Text_Print1);
                COPY(buf__V236, sub__V224);COPY(buf__V236, sub__V225);END(buf__V236, _M_Text_Print1); }
              t__V235 = BUFFER_TERM(buf__V236); FREE_BUFFER(buf__V236); }
            FORCE(sink__V221->context, t__V235);
            length__V232 += (sublength__V231[1] = strlen(sub__V230[1] = SYMBOL(t__V235)));
            UNLINK(sink__V221->context, t__V235); { char *str__V237 = ALLOCATE(sink__V221->context, length__V232+1), *p__V238 = str__V237;
              int i; for (i = 0; i < 2; ++i) { memcpy(p__V238, sub__V230[i], sublength__V231[i]); p__V238 += sublength__V231[i]; }
              *p__V238 = '\0';
              ASSERT(sink__V221->context, strlen(str__V237) == length__V232);
              str__V229 = str__V237; }
            
          }
        } }
      LITERALU(sink__V221, str__V229); }
    UNLINK_NamedPropertyLink(sink__V221->context, namedP__V227); 
    UNLINK_VariablePropertyLink(sink__V221->context, varP__V228);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Text. */
int conBindOffs_M_Text_Text[] = {0 , 0};
char *nameFun_M_Text_Text(Term term) { return  "Text-Text" ; }
struct _ConstructionDescriptor descriptor_M_Text_Text = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Text_Text), conBindOffs_M_Text_Text, &nameFun_M_Text_Text, &step_M_Text_Text};

int step_M_Text_Text(Sink sink__V239, Term term__V240)
{
  int term__V240_count = LINK_COUNT(term__V240); permitUnusedInt(term__V240_count);
  do {
    /* Contraction rule Text-Text-1. */
    ASSERT(sink__V239->context, !strcmp(SYMBOL(term__V240),  "Text-Text" ));
    Term sub__V241 = LINK(sink__V239->context, SUB(term__V240, 0)); int sub__V241_count = term__V240_count*LINK_COUNT(sub__V241); permitUnusedInt(sub__V241_count);
    CRSX_CHECK_SORT(sink__V239->context, sub__V241, &sort_M_Reified_xVariable); /* sub__V241 = &#1 */
    
    NamedPropertyLink namedP__V242 = LINK_NamedPropertyLink(sink__V239->context, NAMED_PROPERTIES(term__V240));
    VariablePropertyLink varP__V243 = LINK_VariablePropertyLink(sink__V239->context, VARIABLE_PROPERTIES(term__V240));
    UNLINK(sink__V239->context, term__V240);
    { START(sink__V239, _M_Text_User);
      LITERAL(sink__V239,  "n" ); COPY(sink__V239, sub__V241);END(sink__V239, _M_Text_User); }
    UNLINK_NamedPropertyLink(sink__V239->context, namedP__V242); 
    UNLINK_VariablePropertyLink(sink__V239->context, varP__V243);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Indent. */
int conBindOffs_M_Text_Indent[] = {0 , 0};
char *nameFun_M_Text_Indent(Term term) { return  "Text-Indent" ; }
struct _ConstructionDescriptor descriptor_M_Text_Indent = {NULL, 0, 1, sizeof(STRUCT_Con_M_Text_Indent), conBindOffs_M_Text_Indent, &nameFun_M_Text_Indent, &step_M_Text_Indent};

int step_M_Text_Indent(Sink sink__V244, Term term__V245)
{
  int term__V245_count = LINK_COUNT(term__V245); permitUnusedInt(term__V245_count);
  do {
    /* Contraction rule Text-Indent-1. */
    ASSERT(sink__V244->context, !strcmp(SYMBOL(term__V245),  "Text-Indent" ));
    Term sub__V246 = SUB(term__V245, 0); int sub__V246_count = term__V245_count*LINK_COUNT(sub__V246); permitUnusedInt(sub__V246_count);
    /* sub__V246 = &1 */
    UNLINK(sink__V244->context, term__V245);
    LITERAL(sink__V244,  "" ); 
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Text-Print. */
int conBindOffs_M_Text_Print[] = {0 , 0};
char *nameFun_M_Text_Print(Term term) { return  "Text-Print" ; }
struct _ConstructionDescriptor descriptor_M_Text_Print = {NULL, 0, 1, sizeof(STRUCT_Con_M_Text_Print), conBindOffs_M_Text_Print, &nameFun_M_Text_Print, &step_M_Text_Print};

int step_M_Text_Print(Sink sink__V247, Term term__V248)
{
  int term__V248_count = LINK_COUNT(term__V248); permitUnusedInt(term__V248_count);
  do {
    /* Contraction rule Text-Print-1. */
    ASSERT(sink__V247->context, !strcmp(SYMBOL(term__V248),  "Text-Print" ));
    Term sub__V249 = LINK(sink__V247->context, SUB(term__V248, 0)); int sub__V249_count = term__V248_count*LINK_COUNT(sub__V249); permitUnusedInt(sub__V249_count);
    CRSX_CHECK_SORT(sink__V247->context, sub__V249, &sort_M_Reified_xVariable); /* sub__V249 = &#1 */
    UNLINK(sink__V247->context, term__V248);
    { START(sink__V247, _M_Text_Print1);
      COPY(sink__V247, sub__V249);LITERAL(sink__V247,  "0" ); END(sink__V247, _M_Text_Print1); }
    
    return 1;
  } while (0);
  return 0;
}

#ifdef __cplusplus
}
#endif
/* END OF C RULES FOR CRSX CRSXC MODULE Text. */
