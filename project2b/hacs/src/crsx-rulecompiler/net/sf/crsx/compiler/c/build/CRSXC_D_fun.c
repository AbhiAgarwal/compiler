/* C RULES FOR CRSX CRSXC MODULE D. */
#include "CRSXC.h" 
#ifdef __cplusplus
extern "C" {
#endif

/* FUNCTION DCOMMENT_TOKEN. */
int conBindOffs_M_DCOMMENT_xTOKEN[] = {0 , 0 , 0};
char *nameFun_M_DCOMMENT_xTOKEN(Term term) { return  "DCOMMENT_TOKEN" ; }
struct _ConstructionDescriptor descriptor_M_DCOMMENT_xTOKEN = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_DCOMMENT_xTOKEN), conBindOffs_M_DCOMMENT_xTOKEN, &nameFun_M_DCOMMENT_xTOKEN, &step_M_DCOMMENT_xTOKEN};

int step_M_DCOMMENT_xTOKEN(Sink sink__V1, Term term__V2)
{
  int term__V2_count = LINK_COUNT(term__V2); permitUnusedInt(term__V2_count);
  Term sub__V3 = FORCE(sink__V1->context, SUB(term__V2, 0));
  EnumOf_M_OK_xSORT choice__V4 = (IS_VARIABLE_USE(sub__V3) ? VarOf_M_OK_xSORT : (EnumOf_M_OK_xSORT) TAG(sub__V3));
  switch (choice__V4)
  {
    case Data_M_OK: { /* Function DEFS-DCOMMENT_TOKEN-1$DCOMMENT_TOKEN$OK case OK */
      ASSERT(sink__V1->context, !strcmp(SYMBOL(term__V2),  "DCOMMENT_TOKEN" ));
      Term sub__V5 = SUB(term__V2, 0); int sub__V5_count = term__V2_count*LINK_COUNT(sub__V5); permitUnusedInt(sub__V5_count);
      CRSX_CHECK_SORT(sink__V1->context, sub__V5, &sort_M_OK_xSORT); ASSERT(sink__V1->context, !strcmp(SYMBOL(sub__V5),  "OK" ));
      Term sub__V6 = LINK(sink__V1->context, SUB(term__V2, 1)); int sub__V6_count = term__V2_count*LINK_COUNT(sub__V6); permitUnusedInt(sub__V6_count);
      /* sub__V6 = &#0 */
      
      NamedPropertyLink namedP__V7 = LINK_NamedPropertyLink(sink__V1->context, NAMED_PROPERTIES(term__V2));
      VariablePropertyLink varP__V8 = LINK_VariablePropertyLink(sink__V1->context, VARIABLE_PROPERTIES(term__V2));
      UNLINK(sink__V1->context, term__V2);
      ADD_PROPERTIES(sink__V1, LINK_NamedPropertyLink(sink__V1->context, namedP__V7), LINK_VariablePropertyLink(sink__V1->context, varP__V8));
      { START(sink__V1, _M_DCOMMENT_xTOKEN_s1);
        COPY(sink__V1, sub__V6);END(sink__V1, _M_DCOMMENT_xTOKEN_s1); }
      UNLINK_NamedPropertyLink(sink__V1->context, namedP__V7); 
      UNLINK_VariablePropertyLink(sink__V1->context, varP__V8);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION IfZero. */
int conBindOffs_M_IfZero[] = {0 , 0 , 0 , 0};
char *nameFun_M_IfZero(Term term) { return  "IfZero" ; }
struct _ConstructionDescriptor descriptor_M_IfZero = {NULL, 0, 3, sizeof(STRUCT_Con_M_IfZero), conBindOffs_M_IfZero, &nameFun_M_IfZero, &step_M_IfZero};

int step_M_IfZero(Sink sink__V9, Term term__V10)
{
  int term__V10_count = LINK_COUNT(term__V10); permitUnusedInt(term__V10_count);
  do {
    /* Contraction rule DEFS-IfZero-1. */
    ASSERT(sink__V9->context, !strcmp(SYMBOL(term__V10),  "IfZero" ));
    Term sub__V11 = LINK(sink__V9->context, SUB(term__V10, 0)); int sub__V11_count = term__V10_count*LINK_COUNT(sub__V11); permitUnusedInt(sub__V11_count);
    UNLINK_SUB(sink__V9->context, term__V10,  0); NORMALIZE(sink__V9->context, sub__V11); SUB(term__V10,  0) = LINK(sink__V9->context, sub__V11);
    /* sub__V11 = &#1 */
    Term sub__V12 = LINK(sink__V9->context, SUB(term__V10, 1)); int sub__V12_count = term__V10_count*LINK_COUNT(sub__V12); permitUnusedInt(sub__V12_count);
    /* sub__V12 = &#2 */
    Term sub__V13 = LINK(sink__V9->context, SUB(term__V10, 2)); int sub__V13_count = term__V10_count*LINK_COUNT(sub__V13); permitUnusedInt(sub__V13_count);
    /* sub__V13 = &#3 */
    UNLINK(sink__V9->context, term__V10);
    { long long intt__V14;
      intt__V14 = LONGLONG(sub__V11); UNLINK(sink__V9->context, sub__V11);
      if (intt__V14 == 0ll) {  UNLINK(sink__V9->context, sub__V13); COPY(sink__V9, sub__V12); }
      else { COPY(sink__V9, sub__V13); }
    }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MetaVar2. */
int conBindOffs_M_MetaVar2[] = {0 , 0};
char *nameFun_M_MetaVar2(Term term) { return  "MetaVar2" ; }
struct _ConstructionDescriptor descriptor_M_MetaVar2 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_MetaVar2), conBindOffs_M_MetaVar2, &nameFun_M_MetaVar2, &step_M_MetaVar2};

int step_M_MetaVar2(Sink sink__V15, Term term__V16)
{
  int term__V16_count = LINK_COUNT(term__V16); permitUnusedInt(term__V16_count);
  Term sub__V17 = FORCE(sink__V15->context, SUB(term__V16, 0));
  EnumOf_M_STRING_xENTRY choice__V18 = (IS_VARIABLE_USE(sub__V17) ? VarOf_M_STRING_xENTRY : (EnumOf_M_STRING_xENTRY) TAG(sub__V17));
  switch (choice__V18)
  {
    case Data_M_VARIABLE: { /* Function DEFS-MetaVar2-1$MetaVar2$VARIABLE case VARIABLE */
      ASSERT(sink__V15->context, !strcmp(SYMBOL(term__V16),  "MetaVar2" ));
      Term sub__V19 = SUB(term__V16, 0); int sub__V19_count = term__V16_count*LINK_COUNT(sub__V19); permitUnusedInt(sub__V19_count);
      CRSX_CHECK_SORT(sink__V15->context, sub__V19, &sort_M_STRING_xENTRY); ASSERT(sink__V15->context, !strcmp(SYMBOL(sub__V19),  "VARIABLE" ));
      Term sub__V20 = LINK(sink__V15->context, SUB(sub__V19, 0)); int sub__V20_count = sub__V19_count*LINK_COUNT(sub__V20); permitUnusedInt(sub__V20_count);
      CRSX_CHECK_SORT(sink__V15->context, sub__V20, &sort_M_Reified_xVariable); /* sub__V20 = &#0-0 */
      
      NamedPropertyLink namedP__V21 = LINK_NamedPropertyLink(sink__V15->context, NAMED_PROPERTIES(term__V16));
      VariablePropertyLink varP__V22 = LINK_VariablePropertyLink(sink__V15->context, VARIABLE_PROPERTIES(term__V16));
      UNLINK(sink__V15->context, term__V16);
      ADD_PROPERTIES(sink__V15, LINK_NamedPropertyLink(sink__V15->context, namedP__V21), LINK_VariablePropertyLink(sink__V15->context, varP__V22));
      { START(sink__V15, _M_MetaVar2_s2);
        COPY(sink__V15, sub__V20);END(sink__V15, _M_MetaVar2_s2); }
      UNLINK_NamedPropertyLink(sink__V15->context, namedP__V21); 
      UNLINK_VariablePropertyLink(sink__V15->context, varP__V22);
      
      return 1;
    break; } case Data_M_STRING_xVALUE: { /* Function DEFS-MetaVar2-2$MetaVar2$STRING_VALUE case STRING_VALUE */
      ASSERT(sink__V15->context, !strcmp(SYMBOL(term__V16),  "MetaVar2" ));
      Term sub__V23 = SUB(term__V16, 0); int sub__V23_count = term__V16_count*LINK_COUNT(sub__V23); permitUnusedInt(sub__V23_count);
      CRSX_CHECK_SORT(sink__V15->context, sub__V23, &sort_M_STRING_xENTRY); ASSERT(sink__V15->context, !strcmp(SYMBOL(sub__V23),  "STRING_VALUE" ));
      Term sub__V24 = LINK(sink__V15->context, SUB(sub__V23, 0)); int sub__V24_count = sub__V23_count*LINK_COUNT(sub__V24); permitUnusedInt(sub__V24_count);
      /* sub__V24 = &#0-0 */
      
      NamedPropertyLink namedP__V25 = LINK_NamedPropertyLink(sink__V15->context, NAMED_PROPERTIES(term__V16));
      VariablePropertyLink varP__V26 = LINK_VariablePropertyLink(sink__V15->context, VARIABLE_PROPERTIES(term__V16));
      UNLINK(sink__V15->context, term__V16);
      ADD_PROPERTIES(sink__V15, LINK_NamedPropertyLink(sink__V15->context, namedP__V25), LINK_VariablePropertyLink(sink__V15->context, varP__V26));
      { START(sink__V15, _M_MetaVar2_s1);
        COPY(sink__V15, sub__V24);END(sink__V15, _M_MetaVar2_s1); }
      UNLINK_NamedPropertyLink(sink__V15->context, namedP__V25); 
      UNLINK_VariablePropertyLink(sink__V15->context, varP__V26);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION T-CheckReuse-Variable. */
int conBindOffs_M_T_CheckReuse_Variable[] = {0 , 0};
char *nameFun_M_T_CheckReuse_Variable(Term term) { return  "T-CheckReuse-Variable" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_Variable = {&sort_M_T_xREUSE_xSORT, 0, 1, sizeof(STRUCT_Con_M_T_CheckReuse_Variable), conBindOffs_M_T_CheckReuse_Variable, &nameFun_M_T_CheckReuse_Variable, &step_M_T_CheckReuse_Variable};

int step_M_T_CheckReuse_Variable(Sink sink__V27, Term term__V28)
{
  int term__V28_count = LINK_COUNT(term__V28); permitUnusedInt(term__V28_count);
  Term sub__V29 = FORCE(sink__V27->context, SUB(term__V28, 0));
  EnumOf_M_VARIABLE_xENTRY choice__V30 = (IS_VARIABLE_USE(sub__V29) ? VarOf_M_VARIABLE_xENTRY : (EnumOf_M_VARIABLE_xENTRY) TAG(sub__V29));
  switch (choice__V30)
  {
    case Data_M_FRESHREUSE: { /* Function DEFS-T-CheckReuse-Variable-1$T-CheckReuse-Variable$FRESHREUSE case FRESHREUSE */
      ASSERT(sink__V27->context, !strcmp(SYMBOL(term__V28),  "T-CheckReuse-Variable" ));
      Term sub__V31 = SUB(term__V28, 0); int sub__V31_count = term__V28_count*LINK_COUNT(sub__V31); permitUnusedInt(sub__V31_count);
      CRSX_CHECK_SORT(sink__V27->context, sub__V31, &sort_M_VARIABLE_xENTRY); ASSERT(sink__V27->context, !strcmp(SYMBOL(sub__V31),  "FRESHREUSE" ));
      
      NamedPropertyLink namedP__V32 = LINK_NamedPropertyLink(sink__V27->context, NAMED_PROPERTIES(term__V28));
      VariablePropertyLink varP__V33 = LINK_VariablePropertyLink(sink__V27->context, VARIABLE_PROPERTIES(term__V28));
      UNLINK(sink__V27->context, term__V28);
      ADD_PROPERTIES(sink__V27, LINK_NamedPropertyLink(sink__V27->context, namedP__V32), LINK_VariablePropertyLink(sink__V27->context, varP__V33));
      { START(sink__V27, _M_T_CheckReuse_Variable_s5);
        END(sink__V27, _M_T_CheckReuse_Variable_s5); }
      UNLINK_NamedPropertyLink(sink__V27->context, namedP__V32); 
      UNLINK_VariablePropertyLink(sink__V27->context, varP__V33);
      
      return 1;
    break; } case Data_M_BOUNDREUSE: { /* Function DEFS-T-CheckReuse-Variable-2$T-CheckReuse-Variable$BOUNDREUSE case BOUNDREUSE */
      ASSERT(sink__V27->context, !strcmp(SYMBOL(term__V28),  "T-CheckReuse-Variable" ));
      Term sub__V34 = SUB(term__V28, 0); int sub__V34_count = term__V28_count*LINK_COUNT(sub__V34); permitUnusedInt(sub__V34_count);
      CRSX_CHECK_SORT(sink__V27->context, sub__V34, &sort_M_VARIABLE_xENTRY); ASSERT(sink__V27->context, !strcmp(SYMBOL(sub__V34),  "BOUNDREUSE" ));
      
      NamedPropertyLink namedP__V35 = LINK_NamedPropertyLink(sink__V27->context, NAMED_PROPERTIES(term__V28));
      VariablePropertyLink varP__V36 = LINK_VariablePropertyLink(sink__V27->context, VARIABLE_PROPERTIES(term__V28));
      UNLINK(sink__V27->context, term__V28);
      ADD_PROPERTIES(sink__V27, LINK_NamedPropertyLink(sink__V27->context, namedP__V35), LINK_VariablePropertyLink(sink__V27->context, varP__V36));
      { START(sink__V27, _M_T_CheckReuse_Variable_s2);
        END(sink__V27, _M_T_CheckReuse_Variable_s2); }
      UNLINK_NamedPropertyLink(sink__V27->context, namedP__V35); 
      UNLINK_VariablePropertyLink(sink__V27->context, varP__V36);
      
      return 1;
    break; } case Data_M_BOUND: { /* Function DEFS-T-CheckReuse-Variable-3$T-CheckReuse-Variable$BOUND case BOUND */
      ASSERT(sink__V27->context, !strcmp(SYMBOL(term__V28),  "T-CheckReuse-Variable" ));
      Term sub__V37 = SUB(term__V28, 0); int sub__V37_count = term__V28_count*LINK_COUNT(sub__V37); permitUnusedInt(sub__V37_count);
      CRSX_CHECK_SORT(sink__V27->context, sub__V37, &sort_M_VARIABLE_xENTRY); ASSERT(sink__V27->context, !strcmp(SYMBOL(sub__V37),  "BOUND" ));
      
      NamedPropertyLink namedP__V38 = LINK_NamedPropertyLink(sink__V27->context, NAMED_PROPERTIES(term__V28));
      VariablePropertyLink varP__V39 = LINK_VariablePropertyLink(sink__V27->context, VARIABLE_PROPERTIES(term__V28));
      UNLINK(sink__V27->context, term__V28);
      ADD_PROPERTIES(sink__V27, LINK_NamedPropertyLink(sink__V27->context, namedP__V38), LINK_VariablePropertyLink(sink__V27->context, varP__V39));
      { START(sink__V27, _M_T_CheckReuse_Variable_s1);
        END(sink__V27, _M_T_CheckReuse_Variable_s1); }
      UNLINK_NamedPropertyLink(sink__V27->context, namedP__V38); 
      UNLINK_VariablePropertyLink(sink__V27->context, varP__V39);
      
      return 1;
    break; } case Data_M_FREE: { /* Function DEFS-T-CheckReuse-Variable-4$T-CheckReuse-Variable$FREE case FREE */
      ASSERT(sink__V27->context, !strcmp(SYMBOL(term__V28),  "T-CheckReuse-Variable" ));
      Term sub__V40 = SUB(term__V28, 0); int sub__V40_count = term__V28_count*LINK_COUNT(sub__V40); permitUnusedInt(sub__V40_count);
      CRSX_CHECK_SORT(sink__V27->context, sub__V40, &sort_M_VARIABLE_xENTRY); ASSERT(sink__V27->context, !strcmp(SYMBOL(sub__V40),  "FREE" ));
      
      NamedPropertyLink namedP__V41 = LINK_NamedPropertyLink(sink__V27->context, NAMED_PROPERTIES(term__V28));
      VariablePropertyLink varP__V42 = LINK_VariablePropertyLink(sink__V27->context, VARIABLE_PROPERTIES(term__V28));
      UNLINK(sink__V27->context, term__V28);
      ADD_PROPERTIES(sink__V27, LINK_NamedPropertyLink(sink__V27->context, namedP__V41), LINK_VariablePropertyLink(sink__V27->context, varP__V42));
      { START(sink__V27, _M_T_CheckReuse_Variable_s3);
        END(sink__V27, _M_T_CheckReuse_Variable_s3); }
      UNLINK_NamedPropertyLink(sink__V27->context, namedP__V41); 
      UNLINK_VariablePropertyLink(sink__V27->context, varP__V42);
      
      return 1;
    break; } case Data_M_FRESH: { /* Function DEFS-T-CheckReuse-Variable-5$T-CheckReuse-Variable$FRESH case FRESH */
      ASSERT(sink__V27->context, !strcmp(SYMBOL(term__V28),  "T-CheckReuse-Variable" ));
      Term sub__V43 = SUB(term__V28, 0); int sub__V43_count = term__V28_count*LINK_COUNT(sub__V43); permitUnusedInt(sub__V43_count);
      CRSX_CHECK_SORT(sink__V27->context, sub__V43, &sort_M_VARIABLE_xENTRY); ASSERT(sink__V27->context, !strcmp(SYMBOL(sub__V43),  "FRESH" ));
      
      NamedPropertyLink namedP__V44 = LINK_NamedPropertyLink(sink__V27->context, NAMED_PROPERTIES(term__V28));
      VariablePropertyLink varP__V45 = LINK_VariablePropertyLink(sink__V27->context, VARIABLE_PROPERTIES(term__V28));
      UNLINK(sink__V27->context, term__V28);
      ADD_PROPERTIES(sink__V27, LINK_NamedPropertyLink(sink__V27->context, namedP__V44), LINK_VariablePropertyLink(sink__V27->context, varP__V45));
      { START(sink__V27, _M_T_CheckReuse_Variable_s4);
        END(sink__V27, _M_T_CheckReuse_Variable_s4); }
      UNLINK_NamedPropertyLink(sink__V27->context, namedP__V44); 
      UNLINK_VariablePropertyLink(sink__V27->context, varP__V45);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION COMMENT_TOKEN. */
int conBindOffs_M_COMMENT_xTOKEN[] = {0 , 0};
char *nameFun_M_COMMENT_xTOKEN(Term term) { return  "COMMENT_TOKEN" ; }
struct _ConstructionDescriptor descriptor_M_COMMENT_xTOKEN = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_COMMENT_xTOKEN), conBindOffs_M_COMMENT_xTOKEN, &nameFun_M_COMMENT_xTOKEN, &step_M_COMMENT_xTOKEN};

int step_M_COMMENT_xTOKEN(Sink sink__V46, Term term__V47)
{
  int term__V47_count = LINK_COUNT(term__V47); permitUnusedInt(term__V47_count);
  do {
    /* Contraction rule DEFS-COMMENT_TOKEN-1. */
    ASSERT(sink__V46->context, !strcmp(SYMBOL(term__V47),  "COMMENT_TOKEN" ));
    Term sub__V48 = LINK(sink__V46->context, SUB(term__V47, 0)); int sub__V48_count = term__V47_count*LINK_COUNT(sub__V48); permitUnusedInt(sub__V48_count);
    UNLINK_SUB(sink__V46->context, term__V47,  0); NORMALIZE(sink__V46->context, sub__V48); SUB(term__V47,  0) = LINK(sink__V46->context, sub__V48);
    /* sub__V48 = &#1 */
    
    NamedPropertyLink namedP__V49 = LINK_NamedPropertyLink(sink__V46->context, NAMED_PROPERTIES(term__V47));
    VariablePropertyLink varP__V50 = LINK_VariablePropertyLink(sink__V46->context, VARIABLE_PROPERTIES(term__V47));
    UNLINK(sink__V46->context, term__V47);
    { START(sink__V46, _M__sTextCons);
      { START(sink__V46, _M__sTextChars);
        { char *str__V51;
          FORCE(sink__V46->context, sub__V48); LINK(sink__V46->context, sub__V48);
          { char *replaced__V52;
            const size_t z = strlen(SYMBOL(sub__V48));
            if (* "*/" ) {
              const size_t oldz = strlen( "*/" ), newz = strlen( "*_/" );
              size_t limitz;
              if (oldz==newz) { limitz = z; }
              else { limitz = z; size_t growz = (oldz < newz ? newz - oldz : 0);
                if (growz > 0) { char *p = SYMBOL(sub__V48); while ((p = strstr(p,  "*/" ))) { limitz += growz; p += oldz; } } }
              replaced__V52 = ALLOCA(sink__V46->context, limitz+1);
              if (oldz==newz) { memcpy(replaced__V52, SYMBOL(sub__V48), z+1);
                char *r = replaced__V52; while ((r = strstr(r,  "*/" ))) { memcpy(r,  "*_/" , newz); r += oldz; } }
              else { char *s = SYMBOL(sub__V48), *ends = s+z, *r = replaced__V52, *next;
                while ((next = strstr(s,  "*/" ))) { size_t prez = next-s;
                  if (prez) { memcpy(r, s, prez); r += prez; } 
                  if (newz) { memcpy(r,  "*_/" , newz); r += newz; }
                  s = next+oldz;}
                if (s < ends) { memcpy(r, s, ends-s); r += ends-s; }
                *r = '\0';}
              }
            else { replaced__V52 = memcpy(ALLOCA(sink__V46->context, z+1), SYMBOL(sub__V48), z+1); }
             UNLINK(sink__V46->context, sub__V48);  UNLINK(sink__V46->context, sub__V48); { size_t z__V53 = strlen(replaced__V52) + 1; memcpy(str__V51 = ALLOCATE(sink__V46->context, z__V53), replaced__V52, z__V53); }
            
          }LITERALU(sink__V46, str__V51); }
        END(sink__V46, _M__sTextChars); }
      { START(sink__V46, _M__sTextNil); END(sink__V46, _M__sTextNil); }
      END(sink__V46, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V46->context, namedP__V49); 
    UNLINK_VariablePropertyLink(sink__V46->context, varP__V50);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION DTOKEN$1. */
int conBindOffs_M_DTOKEN_s1[] = {0 , 0};
char *nameFun_M_DTOKEN_s1(Term term) { return  "DTOKEN$1" ; }
struct _ConstructionDescriptor descriptor_M_DTOKEN_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_DTOKEN_s1), conBindOffs_M_DTOKEN_s1, &nameFun_M_DTOKEN_s1, &step_M_DTOKEN_s1};

int step_M_DTOKEN_s1(Sink sink__V54, Term term__V55)
{
  int term__V55_count = LINK_COUNT(term__V55); permitUnusedInt(term__V55_count);
  do {
    /* Contraction rule DEFS-DTOKEN-1. */
    ASSERT(sink__V54->context, !strcmp(SYMBOL(term__V55),  "DTOKEN$1" ));
    Term sub__V56 = LINK(sink__V54->context, SUB(term__V55, 0)); int sub__V56_count = term__V55_count*LINK_COUNT(sub__V56); permitUnusedInt(sub__V56_count);
    UNLINK_SUB(sink__V54->context, term__V55,  0); NORMALIZE(sink__V54->context, sub__V56); SUB(term__V55,  0) = LINK(sink__V54->context, sub__V56);
    /* sub__V56 = &#2 */
    
    NamedPropertyLink namedP__V57 = LINK_NamedPropertyLink(sink__V54->context, NAMED_PROPERTIES(term__V55));
    VariablePropertyLink varP__V58 = LINK_VariablePropertyLink(sink__V54->context, VARIABLE_PROPERTIES(term__V55));
    UNLINK(sink__V54->context, term__V55);
    { START(sink__V54, _M__sTextCons);
      { START(sink__V54, _M__sTextChars);
        COPY(sink__V54, sub__V56);END(sink__V54, _M__sTextChars); }
      { START(sink__V54, _M__sTextNil); END(sink__V54, _M__sTextNil); }
      END(sink__V54, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V54->context, namedP__V57); 
    UNLINK_VariablePropertyLink(sink__V54->context, varP__V58);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION DSTRING$1. */
int conBindOffs_M_DSTRING_s1[] = {0 , 0};
char *nameFun_M_DSTRING_s1(Term term) { return  "DSTRING$1" ; }
struct _ConstructionDescriptor descriptor_M_DSTRING_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_DSTRING_s1), conBindOffs_M_DSTRING_s1, &nameFun_M_DSTRING_s1, &step_M_DSTRING_s1};

int step_M_DSTRING_s1(Sink sink__V59, Term term__V60)
{
  int term__V60_count = LINK_COUNT(term__V60); permitUnusedInt(term__V60_count);
  do {
    /* Contraction rule DEFS-DSTRING-1. */
    ASSERT(sink__V59->context, !strcmp(SYMBOL(term__V60),  "DSTRING$1" ));
    Term sub__V61 = LINK(sink__V59->context, SUB(term__V60, 0)); int sub__V61_count = term__V60_count*LINK_COUNT(sub__V61); permitUnusedInt(sub__V61_count);
    UNLINK_SUB(sink__V59->context, term__V60,  0); NORMALIZE(sink__V59->context, sub__V61); SUB(term__V60,  0) = LINK(sink__V59->context, sub__V61);
    /* sub__V61 = &#2 */
    
    NamedPropertyLink namedP__V62 = LINK_NamedPropertyLink(sink__V59->context, NAMED_PROPERTIES(term__V60));
    VariablePropertyLink varP__V63 = LINK_VariablePropertyLink(sink__V59->context, VARIABLE_PROPERTIES(term__V60));
    UNLINK(sink__V59->context, term__V60);
    { START(sink__V59, _M__sTextCons);
      { START(sink__V59, _M__sTextChars);
        LITERAL(sink__V59,  " " ); END(sink__V59, _M__sTextChars); }
      { START(sink__V59, _M__sTextCons);
        { START(sink__V59, _M__sTextString);
          { START(sink__V59, _M__sTextCons);
            { START(sink__V59, _M__sTextChars);
              { char *str__V64;
                FORCE(sink__V59->context, sub__V61); LINK(sink__V59->context, sub__V61);
                {str__V64 = makeEscaped(sink__V59->context, SYMBOL(sub__V61));
                   UNLINK(sink__V59->context, sub__V61);  UNLINK(sink__V59->context, sub__V61); }
                LITERALU(sink__V59, str__V64); }
              END(sink__V59, _M__sTextChars); }
            { START(sink__V59, _M__sTextNil);
              END(sink__V59, _M__sTextNil); }
            END(sink__V59, _M__sTextCons); }
          END(sink__V59, _M__sTextString); }
        { START(sink__V59, _M__sTextCons);
          { START(sink__V59, _M__sTextChars);
            LITERAL(sink__V59,  " " ); END(sink__V59, _M__sTextChars); }
          { START(sink__V59, _M__sTextNil);
            END(sink__V59, _M__sTextNil); }
          END(sink__V59, _M__sTextCons); }
        END(sink__V59, _M__sTextCons); }
      END(sink__V59, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V59->context, namedP__V62); 
    UNLINK_VariablePropertyLink(sink__V59->context, varP__V63);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MoveToTerm$4. */
int conBindOffs_M_MoveToTerm_s4[] = {0 , 0 , 0 , 0 , 0 , 1};
char *nameFun_M_MoveToTerm_s4(Term term) { return  "MoveToTerm$4" ; }
struct _ConstructionDescriptor descriptor_M_MoveToTerm_s4 = {&sort_M_Reified_xTerm, 0, 5, sizeof(STRUCT_Con_M_MoveToTerm_s4), conBindOffs_M_MoveToTerm_s4, &nameFun_M_MoveToTerm_s4, &step_M_MoveToTerm_s4};

int step_M_MoveToTerm_s4(Sink sink__V65, Term term__V66)
{
  int term__V66_count = LINK_COUNT(term__V66); permitUnusedInt(term__V66_count);
  do {
    /* Contraction rule DEFS-MoveToTerm-1. */
    ASSERT(sink__V65->context, !strcmp(SYMBOL(term__V66),  "MoveToTerm$4" ));
    Term sub__V67 = SUB(term__V66, 0); int sub__V67_count = term__V66_count*LINK_COUNT(sub__V67); permitUnusedInt(sub__V67_count);
    CRSX_CHECK_SORT(sink__V65->context, sub__V67, &sort_M_Reified_xPromiscuity); /* sub__V67 = &#11 */
    Term sub__V68 = SUB(term__V66, 1); int sub__V68_count = term__V66_count*LINK_COUNT(sub__V68); permitUnusedInt(sub__V68_count);
    CRSX_CHECK_SORT(sink__V65->context, sub__V68, &sort_M_Reified_xDepth); /* sub__V68 = &#13 */
    Term sub__V69 = SUB(term__V66, 2); int sub__V69_count = term__V66_count*LINK_COUNT(sub__V69); permitUnusedInt(sub__V69_count);
    CRSX_CHECK_SORT(sink__V65->context, sub__V69, &sort_M_Reified_xSort); /* sub__V69 = &#14 */
    Term sub__V70 = SUB(term__V66, 3); int sub__V70_count = term__V66_count*LINK_COUNT(sub__V70); permitUnusedInt(sub__V70_count);
    /* sub__V70 = &#15 */
    Variable x__V71 = linkVariable(sink__V65->context, BINDER(term__V66,4,0)); if (term__V66_count <= 1) UNBIND(x__V71);
    Term sub__V72 = LINK(sink__V65->context, SUB(term__V66, 4)); int sub__V72_count = term__V66_count*LINK_COUNT(sub__V72); permitUnusedInt(sub__V72_count);
    CRSX_CHECK_SORT(sink__V65->context, sub__V72, &sort_M_Reified_xBinder); /* sub__V72 = &#16 */
    Variable y__V73 = x__V71; permitUnusedVariable(y__V73);
    UNLINK(sink__V65->context, term__V66);
    { START(sink__V65, _M_MoveToTerm);
      COPY(sink__V65, sub__V72); /* REUSED SUBSTITUTION */ END(sink__V65, _M_MoveToTerm); }
     unlinkVariable(sink__V65->context, x__V71);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MoveToTerm$3. */
int conBindOffs_M_MoveToTerm_s3[] = {0 , 0 , 0 , 0 , 0 , 0 , 1};
char *nameFun_M_MoveToTerm_s3(Term term) { return  "MoveToTerm$3" ; }
struct _ConstructionDescriptor descriptor_M_MoveToTerm_s3 = {&sort_M_Reified_xTerm, 0, 6, sizeof(STRUCT_Con_M_MoveToTerm_s3), conBindOffs_M_MoveToTerm_s3, &nameFun_M_MoveToTerm_s3, &step_M_MoveToTerm_s3};

int step_M_MoveToTerm_s3(Sink sink__V74, Term term__V75)
{
  int term__V75_count = LINK_COUNT(term__V75); permitUnusedInt(term__V75_count);
  Term sub__V76 = FORCE(sink__V74->context, SUB(term__V75, 0));
  EnumOf_M_Reified_xKind choice__V77 = (IS_VARIABLE_USE(sub__V76) ? VarOf_M_Reified_xKind : (EnumOf_M_Reified_xKind) TAG(sub__V76));
  switch (choice__V77)
  {
    case Data_M_KDATA: { /* Function DEFS-MoveToTerm-1$MoveToTerm$3$KDATA case KDATA */
      ASSERT(sink__V74->context, !strcmp(SYMBOL(term__V75),  "MoveToTerm$3" ));
      Term sub__V78 = SUB(term__V75, 0); int sub__V78_count = term__V75_count*LINK_COUNT(sub__V78); permitUnusedInt(sub__V78_count);
      CRSX_CHECK_SORT(sink__V74->context, sub__V78, &sort_M_Reified_xKind); ASSERT(sink__V74->context, !strcmp(SYMBOL(sub__V78),  "KDATA" ));
      Term sub__V79 = LINK(sink__V74->context, SUB(term__V75, 1)); int sub__V79_count = term__V75_count*LINK_COUNT(sub__V79); permitUnusedInt(sub__V79_count);
      CRSX_CHECK_SORT(sink__V74->context, sub__V79, &sort_M_Reified_xPromiscuity); /* sub__V79 = &#0 */
      Term sub__V80 = LINK(sink__V74->context, SUB(term__V75, 2)); int sub__V80_count = term__V75_count*LINK_COUNT(sub__V80); permitUnusedInt(sub__V80_count);
      CRSX_CHECK_SORT(sink__V74->context, sub__V80, &sort_M_Reified_xDepth); /* sub__V80 = &#1 */
      Term sub__V81 = LINK(sink__V74->context, SUB(term__V75, 3)); int sub__V81_count = term__V75_count*LINK_COUNT(sub__V81); permitUnusedInt(sub__V81_count);
      CRSX_CHECK_SORT(sink__V74->context, sub__V81, &sort_M_Reified_xSort); /* sub__V81 = &#2 */
      Term sub__V82 = LINK(sink__V74->context, SUB(term__V75, 4)); int sub__V82_count = term__V75_count*LINK_COUNT(sub__V82); permitUnusedInt(sub__V82_count);
      /* sub__V82 = &#3 */
      Variable x__V83 = linkVariable(sink__V74->context, BINDER(term__V75,5,0)); if (term__V75_count <= 1) UNBIND(x__V83);
      Term sub__V84 = LINK(sink__V74->context, SUB(term__V75, 5)); int sub__V84_count = term__V75_count*LINK_COUNT(sub__V84); permitUnusedInt(sub__V84_count);
      CRSX_CHECK_SORT(sink__V74->context, sub__V84, &sort_M_Reified_xBinder); /* sub__V84 = &#4 */
      
      NamedPropertyLink namedP__V85 = LINK_NamedPropertyLink(sink__V74->context, NAMED_PROPERTIES(term__V75));
      VariablePropertyLink varP__V86 = LINK_VariablePropertyLink(sink__V74->context, VARIABLE_PROPERTIES(term__V75));
      UNLINK(sink__V74->context, term__V75);
      ADD_PROPERTIES(sink__V74, LINK_NamedPropertyLink(sink__V74->context, namedP__V85), LINK_VariablePropertyLink(sink__V74->context, varP__V86));
      { START(sink__V74, _M_MoveToTerm_s4);
        COPY(sink__V74, sub__V79);COPY(sink__V74, sub__V80);COPY(sink__V74, sub__V81);COPY(sink__V74, sub__V82);{ if (!IS_BOUND(x__V83)) { REBIND(linkVariable(sink__V74->context, x__V83));
            Variable binds__V87[1] = {x__V83}; BINDS(sink__V74, 1, binds__V87);
            COPY(sink__V74, sub__V84); /* REUSED SUBSTITUTION */  }
          else { Variable b__V88 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V74->context,"b__V88");
            Variable binds__V89[1] = {b__V88}; BINDS(sink__V74, 1, binds__V89);
            {
              Term arg__V90;
              { Sink buf__V91 = ALLOCA_BUFFER(sink__V74->context);
                USE(buf__V91, linkVariable(buf__V91->context, b__V88));
                arg__V90 = BUFFER_TERM(buf__V91); FREE_BUFFER(buf__V91); }
              Variable vars__V92[1] = {x__V83};
              Term args__V93[1] = {arg__V90};
              struct _SubstitutionFrame substitution__V94 = {NULL, 0, 1, vars__V92, args__V93};
              SUBSTITUTE(sink__V74, sub__V84, &substitution__V94); }
                }
           }
        END(sink__V74, _M_MoveToTerm_s4); }
      UNLINK_NamedPropertyLink(sink__V74->context, namedP__V85); 
      UNLINK_VariablePropertyLink(sink__V74->context, varP__V86); unlinkVariable(sink__V74->context, x__V83);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION MoveToTerm$1. */
int conBindOffs_M_MoveToTerm_s1[] = {0 , 0 , 0};
char *nameFun_M_MoveToTerm_s1(Term term) { return  "MoveToTerm$1" ; }
struct _ConstructionDescriptor descriptor_M_MoveToTerm_s1 = {&sort_M_Reified_xTerm, 0, 2, sizeof(STRUCT_Con_M_MoveToTerm_s1), conBindOffs_M_MoveToTerm_s1, &nameFun_M_MoveToTerm_s1, &step_M_MoveToTerm_s1};

int step_M_MoveToTerm_s1(Sink sink__V95, Term term__V96)
{
  int term__V96_count = LINK_COUNT(term__V96); permitUnusedInt(term__V96_count);
  do {
    /* Contraction rule DEFS-MoveToTerm-2. */
    ASSERT(sink__V95->context, !strcmp(SYMBOL(term__V96),  "MoveToTerm$1" ));
    Term sub__V97 = SUB(term__V96, 0); int sub__V97_count = term__V96_count*LINK_COUNT(sub__V97); permitUnusedInt(sub__V97_count);
    CRSX_CHECK_SORT(sink__V95->context, sub__V97, &sort_M_Reified_xSort); /* sub__V97 = &#11 */
    Term sub__V98 = LINK(sink__V95->context, SUB(term__V96, 1)); int sub__V98_count = term__V96_count*LINK_COUNT(sub__V98); permitUnusedInt(sub__V98_count);
    CRSX_CHECK_SORT(sink__V95->context, sub__V98, &sort_M_Reified_xTerm); /* sub__V98 = &#12 */
    UNLINK(sink__V95->context, term__V96); COPY(sink__V95, sub__V98); return 1;
  } while (0);
  return 0;
}

/* FUNCTION SplitMapText$1. */
int conBindOffs_M_SplitMapText_s1[] = {0 , 0 , 1 , 1 , 1 , 1 , 2 , 3};
char *nameFun_M_SplitMapText_s1(Term term) { return  "SplitMapText$1" ; }
struct _ConstructionDescriptor descriptor_M_SplitMapText_s1 = {&sort_M_Reified_xVariable, 0, 7, sizeof(STRUCT_Con_M_SplitMapText_s1), conBindOffs_M_SplitMapText_s1, &nameFun_M_SplitMapText_s1, &step_M_SplitMapText_s1};

int step_M_SplitMapText_s1(Sink sink__V99, Term term__V100)
{
  int term__V100_count = LINK_COUNT(term__V100); permitUnusedInt(term__V100_count);
  Term sub__V101 = FORCE(sink__V99->context, SUB(term__V100, 0));
  EnumOf_M__sList choice__V102 = (IS_VARIABLE_USE(sub__V101) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V101));
  switch (choice__V102)
  {
    case Data_M__sCons: { /* Function DEFS-SplitMapText-1$SplitMapText$1$$Cons case $Cons */
      ASSERT(sink__V99->context, !strcmp(SYMBOL(term__V100),  "SplitMapText$1" ));
      Term sub__V103 = SUB(term__V100, 0); int sub__V103_count = term__V100_count*LINK_COUNT(sub__V103); permitUnusedInt(sub__V103_count);
      ASSERT(sink__V99->context, !strcmp(SYMBOL(sub__V103),  "$Cons" ));
      Term sub__V104 = LINK(sink__V99->context, SUB(sub__V103, 0)); int sub__V104_count = sub__V103_count*LINK_COUNT(sub__V104); permitUnusedInt(sub__V104_count);
      /* sub__V104 = &#0-0 */
      Term sub__V105 = LINK(sink__V99->context, SUB(sub__V103, 1)); int sub__V105_count = sub__V103_count*LINK_COUNT(sub__V105); permitUnusedInt(sub__V105_count);
      /* sub__V105 = &#0-1 */
      Variable x__V106 = linkVariable(sink__V99->context, BINDER(term__V100,1,0)); if (term__V100_count <= 1) UNBIND(x__V106);
      Term sub__V107 = LINK(sink__V99->context, SUB(term__V100, 1)); int sub__V107_count = term__V100_count*LINK_COUNT(sub__V107); permitUnusedInt(sub__V107_count);
      CRSX_CHECK_SORT(sink__V99->context, sub__V107, &sort_M_Reified_xVariable); /* sub__V107 = &#2 */
      Term sub__V108 = LINK(sink__V99->context, SUB(term__V100, 2)); int sub__V108_count = term__V100_count*LINK_COUNT(sub__V108); permitUnusedInt(sub__V108_count);
      /* sub__V108 = &#3 */
      Term sub__V109 = LINK(sink__V99->context, SUB(term__V100, 3)); int sub__V109_count = term__V100_count*LINK_COUNT(sub__V109); permitUnusedInt(sub__V109_count);
      /* sub__V109 = &#4 */
      Term sub__V110 = LINK(sink__V99->context, SUB(term__V100, 4)); int sub__V110_count = term__V100_count*LINK_COUNT(sub__V110); permitUnusedInt(sub__V110_count);
      /* sub__V110 = &#5 */
      Variable x__V111 = linkVariable(sink__V99->context, BINDER(term__V100,5,0)); if (term__V100_count <= 1) UNBIND(x__V111);
      Term sub__V112 = LINK(sink__V99->context, SUB(term__V100, 5)); int sub__V112_count = term__V100_count*LINK_COUNT(sub__V112); permitUnusedInt(sub__V112_count);
      CRSX_CHECK_SORT(sink__V99->context, sub__V112, &sort_M_Reified_xVariable); /* sub__V112 = &#6 */
      Variable x__V113 = linkVariable(sink__V99->context, BINDER(term__V100,6,0)); if (term__V100_count <= 1) UNBIND(x__V113);
      Term sub__V114 = LINK(sink__V99->context, SUB(term__V100, 6)); int sub__V114_count = term__V100_count*LINK_COUNT(sub__V114); permitUnusedInt(sub__V114_count);
      CRSX_CHECK_SORT(sink__V99->context, sub__V114, &sort_M_Reified_xVariable); /* sub__V114 = &#7 */
      
      NamedPropertyLink namedP__V115 = LINK_NamedPropertyLink(sink__V99->context, NAMED_PROPERTIES(term__V100));
      VariablePropertyLink varP__V116 = LINK_VariablePropertyLink(sink__V99->context, VARIABLE_PROPERTIES(term__V100));
      UNLINK(sink__V99->context, term__V100);
      ADD_PROPERTIES(sink__V99, LINK_NamedPropertyLink(sink__V99->context, namedP__V115), LINK_VariablePropertyLink(sink__V99->context, varP__V116));
      { START(sink__V99, _M_SplitMapText_s2);
        COPY(sink__V99, sub__V104);COPY(sink__V99, sub__V105);{ if (!IS_BOUND(x__V106)) { REBIND(linkVariable(sink__V99->context, x__V106));
            Variable binds__V117[1] = {x__V106}; BINDS(sink__V99, 1, binds__V117);
            COPY(sink__V99, sub__V107); /* REUSED SUBSTITUTION */  }
          else { Variable b__V118 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V99->context,"b__V118");
            Variable binds__V119[1] = {b__V118}; BINDS(sink__V99, 1, binds__V119);
            {
              Term arg__V120;
              { Sink buf__V121 = ALLOCA_BUFFER(sink__V99->context);
                USE(buf__V121, linkVariable(buf__V121->context, b__V118));
                arg__V120 = BUFFER_TERM(buf__V121); FREE_BUFFER(buf__V121); }
              Variable vars__V122[1] = {x__V106};
              Term args__V123[1] = {arg__V120};
              struct _SubstitutionFrame substitution__V124 = {NULL, 0, 1, vars__V122, args__V123};
              SUBSTITUTE(sink__V99, sub__V107, &substitution__V124); }
                }
           }
        COPY(sink__V99, sub__V108);COPY(sink__V99, sub__V109);COPY(sink__V99, sub__V110);{ if (!IS_BOUND(x__V111)) { REBIND(linkVariable(sink__V99->context, x__V111));
            Variable binds__V125[1] = {x__V111}; BINDS(sink__V99, 1, binds__V125);
            COPY(sink__V99, sub__V112); /* REUSED SUBSTITUTION */  }
          else { Variable b__V126 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V99->context,"b__V126");
            Variable binds__V127[1] = {b__V126}; BINDS(sink__V99, 1, binds__V127);
            {
              Term arg__V128;
              { Sink buf__V129 = ALLOCA_BUFFER(sink__V99->context);
                USE(buf__V129, linkVariable(buf__V129->context, b__V126));
                arg__V128 = BUFFER_TERM(buf__V129); FREE_BUFFER(buf__V129); }
              Variable vars__V130[1] = {x__V111};
              Term args__V131[1] = {arg__V128};
              struct _SubstitutionFrame substitution__V132 = {NULL, 0, 1, vars__V130, args__V131};
              SUBSTITUTE(sink__V99, sub__V112, &substitution__V132); }
                }
           }
        { if (!IS_BOUND(x__V113)) { REBIND(linkVariable(sink__V99->context, x__V113));
            Variable binds__V133[1] = {x__V113}; BINDS(sink__V99, 1, binds__V133);
            COPY(sink__V99, sub__V114); /* REUSED SUBSTITUTION */  }
          else { Variable b__V134 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V99->context,"b__V134");
            Variable binds__V135[1] = {b__V134}; BINDS(sink__V99, 1, binds__V135);
            {
              Term arg__V136;
              { Sink buf__V137 = ALLOCA_BUFFER(sink__V99->context);
                USE(buf__V137, linkVariable(buf__V137->context, b__V134));
                arg__V136 = BUFFER_TERM(buf__V137); FREE_BUFFER(buf__V137); }
              Variable vars__V138[1] = {x__V113};
              Term args__V139[1] = {arg__V136};
              struct _SubstitutionFrame substitution__V140 = {NULL, 0, 1, vars__V138, args__V139};
              SUBSTITUTE(sink__V99, sub__V114, &substitution__V140); }
                }
           }
        END(sink__V99, _M_SplitMapText_s2); }
      UNLINK_NamedPropertyLink(sink__V99->context, namedP__V115); 
      UNLINK_VariablePropertyLink(sink__V99->context, varP__V116);
      unlinkVariable(sink__V99->context, x__V113);
      unlinkVariable(sink__V99->context, x__V111); unlinkVariable(sink__V99->context, x__V106);
      
      return 1;
    break; } case Data_M__sNil: { /* Function DEFS-SplitMapText-2$SplitMapText$1$$Nil case $Nil */
      ASSERT(sink__V99->context, !strcmp(SYMBOL(term__V100),  "SplitMapText$1" ));
      Term sub__V141 = SUB(term__V100, 0); int sub__V141_count = term__V100_count*LINK_COUNT(sub__V141); permitUnusedInt(sub__V141_count);
      ASSERT(sink__V99->context, !strcmp(SYMBOL(sub__V141),  "$Nil" ));
      Variable x__V142 = linkVariable(sink__V99->context, BINDER(term__V100,1,0)); if (term__V100_count <= 1) UNBIND(x__V142);
      Term sub__V143 = LINK(sink__V99->context, SUB(term__V100, 1)); int sub__V143_count = term__V100_count*LINK_COUNT(sub__V143); permitUnusedInt(sub__V143_count);
      CRSX_CHECK_SORT(sink__V99->context, sub__V143, &sort_M_Reified_xVariable); /* sub__V143 = &#0 */
      Term sub__V144 = LINK(sink__V99->context, SUB(term__V100, 2)); int sub__V144_count = term__V100_count*LINK_COUNT(sub__V144); permitUnusedInt(sub__V144_count);
      /* sub__V144 = &#1 */
      Term sub__V145 = LINK(sink__V99->context, SUB(term__V100, 3)); int sub__V145_count = term__V100_count*LINK_COUNT(sub__V145); permitUnusedInt(sub__V145_count);
      /* sub__V145 = &#2 */
      Term sub__V146 = LINK(sink__V99->context, SUB(term__V100, 4)); int sub__V146_count = term__V100_count*LINK_COUNT(sub__V146); permitUnusedInt(sub__V146_count);
      /* sub__V146 = &#3 */
      Variable x__V147 = linkVariable(sink__V99->context, BINDER(term__V100,5,0)); if (term__V100_count <= 1) UNBIND(x__V147);
      Term sub__V148 = LINK(sink__V99->context, SUB(term__V100, 5)); int sub__V148_count = term__V100_count*LINK_COUNT(sub__V148); permitUnusedInt(sub__V148_count);
      CRSX_CHECK_SORT(sink__V99->context, sub__V148, &sort_M_Reified_xVariable); /* sub__V148 = &#4 */
      Variable x__V149 = linkVariable(sink__V99->context, BINDER(term__V100,6,0)); if (term__V100_count <= 1) UNBIND(x__V149);
      Term sub__V150 = LINK(sink__V99->context, SUB(term__V100, 6)); int sub__V150_count = term__V100_count*LINK_COUNT(sub__V150); permitUnusedInt(sub__V150_count);
      CRSX_CHECK_SORT(sink__V99->context, sub__V150, &sort_M_Reified_xVariable); /* sub__V150 = &#5 */
      
      NamedPropertyLink namedP__V151 = LINK_NamedPropertyLink(sink__V99->context, NAMED_PROPERTIES(term__V100));
      VariablePropertyLink varP__V152 = LINK_VariablePropertyLink(sink__V99->context, VARIABLE_PROPERTIES(term__V100));
      UNLINK(sink__V99->context, term__V100);
      ADD_PROPERTIES(sink__V99, LINK_NamedPropertyLink(sink__V99->context, namedP__V151), LINK_VariablePropertyLink(sink__V99->context, varP__V152));
      { START(sink__V99, _M_SplitMapText_s3);
        { if (!IS_BOUND(x__V142)) { REBIND(linkVariable(sink__V99->context, x__V142));
            Variable binds__V153[1] = {x__V142}; BINDS(sink__V99, 1, binds__V153);
            COPY(sink__V99, sub__V143); /* REUSED SUBSTITUTION */  }
          else { Variable b__V154 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V99->context,"b__V154");
            Variable binds__V155[1] = {b__V154}; BINDS(sink__V99, 1, binds__V155);
            {
              Term arg__V156;
              { Sink buf__V157 = ALLOCA_BUFFER(sink__V99->context);
                USE(buf__V157, linkVariable(buf__V157->context, b__V154));
                arg__V156 = BUFFER_TERM(buf__V157); FREE_BUFFER(buf__V157); }
              Variable vars__V158[1] = {x__V142};
              Term args__V159[1] = {arg__V156};
              struct _SubstitutionFrame substitution__V160 = {NULL, 0, 1, vars__V158, args__V159};
              SUBSTITUTE(sink__V99, sub__V143, &substitution__V160); }
                }
           }
        COPY(sink__V99, sub__V144);COPY(sink__V99, sub__V145);COPY(sink__V99, sub__V146);{ if (!IS_BOUND(x__V147)) { REBIND(linkVariable(sink__V99->context, x__V147));
            Variable binds__V161[1] = {x__V147}; BINDS(sink__V99, 1, binds__V161);
            COPY(sink__V99, sub__V148); /* REUSED SUBSTITUTION */  }
          else { Variable b__V162 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V99->context,"b__V162");
            Variable binds__V163[1] = {b__V162}; BINDS(sink__V99, 1, binds__V163);
            {
              Term arg__V164;
              { Sink buf__V165 = ALLOCA_BUFFER(sink__V99->context);
                USE(buf__V165, linkVariable(buf__V165->context, b__V162));
                arg__V164 = BUFFER_TERM(buf__V165); FREE_BUFFER(buf__V165); }
              Variable vars__V166[1] = {x__V147};
              Term args__V167[1] = {arg__V164};
              struct _SubstitutionFrame substitution__V168 = {NULL, 0, 1, vars__V166, args__V167};
              SUBSTITUTE(sink__V99, sub__V148, &substitution__V168); }
                }
           }
        { if (!IS_BOUND(x__V149)) { REBIND(linkVariable(sink__V99->context, x__V149));
            Variable binds__V169[1] = {x__V149}; BINDS(sink__V99, 1, binds__V169);
            COPY(sink__V99, sub__V150); /* REUSED SUBSTITUTION */  }
          else { Variable b__V170 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V99->context,"b__V170");
            Variable binds__V171[1] = {b__V170}; BINDS(sink__V99, 1, binds__V171);
            {
              Term arg__V172;
              { Sink buf__V173 = ALLOCA_BUFFER(sink__V99->context);
                USE(buf__V173, linkVariable(buf__V173->context, b__V170));
                arg__V172 = BUFFER_TERM(buf__V173); FREE_BUFFER(buf__V173); }
              Variable vars__V174[1] = {x__V149};
              Term args__V175[1] = {arg__V172};
              struct _SubstitutionFrame substitution__V176 = {NULL, 0, 1, vars__V174, args__V175};
              SUBSTITUTE(sink__V99, sub__V150, &substitution__V176); }
                }
           }
        END(sink__V99, _M_SplitMapText_s3); }
      UNLINK_NamedPropertyLink(sink__V99->context, namedP__V151); 
      UNLINK_VariablePropertyLink(sink__V99->context, varP__V152);
      unlinkVariable(sink__V99->context, x__V149);
      unlinkVariable(sink__V99->context, x__V147); unlinkVariable(sink__V99->context, x__V142);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION SplitMapText$2. */
int conBindOffs_M_SplitMapText_s2[] = {0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 3};
char *nameFun_M_SplitMapText_s2(Term term) { return  "SplitMapText$2" ; }
struct _ConstructionDescriptor descriptor_M_SplitMapText_s2 = {&sort_M_Reified_xVariable, 0, 8, sizeof(STRUCT_Con_M_SplitMapText_s2), conBindOffs_M_SplitMapText_s2, &nameFun_M_SplitMapText_s2, &step_M_SplitMapText_s2};

int step_M_SplitMapText_s2(Sink sink__V177, Term term__V178)
{
  int term__V178_count = LINK_COUNT(term__V178); permitUnusedInt(term__V178_count);
  do {
    /* Contraction rule DEFS-SplitMapText-1. */
    ASSERT(sink__V177->context, !strcmp(SYMBOL(term__V178),  "SplitMapText$2" ));
    Term sub__V179 = LINK(sink__V177->context, SUB(term__V178, 0)); int sub__V179_count = term__V178_count*LINK_COUNT(sub__V179); permitUnusedInt(sub__V179_count);
    /* sub__V179 = &#21 */
    Term sub__V180 = LINK(sink__V177->context, SUB(term__V178, 1)); int sub__V180_count = term__V178_count*LINK_COUNT(sub__V180); permitUnusedInt(sub__V180_count);
    /* sub__V180 = &#22 */
    Variable x__V181 = linkVariable(sink__V177->context, BINDER(term__V178,2,0)); if (term__V178_count <= 1) UNBIND(x__V181);
    Term sub__V182 = LINK(sink__V177->context, SUB(term__V178, 2)); int sub__V182_count = term__V178_count*LINK_COUNT(sub__V182); permitUnusedInt(sub__V182_count);
    CRSX_CHECK_SORT(sink__V177->context, sub__V182, &sort_M_Reified_xVariable); UNLINK_SUB(sink__V177->context, term__V178,  2); NORMALIZE(sink__V177->context, sub__V182); SUB(term__V178,  2) = LINK(sink__V177->context, sub__V182);
    /* sub__V182 = &#1 */
    Term sub__V183 = LINK(sink__V177->context, SUB(term__V178, 3)); int sub__V183_count = term__V178_count*LINK_COUNT(sub__V183); permitUnusedInt(sub__V183_count);
    UNLINK_SUB(sink__V177->context, term__V178,  3); NORMALIZE(sink__V177->context, sub__V183); SUB(term__V178,  3) = LINK(sink__V177->context, sub__V183);
    /* sub__V183 = &#3 */
    Term sub__V184 = LINK(sink__V177->context, SUB(term__V178, 4)); int sub__V184_count = term__V178_count*LINK_COUNT(sub__V184); permitUnusedInt(sub__V184_count);
    UNLINK_SUB(sink__V177->context, term__V178,  4); NORMALIZE(sink__V177->context, sub__V184); SUB(term__V178,  4) = LINK(sink__V177->context, sub__V184);
    /* sub__V184 = &#4 */
    Term sub__V185 = LINK(sink__V177->context, SUB(term__V178, 5)); int sub__V185_count = term__V178_count*LINK_COUNT(sub__V185); permitUnusedInt(sub__V185_count);
    UNLINK_SUB(sink__V177->context, term__V178,  5); NORMALIZE(sink__V177->context, sub__V185); SUB(term__V178,  5) = LINK(sink__V177->context, sub__V185);
    /* sub__V185 = &#5 */
    Variable x__V186 = linkVariable(sink__V177->context, BINDER(term__V178,6,0)); if (term__V178_count <= 1) UNBIND(x__V186);
    Term sub__V187 = LINK(sink__V177->context, SUB(term__V178, 6)); int sub__V187_count = term__V178_count*LINK_COUNT(sub__V187); permitUnusedInt(sub__V187_count);
    CRSX_CHECK_SORT(sink__V177->context, sub__V187, &sort_M_Reified_xVariable); UNLINK_SUB(sink__V177->context, term__V178,  6); NORMALIZE(sink__V177->context, sub__V187); SUB(term__V178,  6) = LINK(sink__V177->context, sub__V187);
    /* sub__V187 = &#6 */
    Variable x__V188 = linkVariable(sink__V177->context, BINDER(term__V178,7,0)); if (term__V178_count <= 1) UNBIND(x__V188);
    Term sub__V189 = LINK(sink__V177->context, SUB(term__V178, 7)); int sub__V189_count = term__V178_count*LINK_COUNT(sub__V189); permitUnusedInt(sub__V189_count);
    CRSX_CHECK_SORT(sink__V177->context, sub__V189, &sort_M_Reified_xVariable); UNLINK_SUB(sink__V177->context, term__V178,  7); NORMALIZE(sink__V177->context, sub__V189); SUB(term__V178,  7) = LINK(sink__V177->context, sub__V189);
    /* sub__V189 = &#7 */
    
    NamedPropertyLink namedP__V190 = LINK_NamedPropertyLink(sink__V177->context, NAMED_PROPERTIES(term__V178));
    VariablePropertyLink varP__V191 = LINK_VariablePropertyLink(sink__V177->context, VARIABLE_PROPERTIES(term__V178));
    UNLINK(sink__V177->context, term__V178);
    { int test__V192;
      FORCE(sink__V177->context, sub__V183); LINK(sink__V177->context, sub__V183);
      test__V192 = (int) !strcmp(SYMBOL(sub__V183), "0" );
      UNLINK(sink__V177->context, sub__V183);  
      if (test__V192) 
      {
        UNLINK(sink__V177->context, sub__V183); { START(sink__V177, _M__sTextCons);
          { START(sink__V177, _M__sTextEmbed);
            { START(sink__V177, _M_AsText);
              {
                Term arg__V193;
                { Sink buf__V194 = ALLOCA_BUFFER(sink__V177->context);
                  COPY(buf__V194, LINK(buf__V194->context, sub__V184));arg__V193 = BUFFER_TERM(buf__V194); FREE_BUFFER(buf__V194); }
                Variable vars__V195[1] = {x__V186};
                Term args__V196[1] = {arg__V193};
                struct _SubstitutionFrame substitution__V197 = {NULL, 0, 1, vars__V195, args__V196};
                SUBSTITUTE(sink__V177, LINK(sink__V177->context,sub__V187), &substitution__V197); }
              END(sink__V177, _M_AsText); }
            END(sink__V177, _M__sTextEmbed); }
          { START(sink__V177, _M__sTextCons);
            { START(sink__V177, _M__sTextEmbed);
              { START(sink__V177, _M_AsText);
                {
                  Term arg__V198;
                  { Sink buf__V199 = ALLOCA_BUFFER(sink__V177->context);
                    COPY(buf__V199, sub__V179);arg__V198 = BUFFER_TERM(buf__V199); FREE_BUFFER(buf__V199); }
                  Variable vars__V200[1] = {x__V181};
                  Term args__V201[1] = {arg__V198};
                  struct _SubstitutionFrame substitution__V202 = {NULL, 0, 1, vars__V200, args__V201};
                  SUBSTITUTE(sink__V177, LINK(sink__V177->context,sub__V182), &substitution__V202); }
                END(sink__V177, _M_AsText); }
              END(sink__V177, _M__sTextEmbed); }
            { START(sink__V177, _M__sTextCons);
              { START(sink__V177, _M__sTextEmbed);
                { START(sink__V177, _M_AsText);
                  { START(sink__V177, _M_SplitMapText_s1);
                    COPY(sink__V177, sub__V180);{ Variable x__V203 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V177->context,"x__V203");
                      Variable binds__V204[1] = {x__V203}; BINDS(sink__V177, 1, binds__V204);
                      {
                        Term arg__V205;
                        { Sink buf__V206 = ALLOCA_BUFFER(sink__V177->context);
                          USE(buf__V206, linkVariable(buf__V206->context, x__V203));
                          arg__V205 = BUFFER_TERM(buf__V206); FREE_BUFFER(buf__V206); }
                        Variable vars__V207[1] = {x__V181};
                        Term args__V208[1] = {arg__V205};
                        struct _SubstitutionFrame substitution__V209 = {NULL, 0, 1, vars__V207, args__V208};
                        SUBSTITUTE(sink__V177, sub__V182, &substitution__V209); }
                       }
                    LITERAL(sink__V177,  "1" ); COPY(sink__V177, sub__V184);COPY(sink__V177, sub__V185);{ Variable x__V210 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V177->context,"x__V210");
                      Variable binds__V211[1] = {x__V210}; BINDS(sink__V177, 1, binds__V211);
                      {
                        Term arg__V212;
                        { Sink buf__V213 = ALLOCA_BUFFER(sink__V177->context);
                          USE(buf__V213, linkVariable(buf__V213->context, x__V210));
                          arg__V212 = BUFFER_TERM(buf__V213); FREE_BUFFER(buf__V213); }
                        Variable vars__V214[1] = {x__V186};
                        Term args__V215[1] = {arg__V212};
                        struct _SubstitutionFrame substitution__V216 = {NULL, 0, 1, vars__V214, args__V215};
                        SUBSTITUTE(sink__V177, sub__V187, &substitution__V216); }
                       }
                    { Variable x__V217 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V177->context,"x__V217");
                      Variable binds__V218[1] = {x__V217}; BINDS(sink__V177, 1, binds__V218);
                      {
                        Term arg__V219;
                        { Sink buf__V220 = ALLOCA_BUFFER(sink__V177->context);
                          USE(buf__V220, linkVariable(buf__V220->context, x__V217));
                          arg__V219 = BUFFER_TERM(buf__V220); FREE_BUFFER(buf__V220); }
                        Variable vars__V221[1] = {x__V188};
                        Term args__V222[1] = {arg__V219};
                        struct _SubstitutionFrame substitution__V223 = {NULL, 0, 1, vars__V221, args__V222};
                        SUBSTITUTE(sink__V177, sub__V189, &substitution__V223); }
                       }
                    END(sink__V177, _M_SplitMapText_s1); }
                  END(sink__V177, _M_AsText); }
                END(sink__V177, _M__sTextEmbed); }
              { START(sink__V177, _M__sTextNil);
                END(sink__V177, _M__sTextNil); }
              END(sink__V177, _M__sTextCons); }
            END(sink__V177, _M__sTextCons); }
          END(sink__V177, _M__sTextCons); }
        
      }
      else
      {
        { int test__V224;
          FORCE(sink__V177->context, sub__V183); LINK(sink__V177->context, sub__V183);
          FORCE(sink__V177->context, sub__V185); LINK(sink__V177->context, sub__V185);
          test__V224 = (int) !strcmp(SYMBOL(sub__V183),SYMBOL(sub__V185));
          UNLINK(sink__V177->context, sub__V183);   UNLINK(sink__V177->context, sub__V185);  
          if (test__V224) 
          {
            UNLINK(sink__V177->context, sub__V183); { START(sink__V177, _M__sTextCons);
              { START(sink__V177, _M__sTextEmbed);
                { START(sink__V177, _M_AsText);
                  {
                    Term arg__V225;
                    { Sink buf__V226 = ALLOCA_BUFFER(sink__V177->context);
                      COPY(buf__V226, LINK(buf__V226->context, sub__V184));arg__V225 = BUFFER_TERM(buf__V226); FREE_BUFFER(buf__V226); }
                    Variable vars__V227[1] = {x__V188};
                    Term args__V228[1] = {arg__V225};
                    struct _SubstitutionFrame substitution__V229 = {NULL, 0, 1, vars__V227, args__V228};
                    SUBSTITUTE(sink__V177, LINK(sink__V177->context,sub__V189), &substitution__V229); }
                  END(sink__V177, _M_AsText); }
                END(sink__V177, _M__sTextEmbed); }
              { START(sink__V177, _M__sTextCons);
                { START(sink__V177, _M__sTextEmbed);
                  { START(sink__V177, _M_AsText);
                    { START(sink__V177, _M_SplitMapText_s1);
                      { START(sink__V177, _M__sCons);
                        COPY(sink__V177, sub__V179);COPY(sink__V177, sub__V180);END(sink__V177, _M__sCons); }
                      { Variable x__V230 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V177->context,"x__V230");
                        Variable binds__V231[1] = {x__V230}; BINDS(sink__V177, 1, binds__V231);
                        {
                          Term arg__V232;
                          { Sink buf__V233 = ALLOCA_BUFFER(sink__V177->context);
                            USE(buf__V233, linkVariable(buf__V233->context, x__V230));
                            arg__V232 = BUFFER_TERM(buf__V233); FREE_BUFFER(buf__V233); }
                          Variable vars__V234[1] = {x__V181};
                          Term args__V235[1] = {arg__V232};
                          struct _SubstitutionFrame substitution__V236 = {NULL, 0, 1, vars__V234, args__V235};
                          SUBSTITUTE(sink__V177, sub__V182, &substitution__V236); }
                         }
                      LITERAL(sink__V177,  "0" ); 
                      {
                        double num__V237;num__V237 = DOUBLE(sub__V184); UNLINK(sink__V177->context, sub__V184); 
                        
                        {
                          double tmp__V238;tmp__V238 = (double) 1;  num__V237 += tmp__V238;
                        }
                        LITERALNF(sink__V177, (size_t) 31, "%G", num__V237);
                      }COPY(sink__V177, sub__V185);{ Variable x__V239 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V177->context,"x__V239");
                        Variable binds__V240[1] = {x__V239}; BINDS(sink__V177, 1, binds__V240);
                        {
                          Term arg__V241;
                          { Sink buf__V242 = ALLOCA_BUFFER(sink__V177->context);
                            USE(buf__V242, linkVariable(buf__V242->context, x__V239));
                            arg__V241 = BUFFER_TERM(buf__V242); FREE_BUFFER(buf__V242); }
                          Variable vars__V243[1] = {x__V186};
                          Term args__V244[1] = {arg__V241};
                          struct _SubstitutionFrame substitution__V245 = {NULL, 0, 1, vars__V243, args__V244};
                          SUBSTITUTE(sink__V177, sub__V187, &substitution__V245); }
                         }
                      { Variable x__V246 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V177->context,"x__V246");
                        Variable binds__V247[1] = {x__V246}; BINDS(sink__V177, 1, binds__V247);
                        {
                          Term arg__V248;
                          { Sink buf__V249 = ALLOCA_BUFFER(sink__V177->context);
                            USE(buf__V249, linkVariable(buf__V249->context, x__V246));
                            arg__V248 = BUFFER_TERM(buf__V249); FREE_BUFFER(buf__V249); }
                          Variable vars__V250[1] = {x__V188};
                          Term args__V251[1] = {arg__V248};
                          struct _SubstitutionFrame substitution__V252 = {NULL, 0, 1, vars__V250, args__V251};
                          SUBSTITUTE(sink__V177, sub__V189, &substitution__V252); }
                         }
                      END(sink__V177, _M_SplitMapText_s1); }
                    END(sink__V177, _M_AsText); }
                  END(sink__V177, _M__sTextEmbed); }
                { START(sink__V177, _M__sTextNil);
                  END(sink__V177, _M__sTextNil); }
                END(sink__V177, _M__sTextCons); }
              END(sink__V177, _M__sTextCons); }
            
          }
          else
          {
            { START(sink__V177, _M__sTextCons);
              { START(sink__V177, _M__sTextEmbed);
                { START(sink__V177, _M_AsText);
                  {
                    Term arg__V253;
                    { Sink buf__V254 = ALLOCA_BUFFER(sink__V177->context);
                      COPY(buf__V254, sub__V179);arg__V253 = BUFFER_TERM(buf__V254); FREE_BUFFER(buf__V254); }
                    Variable vars__V255[1] = {x__V181};
                    Term args__V256[1] = {arg__V253};
                    struct _SubstitutionFrame substitution__V257 = {NULL, 0, 1, vars__V255, args__V256};
                    SUBSTITUTE(sink__V177, LINK(sink__V177->context,sub__V182), &substitution__V257); }
                  END(sink__V177, _M_AsText); }
                END(sink__V177, _M__sTextEmbed); }
              { START(sink__V177, _M__sTextCons);
                { START(sink__V177, _M__sTextEmbed);
                  { START(sink__V177, _M_AsText);
                    { START(sink__V177, _M_SplitMapText_s1);
                      COPY(sink__V177, sub__V180);{ Variable x__V258 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V177->context,"x__V258");
                        Variable binds__V259[1] = {x__V258}; BINDS(sink__V177, 1, binds__V259);
                        {
                          Term arg__V260;
                          { Sink buf__V261 = ALLOCA_BUFFER(sink__V177->context);
                            USE(buf__V261, linkVariable(buf__V261->context, x__V258));
                            arg__V260 = BUFFER_TERM(buf__V261); FREE_BUFFER(buf__V261); }
                          Variable vars__V262[1] = {x__V181};
                          Term args__V263[1] = {arg__V260};
                          struct _SubstitutionFrame substitution__V264 = {NULL, 0, 1, vars__V262, args__V263};
                          SUBSTITUTE(sink__V177, sub__V182, &substitution__V264); }
                         }
                      
                      {
                        double num__V265;num__V265 = DOUBLE(sub__V183); UNLINK(sink__V177->context, sub__V183); 
                        
                        {
                          double tmp__V266;tmp__V266 = (double) 1;  num__V265 += tmp__V266;
                        }
                        LITERALNF(sink__V177, (size_t) 31, "%G", num__V265);
                      }COPY(sink__V177, sub__V184);COPY(sink__V177, sub__V185);{ Variable x__V267 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V177->context,"x__V267");
                        Variable binds__V268[1] = {x__V267}; BINDS(sink__V177, 1, binds__V268);
                        {
                          Term arg__V269;
                          { Sink buf__V270 = ALLOCA_BUFFER(sink__V177->context);
                            USE(buf__V270, linkVariable(buf__V270->context, x__V267));
                            arg__V269 = BUFFER_TERM(buf__V270); FREE_BUFFER(buf__V270); }
                          Variable vars__V271[1] = {x__V186};
                          Term args__V272[1] = {arg__V269};
                          struct _SubstitutionFrame substitution__V273 = {NULL, 0, 1, vars__V271, args__V272};
                          SUBSTITUTE(sink__V177, sub__V187, &substitution__V273); }
                         }
                      { Variable x__V274 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V177->context,"x__V274");
                        Variable binds__V275[1] = {x__V274}; BINDS(sink__V177, 1, binds__V275);
                        {
                          Term arg__V276;
                          { Sink buf__V277 = ALLOCA_BUFFER(sink__V177->context);
                            USE(buf__V277, linkVariable(buf__V277->context, x__V274));
                            arg__V276 = BUFFER_TERM(buf__V277); FREE_BUFFER(buf__V277); }
                          Variable vars__V278[1] = {x__V188};
                          Term args__V279[1] = {arg__V276};
                          struct _SubstitutionFrame substitution__V280 = {NULL, 0, 1, vars__V278, args__V279};
                          SUBSTITUTE(sink__V177, sub__V189, &substitution__V280); }
                         }
                      END(sink__V177, _M_SplitMapText_s1); }
                    END(sink__V177, _M_AsText); }
                  END(sink__V177, _M__sTextEmbed); }
                { START(sink__V177, _M__sTextNil);
                  END(sink__V177, _M__sTextNil); }
                END(sink__V177, _M__sTextCons); }
              END(sink__V177, _M__sTextCons); }
             }
        }
         }
    }
    UNLINK_NamedPropertyLink(sink__V177->context, namedP__V190); 
    UNLINK_VariablePropertyLink(sink__V177->context, varP__V191);
    unlinkVariable(sink__V177->context, x__V188);
    unlinkVariable(sink__V177->context, x__V186); unlinkVariable(sink__V177->context, x__V181);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SplitMapText$3. */
int conBindOffs_M_SplitMapText_s3[] = {0 , 1 , 1 , 1 , 1 , 2 , 3};
char *nameFun_M_SplitMapText_s3(Term term) { return  "SplitMapText$3" ; }
struct _ConstructionDescriptor descriptor_M_SplitMapText_s3 = {&sort_M_Reified_xVariable, 0, 6, sizeof(STRUCT_Con_M_SplitMapText_s3), conBindOffs_M_SplitMapText_s3, &nameFun_M_SplitMapText_s3, &step_M_SplitMapText_s3};

int step_M_SplitMapText_s3(Sink sink__V281, Term term__V282)
{
  int term__V282_count = LINK_COUNT(term__V282); permitUnusedInt(term__V282_count);
  do {
    /* Contraction rule DEFS-SplitMapText-2. */
    ASSERT(sink__V281->context, !strcmp(SYMBOL(term__V282),  "SplitMapText$3" ));
    Variable x__V283 = linkVariable(sink__V281->context, BINDER(term__V282,0,0)); if (term__V282_count <= 1) UNBIND(x__V283);
    Term sub__V284 = SUB(term__V282, 0); int sub__V284_count = term__V282_count*LINK_COUNT(sub__V284); permitUnusedInt(sub__V284_count);
    CRSX_CHECK_SORT(sink__V281->context, sub__V284, &sort_M_Reified_xVariable); /* sub__V284 = &#1 */
    Term sub__V285 = SUB(term__V282, 1); int sub__V285_count = term__V282_count*LINK_COUNT(sub__V285); permitUnusedInt(sub__V285_count);
    /* sub__V285 = &#3 */
    Term sub__V286 = LINK(sink__V281->context, SUB(term__V282, 2)); int sub__V286_count = term__V282_count*LINK_COUNT(sub__V286); permitUnusedInt(sub__V286_count);
    UNLINK_SUB(sink__V281->context, term__V282,  2); NORMALIZE(sink__V281->context, sub__V286); SUB(term__V282,  2) = LINK(sink__V281->context, sub__V286);
    /* sub__V286 = &#4 */
    Term sub__V287 = SUB(term__V282, 3); int sub__V287_count = term__V282_count*LINK_COUNT(sub__V287); permitUnusedInt(sub__V287_count);
    /* sub__V287 = &#5 */
    Variable x__V288 = linkVariable(sink__V281->context, BINDER(term__V282,4,0)); if (term__V282_count <= 1) UNBIND(x__V288);
    Term sub__V289 = SUB(term__V282, 4); int sub__V289_count = term__V282_count*LINK_COUNT(sub__V289); permitUnusedInt(sub__V289_count);
    CRSX_CHECK_SORT(sink__V281->context, sub__V289, &sort_M_Reified_xVariable); /* sub__V289 = &#6 */
    Variable x__V290 = linkVariable(sink__V281->context, BINDER(term__V282,5,0)); if (term__V282_count <= 1) UNBIND(x__V290);
    Term sub__V291 = LINK(sink__V281->context, SUB(term__V282, 5)); int sub__V291_count = term__V282_count*LINK_COUNT(sub__V291); permitUnusedInt(sub__V291_count);
    CRSX_CHECK_SORT(sink__V281->context, sub__V291, &sort_M_Reified_xVariable); /* sub__V291 = &#7 */
    
    NamedPropertyLink namedP__V292 = LINK_NamedPropertyLink(sink__V281->context, NAMED_PROPERTIES(term__V282));
    VariablePropertyLink varP__V293 = LINK_VariablePropertyLink(sink__V281->context, VARIABLE_PROPERTIES(term__V282));
    UNLINK(sink__V281->context, term__V282);
    {
      Term arg__V294;
      { Sink buf__V295 = ALLOCA_BUFFER(sink__V281->context);
        COPY(buf__V295, sub__V286);arg__V294 = BUFFER_TERM(buf__V295); FREE_BUFFER(buf__V295); }
      Variable vars__V296[1] = {x__V290};
      Term args__V297[1] = {arg__V294};
      struct _SubstitutionFrame substitution__V298 = {NULL, 0, 1, vars__V296, args__V297};
      SUBSTITUTE(sink__V281, sub__V291, &substitution__V298); }
    UNLINK_NamedPropertyLink(sink__V281->context, namedP__V292); 
    UNLINK_VariablePropertyLink(sink__V281->context, varP__V293);
    unlinkVariable(sink__V281->context, x__V290);
    unlinkVariable(sink__V281->context, x__V288); unlinkVariable(sink__V281->context, x__V283);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION HasFunctionalFormBinders. */
int conBindOffs_M_HasFunctionalFormBinders[] = {0 , 0};
char *nameFun_M_HasFunctionalFormBinders(Term term) { return  "HasFunctionalFormBinders" ; }
struct _ConstructionDescriptor descriptor_M_HasFunctionalFormBinders = {NULL, 0, 1, sizeof(STRUCT_Con_M_HasFunctionalFormBinders), conBindOffs_M_HasFunctionalFormBinders, &nameFun_M_HasFunctionalFormBinders, &step_M_HasFunctionalFormBinders};

int step_M_HasFunctionalFormBinders(Sink sink__V299, Term term__V300)
{
  int term__V300_count = LINK_COUNT(term__V300); permitUnusedInt(term__V300_count);
  Term sub__V301 = FORCE(sink__V299->context, SUB(term__V300, 0));
  EnumOf_M_Reified_xFormArgument choice__V302 = (IS_VARIABLE_USE(sub__V301) ? VarOf_M_Reified_xFormArgument : (EnumOf_M_Reified_xFormArgument) TAG(sub__V301));
  switch (choice__V302)
  {
    case Data_M_FORM_BINDER: { /* Function DEFS-HasFunctionalFormBinders-1$HasFunctionalFormBinders$FORM-BINDER case FORM-BINDER */
      ASSERT(sink__V299->context, !strcmp(SYMBOL(term__V300),  "HasFunctionalFormBinders" ));
      Term sub__V303 = SUB(term__V300, 0); int sub__V303_count = term__V300_count*LINK_COUNT(sub__V303); permitUnusedInt(sub__V303_count);
      CRSX_CHECK_SORT(sink__V299->context, sub__V303, &sort_M_Reified_xFormArgument); ASSERT(sink__V299->context, !strcmp(SYMBOL(sub__V303),  "FORM-BINDER" ));
      Term sub__V304 = LINK(sink__V299->context, SUB(sub__V303, 0)); int sub__V304_count = sub__V303_count*LINK_COUNT(sub__V304); permitUnusedInt(sub__V304_count);
      CRSX_CHECK_SORT(sink__V299->context, sub__V304, &sort_M_Reified_xKind); /* sub__V304 = &#0-0 */
      Term sub__V305 = LINK(sink__V299->context, SUB(sub__V303, 1)); int sub__V305_count = sub__V303_count*LINK_COUNT(sub__V305); permitUnusedInt(sub__V305_count);
      CRSX_CHECK_SORT(sink__V299->context, sub__V305, &sort_M_Reified_xSort); /* sub__V305 = &#0-1 */
      Variable y__V306 = linkVariable(sink__V299->context, BINDER(sub__V303,2,0)); if (sub__V303_count <= 1) UNBIND(y__V306);
      Term sub__V307 = LINK(sink__V299->context, SUB(sub__V303, 2)); int sub__V307_count = sub__V303_count*LINK_COUNT(sub__V307); permitUnusedInt(sub__V307_count);
      CRSX_CHECK_SORT(sink__V299->context, sub__V307, &sort_M_Reified_xFormArgument); /* sub__V307 = &#0-2 */
      
      NamedPropertyLink namedP__V308 = LINK_NamedPropertyLink(sink__V299->context, NAMED_PROPERTIES(term__V300));
      VariablePropertyLink varP__V309 = LINK_VariablePropertyLink(sink__V299->context, VARIABLE_PROPERTIES(term__V300));
      UNLINK(sink__V299->context, term__V300);
      ADD_PROPERTIES(sink__V299, LINK_NamedPropertyLink(sink__V299->context, namedP__V308), LINK_VariablePropertyLink(sink__V299->context, varP__V309));
      { START(sink__V299, _M_HasFunctionalFormBinders_s2);
        COPY(sink__V299, sub__V304);COPY(sink__V299, sub__V305);{ if (!IS_BOUND(y__V306)) { REBIND(linkVariable(sink__V299->context, y__V306));
            Variable binds__V310[1] = {y__V306}; BINDS(sink__V299, 1, binds__V310);
            COPY(sink__V299, sub__V307); /* REUSED SUBSTITUTION */  }
          else { Variable b__V311 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V299->context,"b__V311");
            Variable binds__V312[1] = {b__V311}; BINDS(sink__V299, 1, binds__V312);
            {
              Term arg__V313;
              { Sink buf__V314 = ALLOCA_BUFFER(sink__V299->context);
                USE(buf__V314, linkVariable(buf__V314->context, b__V311));
                arg__V313 = BUFFER_TERM(buf__V314); FREE_BUFFER(buf__V314); }
              Variable vars__V315[1] = {y__V306};
              Term args__V316[1] = {arg__V313};
              struct _SubstitutionFrame substitution__V317 = {NULL, 0, 1, vars__V315, args__V316};
              SUBSTITUTE(sink__V299, sub__V307, &substitution__V317); }
                }
           }
        END(sink__V299, _M_HasFunctionalFormBinders_s2); }
      UNLINK_NamedPropertyLink(sink__V299->context, namedP__V308); 
      UNLINK_VariablePropertyLink(sink__V299->context, varP__V309); unlinkVariable(sink__V299->context, y__V306);
      
      return 1;
    break; } case Data_M_FORM_ARGUMENT: { /* Function DEFS-HasFunctionalFormBinders-3$HasFunctionalFormBinders$FORM-ARGUMENT case FORM-ARGUMENT */
      ASSERT(sink__V299->context, !strcmp(SYMBOL(term__V300),  "HasFunctionalFormBinders" ));
      Term sub__V318 = SUB(term__V300, 0); int sub__V318_count = term__V300_count*LINK_COUNT(sub__V318); permitUnusedInt(sub__V318_count);
      CRSX_CHECK_SORT(sink__V299->context, sub__V318, &sort_M_Reified_xFormArgument); ASSERT(sink__V299->context, !strcmp(SYMBOL(sub__V318),  "FORM-ARGUMENT" ));
      Term sub__V319 = LINK(sink__V299->context, SUB(sub__V318, 0)); int sub__V319_count = sub__V318_count*LINK_COUNT(sub__V319); permitUnusedInt(sub__V319_count);
      CRSX_CHECK_SORT(sink__V299->context, sub__V319, &sort_M_Reified_xSort); /* sub__V319 = &#0-0 */
      
      NamedPropertyLink namedP__V320 = LINK_NamedPropertyLink(sink__V299->context, NAMED_PROPERTIES(term__V300));
      VariablePropertyLink varP__V321 = LINK_VariablePropertyLink(sink__V299->context, VARIABLE_PROPERTIES(term__V300));
      UNLINK(sink__V299->context, term__V300);
      ADD_PROPERTIES(sink__V299, LINK_NamedPropertyLink(sink__V299->context, namedP__V320), LINK_VariablePropertyLink(sink__V299->context, varP__V321));
      { START(sink__V299, _M_HasFunctionalFormBinders_s1);
        COPY(sink__V299, sub__V319);END(sink__V299, _M_HasFunctionalFormBinders_s1); }
      UNLINK_NamedPropertyLink(sink__V299->context, namedP__V320); 
      UNLINK_VariablePropertyLink(sink__V299->context, varP__V321);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION DINTEGER. */
int conBindOffs_M_DINTEGER[] = {0 , 0 , 0};
char *nameFun_M_DINTEGER(Term term) { return  "DINTEGER" ; }
struct _ConstructionDescriptor descriptor_M_DINTEGER = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_DINTEGER), conBindOffs_M_DINTEGER, &nameFun_M_DINTEGER, &step_M_DINTEGER};

int step_M_DINTEGER(Sink sink__V322, Term term__V323)
{
  int term__V323_count = LINK_COUNT(term__V323); permitUnusedInt(term__V323_count);
  Term sub__V324 = FORCE(sink__V322->context, SUB(term__V323, 0));
  EnumOf_M_OK_xSORT choice__V325 = (IS_VARIABLE_USE(sub__V324) ? VarOf_M_OK_xSORT : (EnumOf_M_OK_xSORT) TAG(sub__V324));
  switch (choice__V325)
  {
    case Data_M_OK: { /* Function DEFS-DINTEGER-1$DINTEGER$OK case OK */
      ASSERT(sink__V322->context, !strcmp(SYMBOL(term__V323),  "DINTEGER" ));
      Term sub__V326 = SUB(term__V323, 0); int sub__V326_count = term__V323_count*LINK_COUNT(sub__V326); permitUnusedInt(sub__V326_count);
      CRSX_CHECK_SORT(sink__V322->context, sub__V326, &sort_M_OK_xSORT); ASSERT(sink__V322->context, !strcmp(SYMBOL(sub__V326),  "OK" ));
      Term sub__V327 = LINK(sink__V322->context, SUB(term__V323, 1)); int sub__V327_count = term__V323_count*LINK_COUNT(sub__V327); permitUnusedInt(sub__V327_count);
      /* sub__V327 = &#0 */
      
      NamedPropertyLink namedP__V328 = LINK_NamedPropertyLink(sink__V322->context, NAMED_PROPERTIES(term__V323));
      VariablePropertyLink varP__V329 = LINK_VariablePropertyLink(sink__V322->context, VARIABLE_PROPERTIES(term__V323));
      UNLINK(sink__V322->context, term__V323);
      ADD_PROPERTIES(sink__V322, LINK_NamedPropertyLink(sink__V322->context, namedP__V328), LINK_VariablePropertyLink(sink__V322->context, varP__V329));
      { START(sink__V322, _M_DINTEGER_s1);
        COPY(sink__V322, sub__V327);END(sink__V322, _M_DINTEGER_s1); }
      UNLINK_NamedPropertyLink(sink__V322->context, namedP__V328); 
      UNLINK_VariablePropertyLink(sink__V322->context, varP__V329);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION Step. */
int conBindOffs_M_Step[] = {0 , 0};
char *nameFun_M_Step(Term term) { return  "Step" ; }
struct _ConstructionDescriptor descriptor_M_Step = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Step), conBindOffs_M_Step, &nameFun_M_Step, &step_M_Step};

int step_M_Step(Sink sink__V330, Term term__V331)
{
  int term__V331_count = LINK_COUNT(term__V331); permitUnusedInt(term__V331_count);
  do {
    /* Contraction rule DEFS-Step-1. */
    ASSERT(sink__V330->context, !strcmp(SYMBOL(term__V331),  "Step" ));
    Term sub__V332 = LINK(sink__V330->context, SUB(term__V331, 0)); int sub__V332_count = term__V331_count*LINK_COUNT(sub__V332); permitUnusedInt(sub__V332_count);
    /* sub__V332 = &#1 */
    
    NamedPropertyLink namedP__V333 = LINK_NamedPropertyLink(sink__V330->context, NAMED_PROPERTIES(term__V331));
    VariablePropertyLink varP__V334 = LINK_VariablePropertyLink(sink__V330->context, VARIABLE_PROPERTIES(term__V331));
    UNLINK(sink__V330->context, term__V331);
    { START(sink__V330, _M__sTextCons);
      { START(sink__V330, _M__sTextChars);
        LITERAL(sink__V330,  "step" ); END(sink__V330, _M__sTextChars); }
      { START(sink__V330, _M__sTextCons);
        { START(sink__V330, _M__sTextEmbed);
          { START(sink__V330, _M_AsText);
            { START(sink__V330, _M_MANGLE);
              COPY(sink__V330, sub__V332);END(sink__V330, _M_MANGLE); }
            END(sink__V330, _M_AsText); }
          END(sink__V330, _M__sTextEmbed); }
        { START(sink__V330, _M__sTextNil);
          END(sink__V330, _M__sTextNil); }
        END(sink__V330, _M__sTextCons); }
      END(sink__V330, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V330->context, namedP__V333); 
    UNLINK_VariablePropertyLink(sink__V330->context, varP__V334);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION ReverseConcatText$1. */
int conBindOffs_M_ReverseConcatText_s1[] = {0 , 0 , 0 , 0};
char *nameFun_M_ReverseConcatText_s1(Term term) { return  "ReverseConcatText$1" ; }
struct _ConstructionDescriptor descriptor_M_ReverseConcatText_s1 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_ReverseConcatText_s1), conBindOffs_M_ReverseConcatText_s1, &nameFun_M_ReverseConcatText_s1, &step_M_ReverseConcatText_s1};

int step_M_ReverseConcatText_s1(Sink sink__V335, Term term__V336)
{
  int term__V336_count = LINK_COUNT(term__V336); permitUnusedInt(term__V336_count);
  do {
    /* Contraction rule DEFS-ReverseConcatText-2. */
    ASSERT(sink__V335->context, !strcmp(SYMBOL(term__V336),  "ReverseConcatText$1" ));
    Term sub__V337 = LINK(sink__V335->context, SUB(term__V336, 0)); int sub__V337_count = term__V336_count*LINK_COUNT(sub__V337); permitUnusedInt(sub__V337_count);
    /* sub__V337 = &#11 */
    Term sub__V338 = LINK(sink__V335->context, SUB(term__V336, 1)); int sub__V338_count = term__V336_count*LINK_COUNT(sub__V338); permitUnusedInt(sub__V338_count);
    /* sub__V338 = &#12 */
    Term sub__V339 = LINK(sink__V335->context, SUB(term__V336, 2)); int sub__V339_count = term__V336_count*LINK_COUNT(sub__V339); permitUnusedInt(sub__V339_count);
    CRSX_CHECK_SORT(sink__V335->context, sub__V339, &sort_M_Reified_xVariable); /* sub__V339 = &#2 */
    
    NamedPropertyLink namedP__V340 = LINK_NamedPropertyLink(sink__V335->context, NAMED_PROPERTIES(term__V336));
    VariablePropertyLink varP__V341 = LINK_VariablePropertyLink(sink__V335->context, VARIABLE_PROPERTIES(term__V336));
    UNLINK(sink__V335->context, term__V336);
    { START(sink__V335, _M__sTextCons);
      { START(sink__V335, _M__sTextEmbed);
        { START(sink__V335, _M_AsText);
          { START(sink__V335, _M_ReverseConcatText);
            COPY(sink__V335, sub__V338);COPY(sink__V335, LINK(sink__V335->context, sub__V339));END(sink__V335, _M_ReverseConcatText); }
          END(sink__V335, _M_AsText); }
        END(sink__V335, _M__sTextEmbed); }
      { START(sink__V335, _M__sTextCons);
        { START(sink__V335, _M__sTextEmbed);
          { START(sink__V335, _M_AsText);
            COPY(sink__V335, sub__V339);END(sink__V335, _M_AsText); }
          END(sink__V335, _M__sTextEmbed); }
        { START(sink__V335, _M__sTextCons);
          { START(sink__V335, _M__sTextEmbed);
            { START(sink__V335, _M_AsText);
              COPY(sink__V335, sub__V337);END(sink__V335, _M_AsText); }
            END(sink__V335, _M__sTextEmbed); }
          { START(sink__V335, _M__sTextNil);
            END(sink__V335, _M__sTextNil); }
          END(sink__V335, _M__sTextCons); }
        END(sink__V335, _M__sTextCons); }
      END(sink__V335, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V335->context, namedP__V340); 
    UNLINK_VariablePropertyLink(sink__V335->context, varP__V341);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION ReverseConcatText$2. */
int conBindOffs_M_ReverseConcatText_s2[] = {0 , 0};
char *nameFun_M_ReverseConcatText_s2(Term term) { return  "ReverseConcatText$2" ; }
struct _ConstructionDescriptor descriptor_M_ReverseConcatText_s2 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_ReverseConcatText_s2), conBindOffs_M_ReverseConcatText_s2, &nameFun_M_ReverseConcatText_s2, &step_M_ReverseConcatText_s2};

int step_M_ReverseConcatText_s2(Sink sink__V342, Term term__V343)
{
  int term__V343_count = LINK_COUNT(term__V343); permitUnusedInt(term__V343_count);
  do {
    /* Contraction rule DEFS-ReverseConcatText-1. */
    ASSERT(sink__V342->context, !strcmp(SYMBOL(term__V343),  "ReverseConcatText$2" ));
    Term sub__V344 = SUB(term__V343, 0); int sub__V344_count = term__V343_count*LINK_COUNT(sub__V344); permitUnusedInt(sub__V344_count);
    CRSX_CHECK_SORT(sink__V342->context, sub__V344, &sort_M_Reified_xVariable); /* sub__V344 = &#2 */
    
    NamedPropertyLink namedP__V345 = LINK_NamedPropertyLink(sink__V342->context, NAMED_PROPERTIES(term__V343));
    VariablePropertyLink varP__V346 = LINK_VariablePropertyLink(sink__V342->context, VARIABLE_PROPERTIES(term__V343));
    UNLINK(sink__V342->context, term__V343);
    { START(sink__V342, _M__sTextNil); END(sink__V342, _M__sTextNil); }
    UNLINK_NamedPropertyLink(sink__V342->context, namedP__V345); 
    UNLINK_VariablePropertyLink(sink__V342->context, varP__V346);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION DMANGLE. */
int conBindOffs_M_DMANGLE[] = {0 , 0 , 0};
char *nameFun_M_DMANGLE(Term term) { return  "DMANGLE" ; }
struct _ConstructionDescriptor descriptor_M_DMANGLE = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_DMANGLE), conBindOffs_M_DMANGLE, &nameFun_M_DMANGLE, &step_M_DMANGLE};

int step_M_DMANGLE(Sink sink__V347, Term term__V348)
{
  int term__V348_count = LINK_COUNT(term__V348); permitUnusedInt(term__V348_count);
  Term sub__V349 = FORCE(sink__V347->context, SUB(term__V348, 0));
  EnumOf_M_OK_xSORT choice__V350 = (IS_VARIABLE_USE(sub__V349) ? VarOf_M_OK_xSORT : (EnumOf_M_OK_xSORT) TAG(sub__V349));
  switch (choice__V350)
  {
    case Data_M_OK: { /* Function DEFS-DMANGLE-1$DMANGLE$OK case OK */
      ASSERT(sink__V347->context, !strcmp(SYMBOL(term__V348),  "DMANGLE" ));
      Term sub__V351 = SUB(term__V348, 0); int sub__V351_count = term__V348_count*LINK_COUNT(sub__V351); permitUnusedInt(sub__V351_count);
      CRSX_CHECK_SORT(sink__V347->context, sub__V351, &sort_M_OK_xSORT); ASSERT(sink__V347->context, !strcmp(SYMBOL(sub__V351),  "OK" ));
      Term sub__V352 = LINK(sink__V347->context, SUB(term__V348, 1)); int sub__V352_count = term__V348_count*LINK_COUNT(sub__V352); permitUnusedInt(sub__V352_count);
      /* sub__V352 = &#0 */
      
      NamedPropertyLink namedP__V353 = LINK_NamedPropertyLink(sink__V347->context, NAMED_PROPERTIES(term__V348));
      VariablePropertyLink varP__V354 = LINK_VariablePropertyLink(sink__V347->context, VARIABLE_PROPERTIES(term__V348));
      UNLINK(sink__V347->context, term__V348);
      ADD_PROPERTIES(sink__V347, LINK_NamedPropertyLink(sink__V347->context, namedP__V353), LINK_VariablePropertyLink(sink__V347->context, varP__V354));
      { START(sink__V347, _M_DMANGLE_s1);
        COPY(sink__V347, sub__V352);END(sink__V347, _M_DMANGLE_s1); }
      UNLINK_NamedPropertyLink(sink__V347->context, namedP__V353); 
      UNLINK_VariablePropertyLink(sink__V347->context, varP__V354);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION UnString. */
int conBindOffs_M_UnString[] = {0 , 0};
char *nameFun_M_UnString(Term term) { return  "UnString" ; }
struct _ConstructionDescriptor descriptor_M_UnString = {NULL, 0, 1, sizeof(STRUCT_Con_M_UnString), conBindOffs_M_UnString, &nameFun_M_UnString, &step_M_UnString};

int step_M_UnString(Sink sink__V355, Term term__V356)
{
  int term__V356_count = LINK_COUNT(term__V356); permitUnusedInt(term__V356_count);
  Term sub__V357 = FORCE(sink__V355->context, SUB(term__V356, 0));
  EnumOf_M_STRING_xENTRY choice__V358 = (IS_VARIABLE_USE(sub__V357) ? VarOf_M_STRING_xENTRY : (EnumOf_M_STRING_xENTRY) TAG(sub__V357));
  switch (choice__V358)
  {
    case Data_M_STRING_xVALUE: { /* Function DEFS-UnString-1$UnString$STRING_VALUE case STRING_VALUE */
      ASSERT(sink__V355->context, !strcmp(SYMBOL(term__V356),  "UnString" ));
      Term sub__V359 = SUB(term__V356, 0); int sub__V359_count = term__V356_count*LINK_COUNT(sub__V359); permitUnusedInt(sub__V359_count);
      CRSX_CHECK_SORT(sink__V355->context, sub__V359, &sort_M_STRING_xENTRY); ASSERT(sink__V355->context, !strcmp(SYMBOL(sub__V359),  "STRING_VALUE" ));
      Term sub__V360 = LINK(sink__V355->context, SUB(sub__V359, 0)); int sub__V360_count = sub__V359_count*LINK_COUNT(sub__V360); permitUnusedInt(sub__V360_count);
      /* sub__V360 = &#0-0 */
      
      NamedPropertyLink namedP__V361 = LINK_NamedPropertyLink(sink__V355->context, NAMED_PROPERTIES(term__V356));
      VariablePropertyLink varP__V362 = LINK_VariablePropertyLink(sink__V355->context, VARIABLE_PROPERTIES(term__V356));
      UNLINK(sink__V355->context, term__V356);
      ADD_PROPERTIES(sink__V355, LINK_NamedPropertyLink(sink__V355->context, namedP__V361), LINK_VariablePropertyLink(sink__V355->context, varP__V362));
      { START(sink__V355, _M_UnString_s1);
        COPY(sink__V355, sub__V360);END(sink__V355, _M_UnString_s1); }
      UNLINK_NamedPropertyLink(sink__V355->context, namedP__V361); 
      UNLINK_VariablePropertyLink(sink__V355->context, varP__V362);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION FormArguments-binder-count. */
int conBindOffs_M_FormArguments__binder__count[] = {0 , 0 , 0};
char *nameFun_M_FormArguments__binder__count(Term term) { return  "FormArguments-binder-count" ; }
struct _ConstructionDescriptor descriptor_M_FormArguments__binder__count = {NULL, 0, 2, sizeof(STRUCT_Con_M_FormArguments__binder__count), conBindOffs_M_FormArguments__binder__count, &nameFun_M_FormArguments__binder__count, &step_M_FormArguments__binder__count};

int step_M_FormArguments__binder__count(Sink sink__V363, Term term__V364)
{
  int term__V364_count = LINK_COUNT(term__V364); permitUnusedInt(term__V364_count);
  Term sub__V365 = FORCE(sink__V363->context, SUB(term__V364, 0));
  EnumOf_M__sList choice__V366 = (IS_VARIABLE_USE(sub__V365) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V365));
  switch (choice__V366)
  {
    case Data_M__sCons: { /* Function DEFS-FormArguments-binder-count-2$FormArguments-binder-count$$Cons case $Cons */
      ASSERT(sink__V363->context, !strcmp(SYMBOL(term__V364),  "FormArguments-binder-count" ));
      Term sub__V367 = SUB(term__V364, 0); int sub__V367_count = term__V364_count*LINK_COUNT(sub__V367); permitUnusedInt(sub__V367_count);
      ASSERT(sink__V363->context, !strcmp(SYMBOL(sub__V367),  "$Cons" ));
      Term sub__V368 = LINK(sink__V363->context, SUB(sub__V367, 0)); int sub__V368_count = sub__V367_count*LINK_COUNT(sub__V368); permitUnusedInt(sub__V368_count);
      /* sub__V368 = &#0-0 */
      Term sub__V369 = LINK(sink__V363->context, SUB(sub__V367, 1)); int sub__V369_count = sub__V367_count*LINK_COUNT(sub__V369); permitUnusedInt(sub__V369_count);
      /* sub__V369 = &#0-1 */
      Term sub__V370 = LINK(sink__V363->context, SUB(term__V364, 1)); int sub__V370_count = term__V364_count*LINK_COUNT(sub__V370); permitUnusedInt(sub__V370_count);
      /* sub__V370 = &#2 */
      
      NamedPropertyLink namedP__V371 = LINK_NamedPropertyLink(sink__V363->context, NAMED_PROPERTIES(term__V364));
      VariablePropertyLink varP__V372 = LINK_VariablePropertyLink(sink__V363->context, VARIABLE_PROPERTIES(term__V364));
      UNLINK(sink__V363->context, term__V364);
      ADD_PROPERTIES(sink__V363, LINK_NamedPropertyLink(sink__V363->context, namedP__V371), LINK_VariablePropertyLink(sink__V363->context, varP__V372));
      { START(sink__V363, _M_FormArguments__binder__count_s1);
        COPY(sink__V363, sub__V368);COPY(sink__V363, sub__V369);COPY(sink__V363, sub__V370);END(sink__V363, _M_FormArguments__binder__count_s1); }
      UNLINK_NamedPropertyLink(sink__V363->context, namedP__V371); 
      UNLINK_VariablePropertyLink(sink__V363->context, varP__V372);
      
      return 1;
    break; } case Data_M__sNil: { /* Function DEFS-FormArguments-binder-count-3$FormArguments-binder-count$$Nil case $Nil */
      ASSERT(sink__V363->context, !strcmp(SYMBOL(term__V364),  "FormArguments-binder-count" ));
      Term sub__V373 = SUB(term__V364, 0); int sub__V373_count = term__V364_count*LINK_COUNT(sub__V373); permitUnusedInt(sub__V373_count);
      ASSERT(sink__V363->context, !strcmp(SYMBOL(sub__V373),  "$Nil" ));
      Term sub__V374 = LINK(sink__V363->context, SUB(term__V364, 1)); int sub__V374_count = term__V364_count*LINK_COUNT(sub__V374); permitUnusedInt(sub__V374_count);
      /* sub__V374 = &#0 */
      
      NamedPropertyLink namedP__V375 = LINK_NamedPropertyLink(sink__V363->context, NAMED_PROPERTIES(term__V364));
      VariablePropertyLink varP__V376 = LINK_VariablePropertyLink(sink__V363->context, VARIABLE_PROPERTIES(term__V364));
      UNLINK(sink__V363->context, term__V364);
      ADD_PROPERTIES(sink__V363, LINK_NamedPropertyLink(sink__V363->context, namedP__V375), LINK_VariablePropertyLink(sink__V363->context, varP__V376));
      { START(sink__V363, _M_FormArguments__binder__count_s4);
        COPY(sink__V363, sub__V374);END(sink__V363, _M_FormArguments__binder__count_s4); }
      UNLINK_NamedPropertyLink(sink__V363->context, namedP__V375); 
      UNLINK_VariablePropertyLink(sink__V363->context, varP__V376);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION DMANGLE$1. */
int conBindOffs_M_DMANGLE_s1[] = {0 , 0};
char *nameFun_M_DMANGLE_s1(Term term) { return  "DMANGLE$1" ; }
struct _ConstructionDescriptor descriptor_M_DMANGLE_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_DMANGLE_s1), conBindOffs_M_DMANGLE_s1, &nameFun_M_DMANGLE_s1, &step_M_DMANGLE_s1};

int step_M_DMANGLE_s1(Sink sink__V377, Term term__V378)
{
  int term__V378_count = LINK_COUNT(term__V378); permitUnusedInt(term__V378_count);
  do {
    /* Contraction rule DEFS-DMANGLE-1. */
    ASSERT(sink__V377->context, !strcmp(SYMBOL(term__V378),  "DMANGLE$1" ));
    Term sub__V379 = LINK(sink__V377->context, SUB(term__V378, 0)); int sub__V379_count = term__V378_count*LINK_COUNT(sub__V379); permitUnusedInt(sub__V379_count);
    UNLINK_SUB(sink__V377->context, term__V378,  0); NORMALIZE(sink__V377->context, sub__V379); SUB(term__V378,  0) = LINK(sink__V377->context, sub__V379);
    /* sub__V379 = &#2 */
    
    NamedPropertyLink namedP__V380 = LINK_NamedPropertyLink(sink__V377->context, NAMED_PROPERTIES(term__V378));
    VariablePropertyLink varP__V381 = LINK_VariablePropertyLink(sink__V377->context, VARIABLE_PROPERTIES(term__V378));
    UNLINK(sink__V377->context, term__V378);
    { START(sink__V377, _M__sTextCons);
      { START(sink__V377, _M__sTextChars);
        { char *str__V382;
          FORCE(sink__V377->context, sub__V379); LINK(sink__V377->context, sub__V379);
          { char *s__V383 = makeMangled(sink__V377->context, SYMBOL(sub__V379));
            { size_t z__V384 = strlen(s__V383) + 1; memcpy(str__V382 = ALLOCATE(sink__V377->context, z__V384), s__V383, z__V384);  UNLINK(sink__V377->context, sub__V379);  UNLINK(sink__V377->context, sub__V379); }
            }
          LITERALU(sink__V377, str__V382); }
        END(sink__V377, _M__sTextChars); }
      { START(sink__V377, _M__sTextNil);
        END(sink__V377, _M__sTextNil); }
      END(sink__V377, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V377->context, namedP__V380); 
    UNLINK_VariablePropertyLink(sink__V377->context, varP__V381);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION INTEGER. */
int conBindOffs_M_INTEGER[] = {0 , 0};
char *nameFun_M_INTEGER(Term term) { return  "INTEGER" ; }
struct _ConstructionDescriptor descriptor_M_INTEGER = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_INTEGER), conBindOffs_M_INTEGER, &nameFun_M_INTEGER, &step_M_INTEGER};

int step_M_INTEGER(Sink sink__V385, Term term__V386)
{
  int term__V386_count = LINK_COUNT(term__V386); permitUnusedInt(term__V386_count);
  do {
    /* Contraction rule DEFS-INTEGER-1. */
    ASSERT(sink__V385->context, !strcmp(SYMBOL(term__V386),  "INTEGER" ));
    Term sub__V387 = LINK(sink__V385->context, SUB(term__V386, 0)); int sub__V387_count = term__V386_count*LINK_COUNT(sub__V387); permitUnusedInt(sub__V387_count);
    UNLINK_SUB(sink__V385->context, term__V386,  0); NORMALIZE(sink__V385->context, sub__V387); SUB(term__V386,  0) = LINK(sink__V385->context, sub__V387);
    /* sub__V387 = &#1 */
    
    NamedPropertyLink namedP__V388 = LINK_NamedPropertyLink(sink__V385->context, NAMED_PROPERTIES(term__V386));
    VariablePropertyLink varP__V389 = LINK_VariablePropertyLink(sink__V385->context, VARIABLE_PROPERTIES(term__V386));
    UNLINK(sink__V385->context, term__V386);
    { START(sink__V385, _M__sTextCons);
      { START(sink__V385, _M__sTextChars);
        { char *str__V390;
          
          {
            double num__V391; char *str__V392;num__V391 = DOUBLE(sub__V387); UNLINK(sink__V385->context, sub__V387); 
            
            snprintf(str__V392 = ALLOCA(sink__V385->context, (size_t) 32), (size_t) 31, "%G", num__V391);
            { size_t z__V393 = strlen(str__V392) + 1; memcpy(str__V390 = ALLOCATE(sink__V385->context, z__V393), str__V392, z__V393); }
            
          }LITERALU(sink__V385, str__V390); }
        END(sink__V385, _M__sTextChars); }
      { START(sink__V385, _M__sTextNil);
        END(sink__V385, _M__sTextNil); }
      END(sink__V385, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V385->context, namedP__V388); 
    UNLINK_VariablePropertyLink(sink__V385->context, varP__V389);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Append$2. */
int conBindOffs_M_Append_s2[] = {0 , 0};
char *nameFun_M_Append_s2(Term term) { return  "Append$2" ; }
struct _ConstructionDescriptor descriptor_M_Append_s2 = {NULL, 0, 1, sizeof(STRUCT_Con_M_Append_s2), conBindOffs_M_Append_s2, &nameFun_M_Append_s2, &step_M_Append_s2};

int step_M_Append_s2(Sink sink__V394, Term term__V395)
{
  int term__V395_count = LINK_COUNT(term__V395); permitUnusedInt(term__V395_count);
  do {
    /* Contraction rule DEFS-Append-1. */
    ASSERT(sink__V394->context, !strcmp(SYMBOL(term__V395),  "Append$2" ));
    Term sub__V396 = LINK(sink__V394->context, SUB(term__V395, 0)); int sub__V396_count = term__V395_count*LINK_COUNT(sub__V396); permitUnusedInt(sub__V396_count);
    /* sub__V396 = &#2 */
    UNLINK(sink__V394->context, term__V395);
    COPY(sink__V394, sub__V396);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Append$1. */
int conBindOffs_M_Append_s1[] = {0 , 0 , 0 , 0};
char *nameFun_M_Append_s1(Term term) { return  "Append$1" ; }
struct _ConstructionDescriptor descriptor_M_Append_s1 = {NULL, 0, 3, sizeof(STRUCT_Con_M_Append_s1), conBindOffs_M_Append_s1, &nameFun_M_Append_s1, &step_M_Append_s1};

int step_M_Append_s1(Sink sink__V397, Term term__V398)
{
  int term__V398_count = LINK_COUNT(term__V398); permitUnusedInt(term__V398_count);
  do {
    /* Contraction rule DEFS-Append-2. */
    ASSERT(sink__V397->context, !strcmp(SYMBOL(term__V398),  "Append$1" ));
    Term sub__V399 = LINK(sink__V397->context, SUB(term__V398, 0)); int sub__V399_count = term__V398_count*LINK_COUNT(sub__V399); permitUnusedInt(sub__V399_count);
    /* sub__V399 = &#11 */
    Term sub__V400 = LINK(sink__V397->context, SUB(term__V398, 1)); int sub__V400_count = term__V398_count*LINK_COUNT(sub__V400); permitUnusedInt(sub__V400_count);
    /* sub__V400 = &#12 */
    Term sub__V401 = LINK(sink__V397->context, SUB(term__V398, 2)); int sub__V401_count = term__V398_count*LINK_COUNT(sub__V401); permitUnusedInt(sub__V401_count);
    /* sub__V401 = &#2 */
    UNLINK(sink__V397->context, term__V398);
    { START(sink__V397, _M__sCons);
      COPY(sink__V397, sub__V399);{ START(sink__V397, _M_Append);
        COPY(sink__V397, sub__V400);COPY(sink__V397, sub__V401);END(sink__V397, _M_Append); }
      END(sink__V397, _M__sCons); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MetaVar2$1. */
int conBindOffs_M_MetaVar2_s1[] = {0 , 0};
char *nameFun_M_MetaVar2_s1(Term term) { return  "MetaVar2$1" ; }
struct _ConstructionDescriptor descriptor_M_MetaVar2_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_MetaVar2_s1), conBindOffs_M_MetaVar2_s1, &nameFun_M_MetaVar2_s1, &step_M_MetaVar2_s1};

int step_M_MetaVar2_s1(Sink sink__V402, Term term__V403)
{
  int term__V403_count = LINK_COUNT(term__V403); permitUnusedInt(term__V403_count);
  do {
    /* Contraction rule DEFS-MetaVar2-2. */
    ASSERT(sink__V402->context, !strcmp(SYMBOL(term__V403),  "MetaVar2$1" ));
    Term sub__V404 = LINK(sink__V402->context, SUB(term__V403, 0)); int sub__V404_count = term__V403_count*LINK_COUNT(sub__V404); permitUnusedInt(sub__V404_count);
    /* sub__V404 = &#11 */
    
    NamedPropertyLink namedP__V405 = LINK_NamedPropertyLink(sink__V402->context, NAMED_PROPERTIES(term__V403));
    VariablePropertyLink varP__V406 = LINK_VariablePropertyLink(sink__V402->context, VARIABLE_PROPERTIES(term__V403));
    UNLINK(sink__V402->context, term__V403);
    { START(sink__V402, _M_TOKEN);
      COPY(sink__V402, sub__V404);END(sink__V402, _M_TOKEN); }
    UNLINK_NamedPropertyLink(sink__V402->context, namedP__V405); 
    UNLINK_VariablePropertyLink(sink__V402->context, varP__V406);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MetaVar2$2. */
int conBindOffs_M_MetaVar2_s2[] = {0 , 0};
char *nameFun_M_MetaVar2_s2(Term term) { return  "MetaVar2$2" ; }
struct _ConstructionDescriptor descriptor_M_MetaVar2_s2 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_MetaVar2_s2), conBindOffs_M_MetaVar2_s2, &nameFun_M_MetaVar2_s2, &step_M_MetaVar2_s2};

int step_M_MetaVar2_s2(Sink sink__V407, Term term__V408)
{
  int term__V408_count = LINK_COUNT(term__V408); permitUnusedInt(term__V408_count);
  Term sub__V409 = FORCE(sink__V407->context, SUB(term__V408, 0));
  EnumOf_M_Reified_xVariable choice__V410 = (IS_VARIABLE_USE(sub__V409) ? VarOf_M_Reified_xVariable : (EnumOf_M_Reified_xVariable) TAG(sub__V409));
  switch (choice__V410)
  {
    case VarOf_M_Reified_xVariable: {
      do {
        ASSERT(sink__V407->context, !strcmp(SYMBOL(term__V408),  "MetaVar2$2" ));
        Term sub__V411 = SUB(term__V408, 0); int sub__V411_count = term__V408_count*LINK_COUNT(sub__V411); permitUnusedInt(sub__V411_count);
        CRSX_CHECK_SORT(sink__V407->context, sub__V411, &sort_M_Reified_xVariable); /* Function DEFS-MetaVar2-1$vFree fall-back case for free variable */
        Variable z__V412 = linkVariable(sink__V407->context, VARIABLE(sub__V411)); 
        
        NamedPropertyLink namedP__V413 = LINK_NamedPropertyLink(sink__V407->context, NAMED_PROPERTIES(term__V408));
        VariablePropertyLink varP__V414 = LINK_VariablePropertyLink(sink__V407->context, VARIABLE_PROPERTIES(term__V408));
        UNLINK(sink__V407->context, term__V408);
        ADD_PROPERTIES(sink__V407, LINK_NamedPropertyLink(sink__V407->context, namedP__V413), LINK_VariablePropertyLink(sink__V407->context, varP__V414));
        { START(sink__V407, _M_MetaVar2_s3);
          USE(sink__V407, linkVariable(sink__V407->context, z__V412)); END(sink__V407, _M_MetaVar2_s3); }
        UNLINK_NamedPropertyLink(sink__V407->context, namedP__V413); 
        UNLINK_VariablePropertyLink(sink__V407->context, varP__V414); unlinkVariable(sink__V407->context, z__V412);
        
        return 1;
      } while(0);
      } default: break;
  }
  return 0;
}

/* FUNCTION MetaVar2$3. */
int conBindOffs_M_MetaVar2_s3[] = {0 , 0};
char *nameFun_M_MetaVar2_s3(Term term) { return  "MetaVar2$3" ; }
struct _ConstructionDescriptor descriptor_M_MetaVar2_s3 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_MetaVar2_s3), conBindOffs_M_MetaVar2_s3, &nameFun_M_MetaVar2_s3, &step_M_MetaVar2_s3};

int step_M_MetaVar2_s3(Sink sink__V415, Term term__V416)
{
  int term__V416_count = LINK_COUNT(term__V416); permitUnusedInt(term__V416_count);
  do {
    /* Contraction rule DEFS-MetaVar2-1. */
    ASSERT(sink__V415->context, !strcmp(SYMBOL(term__V416),  "MetaVar2$3" ));
    Term sub__V417 = LINK(sink__V415->context, SUB(term__V416, 0)); int sub__V417_count = term__V416_count*LINK_COUNT(sub__V417); permitUnusedInt(sub__V417_count);
    CRSX_CHECK_SORT(sink__V415->context, sub__V417, &sort_M_Reified_xVariable); UNLINK_SUB(sink__V415->context, term__V416,  0); NORMALIZE(sink__V415->context, sub__V417); SUB(term__V416,  0) = LINK(sink__V415->context, sub__V417);
    /* sub__V417 = &#11 */
    
    NamedPropertyLink namedP__V418 = LINK_NamedPropertyLink(sink__V415->context, NAMED_PROPERTIES(term__V416));
    VariablePropertyLink varP__V419 = LINK_VariablePropertyLink(sink__V415->context, VARIABLE_PROPERTIES(term__V416));
    UNLINK(sink__V415->context, term__V416);
    { START(sink__V415, _M__sTextCons);
      { START(sink__V415, _M__sTextEmbed);
        { START(sink__V415, _M_AsText);
          COPY(sink__V415, sub__V417);END(sink__V415, _M_AsText); }
        END(sink__V415, _M__sTextEmbed); }
      { START(sink__V415, _M__sTextNil);
        END(sink__V415, _M__sTextNil); }
      END(sink__V415, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V415->context, namedP__V418); 
    UNLINK_VariablePropertyLink(sink__V415->context, varP__V419);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Sort. */
int conBindOffs_M_Sort[] = {0 , 0};
char *nameFun_M_Sort(Term term) { return  "Sort" ; }
struct _ConstructionDescriptor descriptor_M_Sort = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Sort), conBindOffs_M_Sort, &nameFun_M_Sort, &step_M_Sort};

int step_M_Sort(Sink sink__V420, Term term__V421)
{
  int term__V421_count = LINK_COUNT(term__V421); permitUnusedInt(term__V421_count);
  do {
    /* Contraction rule DEFS-Sort-1. */
    ASSERT(sink__V420->context, !strcmp(SYMBOL(term__V421),  "Sort" ));
    Term sub__V422 = LINK(sink__V420->context, SUB(term__V421, 0)); int sub__V422_count = term__V421_count*LINK_COUNT(sub__V422); permitUnusedInt(sub__V422_count);
    /* sub__V422 = &#1 */
    
    NamedPropertyLink namedP__V423 = LINK_NamedPropertyLink(sink__V420->context, NAMED_PROPERTIES(term__V421));
    VariablePropertyLink varP__V424 = LINK_VariablePropertyLink(sink__V420->context, VARIABLE_PROPERTIES(term__V421));
    UNLINK(sink__V420->context, term__V421);
    { START(sink__V420, _M__sTextCons);
      { START(sink__V420, _M__sTextChars);
        LITERAL(sink__V420,  "sort" ); END(sink__V420, _M__sTextChars); }
      { START(sink__V420, _M__sTextCons);
        { START(sink__V420, _M__sTextEmbed);
          { START(sink__V420, _M_AsText);
            { START(sink__V420, _M_MANGLE);
              COPY(sink__V420, sub__V422);END(sink__V420, _M_MANGLE); }
            END(sink__V420, _M_AsText); }
          END(sink__V420, _M__sTextEmbed); }
        { START(sink__V420, _M__sTextNil);
          END(sink__V420, _M__sTextNil); }
        END(sink__V420, _M__sTextCons); }
      END(sink__V420, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V420->context, namedP__V423); 
    UNLINK_VariablePropertyLink(sink__V420->context, varP__V424);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION EnumVar. */
int conBindOffs_M_EnumVar[] = {0 , 0};
char *nameFun_M_EnumVar(Term term) { return  "EnumVar" ; }
struct _ConstructionDescriptor descriptor_M_EnumVar = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_EnumVar), conBindOffs_M_EnumVar, &nameFun_M_EnumVar, &step_M_EnumVar};

int step_M_EnumVar(Sink sink__V425, Term term__V426)
{
  int term__V426_count = LINK_COUNT(term__V426); permitUnusedInt(term__V426_count);
  do {
    /* Contraction rule DEFS-EnumVar-1. */
    ASSERT(sink__V425->context, !strcmp(SYMBOL(term__V426),  "EnumVar" ));
    Term sub__V427 = LINK(sink__V425->context, SUB(term__V426, 0)); int sub__V427_count = term__V426_count*LINK_COUNT(sub__V427); permitUnusedInt(sub__V427_count);
    /* sub__V427 = &#1 */
    
    NamedPropertyLink namedP__V428 = LINK_NamedPropertyLink(sink__V425->context, NAMED_PROPERTIES(term__V426));
    VariablePropertyLink varP__V429 = LINK_VariablePropertyLink(sink__V425->context, VARIABLE_PROPERTIES(term__V426));
    UNLINK(sink__V425->context, term__V426);
    { START(sink__V425, _M__sTextCons);
      { START(sink__V425, _M__sTextChars);
        LITERAL(sink__V425,  "VarOf" ); END(sink__V425, _M__sTextChars); }
      { START(sink__V425, _M__sTextCons);
        { START(sink__V425, _M__sTextEmbed);
          { START(sink__V425, _M_AsText);
            { START(sink__V425, _M_MANGLE);
              COPY(sink__V425, sub__V427);END(sink__V425, _M_MANGLE); }
            END(sink__V425, _M_AsText); }
          END(sink__V425, _M__sTextEmbed); }
        { START(sink__V425, _M__sTextNil);
          END(sink__V425, _M__sTextNil); }
        END(sink__V425, _M__sTextCons); }
      END(sink__V425, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V425->context, namedP__V428); 
    UNLINK_VariablePropertyLink(sink__V425->context, varP__V429);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MetaVarArity. */
int conBindOffs_M_MetaVarArity[] = {0 , 0};
char *nameFun_M_MetaVarArity(Term term) { return  "MetaVarArity" ; }
struct _ConstructionDescriptor descriptor_M_MetaVarArity = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_MetaVarArity), conBindOffs_M_MetaVarArity, &nameFun_M_MetaVarArity, &step_M_MetaVarArity};

int step_M_MetaVarArity(Sink sink__V430, Term term__V431)
{
  int term__V431_count = LINK_COUNT(term__V431); permitUnusedInt(term__V431_count);
  do {
    /* Contraction rule DEFS-MetaVarArity-1. */
    ASSERT(sink__V430->context, !strcmp(SYMBOL(term__V431),  "MetaVarArity" ));
    Term sub__V432 = LINK(sink__V430->context, SUB(term__V431, 0)); int sub__V432_count = term__V431_count*LINK_COUNT(sub__V432); permitUnusedInt(sub__V432_count);
    UNLINK_SUB(sink__V430->context, term__V431,  0); NORMALIZE(sink__V430->context, sub__V432); SUB(term__V431,  0) = LINK(sink__V430->context, sub__V432);
    /* sub__V432 = &#1 */
    
    NamedPropertyLink namedP__V433 = LINK_NamedPropertyLink(sink__V430->context, NAMED_PROPERTIES(term__V431));
    VariablePropertyLink varP__V434 = LINK_VariablePropertyLink(sink__V430->context, VARIABLE_PROPERTIES(term__V431));
    UNLINK(sink__V430->context, term__V431);
    { START(sink__V430, _M_INTEGER);
      { START(sink__V430, _M_UnNumeric);
        { Term term__V435;
          { Term key__V436;
            { char *str__V437;
              { char *sub__V438[2]; size_t sublength__V439[2]; size_t length__V440 = 0;
                FORCE(sink__V430->context, sub__V432); LINK(sink__V430->context, sub__V432);
                length__V440 += (sublength__V439[0] = strlen(sub__V438[0] = SYMBOL(sub__V432)));
                 UNLINK(sink__V430->context, sub__V432);  UNLINK(sink__V430->context, sub__V432); length__V440 += (sublength__V439[1] = strlen(sub__V438[1] =  "$arity" ));
                { char *str__V441 = ALLOCATE(sink__V430->context, length__V440+1), *p__V442 = str__V441;
                  int i; for (i = 0; i < 2; ++i) { memcpy(p__V442, sub__V438[i], sublength__V439[i]); p__V442 += sublength__V439[i]; }
                  *p__V442 = '\0';
                  ASSERT(sink__V430->context, strlen(str__V441) == length__V440);
                  str__V437 = str__V441; }
                 }
              key__V436 = makeStringLiteral(sink__V430->context, str__V437); }
            Term pp__V443 = DPROPERTY(sink__V430->context, namedP__V433, varP__V434, key__V436);UNLINK(sink__V430->context, key__V436); 
            if (pp__V443) term__V435 = LINK(sink__V430->context, pp__V443);
            else {{ Sink buf__V444 = ALLOCA_BUFFER(sink__V430->context);
                { START(buf__V444, _M_NUM_xVALUE);
                  LITERAL(buf__V444,  "0" ); END(buf__V444, _M_NUM_xVALUE); }
                term__V435 = BUFFER_TERM(buf__V444); FREE_BUFFER(buf__V444); }
              }
          }
          COPY(sink__V430, term__V435); /*CONSERVATIVE*/ }
        END(sink__V430, _M_UnNumeric); }
      END(sink__V430, _M_INTEGER); }
    UNLINK_NamedPropertyLink(sink__V430->context, namedP__V433); 
    UNLINK_VariablePropertyLink(sink__V430->context, varP__V434);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION HasFunctionalFormBinders$4. */
int conBindOffs_M_HasFunctionalFormBinders_s4[] = {0 , 0 , 1};
char *nameFun_M_HasFunctionalFormBinders_s4(Term term) { return  "HasFunctionalFormBinders$4" ; }
struct _ConstructionDescriptor descriptor_M_HasFunctionalFormBinders_s4 = {NULL, 0, 2, sizeof(STRUCT_Con_M_HasFunctionalFormBinders_s4), conBindOffs_M_HasFunctionalFormBinders_s4, &nameFun_M_HasFunctionalFormBinders_s4, &step_M_HasFunctionalFormBinders_s4};

int step_M_HasFunctionalFormBinders_s4(Sink sink__V445, Term term__V446)
{
  int term__V446_count = LINK_COUNT(term__V446); permitUnusedInt(term__V446_count);
  do {
    /* Contraction rule DEFS-HasFunctionalFormBinders-1. */
    ASSERT(sink__V445->context, !strcmp(SYMBOL(term__V446),  "HasFunctionalFormBinders$4" ));
    Term sub__V447 = SUB(term__V446, 0); int sub__V447_count = term__V446_count*LINK_COUNT(sub__V447); permitUnusedInt(sub__V447_count);
    CRSX_CHECK_SORT(sink__V445->context, sub__V447, &sort_M_Reified_xSort); /* sub__V447 = &#12 */
    Variable x__V448 = linkVariable(sink__V445->context, BINDER(term__V446,1,0)); if (term__V446_count <= 1) UNBIND(x__V448);
    Term sub__V449 = SUB(term__V446, 1); int sub__V449_count = term__V446_count*LINK_COUNT(sub__V449); permitUnusedInt(sub__V449_count);
    CRSX_CHECK_SORT(sink__V445->context, sub__V449, &sort_M_Reified_xFormArgument); /* sub__V449 = &#13 */
    UNLINK(sink__V445->context, term__V446);
    { START(sink__V445, _M__sTrue); END(sink__V445, _M__sTrue); }  unlinkVariable(sink__V445->context, x__V448);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION HasFunctionalFormBinders$1. */
int conBindOffs_M_HasFunctionalFormBinders_s1[] = {0 , 0};
char *nameFun_M_HasFunctionalFormBinders_s1(Term term) { return  "HasFunctionalFormBinders$1" ; }
struct _ConstructionDescriptor descriptor_M_HasFunctionalFormBinders_s1 = {NULL, 0, 1, sizeof(STRUCT_Con_M_HasFunctionalFormBinders_s1), conBindOffs_M_HasFunctionalFormBinders_s1, &nameFun_M_HasFunctionalFormBinders_s1, &step_M_HasFunctionalFormBinders_s1};

int step_M_HasFunctionalFormBinders_s1(Sink sink__V450, Term term__V451)
{
  int term__V451_count = LINK_COUNT(term__V451); permitUnusedInt(term__V451_count);
  do {
    /* Contraction rule DEFS-HasFunctionalFormBinders-3. */
    ASSERT(sink__V450->context, !strcmp(SYMBOL(term__V451),  "HasFunctionalFormBinders$1" ));
    Term sub__V452 = SUB(term__V451, 0); int sub__V452_count = term__V451_count*LINK_COUNT(sub__V452); permitUnusedInt(sub__V452_count);
    CRSX_CHECK_SORT(sink__V450->context, sub__V452, &sort_M_Reified_xSort); /* sub__V452 = &#11 */
    UNLINK(sink__V450->context, term__V451);
    { START(sink__V450, _M__sFalse); END(sink__V450, _M__sFalse); } 
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION HasFunctionalFormBinders$3. */
int conBindOffs_M_HasFunctionalFormBinders_s3[] = {0 , 0 , 1};
char *nameFun_M_HasFunctionalFormBinders_s3(Term term) { return  "HasFunctionalFormBinders$3" ; }
struct _ConstructionDescriptor descriptor_M_HasFunctionalFormBinders_s3 = {NULL, 0, 2, sizeof(STRUCT_Con_M_HasFunctionalFormBinders_s3), conBindOffs_M_HasFunctionalFormBinders_s3, &nameFun_M_HasFunctionalFormBinders_s3, &step_M_HasFunctionalFormBinders_s3};

int step_M_HasFunctionalFormBinders_s3(Sink sink__V453, Term term__V454)
{
  int term__V454_count = LINK_COUNT(term__V454); permitUnusedInt(term__V454_count);
  do {
    /* Contraction rule DEFS-HasFunctionalFormBinders-2. */
    ASSERT(sink__V453->context, !strcmp(SYMBOL(term__V454),  "HasFunctionalFormBinders$3" ));
    Term sub__V455 = SUB(term__V454, 0); int sub__V455_count = term__V454_count*LINK_COUNT(sub__V455); permitUnusedInt(sub__V455_count);
    CRSX_CHECK_SORT(sink__V453->context, sub__V455, &sort_M_Reified_xSort); /* sub__V455 = &#12 */
    Variable x__V456 = linkVariable(sink__V453->context, BINDER(term__V454,1,0)); if (term__V454_count <= 1) UNBIND(x__V456);
    Term sub__V457 = LINK(sink__V453->context, SUB(term__V454, 1)); int sub__V457_count = term__V454_count*LINK_COUNT(sub__V457); permitUnusedInt(sub__V457_count);
    CRSX_CHECK_SORT(sink__V453->context, sub__V457, &sort_M_Reified_xFormArgument); /* sub__V457 = &#13 */
    Variable y__V73 = x__V456; permitUnusedVariable(y__V73);
    UNLINK(sink__V453->context, term__V454);
    { START(sink__V453, _M_HasFunctionalFormBinders);
      COPY(sink__V453, sub__V457); /* REUSED SUBSTITUTION */ END(sink__V453, _M_HasFunctionalFormBinders); }
     unlinkVariable(sink__V453->context, x__V456);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION HasFunctionalFormBinders$2. */
int conBindOffs_M_HasFunctionalFormBinders_s2[] = {0 , 0 , 0 , 1};
char *nameFun_M_HasFunctionalFormBinders_s2(Term term) { return  "HasFunctionalFormBinders$2" ; }
struct _ConstructionDescriptor descriptor_M_HasFunctionalFormBinders_s2 = {NULL, 0, 3, sizeof(STRUCT_Con_M_HasFunctionalFormBinders_s2), conBindOffs_M_HasFunctionalFormBinders_s2, &nameFun_M_HasFunctionalFormBinders_s2, &step_M_HasFunctionalFormBinders_s2};

int step_M_HasFunctionalFormBinders_s2(Sink sink__V458, Term term__V459)
{
  int term__V459_count = LINK_COUNT(term__V459); permitUnusedInt(term__V459_count);
  Term sub__V460 = FORCE(sink__V458->context, SUB(term__V459, 0));
  EnumOf_M_Reified_xKind choice__V461 = (IS_VARIABLE_USE(sub__V460) ? VarOf_M_Reified_xKind : (EnumOf_M_Reified_xKind) TAG(sub__V460));
  switch (choice__V461)
  {
    case Data_M_KFUNCTION: { /* Function DEFS-HasFunctionalFormBinders-1$HasFunctionalFormBinders$2$KFUNCTION case KFUNCTION */
      ASSERT(sink__V458->context, !strcmp(SYMBOL(term__V459),  "HasFunctionalFormBinders$2" ));
      Term sub__V462 = SUB(term__V459, 0); int sub__V462_count = term__V459_count*LINK_COUNT(sub__V462); permitUnusedInt(sub__V462_count);
      CRSX_CHECK_SORT(sink__V458->context, sub__V462, &sort_M_Reified_xKind); ASSERT(sink__V458->context, !strcmp(SYMBOL(sub__V462),  "KFUNCTION" ));
      Term sub__V463 = LINK(sink__V458->context, SUB(term__V459, 1)); int sub__V463_count = term__V459_count*LINK_COUNT(sub__V463); permitUnusedInt(sub__V463_count);
      CRSX_CHECK_SORT(sink__V458->context, sub__V463, &sort_M_Reified_xSort); /* sub__V463 = &#0 */
      Variable x__V464 = linkVariable(sink__V458->context, BINDER(term__V459,2,0)); if (term__V459_count <= 1) UNBIND(x__V464);
      Term sub__V465 = LINK(sink__V458->context, SUB(term__V459, 2)); int sub__V465_count = term__V459_count*LINK_COUNT(sub__V465); permitUnusedInt(sub__V465_count);
      CRSX_CHECK_SORT(sink__V458->context, sub__V465, &sort_M_Reified_xFormArgument); /* sub__V465 = &#1 */
      
      NamedPropertyLink namedP__V466 = LINK_NamedPropertyLink(sink__V458->context, NAMED_PROPERTIES(term__V459));
      VariablePropertyLink varP__V467 = LINK_VariablePropertyLink(sink__V458->context, VARIABLE_PROPERTIES(term__V459));
      UNLINK(sink__V458->context, term__V459);
      ADD_PROPERTIES(sink__V458, LINK_NamedPropertyLink(sink__V458->context, namedP__V466), LINK_VariablePropertyLink(sink__V458->context, varP__V467));
      { START(sink__V458, _M_HasFunctionalFormBinders_s4);
        COPY(sink__V458, sub__V463);{ if (!IS_BOUND(x__V464)) { REBIND(linkVariable(sink__V458->context, x__V464));
            Variable binds__V468[1] = {x__V464}; BINDS(sink__V458, 1, binds__V468);
            COPY(sink__V458, sub__V465); /* REUSED SUBSTITUTION */  }
          else { Variable b__V469 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V458->context,"b__V469");
            Variable binds__V470[1] = {b__V469}; BINDS(sink__V458, 1, binds__V470);
            {
              Term arg__V471;
              { Sink buf__V472 = ALLOCA_BUFFER(sink__V458->context);
                USE(buf__V472, linkVariable(buf__V472->context, b__V469));
                arg__V471 = BUFFER_TERM(buf__V472); FREE_BUFFER(buf__V472); }
              Variable vars__V473[1] = {x__V464};
              Term args__V474[1] = {arg__V471};
              struct _SubstitutionFrame substitution__V475 = {NULL, 0, 1, vars__V473, args__V474};
              SUBSTITUTE(sink__V458, sub__V465, &substitution__V475); }
                }
           }
        END(sink__V458, _M_HasFunctionalFormBinders_s4); }
      UNLINK_NamedPropertyLink(sink__V458->context, namedP__V466); 
      UNLINK_VariablePropertyLink(sink__V458->context, varP__V467); unlinkVariable(sink__V458->context, x__V464);
      
      return 1;
    break; } case Data_M_KDATA: { /* Function DEFS-HasFunctionalFormBinders-2$HasFunctionalFormBinders$2$KDATA case KDATA */
      ASSERT(sink__V458->context, !strcmp(SYMBOL(term__V459),  "HasFunctionalFormBinders$2" ));
      Term sub__V476 = SUB(term__V459, 0); int sub__V476_count = term__V459_count*LINK_COUNT(sub__V476); permitUnusedInt(sub__V476_count);
      CRSX_CHECK_SORT(sink__V458->context, sub__V476, &sort_M_Reified_xKind); ASSERT(sink__V458->context, !strcmp(SYMBOL(sub__V476),  "KDATA" ));
      Term sub__V477 = LINK(sink__V458->context, SUB(term__V459, 1)); int sub__V477_count = term__V459_count*LINK_COUNT(sub__V477); permitUnusedInt(sub__V477_count);
      CRSX_CHECK_SORT(sink__V458->context, sub__V477, &sort_M_Reified_xSort); /* sub__V477 = &#0 */
      Variable x__V478 = linkVariable(sink__V458->context, BINDER(term__V459,2,0)); if (term__V459_count <= 1) UNBIND(x__V478);
      Term sub__V479 = LINK(sink__V458->context, SUB(term__V459, 2)); int sub__V479_count = term__V459_count*LINK_COUNT(sub__V479); permitUnusedInt(sub__V479_count);
      CRSX_CHECK_SORT(sink__V458->context, sub__V479, &sort_M_Reified_xFormArgument); /* sub__V479 = &#1 */
      
      NamedPropertyLink namedP__V480 = LINK_NamedPropertyLink(sink__V458->context, NAMED_PROPERTIES(term__V459));
      VariablePropertyLink varP__V481 = LINK_VariablePropertyLink(sink__V458->context, VARIABLE_PROPERTIES(term__V459));
      UNLINK(sink__V458->context, term__V459);
      ADD_PROPERTIES(sink__V458, LINK_NamedPropertyLink(sink__V458->context, namedP__V480), LINK_VariablePropertyLink(sink__V458->context, varP__V481));
      { START(sink__V458, _M_HasFunctionalFormBinders_s3);
        COPY(sink__V458, sub__V477);{ if (!IS_BOUND(x__V478)) { REBIND(linkVariable(sink__V458->context, x__V478));
            Variable binds__V482[1] = {x__V478}; BINDS(sink__V458, 1, binds__V482);
            COPY(sink__V458, sub__V479); /* REUSED SUBSTITUTION */  }
          else { Variable b__V483 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V458->context,"b__V483");
            Variable binds__V484[1] = {b__V483}; BINDS(sink__V458, 1, binds__V484);
            {
              Term arg__V485;
              { Sink buf__V486 = ALLOCA_BUFFER(sink__V458->context);
                USE(buf__V486, linkVariable(buf__V486->context, b__V483));
                arg__V485 = BUFFER_TERM(buf__V486); FREE_BUFFER(buf__V486); }
              Variable vars__V487[1] = {x__V478};
              Term args__V488[1] = {arg__V485};
              struct _SubstitutionFrame substitution__V489 = {NULL, 0, 1, vars__V487, args__V488};
              SUBSTITUTE(sink__V458, sub__V479, &substitution__V489); }
                }
           }
        END(sink__V458, _M_HasFunctionalFormBinders_s3); }
      UNLINK_NamedPropertyLink(sink__V458->context, namedP__V480); 
      UNLINK_VariablePropertyLink(sink__V458->context, varP__V481); unlinkVariable(sink__V458->context, x__V478);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION DEnumTag$1. */
int conBindOffs_M_DEnumTag_s1[] = {0 , 0};
char *nameFun_M_DEnumTag_s1(Term term) { return  "DEnumTag$1" ; }
struct _ConstructionDescriptor descriptor_M_DEnumTag_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_DEnumTag_s1), conBindOffs_M_DEnumTag_s1, &nameFun_M_DEnumTag_s1, &step_M_DEnumTag_s1};

int step_M_DEnumTag_s1(Sink sink__V490, Term term__V491)
{
  int term__V491_count = LINK_COUNT(term__V491); permitUnusedInt(term__V491_count);
  do {
    /* Contraction rule DEFS-DEnumTag-1. */
    ASSERT(sink__V490->context, !strcmp(SYMBOL(term__V491),  "DEnumTag$1" ));
    Term sub__V492 = LINK(sink__V490->context, SUB(term__V491, 0)); int sub__V492_count = term__V491_count*LINK_COUNT(sub__V492); permitUnusedInt(sub__V492_count);
    /* sub__V492 = &#2 */
    
    NamedPropertyLink namedP__V493 = LINK_NamedPropertyLink(sink__V490->context, NAMED_PROPERTIES(term__V491));
    VariablePropertyLink varP__V494 = LINK_VariablePropertyLink(sink__V490->context, VARIABLE_PROPERTIES(term__V491));
    UNLINK(sink__V490->context, term__V491);
    { START(sink__V490, _M__sTextCons);
      { START(sink__V490, _M__sTextChars);
        LITERAL(sink__V490,  "Data" ); END(sink__V490, _M__sTextChars); }
      { START(sink__V490, _M__sTextCons);
        { START(sink__V490, _M__sTextEmbed);
          { START(sink__V490, _M_AsText);
            { START(sink__V490, _M_MANGLE);
              COPY(sink__V490, sub__V492);END(sink__V490, _M_MANGLE); }
            END(sink__V490, _M_AsText); }
          END(sink__V490, _M__sTextEmbed); }
        { START(sink__V490, _M__sTextNil);
          END(sink__V490, _M__sTextNil); }
        END(sink__V490, _M__sTextCons); }
      END(sink__V490, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V490->context, namedP__V493); 
    UNLINK_VariablePropertyLink(sink__V490->context, varP__V494);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION EnumFun. */
int conBindOffs_M_EnumFun[] = {0 , 0};
char *nameFun_M_EnumFun(Term term) { return  "EnumFun" ; }
struct _ConstructionDescriptor descriptor_M_EnumFun = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_EnumFun), conBindOffs_M_EnumFun, &nameFun_M_EnumFun, &step_M_EnumFun};

int step_M_EnumFun(Sink sink__V495, Term term__V496)
{
  int term__V496_count = LINK_COUNT(term__V496); permitUnusedInt(term__V496_count);
  do {
    /* Contraction rule DEFS-EnumFun-1. */
    ASSERT(sink__V495->context, !strcmp(SYMBOL(term__V496),  "EnumFun" ));
    Term sub__V497 = LINK(sink__V495->context, SUB(term__V496, 0)); int sub__V497_count = term__V496_count*LINK_COUNT(sub__V497); permitUnusedInt(sub__V497_count);
    /* sub__V497 = &#1 */
    
    NamedPropertyLink namedP__V498 = LINK_NamedPropertyLink(sink__V495->context, NAMED_PROPERTIES(term__V496));
    VariablePropertyLink varP__V499 = LINK_VariablePropertyLink(sink__V495->context, VARIABLE_PROPERTIES(term__V496));
    UNLINK(sink__V495->context, term__V496);
    { START(sink__V495, _M__sTextCons);
      { START(sink__V495, _M__sTextChars);
        LITERAL(sink__V495,  "FunOf" ); END(sink__V495, _M__sTextChars); }
      { START(sink__V495, _M__sTextCons);
        { START(sink__V495, _M__sTextEmbed);
          { START(sink__V495, _M_AsText);
            { START(sink__V495, _M_MANGLE);
              COPY(sink__V495, sub__V497);END(sink__V495, _M_MANGLE); }
            END(sink__V495, _M_AsText); }
          END(sink__V495, _M__sTextEmbed); }
        { START(sink__V495, _M__sTextNil);
          END(sink__V495, _M__sTextNil); }
        END(sink__V495, _M__sTextCons); }
      END(sink__V495, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V495->context, namedP__V498); 
    UNLINK_VariablePropertyLink(sink__V495->context, varP__V499);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse-Variable$4. */
int conBindOffs_M_T_CheckReuse_Variable_s4[] = {0};
char *nameFun_M_T_CheckReuse_Variable_s4(Term term) { return  "T-CheckReuse-Variable$4" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_Variable_s4 = {&sort_M_T_xREUSE_xSORT, 0, 0, sizeof(STRUCT_Con_M_T_CheckReuse_Variable_s4), conBindOffs_M_T_CheckReuse_Variable_s4, &nameFun_M_T_CheckReuse_Variable_s4, &step_M_T_CheckReuse_Variable_s4};

int step_M_T_CheckReuse_Variable_s4(Sink sink__V500, Term term__V501)
{
  int term__V501_count = LINK_COUNT(term__V501); permitUnusedInt(term__V501_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-Variable-5. */
    ASSERT(sink__V500->context, !strcmp(SYMBOL(term__V501),  "T-CheckReuse-Variable$4" ));
    UNLINK(sink__V500->context, term__V501);
    { START(sink__V500, _M_T_xNO_xREUSE);
      END(sink__V500, _M_T_xNO_xREUSE); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse-Variable$5. */
int conBindOffs_M_T_CheckReuse_Variable_s5[] = {0};
char *nameFun_M_T_CheckReuse_Variable_s5(Term term) { return  "T-CheckReuse-Variable$5" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_Variable_s5 = {&sort_M_T_xREUSE_xSORT, 0, 0, sizeof(STRUCT_Con_M_T_CheckReuse_Variable_s5), conBindOffs_M_T_CheckReuse_Variable_s5, &nameFun_M_T_CheckReuse_Variable_s5, &step_M_T_CheckReuse_Variable_s5};

int step_M_T_CheckReuse_Variable_s5(Sink sink__V502, Term term__V503)
{
  int term__V503_count = LINK_COUNT(term__V503); permitUnusedInt(term__V503_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-Variable-1. */
    ASSERT(sink__V502->context, !strcmp(SYMBOL(term__V503),  "T-CheckReuse-Variable$5" ));
    UNLINK(sink__V502->context, term__V503);
    { START(sink__V502, _M_T_xREUSE); END(sink__V502, _M_T_xREUSE); } 
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse-Variable$1. */
int conBindOffs_M_T_CheckReuse_Variable_s1[] = {0};
char *nameFun_M_T_CheckReuse_Variable_s1(Term term) { return  "T-CheckReuse-Variable$1" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_Variable_s1 = {&sort_M_T_xREUSE_xSORT, 0, 0, sizeof(STRUCT_Con_M_T_CheckReuse_Variable_s1), conBindOffs_M_T_CheckReuse_Variable_s1, &nameFun_M_T_CheckReuse_Variable_s1, &step_M_T_CheckReuse_Variable_s1};

int step_M_T_CheckReuse_Variable_s1(Sink sink__V504, Term term__V505)
{
  int term__V505_count = LINK_COUNT(term__V505); permitUnusedInt(term__V505_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-Variable-3. */
    ASSERT(sink__V504->context, !strcmp(SYMBOL(term__V505),  "T-CheckReuse-Variable$1" ));
    UNLINK(sink__V504->context, term__V505);
    { START(sink__V504, _M_T_xNO_xREUSE);
      END(sink__V504, _M_T_xNO_xREUSE); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse-Variable$2. */
int conBindOffs_M_T_CheckReuse_Variable_s2[] = {0};
char *nameFun_M_T_CheckReuse_Variable_s2(Term term) { return  "T-CheckReuse-Variable$2" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_Variable_s2 = {&sort_M_T_xREUSE_xSORT, 0, 0, sizeof(STRUCT_Con_M_T_CheckReuse_Variable_s2), conBindOffs_M_T_CheckReuse_Variable_s2, &nameFun_M_T_CheckReuse_Variable_s2, &step_M_T_CheckReuse_Variable_s2};

int step_M_T_CheckReuse_Variable_s2(Sink sink__V506, Term term__V507)
{
  int term__V507_count = LINK_COUNT(term__V507); permitUnusedInt(term__V507_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-Variable-2. */
    ASSERT(sink__V506->context, !strcmp(SYMBOL(term__V507),  "T-CheckReuse-Variable$2" ));
    UNLINK(sink__V506->context, term__V507);
    { START(sink__V506, _M_T_xREUSE); END(sink__V506, _M_T_xREUSE); } 
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse-Variable$3. */
int conBindOffs_M_T_CheckReuse_Variable_s3[] = {0};
char *nameFun_M_T_CheckReuse_Variable_s3(Term term) { return  "T-CheckReuse-Variable$3" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_Variable_s3 = {&sort_M_T_xREUSE_xSORT, 0, 0, sizeof(STRUCT_Con_M_T_CheckReuse_Variable_s3), conBindOffs_M_T_CheckReuse_Variable_s3, &nameFun_M_T_CheckReuse_Variable_s3, &step_M_T_CheckReuse_Variable_s3};

int step_M_T_CheckReuse_Variable_s3(Sink sink__V508, Term term__V509)
{
  int term__V509_count = LINK_COUNT(term__V509); permitUnusedInt(term__V509_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-Variable-4. */
    ASSERT(sink__V508->context, !strcmp(SYMBOL(term__V509),  "T-CheckReuse-Variable$3" ));
    UNLINK(sink__V508->context, term__V509);
    { START(sink__V508, _M_T_xNO_xREUSE);
      END(sink__V508, _M_T_xNO_xREUSE); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Sort-name. */
int conBindOffs_M_Sort__name[] = {0 , 0};
char *nameFun_M_Sort__name(Term term) { return  "Sort-name" ; }
struct _ConstructionDescriptor descriptor_M_Sort__name = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Sort__name), conBindOffs_M_Sort__name, &nameFun_M_Sort__name, &step_M_Sort__name};

int step_M_Sort__name(Sink sink__V510, Term term__V511)
{
  int term__V511_count = LINK_COUNT(term__V511); permitUnusedInt(term__V511_count);
  Term sub__V512 = FORCE(sink__V510->context, SUB(term__V511, 0));
  EnumOf_M_Reified_xSort choice__V513 = (IS_VARIABLE_USE(sub__V512) ? VarOf_M_Reified_xSort : (EnumOf_M_Reified_xSort) TAG(sub__V512));
  switch (choice__V513)
  {
    case Data_M_SORT: { /* Function DEFS-Sort-name-1$Sort-name$SORT case SORT */
      ASSERT(sink__V510->context, !strcmp(SYMBOL(term__V511),  "Sort-name" ));
      Term sub__V514 = SUB(term__V511, 0); int sub__V514_count = term__V511_count*LINK_COUNT(sub__V514); permitUnusedInt(sub__V514_count);
      CRSX_CHECK_SORT(sink__V510->context, sub__V514, &sort_M_Reified_xSort); ASSERT(sink__V510->context, !strcmp(SYMBOL(sub__V514),  "SORT" ));
      Term sub__V515 = LINK(sink__V510->context, SUB(sub__V514, 0)); int sub__V515_count = sub__V514_count*LINK_COUNT(sub__V515); permitUnusedInt(sub__V515_count);
      /* sub__V515 = &#0-0 */
      Term sub__V516 = LINK(sink__V510->context, SUB(sub__V514, 1)); int sub__V516_count = sub__V514_count*LINK_COUNT(sub__V516); permitUnusedInt(sub__V516_count);
      /* sub__V516 = &#0-1 */
      
      NamedPropertyLink namedP__V517 = LINK_NamedPropertyLink(sink__V510->context, NAMED_PROPERTIES(term__V511));
      VariablePropertyLink varP__V518 = LINK_VariablePropertyLink(sink__V510->context, VARIABLE_PROPERTIES(term__V511));
      UNLINK(sink__V510->context, term__V511);
      ADD_PROPERTIES(sink__V510, LINK_NamedPropertyLink(sink__V510->context, namedP__V517), LINK_VariablePropertyLink(sink__V510->context, varP__V518));
      { START(sink__V510, _M_Sort__name_s1);
        COPY(sink__V510, sub__V515);COPY(sink__V510, sub__V516);END(sink__V510, _M_Sort__name_s1); }
      UNLINK_NamedPropertyLink(sink__V510->context, namedP__V517); 
      UNLINK_VariablePropertyLink(sink__V510->context, varP__V518);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION MapText$1. */
int conBindOffs_M_MapText_s1[] = {0 , 0 , 1};
char *nameFun_M_MapText_s1(Term term) { return  "MapText$1" ; }
struct _ConstructionDescriptor descriptor_M_MapText_s1 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_MapText_s1), conBindOffs_M_MapText_s1, &nameFun_M_MapText_s1, &step_M_MapText_s1};

int step_M_MapText_s1(Sink sink__V519, Term term__V520)
{
  int term__V520_count = LINK_COUNT(term__V520); permitUnusedInt(term__V520_count);
  Term sub__V521 = FORCE(sink__V519->context, SUB(term__V520, 0));
  EnumOf_M__sList choice__V522 = (IS_VARIABLE_USE(sub__V521) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V521));
  switch (choice__V522)
  {
    case Data_M__sCons: { /* Function DEFS-MapText-1$MapText$1$$Cons case $Cons */
      ASSERT(sink__V519->context, !strcmp(SYMBOL(term__V520),  "MapText$1" ));
      Term sub__V523 = SUB(term__V520, 0); int sub__V523_count = term__V520_count*LINK_COUNT(sub__V523); permitUnusedInt(sub__V523_count);
      ASSERT(sink__V519->context, !strcmp(SYMBOL(sub__V523),  "$Cons" ));
      Term sub__V524 = LINK(sink__V519->context, SUB(sub__V523, 0)); int sub__V524_count = sub__V523_count*LINK_COUNT(sub__V524); permitUnusedInt(sub__V524_count);
      /* sub__V524 = &#0-0 */
      Term sub__V525 = LINK(sink__V519->context, SUB(sub__V523, 1)); int sub__V525_count = sub__V523_count*LINK_COUNT(sub__V525); permitUnusedInt(sub__V525_count);
      /* sub__V525 = &#0-1 */
      Variable x__V526 = linkVariable(sink__V519->context, BINDER(term__V520,1,0)); if (term__V520_count <= 1) UNBIND(x__V526);
      Term sub__V527 = LINK(sink__V519->context, SUB(term__V520, 1)); int sub__V527_count = term__V520_count*LINK_COUNT(sub__V527); permitUnusedInt(sub__V527_count);
      CRSX_CHECK_SORT(sink__V519->context, sub__V527, &sort_M_Reified_xVariable); /* sub__V527 = &#2 */
      
      NamedPropertyLink namedP__V528 = LINK_NamedPropertyLink(sink__V519->context, NAMED_PROPERTIES(term__V520));
      VariablePropertyLink varP__V529 = LINK_VariablePropertyLink(sink__V519->context, VARIABLE_PROPERTIES(term__V520));
      UNLINK(sink__V519->context, term__V520);
      ADD_PROPERTIES(sink__V519, LINK_NamedPropertyLink(sink__V519->context, namedP__V528), LINK_VariablePropertyLink(sink__V519->context, varP__V529));
      { START(sink__V519, _M_MapText_s2);
        COPY(sink__V519, sub__V524);COPY(sink__V519, sub__V525);{ if (!IS_BOUND(x__V526)) { REBIND(linkVariable(sink__V519->context, x__V526));
            Variable binds__V530[1] = {x__V526}; BINDS(sink__V519, 1, binds__V530);
            COPY(sink__V519, sub__V527); /* REUSED SUBSTITUTION */  }
          else { Variable b__V531 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V519->context,"b__V531");
            Variable binds__V532[1] = {b__V531}; BINDS(sink__V519, 1, binds__V532);
            {
              Term arg__V533;
              { Sink buf__V534 = ALLOCA_BUFFER(sink__V519->context);
                USE(buf__V534, linkVariable(buf__V534->context, b__V531));
                arg__V533 = BUFFER_TERM(buf__V534); FREE_BUFFER(buf__V534); }
              Variable vars__V535[1] = {x__V526};
              Term args__V536[1] = {arg__V533};
              struct _SubstitutionFrame substitution__V537 = {NULL, 0, 1, vars__V535, args__V536};
              SUBSTITUTE(sink__V519, sub__V527, &substitution__V537); }
                }
           }
        END(sink__V519, _M_MapText_s2); }
      UNLINK_NamedPropertyLink(sink__V519->context, namedP__V528); 
      UNLINK_VariablePropertyLink(sink__V519->context, varP__V529); unlinkVariable(sink__V519->context, x__V526);
      
      return 1;
    break; } case Data_M__sNil: { /* Function DEFS-MapText-2$MapText$1$$Nil case $Nil */
      ASSERT(sink__V519->context, !strcmp(SYMBOL(term__V520),  "MapText$1" ));
      Term sub__V538 = SUB(term__V520, 0); int sub__V538_count = term__V520_count*LINK_COUNT(sub__V538); permitUnusedInt(sub__V538_count);
      ASSERT(sink__V519->context, !strcmp(SYMBOL(sub__V538),  "$Nil" ));
      Variable x__V539 = linkVariable(sink__V519->context, BINDER(term__V520,1,0)); if (term__V520_count <= 1) UNBIND(x__V539);
      Term sub__V540 = LINK(sink__V519->context, SUB(term__V520, 1)); int sub__V540_count = term__V520_count*LINK_COUNT(sub__V540); permitUnusedInt(sub__V540_count);
      CRSX_CHECK_SORT(sink__V519->context, sub__V540, &sort_M_Reified_xVariable); /* sub__V540 = &#0 */
      
      NamedPropertyLink namedP__V541 = LINK_NamedPropertyLink(sink__V519->context, NAMED_PROPERTIES(term__V520));
      VariablePropertyLink varP__V542 = LINK_VariablePropertyLink(sink__V519->context, VARIABLE_PROPERTIES(term__V520));
      UNLINK(sink__V519->context, term__V520);
      ADD_PROPERTIES(sink__V519, LINK_NamedPropertyLink(sink__V519->context, namedP__V541), LINK_VariablePropertyLink(sink__V519->context, varP__V542));
      { START(sink__V519, _M_MapText_s3);
        { if (!IS_BOUND(x__V539)) { REBIND(linkVariable(sink__V519->context, x__V539));
            Variable binds__V543[1] = {x__V539}; BINDS(sink__V519, 1, binds__V543);
            COPY(sink__V519, sub__V540); /* REUSED SUBSTITUTION */  }
          else { Variable b__V544 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V519->context,"b__V544");
            Variable binds__V545[1] = {b__V544}; BINDS(sink__V519, 1, binds__V545);
            {
              Term arg__V546;
              { Sink buf__V547 = ALLOCA_BUFFER(sink__V519->context);
                USE(buf__V547, linkVariable(buf__V547->context, b__V544));
                arg__V546 = BUFFER_TERM(buf__V547); FREE_BUFFER(buf__V547); }
              Variable vars__V548[1] = {x__V539};
              Term args__V549[1] = {arg__V546};
              struct _SubstitutionFrame substitution__V550 = {NULL, 0, 1, vars__V548, args__V549};
              SUBSTITUTE(sink__V519, sub__V540, &substitution__V550); }
                }
           }
        END(sink__V519, _M_MapText_s3); }
      UNLINK_NamedPropertyLink(sink__V519->context, namedP__V541); 
      UNLINK_VariablePropertyLink(sink__V519->context, varP__V542); unlinkVariable(sink__V519->context, x__V539);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION MapText$2. */
int conBindOffs_M_MapText_s2[] = {0 , 0 , 0 , 1};
char *nameFun_M_MapText_s2(Term term) { return  "MapText$2" ; }
struct _ConstructionDescriptor descriptor_M_MapText_s2 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_MapText_s2), conBindOffs_M_MapText_s2, &nameFun_M_MapText_s2, &step_M_MapText_s2};

int step_M_MapText_s2(Sink sink__V551, Term term__V552)
{
  int term__V552_count = LINK_COUNT(term__V552); permitUnusedInt(term__V552_count);
  do {
    /* Contraction rule DEFS-MapText-1. */
    ASSERT(sink__V551->context, !strcmp(SYMBOL(term__V552),  "MapText$2" ));
    Term sub__V553 = LINK(sink__V551->context, SUB(term__V552, 0)); int sub__V553_count = term__V552_count*LINK_COUNT(sub__V553); permitUnusedInt(sub__V553_count);
    /* sub__V553 = &#21 */
    Term sub__V554 = LINK(sink__V551->context, SUB(term__V552, 1)); int sub__V554_count = term__V552_count*LINK_COUNT(sub__V554); permitUnusedInt(sub__V554_count);
    /* sub__V554 = &#22 */
    Variable x__V555 = linkVariable(sink__V551->context, BINDER(term__V552,2,0)); if (term__V552_count <= 1) UNBIND(x__V555);
    Term sub__V556 = LINK(sink__V551->context, SUB(term__V552, 2)); int sub__V556_count = term__V552_count*LINK_COUNT(sub__V556); permitUnusedInt(sub__V556_count);
    CRSX_CHECK_SORT(sink__V551->context, sub__V556, &sort_M_Reified_xVariable); UNLINK_SUB(sink__V551->context, term__V552,  2); NORMALIZE(sink__V551->context, sub__V556); SUB(term__V552,  2) = LINK(sink__V551->context, sub__V556);
    /* sub__V556 = &#1 */
    
    NamedPropertyLink namedP__V557 = LINK_NamedPropertyLink(sink__V551->context, NAMED_PROPERTIES(term__V552));
    VariablePropertyLink varP__V558 = LINK_VariablePropertyLink(sink__V551->context, VARIABLE_PROPERTIES(term__V552));
    UNLINK(sink__V551->context, term__V552);
    { START(sink__V551, _M__sTextCons);
      { START(sink__V551, _M__sTextEmbed);
        { START(sink__V551, _M_AsText);
          {
            Term arg__V559;
            { Sink buf__V560 = ALLOCA_BUFFER(sink__V551->context);
              COPY(buf__V560, sub__V553);arg__V559 = BUFFER_TERM(buf__V560); FREE_BUFFER(buf__V560); }
            Variable vars__V561[1] = {x__V555};
            Term args__V562[1] = {arg__V559};
            struct _SubstitutionFrame substitution__V563 = {NULL, 0, 1, vars__V561, args__V562};
            SUBSTITUTE(sink__V551, LINK(sink__V551->context,sub__V556), &substitution__V563); }
          END(sink__V551, _M_AsText); }
        END(sink__V551, _M__sTextEmbed); }
      { START(sink__V551, _M__sTextCons);
        { START(sink__V551, _M__sTextEmbed);
          { START(sink__V551, _M_AsText);
            { START(sink__V551, _M_MapText_s1);
              COPY(sink__V551, sub__V554);{ Variable x__V564 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V551->context,"x__V564");
                Variable binds__V565[1] = {x__V564}; BINDS(sink__V551, 1, binds__V565);
                {
                  Term arg__V566;
                  { Sink buf__V567 = ALLOCA_BUFFER(sink__V551->context);
                    USE(buf__V567, linkVariable(buf__V567->context, x__V564));
                    arg__V566 = BUFFER_TERM(buf__V567); FREE_BUFFER(buf__V567); }
                  Variable vars__V568[1] = {x__V555};
                  Term args__V569[1] = {arg__V566};
                  struct _SubstitutionFrame substitution__V570 = {NULL, 0, 1, vars__V568, args__V569};
                  SUBSTITUTE(sink__V551, sub__V556, &substitution__V570); }
                 }
              END(sink__V551, _M_MapText_s1); }
            END(sink__V551, _M_AsText); }
          END(sink__V551, _M__sTextEmbed); }
        { START(sink__V551, _M__sTextNil);
          END(sink__V551, _M__sTextNil); }
        END(sink__V551, _M__sTextCons); }
      END(sink__V551, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V551->context, namedP__V557); 
    UNLINK_VariablePropertyLink(sink__V551->context, varP__V558); unlinkVariable(sink__V551->context, x__V555);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MapText$3. */
int conBindOffs_M_MapText_s3[] = {0 , 1};
char *nameFun_M_MapText_s3(Term term) { return  "MapText$3" ; }
struct _ConstructionDescriptor descriptor_M_MapText_s3 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_MapText_s3), conBindOffs_M_MapText_s3, &nameFun_M_MapText_s3, &step_M_MapText_s3};

int step_M_MapText_s3(Sink sink__V571, Term term__V572)
{
  int term__V572_count = LINK_COUNT(term__V572); permitUnusedInt(term__V572_count);
  do {
    /* Contraction rule DEFS-MapText-2. */
    ASSERT(sink__V571->context, !strcmp(SYMBOL(term__V572),  "MapText$3" ));
    Variable x__V573 = linkVariable(sink__V571->context, BINDER(term__V572,0,0)); if (term__V572_count <= 1) UNBIND(x__V573);
    Term sub__V574 = SUB(term__V572, 0); int sub__V574_count = term__V572_count*LINK_COUNT(sub__V574); permitUnusedInt(sub__V574_count);
    CRSX_CHECK_SORT(sink__V571->context, sub__V574, &sort_M_Reified_xVariable); /* sub__V574 = &#1 */
    
    NamedPropertyLink namedP__V575 = LINK_NamedPropertyLink(sink__V571->context, NAMED_PROPERTIES(term__V572));
    VariablePropertyLink varP__V576 = LINK_VariablePropertyLink(sink__V571->context, VARIABLE_PROPERTIES(term__V572));
    UNLINK(sink__V571->context, term__V572);
    { START(sink__V571, _M__sTextNil); END(sink__V571, _M__sTextNil); }
    UNLINK_NamedPropertyLink(sink__V571->context, namedP__V575); 
    UNLINK_VariablePropertyLink(sink__V571->context, varP__V576); unlinkVariable(sink__V571->context, x__V573);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION EventConstructor. */
int conBindOffs_M_EventConstructor[] = {0 , 0};
char *nameFun_M_EventConstructor(Term term) { return  "EventConstructor" ; }
struct _ConstructionDescriptor descriptor_M_EventConstructor = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_EventConstructor), conBindOffs_M_EventConstructor, &nameFun_M_EventConstructor, &step_M_EventConstructor};

int step_M_EventConstructor(Sink sink__V577, Term term__V578)
{
  int term__V578_count = LINK_COUNT(term__V578); permitUnusedInt(term__V578_count);
  do {
    /* Contraction rule DEFS-EventConstructor-1. */
    ASSERT(sink__V577->context, !strcmp(SYMBOL(term__V578),  "EventConstructor" ));
    Term sub__V579 = LINK(sink__V577->context, SUB(term__V578, 0)); int sub__V579_count = term__V578_count*LINK_COUNT(sub__V579); permitUnusedInt(sub__V579_count);
    /* sub__V579 = &#1 */
    
    NamedPropertyLink namedP__V580 = LINK_NamedPropertyLink(sink__V577->context, NAMED_PROPERTIES(term__V578));
    VariablePropertyLink varP__V581 = LINK_VariablePropertyLink(sink__V577->context, VARIABLE_PROPERTIES(term__V578));
    UNLINK(sink__V577->context, term__V578);
    { START(sink__V577, _M_MANGLE);
      COPY(sink__V577, sub__V579);END(sink__V577, _M_MANGLE); }
    UNLINK_NamedPropertyLink(sink__V577->context, namedP__V580); 
    UNLINK_VariablePropertyLink(sink__V577->context, varP__V581);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MetaVar. */
int conBindOffs_M_MetaVar[] = {0 , 0};
char *nameFun_M_MetaVar(Term term) { return  "MetaVar" ; }
struct _ConstructionDescriptor descriptor_M_MetaVar = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_MetaVar), conBindOffs_M_MetaVar, &nameFun_M_MetaVar, &step_M_MetaVar};

int step_M_MetaVar(Sink sink__V582, Term term__V583)
{
  int term__V583_count = LINK_COUNT(term__V583); permitUnusedInt(term__V583_count);
  do {
    /* Contraction rule DEFS-MetaVar-1. */
    ASSERT(sink__V582->context, !strcmp(SYMBOL(term__V583),  "MetaVar" ));
    Term sub__V584 = LINK(sink__V582->context, SUB(term__V583, 0)); int sub__V584_count = term__V583_count*LINK_COUNT(sub__V584); permitUnusedInt(sub__V584_count);
    UNLINK_SUB(sink__V582->context, term__V583,  0); NORMALIZE(sink__V582->context, sub__V584); SUB(term__V583,  0) = LINK(sink__V582->context, sub__V584);
    /* sub__V584 = &#1 */
    
    NamedPropertyLink namedP__V585 = LINK_NamedPropertyLink(sink__V582->context, NAMED_PROPERTIES(term__V583));
    VariablePropertyLink varP__V586 = LINK_VariablePropertyLink(sink__V582->context, VARIABLE_PROPERTIES(term__V583));
    UNLINK(sink__V582->context, term__V583);
    ADD_PROPERTIES(sink__V582, LINK_NamedPropertyLink(sink__V582->context, namedP__V585), LINK_VariablePropertyLink(sink__V582->context, varP__V586));
    { START(sink__V582, _M_MetaVar2);
      { Term term__V587;
        { Term key__V588;
          { char *str__V589;
            { char *sub__V590[2]; size_t sublength__V591[2]; size_t length__V592 = 0;
              length__V592 += (sublength__V591[0] = strlen(sub__V590[0] =  "MetaVar$" ));
              FORCE(sink__V582->context, sub__V584); LINK(sink__V582->context, sub__V584);
              length__V592 += (sublength__V591[1] = strlen(sub__V590[1] = SYMBOL(sub__V584)));
              UNLINK(sink__V582->context, sub__V584);  { char *str__V593 = ALLOCATE(sink__V582->context, length__V592+1), *p__V594 = str__V593;
                int i; for (i = 0; i < 2; ++i) { memcpy(p__V594, sub__V590[i], sublength__V591[i]); p__V594 += sublength__V591[i]; }
                *p__V594 = '\0';
                ASSERT(sink__V582->context, strlen(str__V593) == length__V592);
                str__V589 = str__V593; }
               }
            key__V588 = makeStringLiteral(sink__V582->context, str__V589); }
          Term pp__V595 = DPROPERTY(sink__V582->context, namedP__V585, varP__V586, key__V588);UNLINK(sink__V582->context, key__V588); 
          if (pp__V595) term__V587 = LINK(sink__V582->context, pp__V595);
          else {{ Sink buf__V596 = ALLOCA_BUFFER(sink__V582->context);
              { START(buf__V596, _M_STRING_xVALUE);
                { char *str__V597;
                  { char *sub__V598[2]; size_t sublength__V599[2]; size_t length__V600 = 0;
                    length__V600 += (sublength__V599[0] = strlen(sub__V598[0] =  "m" ));
                    FORCE(buf__V596->context, sub__V584); LINK(buf__V596->context, sub__V584);
                    { char *s__V601 = makeMangled(buf__V596->context, SYMBOL(sub__V584));
                      length__V600 += (sublength__V599[1] = strlen(sub__V598[1] = s__V601));
                       UNLINK(buf__V596->context, sub__V584);  UNLINK(buf__V596->context, sub__V584); { char *str__V602 = ALLOCATE(buf__V596->context, length__V600+1), *p__V603 = str__V602;
                        int i; for (i = 0; i < 2; ++i) { memcpy(p__V603, sub__V598[i], sublength__V599[i]); p__V603 += sublength__V599[i]; }
                        *p__V603 = '\0';
                        ASSERT(buf__V596->context, strlen(str__V602) == length__V600);
                        str__V597 = str__V602; }
                      }
                     }
                  LITERALU(buf__V596, str__V597); }
                END(buf__V596, _M_STRING_xVALUE); }
              term__V587 = BUFFER_TERM(buf__V596); FREE_BUFFER(buf__V596); }
            }
        }
        COPY(sink__V582, term__V587); /*CONSERVATIVE*/ }
      END(sink__V582, _M_MetaVar2); }
    UNLINK_NamedPropertyLink(sink__V582->context, namedP__V585); 
    UNLINK_VariablePropertyLink(sink__V582->context, varP__V586);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION HasFunctionalBinders$4. */
int conBindOffs_M_HasFunctionalBinders_s4[] = {0 , 0 , 0 , 0 , 0 , 1};
char *nameFun_M_HasFunctionalBinders_s4(Term term) { return  "HasFunctionalBinders$4" ; }
struct _ConstructionDescriptor descriptor_M_HasFunctionalBinders_s4 = {NULL, 0, 5, sizeof(STRUCT_Con_M_HasFunctionalBinders_s4), conBindOffs_M_HasFunctionalBinders_s4, &nameFun_M_HasFunctionalBinders_s4, &step_M_HasFunctionalBinders_s4};

int step_M_HasFunctionalBinders_s4(Sink sink__V604, Term term__V605)
{
  int term__V605_count = LINK_COUNT(term__V605); permitUnusedInt(term__V605_count);
  do {
    /* Contraction rule DEFS-HasFunctionalBinders-2. */
    ASSERT(sink__V604->context, !strcmp(SYMBOL(term__V605),  "HasFunctionalBinders$4" ));
    Term sub__V606 = SUB(term__V605, 0); int sub__V606_count = term__V605_count*LINK_COUNT(sub__V606); permitUnusedInt(sub__V606_count);
    CRSX_CHECK_SORT(sink__V604->context, sub__V606, &sort_M_Reified_xPromiscuity); /* sub__V606 = &#11 */
    Term sub__V607 = SUB(term__V605, 1); int sub__V607_count = term__V605_count*LINK_COUNT(sub__V607); permitUnusedInt(sub__V607_count);
    CRSX_CHECK_SORT(sink__V604->context, sub__V607, &sort_M_Reified_xDepth); /* sub__V607 = &#13 */
    Term sub__V608 = SUB(term__V605, 2); int sub__V608_count = term__V605_count*LINK_COUNT(sub__V608); permitUnusedInt(sub__V608_count);
    CRSX_CHECK_SORT(sink__V604->context, sub__V608, &sort_M_Reified_xSort); /* sub__V608 = &#14 */
    Term sub__V609 = SUB(term__V605, 3); int sub__V609_count = term__V605_count*LINK_COUNT(sub__V609); permitUnusedInt(sub__V609_count);
    /* sub__V609 = &#15 */
    Variable x__V610 = linkVariable(sink__V604->context, BINDER(term__V605,4,0)); if (term__V605_count <= 1) UNBIND(x__V610);
    Term sub__V611 = LINK(sink__V604->context, SUB(term__V605, 4)); int sub__V611_count = term__V605_count*LINK_COUNT(sub__V611); permitUnusedInt(sub__V611_count);
    CRSX_CHECK_SORT(sink__V604->context, sub__V611, &sort_M_Reified_xBinder); /* sub__V611 = &#16 */
    Variable y__V73 = x__V610; permitUnusedVariable(y__V73);
    UNLINK(sink__V604->context, term__V605);
    { START(sink__V604, _M_HasFunctionalBinders);
      COPY(sink__V604, sub__V611); /* REUSED SUBSTITUTION */ END(sink__V604, _M_HasFunctionalBinders); }
     unlinkVariable(sink__V604->context, x__V610);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION HasFunctionalBinders$5. */
int conBindOffs_M_HasFunctionalBinders_s5[] = {0 , 0 , 0 , 0 , 0 , 1};
char *nameFun_M_HasFunctionalBinders_s5(Term term) { return  "HasFunctionalBinders$5" ; }
struct _ConstructionDescriptor descriptor_M_HasFunctionalBinders_s5 = {NULL, 0, 5, sizeof(STRUCT_Con_M_HasFunctionalBinders_s5), conBindOffs_M_HasFunctionalBinders_s5, &nameFun_M_HasFunctionalBinders_s5, &step_M_HasFunctionalBinders_s5};

int step_M_HasFunctionalBinders_s5(Sink sink__V612, Term term__V613)
{
  int term__V613_count = LINK_COUNT(term__V613); permitUnusedInt(term__V613_count);
  do {
    /* Contraction rule DEFS-HasFunctionalBinders-1. */
    ASSERT(sink__V612->context, !strcmp(SYMBOL(term__V613),  "HasFunctionalBinders$5" ));
    Term sub__V614 = SUB(term__V613, 0); int sub__V614_count = term__V613_count*LINK_COUNT(sub__V614); permitUnusedInt(sub__V614_count);
    CRSX_CHECK_SORT(sink__V612->context, sub__V614, &sort_M_Reified_xPromiscuity); /* sub__V614 = &#11 */
    Term sub__V615 = SUB(term__V613, 1); int sub__V615_count = term__V613_count*LINK_COUNT(sub__V615); permitUnusedInt(sub__V615_count);
    CRSX_CHECK_SORT(sink__V612->context, sub__V615, &sort_M_Reified_xDepth); /* sub__V615 = &#13 */
    Term sub__V616 = SUB(term__V613, 2); int sub__V616_count = term__V613_count*LINK_COUNT(sub__V616); permitUnusedInt(sub__V616_count);
    CRSX_CHECK_SORT(sink__V612->context, sub__V616, &sort_M_Reified_xSort); /* sub__V616 = &#14 */
    Term sub__V617 = SUB(term__V613, 3); int sub__V617_count = term__V613_count*LINK_COUNT(sub__V617); permitUnusedInt(sub__V617_count);
    /* sub__V617 = &#15 */
    Variable x__V618 = linkVariable(sink__V612->context, BINDER(term__V613,4,0)); if (term__V613_count <= 1) UNBIND(x__V618);
    Term sub__V619 = SUB(term__V613, 4); int sub__V619_count = term__V613_count*LINK_COUNT(sub__V619); permitUnusedInt(sub__V619_count);
    CRSX_CHECK_SORT(sink__V612->context, sub__V619, &sort_M_Reified_xBinder); /* sub__V619 = &#16 */
    UNLINK(sink__V612->context, term__V613);
    { START(sink__V612, _M__sTrue); END(sink__V612, _M__sTrue); }  unlinkVariable(sink__V612->context, x__V618);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION HasFunctionalBinders$3. */
int conBindOffs_M_HasFunctionalBinders_s3[] = {0 , 0 , 0 , 0 , 0 , 0 , 1};
char *nameFun_M_HasFunctionalBinders_s3(Term term) { return  "HasFunctionalBinders$3" ; }
struct _ConstructionDescriptor descriptor_M_HasFunctionalBinders_s3 = {NULL, 0, 6, sizeof(STRUCT_Con_M_HasFunctionalBinders_s3), conBindOffs_M_HasFunctionalBinders_s3, &nameFun_M_HasFunctionalBinders_s3, &step_M_HasFunctionalBinders_s3};

int step_M_HasFunctionalBinders_s3(Sink sink__V620, Term term__V621)
{
  int term__V621_count = LINK_COUNT(term__V621); permitUnusedInt(term__V621_count);
  Term sub__V622 = FORCE(sink__V620->context, SUB(term__V621, 0));
  EnumOf_M_Reified_xKind choice__V623 = (IS_VARIABLE_USE(sub__V622) ? VarOf_M_Reified_xKind : (EnumOf_M_Reified_xKind) TAG(sub__V622));
  switch (choice__V623)
  {
    case Data_M_KFUNCTION: { /* Function DEFS-HasFunctionalBinders-1$HasFunctionalBinders$3$KFUNCTION case KFUNCTION */
      ASSERT(sink__V620->context, !strcmp(SYMBOL(term__V621),  "HasFunctionalBinders$3" ));
      Term sub__V624 = SUB(term__V621, 0); int sub__V624_count = term__V621_count*LINK_COUNT(sub__V624); permitUnusedInt(sub__V624_count);
      CRSX_CHECK_SORT(sink__V620->context, sub__V624, &sort_M_Reified_xKind); ASSERT(sink__V620->context, !strcmp(SYMBOL(sub__V624),  "KFUNCTION" ));
      Term sub__V625 = LINK(sink__V620->context, SUB(term__V621, 1)); int sub__V625_count = term__V621_count*LINK_COUNT(sub__V625); permitUnusedInt(sub__V625_count);
      CRSX_CHECK_SORT(sink__V620->context, sub__V625, &sort_M_Reified_xPromiscuity); /* sub__V625 = &#0 */
      Term sub__V626 = LINK(sink__V620->context, SUB(term__V621, 2)); int sub__V626_count = term__V621_count*LINK_COUNT(sub__V626); permitUnusedInt(sub__V626_count);
      CRSX_CHECK_SORT(sink__V620->context, sub__V626, &sort_M_Reified_xDepth); /* sub__V626 = &#1 */
      Term sub__V627 = LINK(sink__V620->context, SUB(term__V621, 3)); int sub__V627_count = term__V621_count*LINK_COUNT(sub__V627); permitUnusedInt(sub__V627_count);
      CRSX_CHECK_SORT(sink__V620->context, sub__V627, &sort_M_Reified_xSort); /* sub__V627 = &#2 */
      Term sub__V628 = LINK(sink__V620->context, SUB(term__V621, 4)); int sub__V628_count = term__V621_count*LINK_COUNT(sub__V628); permitUnusedInt(sub__V628_count);
      /* sub__V628 = &#3 */
      Variable x__V629 = linkVariable(sink__V620->context, BINDER(term__V621,5,0)); if (term__V621_count <= 1) UNBIND(x__V629);
      Term sub__V630 = LINK(sink__V620->context, SUB(term__V621, 5)); int sub__V630_count = term__V621_count*LINK_COUNT(sub__V630); permitUnusedInt(sub__V630_count);
      CRSX_CHECK_SORT(sink__V620->context, sub__V630, &sort_M_Reified_xBinder); /* sub__V630 = &#4 */
      
      NamedPropertyLink namedP__V631 = LINK_NamedPropertyLink(sink__V620->context, NAMED_PROPERTIES(term__V621));
      VariablePropertyLink varP__V632 = LINK_VariablePropertyLink(sink__V620->context, VARIABLE_PROPERTIES(term__V621));
      UNLINK(sink__V620->context, term__V621);
      ADD_PROPERTIES(sink__V620, LINK_NamedPropertyLink(sink__V620->context, namedP__V631), LINK_VariablePropertyLink(sink__V620->context, varP__V632));
      { START(sink__V620, _M_HasFunctionalBinders_s5);
        COPY(sink__V620, sub__V625);COPY(sink__V620, sub__V626);COPY(sink__V620, sub__V627);COPY(sink__V620, sub__V628);{ if (!IS_BOUND(x__V629)) { REBIND(linkVariable(sink__V620->context, x__V629));
            Variable binds__V633[1] = {x__V629}; BINDS(sink__V620, 1, binds__V633);
            COPY(sink__V620, sub__V630); /* REUSED SUBSTITUTION */  }
          else { Variable b__V634 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V620->context,"b__V634");
            Variable binds__V635[1] = {b__V634}; BINDS(sink__V620, 1, binds__V635);
            {
              Term arg__V636;
              { Sink buf__V637 = ALLOCA_BUFFER(sink__V620->context);
                USE(buf__V637, linkVariable(buf__V637->context, b__V634));
                arg__V636 = BUFFER_TERM(buf__V637); FREE_BUFFER(buf__V637); }
              Variable vars__V638[1] = {x__V629};
              Term args__V639[1] = {arg__V636};
              struct _SubstitutionFrame substitution__V640 = {NULL, 0, 1, vars__V638, args__V639};
              SUBSTITUTE(sink__V620, sub__V630, &substitution__V640); }
                }
           }
        END(sink__V620, _M_HasFunctionalBinders_s5); }
      UNLINK_NamedPropertyLink(sink__V620->context, namedP__V631); 
      UNLINK_VariablePropertyLink(sink__V620->context, varP__V632); unlinkVariable(sink__V620->context, x__V629);
      
      return 1;
    break; } case Data_M_KDATA: { /* Function DEFS-HasFunctionalBinders-2$HasFunctionalBinders$3$KDATA case KDATA */
      ASSERT(sink__V620->context, !strcmp(SYMBOL(term__V621),  "HasFunctionalBinders$3" ));
      Term sub__V641 = SUB(term__V621, 0); int sub__V641_count = term__V621_count*LINK_COUNT(sub__V641); permitUnusedInt(sub__V641_count);
      CRSX_CHECK_SORT(sink__V620->context, sub__V641, &sort_M_Reified_xKind); ASSERT(sink__V620->context, !strcmp(SYMBOL(sub__V641),  "KDATA" ));
      Term sub__V642 = LINK(sink__V620->context, SUB(term__V621, 1)); int sub__V642_count = term__V621_count*LINK_COUNT(sub__V642); permitUnusedInt(sub__V642_count);
      CRSX_CHECK_SORT(sink__V620->context, sub__V642, &sort_M_Reified_xPromiscuity); /* sub__V642 = &#0 */
      Term sub__V643 = LINK(sink__V620->context, SUB(term__V621, 2)); int sub__V643_count = term__V621_count*LINK_COUNT(sub__V643); permitUnusedInt(sub__V643_count);
      CRSX_CHECK_SORT(sink__V620->context, sub__V643, &sort_M_Reified_xDepth); /* sub__V643 = &#1 */
      Term sub__V644 = LINK(sink__V620->context, SUB(term__V621, 3)); int sub__V644_count = term__V621_count*LINK_COUNT(sub__V644); permitUnusedInt(sub__V644_count);
      CRSX_CHECK_SORT(sink__V620->context, sub__V644, &sort_M_Reified_xSort); /* sub__V644 = &#2 */
      Term sub__V645 = LINK(sink__V620->context, SUB(term__V621, 4)); int sub__V645_count = term__V621_count*LINK_COUNT(sub__V645); permitUnusedInt(sub__V645_count);
      /* sub__V645 = &#3 */
      Variable x__V646 = linkVariable(sink__V620->context, BINDER(term__V621,5,0)); if (term__V621_count <= 1) UNBIND(x__V646);
      Term sub__V647 = LINK(sink__V620->context, SUB(term__V621, 5)); int sub__V647_count = term__V621_count*LINK_COUNT(sub__V647); permitUnusedInt(sub__V647_count);
      CRSX_CHECK_SORT(sink__V620->context, sub__V647, &sort_M_Reified_xBinder); /* sub__V647 = &#4 */
      
      NamedPropertyLink namedP__V648 = LINK_NamedPropertyLink(sink__V620->context, NAMED_PROPERTIES(term__V621));
      VariablePropertyLink varP__V649 = LINK_VariablePropertyLink(sink__V620->context, VARIABLE_PROPERTIES(term__V621));
      UNLINK(sink__V620->context, term__V621);
      ADD_PROPERTIES(sink__V620, LINK_NamedPropertyLink(sink__V620->context, namedP__V648), LINK_VariablePropertyLink(sink__V620->context, varP__V649));
      { START(sink__V620, _M_HasFunctionalBinders_s4);
        COPY(sink__V620, sub__V642);COPY(sink__V620, sub__V643);COPY(sink__V620, sub__V644);COPY(sink__V620, sub__V645);{ if (!IS_BOUND(x__V646)) { REBIND(linkVariable(sink__V620->context, x__V646));
            Variable binds__V650[1] = {x__V646}; BINDS(sink__V620, 1, binds__V650);
            COPY(sink__V620, sub__V647); /* REUSED SUBSTITUTION */  }
          else { Variable b__V651 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V620->context,"b__V651");
            Variable binds__V652[1] = {b__V651}; BINDS(sink__V620, 1, binds__V652);
            {
              Term arg__V653;
              { Sink buf__V654 = ALLOCA_BUFFER(sink__V620->context);
                USE(buf__V654, linkVariable(buf__V654->context, b__V651));
                arg__V653 = BUFFER_TERM(buf__V654); FREE_BUFFER(buf__V654); }
              Variable vars__V655[1] = {x__V646};
              Term args__V656[1] = {arg__V653};
              struct _SubstitutionFrame substitution__V657 = {NULL, 0, 1, vars__V655, args__V656};
              SUBSTITUTE(sink__V620, sub__V647, &substitution__V657); }
                }
           }
        END(sink__V620, _M_HasFunctionalBinders_s4); }
      UNLINK_NamedPropertyLink(sink__V620->context, namedP__V648); 
      UNLINK_VariablePropertyLink(sink__V620->context, varP__V649); unlinkVariable(sink__V620->context, x__V646);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION HasFunctionalBinders$1. */
int conBindOffs_M_HasFunctionalBinders_s1[] = {0 , 0 , 0};
char *nameFun_M_HasFunctionalBinders_s1(Term term) { return  "HasFunctionalBinders$1" ; }
struct _ConstructionDescriptor descriptor_M_HasFunctionalBinders_s1 = {NULL, 0, 2, sizeof(STRUCT_Con_M_HasFunctionalBinders_s1), conBindOffs_M_HasFunctionalBinders_s1, &nameFun_M_HasFunctionalBinders_s1, &step_M_HasFunctionalBinders_s1};

int step_M_HasFunctionalBinders_s1(Sink sink__V658, Term term__V659)
{
  int term__V659_count = LINK_COUNT(term__V659); permitUnusedInt(term__V659_count);
  do {
    /* Contraction rule DEFS-HasFunctionalBinders-3. */
    ASSERT(sink__V658->context, !strcmp(SYMBOL(term__V659),  "HasFunctionalBinders$1" ));
    Term sub__V660 = SUB(term__V659, 0); int sub__V660_count = term__V659_count*LINK_COUNT(sub__V660); permitUnusedInt(sub__V660_count);
    CRSX_CHECK_SORT(sink__V658->context, sub__V660, &sort_M_Reified_xSort); /* sub__V660 = &#11 */
    Term sub__V661 = SUB(term__V659, 1); int sub__V661_count = term__V659_count*LINK_COUNT(sub__V661); permitUnusedInt(sub__V661_count);
    CRSX_CHECK_SORT(sink__V658->context, sub__V661, &sort_M_Reified_xTerm); /* sub__V661 = &#12 */
    UNLINK(sink__V658->context, term__V659);
    { START(sink__V658, _M__sFalse); END(sink__V658, _M__sFalse); } 
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION DINTEGER$1. */
int conBindOffs_M_DINTEGER_s1[] = {0 , 0};
char *nameFun_M_DINTEGER_s1(Term term) { return  "DINTEGER$1" ; }
struct _ConstructionDescriptor descriptor_M_DINTEGER_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_DINTEGER_s1), conBindOffs_M_DINTEGER_s1, &nameFun_M_DINTEGER_s1, &step_M_DINTEGER_s1};

int step_M_DINTEGER_s1(Sink sink__V662, Term term__V663)
{
  int term__V663_count = LINK_COUNT(term__V663); permitUnusedInt(term__V663_count);
  do {
    /* Contraction rule DEFS-DINTEGER-1. */
    ASSERT(sink__V662->context, !strcmp(SYMBOL(term__V663),  "DINTEGER$1" ));
    Term sub__V664 = LINK(sink__V662->context, SUB(term__V663, 0)); int sub__V664_count = term__V663_count*LINK_COUNT(sub__V664); permitUnusedInt(sub__V664_count);
    UNLINK_SUB(sink__V662->context, term__V663,  0); NORMALIZE(sink__V662->context, sub__V664); SUB(term__V663,  0) = LINK(sink__V662->context, sub__V664);
    /* sub__V664 = &#2 */
    
    NamedPropertyLink namedP__V665 = LINK_NamedPropertyLink(sink__V662->context, NAMED_PROPERTIES(term__V663));
    VariablePropertyLink varP__V666 = LINK_VariablePropertyLink(sink__V662->context, VARIABLE_PROPERTIES(term__V663));
    UNLINK(sink__V662->context, term__V663);
    { START(sink__V662, _M__sTextCons);
      { START(sink__V662, _M__sTextChars);
        { char *str__V667;
          
          {
            double num__V668; char *str__V669;num__V668 = DOUBLE(sub__V664); UNLINK(sink__V662->context, sub__V664); 
            
            snprintf(str__V669 = ALLOCA(sink__V662->context, (size_t) 32), (size_t) 31, "%G", num__V668);
            { size_t z__V670 = strlen(str__V669) + 1; memcpy(str__V667 = ALLOCATE(sink__V662->context, z__V670), str__V669, z__V670); }
            
          }LITERALU(sink__V662, str__V667); }
        END(sink__V662, _M__sTextChars); }
      { START(sink__V662, _M__sTextNil);
        END(sink__V662, _M__sTextNil); }
      END(sink__V662, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V662->context, namedP__V665); 
    UNLINK_VariablePropertyLink(sink__V662->context, varP__V666);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION DDescriptor$1. */
int conBindOffs_M_DDescriptor_s1[] = {0 , 0};
char *nameFun_M_DDescriptor_s1(Term term) { return  "DDescriptor$1" ; }
struct _ConstructionDescriptor descriptor_M_DDescriptor_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_DDescriptor_s1), conBindOffs_M_DDescriptor_s1, &nameFun_M_DDescriptor_s1, &step_M_DDescriptor_s1};

int step_M_DDescriptor_s1(Sink sink__V671, Term term__V672)
{
  int term__V672_count = LINK_COUNT(term__V672); permitUnusedInt(term__V672_count);
  do {
    /* Contraction rule DEFS-DDescriptor-1. */
    ASSERT(sink__V671->context, !strcmp(SYMBOL(term__V672),  "DDescriptor$1" ));
    Term sub__V673 = LINK(sink__V671->context, SUB(term__V672, 0)); int sub__V673_count = term__V672_count*LINK_COUNT(sub__V673); permitUnusedInt(sub__V673_count);
    /* sub__V673 = &#2 */
    
    NamedPropertyLink namedP__V674 = LINK_NamedPropertyLink(sink__V671->context, NAMED_PROPERTIES(term__V672));
    VariablePropertyLink varP__V675 = LINK_VariablePropertyLink(sink__V671->context, VARIABLE_PROPERTIES(term__V672));
    UNLINK(sink__V671->context, term__V672);
    { START(sink__V671, _M__sTextCons);
      { START(sink__V671, _M__sTextChars);
        LITERAL(sink__V671,  "descriptor" ); END(sink__V671, _M__sTextChars); }
      { START(sink__V671, _M__sTextCons);
        { START(sink__V671, _M__sTextEmbed);
          { START(sink__V671, _M_AsText);
            { START(sink__V671, _M_MANGLE);
              COPY(sink__V671, sub__V673);END(sink__V671, _M_MANGLE); }
            END(sink__V671, _M_AsText); }
          END(sink__V671, _M__sTextEmbed); }
        { START(sink__V671, _M__sTextNil);
          END(sink__V671, _M__sTextNil); }
        END(sink__V671, _M__sTextCons); }
      END(sink__V671, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V671->context, namedP__V674); 
    UNLINK_VariablePropertyLink(sink__V671->context, varP__V675);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION HasFunctionalBinders. */
int conBindOffs_M_HasFunctionalBinders[] = {0 , 0};
char *nameFun_M_HasFunctionalBinders(Term term) { return  "HasFunctionalBinders" ; }
struct _ConstructionDescriptor descriptor_M_HasFunctionalBinders = {NULL, 0, 1, sizeof(STRUCT_Con_M_HasFunctionalBinders), conBindOffs_M_HasFunctionalBinders, &nameFun_M_HasFunctionalBinders, &step_M_HasFunctionalBinders};

int step_M_HasFunctionalBinders(Sink sink__V676, Term term__V677)
{
  int term__V677_count = LINK_COUNT(term__V677); permitUnusedInt(term__V677_count);
  Term sub__V678 = FORCE(sink__V676->context, SUB(term__V677, 0));
  EnumOf_M_Reified_xBinder choice__V679 = (IS_VARIABLE_USE(sub__V678) ? VarOf_M_Reified_xBinder : (EnumOf_M_Reified_xBinder) TAG(sub__V678));
  switch (choice__V679)
  {
    case Data_M_BINDER: { /* Function DEFS-HasFunctionalBinders-1$HasFunctionalBinders$BINDER case BINDER */
      ASSERT(sink__V676->context, !strcmp(SYMBOL(term__V677),  "HasFunctionalBinders" ));
      Term sub__V680 = SUB(term__V677, 0); int sub__V680_count = term__V677_count*LINK_COUNT(sub__V680); permitUnusedInt(sub__V680_count);
      CRSX_CHECK_SORT(sink__V676->context, sub__V680, &sort_M_Reified_xBinder); ASSERT(sink__V676->context, !strcmp(SYMBOL(sub__V680),  "BINDER" ));
      Term sub__V681 = LINK(sink__V676->context, SUB(sub__V680, 0)); int sub__V681_count = sub__V680_count*LINK_COUNT(sub__V681); permitUnusedInt(sub__V681_count);
      CRSX_CHECK_SORT(sink__V676->context, sub__V681, &sort_M_Reified_xPromiscuity); /* sub__V681 = &#0-0 */
      Term sub__V682 = LINK(sink__V676->context, SUB(sub__V680, 1)); int sub__V682_count = sub__V680_count*LINK_COUNT(sub__V682); permitUnusedInt(sub__V682_count);
      CRSX_CHECK_SORT(sink__V676->context, sub__V682, &sort_M_Reified_xKind); /* sub__V682 = &#0-1 */
      Term sub__V683 = LINK(sink__V676->context, SUB(sub__V680, 2)); int sub__V683_count = sub__V680_count*LINK_COUNT(sub__V683); permitUnusedInt(sub__V683_count);
      CRSX_CHECK_SORT(sink__V676->context, sub__V683, &sort_M_Reified_xDepth); /* sub__V683 = &#0-2 */
      Term sub__V684 = LINK(sink__V676->context, SUB(sub__V680, 3)); int sub__V684_count = sub__V680_count*LINK_COUNT(sub__V684); permitUnusedInt(sub__V684_count);
      CRSX_CHECK_SORT(sink__V676->context, sub__V684, &sort_M_Reified_xSort); /* sub__V684 = &#0-3 */
      Term sub__V685 = LINK(sink__V676->context, SUB(sub__V680, 4)); int sub__V685_count = sub__V680_count*LINK_COUNT(sub__V685); permitUnusedInt(sub__V685_count);
      /* sub__V685 = &#0-4 */
      Variable y__V686 = linkVariable(sink__V676->context, BINDER(sub__V680,5,0)); if (sub__V680_count <= 1) UNBIND(y__V686);
      Term sub__V687 = LINK(sink__V676->context, SUB(sub__V680, 5)); int sub__V687_count = sub__V680_count*LINK_COUNT(sub__V687); permitUnusedInt(sub__V687_count);
      CRSX_CHECK_SORT(sink__V676->context, sub__V687, &sort_M_Reified_xBinder); /* sub__V687 = &#0-5 */
      
      NamedPropertyLink namedP__V688 = LINK_NamedPropertyLink(sink__V676->context, NAMED_PROPERTIES(term__V677));
      VariablePropertyLink varP__V689 = LINK_VariablePropertyLink(sink__V676->context, VARIABLE_PROPERTIES(term__V677));
      UNLINK(sink__V676->context, term__V677);
      ADD_PROPERTIES(sink__V676, LINK_NamedPropertyLink(sink__V676->context, namedP__V688), LINK_VariablePropertyLink(sink__V676->context, varP__V689));
      { START(sink__V676, _M_HasFunctionalBinders_s3);
        COPY(sink__V676, sub__V682);COPY(sink__V676, sub__V681);COPY(sink__V676, sub__V683);COPY(sink__V676, sub__V684);COPY(sink__V676, sub__V685);{ if (!IS_BOUND(y__V686)) { REBIND(linkVariable(sink__V676->context, y__V686));
            Variable binds__V690[1] = {y__V686}; BINDS(sink__V676, 1, binds__V690);
            COPY(sink__V676, sub__V687); /* REUSED SUBSTITUTION */  }
          else { Variable b__V691 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V676->context,"b__V691");
            Variable binds__V692[1] = {b__V691}; BINDS(sink__V676, 1, binds__V692);
            {
              Term arg__V693;
              { Sink buf__V694 = ALLOCA_BUFFER(sink__V676->context);
                USE(buf__V694, linkVariable(buf__V694->context, b__V691));
                arg__V693 = BUFFER_TERM(buf__V694); FREE_BUFFER(buf__V694); }
              Variable vars__V695[1] = {y__V686};
              Term args__V696[1] = {arg__V693};
              struct _SubstitutionFrame substitution__V697 = {NULL, 0, 1, vars__V695, args__V696};
              SUBSTITUTE(sink__V676, sub__V687, &substitution__V697); }
                }
           }
        END(sink__V676, _M_HasFunctionalBinders_s3); }
      UNLINK_NamedPropertyLink(sink__V676->context, namedP__V688); 
      UNLINK_VariablePropertyLink(sink__V676->context, varP__V689); unlinkVariable(sink__V676->context, y__V686);
      
      return 1;
    break; } case Data_M_ARGUMENT: { /* Function DEFS-HasFunctionalBinders-3$HasFunctionalBinders$ARGUMENT case ARGUMENT */
      ASSERT(sink__V676->context, !strcmp(SYMBOL(term__V677),  "HasFunctionalBinders" ));
      Term sub__V698 = SUB(term__V677, 0); int sub__V698_count = term__V677_count*LINK_COUNT(sub__V698); permitUnusedInt(sub__V698_count);
      CRSX_CHECK_SORT(sink__V676->context, sub__V698, &sort_M_Reified_xBinder); ASSERT(sink__V676->context, !strcmp(SYMBOL(sub__V698),  "ARGUMENT" ));
      Term sub__V699 = LINK(sink__V676->context, SUB(sub__V698, 0)); int sub__V699_count = sub__V698_count*LINK_COUNT(sub__V699); permitUnusedInt(sub__V699_count);
      CRSX_CHECK_SORT(sink__V676->context, sub__V699, &sort_M_Reified_xSort); /* sub__V699 = &#0-0 */
      Term sub__V700 = LINK(sink__V676->context, SUB(sub__V698, 1)); int sub__V700_count = sub__V698_count*LINK_COUNT(sub__V700); permitUnusedInt(sub__V700_count);
      CRSX_CHECK_SORT(sink__V676->context, sub__V700, &sort_M_Reified_xTerm); /* sub__V700 = &#0-1 */
      
      NamedPropertyLink namedP__V701 = LINK_NamedPropertyLink(sink__V676->context, NAMED_PROPERTIES(term__V677));
      VariablePropertyLink varP__V702 = LINK_VariablePropertyLink(sink__V676->context, VARIABLE_PROPERTIES(term__V677));
      UNLINK(sink__V676->context, term__V677);
      ADD_PROPERTIES(sink__V676, LINK_NamedPropertyLink(sink__V676->context, namedP__V701), LINK_VariablePropertyLink(sink__V676->context, varP__V702));
      { START(sink__V676, _M_HasFunctionalBinders_s1);
        COPY(sink__V676, sub__V699);COPY(sink__V676, sub__V700);END(sink__V676, _M_HasFunctionalBinders_s1); }
      UNLINK_NamedPropertyLink(sink__V676->context, namedP__V701); 
      UNLINK_VariablePropertyLink(sink__V676->context, varP__V702);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION T-CheckReuse$12. */
int conBindOffs_M_T_CheckReuse_s12[] = {0 , 0};
char *nameFun_M_T_CheckReuse_s12(Term term) { return  "T-CheckReuse$12" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s12 = {&sort_M_T_xREUSE_xSORT, 0, 1, sizeof(STRUCT_Con_M_T_CheckReuse_s12), conBindOffs_M_T_CheckReuse_s12, &nameFun_M_T_CheckReuse_s12, &step_M_T_CheckReuse_s12};

int step_M_T_CheckReuse_s12(Sink sink__V703, Term term__V704)
{
  int term__V704_count = LINK_COUNT(term__V704); permitUnusedInt(term__V704_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-2. */
    ASSERT(sink__V703->context, !strcmp(SYMBOL(term__V704),  "T-CheckReuse$12" ));
    Term sub__V705 = SUB(term__V704, 0); int sub__V705_count = term__V704_count*LINK_COUNT(sub__V705); permitUnusedInt(sub__V705_count);
    /* sub__V705 = &#propsof0 */
    
    NamedPropertyLink namedP__V706 = LINK_NamedPropertyLink(sink__V703->context, NAMED_PROPERTIES(sub__V705));
    VariablePropertyLink varP__V707 = LINK_VariablePropertyLink(sink__V703->context, VARIABLE_PROPERTIES(sub__V705));
    
    NamedPropertyLink namedP__V708 = LINK_NamedPropertyLink(sink__V703->context, NAMED_PROPERTIES(term__V704));
    VariablePropertyLink varP__V709 = LINK_VariablePropertyLink(sink__V703->context, VARIABLE_PROPERTIES(term__V704));
    UNLINK(sink__V703->context, term__V704);
    { START(sink__V703, _M_T_xNO_xREUSE);
      END(sink__V703, _M_T_xNO_xREUSE); }
    UNLINK_NamedPropertyLink(sink__V703->context, namedP__V708); 
    UNLINK_VariablePropertyLink(sink__V703->context, varP__V709);UNLINK_NamedPropertyLink(sink__V703->context, namedP__V706); 
    UNLINK_VariablePropertyLink(sink__V703->context, varP__V707);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse$10. */
int conBindOffs_M_T_CheckReuse_s10[] = {0 , 0};
char *nameFun_M_T_CheckReuse_s10(Term term) { return  "T-CheckReuse$10" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s10 = {&sort_M_T_xREUSE_xSORT, 0, 1, sizeof(STRUCT_Con_M_T_CheckReuse_s10), conBindOffs_M_T_CheckReuse_s10, &nameFun_M_T_CheckReuse_s10, &step_M_T_CheckReuse_s10};

int step_M_T_CheckReuse_s10(Sink sink__V710, Term term__V711)
{
  int term__V711_count = LINK_COUNT(term__V711); permitUnusedInt(term__V711_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-1. */
    ASSERT(sink__V710->context, !strcmp(SYMBOL(term__V711),  "T-CheckReuse$10" ));
    Term sub__V712 = LINK(sink__V710->context, SUB(term__V711, 0)); int sub__V712_count = term__V711_count*LINK_COUNT(sub__V712); permitUnusedInt(sub__V712_count);
    CRSX_CHECK_SORT(sink__V710->context, sub__V712, &sort_M_Reified_xVariable); UNLINK_SUB(sink__V710->context, term__V711,  0); NORMALIZE(sink__V710->context, sub__V712); SUB(term__V711,  0) = LINK(sink__V710->context, sub__V712);
    /* sub__V712 = &#11 */
    
    NamedPropertyLink namedP__V713 = LINK_NamedPropertyLink(sink__V710->context, NAMED_PROPERTIES(term__V711));
    VariablePropertyLink varP__V714 = LINK_VariablePropertyLink(sink__V710->context, VARIABLE_PROPERTIES(term__V711));
    UNLINK(sink__V710->context, term__V711);
    { START(sink__V710, _M_T_CheckReuse_Variable);
      { Term term__V715;
        { Term key__V716;
          key__V716 = sub__V712; Term pp__V717 = DPROPERTY(sink__V710->context, namedP__V713, varP__V714, key__V716);UNLINK(sink__V710->context, key__V716); 
          if (pp__V717) term__V715 = LINK(sink__V710->context, pp__V717);
          else {{ Sink buf__V718 = ALLOCA_BUFFER(sink__V710->context);
              { START(buf__V718, _M_FREE); END(buf__V718, _M_FREE); } term__V715 = BUFFER_TERM(buf__V718); FREE_BUFFER(buf__V718); }
            }
        }
        COPY(sink__V710, term__V715); /*CONSERVATIVE*/ }
      END(sink__V710, _M_T_CheckReuse_Variable); }
    UNLINK_NamedPropertyLink(sink__V710->context, namedP__V713); 
    UNLINK_VariablePropertyLink(sink__V710->context, varP__V714);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse$11. */
int conBindOffs_M_T_CheckReuse_s11[] = {0 , 0 , 0 , 0};
char *nameFun_M_T_CheckReuse_s11(Term term) { return  "T-CheckReuse$11" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s11 = {&sort_M_T_xREUSE_xSORT, 0, 3, sizeof(STRUCT_Con_M_T_CheckReuse_s11), conBindOffs_M_T_CheckReuse_s11, &nameFun_M_T_CheckReuse_s11, &step_M_T_CheckReuse_s11};

int step_M_T_CheckReuse_s11(Sink sink__V719, Term term__V720)
{
  int term__V720_count = LINK_COUNT(term__V720); permitUnusedInt(term__V720_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-2. */
    ASSERT(sink__V719->context, !strcmp(SYMBOL(term__V720),  "T-CheckReuse$11" ));
    Term sub__V721 = SUB(term__V720, 0); int sub__V721_count = term__V720_count*LINK_COUNT(sub__V721); permitUnusedInt(sub__V721_count);
    CRSX_CHECK_SORT(sink__V719->context, sub__V721, &sort_M_Text_Part); /* sub__V721 = &#111 */
    Term sub__V722 = SUB(term__V720, 1); int sub__V722_count = term__V720_count*LINK_COUNT(sub__V722); permitUnusedInt(sub__V722_count);
    CRSX_CHECK_SORT(sink__V719->context, sub__V722, &sort_M_Reified_xVariable); /* sub__V722 = &#112 */
    Term sub__V723 = SUB(term__V720, 2); int sub__V723_count = term__V720_count*LINK_COUNT(sub__V723); permitUnusedInt(sub__V723_count);
    /* sub__V723 = &#propsof0 */
    
    NamedPropertyLink namedP__V724 = LINK_NamedPropertyLink(sink__V719->context, NAMED_PROPERTIES(sub__V723));
    VariablePropertyLink varP__V725 = LINK_VariablePropertyLink(sink__V719->context, VARIABLE_PROPERTIES(sub__V723));
    
    NamedPropertyLink namedP__V726 = LINK_NamedPropertyLink(sink__V719->context, NAMED_PROPERTIES(term__V720));
    VariablePropertyLink varP__V727 = LINK_VariablePropertyLink(sink__V719->context, VARIABLE_PROPERTIES(term__V720));
    UNLINK(sink__V719->context, term__V720);
    { START(sink__V719, _M_T_xNO_xREUSE);
      END(sink__V719, _M_T_xNO_xREUSE); }
    UNLINK_NamedPropertyLink(sink__V719->context, namedP__V726); 
    UNLINK_VariablePropertyLink(sink__V719->context, varP__V727);UNLINK_NamedPropertyLink(sink__V719->context, namedP__V724); 
    UNLINK_VariablePropertyLink(sink__V719->context, varP__V725);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION PromiscuityString. */
int conBindOffs_M_PromiscuityString[] = {0 , 0};
char *nameFun_M_PromiscuityString(Term term) { return  "PromiscuityString" ; }
struct _ConstructionDescriptor descriptor_M_PromiscuityString = {NULL, 0, 1, sizeof(STRUCT_Con_M_PromiscuityString), conBindOffs_M_PromiscuityString, &nameFun_M_PromiscuityString, &step_M_PromiscuityString};

int step_M_PromiscuityString(Sink sink__V728, Term term__V729)
{
  int term__V729_count = LINK_COUNT(term__V729); permitUnusedInt(term__V729_count);
  Term sub__V730 = FORCE(sink__V728->context, SUB(term__V729, 0));
  EnumOf_M_Reified_xPromiscuity choice__V731 = (IS_VARIABLE_USE(sub__V730) ? VarOf_M_Reified_xPromiscuity : (EnumOf_M_Reified_xPromiscuity) TAG(sub__V730));
  switch (choice__V731)
  {
    case Data_M_LINEAR: { /* Function DEFS-PromiscuityString-1$PromiscuityString$LINEAR case LINEAR */
      ASSERT(sink__V728->context, !strcmp(SYMBOL(term__V729),  "PromiscuityString" ));
      Term sub__V732 = SUB(term__V729, 0); int sub__V732_count = term__V729_count*LINK_COUNT(sub__V732); permitUnusedInt(sub__V732_count);
      CRSX_CHECK_SORT(sink__V728->context, sub__V732, &sort_M_Reified_xPromiscuity); ASSERT(sink__V728->context, !strcmp(SYMBOL(sub__V732),  "LINEAR" ));
      
      NamedPropertyLink namedP__V733 = LINK_NamedPropertyLink(sink__V728->context, NAMED_PROPERTIES(term__V729));
      VariablePropertyLink varP__V734 = LINK_VariablePropertyLink(sink__V728->context, VARIABLE_PROPERTIES(term__V729));
      UNLINK(sink__V728->context, term__V729);
      ADD_PROPERTIES(sink__V728, LINK_NamedPropertyLink(sink__V728->context, namedP__V733), LINK_VariablePropertyLink(sink__V728->context, varP__V734));
      { START(sink__V728, _M_PromiscuityString_s1);
        END(sink__V728, _M_PromiscuityString_s1); }
      UNLINK_NamedPropertyLink(sink__V728->context, namedP__V733); 
      UNLINK_VariablePropertyLink(sink__V728->context, varP__V734);
      
      return 1;
    break; } case Data_M_PROMISCUOUS: { /* Function DEFS-PromiscuityString-2$PromiscuityString$PROMISCUOUS case PROMISCUOUS */
      ASSERT(sink__V728->context, !strcmp(SYMBOL(term__V729),  "PromiscuityString" ));
      Term sub__V735 = SUB(term__V729, 0); int sub__V735_count = term__V729_count*LINK_COUNT(sub__V735); permitUnusedInt(sub__V735_count);
      CRSX_CHECK_SORT(sink__V728->context, sub__V735, &sort_M_Reified_xPromiscuity); ASSERT(sink__V728->context, !strcmp(SYMBOL(sub__V735),  "PROMISCUOUS" ));
      
      NamedPropertyLink namedP__V736 = LINK_NamedPropertyLink(sink__V728->context, NAMED_PROPERTIES(term__V729));
      VariablePropertyLink varP__V737 = LINK_VariablePropertyLink(sink__V728->context, VARIABLE_PROPERTIES(term__V729));
      UNLINK(sink__V728->context, term__V729);
      ADD_PROPERTIES(sink__V728, LINK_NamedPropertyLink(sink__V728->context, namedP__V736), LINK_VariablePropertyLink(sink__V728->context, varP__V737));
      { START(sink__V728, _M_PromiscuityString_s2);
        END(sink__V728, _M_PromiscuityString_s2); }
      UNLINK_NamedPropertyLink(sink__V728->context, namedP__V736); 
      UNLINK_VariablePropertyLink(sink__V728->context, varP__V737);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION T-CheckReuse. */
int conBindOffs_M_T_CheckReuse[] = {0 , 0};
char *nameFun_M_T_CheckReuse(Term term) { return  "T-CheckReuse" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse = {&sort_M_T_xREUSE_xSORT, 0, 1, sizeof(STRUCT_Con_M_T_CheckReuse), conBindOffs_M_T_CheckReuse, &nameFun_M_T_CheckReuse, &step_M_T_CheckReuse};

int step_M_T_CheckReuse(Sink sink__V738, Term term__V739)
{
  int term__V739_count = LINK_COUNT(term__V739); permitUnusedInt(term__V739_count);
  Term sub__V740 = FORCE(sink__V738->context, SUB(term__V739, 0));
  EnumOf_M_Reified_xTerm choice__V741 = (IS_VARIABLE_USE(sub__V740) ? VarOf_M_Reified_xTerm : (EnumOf_M_Reified_xTerm) TAG(sub__V740));
  switch (choice__V741)
  {
    case Data_M_CONSTRUCTION: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$CONSTRUCTION case CONSTRUCTION */
      ASSERT(sink__V738->context, !strcmp(SYMBOL(term__V739),  "T-CheckReuse" ));
      Term sub__V742 = SUB(term__V739, 0); int sub__V742_count = term__V739_count*LINK_COUNT(sub__V742); permitUnusedInt(sub__V742_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V742, &sort_M_Reified_xTerm); ASSERT(sink__V738->context, !strcmp(SYMBOL(sub__V742),  "CONSTRUCTION" ));
      Term sub__V743 = LINK(sink__V738->context, SUB(sub__V742, 0)); int sub__V743_count = sub__V742_count*LINK_COUNT(sub__V743); permitUnusedInt(sub__V743_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V743, &sort_M_Reified_xKind); /* sub__V743 = &#0-0 */
      Term sub__V744 = LINK(sink__V738->context, SUB(sub__V742, 1)); int sub__V744_count = sub__V742_count*LINK_COUNT(sub__V744); permitUnusedInt(sub__V744_count);
      /* sub__V744 = &#0-1 */
      Term sub__V745 = LINK(sink__V738->context, SUB(sub__V742, 2)); int sub__V745_count = sub__V742_count*LINK_COUNT(sub__V745); permitUnusedInt(sub__V745_count);
      /* sub__V745 = &#0-2 */
      
      NamedPropertyLink namedP__V746 = LINK_NamedPropertyLink(sink__V738->context, NAMED_PROPERTIES(term__V739));
      VariablePropertyLink varP__V747 = LINK_VariablePropertyLink(sink__V738->context, VARIABLE_PROPERTIES(term__V739));
      UNLINK(sink__V738->context, term__V739);
      ADD_PROPERTIES(sink__V738, LINK_NamedPropertyLink(sink__V738->context, namedP__V746), LINK_VariablePropertyLink(sink__V738->context, varP__V747));
      { START(sink__V738, _M_T_CheckReuse_s1);
        COPY(sink__V738, sub__V743);COPY(sink__V738, sub__V744);COPY(sink__V738, sub__V745);END(sink__V738, _M_T_CheckReuse_s1); }
      UNLINK_NamedPropertyLink(sink__V738->context, namedP__V746); 
      UNLINK_VariablePropertyLink(sink__V738->context, varP__V747);
      
      return 1;
    break; } case Data_M_EVALUATOR: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$EVALUATOR case EVALUATOR */
      ASSERT(sink__V738->context, !strcmp(SYMBOL(term__V739),  "T-CheckReuse" ));
      Term sub__V748 = SUB(term__V739, 0); int sub__V748_count = term__V739_count*LINK_COUNT(sub__V748); permitUnusedInt(sub__V748_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V748, &sort_M_Reified_xTerm); ASSERT(sink__V738->context, !strcmp(SYMBOL(sub__V748),  "EVALUATOR" ));
      Term sub__V749 = LINK(sink__V738->context, SUB(sub__V748, 0)); int sub__V749_count = sub__V748_count*LINK_COUNT(sub__V749); permitUnusedInt(sub__V749_count);
      /* sub__V749 = &#0-0 */
      Term sub__V750 = LINK(sink__V738->context, SUB(sub__V748, 1)); int sub__V750_count = sub__V748_count*LINK_COUNT(sub__V750); permitUnusedInt(sub__V750_count);
      /* sub__V750 = &#0-1 */
      Term sub__V751 = LINK(sink__V738->context, SUB(sub__V748, 2)); int sub__V751_count = sub__V748_count*LINK_COUNT(sub__V751); permitUnusedInt(sub__V751_count);
      /* sub__V751 = &#0-2 */
      
      NamedPropertyLink namedP__V752 = LINK_NamedPropertyLink(sink__V738->context, NAMED_PROPERTIES(term__V739));
      VariablePropertyLink varP__V753 = LINK_VariablePropertyLink(sink__V738->context, VARIABLE_PROPERTIES(term__V739));
      UNLINK(sink__V738->context, term__V739);
      ADD_PROPERTIES(sink__V738, LINK_NamedPropertyLink(sink__V738->context, namedP__V752), LINK_VariablePropertyLink(sink__V738->context, varP__V753));
      { START(sink__V738, _M_T_CheckReuse_s2);
        COPY(sink__V738, sub__V749);COPY(sink__V738, sub__V750);COPY(sink__V738, sub__V751);END(sink__V738, _M_T_CheckReuse_s2); }
      UNLINK_NamedPropertyLink(sink__V738->context, namedP__V752); 
      UNLINK_VariablePropertyLink(sink__V738->context, varP__V753);
      
      return 1;
    break; } case Data_M_FreshReuseOrigin: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$FreshReuseOrigin case FreshReuseOrigin */
      ASSERT(sink__V738->context, !strcmp(SYMBOL(term__V739),  "T-CheckReuse" ));
      Term sub__V754 = SUB(term__V739, 0); int sub__V754_count = term__V739_count*LINK_COUNT(sub__V754); permitUnusedInt(sub__V754_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V754, &sort_M_Reified_xTerm); ASSERT(sink__V738->context, !strcmp(SYMBOL(sub__V754),  "FreshReuseOrigin" ));
      Term sub__V755 = LINK(sink__V738->context, SUB(sub__V754, 0)); int sub__V755_count = sub__V754_count*LINK_COUNT(sub__V755); permitUnusedInt(sub__V755_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V755, &sort_M_Reified_xVariable); /* sub__V755 = &#0-0 */
      Term sub__V756 = LINK(sink__V738->context, SUB(sub__V754, 1)); int sub__V756_count = sub__V754_count*LINK_COUNT(sub__V756); permitUnusedInt(sub__V756_count);
      /* sub__V756 = &#0-1 */
      Term sub__V757 = LINK(sink__V738->context, SUB(sub__V754, 2)); int sub__V757_count = sub__V754_count*LINK_COUNT(sub__V757); permitUnusedInt(sub__V757_count);
      /* sub__V757 = &#0-2 */
      
      NamedPropertyLink namedP__V758 = LINK_NamedPropertyLink(sink__V738->context, NAMED_PROPERTIES(term__V739));
      VariablePropertyLink varP__V759 = LINK_VariablePropertyLink(sink__V738->context, VARIABLE_PROPERTIES(term__V739));
      UNLINK(sink__V738->context, term__V739);
      ADD_PROPERTIES(sink__V738, LINK_NamedPropertyLink(sink__V738->context, namedP__V758), LINK_VariablePropertyLink(sink__V738->context, varP__V759));
      { START(sink__V738, _M_T_CheckReuse_s3);
        COPY(sink__V738, sub__V755);COPY(sink__V738, sub__V756);COPY(sink__V738, sub__V757);END(sink__V738, _M_T_CheckReuse_s3); }
      UNLINK_NamedPropertyLink(sink__V738->context, namedP__V758); 
      UNLINK_VariablePropertyLink(sink__V738->context, varP__V759);
      
      return 1;
    break; } case Data_M_LITERAL: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$LITERAL case LITERAL */
      ASSERT(sink__V738->context, !strcmp(SYMBOL(term__V739),  "T-CheckReuse" ));
      Term sub__V760 = SUB(term__V739, 0); int sub__V760_count = term__V739_count*LINK_COUNT(sub__V760); permitUnusedInt(sub__V760_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V760, &sort_M_Reified_xTerm); ASSERT(sink__V738->context, !strcmp(SYMBOL(sub__V760),  "LITERAL" ));
      Term sub__V761 = LINK(sink__V738->context, SUB(sub__V760, 0)); int sub__V761_count = sub__V760_count*LINK_COUNT(sub__V761); permitUnusedInt(sub__V761_count);
      /* sub__V761 = &#0-0 */
      Term sub__V762 = LINK(sink__V738->context, SUB(sub__V760, 1)); int sub__V762_count = sub__V760_count*LINK_COUNT(sub__V762); permitUnusedInt(sub__V762_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V762, &sort_M_Reified_xSort); /* sub__V762 = &#0-1 */
      
      NamedPropertyLink namedP__V763 = LINK_NamedPropertyLink(sink__V738->context, NAMED_PROPERTIES(term__V739));
      VariablePropertyLink varP__V764 = LINK_VariablePropertyLink(sink__V738->context, VARIABLE_PROPERTIES(term__V739));
      UNLINK(sink__V738->context, term__V739);
      ADD_PROPERTIES(sink__V738, LINK_NamedPropertyLink(sink__V738->context, namedP__V763), LINK_VariablePropertyLink(sink__V738->context, varP__V764));
      { START(sink__V738, _M_T_CheckReuse_s4);
        COPY(sink__V738, sub__V761);COPY(sink__V738, sub__V762);END(sink__V738, _M_T_CheckReuse_s4); }
      UNLINK_NamedPropertyLink(sink__V738->context, namedP__V763); 
      UNLINK_VariablePropertyLink(sink__V738->context, varP__V764);
      
      return 1;
    break; } case Data_M_META_APPLICATION: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$META-APPLICATION case META-APPLICATION */
      ASSERT(sink__V738->context, !strcmp(SYMBOL(term__V739),  "T-CheckReuse" ));
      Term sub__V765 = SUB(term__V739, 0); int sub__V765_count = term__V739_count*LINK_COUNT(sub__V765); permitUnusedInt(sub__V765_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V765, &sort_M_Reified_xTerm); ASSERT(sink__V738->context, !strcmp(SYMBOL(sub__V765),  "META-APPLICATION" ));
      Term sub__V766 = LINK(sink__V738->context, SUB(sub__V765, 0)); int sub__V766_count = sub__V765_count*LINK_COUNT(sub__V766); permitUnusedInt(sub__V766_count);
      /* sub__V766 = &#0-0 */
      Term sub__V767 = LINK(sink__V738->context, SUB(sub__V765, 1)); int sub__V767_count = sub__V765_count*LINK_COUNT(sub__V767); permitUnusedInt(sub__V767_count);
      /* sub__V767 = &#0-1 */
      Term sub__V768 = LINK(sink__V738->context, SUB(sub__V765, 2)); int sub__V768_count = sub__V765_count*LINK_COUNT(sub__V768); permitUnusedInt(sub__V768_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V768, &sort_M_Reified_xUse); /* sub__V768 = &#0-2 */
      
      NamedPropertyLink namedP__V769 = LINK_NamedPropertyLink(sink__V738->context, NAMED_PROPERTIES(term__V739));
      VariablePropertyLink varP__V770 = LINK_VariablePropertyLink(sink__V738->context, VARIABLE_PROPERTIES(term__V739));
      UNLINK(sink__V738->context, term__V739);
      ADD_PROPERTIES(sink__V738, LINK_NamedPropertyLink(sink__V738->context, namedP__V769), LINK_VariablePropertyLink(sink__V738->context, varP__V770));
      { START(sink__V738, _M_T_CheckReuse_s5);
        COPY(sink__V738, sub__V766);COPY(sink__V738, sub__V767);COPY(sink__V738, sub__V768);END(sink__V738, _M_T_CheckReuse_s5); }
      UNLINK_NamedPropertyLink(sink__V738->context, namedP__V769); 
      UNLINK_VariablePropertyLink(sink__V738->context, varP__V770);
      
      return 1;
    break; } case Data_M_PROPERTY: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$PROPERTY case PROPERTY */
      ASSERT(sink__V738->context, !strcmp(SYMBOL(term__V739),  "T-CheckReuse" ));
      Term sub__V771 = SUB(term__V739, 0); int sub__V771_count = term__V739_count*LINK_COUNT(sub__V771); permitUnusedInt(sub__V771_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V771, &sort_M_Reified_xTerm); ASSERT(sink__V738->context, !strcmp(SYMBOL(sub__V771),  "PROPERTY" ));
      Term sub__V772 = LINK(sink__V738->context, SUB(sub__V771, 0)); int sub__V772_count = sub__V771_count*LINK_COUNT(sub__V772); permitUnusedInt(sub__V772_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V772, &sort_M_Reified_xTerm); /* sub__V772 = &#0-0 */
      Term sub__V773 = LINK(sink__V738->context, SUB(sub__V771, 1)); int sub__V773_count = sub__V771_count*LINK_COUNT(sub__V773); permitUnusedInt(sub__V773_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V773, &sort_M_Reified_xTerm); /* sub__V773 = &#0-1 */
      Term sub__V774 = LINK(sink__V738->context, SUB(sub__V771, 2)); int sub__V774_count = sub__V771_count*LINK_COUNT(sub__V774); permitUnusedInt(sub__V774_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V774, &sort_M_Reified_xTerm); /* sub__V774 = &#0-2 */
      
      NamedPropertyLink namedP__V775 = LINK_NamedPropertyLink(sink__V738->context, NAMED_PROPERTIES(term__V739));
      VariablePropertyLink varP__V776 = LINK_VariablePropertyLink(sink__V738->context, VARIABLE_PROPERTIES(term__V739));
      UNLINK(sink__V738->context, term__V739);
      ADD_PROPERTIES(sink__V738, LINK_NamedPropertyLink(sink__V738->context, namedP__V775), LINK_VariablePropertyLink(sink__V738->context, varP__V776));
      { START(sink__V738, _M_T_CheckReuse_s6);
        COPY(sink__V738, sub__V772);COPY(sink__V738, sub__V773);COPY(sink__V738, sub__V774);END(sink__V738, _M_T_CheckReuse_s6); }
      UNLINK_NamedPropertyLink(sink__V738->context, namedP__V775); 
      UNLINK_VariablePropertyLink(sink__V738->context, varP__V776);
      
      return 1;
    break; } case Data_M_PROPERTY_NOT: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$PROPERTY-NOT case PROPERTY-NOT */
      ASSERT(sink__V738->context, !strcmp(SYMBOL(term__V739),  "T-CheckReuse" ));
      Term sub__V777 = SUB(term__V739, 0); int sub__V777_count = term__V739_count*LINK_COUNT(sub__V777); permitUnusedInt(sub__V777_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V777, &sort_M_Reified_xTerm); ASSERT(sink__V738->context, !strcmp(SYMBOL(sub__V777),  "PROPERTY-NOT" ));
      Term sub__V778 = LINK(sink__V738->context, SUB(sub__V777, 0)); int sub__V778_count = sub__V777_count*LINK_COUNT(sub__V778); permitUnusedInt(sub__V778_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V778, &sort_M_Reified_xTerm); /* sub__V778 = &#0-0 */
      Term sub__V779 = LINK(sink__V738->context, SUB(sub__V777, 1)); int sub__V779_count = sub__V777_count*LINK_COUNT(sub__V779); permitUnusedInt(sub__V779_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V779, &sort_M_Reified_xTerm); /* sub__V779 = &#0-1 */
      
      NamedPropertyLink namedP__V780 = LINK_NamedPropertyLink(sink__V738->context, NAMED_PROPERTIES(term__V739));
      VariablePropertyLink varP__V781 = LINK_VariablePropertyLink(sink__V738->context, VARIABLE_PROPERTIES(term__V739));
      UNLINK(sink__V738->context, term__V739);
      ADD_PROPERTIES(sink__V738, LINK_NamedPropertyLink(sink__V738->context, namedP__V780), LINK_VariablePropertyLink(sink__V738->context, varP__V781));
      { START(sink__V738, _M_T_CheckReuse_s7);
        COPY(sink__V738, sub__V778);COPY(sink__V738, sub__V779);END(sink__V738, _M_T_CheckReuse_s7); }
      UNLINK_NamedPropertyLink(sink__V738->context, namedP__V780); 
      UNLINK_VariablePropertyLink(sink__V738->context, varP__V781);
      
      return 1;
    break; } case Data_M_PROPERTY_REF: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$PROPERTY-REF case PROPERTY-REF */
      ASSERT(sink__V738->context, !strcmp(SYMBOL(term__V739),  "T-CheckReuse" ));
      Term sub__V782 = SUB(term__V739, 0); int sub__V782_count = term__V739_count*LINK_COUNT(sub__V782); permitUnusedInt(sub__V782_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V782, &sort_M_Reified_xTerm); ASSERT(sink__V738->context, !strcmp(SYMBOL(sub__V782),  "PROPERTY-REF" ));
      Term sub__V783 = LINK(sink__V738->context, SUB(sub__V782, 0)); int sub__V783_count = sub__V782_count*LINK_COUNT(sub__V783); permitUnusedInt(sub__V783_count);
      /* sub__V783 = &#0-0 */
      Term sub__V784 = LINK(sink__V738->context, SUB(sub__V782, 1)); int sub__V784_count = sub__V782_count*LINK_COUNT(sub__V784); permitUnusedInt(sub__V784_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V784, &sort_M_Reified_xUse); /* sub__V784 = &#0-1 */
      Term sub__V785 = LINK(sink__V738->context, SUB(sub__V782, 2)); int sub__V785_count = sub__V782_count*LINK_COUNT(sub__V785); permitUnusedInt(sub__V785_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V785, &sort_M_Reified_xTerm); /* sub__V785 = &#0-2 */
      
      NamedPropertyLink namedP__V786 = LINK_NamedPropertyLink(sink__V738->context, NAMED_PROPERTIES(term__V739));
      VariablePropertyLink varP__V787 = LINK_VariablePropertyLink(sink__V738->context, VARIABLE_PROPERTIES(term__V739));
      UNLINK(sink__V738->context, term__V739);
      ADD_PROPERTIES(sink__V738, LINK_NamedPropertyLink(sink__V738->context, namedP__V786), LINK_VariablePropertyLink(sink__V738->context, varP__V787));
      { START(sink__V738, _M_T_CheckReuse_s8);
        COPY(sink__V738, sub__V783);COPY(sink__V738, sub__V784);COPY(sink__V738, sub__V785);END(sink__V738, _M_T_CheckReuse_s8); }
      UNLINK_NamedPropertyLink(sink__V738->context, namedP__V786); 
      UNLINK_VariablePropertyLink(sink__V738->context, varP__V787);
      
      return 1;
    break; } case Data_M_VARIABLE_USE: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$VARIABLE-USE case VARIABLE-USE */
      ASSERT(sink__V738->context, !strcmp(SYMBOL(term__V739),  "T-CheckReuse" ));
      Term sub__V788 = SUB(term__V739, 0); int sub__V788_count = term__V739_count*LINK_COUNT(sub__V788); permitUnusedInt(sub__V788_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V788, &sort_M_Reified_xTerm); ASSERT(sink__V738->context, !strcmp(SYMBOL(sub__V788),  "VARIABLE-USE" ));
      Term sub__V789 = LINK(sink__V738->context, SUB(sub__V788, 0)); int sub__V789_count = sub__V788_count*LINK_COUNT(sub__V789); permitUnusedInt(sub__V789_count);
      CRSX_CHECK_SORT(sink__V738->context, sub__V789, &sort_M_Reified_xVariable); /* sub__V789 = &#0-0 */
      
      NamedPropertyLink namedP__V790 = LINK_NamedPropertyLink(sink__V738->context, NAMED_PROPERTIES(term__V739));
      VariablePropertyLink varP__V791 = LINK_VariablePropertyLink(sink__V738->context, VARIABLE_PROPERTIES(term__V739));
      UNLINK(sink__V738->context, term__V739);
      ADD_PROPERTIES(sink__V738, LINK_NamedPropertyLink(sink__V738->context, namedP__V790), LINK_VariablePropertyLink(sink__V738->context, varP__V791));
      { START(sink__V738, _M_T_CheckReuse_s9);
        COPY(sink__V738, sub__V789);END(sink__V738, _M_T_CheckReuse_s9); }
      UNLINK_NamedPropertyLink(sink__V738->context, namedP__V790); 
      UNLINK_VariablePropertyLink(sink__V738->context, varP__V791);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION UnNumeric$1. */
int conBindOffs_M_UnNumeric_s1[] = {0 , 0};
char *nameFun_M_UnNumeric_s1(Term term) { return  "UnNumeric$1" ; }
struct _ConstructionDescriptor descriptor_M_UnNumeric_s1 = {NULL, 0, 1, sizeof(STRUCT_Con_M_UnNumeric_s1), conBindOffs_M_UnNumeric_s1, &nameFun_M_UnNumeric_s1, &step_M_UnNumeric_s1};

int step_M_UnNumeric_s1(Sink sink__V792, Term term__V793)
{
  int term__V793_count = LINK_COUNT(term__V793); permitUnusedInt(term__V793_count);
  do {
    /* Contraction rule DEFS-UnNumeric-1. */
    ASSERT(sink__V792->context, !strcmp(SYMBOL(term__V793),  "UnNumeric$1" ));
    Term sub__V794 = LINK(sink__V792->context, SUB(term__V793, 0)); int sub__V794_count = term__V793_count*LINK_COUNT(sub__V794); permitUnusedInt(sub__V794_count);
    /* sub__V794 = &#11 */
    UNLINK(sink__V792->context, term__V793);
    COPY(sink__V792, sub__V794);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MANGLE. */
int conBindOffs_M_MANGLE[] = {0 , 0};
char *nameFun_M_MANGLE(Term term) { return  "MANGLE" ; }
struct _ConstructionDescriptor descriptor_M_MANGLE = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_MANGLE), conBindOffs_M_MANGLE, &nameFun_M_MANGLE, &step_M_MANGLE};

int step_M_MANGLE(Sink sink__V795, Term term__V796)
{
  int term__V796_count = LINK_COUNT(term__V796); permitUnusedInt(term__V796_count);
  do {
    /* Contraction rule DEFS-MANGLE-1. */
    ASSERT(sink__V795->context, !strcmp(SYMBOL(term__V796),  "MANGLE" ));
    Term sub__V797 = LINK(sink__V795->context, SUB(term__V796, 0)); int sub__V797_count = term__V796_count*LINK_COUNT(sub__V797); permitUnusedInt(sub__V797_count);
    UNLINK_SUB(sink__V795->context, term__V796,  0); NORMALIZE(sink__V795->context, sub__V797); SUB(term__V796,  0) = LINK(sink__V795->context, sub__V797);
    /* sub__V797 = &#1 */
    
    NamedPropertyLink namedP__V798 = LINK_NamedPropertyLink(sink__V795->context, NAMED_PROPERTIES(term__V796));
    VariablePropertyLink varP__V799 = LINK_VariablePropertyLink(sink__V795->context, VARIABLE_PROPERTIES(term__V796));
    UNLINK(sink__V795->context, term__V796);
    { START(sink__V795, _M__sTextCons);
      { START(sink__V795, _M__sTextChars);
        { char *str__V800;
          FORCE(sink__V795->context, sub__V797); LINK(sink__V795->context, sub__V797);
          { char *s__V801 = makeMangled(sink__V795->context, SYMBOL(sub__V797));
            { size_t z__V802 = strlen(s__V801) + 1; memcpy(str__V800 = ALLOCATE(sink__V795->context, z__V802), s__V801, z__V802);  UNLINK(sink__V795->context, sub__V797);  UNLINK(sink__V795->context, sub__V797); }
            }
          LITERALU(sink__V795, str__V800); }
        END(sink__V795, _M__sTextChars); }
      { START(sink__V795, _M__sTextNil);
        END(sink__V795, _M__sTextNil); }
      END(sink__V795, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V795->context, namedP__V798); 
    UNLINK_VariablePropertyLink(sink__V795->context, varP__V799);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION NameFun. */
int conBindOffs_M_NameFun[] = {0 , 0};
char *nameFun_M_NameFun(Term term) { return  "NameFun" ; }
struct _ConstructionDescriptor descriptor_M_NameFun = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_NameFun), conBindOffs_M_NameFun, &nameFun_M_NameFun, &step_M_NameFun};

int step_M_NameFun(Sink sink__V803, Term term__V804)
{
  int term__V804_count = LINK_COUNT(term__V804); permitUnusedInt(term__V804_count);
  do {
    /* Contraction rule DEFS-NameFun-1. */
    ASSERT(sink__V803->context, !strcmp(SYMBOL(term__V804),  "NameFun" ));
    Term sub__V805 = LINK(sink__V803->context, SUB(term__V804, 0)); int sub__V805_count = term__V804_count*LINK_COUNT(sub__V805); permitUnusedInt(sub__V805_count);
    /* sub__V805 = &#1 */
    
    NamedPropertyLink namedP__V806 = LINK_NamedPropertyLink(sink__V803->context, NAMED_PROPERTIES(term__V804));
    VariablePropertyLink varP__V807 = LINK_VariablePropertyLink(sink__V803->context, VARIABLE_PROPERTIES(term__V804));
    UNLINK(sink__V803->context, term__V804);
    { START(sink__V803, _M__sTextCons);
      { START(sink__V803, _M__sTextChars);
        LITERAL(sink__V803,  "nameFun" ); END(sink__V803, _M__sTextChars); }
      { START(sink__V803, _M__sTextCons);
        { START(sink__V803, _M__sTextEmbed);
          { START(sink__V803, _M_AsText);
            { START(sink__V803, _M_MANGLE);
              COPY(sink__V803, sub__V805);END(sink__V803, _M_MANGLE); }
            END(sink__V803, _M_AsText); }
          END(sink__V803, _M__sTextEmbed); }
        { START(sink__V803, _M__sTextNil);
          END(sink__V803, _M__sTextNil); }
        END(sink__V803, _M__sTextCons); }
      END(sink__V803, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V803->context, namedP__V806); 
    UNLINK_VariablePropertyLink(sink__V803->context, varP__V807);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Concat. */
int conBindOffs_M_Concat[] = {0 , 0};
char *nameFun_M_Concat(Term term) { return  "Concat" ; }
struct _ConstructionDescriptor descriptor_M_Concat = {NULL, 0, 1, sizeof(STRUCT_Con_M_Concat), conBindOffs_M_Concat, &nameFun_M_Concat, &step_M_Concat};

int step_M_Concat(Sink sink__V808, Term term__V809)
{
  int term__V809_count = LINK_COUNT(term__V809); permitUnusedInt(term__V809_count);
  Term sub__V810 = FORCE(sink__V808->context, SUB(term__V809, 0));
  EnumOf_M__sList choice__V811 = (IS_VARIABLE_USE(sub__V810) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V810));
  switch (choice__V811)
  {
    case Data_M__sNil: { /* Function DEFS-Concat-1$Concat$$Nil case $Nil */
      ASSERT(sink__V808->context, !strcmp(SYMBOL(term__V809),  "Concat" ));
      Term sub__V812 = SUB(term__V809, 0); int sub__V812_count = term__V809_count*LINK_COUNT(sub__V812); permitUnusedInt(sub__V812_count);
      ASSERT(sink__V808->context, !strcmp(SYMBOL(sub__V812),  "$Nil" ));
      
      NamedPropertyLink namedP__V813 = LINK_NamedPropertyLink(sink__V808->context, NAMED_PROPERTIES(term__V809));
      VariablePropertyLink varP__V814 = LINK_VariablePropertyLink(sink__V808->context, VARIABLE_PROPERTIES(term__V809));
      UNLINK(sink__V808->context, term__V809);
      ADD_PROPERTIES(sink__V808, LINK_NamedPropertyLink(sink__V808->context, namedP__V813), LINK_VariablePropertyLink(sink__V808->context, varP__V814));
      { START(sink__V808, _M_Concat_s4);
        END(sink__V808, _M_Concat_s4); }
      UNLINK_NamedPropertyLink(sink__V808->context, namedP__V813); 
      UNLINK_VariablePropertyLink(sink__V808->context, varP__V814);
      
      return 1;
    break; } case Data_M__sCons: { /* Function DEFS-Concat-3$Concat$$Cons case $Cons */
      ASSERT(sink__V808->context, !strcmp(SYMBOL(term__V809),  "Concat" ));
      Term sub__V815 = SUB(term__V809, 0); int sub__V815_count = term__V809_count*LINK_COUNT(sub__V815); permitUnusedInt(sub__V815_count);
      ASSERT(sink__V808->context, !strcmp(SYMBOL(sub__V815),  "$Cons" ));
      Term sub__V816 = LINK(sink__V808->context, SUB(sub__V815, 0)); int sub__V816_count = sub__V815_count*LINK_COUNT(sub__V816); permitUnusedInt(sub__V816_count);
      /* sub__V816 = &#0-0 */
      Term sub__V817 = LINK(sink__V808->context, SUB(sub__V815, 1)); int sub__V817_count = sub__V815_count*LINK_COUNT(sub__V817); permitUnusedInt(sub__V817_count);
      /* sub__V817 = &#0-1 */
      
      NamedPropertyLink namedP__V818 = LINK_NamedPropertyLink(sink__V808->context, NAMED_PROPERTIES(term__V809));
      VariablePropertyLink varP__V819 = LINK_VariablePropertyLink(sink__V808->context, VARIABLE_PROPERTIES(term__V809));
      UNLINK(sink__V808->context, term__V809);
      ADD_PROPERTIES(sink__V808, LINK_NamedPropertyLink(sink__V808->context, namedP__V818), LINK_VariablePropertyLink(sink__V808->context, varP__V819));
      { START(sink__V808, _M_Concat_s1);
        COPY(sink__V808, sub__V816);COPY(sink__V808, sub__V817);END(sink__V808, _M_Concat_s1); }
      UNLINK_NamedPropertyLink(sink__V808->context, namedP__V818); 
      UNLINK_VariablePropertyLink(sink__V808->context, varP__V819);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION Map$1. */
int conBindOffs_M_Map_s1[] = {0 , 0 , 1};
char *nameFun_M_Map_s1(Term term) { return  "Map$1" ; }
struct _ConstructionDescriptor descriptor_M_Map_s1 = {NULL, 0, 2, sizeof(STRUCT_Con_M_Map_s1), conBindOffs_M_Map_s1, &nameFun_M_Map_s1, &step_M_Map_s1};

int step_M_Map_s1(Sink sink__V820, Term term__V821)
{
  int term__V821_count = LINK_COUNT(term__V821); permitUnusedInt(term__V821_count);
  Term sub__V822 = FORCE(sink__V820->context, SUB(term__V821, 0));
  EnumOf_M__sList choice__V823 = (IS_VARIABLE_USE(sub__V822) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V822));
  switch (choice__V823)
  {
    case Data_M__sNil: { /* Function DEFS-Map-1$Map$1$$Nil case $Nil */
      ASSERT(sink__V820->context, !strcmp(SYMBOL(term__V821),  "Map$1" ));
      Term sub__V824 = SUB(term__V821, 0); int sub__V824_count = term__V821_count*LINK_COUNT(sub__V824); permitUnusedInt(sub__V824_count);
      ASSERT(sink__V820->context, !strcmp(SYMBOL(sub__V824),  "$Nil" ));
      Variable x__V825 = linkVariable(sink__V820->context, BINDER(term__V821,1,0)); if (term__V821_count <= 1) UNBIND(x__V825);
      Term sub__V826 = LINK(sink__V820->context, SUB(term__V821, 1)); int sub__V826_count = term__V821_count*LINK_COUNT(sub__V826); permitUnusedInt(sub__V826_count);
      /* sub__V826 = &#0 */
      
      NamedPropertyLink namedP__V827 = LINK_NamedPropertyLink(sink__V820->context, NAMED_PROPERTIES(term__V821));
      VariablePropertyLink varP__V828 = LINK_VariablePropertyLink(sink__V820->context, VARIABLE_PROPERTIES(term__V821));
      UNLINK(sink__V820->context, term__V821);
      ADD_PROPERTIES(sink__V820, LINK_NamedPropertyLink(sink__V820->context, namedP__V827), LINK_VariablePropertyLink(sink__V820->context, varP__V828));
      { START(sink__V820, _M_Map_s3);
        { if (!IS_BOUND(x__V825)) { REBIND(linkVariable(sink__V820->context, x__V825));
            Variable binds__V829[1] = {x__V825}; BINDS(sink__V820, 1, binds__V829);
            COPY(sink__V820, sub__V826); /* REUSED SUBSTITUTION */  }
          else { Variable b__V830 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V820->context,"b__V830");
            Variable binds__V831[1] = {b__V830}; BINDS(sink__V820, 1, binds__V831);
            {
              Term arg__V832;
              { Sink buf__V833 = ALLOCA_BUFFER(sink__V820->context);
                USE(buf__V833, linkVariable(buf__V833->context, b__V830));
                arg__V832 = BUFFER_TERM(buf__V833); FREE_BUFFER(buf__V833); }
              Variable vars__V834[1] = {x__V825};
              Term args__V835[1] = {arg__V832};
              struct _SubstitutionFrame substitution__V836 = {NULL, 0, 1, vars__V834, args__V835};
              SUBSTITUTE(sink__V820, sub__V826, &substitution__V836); }
                }
           }
        END(sink__V820, _M_Map_s3); }
      UNLINK_NamedPropertyLink(sink__V820->context, namedP__V827); 
      UNLINK_VariablePropertyLink(sink__V820->context, varP__V828); unlinkVariable(sink__V820->context, x__V825);
      
      return 1;
    break; } case Data_M__sCons: { /* Function DEFS-Map-2$Map$1$$Cons case $Cons */
      ASSERT(sink__V820->context, !strcmp(SYMBOL(term__V821),  "Map$1" ));
      Term sub__V837 = SUB(term__V821, 0); int sub__V837_count = term__V821_count*LINK_COUNT(sub__V837); permitUnusedInt(sub__V837_count);
      ASSERT(sink__V820->context, !strcmp(SYMBOL(sub__V837),  "$Cons" ));
      Term sub__V838 = LINK(sink__V820->context, SUB(sub__V837, 0)); int sub__V838_count = sub__V837_count*LINK_COUNT(sub__V838); permitUnusedInt(sub__V838_count);
      /* sub__V838 = &#0-0 */
      Term sub__V839 = LINK(sink__V820->context, SUB(sub__V837, 1)); int sub__V839_count = sub__V837_count*LINK_COUNT(sub__V839); permitUnusedInt(sub__V839_count);
      /* sub__V839 = &#0-1 */
      Variable x__V840 = linkVariable(sink__V820->context, BINDER(term__V821,1,0)); if (term__V821_count <= 1) UNBIND(x__V840);
      Term sub__V841 = LINK(sink__V820->context, SUB(term__V821, 1)); int sub__V841_count = term__V821_count*LINK_COUNT(sub__V841); permitUnusedInt(sub__V841_count);
      /* sub__V841 = &#2 */
      
      NamedPropertyLink namedP__V842 = LINK_NamedPropertyLink(sink__V820->context, NAMED_PROPERTIES(term__V821));
      VariablePropertyLink varP__V843 = LINK_VariablePropertyLink(sink__V820->context, VARIABLE_PROPERTIES(term__V821));
      UNLINK(sink__V820->context, term__V821);
      ADD_PROPERTIES(sink__V820, LINK_NamedPropertyLink(sink__V820->context, namedP__V842), LINK_VariablePropertyLink(sink__V820->context, varP__V843));
      { START(sink__V820, _M_Map_s2);
        COPY(sink__V820, sub__V838);COPY(sink__V820, sub__V839);{ if (!IS_BOUND(x__V840)) { REBIND(linkVariable(sink__V820->context, x__V840));
            Variable binds__V844[1] = {x__V840}; BINDS(sink__V820, 1, binds__V844);
            COPY(sink__V820, sub__V841); /* REUSED SUBSTITUTION */  }
          else { Variable b__V845 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V820->context,"b__V845");
            Variable binds__V846[1] = {b__V845}; BINDS(sink__V820, 1, binds__V846);
            {
              Term arg__V847;
              { Sink buf__V848 = ALLOCA_BUFFER(sink__V820->context);
                USE(buf__V848, linkVariable(buf__V848->context, b__V845));
                arg__V847 = BUFFER_TERM(buf__V848); FREE_BUFFER(buf__V848); }
              Variable vars__V849[1] = {x__V840};
              Term args__V850[1] = {arg__V847};
              struct _SubstitutionFrame substitution__V851 = {NULL, 0, 1, vars__V849, args__V850};
              SUBSTITUTE(sink__V820, sub__V841, &substitution__V851); }
                }
           }
        END(sink__V820, _M_Map_s2); }
      UNLINK_NamedPropertyLink(sink__V820->context, namedP__V842); 
      UNLINK_VariablePropertyLink(sink__V820->context, varP__V843); unlinkVariable(sink__V820->context, x__V840);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION Map$3. */
int conBindOffs_M_Map_s3[] = {0 , 1};
char *nameFun_M_Map_s3(Term term) { return  "Map$3" ; }
struct _ConstructionDescriptor descriptor_M_Map_s3 = {NULL, 0, 1, sizeof(STRUCT_Con_M_Map_s3), conBindOffs_M_Map_s3, &nameFun_M_Map_s3, &step_M_Map_s3};

int step_M_Map_s3(Sink sink__V852, Term term__V853)
{
  int term__V853_count = LINK_COUNT(term__V853); permitUnusedInt(term__V853_count);
  do {
    /* Contraction rule DEFS-Map-1. */
    ASSERT(sink__V852->context, !strcmp(SYMBOL(term__V853),  "Map$3" ));
    Variable x__V854 = linkVariable(sink__V852->context, BINDER(term__V853,0,0)); if (term__V853_count <= 1) UNBIND(x__V854);
    Term sub__V855 = SUB(term__V853, 0); int sub__V855_count = term__V853_count*LINK_COUNT(sub__V855); permitUnusedInt(sub__V855_count);
    /* sub__V855 = &#1 */
    UNLINK(sink__V852->context, term__V853);
    { START(sink__V852, _M__sNil); END(sink__V852, _M__sNil); }  unlinkVariable(sink__V852->context, x__V854);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Map$2. */
int conBindOffs_M_Map_s2[] = {0 , 0 , 0 , 1};
char *nameFun_M_Map_s2(Term term) { return  "Map$2" ; }
struct _ConstructionDescriptor descriptor_M_Map_s2 = {NULL, 0, 3, sizeof(STRUCT_Con_M_Map_s2), conBindOffs_M_Map_s2, &nameFun_M_Map_s2, &step_M_Map_s2};

int step_M_Map_s2(Sink sink__V856, Term term__V857)
{
  int term__V857_count = LINK_COUNT(term__V857); permitUnusedInt(term__V857_count);
  do {
    /* Contraction rule DEFS-Map-2. */
    ASSERT(sink__V856->context, !strcmp(SYMBOL(term__V857),  "Map$2" ));
    Term sub__V858 = LINK(sink__V856->context, SUB(term__V857, 0)); int sub__V858_count = term__V857_count*LINK_COUNT(sub__V858); permitUnusedInt(sub__V858_count);
    /* sub__V858 = &#21 */
    Term sub__V859 = LINK(sink__V856->context, SUB(term__V857, 1)); int sub__V859_count = term__V857_count*LINK_COUNT(sub__V859); permitUnusedInt(sub__V859_count);
    /* sub__V859 = &#22 */
    Variable x__V860 = linkVariable(sink__V856->context, BINDER(term__V857,2,0)); if (term__V857_count <= 1) UNBIND(x__V860);
    Term sub__V861 = LINK(sink__V856->context, SUB(term__V857, 2)); int sub__V861_count = term__V857_count*LINK_COUNT(sub__V861); permitUnusedInt(sub__V861_count);
    /* sub__V861 = &#1 */
    UNLINK(sink__V856->context, term__V857);
    { START(sink__V856, _M__sCons);
      {
        Term arg__V862;
        { Sink buf__V863 = ALLOCA_BUFFER(sink__V856->context);
          COPY(buf__V863, sub__V858);arg__V862 = BUFFER_TERM(buf__V863); FREE_BUFFER(buf__V863); }
        Variable vars__V864[1] = {x__V860};
        Term args__V865[1] = {arg__V862};
        struct _SubstitutionFrame substitution__V866 = {NULL, 0, 1, vars__V864, args__V865};
        SUBSTITUTE(sink__V856, LINK(sink__V856->context,sub__V861), &substitution__V866); }
      { START(sink__V856, _M_Map_s1);
        COPY(sink__V856, sub__V859);{ if (!IS_BOUND(x__V860)) { REBIND(linkVariable(sink__V856->context, x__V860));
            Variable binds__V867[1] = {x__V860}; BINDS(sink__V856, 1, binds__V867);
            COPY(sink__V856, sub__V861); /* REUSED SUBSTITUTION */  }
          else { Variable b__V868 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V856->context,"b__V868");
            Variable binds__V869[1] = {b__V868}; BINDS(sink__V856, 1, binds__V869);
            {
              Term arg__V870;
              { Sink buf__V871 = ALLOCA_BUFFER(sink__V856->context);
                USE(buf__V871, linkVariable(buf__V871->context, b__V868));
                arg__V870 = BUFFER_TERM(buf__V871); FREE_BUFFER(buf__V871); }
              Variable vars__V872[1] = {x__V860};
              Term args__V873[1] = {arg__V870};
              struct _SubstitutionFrame substitution__V874 = {NULL, 0, 1, vars__V872, args__V873};
              SUBSTITUTE(sink__V856, sub__V861, &substitution__V874); }
                }
           }
        END(sink__V856, _M_Map_s1); }
      END(sink__V856, _M__sCons); }
     unlinkVariable(sink__V856->context, x__V860);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION DTOKEN. */
int conBindOffs_M_DTOKEN[] = {0 , 0 , 0};
char *nameFun_M_DTOKEN(Term term) { return  "DTOKEN" ; }
struct _ConstructionDescriptor descriptor_M_DTOKEN = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_DTOKEN), conBindOffs_M_DTOKEN, &nameFun_M_DTOKEN, &step_M_DTOKEN};

int step_M_DTOKEN(Sink sink__V875, Term term__V876)
{
  int term__V876_count = LINK_COUNT(term__V876); permitUnusedInt(term__V876_count);
  Term sub__V877 = FORCE(sink__V875->context, SUB(term__V876, 0));
  EnumOf_M_OK_xSORT choice__V878 = (IS_VARIABLE_USE(sub__V877) ? VarOf_M_OK_xSORT : (EnumOf_M_OK_xSORT) TAG(sub__V877));
  switch (choice__V878)
  {
    case Data_M_OK: { /* Function DEFS-DTOKEN-1$DTOKEN$OK case OK */
      ASSERT(sink__V875->context, !strcmp(SYMBOL(term__V876),  "DTOKEN" ));
      Term sub__V879 = SUB(term__V876, 0); int sub__V879_count = term__V876_count*LINK_COUNT(sub__V879); permitUnusedInt(sub__V879_count);
      CRSX_CHECK_SORT(sink__V875->context, sub__V879, &sort_M_OK_xSORT); ASSERT(sink__V875->context, !strcmp(SYMBOL(sub__V879),  "OK" ));
      Term sub__V880 = LINK(sink__V875->context, SUB(term__V876, 1)); int sub__V880_count = term__V876_count*LINK_COUNT(sub__V880); permitUnusedInt(sub__V880_count);
      /* sub__V880 = &#0 */
      
      NamedPropertyLink namedP__V881 = LINK_NamedPropertyLink(sink__V875->context, NAMED_PROPERTIES(term__V876));
      VariablePropertyLink varP__V882 = LINK_VariablePropertyLink(sink__V875->context, VARIABLE_PROPERTIES(term__V876));
      UNLINK(sink__V875->context, term__V876);
      ADD_PROPERTIES(sink__V875, LINK_NamedPropertyLink(sink__V875->context, namedP__V881), LINK_VariablePropertyLink(sink__V875->context, varP__V882));
      { START(sink__V875, _M_DTOKEN_s1);
        COPY(sink__V875, sub__V880);END(sink__V875, _M_DTOKEN_s1); }
      UNLINK_NamedPropertyLink(sink__V875->context, namedP__V881); 
      UNLINK_VariablePropertyLink(sink__V875->context, varP__V882);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION EnumTag. */
int conBindOffs_M_EnumTag[] = {0 , 0};
char *nameFun_M_EnumTag(Term term) { return  "EnumTag" ; }
struct _ConstructionDescriptor descriptor_M_EnumTag = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_EnumTag), conBindOffs_M_EnumTag, &nameFun_M_EnumTag, &step_M_EnumTag};

int step_M_EnumTag(Sink sink__V883, Term term__V884)
{
  int term__V884_count = LINK_COUNT(term__V884); permitUnusedInt(term__V884_count);
  do {
    /* Contraction rule DEFS-EnumTag-1. */
    ASSERT(sink__V883->context, !strcmp(SYMBOL(term__V884),  "EnumTag" ));
    Term sub__V885 = LINK(sink__V883->context, SUB(term__V884, 0)); int sub__V885_count = term__V884_count*LINK_COUNT(sub__V885); permitUnusedInt(sub__V885_count);
    /* sub__V885 = &#1 */
    
    NamedPropertyLink namedP__V886 = LINK_NamedPropertyLink(sink__V883->context, NAMED_PROPERTIES(term__V884));
    VariablePropertyLink varP__V887 = LINK_VariablePropertyLink(sink__V883->context, VARIABLE_PROPERTIES(term__V884));
    UNLINK(sink__V883->context, term__V884);
    { START(sink__V883, _M__sTextCons);
      { START(sink__V883, _M__sTextChars);
        LITERAL(sink__V883,  "Data" ); END(sink__V883, _M__sTextChars); }
      { START(sink__V883, _M__sTextCons);
        { START(sink__V883, _M__sTextEmbed);
          { START(sink__V883, _M_AsText);
            { START(sink__V883, _M_MANGLE);
              COPY(sink__V883, sub__V885);END(sink__V883, _M_MANGLE); }
            END(sink__V883, _M_AsText); }
          END(sink__V883, _M__sTextEmbed); }
        { START(sink__V883, _M__sTextNil);
          END(sink__V883, _M__sTextNil); }
        END(sink__V883, _M__sTextCons); }
      END(sink__V883, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V883->context, namedP__V886); 
    UNLINK_VariablePropertyLink(sink__V883->context, varP__V887);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Struct. */
int conBindOffs_M_Struct[] = {0 , 0};
char *nameFun_M_Struct(Term term) { return  "Struct" ; }
struct _ConstructionDescriptor descriptor_M_Struct = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Struct), conBindOffs_M_Struct, &nameFun_M_Struct, &step_M_Struct};

int step_M_Struct(Sink sink__V888, Term term__V889)
{
  int term__V889_count = LINK_COUNT(term__V889); permitUnusedInt(term__V889_count);
  do {
    /* Contraction rule DEFS-Struct-1. */
    ASSERT(sink__V888->context, !strcmp(SYMBOL(term__V889),  "Struct" ));
    Term sub__V890 = LINK(sink__V888->context, SUB(term__V889, 0)); int sub__V890_count = term__V889_count*LINK_COUNT(sub__V890); permitUnusedInt(sub__V890_count);
    /* sub__V890 = &#1 */
    
    NamedPropertyLink namedP__V891 = LINK_NamedPropertyLink(sink__V888->context, NAMED_PROPERTIES(term__V889));
    VariablePropertyLink varP__V892 = LINK_VariablePropertyLink(sink__V888->context, VARIABLE_PROPERTIES(term__V889));
    UNLINK(sink__V888->context, term__V889);
    { START(sink__V888, _M__sTextCons);
      { START(sink__V888, _M__sTextChars);
        LITERAL(sink__V888,  "_Con" ); END(sink__V888, _M__sTextChars); }
      { START(sink__V888, _M__sTextCons);
        { START(sink__V888, _M__sTextEmbed);
          { START(sink__V888, _M_AsText);
            { START(sink__V888, _M_MANGLE);
              COPY(sink__V888, sub__V890);END(sink__V888, _M_MANGLE); }
            END(sink__V888, _M_AsText); }
          END(sink__V888, _M__sTextEmbed); }
        { START(sink__V888, _M__sTextNil);
          END(sink__V888, _M__sTextNil); }
        END(sink__V888, _M__sTextCons); }
      END(sink__V888, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V888->context, namedP__V891); 
    UNLINK_VariablePropertyLink(sink__V888->context, varP__V892);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION BinderOffsets. */
int conBindOffs_M_BinderOffsets[] = {0 , 0};
char *nameFun_M_BinderOffsets(Term term) { return  "BinderOffsets" ; }
struct _ConstructionDescriptor descriptor_M_BinderOffsets = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_BinderOffsets), conBindOffs_M_BinderOffsets, &nameFun_M_BinderOffsets, &step_M_BinderOffsets};

int step_M_BinderOffsets(Sink sink__V893, Term term__V894)
{
  int term__V894_count = LINK_COUNT(term__V894); permitUnusedInt(term__V894_count);
  do {
    /* Contraction rule DEFS-BinderOffsets-1. */
    ASSERT(sink__V893->context, !strcmp(SYMBOL(term__V894),  "BinderOffsets" ));
    Term sub__V895 = LINK(sink__V893->context, SUB(term__V894, 0)); int sub__V895_count = term__V894_count*LINK_COUNT(sub__V895); permitUnusedInt(sub__V895_count);
    /* sub__V895 = &#1 */
    
    NamedPropertyLink namedP__V896 = LINK_NamedPropertyLink(sink__V893->context, NAMED_PROPERTIES(term__V894));
    VariablePropertyLink varP__V897 = LINK_VariablePropertyLink(sink__V893->context, VARIABLE_PROPERTIES(term__V894));
    UNLINK(sink__V893->context, term__V894);
    { START(sink__V893, _M__sTextCons);
      { START(sink__V893, _M__sTextChars);
        LITERAL(sink__V893,  "conBindOffs" ); END(sink__V893, _M__sTextChars); }
      { START(sink__V893, _M__sTextCons);
        { START(sink__V893, _M__sTextEmbed);
          { START(sink__V893, _M_AsText);
            { START(sink__V893, _M_MANGLE);
              COPY(sink__V893, sub__V895);END(sink__V893, _M_MANGLE); }
            END(sink__V893, _M_AsText); }
          END(sink__V893, _M__sTextEmbed); }
        { START(sink__V893, _M__sTextNil);
          END(sink__V893, _M__sTextNil); }
        END(sink__V893, _M__sTextCons); }
      END(sink__V893, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V893->context, namedP__V896); 
    UNLINK_VariablePropertyLink(sink__V893->context, varP__V897);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION FormArguments-binder-offsets$4. */
int conBindOffs_M_FormArguments__binder__offsets_s4[] = {0 , 0};
char *nameFun_M_FormArguments__binder__offsets_s4(Term term) { return  "FormArguments-binder-offsets$4" ; }
struct _ConstructionDescriptor descriptor_M_FormArguments__binder__offsets_s4 = {NULL, 0, 1, sizeof(STRUCT_Con_M_FormArguments__binder__offsets_s4), conBindOffs_M_FormArguments__binder__offsets_s4, &nameFun_M_FormArguments__binder__offsets_s4, &step_M_FormArguments__binder__offsets_s4};

int step_M_FormArguments__binder__offsets_s4(Sink sink__V898, Term term__V899)
{
  int term__V899_count = LINK_COUNT(term__V899); permitUnusedInt(term__V899_count);
  do {
    /* Contraction rule DEFS-FormArguments-binder-offsets-3. */
    ASSERT(sink__V898->context, !strcmp(SYMBOL(term__V899),  "FormArguments-binder-offsets$4" ));
    Term sub__V900 = SUB(term__V899, 0); int sub__V900_count = term__V899_count*LINK_COUNT(sub__V900); permitUnusedInt(sub__V900_count);
    /* sub__V900 = &#2 */
    UNLINK(sink__V898->context, term__V899);
    { START(sink__V898, _M__sNil); END(sink__V898, _M__sNil); } 
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION FormArguments-binder-offsets$1. */
int conBindOffs_M_FormArguments__binder__offsets_s1[] = {0 , 0 , 0 , 0};
char *nameFun_M_FormArguments__binder__offsets_s1(Term term) { return  "FormArguments-binder-offsets$1" ; }
struct _ConstructionDescriptor descriptor_M_FormArguments__binder__offsets_s1 = {NULL, 0, 3, sizeof(STRUCT_Con_M_FormArguments__binder__offsets_s1), conBindOffs_M_FormArguments__binder__offsets_s1, &nameFun_M_FormArguments__binder__offsets_s1, &step_M_FormArguments__binder__offsets_s1};

int step_M_FormArguments__binder__offsets_s1(Sink sink__V901, Term term__V902)
{
  int term__V902_count = LINK_COUNT(term__V902); permitUnusedInt(term__V902_count);
  do {
    /* Contraction rule DEFS-FormArguments-binder-offsets-1$FormArguments-binder-offsets$1$FORM-BINDER. */
    ASSERT(sink__V901->context, !strcmp(SYMBOL(term__V902),  "FormArguments-binder-offsets$1" ));
    Term sub__V903 = SUB(term__V902, 0); int sub__V903_count = term__V902_count*LINK_COUNT(sub__V903); permitUnusedInt(sub__V903_count);
    FORCE(sink__V901->context, sub__V903); SUB(term__V902, 0) = sub__V903;
    if (strcmp(SYMBOL(sub__V903),  "FORM-BINDER" )) { break;}
    Term sub__V904 = LINK(sink__V901->context, SUB(sub__V903, 0)); int sub__V904_count = sub__V903_count*LINK_COUNT(sub__V904); permitUnusedInt(sub__V904_count);
    CRSX_CHECK_SORT(sink__V901->context, sub__V904, &sort_M_Reified_xKind); /* sub__V904 = &#0-0 */
    Term sub__V905 = LINK(sink__V901->context, SUB(sub__V903, 1)); int sub__V905_count = sub__V903_count*LINK_COUNT(sub__V905); permitUnusedInt(sub__V905_count);
    CRSX_CHECK_SORT(sink__V901->context, sub__V905, &sort_M_Reified_xSort); /* sub__V905 = &#0-1 */
    Variable y__V906 = linkVariable(sink__V901->context, BINDER(sub__V903,2,0)); if (sub__V903_count <= 1) UNBIND(y__V906);
    Term sub__V907 = LINK(sink__V901->context, SUB(sub__V903, 2)); int sub__V907_count = sub__V903_count*LINK_COUNT(sub__V907); permitUnusedInt(sub__V907_count);
    CRSX_CHECK_SORT(sink__V901->context, sub__V907, &sort_M_Reified_xFormArgument); /* sub__V907 = &#0-2 */
    Term sub__V908 = LINK(sink__V901->context, SUB(term__V902, 1)); int sub__V908_count = term__V902_count*LINK_COUNT(sub__V908); permitUnusedInt(sub__V908_count);
    /* sub__V908 = &#3 */
    Term sub__V909 = LINK(sink__V901->context, SUB(term__V902, 2)); int sub__V909_count = term__V902_count*LINK_COUNT(sub__V909); permitUnusedInt(sub__V909_count);
    /* sub__V909 = &#4 */
    
    NamedPropertyLink namedP__V910 = LINK_NamedPropertyLink(sink__V901->context, NAMED_PROPERTIES(term__V902));
    VariablePropertyLink varP__V911 = LINK_VariablePropertyLink(sink__V901->context, VARIABLE_PROPERTIES(term__V902));
    UNLINK(sink__V901->context, term__V902);
    ADD_PROPERTIES(sink__V901, LINK_NamedPropertyLink(sink__V901->context, namedP__V910), LINK_VariablePropertyLink(sink__V901->context, varP__V911));
    { START(sink__V901, _M_FormArguments__binder__offsets_s3);
      COPY(sink__V901, sub__V904);COPY(sink__V901, sub__V905);{ if (!IS_BOUND(y__V906)) { REBIND(linkVariable(sink__V901->context, y__V906));
          Variable binds__V912[1] = {y__V906}; BINDS(sink__V901, 1, binds__V912);
          COPY(sink__V901, sub__V907); /* REUSED SUBSTITUTION */  }
        else { Variable b__V913 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V901->context,"b__V913");
          Variable binds__V914[1] = {b__V913}; BINDS(sink__V901, 1, binds__V914);
          {
            Term arg__V915;
            { Sink buf__V916 = ALLOCA_BUFFER(sink__V901->context);
              USE(buf__V916, linkVariable(buf__V916->context, b__V913));
              arg__V915 = BUFFER_TERM(buf__V916); FREE_BUFFER(buf__V916); }
            Variable vars__V917[1] = {y__V906};
            Term args__V918[1] = {arg__V915};
            struct _SubstitutionFrame substitution__V919 = {NULL, 0, 1, vars__V917, args__V918};
            SUBSTITUTE(sink__V901, sub__V907, &substitution__V919); }
              }
         }
      COPY(sink__V901, sub__V908);COPY(sink__V901, sub__V909);END(sink__V901, _M_FormArguments__binder__offsets_s3); }
    UNLINK_NamedPropertyLink(sink__V901->context, namedP__V910); 
    UNLINK_VariablePropertyLink(sink__V901->context, varP__V911); unlinkVariable(sink__V901->context, y__V906);
    
    return 1;
  } while (0);
  do {
    /* Contraction rule DEFS-FormArguments-binder-offsets-2$FormArguments-binder-offsets$1$FORM-ARGUMENT. */
    ASSERT(sink__V901->context, !strcmp(SYMBOL(term__V902),  "FormArguments-binder-offsets$1" ));
    Term sub__V920 = SUB(term__V902, 0); int sub__V920_count = term__V902_count*LINK_COUNT(sub__V920); permitUnusedInt(sub__V920_count);
    FORCE(sink__V901->context, sub__V920); SUB(term__V902, 0) = sub__V920;
    if (strcmp(SYMBOL(sub__V920),  "FORM-ARGUMENT" )) { break;}
    Term sub__V921 = LINK(sink__V901->context, SUB(sub__V920, 0)); int sub__V921_count = sub__V920_count*LINK_COUNT(sub__V921); permitUnusedInt(sub__V921_count);
    CRSX_CHECK_SORT(sink__V901->context, sub__V921, &sort_M_Reified_xSort); /* sub__V921 = &#0-0 */
    Term sub__V922 = LINK(sink__V901->context, SUB(term__V902, 1)); int sub__V922_count = term__V902_count*LINK_COUNT(sub__V922); permitUnusedInt(sub__V922_count);
    /* sub__V922 = &#1 */
    Term sub__V923 = LINK(sink__V901->context, SUB(term__V902, 2)); int sub__V923_count = term__V902_count*LINK_COUNT(sub__V923); permitUnusedInt(sub__V923_count);
    /* sub__V923 = &#2 */
    
    NamedPropertyLink namedP__V924 = LINK_NamedPropertyLink(sink__V901->context, NAMED_PROPERTIES(term__V902));
    VariablePropertyLink varP__V925 = LINK_VariablePropertyLink(sink__V901->context, VARIABLE_PROPERTIES(term__V902));
    UNLINK(sink__V901->context, term__V902);
    ADD_PROPERTIES(sink__V901, LINK_NamedPropertyLink(sink__V901->context, namedP__V924), LINK_VariablePropertyLink(sink__V901->context, varP__V925));
    { START(sink__V901, _M_FormArguments__binder__offsets_s2);
      COPY(sink__V901, sub__V921);COPY(sink__V901, sub__V922);COPY(sink__V901, sub__V923);END(sink__V901, _M_FormArguments__binder__offsets_s2); }
    UNLINK_NamedPropertyLink(sink__V901->context, namedP__V924); 
    UNLINK_VariablePropertyLink(sink__V901->context, varP__V925);
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION FormArguments-binder-offsets$3. */
int conBindOffs_M_FormArguments__binder__offsets_s3[] = {0 , 0 , 0 , 1 , 1 , 1};
char *nameFun_M_FormArguments__binder__offsets_s3(Term term) { return  "FormArguments-binder-offsets$3" ; }
struct _ConstructionDescriptor descriptor_M_FormArguments__binder__offsets_s3 = {NULL, 0, 5, sizeof(STRUCT_Con_M_FormArguments__binder__offsets_s3), conBindOffs_M_FormArguments__binder__offsets_s3, &nameFun_M_FormArguments__binder__offsets_s3, &step_M_FormArguments__binder__offsets_s3};

int step_M_FormArguments__binder__offsets_s3(Sink sink__V926, Term term__V927)
{
  int term__V927_count = LINK_COUNT(term__V927); permitUnusedInt(term__V927_count);
  do {
    /* Contraction rule DEFS-FormArguments-binder-offsets-1. */
    ASSERT(sink__V926->context, !strcmp(SYMBOL(term__V927),  "FormArguments-binder-offsets$3" ));
    Term sub__V928 = SUB(term__V927, 0); int sub__V928_count = term__V927_count*LINK_COUNT(sub__V928); permitUnusedInt(sub__V928_count);
    CRSX_CHECK_SORT(sink__V926->context, sub__V928, &sort_M_Reified_xKind); /* sub__V928 = &#111 */
    Term sub__V929 = SUB(term__V927, 1); int sub__V929_count = term__V927_count*LINK_COUNT(sub__V929); permitUnusedInt(sub__V929_count);
    CRSX_CHECK_SORT(sink__V926->context, sub__V929, &sort_M_Reified_xSort); /* sub__V929 = &#112 */
    Variable x__V930 = linkVariable(sink__V926->context, BINDER(term__V927,2,0)); if (term__V927_count <= 1) UNBIND(x__V930);
    Term sub__V931 = LINK(sink__V926->context, SUB(term__V927, 2)); int sub__V931_count = term__V927_count*LINK_COUNT(sub__V931); permitUnusedInt(sub__V931_count);
    CRSX_CHECK_SORT(sink__V926->context, sub__V931, &sort_M_Reified_xFormArgument); /* sub__V931 = &#113 */
    Variable y__V932 = x__V930; permitUnusedVariable(y__V932);
    Term sub__V933 = LINK(sink__V926->context, SUB(term__V927, 3)); int sub__V933_count = term__V927_count*LINK_COUNT(sub__V933); permitUnusedInt(sub__V933_count);
    /* sub__V933 = &#12 */
    Term sub__V934 = LINK(sink__V926->context, SUB(term__V927, 4)); int sub__V934_count = term__V927_count*LINK_COUNT(sub__V934); permitUnusedInt(sub__V934_count);
    /* sub__V934 = &#2 */
    UNLINK(sink__V926->context, term__V927);
    { START(sink__V926, _M_FormArguments__binder__offsets);
      { START(sink__V926, _M__sCons);
        COPY(sink__V926, sub__V931); /* REUSED SUBSTITUTION */ COPY(sink__V926, sub__V933);END(sink__V926, _M__sCons); }
      
      {
        double num__V935;num__V935 = (double) 1;  
        {
          double tmp__V936;tmp__V936 = DOUBLE(sub__V934); UNLINK(sink__V926->context, sub__V934); 
          num__V935 += tmp__V936;
        }
        LITERALNF(sink__V926, (size_t) 31, "%G", num__V935);
      }END(sink__V926, _M_FormArguments__binder__offsets); }
     unlinkVariable(sink__V926->context, x__V930);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION FormArguments-binder-offsets$2. */
int conBindOffs_M_FormArguments__binder__offsets_s2[] = {0 , 0 , 0 , 0};
char *nameFun_M_FormArguments__binder__offsets_s2(Term term) { return  "FormArguments-binder-offsets$2" ; }
struct _ConstructionDescriptor descriptor_M_FormArguments__binder__offsets_s2 = {NULL, 0, 3, sizeof(STRUCT_Con_M_FormArguments__binder__offsets_s2), conBindOffs_M_FormArguments__binder__offsets_s2, &nameFun_M_FormArguments__binder__offsets_s2, &step_M_FormArguments__binder__offsets_s2};

int step_M_FormArguments__binder__offsets_s2(Sink sink__V937, Term term__V938)
{
  int term__V938_count = LINK_COUNT(term__V938); permitUnusedInt(term__V938_count);
  do {
    /* Contraction rule DEFS-FormArguments-binder-offsets-2. */
    ASSERT(sink__V937->context, !strcmp(SYMBOL(term__V938),  "FormArguments-binder-offsets$2" ));
    Term sub__V939 = SUB(term__V938, 0); int sub__V939_count = term__V938_count*LINK_COUNT(sub__V939); permitUnusedInt(sub__V939_count);
    CRSX_CHECK_SORT(sink__V937->context, sub__V939, &sort_M_Reified_xSort); /* sub__V939 = &#111 */
    Term sub__V940 = LINK(sink__V937->context, SUB(term__V938, 1)); int sub__V940_count = term__V938_count*LINK_COUNT(sub__V940); permitUnusedInt(sub__V940_count);
    /* sub__V940 = &#12 */
    Term sub__V941 = LINK(sink__V937->context, SUB(term__V938, 2)); int sub__V941_count = term__V938_count*LINK_COUNT(sub__V941); permitUnusedInt(sub__V941_count);
    /* sub__V941 = &#2 */
    UNLINK(sink__V937->context, term__V938);
    { START(sink__V937, _M__sCons);
      COPY(sink__V937, LINK(sink__V937->context, sub__V941));{ START(sink__V937, _M_FormArguments__binder__offsets);
        COPY(sink__V937, sub__V940);COPY(sink__V937, sub__V941);END(sink__V937, _M_FormArguments__binder__offsets); }
      END(sink__V937, _M__sCons); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Var. */
int conBindOffs_M_Var[] = {0 , 0};
char *nameFun_M_Var(Term term) { return  "Var" ; }
struct _ConstructionDescriptor descriptor_M_Var = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Var), conBindOffs_M_Var, &nameFun_M_Var, &step_M_Var};

int step_M_Var(Sink sink__V942, Term term__V943)
{
  int term__V943_count = LINK_COUNT(term__V943); permitUnusedInt(term__V943_count);
  do {
    /* Contraction rule DEFS-Var-1. */
    ASSERT(sink__V942->context, !strcmp(SYMBOL(term__V943),  "Var" ));
    Term sub__V944 = LINK(sink__V942->context, SUB(term__V943, 0)); int sub__V944_count = term__V943_count*LINK_COUNT(sub__V944); permitUnusedInt(sub__V944_count);
    /* sub__V944 = &#1 */
    
    NamedPropertyLink namedP__V945 = LINK_NamedPropertyLink(sink__V942->context, NAMED_PROPERTIES(term__V943));
    VariablePropertyLink varP__V946 = LINK_VariablePropertyLink(sink__V942->context, VARIABLE_PROPERTIES(term__V943));
    UNLINK(sink__V942->context, term__V943);
    { START(sink__V942, _M__sTextCons);
      { START(sink__V942, _M__sTextChars);
        LITERAL(sink__V942,  "v" ); END(sink__V942, _M__sTextChars); }
      { START(sink__V942, _M__sTextCons);
        { START(sink__V942, _M__sTextEmbed);
          { START(sink__V942, _M_AsText);
            { START(sink__V942, _M_MANGLE);
              COPY(sink__V942, sub__V944);END(sink__V942, _M_MANGLE); }
            END(sink__V942, _M_AsText); }
          END(sink__V942, _M__sTextEmbed); }
        { START(sink__V942, _M__sTextNil);
          END(sink__V942, _M__sTextNil); }
        END(sink__V942, _M__sTextCons); }
      END(sink__V942, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V942->context, namedP__V945); 
    UNLINK_VariablePropertyLink(sink__V942->context, varP__V946);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Enum. */
int conBindOffs_M_Enum[] = {0 , 0};
char *nameFun_M_Enum(Term term) { return  "Enum" ; }
struct _ConstructionDescriptor descriptor_M_Enum = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Enum), conBindOffs_M_Enum, &nameFun_M_Enum, &step_M_Enum};

int step_M_Enum(Sink sink__V947, Term term__V948)
{
  int term__V948_count = LINK_COUNT(term__V948); permitUnusedInt(term__V948_count);
  do {
    /* Contraction rule DEFS-Enum-1. */
    ASSERT(sink__V947->context, !strcmp(SYMBOL(term__V948),  "Enum" ));
    Term sub__V949 = LINK(sink__V947->context, SUB(term__V948, 0)); int sub__V949_count = term__V948_count*LINK_COUNT(sub__V949); permitUnusedInt(sub__V949_count);
    /* sub__V949 = &#1 */
    
    NamedPropertyLink namedP__V950 = LINK_NamedPropertyLink(sink__V947->context, NAMED_PROPERTIES(term__V948));
    VariablePropertyLink varP__V951 = LINK_VariablePropertyLink(sink__V947->context, VARIABLE_PROPERTIES(term__V948));
    UNLINK(sink__V947->context, term__V948);
    { START(sink__V947, _M__sTextCons);
      { START(sink__V947, _M__sTextChars);
        LITERAL(sink__V947,  "EnumOf" ); END(sink__V947, _M__sTextChars); }
      { START(sink__V947, _M__sTextCons);
        { START(sink__V947, _M__sTextEmbed);
          { START(sink__V947, _M_AsText);
            { START(sink__V947, _M_MANGLE);
              COPY(sink__V947, sub__V949);END(sink__V947, _M_MANGLE); }
            END(sink__V947, _M_AsText); }
          END(sink__V947, _M__sTextEmbed); }
        { START(sink__V947, _M__sTextNil);
          END(sink__V947, _M__sTextNil); }
        END(sink__V947, _M__sTextCons); }
      END(sink__V947, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V947->context, namedP__V950); 
    UNLINK_VariablePropertyLink(sink__V947->context, varP__V951);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION If. */
int conBindOffs_M_If[] = {0 , 0 , 0 , 0};
char *nameFun_M_If(Term term) { return  "If" ; }
struct _ConstructionDescriptor descriptor_M_If = {NULL, 0, 3, sizeof(STRUCT_Con_M_If), conBindOffs_M_If, &nameFun_M_If, &step_M_If};

int step_M_If(Sink sink__V952, Term term__V953)
{
  int term__V953_count = LINK_COUNT(term__V953); permitUnusedInt(term__V953_count);
  Term sub__V954 = FORCE(sink__V952->context, SUB(term__V953, 0));
  EnumOf_M__sBoolean choice__V955 = (IS_VARIABLE_USE(sub__V954) ? VarOf_M__sBoolean : (EnumOf_M__sBoolean) TAG(sub__V954));
  switch (choice__V955)
  {
    case Data_M__sTrue: { /* Function DEFS-If-1$If$$True case $True */
      ASSERT(sink__V952->context, !strcmp(SYMBOL(term__V953),  "If" ));
      Term sub__V956 = SUB(term__V953, 0); int sub__V956_count = term__V953_count*LINK_COUNT(sub__V956); permitUnusedInt(sub__V956_count);
      ASSERT(sink__V952->context, !strcmp(SYMBOL(sub__V956),  "$True" ));
      Term sub__V957 = LINK(sink__V952->context, SUB(term__V953, 1)); int sub__V957_count = term__V953_count*LINK_COUNT(sub__V957); permitUnusedInt(sub__V957_count);
      /* sub__V957 = &#0 */
      Term sub__V958 = LINK(sink__V952->context, SUB(term__V953, 2)); int sub__V958_count = term__V953_count*LINK_COUNT(sub__V958); permitUnusedInt(sub__V958_count);
      /* sub__V958 = &#1 */
      
      NamedPropertyLink namedP__V959 = LINK_NamedPropertyLink(sink__V952->context, NAMED_PROPERTIES(term__V953));
      VariablePropertyLink varP__V960 = LINK_VariablePropertyLink(sink__V952->context, VARIABLE_PROPERTIES(term__V953));
      UNLINK(sink__V952->context, term__V953);
      ADD_PROPERTIES(sink__V952, LINK_NamedPropertyLink(sink__V952->context, namedP__V959), LINK_VariablePropertyLink(sink__V952->context, varP__V960));
      { START(sink__V952, _M_If_s2);
        COPY(sink__V952, sub__V957);COPY(sink__V952, sub__V958);END(sink__V952, _M_If_s2); }
      UNLINK_NamedPropertyLink(sink__V952->context, namedP__V959); 
      UNLINK_VariablePropertyLink(sink__V952->context, varP__V960);
      
      return 1;
    break; } case Data_M__sFalse: { /* Function DEFS-If-2$If$$False case $False */
      ASSERT(sink__V952->context, !strcmp(SYMBOL(term__V953),  "If" ));
      Term sub__V961 = SUB(term__V953, 0); int sub__V961_count = term__V953_count*LINK_COUNT(sub__V961); permitUnusedInt(sub__V961_count);
      ASSERT(sink__V952->context, !strcmp(SYMBOL(sub__V961),  "$False" ));
      Term sub__V962 = LINK(sink__V952->context, SUB(term__V953, 1)); int sub__V962_count = term__V953_count*LINK_COUNT(sub__V962); permitUnusedInt(sub__V962_count);
      /* sub__V962 = &#0 */
      Term sub__V963 = LINK(sink__V952->context, SUB(term__V953, 2)); int sub__V963_count = term__V953_count*LINK_COUNT(sub__V963); permitUnusedInt(sub__V963_count);
      /* sub__V963 = &#1 */
      
      NamedPropertyLink namedP__V964 = LINK_NamedPropertyLink(sink__V952->context, NAMED_PROPERTIES(term__V953));
      VariablePropertyLink varP__V965 = LINK_VariablePropertyLink(sink__V952->context, VARIABLE_PROPERTIES(term__V953));
      UNLINK(sink__V952->context, term__V953);
      ADD_PROPERTIES(sink__V952, LINK_NamedPropertyLink(sink__V952->context, namedP__V964), LINK_VariablePropertyLink(sink__V952->context, varP__V965));
      { START(sink__V952, _M_If_s1);
        COPY(sink__V952, sub__V962);COPY(sink__V952, sub__V963);END(sink__V952, _M_If_s1); }
      UNLINK_NamedPropertyLink(sink__V952->context, namedP__V964); 
      UNLINK_VariablePropertyLink(sink__V952->context, varP__V965);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION ReverseConcatText. */
int conBindOffs_M_ReverseConcatText[] = {0 , 0 , 0};
char *nameFun_M_ReverseConcatText(Term term) { return  "ReverseConcatText" ; }
struct _ConstructionDescriptor descriptor_M_ReverseConcatText = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_ReverseConcatText), conBindOffs_M_ReverseConcatText, &nameFun_M_ReverseConcatText, &step_M_ReverseConcatText};

int step_M_ReverseConcatText(Sink sink__V966, Term term__V967)
{
  int term__V967_count = LINK_COUNT(term__V967); permitUnusedInt(term__V967_count);
  Term sub__V968 = FORCE(sink__V966->context, SUB(term__V967, 0));
  EnumOf_M__sList choice__V969 = (IS_VARIABLE_USE(sub__V968) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V968));
  switch (choice__V969)
  {
    case Data_M__sNil: { /* Function DEFS-ReverseConcatText-1$ReverseConcatText$$Nil case $Nil */
      ASSERT(sink__V966->context, !strcmp(SYMBOL(term__V967),  "ReverseConcatText" ));
      Term sub__V970 = SUB(term__V967, 0); int sub__V970_count = term__V967_count*LINK_COUNT(sub__V970); permitUnusedInt(sub__V970_count);
      ASSERT(sink__V966->context, !strcmp(SYMBOL(sub__V970),  "$Nil" ));
      Term sub__V971 = LINK(sink__V966->context, SUB(term__V967, 1)); int sub__V971_count = term__V967_count*LINK_COUNT(sub__V971); permitUnusedInt(sub__V971_count);
      CRSX_CHECK_SORT(sink__V966->context, sub__V971, &sort_M_Reified_xVariable); /* sub__V971 = &#0 */
      
      NamedPropertyLink namedP__V972 = LINK_NamedPropertyLink(sink__V966->context, NAMED_PROPERTIES(term__V967));
      VariablePropertyLink varP__V973 = LINK_VariablePropertyLink(sink__V966->context, VARIABLE_PROPERTIES(term__V967));
      UNLINK(sink__V966->context, term__V967);
      ADD_PROPERTIES(sink__V966, LINK_NamedPropertyLink(sink__V966->context, namedP__V972), LINK_VariablePropertyLink(sink__V966->context, varP__V973));
      { START(sink__V966, _M_ReverseConcatText_s2);
        COPY(sink__V966, sub__V971);END(sink__V966, _M_ReverseConcatText_s2); }
      UNLINK_NamedPropertyLink(sink__V966->context, namedP__V972); 
      UNLINK_VariablePropertyLink(sink__V966->context, varP__V973);
      
      return 1;
    break; } case Data_M__sCons: { /* Function DEFS-ReverseConcatText-2$ReverseConcatText$$Cons case $Cons */
      ASSERT(sink__V966->context, !strcmp(SYMBOL(term__V967),  "ReverseConcatText" ));
      Term sub__V974 = SUB(term__V967, 0); int sub__V974_count = term__V967_count*LINK_COUNT(sub__V974); permitUnusedInt(sub__V974_count);
      ASSERT(sink__V966->context, !strcmp(SYMBOL(sub__V974),  "$Cons" ));
      Term sub__V975 = LINK(sink__V966->context, SUB(sub__V974, 0)); int sub__V975_count = sub__V974_count*LINK_COUNT(sub__V975); permitUnusedInt(sub__V975_count);
      /* sub__V975 = &#0-0 */
      Term sub__V976 = LINK(sink__V966->context, SUB(sub__V974, 1)); int sub__V976_count = sub__V974_count*LINK_COUNT(sub__V976); permitUnusedInt(sub__V976_count);
      /* sub__V976 = &#0-1 */
      Term sub__V977 = LINK(sink__V966->context, SUB(term__V967, 1)); int sub__V977_count = term__V967_count*LINK_COUNT(sub__V977); permitUnusedInt(sub__V977_count);
      CRSX_CHECK_SORT(sink__V966->context, sub__V977, &sort_M_Reified_xVariable); /* sub__V977 = &#2 */
      
      NamedPropertyLink namedP__V978 = LINK_NamedPropertyLink(sink__V966->context, NAMED_PROPERTIES(term__V967));
      VariablePropertyLink varP__V979 = LINK_VariablePropertyLink(sink__V966->context, VARIABLE_PROPERTIES(term__V967));
      UNLINK(sink__V966->context, term__V967);
      ADD_PROPERTIES(sink__V966, LINK_NamedPropertyLink(sink__V966->context, namedP__V978), LINK_VariablePropertyLink(sink__V966->context, varP__V979));
      { START(sink__V966, _M_ReverseConcatText_s1);
        COPY(sink__V966, sub__V975);COPY(sink__V966, sub__V976);COPY(sink__V966, sub__V977);END(sink__V966, _M_ReverseConcatText_s1); }
      UNLINK_NamedPropertyLink(sink__V966->context, namedP__V978); 
      UNLINK_VariablePropertyLink(sink__V966->context, varP__V979);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION DEnumTag. */
int conBindOffs_M_DEnumTag[] = {0 , 0 , 0};
char *nameFun_M_DEnumTag(Term term) { return  "DEnumTag" ; }
struct _ConstructionDescriptor descriptor_M_DEnumTag = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_DEnumTag), conBindOffs_M_DEnumTag, &nameFun_M_DEnumTag, &step_M_DEnumTag};

int step_M_DEnumTag(Sink sink__V980, Term term__V981)
{
  int term__V981_count = LINK_COUNT(term__V981); permitUnusedInt(term__V981_count);
  Term sub__V982 = FORCE(sink__V980->context, SUB(term__V981, 0));
  EnumOf_M_OK_xSORT choice__V983 = (IS_VARIABLE_USE(sub__V982) ? VarOf_M_OK_xSORT : (EnumOf_M_OK_xSORT) TAG(sub__V982));
  switch (choice__V983)
  {
    case Data_M_OK: { /* Function DEFS-DEnumTag-1$DEnumTag$OK case OK */
      ASSERT(sink__V980->context, !strcmp(SYMBOL(term__V981),  "DEnumTag" ));
      Term sub__V984 = SUB(term__V981, 0); int sub__V984_count = term__V981_count*LINK_COUNT(sub__V984); permitUnusedInt(sub__V984_count);
      CRSX_CHECK_SORT(sink__V980->context, sub__V984, &sort_M_OK_xSORT); ASSERT(sink__V980->context, !strcmp(SYMBOL(sub__V984),  "OK" ));
      Term sub__V985 = LINK(sink__V980->context, SUB(term__V981, 1)); int sub__V985_count = term__V981_count*LINK_COUNT(sub__V985); permitUnusedInt(sub__V985_count);
      /* sub__V985 = &#0 */
      
      NamedPropertyLink namedP__V986 = LINK_NamedPropertyLink(sink__V980->context, NAMED_PROPERTIES(term__V981));
      VariablePropertyLink varP__V987 = LINK_VariablePropertyLink(sink__V980->context, VARIABLE_PROPERTIES(term__V981));
      UNLINK(sink__V980->context, term__V981);
      ADD_PROPERTIES(sink__V980, LINK_NamedPropertyLink(sink__V980->context, namedP__V986), LINK_VariablePropertyLink(sink__V980->context, varP__V987));
      { START(sink__V980, _M_DEnumTag_s1);
        COPY(sink__V980, sub__V985);END(sink__V980, _M_DEnumTag_s1); }
      UNLINK_NamedPropertyLink(sink__V980->context, namedP__V986); 
      UNLINK_VariablePropertyLink(sink__V980->context, varP__V987);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION Forms-Constructors. */
int conBindOffs_M_Forms_Constructors[] = {0 , 0};
char *nameFun_M_Forms_Constructors(Term term) { return  "Forms-Constructors" ; }
struct _ConstructionDescriptor descriptor_M_Forms_Constructors = {NULL, 0, 1, sizeof(STRUCT_Con_M_Forms_Constructors), conBindOffs_M_Forms_Constructors, &nameFun_M_Forms_Constructors, &step_M_Forms_Constructors};

int step_M_Forms_Constructors(Sink sink__V988, Term term__V989)
{
  int term__V989_count = LINK_COUNT(term__V989); permitUnusedInt(term__V989_count);
  Term sub__V990 = FORCE(sink__V988->context, SUB(term__V989, 0));
  EnumOf_M__sList choice__V991 = (IS_VARIABLE_USE(sub__V990) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V990));
  switch (choice__V991)
  {
    case Data_M__sCons: { /* Function DEFS-Forms-Constructors-3$Forms-Constructors$$Cons case $Cons */
      ASSERT(sink__V988->context, !strcmp(SYMBOL(term__V989),  "Forms-Constructors" ));
      Term sub__V992 = SUB(term__V989, 0); int sub__V992_count = term__V989_count*LINK_COUNT(sub__V992); permitUnusedInt(sub__V992_count);
      ASSERT(sink__V988->context, !strcmp(SYMBOL(sub__V992),  "$Cons" ));
      Term sub__V993 = LINK(sink__V988->context, SUB(sub__V992, 0)); int sub__V993_count = sub__V992_count*LINK_COUNT(sub__V993); permitUnusedInt(sub__V993_count);
      /* sub__V993 = &#0-0 */
      Term sub__V994 = LINK(sink__V988->context, SUB(sub__V992, 1)); int sub__V994_count = sub__V992_count*LINK_COUNT(sub__V994); permitUnusedInt(sub__V994_count);
      /* sub__V994 = &#0-1 */
      
      NamedPropertyLink namedP__V995 = LINK_NamedPropertyLink(sink__V988->context, NAMED_PROPERTIES(term__V989));
      VariablePropertyLink varP__V996 = LINK_VariablePropertyLink(sink__V988->context, VARIABLE_PROPERTIES(term__V989));
      UNLINK(sink__V988->context, term__V989);
      ADD_PROPERTIES(sink__V988, LINK_NamedPropertyLink(sink__V988->context, namedP__V995), LINK_VariablePropertyLink(sink__V988->context, varP__V996));
      { START(sink__V988, _M_Forms_Constructors_s1);
        COPY(sink__V988, sub__V993);COPY(sink__V988, sub__V994);END(sink__V988, _M_Forms_Constructors_s1); }
      UNLINK_NamedPropertyLink(sink__V988->context, namedP__V995); 
      UNLINK_VariablePropertyLink(sink__V988->context, varP__V996);
      
      return 1;
    break; } case Data_M__sNil: { /* Function DEFS-Forms-Constructors-4$Forms-Constructors$$Nil case $Nil */
      ASSERT(sink__V988->context, !strcmp(SYMBOL(term__V989),  "Forms-Constructors" ));
      Term sub__V997 = SUB(term__V989, 0); int sub__V997_count = term__V989_count*LINK_COUNT(sub__V997); permitUnusedInt(sub__V997_count);
      ASSERT(sink__V988->context, !strcmp(SYMBOL(sub__V997),  "$Nil" ));
      
      NamedPropertyLink namedP__V998 = LINK_NamedPropertyLink(sink__V988->context, NAMED_PROPERTIES(term__V989));
      VariablePropertyLink varP__V999 = LINK_VariablePropertyLink(sink__V988->context, VARIABLE_PROPERTIES(term__V989));
      UNLINK(sink__V988->context, term__V989);
      ADD_PROPERTIES(sink__V988, LINK_NamedPropertyLink(sink__V988->context, namedP__V998), LINK_VariablePropertyLink(sink__V988->context, varP__V999));
      { START(sink__V988, _M_Forms_Constructors_s5);
        END(sink__V988, _M_Forms_Constructors_s5); }
      UNLINK_NamedPropertyLink(sink__V988->context, namedP__V998); 
      UNLINK_VariablePropertyLink(sink__V988->context, varP__V999);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION DDescriptor. */
int conBindOffs_M_DDescriptor[] = {0 , 0 , 0};
char *nameFun_M_DDescriptor(Term term) { return  "DDescriptor" ; }
struct _ConstructionDescriptor descriptor_M_DDescriptor = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_DDescriptor), conBindOffs_M_DDescriptor, &nameFun_M_DDescriptor, &step_M_DDescriptor};

int step_M_DDescriptor(Sink sink__V1000, Term term__V1001)
{
  int term__V1001_count = LINK_COUNT(term__V1001); permitUnusedInt(term__V1001_count);
  Term sub__V1002 = FORCE(sink__V1000->context, SUB(term__V1001, 0));
  EnumOf_M_OK_xSORT choice__V1003 = (IS_VARIABLE_USE(sub__V1002) ? VarOf_M_OK_xSORT : (EnumOf_M_OK_xSORT) TAG(sub__V1002));
  switch (choice__V1003)
  {
    case Data_M_OK: { /* Function DEFS-DDescriptor-1$DDescriptor$OK case OK */
      ASSERT(sink__V1000->context, !strcmp(SYMBOL(term__V1001),  "DDescriptor" ));
      Term sub__V1004 = SUB(term__V1001, 0); int sub__V1004_count = term__V1001_count*LINK_COUNT(sub__V1004); permitUnusedInt(sub__V1004_count);
      CRSX_CHECK_SORT(sink__V1000->context, sub__V1004, &sort_M_OK_xSORT); ASSERT(sink__V1000->context, !strcmp(SYMBOL(sub__V1004),  "OK" ));
      Term sub__V1005 = LINK(sink__V1000->context, SUB(term__V1001, 1)); int sub__V1005_count = term__V1001_count*LINK_COUNT(sub__V1005); permitUnusedInt(sub__V1005_count);
      /* sub__V1005 = &#0 */
      
      NamedPropertyLink namedP__V1006 = LINK_NamedPropertyLink(sink__V1000->context, NAMED_PROPERTIES(term__V1001));
      VariablePropertyLink varP__V1007 = LINK_VariablePropertyLink(sink__V1000->context, VARIABLE_PROPERTIES(term__V1001));
      UNLINK(sink__V1000->context, term__V1001);
      ADD_PROPERTIES(sink__V1000, LINK_NamedPropertyLink(sink__V1000->context, namedP__V1006), LINK_VariablePropertyLink(sink__V1000->context, varP__V1007));
      { START(sink__V1000, _M_DDescriptor_s1);
        COPY(sink__V1000, sub__V1005);END(sink__V1000, _M_DDescriptor_s1); }
      UNLINK_NamedPropertyLink(sink__V1000->context, namedP__V1006); 
      UNLINK_VariablePropertyLink(sink__V1000->context, varP__V1007);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION PromiscuityString$1. */
int conBindOffs_M_PromiscuityString_s1[] = {0};
char *nameFun_M_PromiscuityString_s1(Term term) { return  "PromiscuityString$1" ; }
struct _ConstructionDescriptor descriptor_M_PromiscuityString_s1 = {NULL, 0, 0, sizeof(STRUCT_Con_M_PromiscuityString_s1), conBindOffs_M_PromiscuityString_s1, &nameFun_M_PromiscuityString_s1, &step_M_PromiscuityString_s1};

int step_M_PromiscuityString_s1(Sink sink__V1008, Term term__V1009)
{
  int term__V1009_count = LINK_COUNT(term__V1009); permitUnusedInt(term__V1009_count);
  do {
    /* Contraction rule DEFS-PromiscuityString-1. */
    ASSERT(sink__V1008->context, !strcmp(SYMBOL(term__V1009),  "PromiscuityString$1" ));
    UNLINK(sink__V1008->context, term__V1009);
    LITERAL(sink__V1008,  "LINEAR" ); 
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION PromiscuityString$2. */
int conBindOffs_M_PromiscuityString_s2[] = {0};
char *nameFun_M_PromiscuityString_s2(Term term) { return  "PromiscuityString$2" ; }
struct _ConstructionDescriptor descriptor_M_PromiscuityString_s2 = {NULL, 0, 0, sizeof(STRUCT_Con_M_PromiscuityString_s2), conBindOffs_M_PromiscuityString_s2, &nameFun_M_PromiscuityString_s2, &step_M_PromiscuityString_s2};

int step_M_PromiscuityString_s2(Sink sink__V1010, Term term__V1011)
{
  int term__V1011_count = LINK_COUNT(term__V1011); permitUnusedInt(term__V1011_count);
  do {
    /* Contraction rule DEFS-PromiscuityString-2. */
    ASSERT(sink__V1010->context, !strcmp(SYMBOL(term__V1011),  "PromiscuityString$2" ));
    UNLINK(sink__V1010->context, term__V1011);
    LITERAL(sink__V1010,  "PROMISCUOUS" ); 
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION SortCons. */
int conBindOffs_M_SortCons[] = {0 , 0};
char *nameFun_M_SortCons(Term term) { return  "SortCons" ; }
struct _ConstructionDescriptor descriptor_M_SortCons = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_SortCons), conBindOffs_M_SortCons, &nameFun_M_SortCons, &step_M_SortCons};

int step_M_SortCons(Sink sink__V1012, Term term__V1013)
{
  int term__V1013_count = LINK_COUNT(term__V1013); permitUnusedInt(term__V1013_count);
  do {
    /* Contraction rule DEFS-SortCons-1. */
    ASSERT(sink__V1012->context, !strcmp(SYMBOL(term__V1013),  "SortCons" ));
    Term sub__V1014 = LINK(sink__V1012->context, SUB(term__V1013, 0)); int sub__V1014_count = term__V1013_count*LINK_COUNT(sub__V1014); permitUnusedInt(sub__V1014_count);
    /* sub__V1014 = &#1 */
    
    NamedPropertyLink namedP__V1015 = LINK_NamedPropertyLink(sink__V1012->context, NAMED_PROPERTIES(term__V1013));
    VariablePropertyLink varP__V1016 = LINK_VariablePropertyLink(sink__V1012->context, VARIABLE_PROPERTIES(term__V1013));
    UNLINK(sink__V1012->context, term__V1013);
    { START(sink__V1012, _M__sTextCons);
      { START(sink__V1012, _M__sTextChars);
        LITERAL(sink__V1012,  "sortCon" ); END(sink__V1012, _M__sTextChars); }
      { START(sink__V1012, _M__sTextCons);
        { START(sink__V1012, _M__sTextEmbed);
          { START(sink__V1012, _M_AsText);
            { START(sink__V1012, _M_MANGLE);
              COPY(sink__V1012, sub__V1014);END(sink__V1012, _M_MANGLE); }
            END(sink__V1012, _M_AsText); }
          END(sink__V1012, _M__sTextEmbed); }
        { START(sink__V1012, _M__sTextNil);
          END(sink__V1012, _M__sTextNil); }
        END(sink__V1012, _M__sTextCons); }
      END(sink__V1012, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1012->context, namedP__V1015); 
    UNLINK_VariablePropertyLink(sink__V1012->context, varP__V1016);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION FormArguments-binder-count$4. */
int conBindOffs_M_FormArguments__binder__count_s4[] = {0 , 0};
char *nameFun_M_FormArguments__binder__count_s4(Term term) { return  "FormArguments-binder-count$4" ; }
struct _ConstructionDescriptor descriptor_M_FormArguments__binder__count_s4 = {NULL, 0, 1, sizeof(STRUCT_Con_M_FormArguments__binder__count_s4), conBindOffs_M_FormArguments__binder__count_s4, &nameFun_M_FormArguments__binder__count_s4, &step_M_FormArguments__binder__count_s4};

int step_M_FormArguments__binder__count_s4(Sink sink__V1017, Term term__V1018)
{
  int term__V1018_count = LINK_COUNT(term__V1018); permitUnusedInt(term__V1018_count);
  do {
    /* Contraction rule DEFS-FormArguments-binder-count-3. */
    ASSERT(sink__V1017->context, !strcmp(SYMBOL(term__V1018),  "FormArguments-binder-count$4" ));
    Term sub__V1019 = LINK(sink__V1017->context, SUB(term__V1018, 0)); int sub__V1019_count = term__V1018_count*LINK_COUNT(sub__V1019); permitUnusedInt(sub__V1019_count);
    /* sub__V1019 = &#2 */
    UNLINK(sink__V1017->context, term__V1018);
    COPY(sink__V1017, sub__V1019);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION FormArguments-binder-count$3. */
int conBindOffs_M_FormArguments__binder__count_s3[] = {0 , 0 , 0 , 1 , 1 , 1};
char *nameFun_M_FormArguments__binder__count_s3(Term term) { return  "FormArguments-binder-count$3" ; }
struct _ConstructionDescriptor descriptor_M_FormArguments__binder__count_s3 = {NULL, 0, 5, sizeof(STRUCT_Con_M_FormArguments__binder__count_s3), conBindOffs_M_FormArguments__binder__count_s3, &nameFun_M_FormArguments__binder__count_s3, &step_M_FormArguments__binder__count_s3};

int step_M_FormArguments__binder__count_s3(Sink sink__V1020, Term term__V1021)
{
  int term__V1021_count = LINK_COUNT(term__V1021); permitUnusedInt(term__V1021_count);
  do {
    /* Contraction rule DEFS-FormArguments-binder-count-1. */
    ASSERT(sink__V1020->context, !strcmp(SYMBOL(term__V1021),  "FormArguments-binder-count$3" ));
    Term sub__V1022 = SUB(term__V1021, 0); int sub__V1022_count = term__V1021_count*LINK_COUNT(sub__V1022); permitUnusedInt(sub__V1022_count);
    CRSX_CHECK_SORT(sink__V1020->context, sub__V1022, &sort_M_Reified_xKind); /* sub__V1022 = &#111 */
    Term sub__V1023 = SUB(term__V1021, 1); int sub__V1023_count = term__V1021_count*LINK_COUNT(sub__V1023); permitUnusedInt(sub__V1023_count);
    CRSX_CHECK_SORT(sink__V1020->context, sub__V1023, &sort_M_Reified_xSort); /* sub__V1023 = &#112 */
    Variable x__V1024 = linkVariable(sink__V1020->context, BINDER(term__V1021,2,0)); if (term__V1021_count <= 1) UNBIND(x__V1024);
    Term sub__V1025 = LINK(sink__V1020->context, SUB(term__V1021, 2)); int sub__V1025_count = term__V1021_count*LINK_COUNT(sub__V1025); permitUnusedInt(sub__V1025_count);
    CRSX_CHECK_SORT(sink__V1020->context, sub__V1025, &sort_M_Reified_xFormArgument); /* sub__V1025 = &#113 */
    Variable y__V932 = x__V1024; permitUnusedVariable(y__V932);
    Term sub__V1026 = LINK(sink__V1020->context, SUB(term__V1021, 3)); int sub__V1026_count = term__V1021_count*LINK_COUNT(sub__V1026); permitUnusedInt(sub__V1026_count);
    /* sub__V1026 = &#12 */
    Term sub__V1027 = LINK(sink__V1020->context, SUB(term__V1021, 4)); int sub__V1027_count = term__V1021_count*LINK_COUNT(sub__V1027); permitUnusedInt(sub__V1027_count);
    /* sub__V1027 = &#2 */
    UNLINK(sink__V1020->context, term__V1021);
    { START(sink__V1020, _M_FormArguments__binder__count);
      { START(sink__V1020, _M__sCons);
        COPY(sink__V1020, sub__V1025); /* REUSED SUBSTITUTION */ COPY(sink__V1020, sub__V1026);END(sink__V1020, _M__sCons); }
      
      {
        double num__V1028;num__V1028 = (double) 1;  
        {
          double tmp__V1029;tmp__V1029 = DOUBLE(sub__V1027); UNLINK(sink__V1020->context, sub__V1027); 
          num__V1028 += tmp__V1029;
        }
        LITERALNF(sink__V1020, (size_t) 31, "%G", num__V1028);
      }END(sink__V1020, _M_FormArguments__binder__count); }
     unlinkVariable(sink__V1020->context, x__V1024);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION FormArguments-binder-count$2. */
int conBindOffs_M_FormArguments__binder__count_s2[] = {0 , 0 , 0 , 0};
char *nameFun_M_FormArguments__binder__count_s2(Term term) { return  "FormArguments-binder-count$2" ; }
struct _ConstructionDescriptor descriptor_M_FormArguments__binder__count_s2 = {NULL, 0, 3, sizeof(STRUCT_Con_M_FormArguments__binder__count_s2), conBindOffs_M_FormArguments__binder__count_s2, &nameFun_M_FormArguments__binder__count_s2, &step_M_FormArguments__binder__count_s2};

int step_M_FormArguments__binder__count_s2(Sink sink__V1030, Term term__V1031)
{
  int term__V1031_count = LINK_COUNT(term__V1031); permitUnusedInt(term__V1031_count);
  do {
    /* Contraction rule DEFS-FormArguments-binder-count-2. */
    ASSERT(sink__V1030->context, !strcmp(SYMBOL(term__V1031),  "FormArguments-binder-count$2" ));
    Term sub__V1032 = SUB(term__V1031, 0); int sub__V1032_count = term__V1031_count*LINK_COUNT(sub__V1032); permitUnusedInt(sub__V1032_count);
    CRSX_CHECK_SORT(sink__V1030->context, sub__V1032, &sort_M_Reified_xSort); /* sub__V1032 = &#111 */
    Term sub__V1033 = LINK(sink__V1030->context, SUB(term__V1031, 1)); int sub__V1033_count = term__V1031_count*LINK_COUNT(sub__V1033); permitUnusedInt(sub__V1033_count);
    /* sub__V1033 = &#12 */
    Term sub__V1034 = LINK(sink__V1030->context, SUB(term__V1031, 2)); int sub__V1034_count = term__V1031_count*LINK_COUNT(sub__V1034); permitUnusedInt(sub__V1034_count);
    /* sub__V1034 = &#2 */
    UNLINK(sink__V1030->context, term__V1031);
    { START(sink__V1030, _M_FormArguments__binder__count);
      COPY(sink__V1030, sub__V1033);COPY(sink__V1030, sub__V1034);END(sink__V1030, _M_FormArguments__binder__count); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION FormArguments-binder-count$1. */
int conBindOffs_M_FormArguments__binder__count_s1[] = {0 , 0 , 0 , 0};
char *nameFun_M_FormArguments__binder__count_s1(Term term) { return  "FormArguments-binder-count$1" ; }
struct _ConstructionDescriptor descriptor_M_FormArguments__binder__count_s1 = {NULL, 0, 3, sizeof(STRUCT_Con_M_FormArguments__binder__count_s1), conBindOffs_M_FormArguments__binder__count_s1, &nameFun_M_FormArguments__binder__count_s1, &step_M_FormArguments__binder__count_s1};

int step_M_FormArguments__binder__count_s1(Sink sink__V1035, Term term__V1036)
{
  int term__V1036_count = LINK_COUNT(term__V1036); permitUnusedInt(term__V1036_count);
  do {
    /* Contraction rule DEFS-FormArguments-binder-count-1$FormArguments-binder-count$1$FORM-BINDER. */
    ASSERT(sink__V1035->context, !strcmp(SYMBOL(term__V1036),  "FormArguments-binder-count$1" ));
    Term sub__V1037 = SUB(term__V1036, 0); int sub__V1037_count = term__V1036_count*LINK_COUNT(sub__V1037); permitUnusedInt(sub__V1037_count);
    FORCE(sink__V1035->context, sub__V1037); SUB(term__V1036, 0) = sub__V1037;
    if (strcmp(SYMBOL(sub__V1037),  "FORM-BINDER" )) { break;}
    Term sub__V1038 = LINK(sink__V1035->context, SUB(sub__V1037, 0)); int sub__V1038_count = sub__V1037_count*LINK_COUNT(sub__V1038); permitUnusedInt(sub__V1038_count);
    CRSX_CHECK_SORT(sink__V1035->context, sub__V1038, &sort_M_Reified_xKind); /* sub__V1038 = &#0-0 */
    Term sub__V1039 = LINK(sink__V1035->context, SUB(sub__V1037, 1)); int sub__V1039_count = sub__V1037_count*LINK_COUNT(sub__V1039); permitUnusedInt(sub__V1039_count);
    CRSX_CHECK_SORT(sink__V1035->context, sub__V1039, &sort_M_Reified_xSort); /* sub__V1039 = &#0-1 */
    Variable y__V1040 = linkVariable(sink__V1035->context, BINDER(sub__V1037,2,0)); if (sub__V1037_count <= 1) UNBIND(y__V1040);
    Term sub__V1041 = LINK(sink__V1035->context, SUB(sub__V1037, 2)); int sub__V1041_count = sub__V1037_count*LINK_COUNT(sub__V1041); permitUnusedInt(sub__V1041_count);
    CRSX_CHECK_SORT(sink__V1035->context, sub__V1041, &sort_M_Reified_xFormArgument); /* sub__V1041 = &#0-2 */
    Term sub__V1042 = LINK(sink__V1035->context, SUB(term__V1036, 1)); int sub__V1042_count = term__V1036_count*LINK_COUNT(sub__V1042); permitUnusedInt(sub__V1042_count);
    /* sub__V1042 = &#3 */
    Term sub__V1043 = LINK(sink__V1035->context, SUB(term__V1036, 2)); int sub__V1043_count = term__V1036_count*LINK_COUNT(sub__V1043); permitUnusedInt(sub__V1043_count);
    /* sub__V1043 = &#4 */
    
    NamedPropertyLink namedP__V1044 = LINK_NamedPropertyLink(sink__V1035->context, NAMED_PROPERTIES(term__V1036));
    VariablePropertyLink varP__V1045 = LINK_VariablePropertyLink(sink__V1035->context, VARIABLE_PROPERTIES(term__V1036));
    UNLINK(sink__V1035->context, term__V1036);
    ADD_PROPERTIES(sink__V1035, LINK_NamedPropertyLink(sink__V1035->context, namedP__V1044), LINK_VariablePropertyLink(sink__V1035->context, varP__V1045));
    { START(sink__V1035, _M_FormArguments__binder__count_s3);
      COPY(sink__V1035, sub__V1038);COPY(sink__V1035, sub__V1039);{ if (!IS_BOUND(y__V1040)) { REBIND(linkVariable(sink__V1035->context, y__V1040));
          Variable binds__V1046[1] = {y__V1040}; BINDS(sink__V1035, 1, binds__V1046);
          COPY(sink__V1035, sub__V1041); /* REUSED SUBSTITUTION */  }
        else { Variable b__V1047 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1035->context,"b__V1047");
          Variable binds__V1048[1] = {b__V1047}; BINDS(sink__V1035, 1, binds__V1048);
          {
            Term arg__V1049;
            { Sink buf__V1050 = ALLOCA_BUFFER(sink__V1035->context);
              USE(buf__V1050, linkVariable(buf__V1050->context, b__V1047));
              arg__V1049 = BUFFER_TERM(buf__V1050); FREE_BUFFER(buf__V1050); }
            Variable vars__V1051[1] = {y__V1040};
            Term args__V1052[1] = {arg__V1049};
            struct _SubstitutionFrame substitution__V1053 = {NULL, 0, 1, vars__V1051, args__V1052};
            SUBSTITUTE(sink__V1035, sub__V1041, &substitution__V1053); }
              }
         }
      COPY(sink__V1035, sub__V1042);COPY(sink__V1035, sub__V1043);END(sink__V1035, _M_FormArguments__binder__count_s3); }
    UNLINK_NamedPropertyLink(sink__V1035->context, namedP__V1044); 
    UNLINK_VariablePropertyLink(sink__V1035->context, varP__V1045); unlinkVariable(sink__V1035->context, y__V1040);
    
    return 1;
  } while (0);
  do {
    /* Contraction rule DEFS-FormArguments-binder-count-2$FormArguments-binder-count$1$FORM-ARGUMENT. */
    ASSERT(sink__V1035->context, !strcmp(SYMBOL(term__V1036),  "FormArguments-binder-count$1" ));
    Term sub__V1054 = SUB(term__V1036, 0); int sub__V1054_count = term__V1036_count*LINK_COUNT(sub__V1054); permitUnusedInt(sub__V1054_count);
    FORCE(sink__V1035->context, sub__V1054); SUB(term__V1036, 0) = sub__V1054;
    if (strcmp(SYMBOL(sub__V1054),  "FORM-ARGUMENT" )) { break;}
    Term sub__V1055 = LINK(sink__V1035->context, SUB(sub__V1054, 0)); int sub__V1055_count = sub__V1054_count*LINK_COUNT(sub__V1055); permitUnusedInt(sub__V1055_count);
    CRSX_CHECK_SORT(sink__V1035->context, sub__V1055, &sort_M_Reified_xSort); /* sub__V1055 = &#0-0 */
    Term sub__V1056 = LINK(sink__V1035->context, SUB(term__V1036, 1)); int sub__V1056_count = term__V1036_count*LINK_COUNT(sub__V1056); permitUnusedInt(sub__V1056_count);
    /* sub__V1056 = &#1 */
    Term sub__V1057 = LINK(sink__V1035->context, SUB(term__V1036, 2)); int sub__V1057_count = term__V1036_count*LINK_COUNT(sub__V1057); permitUnusedInt(sub__V1057_count);
    /* sub__V1057 = &#2 */
    
    NamedPropertyLink namedP__V1058 = LINK_NamedPropertyLink(sink__V1035->context, NAMED_PROPERTIES(term__V1036));
    VariablePropertyLink varP__V1059 = LINK_VariablePropertyLink(sink__V1035->context, VARIABLE_PROPERTIES(term__V1036));
    UNLINK(sink__V1035->context, term__V1036);
    ADD_PROPERTIES(sink__V1035, LINK_NamedPropertyLink(sink__V1035->context, namedP__V1058), LINK_VariablePropertyLink(sink__V1035->context, varP__V1059));
    { START(sink__V1035, _M_FormArguments__binder__count_s2);
      COPY(sink__V1035, sub__V1055);COPY(sink__V1035, sub__V1056);COPY(sink__V1035, sub__V1057);END(sink__V1035, _M_FormArguments__binder__count_s2); }
    UNLINK_NamedPropertyLink(sink__V1035->context, namedP__V1058); 
    UNLINK_VariablePropertyLink(sink__V1035->context, varP__V1059);
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Length. */
int conBindOffs_M_Length[] = {0 , 0 , 0};
char *nameFun_M_Length(Term term) { return  "Length" ; }
struct _ConstructionDescriptor descriptor_M_Length = {NULL, 0, 2, sizeof(STRUCT_Con_M_Length), conBindOffs_M_Length, &nameFun_M_Length, &step_M_Length};

int step_M_Length(Sink sink__V1060, Term term__V1061)
{
  int term__V1061_count = LINK_COUNT(term__V1061); permitUnusedInt(term__V1061_count);
  Term sub__V1062 = FORCE(sink__V1060->context, SUB(term__V1061, 0));
  EnumOf_M__sList choice__V1063 = (IS_VARIABLE_USE(sub__V1062) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V1062));
  switch (choice__V1063)
  {
    case Data_M__sNil: { /* Function DEFS-Length-1$Length$$Nil case $Nil */
      ASSERT(sink__V1060->context, !strcmp(SYMBOL(term__V1061),  "Length" ));
      Term sub__V1064 = SUB(term__V1061, 0); int sub__V1064_count = term__V1061_count*LINK_COUNT(sub__V1064); permitUnusedInt(sub__V1064_count);
      ASSERT(sink__V1060->context, !strcmp(SYMBOL(sub__V1064),  "$Nil" ));
      Term sub__V1065 = LINK(sink__V1060->context, SUB(term__V1061, 1)); int sub__V1065_count = term__V1061_count*LINK_COUNT(sub__V1065); permitUnusedInt(sub__V1065_count);
      /* sub__V1065 = &#0 */
      
      NamedPropertyLink namedP__V1066 = LINK_NamedPropertyLink(sink__V1060->context, NAMED_PROPERTIES(term__V1061));
      VariablePropertyLink varP__V1067 = LINK_VariablePropertyLink(sink__V1060->context, VARIABLE_PROPERTIES(term__V1061));
      UNLINK(sink__V1060->context, term__V1061);
      ADD_PROPERTIES(sink__V1060, LINK_NamedPropertyLink(sink__V1060->context, namedP__V1066), LINK_VariablePropertyLink(sink__V1060->context, varP__V1067));
      { START(sink__V1060, _M_Length_s2);
        COPY(sink__V1060, sub__V1065);END(sink__V1060, _M_Length_s2); }
      UNLINK_NamedPropertyLink(sink__V1060->context, namedP__V1066); 
      UNLINK_VariablePropertyLink(sink__V1060->context, varP__V1067);
      
      return 1;
    break; } case Data_M__sCons: { /* Function DEFS-Length-2$Length$$Cons case $Cons */
      ASSERT(sink__V1060->context, !strcmp(SYMBOL(term__V1061),  "Length" ));
      Term sub__V1068 = SUB(term__V1061, 0); int sub__V1068_count = term__V1061_count*LINK_COUNT(sub__V1068); permitUnusedInt(sub__V1068_count);
      ASSERT(sink__V1060->context, !strcmp(SYMBOL(sub__V1068),  "$Cons" ));
      Term sub__V1069 = LINK(sink__V1060->context, SUB(sub__V1068, 0)); int sub__V1069_count = sub__V1068_count*LINK_COUNT(sub__V1069); permitUnusedInt(sub__V1069_count);
      /* sub__V1069 = &#0-0 */
      Term sub__V1070 = LINK(sink__V1060->context, SUB(sub__V1068, 1)); int sub__V1070_count = sub__V1068_count*LINK_COUNT(sub__V1070); permitUnusedInt(sub__V1070_count);
      /* sub__V1070 = &#0-1 */
      Term sub__V1071 = LINK(sink__V1060->context, SUB(term__V1061, 1)); int sub__V1071_count = term__V1061_count*LINK_COUNT(sub__V1071); permitUnusedInt(sub__V1071_count);
      /* sub__V1071 = &#2 */
      
      NamedPropertyLink namedP__V1072 = LINK_NamedPropertyLink(sink__V1060->context, NAMED_PROPERTIES(term__V1061));
      VariablePropertyLink varP__V1073 = LINK_VariablePropertyLink(sink__V1060->context, VARIABLE_PROPERTIES(term__V1061));
      UNLINK(sink__V1060->context, term__V1061);
      ADD_PROPERTIES(sink__V1060, LINK_NamedPropertyLink(sink__V1060->context, namedP__V1072), LINK_VariablePropertyLink(sink__V1060->context, varP__V1073));
      { START(sink__V1060, _M_Length_s1);
        COPY(sink__V1060, sub__V1069);COPY(sink__V1060, sub__V1070);COPY(sink__V1060, sub__V1071);END(sink__V1060, _M_Length_s1); }
      UNLINK_NamedPropertyLink(sink__V1060->context, namedP__V1072); 
      UNLINK_VariablePropertyLink(sink__V1060->context, varP__V1073);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION MapText1$1. */
int conBindOffs_M_MapText1_s1[] = {0 , 0 , 1 , 2};
char *nameFun_M_MapText1_s1(Term term) { return  "MapText1$1" ; }
struct _ConstructionDescriptor descriptor_M_MapText1_s1 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_MapText1_s1), conBindOffs_M_MapText1_s1, &nameFun_M_MapText1_s1, &step_M_MapText1_s1};

int step_M_MapText1_s1(Sink sink__V1074, Term term__V1075)
{
  int term__V1075_count = LINK_COUNT(term__V1075); permitUnusedInt(term__V1075_count);
  Term sub__V1076 = FORCE(sink__V1074->context, SUB(term__V1075, 0));
  EnumOf_M__sList choice__V1077 = (IS_VARIABLE_USE(sub__V1076) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V1076));
  switch (choice__V1077)
  {
    case Data_M__sCons: { /* Function DEFS-MapText1-1$MapText1$1$$Cons case $Cons */
      ASSERT(sink__V1074->context, !strcmp(SYMBOL(term__V1075),  "MapText1$1" ));
      Term sub__V1078 = SUB(term__V1075, 0); int sub__V1078_count = term__V1075_count*LINK_COUNT(sub__V1078); permitUnusedInt(sub__V1078_count);
      ASSERT(sink__V1074->context, !strcmp(SYMBOL(sub__V1078),  "$Cons" ));
      Term sub__V1079 = LINK(sink__V1074->context, SUB(sub__V1078, 0)); int sub__V1079_count = sub__V1078_count*LINK_COUNT(sub__V1079); permitUnusedInt(sub__V1079_count);
      /* sub__V1079 = &#0-0 */
      Term sub__V1080 = LINK(sink__V1074->context, SUB(sub__V1078, 1)); int sub__V1080_count = sub__V1078_count*LINK_COUNT(sub__V1080); permitUnusedInt(sub__V1080_count);
      /* sub__V1080 = &#0-1 */
      Variable x__V1081 = linkVariable(sink__V1074->context, BINDER(term__V1075,1,0)); if (term__V1075_count <= 1) UNBIND(x__V1081);
      Term sub__V1082 = LINK(sink__V1074->context, SUB(term__V1075, 1)); int sub__V1082_count = term__V1075_count*LINK_COUNT(sub__V1082); permitUnusedInt(sub__V1082_count);
      CRSX_CHECK_SORT(sink__V1074->context, sub__V1082, &sort_M_Reified_xVariable); /* sub__V1082 = &#2 */
      Variable x__V1083 = linkVariable(sink__V1074->context, BINDER(term__V1075,2,0)); if (term__V1075_count <= 1) UNBIND(x__V1083);
      Term sub__V1084 = LINK(sink__V1074->context, SUB(term__V1075, 2)); int sub__V1084_count = term__V1075_count*LINK_COUNT(sub__V1084); permitUnusedInt(sub__V1084_count);
      CRSX_CHECK_SORT(sink__V1074->context, sub__V1084, &sort_M_Reified_xVariable); /* sub__V1084 = &#3 */
      
      NamedPropertyLink namedP__V1085 = LINK_NamedPropertyLink(sink__V1074->context, NAMED_PROPERTIES(term__V1075));
      VariablePropertyLink varP__V1086 = LINK_VariablePropertyLink(sink__V1074->context, VARIABLE_PROPERTIES(term__V1075));
      UNLINK(sink__V1074->context, term__V1075);
      ADD_PROPERTIES(sink__V1074, LINK_NamedPropertyLink(sink__V1074->context, namedP__V1085), LINK_VariablePropertyLink(sink__V1074->context, varP__V1086));
      { START(sink__V1074, _M_MapText1_s2);
        COPY(sink__V1074, sub__V1079);COPY(sink__V1074, sub__V1080);{ if (!IS_BOUND(x__V1081)) { REBIND(linkVariable(sink__V1074->context, x__V1081));
            Variable binds__V1087[1] = {x__V1081}; BINDS(sink__V1074, 1, binds__V1087);
            COPY(sink__V1074, sub__V1082); /* REUSED SUBSTITUTION */  }
          else { Variable b__V1088 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1074->context,"b__V1088");
            Variable binds__V1089[1] = {b__V1088}; BINDS(sink__V1074, 1, binds__V1089);
            {
              Term arg__V1090;
              { Sink buf__V1091 = ALLOCA_BUFFER(sink__V1074->context);
                USE(buf__V1091, linkVariable(buf__V1091->context, b__V1088));
                arg__V1090 = BUFFER_TERM(buf__V1091); FREE_BUFFER(buf__V1091); }
              Variable vars__V1092[1] = {x__V1081};
              Term args__V1093[1] = {arg__V1090};
              struct _SubstitutionFrame substitution__V1094 = {NULL, 0, 1, vars__V1092, args__V1093};
              SUBSTITUTE(sink__V1074, sub__V1082, &substitution__V1094); }
                }
           }
        { if (!IS_BOUND(x__V1083)) { REBIND(linkVariable(sink__V1074->context, x__V1083));
            Variable binds__V1095[1] = {x__V1083}; BINDS(sink__V1074, 1, binds__V1095);
            COPY(sink__V1074, sub__V1084); /* REUSED SUBSTITUTION */  }
          else { Variable b__V1096 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1074->context,"b__V1096");
            Variable binds__V1097[1] = {b__V1096}; BINDS(sink__V1074, 1, binds__V1097);
            {
              Term arg__V1098;
              { Sink buf__V1099 = ALLOCA_BUFFER(sink__V1074->context);
                USE(buf__V1099, linkVariable(buf__V1099->context, b__V1096));
                arg__V1098 = BUFFER_TERM(buf__V1099); FREE_BUFFER(buf__V1099); }
              Variable vars__V1100[1] = {x__V1083};
              Term args__V1101[1] = {arg__V1098};
              struct _SubstitutionFrame substitution__V1102 = {NULL, 0, 1, vars__V1100, args__V1101};
              SUBSTITUTE(sink__V1074, sub__V1084, &substitution__V1102); }
                }
           }
        END(sink__V1074, _M_MapText1_s2); }
      UNLINK_NamedPropertyLink(sink__V1074->context, namedP__V1085); 
      UNLINK_VariablePropertyLink(sink__V1074->context, varP__V1086);
      unlinkVariable(sink__V1074->context, x__V1083); unlinkVariable(sink__V1074->context, x__V1081);
      
      return 1;
    break; } case Data_M__sNil: { /* Function DEFS-MapText1-2$MapText1$1$$Nil case $Nil */
      ASSERT(sink__V1074->context, !strcmp(SYMBOL(term__V1075),  "MapText1$1" ));
      Term sub__V1103 = SUB(term__V1075, 0); int sub__V1103_count = term__V1075_count*LINK_COUNT(sub__V1103); permitUnusedInt(sub__V1103_count);
      ASSERT(sink__V1074->context, !strcmp(SYMBOL(sub__V1103),  "$Nil" ));
      Variable x__V1104 = linkVariable(sink__V1074->context, BINDER(term__V1075,1,0)); if (term__V1075_count <= 1) UNBIND(x__V1104);
      Term sub__V1105 = LINK(sink__V1074->context, SUB(term__V1075, 1)); int sub__V1105_count = term__V1075_count*LINK_COUNT(sub__V1105); permitUnusedInt(sub__V1105_count);
      CRSX_CHECK_SORT(sink__V1074->context, sub__V1105, &sort_M_Reified_xVariable); /* sub__V1105 = &#0 */
      Variable x__V1106 = linkVariable(sink__V1074->context, BINDER(term__V1075,2,0)); if (term__V1075_count <= 1) UNBIND(x__V1106);
      Term sub__V1107 = LINK(sink__V1074->context, SUB(term__V1075, 2)); int sub__V1107_count = term__V1075_count*LINK_COUNT(sub__V1107); permitUnusedInt(sub__V1107_count);
      CRSX_CHECK_SORT(sink__V1074->context, sub__V1107, &sort_M_Reified_xVariable); /* sub__V1107 = &#1 */
      
      NamedPropertyLink namedP__V1108 = LINK_NamedPropertyLink(sink__V1074->context, NAMED_PROPERTIES(term__V1075));
      VariablePropertyLink varP__V1109 = LINK_VariablePropertyLink(sink__V1074->context, VARIABLE_PROPERTIES(term__V1075));
      UNLINK(sink__V1074->context, term__V1075);
      ADD_PROPERTIES(sink__V1074, LINK_NamedPropertyLink(sink__V1074->context, namedP__V1108), LINK_VariablePropertyLink(sink__V1074->context, varP__V1109));
      { START(sink__V1074, _M_MapText1_s3);
        { if (!IS_BOUND(x__V1104)) { REBIND(linkVariable(sink__V1074->context, x__V1104));
            Variable binds__V1110[1] = {x__V1104}; BINDS(sink__V1074, 1, binds__V1110);
            COPY(sink__V1074, sub__V1105); /* REUSED SUBSTITUTION */  }
          else { Variable b__V1111 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1074->context,"b__V1111");
            Variable binds__V1112[1] = {b__V1111}; BINDS(sink__V1074, 1, binds__V1112);
            {
              Term arg__V1113;
              { Sink buf__V1114 = ALLOCA_BUFFER(sink__V1074->context);
                USE(buf__V1114, linkVariable(buf__V1114->context, b__V1111));
                arg__V1113 = BUFFER_TERM(buf__V1114); FREE_BUFFER(buf__V1114); }
              Variable vars__V1115[1] = {x__V1104};
              Term args__V1116[1] = {arg__V1113};
              struct _SubstitutionFrame substitution__V1117 = {NULL, 0, 1, vars__V1115, args__V1116};
              SUBSTITUTE(sink__V1074, sub__V1105, &substitution__V1117); }
                }
           }
        { if (!IS_BOUND(x__V1106)) { REBIND(linkVariable(sink__V1074->context, x__V1106));
            Variable binds__V1118[1] = {x__V1106}; BINDS(sink__V1074, 1, binds__V1118);
            COPY(sink__V1074, sub__V1107); /* REUSED SUBSTITUTION */  }
          else { Variable b__V1119 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1074->context,"b__V1119");
            Variable binds__V1120[1] = {b__V1119}; BINDS(sink__V1074, 1, binds__V1120);
            {
              Term arg__V1121;
              { Sink buf__V1122 = ALLOCA_BUFFER(sink__V1074->context);
                USE(buf__V1122, linkVariable(buf__V1122->context, b__V1119));
                arg__V1121 = BUFFER_TERM(buf__V1122); FREE_BUFFER(buf__V1122); }
              Variable vars__V1123[1] = {x__V1106};
              Term args__V1124[1] = {arg__V1121};
              struct _SubstitutionFrame substitution__V1125 = {NULL, 0, 1, vars__V1123, args__V1124};
              SUBSTITUTE(sink__V1074, sub__V1107, &substitution__V1125); }
                }
           }
        END(sink__V1074, _M_MapText1_s3); }
      UNLINK_NamedPropertyLink(sink__V1074->context, namedP__V1108); 
      UNLINK_VariablePropertyLink(sink__V1074->context, varP__V1109);
      unlinkVariable(sink__V1074->context, x__V1106); unlinkVariable(sink__V1074->context, x__V1104);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION MapText1$2. */
int conBindOffs_M_MapText1_s2[] = {0 , 0 , 0 , 1 , 2};
char *nameFun_M_MapText1_s2(Term term) { return  "MapText1$2" ; }
struct _ConstructionDescriptor descriptor_M_MapText1_s2 = {&sort_M_Reified_xVariable, 0, 4, sizeof(STRUCT_Con_M_MapText1_s2), conBindOffs_M_MapText1_s2, &nameFun_M_MapText1_s2, &step_M_MapText1_s2};

int step_M_MapText1_s2(Sink sink__V1126, Term term__V1127)
{
  int term__V1127_count = LINK_COUNT(term__V1127); permitUnusedInt(term__V1127_count);
  do {
    /* Contraction rule DEFS-MapText1-1. */
    ASSERT(sink__V1126->context, !strcmp(SYMBOL(term__V1127),  "MapText1$2" ));
    Term sub__V1128 = LINK(sink__V1126->context, SUB(term__V1127, 0)); int sub__V1128_count = term__V1127_count*LINK_COUNT(sub__V1128); permitUnusedInt(sub__V1128_count);
    /* sub__V1128 = &#31 */
    Term sub__V1129 = LINK(sink__V1126->context, SUB(term__V1127, 1)); int sub__V1129_count = term__V1127_count*LINK_COUNT(sub__V1129); permitUnusedInt(sub__V1129_count);
    /* sub__V1129 = &#32 */
    Variable x__V1130 = linkVariable(sink__V1126->context, BINDER(term__V1127,2,0)); if (term__V1127_count <= 1) UNBIND(x__V1130);
    Term sub__V1131 = LINK(sink__V1126->context, SUB(term__V1127, 2)); int sub__V1131_count = term__V1127_count*LINK_COUNT(sub__V1131); permitUnusedInt(sub__V1131_count);
    CRSX_CHECK_SORT(sink__V1126->context, sub__V1131, &sort_M_Reified_xVariable); /* sub__V1131 = &#2 */
    Variable x__V1132 = linkVariable(sink__V1126->context, BINDER(term__V1127,3,0)); if (term__V1127_count <= 1) UNBIND(x__V1132);
    Term sub__V1133 = LINK(sink__V1126->context, SUB(term__V1127, 3)); int sub__V1133_count = term__V1127_count*LINK_COUNT(sub__V1133); permitUnusedInt(sub__V1133_count);
    CRSX_CHECK_SORT(sink__V1126->context, sub__V1133, &sort_M_Reified_xVariable); /* sub__V1133 = &#1 */
    
    NamedPropertyLink namedP__V1134 = LINK_NamedPropertyLink(sink__V1126->context, NAMED_PROPERTIES(term__V1127));
    VariablePropertyLink varP__V1135 = LINK_VariablePropertyLink(sink__V1126->context, VARIABLE_PROPERTIES(term__V1127));
    UNLINK(sink__V1126->context, term__V1127);
    { START(sink__V1126, _M__sTextCons);
      { START(sink__V1126, _M__sTextEmbed);
        { START(sink__V1126, _M_AsText);
          {
            Term arg__V1136;
            { Sink buf__V1137 = ALLOCA_BUFFER(sink__V1126->context);
              COPY(buf__V1137, sub__V1128);arg__V1136 = BUFFER_TERM(buf__V1137); FREE_BUFFER(buf__V1137); }
            Variable vars__V1138[1] = {x__V1132};
            Term args__V1139[1] = {arg__V1136};
            struct _SubstitutionFrame substitution__V1140 = {NULL, 0, 1, vars__V1138, args__V1139};
            SUBSTITUTE(sink__V1126, sub__V1133, &substitution__V1140); }
          END(sink__V1126, _M_AsText); }
        END(sink__V1126, _M__sTextEmbed); }
      { START(sink__V1126, _M__sTextCons);
        { START(sink__V1126, _M__sTextEmbed);
          { START(sink__V1126, _M_AsText);
            { START(sink__V1126, _M_MapText_s1);
              COPY(sink__V1126, sub__V1129);{ if (!IS_BOUND(x__V1130)) { REBIND(linkVariable(sink__V1126->context, x__V1130));
                  Variable binds__V1141[1] = {x__V1130}; BINDS(sink__V1126, 1, binds__V1141);
                  COPY(sink__V1126, sub__V1131); /* REUSED SUBSTITUTION */  }
                else { Variable b__V1142 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1126->context,"b__V1142");
                  Variable binds__V1143[1] = {b__V1142}; BINDS(sink__V1126, 1, binds__V1143);
                  {
                    Term arg__V1144;
                    { Sink buf__V1145 = ALLOCA_BUFFER(sink__V1126->context);
                      USE(buf__V1145, linkVariable(buf__V1145->context, b__V1142));
                      arg__V1144 = BUFFER_TERM(buf__V1145); FREE_BUFFER(buf__V1145); }
                    Variable vars__V1146[1] = {x__V1130};
                    Term args__V1147[1] = {arg__V1144};
                    struct _SubstitutionFrame substitution__V1148 = {NULL, 0, 1, vars__V1146, args__V1147};
                    SUBSTITUTE(sink__V1126, sub__V1131, &substitution__V1148); }
                      }
                 }
              END(sink__V1126, _M_MapText_s1); }
            END(sink__V1126, _M_AsText); }
          END(sink__V1126, _M__sTextEmbed); }
        { START(sink__V1126, _M__sTextNil);
          END(sink__V1126, _M__sTextNil); }
        END(sink__V1126, _M__sTextCons); }
      END(sink__V1126, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1126->context, namedP__V1134); 
    UNLINK_VariablePropertyLink(sink__V1126->context, varP__V1135);
    unlinkVariable(sink__V1126->context, x__V1132); unlinkVariable(sink__V1126->context, x__V1130);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MapText1$3. */
int conBindOffs_M_MapText1_s3[] = {0 , 1 , 2};
char *nameFun_M_MapText1_s3(Term term) { return  "MapText1$3" ; }
struct _ConstructionDescriptor descriptor_M_MapText1_s3 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_MapText1_s3), conBindOffs_M_MapText1_s3, &nameFun_M_MapText1_s3, &step_M_MapText1_s3};

int step_M_MapText1_s3(Sink sink__V1149, Term term__V1150)
{
  int term__V1150_count = LINK_COUNT(term__V1150); permitUnusedInt(term__V1150_count);
  do {
    /* Contraction rule DEFS-MapText1-2. */
    ASSERT(sink__V1149->context, !strcmp(SYMBOL(term__V1150),  "MapText1$3" ));
    Variable x__V1151 = linkVariable(sink__V1149->context, BINDER(term__V1150,0,0)); if (term__V1150_count <= 1) UNBIND(x__V1151);
    Term sub__V1152 = SUB(term__V1150, 0); int sub__V1152_count = term__V1150_count*LINK_COUNT(sub__V1152); permitUnusedInt(sub__V1152_count);
    CRSX_CHECK_SORT(sink__V1149->context, sub__V1152, &sort_M_Reified_xVariable); /* sub__V1152 = &#2 */
    Variable x__V1153 = linkVariable(sink__V1149->context, BINDER(term__V1150,1,0)); if (term__V1150_count <= 1) UNBIND(x__V1153);
    Term sub__V1154 = SUB(term__V1150, 1); int sub__V1154_count = term__V1150_count*LINK_COUNT(sub__V1154); permitUnusedInt(sub__V1154_count);
    CRSX_CHECK_SORT(sink__V1149->context, sub__V1154, &sort_M_Reified_xVariable); /* sub__V1154 = &#1 */
    
    NamedPropertyLink namedP__V1155 = LINK_NamedPropertyLink(sink__V1149->context, NAMED_PROPERTIES(term__V1150));
    VariablePropertyLink varP__V1156 = LINK_VariablePropertyLink(sink__V1149->context, VARIABLE_PROPERTIES(term__V1150));
    UNLINK(sink__V1149->context, term__V1150);
    { START(sink__V1149, _M__sTextNil);
      END(sink__V1149, _M__sTextNil); }
    UNLINK_NamedPropertyLink(sink__V1149->context, namedP__V1155); 
    UNLINK_VariablePropertyLink(sink__V1149->context, varP__V1156);
    unlinkVariable(sink__V1149->context, x__V1153); unlinkVariable(sink__V1149->context, x__V1151);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Append. */
int conBindOffs_M_Append[] = {0 , 0 , 0};
char *nameFun_M_Append(Term term) { return  "Append" ; }
struct _ConstructionDescriptor descriptor_M_Append = {NULL, 0, 2, sizeof(STRUCT_Con_M_Append), conBindOffs_M_Append, &nameFun_M_Append, &step_M_Append};

int step_M_Append(Sink sink__V1157, Term term__V1158)
{
  int term__V1158_count = LINK_COUNT(term__V1158); permitUnusedInt(term__V1158_count);
  Term sub__V1159 = FORCE(sink__V1157->context, SUB(term__V1158, 0));
  EnumOf_M__sList choice__V1160 = (IS_VARIABLE_USE(sub__V1159) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V1159));
  switch (choice__V1160)
  {
    case Data_M__sNil: { /* Function DEFS-Append-1$Append$$Nil case $Nil */
      ASSERT(sink__V1157->context, !strcmp(SYMBOL(term__V1158),  "Append" ));
      Term sub__V1161 = SUB(term__V1158, 0); int sub__V1161_count = term__V1158_count*LINK_COUNT(sub__V1161); permitUnusedInt(sub__V1161_count);
      ASSERT(sink__V1157->context, !strcmp(SYMBOL(sub__V1161),  "$Nil" ));
      Term sub__V1162 = LINK(sink__V1157->context, SUB(term__V1158, 1)); int sub__V1162_count = term__V1158_count*LINK_COUNT(sub__V1162); permitUnusedInt(sub__V1162_count);
      /* sub__V1162 = &#0 */
      
      NamedPropertyLink namedP__V1163 = LINK_NamedPropertyLink(sink__V1157->context, NAMED_PROPERTIES(term__V1158));
      VariablePropertyLink varP__V1164 = LINK_VariablePropertyLink(sink__V1157->context, VARIABLE_PROPERTIES(term__V1158));
      UNLINK(sink__V1157->context, term__V1158);
      ADD_PROPERTIES(sink__V1157, LINK_NamedPropertyLink(sink__V1157->context, namedP__V1163), LINK_VariablePropertyLink(sink__V1157->context, varP__V1164));
      { START(sink__V1157, _M_Append_s2);
        COPY(sink__V1157, sub__V1162);END(sink__V1157, _M_Append_s2); }
      UNLINK_NamedPropertyLink(sink__V1157->context, namedP__V1163); 
      UNLINK_VariablePropertyLink(sink__V1157->context, varP__V1164);
      
      return 1;
    break; } case Data_M__sCons: { /* Function DEFS-Append-2$Append$$Cons case $Cons */
      ASSERT(sink__V1157->context, !strcmp(SYMBOL(term__V1158),  "Append" ));
      Term sub__V1165 = SUB(term__V1158, 0); int sub__V1165_count = term__V1158_count*LINK_COUNT(sub__V1165); permitUnusedInt(sub__V1165_count);
      ASSERT(sink__V1157->context, !strcmp(SYMBOL(sub__V1165),  "$Cons" ));
      Term sub__V1166 = LINK(sink__V1157->context, SUB(sub__V1165, 0)); int sub__V1166_count = sub__V1165_count*LINK_COUNT(sub__V1166); permitUnusedInt(sub__V1166_count);
      /* sub__V1166 = &#0-0 */
      Term sub__V1167 = LINK(sink__V1157->context, SUB(sub__V1165, 1)); int sub__V1167_count = sub__V1165_count*LINK_COUNT(sub__V1167); permitUnusedInt(sub__V1167_count);
      /* sub__V1167 = &#0-1 */
      Term sub__V1168 = LINK(sink__V1157->context, SUB(term__V1158, 1)); int sub__V1168_count = term__V1158_count*LINK_COUNT(sub__V1168); permitUnusedInt(sub__V1168_count);
      /* sub__V1168 = &#2 */
      
      NamedPropertyLink namedP__V1169 = LINK_NamedPropertyLink(sink__V1157->context, NAMED_PROPERTIES(term__V1158));
      VariablePropertyLink varP__V1170 = LINK_VariablePropertyLink(sink__V1157->context, VARIABLE_PROPERTIES(term__V1158));
      UNLINK(sink__V1157->context, term__V1158);
      ADD_PROPERTIES(sink__V1157, LINK_NamedPropertyLink(sink__V1157->context, namedP__V1169), LINK_VariablePropertyLink(sink__V1157->context, varP__V1170));
      { START(sink__V1157, _M_Append_s1);
        COPY(sink__V1157, sub__V1166);COPY(sink__V1157, sub__V1167);COPY(sink__V1157, sub__V1168);END(sink__V1157, _M_Append_s1); }
      UNLINK_NamedPropertyLink(sink__V1157->context, namedP__V1169); 
      UNLINK_VariablePropertyLink(sink__V1157->context, varP__V1170);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION DCOMMENT_TOKEN$1. */
int conBindOffs_M_DCOMMENT_xTOKEN_s1[] = {0 , 0};
char *nameFun_M_DCOMMENT_xTOKEN_s1(Term term) { return  "DCOMMENT_TOKEN$1" ; }
struct _ConstructionDescriptor descriptor_M_DCOMMENT_xTOKEN_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_DCOMMENT_xTOKEN_s1), conBindOffs_M_DCOMMENT_xTOKEN_s1, &nameFun_M_DCOMMENT_xTOKEN_s1, &step_M_DCOMMENT_xTOKEN_s1};

int step_M_DCOMMENT_xTOKEN_s1(Sink sink__V1171, Term term__V1172)
{
  int term__V1172_count = LINK_COUNT(term__V1172); permitUnusedInt(term__V1172_count);
  do {
    /* Contraction rule DEFS-DCOMMENT_TOKEN-1. */
    ASSERT(sink__V1171->context, !strcmp(SYMBOL(term__V1172),  "DCOMMENT_TOKEN$1" ));
    Term sub__V1173 = LINK(sink__V1171->context, SUB(term__V1172, 0)); int sub__V1173_count = term__V1172_count*LINK_COUNT(sub__V1173); permitUnusedInt(sub__V1173_count);
    UNLINK_SUB(sink__V1171->context, term__V1172,  0); NORMALIZE(sink__V1171->context, sub__V1173); SUB(term__V1172,  0) = LINK(sink__V1171->context, sub__V1173);
    /* sub__V1173 = &#2 */
    
    NamedPropertyLink namedP__V1174 = LINK_NamedPropertyLink(sink__V1171->context, NAMED_PROPERTIES(term__V1172));
    VariablePropertyLink varP__V1175 = LINK_VariablePropertyLink(sink__V1171->context, VARIABLE_PROPERTIES(term__V1172));
    UNLINK(sink__V1171->context, term__V1172);
    { START(sink__V1171, _M__sTextCons);
      { START(sink__V1171, _M__sTextChars);
        { char *str__V1176;
          FORCE(sink__V1171->context, sub__V1173); LINK(sink__V1171->context, sub__V1173);
          { char *replaced__V1177;
            const size_t z = strlen(SYMBOL(sub__V1173));
            if (* "*/" ) {
              const size_t oldz = strlen( "*/" ), newz = strlen( "*_/" );
              size_t limitz;
              if (oldz==newz) { limitz = z; }
              else { limitz = z; size_t growz = (oldz < newz ? newz - oldz : 0);
                if (growz > 0) { char *p = SYMBOL(sub__V1173); while ((p = strstr(p,  "*/" ))) { limitz += growz; p += oldz; } } }
              replaced__V1177 = ALLOCA(sink__V1171->context, limitz+1);
              if (oldz==newz) { memcpy(replaced__V1177, SYMBOL(sub__V1173), z+1);
                char *r = replaced__V1177; while ((r = strstr(r,  "*/" ))) { memcpy(r,  "*_/" , newz); r += oldz; } }
              else { char *s = SYMBOL(sub__V1173), *ends = s+z, *r = replaced__V1177, *next;
                while ((next = strstr(s,  "*/" ))) { size_t prez = next-s;
                  if (prez) { memcpy(r, s, prez); r += prez; } 
                  if (newz) { memcpy(r,  "*_/" , newz); r += newz; }
                  s = next+oldz;}
                if (s < ends) { memcpy(r, s, ends-s); r += ends-s; }
                *r = '\0';}
              }
            else { replaced__V1177 = memcpy(ALLOCA(sink__V1171->context, z+1), SYMBOL(sub__V1173), z+1); }
             UNLINK(sink__V1171->context, sub__V1173);  UNLINK(sink__V1171->context, sub__V1173); { size_t z__V1178 = strlen(replaced__V1177) + 1; memcpy(str__V1176 = ALLOCATE(sink__V1171->context, z__V1178), replaced__V1177, z__V1178); }
            
          }LITERALU(sink__V1171, str__V1176); }
        END(sink__V1171, _M__sTextChars); }
      { START(sink__V1171, _M__sTextNil);
        END(sink__V1171, _M__sTextNil); }
      END(sink__V1171, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1171->context, namedP__V1174); 
    UNLINK_VariablePropertyLink(sink__V1171->context, varP__V1175);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Length$2. */
int conBindOffs_M_Length_s2[] = {0 , 0};
char *nameFun_M_Length_s2(Term term) { return  "Length$2" ; }
struct _ConstructionDescriptor descriptor_M_Length_s2 = {NULL, 0, 1, sizeof(STRUCT_Con_M_Length_s2), conBindOffs_M_Length_s2, &nameFun_M_Length_s2, &step_M_Length_s2};

int step_M_Length_s2(Sink sink__V1179, Term term__V1180)
{
  int term__V1180_count = LINK_COUNT(term__V1180); permitUnusedInt(term__V1180_count);
  do {
    /* Contraction rule DEFS-Length-1. */
    ASSERT(sink__V1179->context, !strcmp(SYMBOL(term__V1180),  "Length$2" ));
    Term sub__V1181 = LINK(sink__V1179->context, SUB(term__V1180, 0)); int sub__V1181_count = term__V1180_count*LINK_COUNT(sub__V1181); permitUnusedInt(sub__V1181_count);
    /* sub__V1181 = &#2 */
    UNLINK(sink__V1179->context, term__V1180);
    COPY(sink__V1179, sub__V1181);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Length$1. */
int conBindOffs_M_Length_s1[] = {0 , 0 , 0 , 0};
char *nameFun_M_Length_s1(Term term) { return  "Length$1" ; }
struct _ConstructionDescriptor descriptor_M_Length_s1 = {NULL, 0, 3, sizeof(STRUCT_Con_M_Length_s1), conBindOffs_M_Length_s1, &nameFun_M_Length_s1, &step_M_Length_s1};

int step_M_Length_s1(Sink sink__V1182, Term term__V1183)
{
  int term__V1183_count = LINK_COUNT(term__V1183); permitUnusedInt(term__V1183_count);
  do {
    /* Contraction rule DEFS-Length-2. */
    ASSERT(sink__V1182->context, !strcmp(SYMBOL(term__V1183),  "Length$1" ));
    Term sub__V1184 = SUB(term__V1183, 0); int sub__V1184_count = term__V1183_count*LINK_COUNT(sub__V1184); permitUnusedInt(sub__V1184_count);
    /* sub__V1184 = &#11 */
    Term sub__V1185 = LINK(sink__V1182->context, SUB(term__V1183, 1)); int sub__V1185_count = term__V1183_count*LINK_COUNT(sub__V1185); permitUnusedInt(sub__V1185_count);
    /* sub__V1185 = &#12 */
    Term sub__V1186 = LINK(sink__V1182->context, SUB(term__V1183, 2)); int sub__V1186_count = term__V1183_count*LINK_COUNT(sub__V1186); permitUnusedInt(sub__V1186_count);
    /* sub__V1186 = &#2 */
    UNLINK(sink__V1182->context, term__V1183);
    { START(sink__V1182, _M_Length);
      COPY(sink__V1182, sub__V1185);
      {
        double num__V1187;num__V1187 = (double) 1;  
        {
          double tmp__V1188;tmp__V1188 = DOUBLE(sub__V1186); UNLINK(sink__V1182->context, sub__V1186); 
          num__V1187 += tmp__V1188;
        }
        LITERALNF(sink__V1182, (size_t) 31, "%G", num__V1187);
      }END(sink__V1182, _M_Length); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Name. */
int conBindOffs_M_Name[] = {0 , 0};
char *nameFun_M_Name(Term term) { return  "Name" ; }
struct _ConstructionDescriptor descriptor_M_Name = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Name), conBindOffs_M_Name, &nameFun_M_Name, &step_M_Name};

int step_M_Name(Sink sink__V1189, Term term__V1190)
{
  int term__V1190_count = LINK_COUNT(term__V1190); permitUnusedInt(term__V1190_count);
  do {
    /* Contraction rule DEFS-Name-1. */
    ASSERT(sink__V1189->context, !strcmp(SYMBOL(term__V1190),  "Name" ));
    Term sub__V1191 = LINK(sink__V1189->context, SUB(term__V1190, 0)); int sub__V1191_count = term__V1190_count*LINK_COUNT(sub__V1191); permitUnusedInt(sub__V1191_count);
    /* sub__V1191 = &#1 */
    
    NamedPropertyLink namedP__V1192 = LINK_NamedPropertyLink(sink__V1189->context, NAMED_PROPERTIES(term__V1190));
    VariablePropertyLink varP__V1193 = LINK_VariablePropertyLink(sink__V1189->context, VARIABLE_PROPERTIES(term__V1190));
    UNLINK(sink__V1189->context, term__V1190);
    { START(sink__V1189, _M__sTextCons);
      { START(sink__V1189, _M__sTextChars);
        LITERAL(sink__V1189,  "name" ); END(sink__V1189, _M__sTextChars); }
      { START(sink__V1189, _M__sTextCons);
        { START(sink__V1189, _M__sTextEmbed);
          { START(sink__V1189, _M_AsText);
            { START(sink__V1189, _M_MANGLE);
              COPY(sink__V1189, sub__V1191);END(sink__V1189, _M_MANGLE); }
            END(sink__V1189, _M_AsText); }
          END(sink__V1189, _M__sTextEmbed); }
        { START(sink__V1189, _M__sTextNil);
          END(sink__V1189, _M__sTextNil); }
        END(sink__V1189, _M__sTextCons); }
      END(sink__V1189, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1189->context, namedP__V1192); 
    UNLINK_VariablePropertyLink(sink__V1189->context, varP__V1193);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION TOKEN. */
int conBindOffs_M_TOKEN[] = {0 , 0};
char *nameFun_M_TOKEN(Term term) { return  "TOKEN" ; }
struct _ConstructionDescriptor descriptor_M_TOKEN = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_TOKEN), conBindOffs_M_TOKEN, &nameFun_M_TOKEN, &step_M_TOKEN};

int step_M_TOKEN(Sink sink__V1194, Term term__V1195)
{
  int term__V1195_count = LINK_COUNT(term__V1195); permitUnusedInt(term__V1195_count);
  do {
    /* Contraction rule DEFS-TOKEN-1. */
    ASSERT(sink__V1194->context, !strcmp(SYMBOL(term__V1195),  "TOKEN" ));
    Term sub__V1196 = LINK(sink__V1194->context, SUB(term__V1195, 0)); int sub__V1196_count = term__V1195_count*LINK_COUNT(sub__V1196); permitUnusedInt(sub__V1196_count);
    UNLINK_SUB(sink__V1194->context, term__V1195,  0); NORMALIZE(sink__V1194->context, sub__V1196); SUB(term__V1195,  0) = LINK(sink__V1194->context, sub__V1196);
    /* sub__V1196 = &#1 */
    
    NamedPropertyLink namedP__V1197 = LINK_NamedPropertyLink(sink__V1194->context, NAMED_PROPERTIES(term__V1195));
    VariablePropertyLink varP__V1198 = LINK_VariablePropertyLink(sink__V1194->context, VARIABLE_PROPERTIES(term__V1195));
    UNLINK(sink__V1194->context, term__V1195);
    { START(sink__V1194, _M__sTextCons);
      { START(sink__V1194, _M__sTextChars);
        COPY(sink__V1194, sub__V1196);END(sink__V1194, _M__sTextChars); }
      { START(sink__V1194, _M__sTextNil);
        END(sink__V1194, _M__sTextNil); }
      END(sink__V1194, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1194->context, namedP__V1197); 
    UNLINK_VariablePropertyLink(sink__V1194->context, varP__V1198);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION DSTRING. */
int conBindOffs_M_DSTRING[] = {0 , 0 , 0};
char *nameFun_M_DSTRING(Term term) { return  "DSTRING" ; }
struct _ConstructionDescriptor descriptor_M_DSTRING = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_DSTRING), conBindOffs_M_DSTRING, &nameFun_M_DSTRING, &step_M_DSTRING};

int step_M_DSTRING(Sink sink__V1199, Term term__V1200)
{
  int term__V1200_count = LINK_COUNT(term__V1200); permitUnusedInt(term__V1200_count);
  Term sub__V1201 = FORCE(sink__V1199->context, SUB(term__V1200, 0));
  EnumOf_M_OK_xSORT choice__V1202 = (IS_VARIABLE_USE(sub__V1201) ? VarOf_M_OK_xSORT : (EnumOf_M_OK_xSORT) TAG(sub__V1201));
  switch (choice__V1202)
  {
    case Data_M_OK: { /* Function DEFS-DSTRING-1$DSTRING$OK case OK */
      ASSERT(sink__V1199->context, !strcmp(SYMBOL(term__V1200),  "DSTRING" ));
      Term sub__V1203 = SUB(term__V1200, 0); int sub__V1203_count = term__V1200_count*LINK_COUNT(sub__V1203); permitUnusedInt(sub__V1203_count);
      CRSX_CHECK_SORT(sink__V1199->context, sub__V1203, &sort_M_OK_xSORT); ASSERT(sink__V1199->context, !strcmp(SYMBOL(sub__V1203),  "OK" ));
      Term sub__V1204 = LINK(sink__V1199->context, SUB(term__V1200, 1)); int sub__V1204_count = term__V1200_count*LINK_COUNT(sub__V1204); permitUnusedInt(sub__V1204_count);
      /* sub__V1204 = &#0 */
      
      NamedPropertyLink namedP__V1205 = LINK_NamedPropertyLink(sink__V1199->context, NAMED_PROPERTIES(term__V1200));
      VariablePropertyLink varP__V1206 = LINK_VariablePropertyLink(sink__V1199->context, VARIABLE_PROPERTIES(term__V1200));
      UNLINK(sink__V1199->context, term__V1200);
      ADD_PROPERTIES(sink__V1199, LINK_NamedPropertyLink(sink__V1199->context, namedP__V1205), LINK_VariablePropertyLink(sink__V1199->context, varP__V1206));
      { START(sink__V1199, _M_DSTRING_s1);
        COPY(sink__V1199, sub__V1204);END(sink__V1199, _M_DSTRING_s1); }
      UNLINK_NamedPropertyLink(sink__V1199->context, namedP__V1205); 
      UNLINK_VariablePropertyLink(sink__V1199->context, varP__V1206);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION SortInternals. */
int conBindOffs_M_SortInternals[] = {0 , 0};
char *nameFun_M_SortInternals(Term term) { return  "SortInternals" ; }
struct _ConstructionDescriptor descriptor_M_SortInternals = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_SortInternals), conBindOffs_M_SortInternals, &nameFun_M_SortInternals, &step_M_SortInternals};

int step_M_SortInternals(Sink sink__V1207, Term term__V1208)
{
  int term__V1208_count = LINK_COUNT(term__V1208); permitUnusedInt(term__V1208_count);
  do {
    /* Contraction rule DEFS-SortInternals-1. */
    ASSERT(sink__V1207->context, !strcmp(SYMBOL(term__V1208),  "SortInternals" ));
    Term sub__V1209 = LINK(sink__V1207->context, SUB(term__V1208, 0)); int sub__V1209_count = term__V1208_count*LINK_COUNT(sub__V1209); permitUnusedInt(sub__V1209_count);
    /* sub__V1209 = &#1 */
    
    NamedPropertyLink namedP__V1210 = LINK_NamedPropertyLink(sink__V1207->context, NAMED_PROPERTIES(term__V1208));
    VariablePropertyLink varP__V1211 = LINK_VariablePropertyLink(sink__V1207->context, VARIABLE_PROPERTIES(term__V1208));
    UNLINK(sink__V1207->context, term__V1208);
    { START(sink__V1207, _M__sTextCons);
      { START(sink__V1207, _M__sTextChars);
        LITERAL(sink__V1207,  "sortInt" ); END(sink__V1207, _M__sTextChars); }
      { START(sink__V1207, _M__sTextCons);
        { START(sink__V1207, _M__sTextEmbed);
          { START(sink__V1207, _M_AsText);
            { START(sink__V1207, _M_MANGLE);
              COPY(sink__V1207, sub__V1209);END(sink__V1207, _M_MANGLE); }
            END(sink__V1207, _M_AsText); }
          END(sink__V1207, _M__sTextEmbed); }
        { START(sink__V1207, _M__sTextNil);
          END(sink__V1207, _M__sTextNil); }
        END(sink__V1207, _M__sTextCons); }
      END(sink__V1207, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1207->context, namedP__V1210); 
    UNLINK_VariablePropertyLink(sink__V1207->context, varP__V1211);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION UnString$1. */
int conBindOffs_M_UnString_s1[] = {0 , 0};
char *nameFun_M_UnString_s1(Term term) { return  "UnString$1" ; }
struct _ConstructionDescriptor descriptor_M_UnString_s1 = {NULL, 0, 1, sizeof(STRUCT_Con_M_UnString_s1), conBindOffs_M_UnString_s1, &nameFun_M_UnString_s1, &step_M_UnString_s1};

int step_M_UnString_s1(Sink sink__V1212, Term term__V1213)
{
  int term__V1213_count = LINK_COUNT(term__V1213); permitUnusedInt(term__V1213_count);
  do {
    /* Contraction rule DEFS-UnString-1. */
    ASSERT(sink__V1212->context, !strcmp(SYMBOL(term__V1213),  "UnString$1" ));
    Term sub__V1214 = LINK(sink__V1212->context, SUB(term__V1213, 0)); int sub__V1214_count = term__V1213_count*LINK_COUNT(sub__V1214); permitUnusedInt(sub__V1214_count);
    /* sub__V1214 = &#11 */
    UNLINK(sink__V1212->context, term__V1213);
    COPY(sink__V1212, sub__V1214);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Descriptor. */
int conBindOffs_M_Descriptor[] = {0 , 0};
char *nameFun_M_Descriptor(Term term) { return  "Descriptor" ; }
struct _ConstructionDescriptor descriptor_M_Descriptor = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_Descriptor), conBindOffs_M_Descriptor, &nameFun_M_Descriptor, &step_M_Descriptor};

int step_M_Descriptor(Sink sink__V1215, Term term__V1216)
{
  int term__V1216_count = LINK_COUNT(term__V1216); permitUnusedInt(term__V1216_count);
  do {
    /* Contraction rule DEFS-Descriptor-1. */
    ASSERT(sink__V1215->context, !strcmp(SYMBOL(term__V1216),  "Descriptor" ));
    Term sub__V1217 = LINK(sink__V1215->context, SUB(term__V1216, 0)); int sub__V1217_count = term__V1216_count*LINK_COUNT(sub__V1217); permitUnusedInt(sub__V1217_count);
    /* sub__V1217 = &#1 */
    
    NamedPropertyLink namedP__V1218 = LINK_NamedPropertyLink(sink__V1215->context, NAMED_PROPERTIES(term__V1216));
    VariablePropertyLink varP__V1219 = LINK_VariablePropertyLink(sink__V1215->context, VARIABLE_PROPERTIES(term__V1216));
    UNLINK(sink__V1215->context, term__V1216);
    { START(sink__V1215, _M__sTextCons);
      { START(sink__V1215, _M__sTextChars);
        LITERAL(sink__V1215,  "descriptor" ); END(sink__V1215, _M__sTextChars); }
      { START(sink__V1215, _M__sTextCons);
        { START(sink__V1215, _M__sTextEmbed);
          { START(sink__V1215, _M_AsText);
            { START(sink__V1215, _M_MANGLE);
              COPY(sink__V1215, sub__V1217);END(sink__V1215, _M_MANGLE); }
            END(sink__V1215, _M_AsText); }
          END(sink__V1215, _M__sTextEmbed); }
        { START(sink__V1215, _M__sTextNil);
          END(sink__V1215, _M__sTextNil); }
        END(sink__V1215, _M__sTextCons); }
      END(sink__V1215, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1215->context, namedP__V1218); 
    UNLINK_VariablePropertyLink(sink__V1215->context, varP__V1219);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Forms-Constructors$5. */
int conBindOffs_M_Forms_Constructors_s5[] = {0};
char *nameFun_M_Forms_Constructors_s5(Term term) { return  "Forms-Constructors$5" ; }
struct _ConstructionDescriptor descriptor_M_Forms_Constructors_s5 = {NULL, 0, 0, sizeof(STRUCT_Con_M_Forms_Constructors_s5), conBindOffs_M_Forms_Constructors_s5, &nameFun_M_Forms_Constructors_s5, &step_M_Forms_Constructors_s5};

int step_M_Forms_Constructors_s5(Sink sink__V1220, Term term__V1221)
{
  int term__V1221_count = LINK_COUNT(term__V1221); permitUnusedInt(term__V1221_count);
  do {
    /* Contraction rule DEFS-Forms-Constructors-4. */
    ASSERT(sink__V1220->context, !strcmp(SYMBOL(term__V1221),  "Forms-Constructors$5" ));
    UNLINK(sink__V1220->context, term__V1221);
    { START(sink__V1220, _M__sNil); END(sink__V1220, _M__sNil); } 
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Forms-Constructors$2. */
int conBindOffs_M_Forms_Constructors_s2[] = {0 , 0 , 0 , 0};
char *nameFun_M_Forms_Constructors_s2(Term term) { return  "Forms-Constructors$2" ; }
struct _ConstructionDescriptor descriptor_M_Forms_Constructors_s2 = {NULL, 0, 3, sizeof(STRUCT_Con_M_Forms_Constructors_s2), conBindOffs_M_Forms_Constructors_s2, &nameFun_M_Forms_Constructors_s2, &step_M_Forms_Constructors_s2};

int step_M_Forms_Constructors_s2(Sink sink__V1222, Term term__V1223)
{
  int term__V1223_count = LINK_COUNT(term__V1223); permitUnusedInt(term__V1223_count);
  do {
    /* Contraction rule DEFS-Forms-Constructors-3. */
    ASSERT(sink__V1222->context, !strcmp(SYMBOL(term__V1223),  "Forms-Constructors$2" ));
    Term sub__V1224 = LINK(sink__V1222->context, SUB(term__V1223, 0)); int sub__V1224_count = term__V1223_count*LINK_COUNT(sub__V1224); permitUnusedInt(sub__V1224_count);
    /* sub__V1224 = &#111 */
    Term sub__V1225 = SUB(term__V1223, 1); int sub__V1225_count = term__V1223_count*LINK_COUNT(sub__V1225); permitUnusedInt(sub__V1225_count);
    /* sub__V1225 = &#112 */
    Term sub__V1226 = LINK(sink__V1222->context, SUB(term__V1223, 2)); int sub__V1226_count = term__V1223_count*LINK_COUNT(sub__V1226); permitUnusedInt(sub__V1226_count);
    /* sub__V1226 = &#12 */
    UNLINK(sink__V1222->context, term__V1223);
    { START(sink__V1222, _M__sCons);
      COPY(sink__V1222, sub__V1224);{ START(sink__V1222, _M_Forms_Constructors);
        COPY(sink__V1222, sub__V1226);END(sink__V1222, _M_Forms_Constructors); }
      END(sink__V1222, _M__sCons); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Forms-Constructors$1. */
int conBindOffs_M_Forms_Constructors_s1[] = {0 , 0 , 0};
char *nameFun_M_Forms_Constructors_s1(Term term) { return  "Forms-Constructors$1" ; }
struct _ConstructionDescriptor descriptor_M_Forms_Constructors_s1 = {NULL, 0, 2, sizeof(STRUCT_Con_M_Forms_Constructors_s1), conBindOffs_M_Forms_Constructors_s1, &nameFun_M_Forms_Constructors_s1, &step_M_Forms_Constructors_s1};

int step_M_Forms_Constructors_s1(Sink sink__V1227, Term term__V1228)
{
  int term__V1228_count = LINK_COUNT(term__V1228); permitUnusedInt(term__V1228_count);
  do {
    /* Contraction rule DEFS-Forms-Constructors-1$Forms-Constructors$1$SORT-ALLOWS-VARIABLES. */
    ASSERT(sink__V1227->context, !strcmp(SYMBOL(term__V1228),  "Forms-Constructors$1" ));
    Term sub__V1229 = SUB(term__V1228, 0); int sub__V1229_count = term__V1228_count*LINK_COUNT(sub__V1229); permitUnusedInt(sub__V1229_count);
    FORCE(sink__V1227->context, sub__V1229); SUB(term__V1228, 0) = sub__V1229;
    if (strcmp(SYMBOL(sub__V1229),  "SORT-ALLOWS-VARIABLES" )) { break;}
    Term sub__V1230 = LINK(sink__V1227->context, SUB(term__V1228, 1)); int sub__V1230_count = term__V1228_count*LINK_COUNT(sub__V1230); permitUnusedInt(sub__V1230_count);
    /* sub__V1230 = &#0 */
    
    NamedPropertyLink namedP__V1231 = LINK_NamedPropertyLink(sink__V1227->context, NAMED_PROPERTIES(term__V1228));
    VariablePropertyLink varP__V1232 = LINK_VariablePropertyLink(sink__V1227->context, VARIABLE_PROPERTIES(term__V1228));
    UNLINK(sink__V1227->context, term__V1228);
    ADD_PROPERTIES(sink__V1227, LINK_NamedPropertyLink(sink__V1227->context, namedP__V1231), LINK_VariablePropertyLink(sink__V1227->context, varP__V1232));
    { START(sink__V1227, _M_Forms_Constructors_s3);
      COPY(sink__V1227, sub__V1230);END(sink__V1227, _M_Forms_Constructors_s3); }
    UNLINK_NamedPropertyLink(sink__V1227->context, namedP__V1231); 
    UNLINK_VariablePropertyLink(sink__V1227->context, varP__V1232);
    
    return 1;
  } while (0);
  do {
    /* Contraction rule DEFS-Forms-Constructors-2$Forms-Constructors$1$SORT-SET. */
    ASSERT(sink__V1227->context, !strcmp(SYMBOL(term__V1228),  "Forms-Constructors$1" ));
    Term sub__V1233 = SUB(term__V1228, 0); int sub__V1233_count = term__V1228_count*LINK_COUNT(sub__V1233); permitUnusedInt(sub__V1233_count);
    FORCE(sink__V1227->context, sub__V1233); SUB(term__V1228, 0) = sub__V1233;
    if (strcmp(SYMBOL(sub__V1233),  "SORT-SET" )) { break;}
    Term sub__V1234 = LINK(sink__V1227->context, SUB(sub__V1233, 0)); int sub__V1234_count = sub__V1233_count*LINK_COUNT(sub__V1234); permitUnusedInt(sub__V1234_count);
    CRSX_CHECK_SORT(sink__V1227->context, sub__V1234, &sort_M_Reified_xSort); /* sub__V1234 = &#0-0 */
    Term sub__V1235 = LINK(sink__V1227->context, SUB(sub__V1233, 1)); int sub__V1235_count = sub__V1233_count*LINK_COUNT(sub__V1235); permitUnusedInt(sub__V1235_count);
    CRSX_CHECK_SORT(sink__V1227->context, sub__V1235, &sort_M_Reified_xSort); /* sub__V1235 = &#0-1 */
    Term sub__V1236 = LINK(sink__V1227->context, SUB(sub__V1233, 2)); int sub__V1236_count = sub__V1233_count*LINK_COUNT(sub__V1236); permitUnusedInt(sub__V1236_count);
    CRSX_CHECK_SORT(sink__V1227->context, sub__V1236, &sort_M_Reified_xForm); /* sub__V1236 = &#0-2 */
    Term sub__V1237 = LINK(sink__V1227->context, SUB(term__V1228, 1)); int sub__V1237_count = term__V1228_count*LINK_COUNT(sub__V1237); permitUnusedInt(sub__V1237_count);
    /* sub__V1237 = &#3 */
    
    NamedPropertyLink namedP__V1238 = LINK_NamedPropertyLink(sink__V1227->context, NAMED_PROPERTIES(term__V1228));
    VariablePropertyLink varP__V1239 = LINK_VariablePropertyLink(sink__V1227->context, VARIABLE_PROPERTIES(term__V1228));
    UNLINK(sink__V1227->context, term__V1228);
    ADD_PROPERTIES(sink__V1227, LINK_NamedPropertyLink(sink__V1227->context, namedP__V1238), LINK_VariablePropertyLink(sink__V1227->context, varP__V1239));
    { START(sink__V1227, _M_Forms_Constructors_s4);
      COPY(sink__V1227, sub__V1234);COPY(sink__V1227, sub__V1235);COPY(sink__V1227, sub__V1236);COPY(sink__V1227, sub__V1237);END(sink__V1227, _M_Forms_Constructors_s4); }
    UNLINK_NamedPropertyLink(sink__V1227->context, namedP__V1238); 
    UNLINK_VariablePropertyLink(sink__V1227->context, varP__V1239);
    
    return 1;
  } while (0);
  do {
    /* Contraction rule DEFS-Forms-Constructors-3$Forms-Constructors$1$FORM. */
    ASSERT(sink__V1227->context, !strcmp(SYMBOL(term__V1228),  "Forms-Constructors$1" ));
    Term sub__V1240 = SUB(term__V1228, 0); int sub__V1240_count = term__V1228_count*LINK_COUNT(sub__V1240); permitUnusedInt(sub__V1240_count);
    FORCE(sink__V1227->context, sub__V1240); SUB(term__V1228, 0) = sub__V1240;
    if (strcmp(SYMBOL(sub__V1240),  "FORM" )) { break;}
    Term sub__V1241 = LINK(sink__V1227->context, SUB(sub__V1240, 0)); int sub__V1241_count = sub__V1240_count*LINK_COUNT(sub__V1241); permitUnusedInt(sub__V1241_count);
    /* sub__V1241 = &#0-0 */
    Term sub__V1242 = LINK(sink__V1227->context, SUB(sub__V1240, 1)); int sub__V1242_count = sub__V1240_count*LINK_COUNT(sub__V1242); permitUnusedInt(sub__V1242_count);
    /* sub__V1242 = &#0-1 */
    Term sub__V1243 = LINK(sink__V1227->context, SUB(term__V1228, 1)); int sub__V1243_count = term__V1228_count*LINK_COUNT(sub__V1243); permitUnusedInt(sub__V1243_count);
    /* sub__V1243 = &#2 */
    
    NamedPropertyLink namedP__V1244 = LINK_NamedPropertyLink(sink__V1227->context, NAMED_PROPERTIES(term__V1228));
    VariablePropertyLink varP__V1245 = LINK_VariablePropertyLink(sink__V1227->context, VARIABLE_PROPERTIES(term__V1228));
    UNLINK(sink__V1227->context, term__V1228);
    ADD_PROPERTIES(sink__V1227, LINK_NamedPropertyLink(sink__V1227->context, namedP__V1244), LINK_VariablePropertyLink(sink__V1227->context, varP__V1245));
    { START(sink__V1227, _M_Forms_Constructors_s2);
      COPY(sink__V1227, sub__V1241);COPY(sink__V1227, sub__V1242);COPY(sink__V1227, sub__V1243);END(sink__V1227, _M_Forms_Constructors_s2); }
    UNLINK_NamedPropertyLink(sink__V1227->context, namedP__V1244); 
    UNLINK_VariablePropertyLink(sink__V1227->context, varP__V1245);
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Forms-Constructors$4. */
int conBindOffs_M_Forms_Constructors_s4[] = {0 , 0 , 0 , 0 , 0};
char *nameFun_M_Forms_Constructors_s4(Term term) { return  "Forms-Constructors$4" ; }
struct _ConstructionDescriptor descriptor_M_Forms_Constructors_s4 = {NULL, 0, 4, sizeof(STRUCT_Con_M_Forms_Constructors_s4), conBindOffs_M_Forms_Constructors_s4, &nameFun_M_Forms_Constructors_s4, &step_M_Forms_Constructors_s4};

int step_M_Forms_Constructors_s4(Sink sink__V1246, Term term__V1247)
{
  int term__V1247_count = LINK_COUNT(term__V1247); permitUnusedInt(term__V1247_count);
  do {
    /* Contraction rule DEFS-Forms-Constructors-2. */
    ASSERT(sink__V1246->context, !strcmp(SYMBOL(term__V1247),  "Forms-Constructors$4" ));
    Term sub__V1248 = SUB(term__V1247, 0); int sub__V1248_count = term__V1247_count*LINK_COUNT(sub__V1248); permitUnusedInt(sub__V1248_count);
    CRSX_CHECK_SORT(sink__V1246->context, sub__V1248, &sort_M_Reified_xSort); /* sub__V1248 = &#111 */
    Term sub__V1249 = SUB(term__V1247, 1); int sub__V1249_count = term__V1247_count*LINK_COUNT(sub__V1249); permitUnusedInt(sub__V1249_count);
    CRSX_CHECK_SORT(sink__V1246->context, sub__V1249, &sort_M_Reified_xSort); /* sub__V1249 = &#112 */
    Term sub__V1250 = LINK(sink__V1246->context, SUB(term__V1247, 2)); int sub__V1250_count = term__V1247_count*LINK_COUNT(sub__V1250); permitUnusedInt(sub__V1250_count);
    CRSX_CHECK_SORT(sink__V1246->context, sub__V1250, &sort_M_Reified_xForm); /* sub__V1250 = &#113 */
    Term sub__V1251 = LINK(sink__V1246->context, SUB(term__V1247, 3)); int sub__V1251_count = term__V1247_count*LINK_COUNT(sub__V1251); permitUnusedInt(sub__V1251_count);
    /* sub__V1251 = &#12 */
    UNLINK(sink__V1246->context, term__V1247);
    { START(sink__V1246, _M_Forms_Constructors);
      { START(sink__V1246, _M__sCons);
        COPY(sink__V1246, sub__V1250);COPY(sink__V1246, sub__V1251);END(sink__V1246, _M__sCons); }
      END(sink__V1246, _M_Forms_Constructors); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Forms-Constructors$3. */
int conBindOffs_M_Forms_Constructors_s3[] = {0 , 0};
char *nameFun_M_Forms_Constructors_s3(Term term) { return  "Forms-Constructors$3" ; }
struct _ConstructionDescriptor descriptor_M_Forms_Constructors_s3 = {NULL, 0, 1, sizeof(STRUCT_Con_M_Forms_Constructors_s3), conBindOffs_M_Forms_Constructors_s3, &nameFun_M_Forms_Constructors_s3, &step_M_Forms_Constructors_s3};

int step_M_Forms_Constructors_s3(Sink sink__V1252, Term term__V1253)
{
  int term__V1253_count = LINK_COUNT(term__V1253); permitUnusedInt(term__V1253_count);
  do {
    /* Contraction rule DEFS-Forms-Constructors-1. */
    ASSERT(sink__V1252->context, !strcmp(SYMBOL(term__V1253),  "Forms-Constructors$3" ));
    Term sub__V1254 = LINK(sink__V1252->context, SUB(term__V1253, 0)); int sub__V1254_count = term__V1253_count*LINK_COUNT(sub__V1254); permitUnusedInt(sub__V1254_count);
    /* sub__V1254 = &#12 */
    UNLINK(sink__V1252->context, term__V1253);
    { START(sink__V1252, _M_Forms_Constructors);
      COPY(sink__V1252, sub__V1254);END(sink__V1252, _M_Forms_Constructors); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse$9. */
int conBindOffs_M_T_CheckReuse_s9[] = {0 , 0};
char *nameFun_M_T_CheckReuse_s9(Term term) { return  "T-CheckReuse$9" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s9 = {&sort_M_T_xREUSE_xSORT, 0, 1, sizeof(STRUCT_Con_M_T_CheckReuse_s9), conBindOffs_M_T_CheckReuse_s9, &nameFun_M_T_CheckReuse_s9, &step_M_T_CheckReuse_s9};

int step_M_T_CheckReuse_s9(Sink sink__V1255, Term term__V1256)
{
  int term__V1256_count = LINK_COUNT(term__V1256); permitUnusedInt(term__V1256_count);
  Term sub__V1257 = FORCE(sink__V1255->context, SUB(term__V1256, 0));
  EnumOf_M_Reified_xVariable choice__V1258 = (IS_VARIABLE_USE(sub__V1257) ? VarOf_M_Reified_xVariable : (EnumOf_M_Reified_xVariable) TAG(sub__V1257));
  switch (choice__V1258)
  {
    case VarOf_M_Reified_xVariable: {
      do {
        ASSERT(sink__V1255->context, !strcmp(SYMBOL(term__V1256),  "T-CheckReuse$9" ));
        Term sub__V1259 = SUB(term__V1256, 0); int sub__V1259_count = term__V1256_count*LINK_COUNT(sub__V1259); permitUnusedInt(sub__V1259_count);
        CRSX_CHECK_SORT(sink__V1255->context, sub__V1259, &sort_M_Reified_xVariable); /* Function DEFS-T-CheckReuse-1$vFree fall-back case for free variable */
        Variable z__V412 = linkVariable(sink__V1255->context, VARIABLE(sub__V1259)); 
        
        NamedPropertyLink namedP__V1260 = LINK_NamedPropertyLink(sink__V1255->context, NAMED_PROPERTIES(term__V1256));
        VariablePropertyLink varP__V1261 = LINK_VariablePropertyLink(sink__V1255->context, VARIABLE_PROPERTIES(term__V1256));
        UNLINK(sink__V1255->context, term__V1256);
        ADD_PROPERTIES(sink__V1255, LINK_NamedPropertyLink(sink__V1255->context, namedP__V1260), LINK_VariablePropertyLink(sink__V1255->context, varP__V1261));
        { START(sink__V1255, _M_T_CheckReuse_s10);
          USE(sink__V1255, linkVariable(sink__V1255->context, z__V412));
          END(sink__V1255, _M_T_CheckReuse_s10); }
        UNLINK_NamedPropertyLink(sink__V1255->context, namedP__V1260); 
        UNLINK_VariablePropertyLink(sink__V1255->context, varP__V1261); unlinkVariable(sink__V1255->context, z__V412);
        
        return 1;
      } while(0);
      break; } case Data_M__sTextCons: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$9$$TextCons case $TextCons */
      ASSERT(sink__V1255->context, !strcmp(SYMBOL(term__V1256),  "T-CheckReuse$9" ));
      Term sub__V1262 = SUB(term__V1256, 0); int sub__V1262_count = term__V1256_count*LINK_COUNT(sub__V1262); permitUnusedInt(sub__V1262_count);
      CRSX_CHECK_SORT(sink__V1255->context, sub__V1262, &sort_M_Reified_xVariable); ASSERT(sink__V1255->context, !strcmp(SYMBOL(sub__V1262),  "$TextCons" ));
      Term sub__V1263 = LINK(sink__V1255->context, SUB(sub__V1262, 0)); int sub__V1263_count = sub__V1262_count*LINK_COUNT(sub__V1263); permitUnusedInt(sub__V1263_count);
      CRSX_CHECK_SORT(sink__V1255->context, sub__V1263, &sort_M_Text_Part); /* sub__V1263 = &#0-0 */
      Term sub__V1264 = LINK(sink__V1255->context, SUB(sub__V1262, 1)); int sub__V1264_count = sub__V1262_count*LINK_COUNT(sub__V1264); permitUnusedInt(sub__V1264_count);
      CRSX_CHECK_SORT(sink__V1255->context, sub__V1264, &sort_M_Reified_xVariable); /* sub__V1264 = &#0-1 */
      
      NamedPropertyLink namedP__V1265 = LINK_NamedPropertyLink(sink__V1255->context, NAMED_PROPERTIES(sub__V1262));
      VariablePropertyLink varP__V1266 = LINK_VariablePropertyLink(sink__V1255->context, VARIABLE_PROPERTIES(sub__V1262));
      
      NamedPropertyLink namedP__V1267 = LINK_NamedPropertyLink(sink__V1255->context, NAMED_PROPERTIES(term__V1256));
      VariablePropertyLink varP__V1268 = LINK_VariablePropertyLink(sink__V1255->context, VARIABLE_PROPERTIES(term__V1256));
      UNLINK(sink__V1255->context, term__V1256);
      ADD_PROPERTIES(sink__V1255, LINK_NamedPropertyLink(sink__V1255->context, namedP__V1267), LINK_VariablePropertyLink(sink__V1255->context, varP__V1268));
      { START(sink__V1255, _M_T_CheckReuse_s11);
        COPY(sink__V1255, sub__V1263);COPY(sink__V1255, sub__V1264);ADD_PROPERTIES(sink__V1255, LINK_NamedPropertyLink(sink__V1255->context, namedP__V1265), LINK_VariablePropertyLink(sink__V1255->context, varP__V1266));
        { START(sink__V1255, _M_PropsOf_s_sTextCons);
          END(sink__V1255, _M_PropsOf_s_sTextCons); }
        END(sink__V1255, _M_T_CheckReuse_s11); }
      UNLINK_NamedPropertyLink(sink__V1255->context, namedP__V1267); 
      UNLINK_VariablePropertyLink(sink__V1255->context, varP__V1268);UNLINK_NamedPropertyLink(sink__V1255->context, namedP__V1265); 
      UNLINK_VariablePropertyLink(sink__V1255->context, varP__V1266);
      
      return 1;
    break; } case Data_M__sTextNil: { /* Function DEFS-T-CheckReuse-2$T-CheckReuse$9$$TextNil case $TextNil */
      ASSERT(sink__V1255->context, !strcmp(SYMBOL(term__V1256),  "T-CheckReuse$9" ));
      Term sub__V1269 = SUB(term__V1256, 0); int sub__V1269_count = term__V1256_count*LINK_COUNT(sub__V1269); permitUnusedInt(sub__V1269_count);
      CRSX_CHECK_SORT(sink__V1255->context, sub__V1269, &sort_M_Reified_xVariable); ASSERT(sink__V1255->context, !strcmp(SYMBOL(sub__V1269),  "$TextNil" ));
      
      NamedPropertyLink namedP__V1270 = LINK_NamedPropertyLink(sink__V1255->context, NAMED_PROPERTIES(sub__V1269));
      VariablePropertyLink varP__V1271 = LINK_VariablePropertyLink(sink__V1255->context, VARIABLE_PROPERTIES(sub__V1269));
      
      NamedPropertyLink namedP__V1272 = LINK_NamedPropertyLink(sink__V1255->context, NAMED_PROPERTIES(term__V1256));
      VariablePropertyLink varP__V1273 = LINK_VariablePropertyLink(sink__V1255->context, VARIABLE_PROPERTIES(term__V1256));
      UNLINK(sink__V1255->context, term__V1256);
      ADD_PROPERTIES(sink__V1255, LINK_NamedPropertyLink(sink__V1255->context, namedP__V1272), LINK_VariablePropertyLink(sink__V1255->context, varP__V1273));
      { START(sink__V1255, _M_T_CheckReuse_s12);
        ADD_PROPERTIES(sink__V1255, LINK_NamedPropertyLink(sink__V1255->context, namedP__V1270), LINK_VariablePropertyLink(sink__V1255->context, varP__V1271));
        { START(sink__V1255, _M_PropsOf_s_sTextNil);
          END(sink__V1255, _M_PropsOf_s_sTextNil); }
        END(sink__V1255, _M_T_CheckReuse_s12); }
      UNLINK_NamedPropertyLink(sink__V1255->context, namedP__V1272); 
      UNLINK_VariablePropertyLink(sink__V1255->context, varP__V1273);UNLINK_NamedPropertyLink(sink__V1255->context, namedP__V1270); 
      UNLINK_VariablePropertyLink(sink__V1255->context, varP__V1271);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION T-CheckReuse$7. */
int conBindOffs_M_T_CheckReuse_s7[] = {0 , 0 , 0};
char *nameFun_M_T_CheckReuse_s7(Term term) { return  "T-CheckReuse$7" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s7 = {&sort_M_T_xREUSE_xSORT, 0, 2, sizeof(STRUCT_Con_M_T_CheckReuse_s7), conBindOffs_M_T_CheckReuse_s7, &nameFun_M_T_CheckReuse_s7, &step_M_T_CheckReuse_s7};

int step_M_T_CheckReuse_s7(Sink sink__V1274, Term term__V1275)
{
  int term__V1275_count = LINK_COUNT(term__V1275); permitUnusedInt(term__V1275_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-2. */
    ASSERT(sink__V1274->context, !strcmp(SYMBOL(term__V1275),  "T-CheckReuse$7" ));
    Term sub__V1276 = SUB(term__V1275, 0); int sub__V1276_count = term__V1275_count*LINK_COUNT(sub__V1276); permitUnusedInt(sub__V1276_count);
    CRSX_CHECK_SORT(sink__V1274->context, sub__V1276, &sort_M_Reified_xTerm); /* sub__V1276 = &#11 */
    Term sub__V1277 = SUB(term__V1275, 1); int sub__V1277_count = term__V1275_count*LINK_COUNT(sub__V1277); permitUnusedInt(sub__V1277_count);
    CRSX_CHECK_SORT(sink__V1274->context, sub__V1277, &sort_M_Reified_xTerm); /* sub__V1277 = &#12 */
    
    NamedPropertyLink namedP__V1278 = LINK_NamedPropertyLink(sink__V1274->context, NAMED_PROPERTIES(term__V1275));
    VariablePropertyLink varP__V1279 = LINK_VariablePropertyLink(sink__V1274->context, VARIABLE_PROPERTIES(term__V1275));
    UNLINK(sink__V1274->context, term__V1275);
    { START(sink__V1274, _M_T_xNO_xREUSE);
      END(sink__V1274, _M_T_xNO_xREUSE); }
    UNLINK_NamedPropertyLink(sink__V1274->context, namedP__V1278); 
    UNLINK_VariablePropertyLink(sink__V1274->context, varP__V1279);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse$8. */
int conBindOffs_M_T_CheckReuse_s8[] = {0 , 0 , 0 , 0};
char *nameFun_M_T_CheckReuse_s8(Term term) { return  "T-CheckReuse$8" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s8 = {&sort_M_T_xREUSE_xSORT, 0, 3, sizeof(STRUCT_Con_M_T_CheckReuse_s8), conBindOffs_M_T_CheckReuse_s8, &nameFun_M_T_CheckReuse_s8, &step_M_T_CheckReuse_s8};

int step_M_T_CheckReuse_s8(Sink sink__V1280, Term term__V1281)
{
  int term__V1281_count = LINK_COUNT(term__V1281); permitUnusedInt(term__V1281_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-2. */
    ASSERT(sink__V1280->context, !strcmp(SYMBOL(term__V1281),  "T-CheckReuse$8" ));
    Term sub__V1282 = SUB(term__V1281, 0); int sub__V1282_count = term__V1281_count*LINK_COUNT(sub__V1282); permitUnusedInt(sub__V1282_count);
    /* sub__V1282 = &#11 */
    Term sub__V1283 = SUB(term__V1281, 1); int sub__V1283_count = term__V1281_count*LINK_COUNT(sub__V1283); permitUnusedInt(sub__V1283_count);
    CRSX_CHECK_SORT(sink__V1280->context, sub__V1283, &sort_M_Reified_xUse); /* sub__V1283 = &#12 */
    Term sub__V1284 = SUB(term__V1281, 2); int sub__V1284_count = term__V1281_count*LINK_COUNT(sub__V1284); permitUnusedInt(sub__V1284_count);
    CRSX_CHECK_SORT(sink__V1280->context, sub__V1284, &sort_M_Reified_xTerm); /* sub__V1284 = &#13 */
    
    NamedPropertyLink namedP__V1285 = LINK_NamedPropertyLink(sink__V1280->context, NAMED_PROPERTIES(term__V1281));
    VariablePropertyLink varP__V1286 = LINK_VariablePropertyLink(sink__V1280->context, VARIABLE_PROPERTIES(term__V1281));
    UNLINK(sink__V1280->context, term__V1281);
    { START(sink__V1280, _M_T_xNO_xREUSE);
      END(sink__V1280, _M_T_xNO_xREUSE); }
    UNLINK_NamedPropertyLink(sink__V1280->context, namedP__V1285); 
    UNLINK_VariablePropertyLink(sink__V1280->context, varP__V1286);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse$1. */
int conBindOffs_M_T_CheckReuse_s1[] = {0 , 0 , 0 , 0};
char *nameFun_M_T_CheckReuse_s1(Term term) { return  "T-CheckReuse$1" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s1 = {&sort_M_T_xREUSE_xSORT, 0, 3, sizeof(STRUCT_Con_M_T_CheckReuse_s1), conBindOffs_M_T_CheckReuse_s1, &nameFun_M_T_CheckReuse_s1, &step_M_T_CheckReuse_s1};

int step_M_T_CheckReuse_s1(Sink sink__V1287, Term term__V1288)
{
  int term__V1288_count = LINK_COUNT(term__V1288); permitUnusedInt(term__V1288_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-2. */
    ASSERT(sink__V1287->context, !strcmp(SYMBOL(term__V1288),  "T-CheckReuse$1" ));
    Term sub__V1289 = SUB(term__V1288, 0); int sub__V1289_count = term__V1288_count*LINK_COUNT(sub__V1289); permitUnusedInt(sub__V1289_count);
    CRSX_CHECK_SORT(sink__V1287->context, sub__V1289, &sort_M_Reified_xKind); /* sub__V1289 = &#11 */
    Term sub__V1290 = SUB(term__V1288, 1); int sub__V1290_count = term__V1288_count*LINK_COUNT(sub__V1290); permitUnusedInt(sub__V1290_count);
    /* sub__V1290 = &#12 */
    Term sub__V1291 = SUB(term__V1288, 2); int sub__V1291_count = term__V1288_count*LINK_COUNT(sub__V1291); permitUnusedInt(sub__V1291_count);
    /* sub__V1291 = &#13 */
    
    NamedPropertyLink namedP__V1292 = LINK_NamedPropertyLink(sink__V1287->context, NAMED_PROPERTIES(term__V1288));
    VariablePropertyLink varP__V1293 = LINK_VariablePropertyLink(sink__V1287->context, VARIABLE_PROPERTIES(term__V1288));
    UNLINK(sink__V1287->context, term__V1288);
    { START(sink__V1287, _M_T_xNO_xREUSE);
      END(sink__V1287, _M_T_xNO_xREUSE); }
    UNLINK_NamedPropertyLink(sink__V1287->context, namedP__V1292); 
    UNLINK_VariablePropertyLink(sink__V1287->context, varP__V1293);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse$2. */
int conBindOffs_M_T_CheckReuse_s2[] = {0 , 0 , 0 , 0};
char *nameFun_M_T_CheckReuse_s2(Term term) { return  "T-CheckReuse$2" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s2 = {&sort_M_T_xREUSE_xSORT, 0, 3, sizeof(STRUCT_Con_M_T_CheckReuse_s2), conBindOffs_M_T_CheckReuse_s2, &nameFun_M_T_CheckReuse_s2, &step_M_T_CheckReuse_s2};

int step_M_T_CheckReuse_s2(Sink sink__V1294, Term term__V1295)
{
  int term__V1295_count = LINK_COUNT(term__V1295); permitUnusedInt(term__V1295_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-2. */
    ASSERT(sink__V1294->context, !strcmp(SYMBOL(term__V1295),  "T-CheckReuse$2" ));
    Term sub__V1296 = SUB(term__V1295, 0); int sub__V1296_count = term__V1295_count*LINK_COUNT(sub__V1296); permitUnusedInt(sub__V1296_count);
    /* sub__V1296 = &#11 */
    Term sub__V1297 = SUB(term__V1295, 1); int sub__V1297_count = term__V1295_count*LINK_COUNT(sub__V1297); permitUnusedInt(sub__V1297_count);
    /* sub__V1297 = &#12 */
    Term sub__V1298 = SUB(term__V1295, 2); int sub__V1298_count = term__V1295_count*LINK_COUNT(sub__V1298); permitUnusedInt(sub__V1298_count);
    /* sub__V1298 = &#13 */
    
    NamedPropertyLink namedP__V1299 = LINK_NamedPropertyLink(sink__V1294->context, NAMED_PROPERTIES(term__V1295));
    VariablePropertyLink varP__V1300 = LINK_VariablePropertyLink(sink__V1294->context, VARIABLE_PROPERTIES(term__V1295));
    UNLINK(sink__V1294->context, term__V1295);
    { START(sink__V1294, _M_T_xNO_xREUSE);
      END(sink__V1294, _M_T_xNO_xREUSE); }
    UNLINK_NamedPropertyLink(sink__V1294->context, namedP__V1299); 
    UNLINK_VariablePropertyLink(sink__V1294->context, varP__V1300);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse$5. */
int conBindOffs_M_T_CheckReuse_s5[] = {0 , 0 , 0 , 0};
char *nameFun_M_T_CheckReuse_s5(Term term) { return  "T-CheckReuse$5" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s5 = {&sort_M_T_xREUSE_xSORT, 0, 3, sizeof(STRUCT_Con_M_T_CheckReuse_s5), conBindOffs_M_T_CheckReuse_s5, &nameFun_M_T_CheckReuse_s5, &step_M_T_CheckReuse_s5};

int step_M_T_CheckReuse_s5(Sink sink__V1301, Term term__V1302)
{
  int term__V1302_count = LINK_COUNT(term__V1302); permitUnusedInt(term__V1302_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-2. */
    ASSERT(sink__V1301->context, !strcmp(SYMBOL(term__V1302),  "T-CheckReuse$5" ));
    Term sub__V1303 = SUB(term__V1302, 0); int sub__V1303_count = term__V1302_count*LINK_COUNT(sub__V1303); permitUnusedInt(sub__V1303_count);
    /* sub__V1303 = &#11 */
    Term sub__V1304 = SUB(term__V1302, 1); int sub__V1304_count = term__V1302_count*LINK_COUNT(sub__V1304); permitUnusedInt(sub__V1304_count);
    /* sub__V1304 = &#12 */
    Term sub__V1305 = SUB(term__V1302, 2); int sub__V1305_count = term__V1302_count*LINK_COUNT(sub__V1305); permitUnusedInt(sub__V1305_count);
    CRSX_CHECK_SORT(sink__V1301->context, sub__V1305, &sort_M_Reified_xUse); /* sub__V1305 = &#13 */
    
    NamedPropertyLink namedP__V1306 = LINK_NamedPropertyLink(sink__V1301->context, NAMED_PROPERTIES(term__V1302));
    VariablePropertyLink varP__V1307 = LINK_VariablePropertyLink(sink__V1301->context, VARIABLE_PROPERTIES(term__V1302));
    UNLINK(sink__V1301->context, term__V1302);
    { START(sink__V1301, _M_T_xNO_xREUSE);
      END(sink__V1301, _M_T_xNO_xREUSE); }
    UNLINK_NamedPropertyLink(sink__V1301->context, namedP__V1306); 
    UNLINK_VariablePropertyLink(sink__V1301->context, varP__V1307);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse$6. */
int conBindOffs_M_T_CheckReuse_s6[] = {0 , 0 , 0 , 0};
char *nameFun_M_T_CheckReuse_s6(Term term) { return  "T-CheckReuse$6" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s6 = {&sort_M_T_xREUSE_xSORT, 0, 3, sizeof(STRUCT_Con_M_T_CheckReuse_s6), conBindOffs_M_T_CheckReuse_s6, &nameFun_M_T_CheckReuse_s6, &step_M_T_CheckReuse_s6};

int step_M_T_CheckReuse_s6(Sink sink__V1308, Term term__V1309)
{
  int term__V1309_count = LINK_COUNT(term__V1309); permitUnusedInt(term__V1309_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-2. */
    ASSERT(sink__V1308->context, !strcmp(SYMBOL(term__V1309),  "T-CheckReuse$6" ));
    Term sub__V1310 = SUB(term__V1309, 0); int sub__V1310_count = term__V1309_count*LINK_COUNT(sub__V1310); permitUnusedInt(sub__V1310_count);
    CRSX_CHECK_SORT(sink__V1308->context, sub__V1310, &sort_M_Reified_xTerm); /* sub__V1310 = &#11 */
    Term sub__V1311 = SUB(term__V1309, 1); int sub__V1311_count = term__V1309_count*LINK_COUNT(sub__V1311); permitUnusedInt(sub__V1311_count);
    CRSX_CHECK_SORT(sink__V1308->context, sub__V1311, &sort_M_Reified_xTerm); /* sub__V1311 = &#12 */
    Term sub__V1312 = SUB(term__V1309, 2); int sub__V1312_count = term__V1309_count*LINK_COUNT(sub__V1312); permitUnusedInt(sub__V1312_count);
    CRSX_CHECK_SORT(sink__V1308->context, sub__V1312, &sort_M_Reified_xTerm); /* sub__V1312 = &#13 */
    
    NamedPropertyLink namedP__V1313 = LINK_NamedPropertyLink(sink__V1308->context, NAMED_PROPERTIES(term__V1309));
    VariablePropertyLink varP__V1314 = LINK_VariablePropertyLink(sink__V1308->context, VARIABLE_PROPERTIES(term__V1309));
    UNLINK(sink__V1308->context, term__V1309);
    { START(sink__V1308, _M_T_xNO_xREUSE);
      END(sink__V1308, _M_T_xNO_xREUSE); }
    UNLINK_NamedPropertyLink(sink__V1308->context, namedP__V1313); 
    UNLINK_VariablePropertyLink(sink__V1308->context, varP__V1314);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse$3. */
int conBindOffs_M_T_CheckReuse_s3[] = {0 , 0 , 0 , 0};
char *nameFun_M_T_CheckReuse_s3(Term term) { return  "T-CheckReuse$3" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s3 = {&sort_M_T_xREUSE_xSORT, 0, 3, sizeof(STRUCT_Con_M_T_CheckReuse_s3), conBindOffs_M_T_CheckReuse_s3, &nameFun_M_T_CheckReuse_s3, &step_M_T_CheckReuse_s3};

int step_M_T_CheckReuse_s3(Sink sink__V1315, Term term__V1316)
{
  int term__V1316_count = LINK_COUNT(term__V1316); permitUnusedInt(term__V1316_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-2. */
    ASSERT(sink__V1315->context, !strcmp(SYMBOL(term__V1316),  "T-CheckReuse$3" ));
    Term sub__V1317 = SUB(term__V1316, 0); int sub__V1317_count = term__V1316_count*LINK_COUNT(sub__V1317); permitUnusedInt(sub__V1317_count);
    CRSX_CHECK_SORT(sink__V1315->context, sub__V1317, &sort_M_Reified_xVariable); /* sub__V1317 = &#11 */
    Term sub__V1318 = SUB(term__V1316, 1); int sub__V1318_count = term__V1316_count*LINK_COUNT(sub__V1318); permitUnusedInt(sub__V1318_count);
    /* sub__V1318 = &#12 */
    Term sub__V1319 = SUB(term__V1316, 2); int sub__V1319_count = term__V1316_count*LINK_COUNT(sub__V1319); permitUnusedInt(sub__V1319_count);
    /* sub__V1319 = &#13 */
    
    NamedPropertyLink namedP__V1320 = LINK_NamedPropertyLink(sink__V1315->context, NAMED_PROPERTIES(term__V1316));
    VariablePropertyLink varP__V1321 = LINK_VariablePropertyLink(sink__V1315->context, VARIABLE_PROPERTIES(term__V1316));
    UNLINK(sink__V1315->context, term__V1316);
    { START(sink__V1315, _M_T_xNO_xREUSE);
      END(sink__V1315, _M_T_xNO_xREUSE); }
    UNLINK_NamedPropertyLink(sink__V1315->context, namedP__V1320); 
    UNLINK_VariablePropertyLink(sink__V1315->context, varP__V1321);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION T-CheckReuse$4. */
int conBindOffs_M_T_CheckReuse_s4[] = {0 , 0 , 0};
char *nameFun_M_T_CheckReuse_s4(Term term) { return  "T-CheckReuse$4" ; }
struct _ConstructionDescriptor descriptor_M_T_CheckReuse_s4 = {&sort_M_T_xREUSE_xSORT, 0, 2, sizeof(STRUCT_Con_M_T_CheckReuse_s4), conBindOffs_M_T_CheckReuse_s4, &nameFun_M_T_CheckReuse_s4, &step_M_T_CheckReuse_s4};

int step_M_T_CheckReuse_s4(Sink sink__V1322, Term term__V1323)
{
  int term__V1323_count = LINK_COUNT(term__V1323); permitUnusedInt(term__V1323_count);
  do {
    /* Contraction rule DEFS-T-CheckReuse-2. */
    ASSERT(sink__V1322->context, !strcmp(SYMBOL(term__V1323),  "T-CheckReuse$4" ));
    Term sub__V1324 = SUB(term__V1323, 0); int sub__V1324_count = term__V1323_count*LINK_COUNT(sub__V1324); permitUnusedInt(sub__V1324_count);
    /* sub__V1324 = &#11 */
    Term sub__V1325 = SUB(term__V1323, 1); int sub__V1325_count = term__V1323_count*LINK_COUNT(sub__V1325); permitUnusedInt(sub__V1325_count);
    CRSX_CHECK_SORT(sink__V1322->context, sub__V1325, &sort_M_Reified_xSort); /* sub__V1325 = &#12 */
    
    NamedPropertyLink namedP__V1326 = LINK_NamedPropertyLink(sink__V1322->context, NAMED_PROPERTIES(term__V1323));
    VariablePropertyLink varP__V1327 = LINK_VariablePropertyLink(sink__V1322->context, VARIABLE_PROPERTIES(term__V1323));
    UNLINK(sink__V1322->context, term__V1323);
    { START(sink__V1322, _M_T_xNO_xREUSE);
      END(sink__V1322, _M_T_xNO_xREUSE); }
    UNLINK_NamedPropertyLink(sink__V1322->context, namedP__V1326); 
    UNLINK_VariablePropertyLink(sink__V1322->context, varP__V1327);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION ConcatText. */
int conBindOffs_M_ConcatText[] = {0 , 0 , 0};
char *nameFun_M_ConcatText(Term term) { return  "ConcatText" ; }
struct _ConstructionDescriptor descriptor_M_ConcatText = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_ConcatText), conBindOffs_M_ConcatText, &nameFun_M_ConcatText, &step_M_ConcatText};

int step_M_ConcatText(Sink sink__V1328, Term term__V1329)
{
  int term__V1329_count = LINK_COUNT(term__V1329); permitUnusedInt(term__V1329_count);
  Term sub__V1330 = FORCE(sink__V1328->context, SUB(term__V1329, 0));
  EnumOf_M__sList choice__V1331 = (IS_VARIABLE_USE(sub__V1330) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V1330));
  switch (choice__V1331)
  {
    case Data_M__sNil: { /* Function DEFS-ConcatText-1$ConcatText$$Nil case $Nil */
      ASSERT(sink__V1328->context, !strcmp(SYMBOL(term__V1329),  "ConcatText" ));
      Term sub__V1332 = SUB(term__V1329, 0); int sub__V1332_count = term__V1329_count*LINK_COUNT(sub__V1332); permitUnusedInt(sub__V1332_count);
      ASSERT(sink__V1328->context, !strcmp(SYMBOL(sub__V1332),  "$Nil" ));
      Term sub__V1333 = LINK(sink__V1328->context, SUB(term__V1329, 1)); int sub__V1333_count = term__V1329_count*LINK_COUNT(sub__V1333); permitUnusedInt(sub__V1333_count);
      CRSX_CHECK_SORT(sink__V1328->context, sub__V1333, &sort_M_Reified_xVariable); /* sub__V1333 = &#0 */
      
      NamedPropertyLink namedP__V1334 = LINK_NamedPropertyLink(sink__V1328->context, NAMED_PROPERTIES(term__V1329));
      VariablePropertyLink varP__V1335 = LINK_VariablePropertyLink(sink__V1328->context, VARIABLE_PROPERTIES(term__V1329));
      UNLINK(sink__V1328->context, term__V1329);
      ADD_PROPERTIES(sink__V1328, LINK_NamedPropertyLink(sink__V1328->context, namedP__V1334), LINK_VariablePropertyLink(sink__V1328->context, varP__V1335));
      { START(sink__V1328, _M_ConcatText_s2);
        COPY(sink__V1328, sub__V1333);END(sink__V1328, _M_ConcatText_s2); }
      UNLINK_NamedPropertyLink(sink__V1328->context, namedP__V1334); 
      UNLINK_VariablePropertyLink(sink__V1328->context, varP__V1335);
      
      return 1;
    break; } case Data_M__sCons: { /* Function DEFS-ConcatText-2$ConcatText$$Cons case $Cons */
      ASSERT(sink__V1328->context, !strcmp(SYMBOL(term__V1329),  "ConcatText" ));
      Term sub__V1336 = SUB(term__V1329, 0); int sub__V1336_count = term__V1329_count*LINK_COUNT(sub__V1336); permitUnusedInt(sub__V1336_count);
      ASSERT(sink__V1328->context, !strcmp(SYMBOL(sub__V1336),  "$Cons" ));
      Term sub__V1337 = LINK(sink__V1328->context, SUB(sub__V1336, 0)); int sub__V1337_count = sub__V1336_count*LINK_COUNT(sub__V1337); permitUnusedInt(sub__V1337_count);
      /* sub__V1337 = &#0-0 */
      Term sub__V1338 = LINK(sink__V1328->context, SUB(sub__V1336, 1)); int sub__V1338_count = sub__V1336_count*LINK_COUNT(sub__V1338); permitUnusedInt(sub__V1338_count);
      /* sub__V1338 = &#0-1 */
      Term sub__V1339 = LINK(sink__V1328->context, SUB(term__V1329, 1)); int sub__V1339_count = term__V1329_count*LINK_COUNT(sub__V1339); permitUnusedInt(sub__V1339_count);
      CRSX_CHECK_SORT(sink__V1328->context, sub__V1339, &sort_M_Reified_xVariable); /* sub__V1339 = &#2 */
      
      NamedPropertyLink namedP__V1340 = LINK_NamedPropertyLink(sink__V1328->context, NAMED_PROPERTIES(term__V1329));
      VariablePropertyLink varP__V1341 = LINK_VariablePropertyLink(sink__V1328->context, VARIABLE_PROPERTIES(term__V1329));
      UNLINK(sink__V1328->context, term__V1329);
      ADD_PROPERTIES(sink__V1328, LINK_NamedPropertyLink(sink__V1328->context, namedP__V1340), LINK_VariablePropertyLink(sink__V1328->context, varP__V1341));
      { START(sink__V1328, _M_ConcatText_s1);
        COPY(sink__V1328, sub__V1337);COPY(sink__V1328, sub__V1338);COPY(sink__V1328, sub__V1339);END(sink__V1328, _M_ConcatText_s1); }
      UNLINK_NamedPropertyLink(sink__V1328->context, namedP__V1340); 
      UNLINK_VariablePropertyLink(sink__V1328->context, varP__V1341);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION UnNumeric. */
int conBindOffs_M_UnNumeric[] = {0 , 0};
char *nameFun_M_UnNumeric(Term term) { return  "UnNumeric" ; }
struct _ConstructionDescriptor descriptor_M_UnNumeric = {NULL, 0, 1, sizeof(STRUCT_Con_M_UnNumeric), conBindOffs_M_UnNumeric, &nameFun_M_UnNumeric, &step_M_UnNumeric};

int step_M_UnNumeric(Sink sink__V1342, Term term__V1343)
{
  int term__V1343_count = LINK_COUNT(term__V1343); permitUnusedInt(term__V1343_count);
  Term sub__V1344 = FORCE(sink__V1342->context, SUB(term__V1343, 0));
  EnumOf_M_STRING_xENTRY choice__V1345 = (IS_VARIABLE_USE(sub__V1344) ? VarOf_M_STRING_xENTRY : (EnumOf_M_STRING_xENTRY) TAG(sub__V1344));
  switch (choice__V1345)
  {
    case Data_M_NUM_xVALUE: { /* Function DEFS-UnNumeric-1$UnNumeric$NUM_VALUE case NUM_VALUE */
      ASSERT(sink__V1342->context, !strcmp(SYMBOL(term__V1343),  "UnNumeric" ));
      Term sub__V1346 = SUB(term__V1343, 0); int sub__V1346_count = term__V1343_count*LINK_COUNT(sub__V1346); permitUnusedInt(sub__V1346_count);
      CRSX_CHECK_SORT(sink__V1342->context, sub__V1346, &sort_M_STRING_xENTRY); ASSERT(sink__V1342->context, !strcmp(SYMBOL(sub__V1346),  "NUM_VALUE" ));
      Term sub__V1347 = LINK(sink__V1342->context, SUB(sub__V1346, 0)); int sub__V1347_count = sub__V1346_count*LINK_COUNT(sub__V1347); permitUnusedInt(sub__V1347_count);
      /* sub__V1347 = &#0-0 */
      
      NamedPropertyLink namedP__V1348 = LINK_NamedPropertyLink(sink__V1342->context, NAMED_PROPERTIES(term__V1343));
      VariablePropertyLink varP__V1349 = LINK_VariablePropertyLink(sink__V1342->context, VARIABLE_PROPERTIES(term__V1343));
      UNLINK(sink__V1342->context, term__V1343);
      ADD_PROPERTIES(sink__V1342, LINK_NamedPropertyLink(sink__V1342->context, namedP__V1348), LINK_VariablePropertyLink(sink__V1342->context, varP__V1349));
      { START(sink__V1342, _M_UnNumeric_s1);
        COPY(sink__V1342, sub__V1347);END(sink__V1342, _M_UnNumeric_s1); }
      UNLINK_NamedPropertyLink(sink__V1342->context, namedP__V1348); 
      UNLINK_VariablePropertyLink(sink__V1342->context, varP__V1349);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION SortNames. */
int conBindOffs_M_SortNames[] = {0 , 0};
char *nameFun_M_SortNames(Term term) { return  "SortNames" ; }
struct _ConstructionDescriptor descriptor_M_SortNames = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_SortNames), conBindOffs_M_SortNames, &nameFun_M_SortNames, &step_M_SortNames};

int step_M_SortNames(Sink sink__V1350, Term term__V1351)
{
  int term__V1351_count = LINK_COUNT(term__V1351); permitUnusedInt(term__V1351_count);
  do {
    /* Contraction rule DEFS-SortNames-1. */
    ASSERT(sink__V1350->context, !strcmp(SYMBOL(term__V1351),  "SortNames" ));
    Term sub__V1352 = LINK(sink__V1350->context, SUB(term__V1351, 0)); int sub__V1352_count = term__V1351_count*LINK_COUNT(sub__V1352); permitUnusedInt(sub__V1352_count);
    /* sub__V1352 = &#1 */
    
    NamedPropertyLink namedP__V1353 = LINK_NamedPropertyLink(sink__V1350->context, NAMED_PROPERTIES(term__V1351));
    VariablePropertyLink varP__V1354 = LINK_VariablePropertyLink(sink__V1350->context, VARIABLE_PROPERTIES(term__V1351));
    UNLINK(sink__V1350->context, term__V1351);
    { START(sink__V1350, _M__sTextCons);
      { START(sink__V1350, _M__sTextChars);
        LITERAL(sink__V1350,  "sortNam" ); END(sink__V1350, _M__sTextChars); }
      { START(sink__V1350, _M__sTextCons);
        { START(sink__V1350, _M__sTextEmbed);
          { START(sink__V1350, _M_AsText);
            { START(sink__V1350, _M_MANGLE);
              COPY(sink__V1350, sub__V1352);END(sink__V1350, _M_MANGLE); }
            END(sink__V1350, _M_AsText); }
          END(sink__V1350, _M__sTextEmbed); }
        { START(sink__V1350, _M__sTextNil);
          END(sink__V1350, _M__sTextNil); }
        END(sink__V1350, _M__sTextCons); }
      END(sink__V1350, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1350->context, namedP__V1353); 
    UNLINK_VariablePropertyLink(sink__V1350->context, varP__V1354);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION UnVariable. */
int conBindOffs_M_UnVariable[] = {0 , 0};
char *nameFun_M_UnVariable(Term term) { return  "UnVariable" ; }
struct _ConstructionDescriptor descriptor_M_UnVariable = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_UnVariable), conBindOffs_M_UnVariable, &nameFun_M_UnVariable, &step_M_UnVariable};

int step_M_UnVariable(Sink sink__V1355, Term term__V1356)
{
  int term__V1356_count = LINK_COUNT(term__V1356); permitUnusedInt(term__V1356_count);
  Term sub__V1357 = FORCE(sink__V1355->context, SUB(term__V1356, 0));
  EnumOf_M_STRING_xENTRY choice__V1358 = (IS_VARIABLE_USE(sub__V1357) ? VarOf_M_STRING_xENTRY : (EnumOf_M_STRING_xENTRY) TAG(sub__V1357));
  switch (choice__V1358)
  {
    case Data_M_VARIABLE: { /* Function DEFS-UnVariable-1$UnVariable$VARIABLE case VARIABLE */
      ASSERT(sink__V1355->context, !strcmp(SYMBOL(term__V1356),  "UnVariable" ));
      Term sub__V1359 = SUB(term__V1356, 0); int sub__V1359_count = term__V1356_count*LINK_COUNT(sub__V1359); permitUnusedInt(sub__V1359_count);
      CRSX_CHECK_SORT(sink__V1355->context, sub__V1359, &sort_M_STRING_xENTRY); ASSERT(sink__V1355->context, !strcmp(SYMBOL(sub__V1359),  "VARIABLE" ));
      Term sub__V1360 = LINK(sink__V1355->context, SUB(sub__V1359, 0)); int sub__V1360_count = sub__V1359_count*LINK_COUNT(sub__V1360); permitUnusedInt(sub__V1360_count);
      CRSX_CHECK_SORT(sink__V1355->context, sub__V1360, &sort_M_Reified_xVariable); /* sub__V1360 = &#0-0 */
      
      NamedPropertyLink namedP__V1361 = LINK_NamedPropertyLink(sink__V1355->context, NAMED_PROPERTIES(term__V1356));
      VariablePropertyLink varP__V1362 = LINK_VariablePropertyLink(sink__V1355->context, VARIABLE_PROPERTIES(term__V1356));
      UNLINK(sink__V1355->context, term__V1356);
      ADD_PROPERTIES(sink__V1355, LINK_NamedPropertyLink(sink__V1355->context, namedP__V1361), LINK_VariablePropertyLink(sink__V1355->context, varP__V1362));
      { START(sink__V1355, _M_UnVariable_s1);
        COPY(sink__V1355, sub__V1360);END(sink__V1355, _M_UnVariable_s1); }
      UNLINK_NamedPropertyLink(sink__V1355->context, namedP__V1361); 
      UNLINK_VariablePropertyLink(sink__V1355->context, varP__V1362);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION DelayMapText$1. */
int conBindOffs_M_DelayMapText_s1[] = {0 , 0 , 2};
char *nameFun_M_DelayMapText_s1(Term term) { return  "DelayMapText$1" ; }
struct _ConstructionDescriptor descriptor_M_DelayMapText_s1 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_DelayMapText_s1), conBindOffs_M_DelayMapText_s1, &nameFun_M_DelayMapText_s1, &step_M_DelayMapText_s1};

int step_M_DelayMapText_s1(Sink sink__V1363, Term term__V1364)
{
  int term__V1364_count = LINK_COUNT(term__V1364); permitUnusedInt(term__V1364_count);
  Term sub__V1365 = FORCE(sink__V1363->context, SUB(term__V1364, 0));
  EnumOf_M__sList choice__V1366 = (IS_VARIABLE_USE(sub__V1365) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V1365));
  switch (choice__V1366)
  {
    case Data_M__sCons: { /* Function DEFS-DelayMapText-1$DelayMapText$1$$Cons case $Cons */
      ASSERT(sink__V1363->context, !strcmp(SYMBOL(term__V1364),  "DelayMapText$1" ));
      Term sub__V1367 = SUB(term__V1364, 0); int sub__V1367_count = term__V1364_count*LINK_COUNT(sub__V1367); permitUnusedInt(sub__V1367_count);
      ASSERT(sink__V1363->context, !strcmp(SYMBOL(sub__V1367),  "$Cons" ));
      Term sub__V1368 = LINK(sink__V1363->context, SUB(sub__V1367, 0)); int sub__V1368_count = sub__V1367_count*LINK_COUNT(sub__V1368); permitUnusedInt(sub__V1368_count);
      /* sub__V1368 = &#0-0 */
      Term sub__V1369 = LINK(sink__V1363->context, SUB(sub__V1367, 1)); int sub__V1369_count = sub__V1367_count*LINK_COUNT(sub__V1369); permitUnusedInt(sub__V1369_count);
      /* sub__V1369 = &#0-1 */
      Variable x__V1370 = linkVariable(sink__V1363->context, BINDER(term__V1364,1,0)); if (term__V1364_count <= 1) UNBIND(x__V1370);
      Variable x__V1371 = linkVariable(sink__V1363->context, BINDER(term__V1364,1,1)); if (term__V1364_count <= 1) UNBIND(x__V1371);
      Term sub__V1372 = LINK(sink__V1363->context, SUB(term__V1364, 1)); int sub__V1372_count = term__V1364_count*LINK_COUNT(sub__V1372); permitUnusedInt(sub__V1372_count);
      CRSX_CHECK_SORT(sink__V1363->context, sub__V1372, &sort_M_Reified_xVariable); /* sub__V1372 = &#2 */
      
      NamedPropertyLink namedP__V1373 = LINK_NamedPropertyLink(sink__V1363->context, NAMED_PROPERTIES(term__V1364));
      VariablePropertyLink varP__V1374 = LINK_VariablePropertyLink(sink__V1363->context, VARIABLE_PROPERTIES(term__V1364));
      UNLINK(sink__V1363->context, term__V1364);
      ADD_PROPERTIES(sink__V1363, LINK_NamedPropertyLink(sink__V1363->context, namedP__V1373), LINK_VariablePropertyLink(sink__V1363->context, varP__V1374));
      { START(sink__V1363, _M_DelayMapText_s2);
        COPY(sink__V1363, sub__V1368);COPY(sink__V1363, sub__V1369);{ if (!IS_BOUND(x__V1370)) { REBIND(linkVariable(sink__V1363->context, x__V1370));
            REBIND(linkVariable(sink__V1363->context, x__V1371));
            Variable binds__V1375[2] = {x__V1370,x__V1371}; BINDS(sink__V1363, 2, binds__V1375);
            COPY(sink__V1363, sub__V1372); /* REUSED SUBSTITUTION */  }
          else { Variable b__V1376 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1363->context,"b__V1376");
            Variable b__V1377 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1363->context,"b__V1377");
            Variable binds__V1378[2] = {b__V1376,b__V1377}; BINDS(sink__V1363, 2, binds__V1378);
            {
              Term arg__V1379;
              { Sink buf__V1380 = ALLOCA_BUFFER(sink__V1363->context);
                USE(buf__V1380, linkVariable(buf__V1380->context, b__V1376));
                arg__V1379 = BUFFER_TERM(buf__V1380); FREE_BUFFER(buf__V1380); }
              Term arg__V1381;
              { Sink buf__V1382 = ALLOCA_BUFFER(sink__V1363->context);
                USE(buf__V1382, linkVariable(buf__V1382->context, b__V1377));
                arg__V1381 = BUFFER_TERM(buf__V1382); FREE_BUFFER(buf__V1382); }
              Variable vars__V1383[2] = {x__V1370,x__V1371};
              Term args__V1384[2] = {arg__V1379,arg__V1381};
              struct _SubstitutionFrame substitution__V1385 = {NULL, 0, 2, vars__V1383, args__V1384};
              SUBSTITUTE(sink__V1363, sub__V1372, &substitution__V1385); }
                }
           }
        END(sink__V1363, _M_DelayMapText_s2); }
      UNLINK_NamedPropertyLink(sink__V1363->context, namedP__V1373); 
      UNLINK_VariablePropertyLink(sink__V1363->context, varP__V1374);
      unlinkVariable(sink__V1363->context, x__V1371); unlinkVariable(sink__V1363->context, x__V1370);
      
      return 1;
    break; } case Data_M__sNil: { /* Function DEFS-DelayMapText-2$DelayMapText$1$$Nil case $Nil */
      ASSERT(sink__V1363->context, !strcmp(SYMBOL(term__V1364),  "DelayMapText$1" ));
      Term sub__V1386 = SUB(term__V1364, 0); int sub__V1386_count = term__V1364_count*LINK_COUNT(sub__V1386); permitUnusedInt(sub__V1386_count);
      ASSERT(sink__V1363->context, !strcmp(SYMBOL(sub__V1386),  "$Nil" ));
      Variable x__V1387 = linkVariable(sink__V1363->context, BINDER(term__V1364,1,0)); if (term__V1364_count <= 1) UNBIND(x__V1387);
      Variable x__V1388 = linkVariable(sink__V1363->context, BINDER(term__V1364,1,1)); if (term__V1364_count <= 1) UNBIND(x__V1388);
      Term sub__V1389 = LINK(sink__V1363->context, SUB(term__V1364, 1)); int sub__V1389_count = term__V1364_count*LINK_COUNT(sub__V1389); permitUnusedInt(sub__V1389_count);
      CRSX_CHECK_SORT(sink__V1363->context, sub__V1389, &sort_M_Reified_xVariable); /* sub__V1389 = &#0 */
      
      NamedPropertyLink namedP__V1390 = LINK_NamedPropertyLink(sink__V1363->context, NAMED_PROPERTIES(term__V1364));
      VariablePropertyLink varP__V1391 = LINK_VariablePropertyLink(sink__V1363->context, VARIABLE_PROPERTIES(term__V1364));
      UNLINK(sink__V1363->context, term__V1364);
      ADD_PROPERTIES(sink__V1363, LINK_NamedPropertyLink(sink__V1363->context, namedP__V1390), LINK_VariablePropertyLink(sink__V1363->context, varP__V1391));
      { START(sink__V1363, _M_DelayMapText_s3);
        { if (!IS_BOUND(x__V1387)) { REBIND(linkVariable(sink__V1363->context, x__V1387));
            REBIND(linkVariable(sink__V1363->context, x__V1388));
            Variable binds__V1392[2] = {x__V1387,x__V1388}; BINDS(sink__V1363, 2, binds__V1392);
            COPY(sink__V1363, sub__V1389); /* REUSED SUBSTITUTION */  }
          else { Variable b__V1393 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1363->context,"b__V1393");
            Variable b__V1394 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1363->context,"b__V1394");
            Variable binds__V1395[2] = {b__V1393,b__V1394}; BINDS(sink__V1363, 2, binds__V1395);
            {
              Term arg__V1396;
              { Sink buf__V1397 = ALLOCA_BUFFER(sink__V1363->context);
                USE(buf__V1397, linkVariable(buf__V1397->context, b__V1393));
                arg__V1396 = BUFFER_TERM(buf__V1397); FREE_BUFFER(buf__V1397); }
              Term arg__V1398;
              { Sink buf__V1399 = ALLOCA_BUFFER(sink__V1363->context);
                USE(buf__V1399, linkVariable(buf__V1399->context, b__V1394));
                arg__V1398 = BUFFER_TERM(buf__V1399); FREE_BUFFER(buf__V1399); }
              Variable vars__V1400[2] = {x__V1387,x__V1388};
              Term args__V1401[2] = {arg__V1396,arg__V1398};
              struct _SubstitutionFrame substitution__V1402 = {NULL, 0, 2, vars__V1400, args__V1401};
              SUBSTITUTE(sink__V1363, sub__V1389, &substitution__V1402); }
                }
           }
        END(sink__V1363, _M_DelayMapText_s3); }
      UNLINK_NamedPropertyLink(sink__V1363->context, namedP__V1390); 
      UNLINK_VariablePropertyLink(sink__V1363->context, varP__V1391);
      unlinkVariable(sink__V1363->context, x__V1388); unlinkVariable(sink__V1363->context, x__V1387);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION DelayMapText$3. */
int conBindOffs_M_DelayMapText_s3[] = {0 , 2};
char *nameFun_M_DelayMapText_s3(Term term) { return  "DelayMapText$3" ; }
struct _ConstructionDescriptor descriptor_M_DelayMapText_s3 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_DelayMapText_s3), conBindOffs_M_DelayMapText_s3, &nameFun_M_DelayMapText_s3, &step_M_DelayMapText_s3};

int step_M_DelayMapText_s3(Sink sink__V1403, Term term__V1404)
{
  int term__V1404_count = LINK_COUNT(term__V1404); permitUnusedInt(term__V1404_count);
  do {
    /* Contraction rule DEFS-DelayMapText-2. */
    ASSERT(sink__V1403->context, !strcmp(SYMBOL(term__V1404),  "DelayMapText$3" ));
    Variable x__V1405 = linkVariable(sink__V1403->context, BINDER(term__V1404,0,0)); if (term__V1404_count <= 1) UNBIND(x__V1405);
    Variable x__V1406 = linkVariable(sink__V1403->context, BINDER(term__V1404,0,1)); if (term__V1404_count <= 1) UNBIND(x__V1406);
    Term sub__V1407 = SUB(term__V1404, 0); int sub__V1407_count = term__V1404_count*LINK_COUNT(sub__V1407); permitUnusedInt(sub__V1407_count);
    CRSX_CHECK_SORT(sink__V1403->context, sub__V1407, &sort_M_Reified_xVariable); /* sub__V1407 = &#1 */
    
    NamedPropertyLink namedP__V1408 = LINK_NamedPropertyLink(sink__V1403->context, NAMED_PROPERTIES(term__V1404));
    VariablePropertyLink varP__V1409 = LINK_VariablePropertyLink(sink__V1403->context, VARIABLE_PROPERTIES(term__V1404));
    UNLINK(sink__V1403->context, term__V1404);
    { START(sink__V1403, _M__sTextNil);
      END(sink__V1403, _M__sTextNil); }
    UNLINK_NamedPropertyLink(sink__V1403->context, namedP__V1408); 
    UNLINK_VariablePropertyLink(sink__V1403->context, varP__V1409);
    unlinkVariable(sink__V1403->context, x__V1406); unlinkVariable(sink__V1403->context, x__V1405);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION DelayMapText$2. */
int conBindOffs_M_DelayMapText_s2[] = {0 , 0 , 0 , 2};
char *nameFun_M_DelayMapText_s2(Term term) { return  "DelayMapText$2" ; }
struct _ConstructionDescriptor descriptor_M_DelayMapText_s2 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_DelayMapText_s2), conBindOffs_M_DelayMapText_s2, &nameFun_M_DelayMapText_s2, &step_M_DelayMapText_s2};

int step_M_DelayMapText_s2(Sink sink__V1410, Term term__V1411)
{
  int term__V1411_count = LINK_COUNT(term__V1411); permitUnusedInt(term__V1411_count);
  do {
    /* Contraction rule DEFS-DelayMapText-1. */
    ASSERT(sink__V1410->context, !strcmp(SYMBOL(term__V1411),  "DelayMapText$2" ));
    Term sub__V1412 = LINK(sink__V1410->context, SUB(term__V1411, 0)); int sub__V1412_count = term__V1411_count*LINK_COUNT(sub__V1412); permitUnusedInt(sub__V1412_count);
    /* sub__V1412 = &#21 */
    Term sub__V1413 = LINK(sink__V1410->context, SUB(term__V1411, 1)); int sub__V1413_count = term__V1411_count*LINK_COUNT(sub__V1413); permitUnusedInt(sub__V1413_count);
    /* sub__V1413 = &#22 */
    Variable x__V1414 = linkVariable(sink__V1410->context, BINDER(term__V1411,2,0)); if (term__V1411_count <= 1) UNBIND(x__V1414);
    Variable x__V1415 = linkVariable(sink__V1410->context, BINDER(term__V1411,2,1)); if (term__V1411_count <= 1) UNBIND(x__V1415);
    Term sub__V1416 = LINK(sink__V1410->context, SUB(term__V1411, 2)); int sub__V1416_count = term__V1411_count*LINK_COUNT(sub__V1416); permitUnusedInt(sub__V1416_count);
    CRSX_CHECK_SORT(sink__V1410->context, sub__V1416, &sort_M_Reified_xVariable); UNLINK_SUB(sink__V1410->context, term__V1411,  2); NORMALIZE(sink__V1410->context, sub__V1416); SUB(term__V1411,  2) = LINK(sink__V1410->context, sub__V1416);
    /* sub__V1416 = &#1 */
    
    NamedPropertyLink namedP__V1417 = LINK_NamedPropertyLink(sink__V1410->context, NAMED_PROPERTIES(term__V1411));
    VariablePropertyLink varP__V1418 = LINK_VariablePropertyLink(sink__V1410->context, VARIABLE_PROPERTIES(term__V1411));
    UNLINK(sink__V1410->context, term__V1411);
    { START(sink__V1410, _M__sTextCons);
      { START(sink__V1410, _M__sTextEmbed);
        { START(sink__V1410, _M_AsText);
          {
            Term arg__V1419;
            { Sink buf__V1420 = ALLOCA_BUFFER(sink__V1410->context);
              { START(buf__V1420, _M_OK); END(buf__V1420, _M_OK); } arg__V1419 = BUFFER_TERM(buf__V1420); FREE_BUFFER(buf__V1420); }
            Term arg__V1421;
            { Sink buf__V1422 = ALLOCA_BUFFER(sink__V1410->context);
              COPY(buf__V1422, sub__V1412);arg__V1421 = BUFFER_TERM(buf__V1422); FREE_BUFFER(buf__V1422); }
            Variable vars__V1423[2] = {x__V1414,x__V1415};
            Term args__V1424[2] = {arg__V1419,arg__V1421};
            struct _SubstitutionFrame substitution__V1425 = {NULL, 0, 2, vars__V1423, args__V1424};
            SUBSTITUTE(sink__V1410, LINK(sink__V1410->context,sub__V1416), &substitution__V1425); }
          END(sink__V1410, _M_AsText); }
        END(sink__V1410, _M__sTextEmbed); }
      { START(sink__V1410, _M__sTextCons);
        { START(sink__V1410, _M__sTextEmbed);
          { START(sink__V1410, _M_AsText);
            { START(sink__V1410, _M_DelayMapText_s1);
              COPY(sink__V1410, sub__V1413);{ Variable x__V1426 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1410->context,"x__V1426");
                Variable x__V1427 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1410->context,"x__V1427");
                Variable binds__V1428[2] = {x__V1426,x__V1427}; BINDS(sink__V1410, 2, binds__V1428);
                {
                  Term arg__V1429;
                  { Sink buf__V1430 = ALLOCA_BUFFER(sink__V1410->context);
                    USE(buf__V1430, linkVariable(buf__V1430->context, x__V1426));
                    arg__V1429 = BUFFER_TERM(buf__V1430); FREE_BUFFER(buf__V1430); }
                  Term arg__V1431;
                  { Sink buf__V1432 = ALLOCA_BUFFER(sink__V1410->context);
                    USE(buf__V1432, linkVariable(buf__V1432->context, x__V1427));
                    arg__V1431 = BUFFER_TERM(buf__V1432); FREE_BUFFER(buf__V1432); }
                  Variable vars__V1433[2] = {x__V1414,x__V1415};
                  Term args__V1434[2] = {arg__V1429,arg__V1431};
                  struct _SubstitutionFrame substitution__V1435 = {NULL, 0, 2, vars__V1433, args__V1434};
                  SUBSTITUTE(sink__V1410, sub__V1416, &substitution__V1435); }
                 }
              END(sink__V1410, _M_DelayMapText_s1); }
            END(sink__V1410, _M_AsText); }
          END(sink__V1410, _M__sTextEmbed); }
        { START(sink__V1410, _M__sTextNil);
          END(sink__V1410, _M__sTextNil); }
        END(sink__V1410, _M__sTextCons); }
      END(sink__V1410, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1410->context, namedP__V1417); 
    UNLINK_VariablePropertyLink(sink__V1410->context, varP__V1418);
    unlinkVariable(sink__V1410->context, x__V1415); unlinkVariable(sink__V1410->context, x__V1414);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION FormArguments-binder-offsets. */
int conBindOffs_M_FormArguments__binder__offsets[] = {0 , 0 , 0};
char *nameFun_M_FormArguments__binder__offsets(Term term) { return  "FormArguments-binder-offsets" ; }
struct _ConstructionDescriptor descriptor_M_FormArguments__binder__offsets = {NULL, 0, 2, sizeof(STRUCT_Con_M_FormArguments__binder__offsets), conBindOffs_M_FormArguments__binder__offsets, &nameFun_M_FormArguments__binder__offsets, &step_M_FormArguments__binder__offsets};

int step_M_FormArguments__binder__offsets(Sink sink__V1436, Term term__V1437)
{
  int term__V1437_count = LINK_COUNT(term__V1437); permitUnusedInt(term__V1437_count);
  Term sub__V1438 = FORCE(sink__V1436->context, SUB(term__V1437, 0));
  EnumOf_M__sList choice__V1439 = (IS_VARIABLE_USE(sub__V1438) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V1438));
  switch (choice__V1439)
  {
    case Data_M__sCons: { /* Function DEFS-FormArguments-binder-offsets-2$FormArguments-binder-offsets$$Cons case $Cons */
      ASSERT(sink__V1436->context, !strcmp(SYMBOL(term__V1437),  "FormArguments-binder-offsets" ));
      Term sub__V1440 = SUB(term__V1437, 0); int sub__V1440_count = term__V1437_count*LINK_COUNT(sub__V1440); permitUnusedInt(sub__V1440_count);
      ASSERT(sink__V1436->context, !strcmp(SYMBOL(sub__V1440),  "$Cons" ));
      Term sub__V1441 = LINK(sink__V1436->context, SUB(sub__V1440, 0)); int sub__V1441_count = sub__V1440_count*LINK_COUNT(sub__V1441); permitUnusedInt(sub__V1441_count);
      /* sub__V1441 = &#0-0 */
      Term sub__V1442 = LINK(sink__V1436->context, SUB(sub__V1440, 1)); int sub__V1442_count = sub__V1440_count*LINK_COUNT(sub__V1442); permitUnusedInt(sub__V1442_count);
      /* sub__V1442 = &#0-1 */
      Term sub__V1443 = LINK(sink__V1436->context, SUB(term__V1437, 1)); int sub__V1443_count = term__V1437_count*LINK_COUNT(sub__V1443); permitUnusedInt(sub__V1443_count);
      /* sub__V1443 = &#2 */
      
      NamedPropertyLink namedP__V1444 = LINK_NamedPropertyLink(sink__V1436->context, NAMED_PROPERTIES(term__V1437));
      VariablePropertyLink varP__V1445 = LINK_VariablePropertyLink(sink__V1436->context, VARIABLE_PROPERTIES(term__V1437));
      UNLINK(sink__V1436->context, term__V1437);
      ADD_PROPERTIES(sink__V1436, LINK_NamedPropertyLink(sink__V1436->context, namedP__V1444), LINK_VariablePropertyLink(sink__V1436->context, varP__V1445));
      { START(sink__V1436, _M_FormArguments__binder__offsets_s1);
        COPY(sink__V1436, sub__V1441);COPY(sink__V1436, sub__V1442);COPY(sink__V1436, sub__V1443);END(sink__V1436, _M_FormArguments__binder__offsets_s1); }
      UNLINK_NamedPropertyLink(sink__V1436->context, namedP__V1444); 
      UNLINK_VariablePropertyLink(sink__V1436->context, varP__V1445);
      
      return 1;
    break; } case Data_M__sNil: { /* Function DEFS-FormArguments-binder-offsets-3$FormArguments-binder-offsets$$Nil case $Nil */
      ASSERT(sink__V1436->context, !strcmp(SYMBOL(term__V1437),  "FormArguments-binder-offsets" ));
      Term sub__V1446 = SUB(term__V1437, 0); int sub__V1446_count = term__V1437_count*LINK_COUNT(sub__V1446); permitUnusedInt(sub__V1446_count);
      ASSERT(sink__V1436->context, !strcmp(SYMBOL(sub__V1446),  "$Nil" ));
      Term sub__V1447 = LINK(sink__V1436->context, SUB(term__V1437, 1)); int sub__V1447_count = term__V1437_count*LINK_COUNT(sub__V1447); permitUnusedInt(sub__V1447_count);
      /* sub__V1447 = &#0 */
      
      NamedPropertyLink namedP__V1448 = LINK_NamedPropertyLink(sink__V1436->context, NAMED_PROPERTIES(term__V1437));
      VariablePropertyLink varP__V1449 = LINK_VariablePropertyLink(sink__V1436->context, VARIABLE_PROPERTIES(term__V1437));
      UNLINK(sink__V1436->context, term__V1437);
      ADD_PROPERTIES(sink__V1436, LINK_NamedPropertyLink(sink__V1436->context, namedP__V1448), LINK_VariablePropertyLink(sink__V1436->context, varP__V1449));
      { START(sink__V1436, _M_FormArguments__binder__offsets_s4);
        COPY(sink__V1436, sub__V1447);END(sink__V1436, _M_FormArguments__binder__offsets_s4); }
      UNLINK_NamedPropertyLink(sink__V1436->context, namedP__V1448); 
      UNLINK_VariablePropertyLink(sink__V1436->context, varP__V1449);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION MapIndexText$2. */
int conBindOffs_M_MapIndexText_s2[] = {0 , 0 , 0 , 2 , 2};
char *nameFun_M_MapIndexText_s2(Term term) { return  "MapIndexText$2" ; }
struct _ConstructionDescriptor descriptor_M_MapIndexText_s2 = {&sort_M_Reified_xVariable, 0, 4, sizeof(STRUCT_Con_M_MapIndexText_s2), conBindOffs_M_MapIndexText_s2, &nameFun_M_MapIndexText_s2, &step_M_MapIndexText_s2};

int step_M_MapIndexText_s2(Sink sink__V1450, Term term__V1451)
{
  int term__V1451_count = LINK_COUNT(term__V1451); permitUnusedInt(term__V1451_count);
  do {
    /* Contraction rule DEFS-MapIndexText-1. */
    ASSERT(sink__V1450->context, !strcmp(SYMBOL(term__V1451),  "MapIndexText$2" ));
    Term sub__V1452 = LINK(sink__V1450->context, SUB(term__V1451, 0)); int sub__V1452_count = term__V1451_count*LINK_COUNT(sub__V1452); permitUnusedInt(sub__V1452_count);
    /* sub__V1452 = &#21 */
    Term sub__V1453 = LINK(sink__V1450->context, SUB(term__V1451, 1)); int sub__V1453_count = term__V1451_count*LINK_COUNT(sub__V1453); permitUnusedInt(sub__V1453_count);
    /* sub__V1453 = &#22 */
    Variable x__V1454 = linkVariable(sink__V1450->context, BINDER(term__V1451,2,0)); if (term__V1451_count <= 1) UNBIND(x__V1454);
    Variable x__V1455 = linkVariable(sink__V1450->context, BINDER(term__V1451,2,1)); if (term__V1451_count <= 1) UNBIND(x__V1455);
    Term sub__V1456 = LINK(sink__V1450->context, SUB(term__V1451, 2)); int sub__V1456_count = term__V1451_count*LINK_COUNT(sub__V1456); permitUnusedInt(sub__V1456_count);
    CRSX_CHECK_SORT(sink__V1450->context, sub__V1456, &sort_M_Reified_xVariable); UNLINK_SUB(sink__V1450->context, term__V1451,  2); NORMALIZE(sink__V1450->context, sub__V1456); SUB(term__V1451,  2) = LINK(sink__V1450->context, sub__V1456);
    /* sub__V1456 = &#1 */
    Term sub__V1457 = LINK(sink__V1450->context, SUB(term__V1451, 3)); int sub__V1457_count = term__V1451_count*LINK_COUNT(sub__V1457); permitUnusedInt(sub__V1457_count);
    UNLINK_SUB(sink__V1450->context, term__V1451,  3); NORMALIZE(sink__V1450->context, sub__V1457); SUB(term__V1451,  3) = LINK(sink__V1450->context, sub__V1457);
    /* sub__V1457 = &#3 */
    
    NamedPropertyLink namedP__V1458 = LINK_NamedPropertyLink(sink__V1450->context, NAMED_PROPERTIES(term__V1451));
    VariablePropertyLink varP__V1459 = LINK_VariablePropertyLink(sink__V1450->context, VARIABLE_PROPERTIES(term__V1451));
    UNLINK(sink__V1450->context, term__V1451);
    { START(sink__V1450, _M__sTextCons);
      { START(sink__V1450, _M__sTextEmbed);
        { START(sink__V1450, _M_AsText);
          {
            Term arg__V1460;
            { Sink buf__V1461 = ALLOCA_BUFFER(sink__V1450->context);
              COPY(buf__V1461, sub__V1452);arg__V1460 = BUFFER_TERM(buf__V1461); FREE_BUFFER(buf__V1461); }
            Term arg__V1462;
            { Sink buf__V1463 = ALLOCA_BUFFER(sink__V1450->context);
              COPY(buf__V1463, LINK(buf__V1463->context, sub__V1457));arg__V1462 = BUFFER_TERM(buf__V1463); FREE_BUFFER(buf__V1463); }
            Variable vars__V1464[2] = {x__V1454,x__V1455};
            Term args__V1465[2] = {arg__V1460,arg__V1462};
            struct _SubstitutionFrame substitution__V1466 = {NULL, 0, 2, vars__V1464, args__V1465};
            SUBSTITUTE(sink__V1450, LINK(sink__V1450->context,sub__V1456), &substitution__V1466); }
          END(sink__V1450, _M_AsText); }
        END(sink__V1450, _M__sTextEmbed); }
      { START(sink__V1450, _M__sTextCons);
        { START(sink__V1450, _M__sTextEmbed);
          { START(sink__V1450, _M_AsText);
            { START(sink__V1450, _M_MapIndexText_s1);
              COPY(sink__V1450, sub__V1453);{ Variable x__V1467 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1450->context,"x__V1467");
                Variable x__V1468 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1450->context,"x__V1468");
                Variable binds__V1469[2] = {x__V1467,x__V1468}; BINDS(sink__V1450, 2, binds__V1469);
                {
                  Term arg__V1470;
                  { Sink buf__V1471 = ALLOCA_BUFFER(sink__V1450->context);
                    USE(buf__V1471, linkVariable(buf__V1471->context, x__V1467));
                    arg__V1470 = BUFFER_TERM(buf__V1471); FREE_BUFFER(buf__V1471); }
                  Term arg__V1472;
                  { Sink buf__V1473 = ALLOCA_BUFFER(sink__V1450->context);
                    USE(buf__V1473, linkVariable(buf__V1473->context, x__V1468));
                    arg__V1472 = BUFFER_TERM(buf__V1473); FREE_BUFFER(buf__V1473); }
                  Variable vars__V1474[2] = {x__V1454,x__V1455};
                  Term args__V1475[2] = {arg__V1470,arg__V1472};
                  struct _SubstitutionFrame substitution__V1476 = {NULL, 0, 2, vars__V1474, args__V1475};
                  SUBSTITUTE(sink__V1450, sub__V1456, &substitution__V1476); }
                 }
              
              {
                double num__V1477;num__V1477 = (double) 1;  
                {
                  double tmp__V1478;tmp__V1478 = DOUBLE(sub__V1457); UNLINK(sink__V1450->context, sub__V1457); 
                  num__V1477 += tmp__V1478;
                }
                LITERALNF(sink__V1450, (size_t) 31, "%G", num__V1477);
              }END(sink__V1450, _M_MapIndexText_s1); }
            END(sink__V1450, _M_AsText); }
          END(sink__V1450, _M__sTextEmbed); }
        { START(sink__V1450, _M__sTextNil);
          END(sink__V1450, _M__sTextNil); }
        END(sink__V1450, _M__sTextCons); }
      END(sink__V1450, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1450->context, namedP__V1458); 
    UNLINK_VariablePropertyLink(sink__V1450->context, varP__V1459);
    unlinkVariable(sink__V1450->context, x__V1455); unlinkVariable(sink__V1450->context, x__V1454);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MapIndexText$1. */
int conBindOffs_M_MapIndexText_s1[] = {0 , 0 , 2 , 2};
char *nameFun_M_MapIndexText_s1(Term term) { return  "MapIndexText$1" ; }
struct _ConstructionDescriptor descriptor_M_MapIndexText_s1 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_MapIndexText_s1), conBindOffs_M_MapIndexText_s1, &nameFun_M_MapIndexText_s1, &step_M_MapIndexText_s1};

int step_M_MapIndexText_s1(Sink sink__V1479, Term term__V1480)
{
  int term__V1480_count = LINK_COUNT(term__V1480); permitUnusedInt(term__V1480_count);
  Term sub__V1481 = FORCE(sink__V1479->context, SUB(term__V1480, 0));
  EnumOf_M__sList choice__V1482 = (IS_VARIABLE_USE(sub__V1481) ? VarOf_M__sList : (EnumOf_M__sList) TAG(sub__V1481));
  switch (choice__V1482)
  {
    case Data_M__sCons: { /* Function DEFS-MapIndexText-1$MapIndexText$1$$Cons case $Cons */
      ASSERT(sink__V1479->context, !strcmp(SYMBOL(term__V1480),  "MapIndexText$1" ));
      Term sub__V1483 = SUB(term__V1480, 0); int sub__V1483_count = term__V1480_count*LINK_COUNT(sub__V1483); permitUnusedInt(sub__V1483_count);
      ASSERT(sink__V1479->context, !strcmp(SYMBOL(sub__V1483),  "$Cons" ));
      Term sub__V1484 = LINK(sink__V1479->context, SUB(sub__V1483, 0)); int sub__V1484_count = sub__V1483_count*LINK_COUNT(sub__V1484); permitUnusedInt(sub__V1484_count);
      /* sub__V1484 = &#0-0 */
      Term sub__V1485 = LINK(sink__V1479->context, SUB(sub__V1483, 1)); int sub__V1485_count = sub__V1483_count*LINK_COUNT(sub__V1485); permitUnusedInt(sub__V1485_count);
      /* sub__V1485 = &#0-1 */
      Variable x__V1486 = linkVariable(sink__V1479->context, BINDER(term__V1480,1,0)); if (term__V1480_count <= 1) UNBIND(x__V1486);
      Variable x__V1487 = linkVariable(sink__V1479->context, BINDER(term__V1480,1,1)); if (term__V1480_count <= 1) UNBIND(x__V1487);
      Term sub__V1488 = LINK(sink__V1479->context, SUB(term__V1480, 1)); int sub__V1488_count = term__V1480_count*LINK_COUNT(sub__V1488); permitUnusedInt(sub__V1488_count);
      CRSX_CHECK_SORT(sink__V1479->context, sub__V1488, &sort_M_Reified_xVariable); /* sub__V1488 = &#2 */
      Term sub__V1489 = LINK(sink__V1479->context, SUB(term__V1480, 2)); int sub__V1489_count = term__V1480_count*LINK_COUNT(sub__V1489); permitUnusedInt(sub__V1489_count);
      /* sub__V1489 = &#3 */
      
      NamedPropertyLink namedP__V1490 = LINK_NamedPropertyLink(sink__V1479->context, NAMED_PROPERTIES(term__V1480));
      VariablePropertyLink varP__V1491 = LINK_VariablePropertyLink(sink__V1479->context, VARIABLE_PROPERTIES(term__V1480));
      UNLINK(sink__V1479->context, term__V1480);
      ADD_PROPERTIES(sink__V1479, LINK_NamedPropertyLink(sink__V1479->context, namedP__V1490), LINK_VariablePropertyLink(sink__V1479->context, varP__V1491));
      { START(sink__V1479, _M_MapIndexText_s2);
        COPY(sink__V1479, sub__V1484);COPY(sink__V1479, sub__V1485);{ if (!IS_BOUND(x__V1486)) { REBIND(linkVariable(sink__V1479->context, x__V1486));
            REBIND(linkVariable(sink__V1479->context, x__V1487));
            Variable binds__V1492[2] = {x__V1486,x__V1487}; BINDS(sink__V1479, 2, binds__V1492);
            COPY(sink__V1479, sub__V1488); /* REUSED SUBSTITUTION */  }
          else { Variable b__V1493 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1479->context,"b__V1493");
            Variable b__V1494 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1479->context,"b__V1494");
            Variable binds__V1495[2] = {b__V1493,b__V1494}; BINDS(sink__V1479, 2, binds__V1495);
            {
              Term arg__V1496;
              { Sink buf__V1497 = ALLOCA_BUFFER(sink__V1479->context);
                USE(buf__V1497, linkVariable(buf__V1497->context, b__V1493));
                arg__V1496 = BUFFER_TERM(buf__V1497); FREE_BUFFER(buf__V1497); }
              Term arg__V1498;
              { Sink buf__V1499 = ALLOCA_BUFFER(sink__V1479->context);
                USE(buf__V1499, linkVariable(buf__V1499->context, b__V1494));
                arg__V1498 = BUFFER_TERM(buf__V1499); FREE_BUFFER(buf__V1499); }
              Variable vars__V1500[2] = {x__V1486,x__V1487};
              Term args__V1501[2] = {arg__V1496,arg__V1498};
              struct _SubstitutionFrame substitution__V1502 = {NULL, 0, 2, vars__V1500, args__V1501};
              SUBSTITUTE(sink__V1479, sub__V1488, &substitution__V1502); }
                }
           }
        COPY(sink__V1479, sub__V1489);END(sink__V1479, _M_MapIndexText_s2); }
      UNLINK_NamedPropertyLink(sink__V1479->context, namedP__V1490); 
      UNLINK_VariablePropertyLink(sink__V1479->context, varP__V1491);
      unlinkVariable(sink__V1479->context, x__V1487); unlinkVariable(sink__V1479->context, x__V1486);
      
      return 1;
    break; } case Data_M__sNil: { /* Function DEFS-MapIndexText-2$MapIndexText$1$$Nil case $Nil */
      ASSERT(sink__V1479->context, !strcmp(SYMBOL(term__V1480),  "MapIndexText$1" ));
      Term sub__V1503 = SUB(term__V1480, 0); int sub__V1503_count = term__V1480_count*LINK_COUNT(sub__V1503); permitUnusedInt(sub__V1503_count);
      ASSERT(sink__V1479->context, !strcmp(SYMBOL(sub__V1503),  "$Nil" ));
      Variable x__V1504 = linkVariable(sink__V1479->context, BINDER(term__V1480,1,0)); if (term__V1480_count <= 1) UNBIND(x__V1504);
      Variable x__V1505 = linkVariable(sink__V1479->context, BINDER(term__V1480,1,1)); if (term__V1480_count <= 1) UNBIND(x__V1505);
      Term sub__V1506 = LINK(sink__V1479->context, SUB(term__V1480, 1)); int sub__V1506_count = term__V1480_count*LINK_COUNT(sub__V1506); permitUnusedInt(sub__V1506_count);
      CRSX_CHECK_SORT(sink__V1479->context, sub__V1506, &sort_M_Reified_xVariable); /* sub__V1506 = &#0 */
      Term sub__V1507 = LINK(sink__V1479->context, SUB(term__V1480, 2)); int sub__V1507_count = term__V1480_count*LINK_COUNT(sub__V1507); permitUnusedInt(sub__V1507_count);
      /* sub__V1507 = &#1 */
      
      NamedPropertyLink namedP__V1508 = LINK_NamedPropertyLink(sink__V1479->context, NAMED_PROPERTIES(term__V1480));
      VariablePropertyLink varP__V1509 = LINK_VariablePropertyLink(sink__V1479->context, VARIABLE_PROPERTIES(term__V1480));
      UNLINK(sink__V1479->context, term__V1480);
      ADD_PROPERTIES(sink__V1479, LINK_NamedPropertyLink(sink__V1479->context, namedP__V1508), LINK_VariablePropertyLink(sink__V1479->context, varP__V1509));
      { START(sink__V1479, _M_MapIndexText_s3);
        { if (!IS_BOUND(x__V1504)) { REBIND(linkVariable(sink__V1479->context, x__V1504));
            REBIND(linkVariable(sink__V1479->context, x__V1505));
            Variable binds__V1510[2] = {x__V1504,x__V1505}; BINDS(sink__V1479, 2, binds__V1510);
            COPY(sink__V1479, sub__V1506); /* REUSED SUBSTITUTION */  }
          else { Variable b__V1511 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1479->context,"b__V1511");
            Variable b__V1512 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1479->context,"b__V1512");
            Variable binds__V1513[2] = {b__V1511,b__V1512}; BINDS(sink__V1479, 2, binds__V1513);
            {
              Term arg__V1514;
              { Sink buf__V1515 = ALLOCA_BUFFER(sink__V1479->context);
                USE(buf__V1515, linkVariable(buf__V1515->context, b__V1511));
                arg__V1514 = BUFFER_TERM(buf__V1515); FREE_BUFFER(buf__V1515); }
              Term arg__V1516;
              { Sink buf__V1517 = ALLOCA_BUFFER(sink__V1479->context);
                USE(buf__V1517, linkVariable(buf__V1517->context, b__V1512));
                arg__V1516 = BUFFER_TERM(buf__V1517); FREE_BUFFER(buf__V1517); }
              Variable vars__V1518[2] = {x__V1504,x__V1505};
              Term args__V1519[2] = {arg__V1514,arg__V1516};
              struct _SubstitutionFrame substitution__V1520 = {NULL, 0, 2, vars__V1518, args__V1519};
              SUBSTITUTE(sink__V1479, sub__V1506, &substitution__V1520); }
                }
           }
        COPY(sink__V1479, sub__V1507);END(sink__V1479, _M_MapIndexText_s3); }
      UNLINK_NamedPropertyLink(sink__V1479->context, namedP__V1508); 
      UNLINK_VariablePropertyLink(sink__V1479->context, varP__V1509);
      unlinkVariable(sink__V1479->context, x__V1505); unlinkVariable(sink__V1479->context, x__V1504);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION MapIndexText$3. */
int conBindOffs_M_MapIndexText_s3[] = {0 , 2 , 2};
char *nameFun_M_MapIndexText_s3(Term term) { return  "MapIndexText$3" ; }
struct _ConstructionDescriptor descriptor_M_MapIndexText_s3 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_MapIndexText_s3), conBindOffs_M_MapIndexText_s3, &nameFun_M_MapIndexText_s3, &step_M_MapIndexText_s3};

int step_M_MapIndexText_s3(Sink sink__V1521, Term term__V1522)
{
  int term__V1522_count = LINK_COUNT(term__V1522); permitUnusedInt(term__V1522_count);
  do {
    /* Contraction rule DEFS-MapIndexText-2. */
    ASSERT(sink__V1521->context, !strcmp(SYMBOL(term__V1522),  "MapIndexText$3" ));
    Variable x__V1523 = linkVariable(sink__V1521->context, BINDER(term__V1522,0,0)); if (term__V1522_count <= 1) UNBIND(x__V1523);
    Variable x__V1524 = linkVariable(sink__V1521->context, BINDER(term__V1522,0,1)); if (term__V1522_count <= 1) UNBIND(x__V1524);
    Term sub__V1525 = SUB(term__V1522, 0); int sub__V1525_count = term__V1522_count*LINK_COUNT(sub__V1525); permitUnusedInt(sub__V1525_count);
    CRSX_CHECK_SORT(sink__V1521->context, sub__V1525, &sort_M_Reified_xVariable); /* sub__V1525 = &#1 */
    Term sub__V1526 = SUB(term__V1522, 1); int sub__V1526_count = term__V1522_count*LINK_COUNT(sub__V1526); permitUnusedInt(sub__V1526_count);
    /* sub__V1526 = &#3 */
    
    NamedPropertyLink namedP__V1527 = LINK_NamedPropertyLink(sink__V1521->context, NAMED_PROPERTIES(term__V1522));
    VariablePropertyLink varP__V1528 = LINK_VariablePropertyLink(sink__V1521->context, VARIABLE_PROPERTIES(term__V1522));
    UNLINK(sink__V1521->context, term__V1522);
    { START(sink__V1521, _M__sTextNil);
      END(sink__V1521, _M__sTextNil); }
    UNLINK_NamedPropertyLink(sink__V1521->context, namedP__V1527); 
    UNLINK_VariablePropertyLink(sink__V1521->context, varP__V1528);
    unlinkVariable(sink__V1521->context, x__V1524); unlinkVariable(sink__V1521->context, x__V1523);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION If$1. */
int conBindOffs_M_If_s1[] = {0 , 0 , 0};
char *nameFun_M_If_s1(Term term) { return  "If$1" ; }
struct _ConstructionDescriptor descriptor_M_If_s1 = {NULL, 0, 2, sizeof(STRUCT_Con_M_If_s1), conBindOffs_M_If_s1, &nameFun_M_If_s1, &step_M_If_s1};

int step_M_If_s1(Sink sink__V1529, Term term__V1530)
{
  int term__V1530_count = LINK_COUNT(term__V1530); permitUnusedInt(term__V1530_count);
  do {
    /* Contraction rule DEFS-If-2. */
    ASSERT(sink__V1529->context, !strcmp(SYMBOL(term__V1530),  "If$1" ));
    Term sub__V1531 = SUB(term__V1530, 0); int sub__V1531_count = term__V1530_count*LINK_COUNT(sub__V1531); permitUnusedInt(sub__V1531_count);
    /* sub__V1531 = &#2 */
    Term sub__V1532 = LINK(sink__V1529->context, SUB(term__V1530, 1)); int sub__V1532_count = term__V1530_count*LINK_COUNT(sub__V1532); permitUnusedInt(sub__V1532_count);
    /* sub__V1532 = &#3 */
    UNLINK(sink__V1529->context, term__V1530);
    COPY(sink__V1529, sub__V1532);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION If$2. */
int conBindOffs_M_If_s2[] = {0 , 0 , 0};
char *nameFun_M_If_s2(Term term) { return  "If$2" ; }
struct _ConstructionDescriptor descriptor_M_If_s2 = {NULL, 0, 2, sizeof(STRUCT_Con_M_If_s2), conBindOffs_M_If_s2, &nameFun_M_If_s2, &step_M_If_s2};

int step_M_If_s2(Sink sink__V1533, Term term__V1534)
{
  int term__V1534_count = LINK_COUNT(term__V1534); permitUnusedInt(term__V1534_count);
  do {
    /* Contraction rule DEFS-If-1. */
    ASSERT(sink__V1533->context, !strcmp(SYMBOL(term__V1534),  "If$2" ));
    Term sub__V1535 = LINK(sink__V1533->context, SUB(term__V1534, 0)); int sub__V1535_count = term__V1534_count*LINK_COUNT(sub__V1535); permitUnusedInt(sub__V1535_count);
    /* sub__V1535 = &#2 */
    Term sub__V1536 = SUB(term__V1534, 1); int sub__V1536_count = term__V1534_count*LINK_COUNT(sub__V1536); permitUnusedInt(sub__V1536_count);
    /* sub__V1536 = &#3 */
    UNLINK(sink__V1533->context, term__V1534);
    COPY(sink__V1533, sub__V1535);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MissingPrimitive. */
int conBindOffs_M_MissingPrimitive[] = {0 , 0};
char *nameFun_M_MissingPrimitive(Term term) { return  "MissingPrimitive" ; }
struct _ConstructionDescriptor descriptor_M_MissingPrimitive = {&sort_M_SPrimitive, 0, 1, sizeof(STRUCT_Con_M_MissingPrimitive), conBindOffs_M_MissingPrimitive, &nameFun_M_MissingPrimitive, &step_M_MissingPrimitive};

int step_M_MissingPrimitive(Sink sink__V1537, Term term__V1538)
{
  int term__V1538_count = LINK_COUNT(term__V1538); permitUnusedInt(term__V1538_count);
  do {
    /* Contraction rule DEFS-MissingPrimitive-1. */
    ASSERT(sink__V1537->context, !strcmp(SYMBOL(term__V1538),  "MissingPrimitive" ));
    Term sub__V1539 = LINK(sink__V1537->context, SUB(term__V1538, 0)); int sub__V1539_count = term__V1538_count*LINK_COUNT(sub__V1539); permitUnusedInt(sub__V1539_count);
    /* sub__V1539 = &#1 */
    UNLINK(sink__V1537->context, term__V1538);
    char *sub__V1540[3]; size_t sublength__V1541[3]; size_t length__V1542 = 0;
    length__V1542 += (sublength__V1541[0] = strlen(sub__V1540[0] =  "$[" ));
    FORCE(sink__V1537->context, sub__V1539); LINK(sink__V1537->context, sub__V1539);
    length__V1542 += (sublength__V1541[1] = strlen(sub__V1540[1] = SYMBOL(sub__V1539)));
     UNLINK(sink__V1537->context, sub__V1539);  UNLINK(sink__V1537->context, sub__V1539); length__V1542 += (sublength__V1541[2] = strlen(sub__V1540[2] =  "] not supported" ));
    { char *str__V1543 = ALLOCA(sink__V1537->context, length__V1542+1), *p__V1544 = str__V1543;
      int i; for (i = 0; i < 3; ++i) { memcpy(p__V1544, sub__V1540[i], sublength__V1541[i]); p__V1544 += sublength__V1541[i]; }
      *p__V1544 = '\0';
      ASSERT(sink__V1537->context, strlen(str__V1543) == length__V1542);
      ERRORF(sink__V1537->context, Default, "%s\n", str__V1543); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Concat$1. */
int conBindOffs_M_Concat_s1[] = {0 , 0 , 0};
char *nameFun_M_Concat_s1(Term term) { return  "Concat$1" ; }
struct _ConstructionDescriptor descriptor_M_Concat_s1 = {NULL, 0, 2, sizeof(STRUCT_Con_M_Concat_s1), conBindOffs_M_Concat_s1, &nameFun_M_Concat_s1, &step_M_Concat_s1};

int step_M_Concat_s1(Sink sink__V1545, Term term__V1546)
{
  int term__V1546_count = LINK_COUNT(term__V1546); permitUnusedInt(term__V1546_count);
  do {
    /* Contraction rule DEFS-Concat-2$Concat$1$$Nil. */
    ASSERT(sink__V1545->context, !strcmp(SYMBOL(term__V1546),  "Concat$1" ));
    Term sub__V1547 = SUB(term__V1546, 0); int sub__V1547_count = term__V1546_count*LINK_COUNT(sub__V1547); permitUnusedInt(sub__V1547_count);
    FORCE(sink__V1545->context, sub__V1547); SUB(term__V1546, 0) = sub__V1547;
    if (strcmp(SYMBOL(sub__V1547),  "$Nil" )) { break;}
    Term sub__V1548 = LINK(sink__V1545->context, SUB(term__V1546, 1)); int sub__V1548_count = term__V1546_count*LINK_COUNT(sub__V1548); permitUnusedInt(sub__V1548_count);
    /* sub__V1548 = &#0 */
    
    NamedPropertyLink namedP__V1549 = LINK_NamedPropertyLink(sink__V1545->context, NAMED_PROPERTIES(term__V1546));
    VariablePropertyLink varP__V1550 = LINK_VariablePropertyLink(sink__V1545->context, VARIABLE_PROPERTIES(term__V1546));
    UNLINK(sink__V1545->context, term__V1546);
    ADD_PROPERTIES(sink__V1545, LINK_NamedPropertyLink(sink__V1545->context, namedP__V1549), LINK_VariablePropertyLink(sink__V1545->context, varP__V1550));
    { START(sink__V1545, _M_Concat_s3);
      COPY(sink__V1545, sub__V1548);END(sink__V1545, _M_Concat_s3); }
    UNLINK_NamedPropertyLink(sink__V1545->context, namedP__V1549); 
    UNLINK_VariablePropertyLink(sink__V1545->context, varP__V1550);
    
    return 1;
  } while (0);
  do {
    /* Contraction rule DEFS-Concat-3$Concat$1$$Cons. */
    ASSERT(sink__V1545->context, !strcmp(SYMBOL(term__V1546),  "Concat$1" ));
    Term sub__V1551 = SUB(term__V1546, 0); int sub__V1551_count = term__V1546_count*LINK_COUNT(sub__V1551); permitUnusedInt(sub__V1551_count);
    FORCE(sink__V1545->context, sub__V1551); SUB(term__V1546, 0) = sub__V1551;
    if (strcmp(SYMBOL(sub__V1551),  "$Cons" )) { break;}
    Term sub__V1552 = LINK(sink__V1545->context, SUB(sub__V1551, 0)); int sub__V1552_count = sub__V1551_count*LINK_COUNT(sub__V1552); permitUnusedInt(sub__V1552_count);
    /* sub__V1552 = &#0-0 */
    Term sub__V1553 = LINK(sink__V1545->context, SUB(sub__V1551, 1)); int sub__V1553_count = sub__V1551_count*LINK_COUNT(sub__V1553); permitUnusedInt(sub__V1553_count);
    /* sub__V1553 = &#0-1 */
    Term sub__V1554 = LINK(sink__V1545->context, SUB(term__V1546, 1)); int sub__V1554_count = term__V1546_count*LINK_COUNT(sub__V1554); permitUnusedInt(sub__V1554_count);
    /* sub__V1554 = &#2 */
    
    NamedPropertyLink namedP__V1555 = LINK_NamedPropertyLink(sink__V1545->context, NAMED_PROPERTIES(term__V1546));
    VariablePropertyLink varP__V1556 = LINK_VariablePropertyLink(sink__V1545->context, VARIABLE_PROPERTIES(term__V1546));
    UNLINK(sink__V1545->context, term__V1546);
    ADD_PROPERTIES(sink__V1545, LINK_NamedPropertyLink(sink__V1545->context, namedP__V1555), LINK_VariablePropertyLink(sink__V1545->context, varP__V1556));
    { START(sink__V1545, _M_Concat_s2);
      COPY(sink__V1545, sub__V1552);COPY(sink__V1545, sub__V1553);COPY(sink__V1545, sub__V1554);END(sink__V1545, _M_Concat_s2); }
    UNLINK_NamedPropertyLink(sink__V1545->context, namedP__V1555); 
    UNLINK_VariablePropertyLink(sink__V1545->context, varP__V1556);
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Concat$2. */
int conBindOffs_M_Concat_s2[] = {0 , 0 , 0 , 0};
char *nameFun_M_Concat_s2(Term term) { return  "Concat$2" ; }
struct _ConstructionDescriptor descriptor_M_Concat_s2 = {NULL, 0, 3, sizeof(STRUCT_Con_M_Concat_s2), conBindOffs_M_Concat_s2, &nameFun_M_Concat_s2, &step_M_Concat_s2};

int step_M_Concat_s2(Sink sink__V1557, Term term__V1558)
{
  int term__V1558_count = LINK_COUNT(term__V1558); permitUnusedInt(term__V1558_count);
  do {
    /* Contraction rule DEFS-Concat-3. */
    ASSERT(sink__V1557->context, !strcmp(SYMBOL(term__V1558),  "Concat$2" ));
    Term sub__V1559 = LINK(sink__V1557->context, SUB(term__V1558, 0)); int sub__V1559_count = term__V1558_count*LINK_COUNT(sub__V1559); permitUnusedInt(sub__V1559_count);
    /* sub__V1559 = &#111 */
    Term sub__V1560 = LINK(sink__V1557->context, SUB(term__V1558, 1)); int sub__V1560_count = term__V1558_count*LINK_COUNT(sub__V1560); permitUnusedInt(sub__V1560_count);
    /* sub__V1560 = &#112 */
    Term sub__V1561 = LINK(sink__V1557->context, SUB(term__V1558, 2)); int sub__V1561_count = term__V1558_count*LINK_COUNT(sub__V1561); permitUnusedInt(sub__V1561_count);
    /* sub__V1561 = &#12 */
    UNLINK(sink__V1557->context, term__V1558);
    { START(sink__V1557, _M__sCons);
      COPY(sink__V1557, sub__V1559);{ START(sink__V1557, _M_Concat);
        { START(sink__V1557, _M__sCons);
          COPY(sink__V1557, sub__V1560);COPY(sink__V1557, sub__V1561);END(sink__V1557, _M__sCons); }
        END(sink__V1557, _M_Concat); }
      END(sink__V1557, _M__sCons); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Concat$3. */
int conBindOffs_M_Concat_s3[] = {0 , 0};
char *nameFun_M_Concat_s3(Term term) { return  "Concat$3" ; }
struct _ConstructionDescriptor descriptor_M_Concat_s3 = {NULL, 0, 1, sizeof(STRUCT_Con_M_Concat_s3), conBindOffs_M_Concat_s3, &nameFun_M_Concat_s3, &step_M_Concat_s3};

int step_M_Concat_s3(Sink sink__V1562, Term term__V1563)
{
  int term__V1563_count = LINK_COUNT(term__V1563); permitUnusedInt(term__V1563_count);
  do {
    /* Contraction rule DEFS-Concat-2. */
    ASSERT(sink__V1562->context, !strcmp(SYMBOL(term__V1563),  "Concat$3" ));
    Term sub__V1564 = LINK(sink__V1562->context, SUB(term__V1563, 0)); int sub__V1564_count = term__V1563_count*LINK_COUNT(sub__V1564); permitUnusedInt(sub__V1564_count);
    /* sub__V1564 = &#12 */
    UNLINK(sink__V1562->context, term__V1563);
    { START(sink__V1562, _M_Concat);
      COPY(sink__V1562, sub__V1564);END(sink__V1562, _M_Concat); }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Concat$4. */
int conBindOffs_M_Concat_s4[] = {0};
char *nameFun_M_Concat_s4(Term term) { return  "Concat$4" ; }
struct _ConstructionDescriptor descriptor_M_Concat_s4 = {NULL, 0, 0, sizeof(STRUCT_Con_M_Concat_s4), conBindOffs_M_Concat_s4, &nameFun_M_Concat_s4, &step_M_Concat_s4};

int step_M_Concat_s4(Sink sink__V1565, Term term__V1566)
{
  int term__V1566_count = LINK_COUNT(term__V1566); permitUnusedInt(term__V1566_count);
  do {
    /* Contraction rule DEFS-Concat-1. */
    ASSERT(sink__V1565->context, !strcmp(SYMBOL(term__V1566),  "Concat$4" ));
    UNLINK(sink__V1565->context, term__V1566);
    { START(sink__V1565, _M__sNil); END(sink__V1565, _M__sNil); } 
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Primitive. */
int conBindOffs_M_Primitive[] = {0 , 0};
char *nameFun_M_Primitive(Term term) { return  "Primitive" ; }
struct _ConstructionDescriptor descriptor_M_Primitive = {&sort_M_SPrimitive, 0, 1, sizeof(STRUCT_Con_M_Primitive), conBindOffs_M_Primitive, &nameFun_M_Primitive, &step_M_Primitive};

int step_M_Primitive(Sink sink__V1567, Term term__V1568)
{
  int term__V1568_count = LINK_COUNT(term__V1568); permitUnusedInt(term__V1568_count);
  do {
    /* Contraction rule DEFS-Primitive-1. */
    ASSERT(sink__V1567->context, !strcmp(SYMBOL(term__V1568),  "Primitive" ));
    Term sub__V1569 = LINK(sink__V1567->context, SUB(term__V1568, 0)); int sub__V1569_count = term__V1568_count*LINK_COUNT(sub__V1569); permitUnusedInt(sub__V1569_count);
    /* sub__V1569 = &#1 */
    UNLINK(sink__V1567->context, term__V1568);
    { int test__V1570;
      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
      test__V1570 = (int) !strcmp(SYMBOL(sub__V1569), "C" );
      UNLINK(sink__V1567->context, sub__V1569);  
      if (test__V1570) 
      {
        UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xC); END(sink__V1567, _M_E_xC); } 
      }
      else
      {
        { int test__V1571;
          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
          test__V1571 = (int) !strcmp(SYMBOL(sub__V1569), "NumericEqual" );
          UNLINK(sink__V1567->context, sub__V1569);  
          if (test__V1571) 
          {
            UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xNumericEqual);
              END(sink__V1567, _M_E_xNumericEqual); }
            
          }
          else
          {
            { int test__V1572;
              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
              test__V1572 = (int) !strcmp(SYMBOL(sub__V1569), "StringLessThan" );
              UNLINK(sink__V1567->context, sub__V1569);  
              if (test__V1572) 
              {
                UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xStringLessThan);
                  END(sink__V1567, _M_E_xStringLessThan); }
                
              }
              else
              {
                { int test__V1573;
                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                  test__V1573 = (int) !strcmp(SYMBOL(sub__V1569), "LessThan" );
                  UNLINK(sink__V1567->context, sub__V1569);  
                  if (test__V1573) 
                  {
                    UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xLessThan);
                      END(sink__V1567, _M_E_xLessThan); }
                    
                  }
                  else
                  {
                    { int test__V1574;
                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                      test__V1574 = (int) !strcmp(SYMBOL(sub__V1569), "GreaterThan" );
                      UNLINK(sink__V1567->context, sub__V1569);  
                      if (test__V1574) 
                      {
                        UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xGreaterThan);
                          END(sink__V1567, _M_E_xGreaterThan); }
                        
                      }
                      else
                      {
                        { int test__V1575;
                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                          test__V1575 = (int) !strcmp(SYMBOL(sub__V1569), "LessThanOrEqual" );
                          UNLINK(sink__V1567->context, sub__V1569);  
                          if (test__V1575) 
                          {
                            UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xLessThanOrEqual);
                              END(sink__V1567, _M_E_xLessThanOrEqual); }
                            
                          }
                          else
                          {
                            { int test__V1576;
                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                              test__V1576 = (int) !strcmp(SYMBOL(sub__V1569), "GreaterThanOrEqual" );
                               UNLINK(sink__V1567->context, sub__V1569);  
                              if (test__V1576) 
                              {
                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xGreaterThanOrEqual);
                                  END(sink__V1567, _M_E_xGreaterThanOrEqual); }
                                
                              }
                              else
                              {
                                { int test__V1577;
                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                  test__V1577 = (int) !strcmp(SYMBOL(sub__V1569), "NotEqual" );
                                   UNLINK(sink__V1567->context, sub__V1569);  
                                  if (test__V1577) 
                                  {
                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xNotEqual);
                                      END(sink__V1567, _M_E_xNotEqual); }
                                    
                                  }
                                  else
                                  {
                                    { int test__V1578;
                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                      test__V1578 = (int) !strcmp(SYMBOL(sub__V1569), ":" );
                                       UNLINK(sink__V1567->context, sub__V1569);  
                                      if (test__V1578) 
                                      {
                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xConcat);
                                          END(sink__V1567, _M_E_xConcat); }
                                        
                                      }
                                      else
                                      {
                                        { int test__V1579;
                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                          test__V1579 = (int) !strcmp(SYMBOL(sub__V1569), "SameVariable" );
                                           UNLINK(sink__V1567->context, sub__V1569);  
                                          if (test__V1579) 
                                          {
                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xSameVariable);
                                              END(sink__V1567, _M_E_xSameVariable); }
                                            
                                          }
                                          else
                                          {
                                            { int test__V1580;
                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                              test__V1580 = (int) !strcmp(SYMBOL(sub__V1569), "LesserVariable" );
                                               UNLINK(sink__V1567->context, sub__V1569);  
                                              if (test__V1580) 
                                              {
                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xLesserVariable);
                                                  END(sink__V1567, _M_E_xLesserVariable); }
                                                
                                              }
                                              else
                                              {
                                                { int test__V1581;
                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                  test__V1581 = (int) !strcmp(SYMBOL(sub__V1569), "Equal" );
                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                  if (test__V1581) 
                                                  {
                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xEqual);
                                                      END(sink__V1567, _M_E_xEqual); }
                                                    
                                                  }
                                                  else
                                                  {
                                                    { int test__V1582;
                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                      test__V1582 = (int) !strcmp(SYMBOL(sub__V1569), "Contains" );
                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                      if (test__V1582) 
                                                      {
                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xContains);
                                                          END(sink__V1567, _M_E_xContains); }
                                                        
                                                      }
                                                      else
                                                      {
                                                        { int test__V1583;
                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                          test__V1583 = (int) !strcmp(SYMBOL(sub__V1569), "StartsWith" );
                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                          if (test__V1583) 
                                                          {
                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xStartsWith);
                                                              END(sink__V1567, _M_E_xStartsWith); }
                                                            
                                                          }
                                                          else
                                                          {
                                                            { int test__V1584;
                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                              test__V1584 = (int) !strcmp(SYMBOL(sub__V1569), "EndsWith" );
                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                              if (test__V1584) 
                                                              {
                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xEndsWith);
                                                                  END(sink__V1567, _M_E_xEndsWith); }
                                                                
                                                              }
                                                              else
                                                              {
                                                                { int test__V1585;
                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                  test__V1585 = (int) !strcmp(SYMBOL(sub__V1569), "Split" );
                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                  if (test__V1585) 
                                                                  {
                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xSplit);
                                                                      END(sink__V1567, _M_E_xSplit); }
                                                                    
                                                                  }
                                                                  else
                                                                  {
                                                                    { int test__V1586;
                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                      test__V1586 = (int) !strcmp(SYMBOL(sub__V1569), "MatchRegex" );
                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                      if (test__V1586) 
                                                                      {
                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xMatchRegex);
                                                                          END(sink__V1567, _M_E_xMatchRegex); }
                                                                        
                                                                      }
                                                                      else
                                                                      {
                                                                        { int test__V1587;
                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                          test__V1587 = (int) !strcmp(SYMBOL(sub__V1569), "Length" );
                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                          if (test__V1587) 
                                                                          {
                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xLength);
                                                                              END(sink__V1567, _M_E_xLength); }
                                                                            
                                                                          }
                                                                          else
                                                                          {
                                                                            { int test__V1588;
                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                              test__V1588 = (int) !strcmp(SYMBOL(sub__V1569), "Index" );
                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                              if (test__V1588) 
                                                                              {
                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xIndex);
                                                                                  END(sink__V1567, _M_E_xIndex); }
                                                                                
                                                                              }
                                                                              else
                                                                              {
                                                                                { int test__V1589;
                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                  test__V1589 = (int) !strcmp(SYMBOL(sub__V1569), "Substring" );
                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                  if (test__V1589) 
                                                                                  {
                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xSubstring);
                                                                                      END(sink__V1567, _M_E_xSubstring); }
                                                                                    
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    { int test__V1590;
                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                      test__V1590 = (int) !strcmp(SYMBOL(sub__V1569), "Escape" );
                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                      if (test__V1590) 
                                                                                      {
                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xEscape);
                                                                                          END(sink__V1567, _M_E_xEscape); }
                                                                                        
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        { int test__V1591;
                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                          test__V1591 = (int) !strcmp(SYMBOL(sub__V1569), "Mangle" );
                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                          if (test__V1591) 
                                                                                          {
                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xMangle);
                                                                                              END(sink__V1567, _M_E_xMangle); }
                                                                                            
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            { int test__V1592;
                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                              test__V1592 = (int) !strcmp(SYMBOL(sub__V1569), "BeforeFirst" );
                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                              if (test__V1592) 
                                                                                              {
                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xBeforeFirst);
                                                                                                  END(sink__V1567, _M_E_xBeforeFirst); }
                                                                                                
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                { int test__V1593;
                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                  test__V1593 = (int) !strcmp(SYMBOL(sub__V1569), "AfterFirst" );
                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                  if (test__V1593) 
                                                                                                  {
                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xAfterFirst);
                                                                                                      END(sink__V1567, _M_E_xAfterFirst); }
                                                                                                    
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    { int test__V1594;
                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                      test__V1594 = (int) !strcmp(SYMBOL(sub__V1569), "FromFirst" );
                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                      if (test__V1594) 
                                                                                                      {
                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xFromFirst);
                                                                                                          END(sink__V1567, _M_E_xFromFirst); }
                                                                                                        
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        { int test__V1595;
                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                          test__V1595 = (int) !strcmp(SYMBOL(sub__V1569), "ToFirst" );
                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                          if (test__V1595) 
                                                                                                          {
                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xToFirst);
                                                                                                              END(sink__V1567, _M_E_xToFirst); }
                                                                                                            
                                                                                                          }
                                                                                                          else
                                                                                                          {
                                                                                                            { int test__V1596;
                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                              test__V1596 = (int) !strcmp(SYMBOL(sub__V1569), "FormatNumber" );
                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                              if (test__V1596) 
                                                                                                              {
                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xFormatNumber);
                                                                                                                  END(sink__V1567, _M_E_xFormatNumber); }
                                                                                                                
                                                                                                              }
                                                                                                              else
                                                                                                              {
                                                                                                                { int test__V1597;
                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                  test__V1597 = (int) !strcmp(SYMBOL(sub__V1569), "Format" );
                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                  if (test__V1597) 
                                                                                                                  {
                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xFormat);
                                                                                                                      END(sink__V1567, _M_E_xFormat); }
                                                                                                                    
                                                                                                                  }
                                                                                                                  else
                                                                                                                  {
                                                                                                                    { int test__V1598;
                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                      test__V1598 = (int) !strcmp(SYMBOL(sub__V1569), "Show" );
                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                      if (test__V1598) 
                                                                                                                      {
                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xShow);
                                                                                                                          END(sink__V1567, _M_E_xShow); }
                                                                                                                        
                                                                                                                      }
                                                                                                                      else
                                                                                                                      {
                                                                                                                        { int test__V1599;
                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                          test__V1599 = (int) !strcmp(SYMBOL(sub__V1569), "Symbol" );
                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                          if (test__V1599) 
                                                                                                                          {
                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xSymbol);
                                                                                                                              END(sink__V1567, _M_E_xSymbol); }
                                                                                                                            
                                                                                                                          }
                                                                                                                          else
                                                                                                                          {
                                                                                                                            { int test__V1600;
                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                              test__V1600 = (int) !strcmp(SYMBOL(sub__V1569), "PassLocationProperties" );
                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                              if (test__V1600) 
                                                                                                                              {
                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xPassLocationProperties);
                                                                                                                                  END(sink__V1567, _M_E_xPassLocationProperties); }
                                                                                                                                
                                                                                                                              }
                                                                                                                              else
                                                                                                                              {
                                                                                                                                { int test__V1601;
                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                  test__V1601 = (int) !strcmp(SYMBOL(sub__V1569), "EncodePoint" );
                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                  if (test__V1601) 
                                                                                                                                  {
                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xEncodePoint);
                                                                                                                                      END(sink__V1567, _M_E_xEncodePoint); }
                                                                                                                                    
                                                                                                                                  }
                                                                                                                                  else
                                                                                                                                  {
                                                                                                                                    { int test__V1602;
                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                      test__V1602 = (int) !strcmp(SYMBOL(sub__V1569), "Plus" );
                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                      if (test__V1602) 
                                                                                                                                      {
                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xPlus);
                                                                                                                                          END(sink__V1567, _M_E_xPlus); }
                                                                                                                                        
                                                                                                                                      }
                                                                                                                                      else
                                                                                                                                      {
                                                                                                                                        { int test__V1603;
                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                          test__V1603 = (int) !strcmp(SYMBOL(sub__V1569), "Minus" );
                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                          if (test__V1603) 
                                                                                                                                          {
                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xMinus);
                                                                                                                                              END(sink__V1567, _M_E_xMinus); }
                                                                                                                                            
                                                                                                                                          }
                                                                                                                                          else
                                                                                                                                          {
                                                                                                                                            { int test__V1604;
                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                              test__V1604 = (int) !strcmp(SYMBOL(sub__V1569), "Times" );
                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                              if (test__V1604) 
                                                                                                                                              {
                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xTimes);
                                                                                                                                                  END(sink__V1567, _M_E_xTimes); }
                                                                                                                                                
                                                                                                                                              }
                                                                                                                                              else
                                                                                                                                              {
                                                                                                                                                { int test__V1605;
                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                  test__V1605 = (int) !strcmp(SYMBOL(sub__V1569), "Divide" );
                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                  if (test__V1605) 
                                                                                                                                                  {
                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xDiv);
                                                                                                                                                      END(sink__V1567, _M_E_xDiv); }
                                                                                                                                                    
                                                                                                                                                  }
                                                                                                                                                  else
                                                                                                                                                  {
                                                                                                                                                    { int test__V1606;
                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                      test__V1606 = (int) !strcmp(SYMBOL(sub__V1569), "Modulo" );
                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                      if (test__V1606) 
                                                                                                                                                      {
                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xMod);
                                                                                                                                                          END(sink__V1567, _M_E_xMod); }
                                                                                                                                                        
                                                                                                                                                      }
                                                                                                                                                      else
                                                                                                                                                      {
                                                                                                                                                        { int test__V1607;
                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                          test__V1607 = (int) !strcmp(SYMBOL(sub__V1569), "Absolute" );
                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                          if (test__V1607) 
                                                                                                                                                          {
                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xAbsolute);
                                                                                                                                                              END(sink__V1567, _M_E_xAbsolute); }
                                                                                                                                                            
                                                                                                                                                          }
                                                                                                                                                          else
                                                                                                                                                          {
                                                                                                                                                            { int test__V1608;
                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                              test__V1608 = (int) !strcmp(SYMBOL(sub__V1569), "Decimal" );
                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                              if (test__V1608) 
                                                                                                                                                              {
                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xDecimal);
                                                                                                                                                                  END(sink__V1567, _M_E_xDecimal); }
                                                                                                                                                                
                                                                                                                                                              }
                                                                                                                                                              else
                                                                                                                                                              {
                                                                                                                                                                { int test__V1609;
                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                  test__V1609 = (int) !strcmp(SYMBOL(sub__V1569), "Hex" );
                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                  if (test__V1609) 
                                                                                                                                                                  {
                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xHex);
                                                                                                                                                                      END(sink__V1567, _M_E_xHex); }
                                                                                                                                                                    
                                                                                                                                                                  }
                                                                                                                                                                  else
                                                                                                                                                                  {
                                                                                                                                                                    { int test__V1610;
                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                      test__V1610 = (int) !strcmp(SYMBOL(sub__V1569), "BitAnd" );
                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                      if (test__V1610) 
                                                                                                                                                                      {
                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xBitAnd);
                                                                                                                                                                          END(sink__V1567, _M_E_xBitAnd); }
                                                                                                                                                                        
                                                                                                                                                                      }
                                                                                                                                                                      else
                                                                                                                                                                      {
                                                                                                                                                                        { int test__V1611;
                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                          test__V1611 = (int) !strcmp(SYMBOL(sub__V1569), "BitOr" );
                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                          if (test__V1611) 
                                                                                                                                                                          {
                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xBitOr);
                                                                                                                                                                              END(sink__V1567, _M_E_xBitOr); }
                                                                                                                                                                            
                                                                                                                                                                          }
                                                                                                                                                                          else
                                                                                                                                                                          {
                                                                                                                                                                            { int test__V1612;
                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                              test__V1612 = (int) !strcmp(SYMBOL(sub__V1569), "BitXor" );
                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                              if (test__V1612) 
                                                                                                                                                                              {
                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xBitXOr);
                                                                                                                                                                                  END(sink__V1567, _M_E_xBitXOr); }
                                                                                                                                                                                
                                                                                                                                                                              }
                                                                                                                                                                              else
                                                                                                                                                                              {
                                                                                                                                                                                { int test__V1613;
                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                  test__V1613 = (int) !strcmp(SYMBOL(sub__V1569), "BitNot" );
                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                  if (test__V1613) 
                                                                                                                                                                                  {
                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xBitNot);
                                                                                                                                                                                      END(sink__V1567, _M_E_xBitNot); }
                                                                                                                                                                                    
                                                                                                                                                                                  }
                                                                                                                                                                                  else
                                                                                                                                                                                  {
                                                                                                                                                                                    { int test__V1614;
                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                      test__V1614 = (int) !strcmp(SYMBOL(sub__V1569), "BitMinus" );
                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                      if (test__V1614) 
                                                                                                                                                                                      {
                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xBitMinus);
                                                                                                                                                                                          END(sink__V1567, _M_E_xBitMinus); }
                                                                                                                                                                                        
                                                                                                                                                                                      }
                                                                                                                                                                                      else
                                                                                                                                                                                      {
                                                                                                                                                                                        { int test__V1615;
                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                          test__V1615 = (int) !strcmp(SYMBOL(sub__V1569), "BitSubSetEq" );
                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                          if (test__V1615) 
                                                                                                                                                                                          {
                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xBitSubSetEq);
                                                                                                                                                                                              END(sink__V1567, _M_E_xBitSubSetEq); }
                                                                                                                                                                                            
                                                                                                                                                                                          }
                                                                                                                                                                                          else
                                                                                                                                                                                          {
                                                                                                                                                                                            { int test__V1616;
                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                              test__V1616 = (int) !strcmp(SYMBOL(sub__V1569), "Get" );
                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                              if (test__V1616) 
                                                                                                                                                                                              {
                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xGet);
                                                                                                                                                                                                  END(sink__V1567, _M_E_xGet); }
                                                                                                                                                                                                
                                                                                                                                                                                              }
                                                                                                                                                                                              else
                                                                                                                                                                                              {
                                                                                                                                                                                                { int test__V1617;
                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                  test__V1617 = (int) !strcmp(SYMBOL(sub__V1569), "GetRef" );
                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                  if (test__V1617) 
                                                                                                                                                                                                  {
                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xGetRef);
                                                                                                                                                                                                      END(sink__V1567, _M_E_xGetRef); }
                                                                                                                                                                                                    
                                                                                                                                                                                                  }
                                                                                                                                                                                                  else
                                                                                                                                                                                                  {
                                                                                                                                                                                                    { int test__V1618;
                                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                      test__V1618 = (int) !strcmp(SYMBOL(sub__V1569), "IfDef" );
                                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                      if (test__V1618) 
                                                                                                                                                                                                      {
                                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xIfDef);
                                                                                                                                                                                                          END(sink__V1567, _M_E_xIfDef); }
                                                                                                                                                                                                        
                                                                                                                                                                                                      }
                                                                                                                                                                                                      else
                                                                                                                                                                                                      {
                                                                                                                                                                                                        { int test__V1619;
                                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                          test__V1619 = (int) !strcmp(SYMBOL(sub__V1569), "Dump" );
                                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                          if (test__V1619) 
                                                                                                                                                                                                          {
                                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xDump);
                                                                                                                                                                                                              END(sink__V1567, _M_E_xDump); }
                                                                                                                                                                                                            
                                                                                                                                                                                                          }
                                                                                                                                                                                                          else
                                                                                                                                                                                                          {
                                                                                                                                                                                                            { int test__V1620;
                                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                              test__V1620 = (int) !strcmp(SYMBOL(sub__V1569), "Error" );
                                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                              if (test__V1620) 
                                                                                                                                                                                                              {
                                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xError);
                                                                                                                                                                                                                  END(sink__V1567, _M_E_xError); }
                                                                                                                                                                                                                
                                                                                                                                                                                                              }
                                                                                                                                                                                                              else
                                                                                                                                                                                                              {
                                                                                                                                                                                                                { int test__V1621;
                                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                  test__V1621 = (int) !strcmp(SYMBOL(sub__V1569), "ForgivableError" );
                                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                  if (test__V1621) 
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xForgivableError);
                                                                                                                                                                                                                      END(sink__V1567, _M_E_xForgivableError); }
                                                                                                                                                                                                                    
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                    { int test__V1622;
                                                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                      test__V1622 = (int) !strcmp(SYMBOL(sub__V1569), "Trace" );
                                                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                      if (test__V1622) 
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xTrace);
                                                                                                                                                                                                                          END(sink__V1567, _M_E_xTrace); }
                                                                                                                                                                                                                        
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                        { int test__V1623;
                                                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                          test__V1623 = (int) !strcmp(SYMBOL(sub__V1569), "LoadTerm" );
                                                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                          if (test__V1623) 
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xLoadTerm);
                                                                                                                                                                                                                              END(sink__V1567, _M_E_xLoadTerm); }
                                                                                                                                                                                                                            
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                            { int test__V1624;
                                                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                              test__V1624 = (int) !strcmp(SYMBOL(sub__V1569), "SaveTerm" );
                                                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                              if (test__V1624) 
                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xSaveTerm);
                                                                                                                                                                                                                                  END(sink__V1567, _M_E_xSaveTerm); }
                                                                                                                                                                                                                                
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                { int test__V1625;
                                                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                  test__V1625 = (int) !strcmp(SYMBOL(sub__V1569), "If" );
                                                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                  if (test__V1625) 
                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xIf);
                                                                                                                                                                                                                                      END(sink__V1567, _M_E_xIf); }
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                    { int test__V1626;
                                                                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                      test__V1626 = (int) !strcmp(SYMBOL(sub__V1569), "IfZero" );
                                                                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                      if (test__V1626) 
                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xIfZero);
                                                                                                                                                                                                                                          END(sink__V1567, _M_E_xIfZero); }
                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                        { int test__V1627;
                                                                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                          test__V1627 = (int) !strcmp(SYMBOL(sub__V1569), "IfEmpty" );
                                                                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                          if (test__V1627) 
                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xIfEmpty);
                                                                                                                                                                                                                                              END(sink__V1567, _M_E_xIfEmpty); }
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                            { int test__V1628;
                                                                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                              test__V1628 = (int) !strcmp(SYMBOL(sub__V1569), "FreeVariables" );
                                                                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                              if (test__V1628) 
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xFreeVariables);
                                                                                                                                                                                                                                                  END(sink__V1567, _M_E_xFreeVariables); }
                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                { int test__V1629;
                                                                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                  test__V1629 = (int) !strcmp(SYMBOL(sub__V1569), "IntersectVariables" );
                                                                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                  if (test__V1629) 
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xIntersectVariables);
                                                                                                                                                                                                                                                      END(sink__V1567, _M_E_xIntersectVariables); }
                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    { int test__V1630;
                                                                                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                      test__V1630 = (int) !strcmp(SYMBOL(sub__V1569), "UnionVariables" );
                                                                                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                      if (test__V1630) 
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xUnionVariables);
                                                                                                                                                                                                                                                          END(sink__V1567, _M_E_xUnionVariables); }
                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        { int test__V1631;
                                                                                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                          test__V1631 = (int) !strcmp(SYMBOL(sub__V1569), "ExceptVariables" );
                                                                                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                          if (test__V1631) 
                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xExceptVariables);
                                                                                                                                                                                                                                                              END(sink__V1567, _M_E_xExceptVariables); }
                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                            { int test__V1632;
                                                                                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                              test__V1632 = (int) !strcmp(SYMBOL(sub__V1569), "VariableNameIs" );
                                                                                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                              if (test__V1632) 
                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xVariableNameIs);
                                                                                                                                                                                                                                                                  END(sink__V1567, _M_E_xVariableNameIs); }
                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                { int test__V1633;
                                                                                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                  test__V1633 = (int) !strcmp(SYMBOL(sub__V1569), "Match" );
                                                                                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                  if (test__V1633) 
                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xMatch);
                                                                                                                                                                                                                                                                      END(sink__V1567, _M_E_xMatch); }
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                    { int test__V1634;
                                                                                                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                      test__V1634 = (int) !strcmp(SYMBOL(sub__V1569), "TryCall" );
                                                                                                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                      if (test__V1634) 
                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xTryCall);
                                                                                                                                                                                                                                                                          END(sink__V1567, _M_E_xTryCall); }
                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                        { int test__V1635;
                                                                                                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                          test__V1635 = (int) !strcmp(SYMBOL(sub__V1569), "Call" );
                                                                                                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                          if (test__V1635) 
                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xCall);
                                                                                                                                                                                                                                                                              END(sink__V1567, _M_E_xCall); }
                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                            { int test__V1636;
                                                                                                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                              test__V1636 = (int) !strcmp(SYMBOL(sub__V1569), "Cast" );
                                                                                                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                              if (test__V1636) 
                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xCast);
                                                                                                                                                                                                                                                                                  END(sink__V1567, _M_E_xCast); }
                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                { int test__V1637;
                                                                                                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                  test__V1637 = (int) !strcmp(SYMBOL(sub__V1569), "Pick" );
                                                                                                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                  if (test__V1637) 
                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xPick);
                                                                                                                                                                                                                                                                                      END(sink__V1567, _M_E_xPick); }
                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                    { int test__V1638;
                                                                                                                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                      test__V1638 = (int) !strcmp(SYMBOL(sub__V1569), "ReversePick" );
                                                                                                                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                      if (test__V1638) 
                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xReversePick);
                                                                                                                                                                                                                                                                                          END(sink__V1567, _M_E_xReversePick); }
                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                        { int test__V1639;
                                                                                                                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                          test__V1639 = (int) !strcmp(SYMBOL(sub__V1569), "ListLength" );
                                                                                                                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                          if (test__V1639) 
                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xListLength);
                                                                                                                                                                                                                                                                                              END(sink__V1567, _M_E_xListLength); }
                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                            { int test__V1640;
                                                                                                                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                              test__V1640 = (int) !strcmp(SYMBOL(sub__V1569), "Null" );
                                                                                                                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                              if (test__V1640) 
                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xNull);
                                                                                                                                                                                                                                                                                                  END(sink__V1567, _M_E_xNull); }
                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                { int test__V1641;
                                                                                                                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                  test__V1641 = (int) !strcmp(SYMBOL(sub__V1569), "Nil" );
                                                                                                                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                  if (test__V1641) 
                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xNil);
                                                                                                                                                                                                                                                                                                      END(sink__V1567, _M_E_xNil); }
                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                    { int test__V1642;
                                                                                                                                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                      test__V1642 = (int) !strcmp(SYMBOL(sub__V1569), "UpCase" );
                                                                                                                                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                      if (test__V1642) 
                                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xUpCase);
                                                                                                                                                                                                                                                                                                          END(sink__V1567, _M_E_xUpCase); }
                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                                        { int test__V1643;
                                                                                                                                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                          test__V1643 = (int) !strcmp(SYMBOL(sub__V1569), "DownCase" );
                                                                                                                                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                          if (test__V1643) 
                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xDownCase);
                                                                                                                                                                                                                                                                                                              END(sink__V1567, _M_E_xDownCase); }
                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                            { int test__V1644;
                                                                                                                                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                              test__V1644 = (int) !strcmp(SYMBOL(sub__V1569), "Replace" );
                                                                                                                                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                              if (test__V1644) 
                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xReplace);
                                                                                                                                                                                                                                                                                                                  END(sink__V1567, _M_E_xReplace); }
                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                { int test__V1645;
                                                                                                                                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                  test__V1645 = (int) !strcmp(SYMBOL(sub__V1569), "Trim" );
                                                                                                                                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                  if (test__V1645) 
                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xTrim);
                                                                                                                                                                                                                                                                                                                      END(sink__V1567, _M_E_xTrim); }
                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                    { int test__V1646;
                                                                                                                                                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                      test__V1646 = (int) !strcmp(SYMBOL(sub__V1569), "Split" );
                                                                                                                                                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                      if (test__V1646) 
                                                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xSplit);
                                                                                                                                                                                                                                                                                                                          END(sink__V1567, _M_E_xSplit); }
                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                                                        { int test__V1647;
                                                                                                                                                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                          test__V1647 = (int) !strcmp(SYMBOL(sub__V1569), "Squash" );
                                                                                                                                                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                          if (test__V1647) 
                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xSquash);
                                                                                                                                                                                                                                                                                                                              END(sink__V1567, _M_E_xSquash); }
                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                            { int test__V1648;
                                                                                                                                                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                              test__V1648 = (int) !strcmp(SYMBOL(sub__V1569), "Rescape" );
                                                                                                                                                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                              if (test__V1648) 
                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xRescape);
                                                                                                                                                                                                                                                                                                                                  END(sink__V1567, _M_E_xRescape); }
                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                { int test__V1649;
                                                                                                                                                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                                  test__V1649 = (int) !strcmp(SYMBOL(sub__V1569), "Keys" );
                                                                                                                                                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                                  if (test__V1649) 
                                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xKeys);
                                                                                                                                                                                                                                                                                                                                      END(sink__V1567, _M_E_xKeys); }
                                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                                    { int test__V1650;
                                                                                                                                                                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                                      test__V1650 = (int) !strcmp(SYMBOL(sub__V1569), "ParseURL" );
                                                                                                                                                                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                                      if (test__V1650) 
                                                                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xParseURL);
                                                                                                                                                                                                                                                                                                                                          END(sink__V1567, _M_E_xParseURL); }
                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                                                                        { int test__V1651;
                                                                                                                                                                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                                          test__V1651 = (int) !strcmp(SYMBOL(sub__V1569), "ParseText" );
                                                                                                                                                                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                                          if (test__V1651) 
                                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xParseText);
                                                                                                                                                                                                                                                                                                                                              END(sink__V1567, _M_E_xParseText); }
                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                                            { int test__V1652;
                                                                                                                                                                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                                              test__V1652 = (int) !strcmp(SYMBOL(sub__V1569), "Echo" );
                                                                                                                                                                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                                              if (test__V1652) 
                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xEcho);
                                                                                                                                                                                                                                                                                                                                                  END(sink__V1567, _M_E_xEcho); }
                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                { int test__V1653;
                                                                                                                                                                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                                                  test__V1653 = (int) !strcmp(SYMBOL(sub__V1569), "DeepEqual" );
                                                                                                                                                                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                                                  if (test__V1653) 
                                                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xDeepEqual);
                                                                                                                                                                                                                                                                                                                                                      END(sink__V1567, _M_E_xDeepEqual); }
                                                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                                                    { int test__V1654;
                                                                                                                                                                                                                                                                                                                                                      FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                                                      test__V1654 = (int) !strcmp(SYMBOL(sub__V1569), "HashCode" );
                                                                                                                                                                                                                                                                                                                                                       UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                                                      if (test__V1654) 
                                                                                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                                                                                         UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xHashCode);
                                                                                                                                                                                                                                                                                                                                                          END(sink__V1567, _M_E_xHashCode); }
                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                                                                                        { int test__V1655;
                                                                                                                                                                                                                                                                                                                                                          FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                                                          test__V1655 = (int) !strcmp(SYMBOL(sub__V1569), "ElapsedTime" );
                                                                                                                                                                                                                                                                                                                                                           UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                                                          if (test__V1655) 
                                                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                                                             UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xElapsedTime);
                                                                                                                                                                                                                                                                                                                                                              END(sink__V1567, _M_E_xElapsedTime); }
                                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                                                            { int test__V1656;
                                                                                                                                                                                                                                                                                                                                                              FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                                                              test__V1656 = (int) !strcmp(SYMBOL(sub__V1569), "ProfileEnter" );
                                                                                                                                                                                                                                                                                                                                                               UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                                                              if (test__V1656) 
                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                 UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xProfileEnter);
                                                                                                                                                                                                                                                                                                                                                                  END(sink__V1567, _M_E_xProfileEnter); }
                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                { int test__V1657;
                                                                                                                                                                                                                                                                                                                                                                  FORCE(sink__V1567->context, sub__V1569); LINK(sink__V1567->context, sub__V1569);
                                                                                                                                                                                                                                                                                                                                                                  test__V1657 = (int) !strcmp(SYMBOL(sub__V1569), "ProfileExit" );
                                                                                                                                                                                                                                                                                                                                                                   UNLINK(sink__V1567->context, sub__V1569);  
                                                                                                                                                                                                                                                                                                                                                                  if (test__V1657) 
                                                                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                                                                     UNLINK(sink__V1567->context, sub__V1569); { START(sink__V1567, _M_E_xProfileExit);
                                                                                                                                                                                                                                                                                                                                                                      END(sink__V1567, _M_E_xProfileExit); }
                                                                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                                                                    { START(sink__V1567, _M_MissingPrimitive);
                                                                                                                                                                                                                                                                                                                                                                      COPY(sink__V1567, sub__V1569);END(sink__V1567, _M_MissingPrimitive); }
                                                                                                                                                                                                                                                                                                                                                                     }
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                     }
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                     }
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                     }
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                     }
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                     }
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                     }
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                     }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                     }
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                             }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                         }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                     }
                                                                                                                                                                                                                }
                                                                                                                                                                                                                 }
                                                                                                                                                                                                            }
                                                                                                                                                                                                             }
                                                                                                                                                                                                        }
                                                                                                                                                                                                         }
                                                                                                                                                                                                    }
                                                                                                                                                                                                     }
                                                                                                                                                                                                }
                                                                                                                                                                                                 }
                                                                                                                                                                                            }
                                                                                                                                                                                             }
                                                                                                                                                                                        }
                                                                                                                                                                                         }
                                                                                                                                                                                    }
                                                                                                                                                                                     }
                                                                                                                                                                                }
                                                                                                                                                                                 }
                                                                                                                                                                            }
                                                                                                                                                                             }
                                                                                                                                                                        }
                                                                                                                                                                         }
                                                                                                                                                                    }
                                                                                                                                                                     }
                                                                                                                                                                }
                                                                                                                                                                 }
                                                                                                                                                            }
                                                                                                                                                             }
                                                                                                                                                        }
                                                                                                                                                         }
                                                                                                                                                    }
                                                                                                                                                     }
                                                                                                                                                }
                                                                                                                                                 }
                                                                                                                                            }
                                                                                                                                             }
                                                                                                                                        }
                                                                                                                                         }
                                                                                                                                    }
                                                                                                                                     }
                                                                                                                                }
                                                                                                                                 }
                                                                                                                            }
                                                                                                                             }
                                                                                                                        }
                                                                                                                         }
                                                                                                                    }
                                                                                                                     }
                                                                                                                }
                                                                                                                 }
                                                                                                            }
                                                                                                             }
                                                                                                        }
                                                                                                         }
                                                                                                    }
                                                                                                     }
                                                                                                }
                                                                                                 }
                                                                                            }
                                                                                             }
                                                                                        }
                                                                                         }
                                                                                    }
                                                                                     }
                                                                                }
                                                                                 }
                                                                            }
                                                                             }
                                                                        }
                                                                         }
                                                                    }
                                                                     }
                                                                }
                                                                 }
                                                            }
                                                             }
                                                        }
                                                         }
                                                    }
                                                     }
                                                }
                                                 }
                                            }
                                             }
                                        }
                                         }
                                    }
                                     }
                                }
                                 }
                            }
                             }
                        }
                         }
                    }
                     }
                }
                 }
            }
             }
        }
         }
    }
    
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION STRING. */
int conBindOffs_M_STRING[] = {0 , 0};
char *nameFun_M_STRING(Term term) { return  "STRING" ; }
struct _ConstructionDescriptor descriptor_M_STRING = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_STRING), conBindOffs_M_STRING, &nameFun_M_STRING, &step_M_STRING};

int step_M_STRING(Sink sink__V1658, Term term__V1659)
{
  int term__V1659_count = LINK_COUNT(term__V1659); permitUnusedInt(term__V1659_count);
  do {
    /* Contraction rule DEFS-STRING-1. */
    ASSERT(sink__V1658->context, !strcmp(SYMBOL(term__V1659),  "STRING" ));
    Term sub__V1660 = LINK(sink__V1658->context, SUB(term__V1659, 0)); int sub__V1660_count = term__V1659_count*LINK_COUNT(sub__V1660); permitUnusedInt(sub__V1660_count);
    UNLINK_SUB(sink__V1658->context, term__V1659,  0); NORMALIZE(sink__V1658->context, sub__V1660); SUB(term__V1659,  0) = LINK(sink__V1658->context, sub__V1660);
    /* sub__V1660 = &#1 */
    
    NamedPropertyLink namedP__V1661 = LINK_NamedPropertyLink(sink__V1658->context, NAMED_PROPERTIES(term__V1659));
    VariablePropertyLink varP__V1662 = LINK_VariablePropertyLink(sink__V1658->context, VARIABLE_PROPERTIES(term__V1659));
    UNLINK(sink__V1658->context, term__V1659);
    { START(sink__V1658, _M__sTextCons);
      { START(sink__V1658, _M__sTextChars);
        LITERAL(sink__V1658,  " " ); END(sink__V1658, _M__sTextChars); }
      { START(sink__V1658, _M__sTextCons);
        { START(sink__V1658, _M__sTextString);
          { START(sink__V1658, _M__sTextCons);
            { START(sink__V1658, _M__sTextChars);
              { char *str__V1663;
                FORCE(sink__V1658->context, sub__V1660); LINK(sink__V1658->context, sub__V1660);
                {str__V1663 = makeEscaped(sink__V1658->context, SYMBOL(sub__V1660));
                   UNLINK(sink__V1658->context, sub__V1660);  UNLINK(sink__V1658->context, sub__V1660); }
                LITERALU(sink__V1658, str__V1663); }
              END(sink__V1658, _M__sTextChars); }
            { START(sink__V1658, _M__sTextNil);
              END(sink__V1658, _M__sTextNil); }
            END(sink__V1658, _M__sTextCons); }
          END(sink__V1658, _M__sTextString); }
        { START(sink__V1658, _M__sTextCons);
          { START(sink__V1658, _M__sTextChars);
            LITERAL(sink__V1658,  " " ); END(sink__V1658, _M__sTextChars); }
          { START(sink__V1658, _M__sTextNil);
            END(sink__V1658, _M__sTextNil); }
          END(sink__V1658, _M__sTextCons); }
        END(sink__V1658, _M__sTextCons); }
      END(sink__V1658, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1658->context, namedP__V1661); 
    UNLINK_VariablePropertyLink(sink__V1658->context, varP__V1662);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION MoveToTerm. */
int conBindOffs_M_MoveToTerm[] = {0 , 0};
char *nameFun_M_MoveToTerm(Term term) { return  "MoveToTerm" ; }
struct _ConstructionDescriptor descriptor_M_MoveToTerm = {&sort_M_Reified_xTerm, 0, 1, sizeof(STRUCT_Con_M_MoveToTerm), conBindOffs_M_MoveToTerm, &nameFun_M_MoveToTerm, &step_M_MoveToTerm};

int step_M_MoveToTerm(Sink sink__V1664, Term term__V1665)
{
  int term__V1665_count = LINK_COUNT(term__V1665); permitUnusedInt(term__V1665_count);
  Term sub__V1666 = FORCE(sink__V1664->context, SUB(term__V1665, 0));
  EnumOf_M_Reified_xBinder choice__V1667 = (IS_VARIABLE_USE(sub__V1666) ? VarOf_M_Reified_xBinder : (EnumOf_M_Reified_xBinder) TAG(sub__V1666));
  switch (choice__V1667)
  {
    case Data_M_BINDER: { /* Function DEFS-MoveToTerm-1$MoveToTerm$BINDER case BINDER */
      ASSERT(sink__V1664->context, !strcmp(SYMBOL(term__V1665),  "MoveToTerm" ));
      Term sub__V1668 = SUB(term__V1665, 0); int sub__V1668_count = term__V1665_count*LINK_COUNT(sub__V1668); permitUnusedInt(sub__V1668_count);
      CRSX_CHECK_SORT(sink__V1664->context, sub__V1668, &sort_M_Reified_xBinder); ASSERT(sink__V1664->context, !strcmp(SYMBOL(sub__V1668),  "BINDER" ));
      Term sub__V1669 = LINK(sink__V1664->context, SUB(sub__V1668, 0)); int sub__V1669_count = sub__V1668_count*LINK_COUNT(sub__V1669); permitUnusedInt(sub__V1669_count);
      CRSX_CHECK_SORT(sink__V1664->context, sub__V1669, &sort_M_Reified_xPromiscuity); /* sub__V1669 = &#0-0 */
      Term sub__V1670 = LINK(sink__V1664->context, SUB(sub__V1668, 1)); int sub__V1670_count = sub__V1668_count*LINK_COUNT(sub__V1670); permitUnusedInt(sub__V1670_count);
      CRSX_CHECK_SORT(sink__V1664->context, sub__V1670, &sort_M_Reified_xKind); /* sub__V1670 = &#0-1 */
      Term sub__V1671 = LINK(sink__V1664->context, SUB(sub__V1668, 2)); int sub__V1671_count = sub__V1668_count*LINK_COUNT(sub__V1671); permitUnusedInt(sub__V1671_count);
      CRSX_CHECK_SORT(sink__V1664->context, sub__V1671, &sort_M_Reified_xDepth); /* sub__V1671 = &#0-2 */
      Term sub__V1672 = LINK(sink__V1664->context, SUB(sub__V1668, 3)); int sub__V1672_count = sub__V1668_count*LINK_COUNT(sub__V1672); permitUnusedInt(sub__V1672_count);
      CRSX_CHECK_SORT(sink__V1664->context, sub__V1672, &sort_M_Reified_xSort); /* sub__V1672 = &#0-3 */
      Term sub__V1673 = LINK(sink__V1664->context, SUB(sub__V1668, 4)); int sub__V1673_count = sub__V1668_count*LINK_COUNT(sub__V1673); permitUnusedInt(sub__V1673_count);
      /* sub__V1673 = &#0-4 */
      Variable y__V1674 = linkVariable(sink__V1664->context, BINDER(sub__V1668,5,0)); if (sub__V1668_count <= 1) UNBIND(y__V1674);
      Term sub__V1675 = LINK(sink__V1664->context, SUB(sub__V1668, 5)); int sub__V1675_count = sub__V1668_count*LINK_COUNT(sub__V1675); permitUnusedInt(sub__V1675_count);
      CRSX_CHECK_SORT(sink__V1664->context, sub__V1675, &sort_M_Reified_xBinder); /* sub__V1675 = &#0-5 */
      
      NamedPropertyLink namedP__V1676 = LINK_NamedPropertyLink(sink__V1664->context, NAMED_PROPERTIES(term__V1665));
      VariablePropertyLink varP__V1677 = LINK_VariablePropertyLink(sink__V1664->context, VARIABLE_PROPERTIES(term__V1665));
      UNLINK(sink__V1664->context, term__V1665);
      ADD_PROPERTIES(sink__V1664, LINK_NamedPropertyLink(sink__V1664->context, namedP__V1676), LINK_VariablePropertyLink(sink__V1664->context, varP__V1677));
      { START(sink__V1664, _M_MoveToTerm_s3);
        COPY(sink__V1664, sub__V1670);COPY(sink__V1664, sub__V1669);COPY(sink__V1664, sub__V1671);COPY(sink__V1664, sub__V1672);COPY(sink__V1664, sub__V1673);{ if (!IS_BOUND(y__V1674)) { REBIND(linkVariable(sink__V1664->context, y__V1674));
            Variable binds__V1678[1] = {y__V1674}; BINDS(sink__V1664, 1, binds__V1678);
            COPY(sink__V1664, sub__V1675); /* REUSED SUBSTITUTION */  }
          else { Variable b__V1679 = MAKE_BOUND_PROMISCUOUS_VARIABLE(sink__V1664->context,"b__V1679");
            Variable binds__V1680[1] = {b__V1679}; BINDS(sink__V1664, 1, binds__V1680);
            {
              Term arg__V1681;
              { Sink buf__V1682 = ALLOCA_BUFFER(sink__V1664->context);
                USE(buf__V1682, linkVariable(buf__V1682->context, b__V1679));
                arg__V1681 = BUFFER_TERM(buf__V1682); FREE_BUFFER(buf__V1682); }
              Variable vars__V1683[1] = {y__V1674};
              Term args__V1684[1] = {arg__V1681};
              struct _SubstitutionFrame substitution__V1685 = {NULL, 0, 1, vars__V1683, args__V1684};
              SUBSTITUTE(sink__V1664, sub__V1675, &substitution__V1685); }
                }
           }
        END(sink__V1664, _M_MoveToTerm_s3); }
      UNLINK_NamedPropertyLink(sink__V1664->context, namedP__V1676); 
      UNLINK_VariablePropertyLink(sink__V1664->context, varP__V1677); unlinkVariable(sink__V1664->context, y__V1674);
      
      return 1;
    break; } case Data_M_ARGUMENT: { /* Function DEFS-MoveToTerm-2$MoveToTerm$ARGUMENT case ARGUMENT */
      ASSERT(sink__V1664->context, !strcmp(SYMBOL(term__V1665),  "MoveToTerm" ));
      Term sub__V1686 = SUB(term__V1665, 0); int sub__V1686_count = term__V1665_count*LINK_COUNT(sub__V1686); permitUnusedInt(sub__V1686_count);
      CRSX_CHECK_SORT(sink__V1664->context, sub__V1686, &sort_M_Reified_xBinder); ASSERT(sink__V1664->context, !strcmp(SYMBOL(sub__V1686),  "ARGUMENT" ));
      Term sub__V1687 = LINK(sink__V1664->context, SUB(sub__V1686, 0)); int sub__V1687_count = sub__V1686_count*LINK_COUNT(sub__V1687); permitUnusedInt(sub__V1687_count);
      CRSX_CHECK_SORT(sink__V1664->context, sub__V1687, &sort_M_Reified_xSort); /* sub__V1687 = &#0-0 */
      Term sub__V1688 = LINK(sink__V1664->context, SUB(sub__V1686, 1)); int sub__V1688_count = sub__V1686_count*LINK_COUNT(sub__V1688); permitUnusedInt(sub__V1688_count);
      CRSX_CHECK_SORT(sink__V1664->context, sub__V1688, &sort_M_Reified_xTerm); /* sub__V1688 = &#0-1 */
      
      NamedPropertyLink namedP__V1689 = LINK_NamedPropertyLink(sink__V1664->context, NAMED_PROPERTIES(term__V1665));
      VariablePropertyLink varP__V1690 = LINK_VariablePropertyLink(sink__V1664->context, VARIABLE_PROPERTIES(term__V1665));
      UNLINK(sink__V1664->context, term__V1665);
      ADD_PROPERTIES(sink__V1664, LINK_NamedPropertyLink(sink__V1664->context, namedP__V1689), LINK_VariablePropertyLink(sink__V1664->context, varP__V1690));
      { START(sink__V1664, _M_MoveToTerm_s1);
        COPY(sink__V1664, sub__V1687);COPY(sink__V1664, sub__V1688);END(sink__V1664, _M_MoveToTerm_s1); }
      UNLINK_NamedPropertyLink(sink__V1664->context, namedP__V1689); 
      UNLINK_VariablePropertyLink(sink__V1664->context, varP__V1690);
      
      return 1;
    } default: break;
  }
  return 0;
}

/* FUNCTION ConcatText$2. */
int conBindOffs_M_ConcatText_s2[] = {0 , 0};
char *nameFun_M_ConcatText_s2(Term term) { return  "ConcatText$2" ; }
struct _ConstructionDescriptor descriptor_M_ConcatText_s2 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_ConcatText_s2), conBindOffs_M_ConcatText_s2, &nameFun_M_ConcatText_s2, &step_M_ConcatText_s2};

int step_M_ConcatText_s2(Sink sink__V1691, Term term__V1692)
{
  int term__V1692_count = LINK_COUNT(term__V1692); permitUnusedInt(term__V1692_count);
  do {
    /* Contraction rule DEFS-ConcatText-1. */
    ASSERT(sink__V1691->context, !strcmp(SYMBOL(term__V1692),  "ConcatText$2" ));
    Term sub__V1693 = SUB(term__V1692, 0); int sub__V1693_count = term__V1692_count*LINK_COUNT(sub__V1693); permitUnusedInt(sub__V1693_count);
    CRSX_CHECK_SORT(sink__V1691->context, sub__V1693, &sort_M_Reified_xVariable); /* sub__V1693 = &#2 */
    
    NamedPropertyLink namedP__V1694 = LINK_NamedPropertyLink(sink__V1691->context, NAMED_PROPERTIES(term__V1692));
    VariablePropertyLink varP__V1695 = LINK_VariablePropertyLink(sink__V1691->context, VARIABLE_PROPERTIES(term__V1692));
    UNLINK(sink__V1691->context, term__V1692);
    { START(sink__V1691, _M__sTextNil);
      END(sink__V1691, _M__sTextNil); }
    UNLINK_NamedPropertyLink(sink__V1691->context, namedP__V1694); 
    UNLINK_VariablePropertyLink(sink__V1691->context, varP__V1695);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION ConcatText$1. */
int conBindOffs_M_ConcatText_s1[] = {0 , 0 , 0 , 0};
char *nameFun_M_ConcatText_s1(Term term) { return  "ConcatText$1" ; }
struct _ConstructionDescriptor descriptor_M_ConcatText_s1 = {&sort_M_Reified_xVariable, 0, 3, sizeof(STRUCT_Con_M_ConcatText_s1), conBindOffs_M_ConcatText_s1, &nameFun_M_ConcatText_s1, &step_M_ConcatText_s1};

int step_M_ConcatText_s1(Sink sink__V1696, Term term__V1697)
{
  int term__V1697_count = LINK_COUNT(term__V1697); permitUnusedInt(term__V1697_count);
  do {
    /* Contraction rule DEFS-ConcatText-2. */
    ASSERT(sink__V1696->context, !strcmp(SYMBOL(term__V1697),  "ConcatText$1" ));
    Term sub__V1698 = LINK(sink__V1696->context, SUB(term__V1697, 0)); int sub__V1698_count = term__V1697_count*LINK_COUNT(sub__V1698); permitUnusedInt(sub__V1698_count);
    /* sub__V1698 = &#11 */
    Term sub__V1699 = LINK(sink__V1696->context, SUB(term__V1697, 1)); int sub__V1699_count = term__V1697_count*LINK_COUNT(sub__V1699); permitUnusedInt(sub__V1699_count);
    /* sub__V1699 = &#12 */
    Term sub__V1700 = LINK(sink__V1696->context, SUB(term__V1697, 2)); int sub__V1700_count = term__V1697_count*LINK_COUNT(sub__V1700); permitUnusedInt(sub__V1700_count);
    CRSX_CHECK_SORT(sink__V1696->context, sub__V1700, &sort_M_Reified_xVariable); /* sub__V1700 = &#2 */
    
    NamedPropertyLink namedP__V1701 = LINK_NamedPropertyLink(sink__V1696->context, NAMED_PROPERTIES(term__V1697));
    VariablePropertyLink varP__V1702 = LINK_VariablePropertyLink(sink__V1696->context, VARIABLE_PROPERTIES(term__V1697));
    UNLINK(sink__V1696->context, term__V1697);
    { START(sink__V1696, _M__sTextCons);
      { START(sink__V1696, _M__sTextEmbed);
        { START(sink__V1696, _M_AsText);
          COPY(sink__V1696, LINK(sink__V1696->context, sub__V1700));END(sink__V1696, _M_AsText); }
        END(sink__V1696, _M__sTextEmbed); }
      { START(sink__V1696, _M__sTextCons);
        { START(sink__V1696, _M__sTextEmbed);
          { START(sink__V1696, _M_AsText);
            COPY(sink__V1696, sub__V1698);END(sink__V1696, _M_AsText); }
          END(sink__V1696, _M__sTextEmbed); }
        { START(sink__V1696, _M__sTextCons);
          { START(sink__V1696, _M__sTextEmbed);
            { START(sink__V1696, _M_AsText);
              { START(sink__V1696, _M_ConcatText);
                COPY(sink__V1696, sub__V1699);COPY(sink__V1696, sub__V1700);END(sink__V1696, _M_ConcatText); }
              END(sink__V1696, _M_AsText); }
            END(sink__V1696, _M__sTextEmbed); }
          { START(sink__V1696, _M__sTextNil);
            END(sink__V1696, _M__sTextNil); }
          END(sink__V1696, _M__sTextCons); }
        END(sink__V1696, _M__sTextCons); }
      END(sink__V1696, _M__sTextCons); }
    UNLINK_NamedPropertyLink(sink__V1696->context, namedP__V1701); 
    UNLINK_VariablePropertyLink(sink__V1696->context, varP__V1702);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION Sort-name$1. */
int conBindOffs_M_Sort__name_s1[] = {0 , 0 , 0};
char *nameFun_M_Sort__name_s1(Term term) { return  "Sort-name$1" ; }
struct _ConstructionDescriptor descriptor_M_Sort__name_s1 = {&sort_M_Reified_xVariable, 0, 2, sizeof(STRUCT_Con_M_Sort__name_s1), conBindOffs_M_Sort__name_s1, &nameFun_M_Sort__name_s1, &step_M_Sort__name_s1};

int step_M_Sort__name_s1(Sink sink__V1703, Term term__V1704)
{
  int term__V1704_count = LINK_COUNT(term__V1704); permitUnusedInt(term__V1704_count);
  do {
    /* Contraction rule DEFS-Sort-name-1. */
    ASSERT(sink__V1703->context, !strcmp(SYMBOL(term__V1704),  "Sort-name$1" ));
    Term sub__V1705 = LINK(sink__V1703->context, SUB(term__V1704, 0)); int sub__V1705_count = term__V1704_count*LINK_COUNT(sub__V1705); permitUnusedInt(sub__V1705_count);
    /* sub__V1705 = &#11 */
    Term sub__V1706 = SUB(term__V1704, 1); int sub__V1706_count = term__V1704_count*LINK_COUNT(sub__V1706); permitUnusedInt(sub__V1706_count);
    /* sub__V1706 = &#12 */
    
    NamedPropertyLink namedP__V1707 = LINK_NamedPropertyLink(sink__V1703->context, NAMED_PROPERTIES(term__V1704));
    VariablePropertyLink varP__V1708 = LINK_VariablePropertyLink(sink__V1703->context, VARIABLE_PROPERTIES(term__V1704));
    UNLINK(sink__V1703->context, term__V1704);
    { START(sink__V1703, _M_TOKEN);
      COPY(sink__V1703, sub__V1705);END(sink__V1703, _M_TOKEN); }
    UNLINK_NamedPropertyLink(sink__V1703->context, namedP__V1707); 
    UNLINK_VariablePropertyLink(sink__V1703->context, varP__V1708);
    return 1;
  } while (0);
  return 0;
}

/* FUNCTION UnVariable$1. */
int conBindOffs_M_UnVariable_s1[] = {0 , 0};
char *nameFun_M_UnVariable_s1(Term term) { return  "UnVariable$1" ; }
struct _ConstructionDescriptor descriptor_M_UnVariable_s1 = {&sort_M_Reified_xVariable, 0, 1, sizeof(STRUCT_Con_M_UnVariable_s1), conBindOffs_M_UnVariable_s1, &nameFun_M_UnVariable_s1, &step_M_UnVariable_s1};

int step_M_UnVariable_s1(Sink sink__V1709, Term term__V1710)
{
  int term__V1710_count = LINK_COUNT(term__V1710); permitUnusedInt(term__V1710_count);
  do {
    /* Contraction rule DEFS-UnVariable-1. */
    ASSERT(sink__V1709->context, !strcmp(SYMBOL(term__V1710),  "UnVariable$1" ));
    Term sub__V1711 = LINK(sink__V1709->context, SUB(term__V1710, 0)); int sub__V1711_count = term__V1710_count*LINK_COUNT(sub__V1711); permitUnusedInt(sub__V1711_count);
    CRSX_CHECK_SORT(sink__V1709->context, sub__V1711, &sort_M_Reified_xVariable); /* sub__V1711 = &#11 */
    
    NamedPropertyLink namedP__V1712 = LINK_NamedPropertyLink(sink__V1709->context, NAMED_PROPERTIES(term__V1710));
    VariablePropertyLink varP__V1713 = LINK_VariablePropertyLink(sink__V1709->context, VARIABLE_PROPERTIES(term__V1710));
    UNLINK(sink__V1709->context, term__V1710);
    COPY(sink__V1709, sub__V1711);UNLINK_NamedPropertyLink(sink__V1709->context, namedP__V1712); 
    UNLINK_VariablePropertyLink(sink__V1709->context, varP__V1713);
    return 1;
  } while (0);
  return 0;
}

#ifdef __cplusplus
}
#endif
/* END OF C RULES FOR CRSX CRSXC MODULE D. */
