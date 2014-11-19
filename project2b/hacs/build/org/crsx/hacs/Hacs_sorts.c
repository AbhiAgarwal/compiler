 /* C SORT DESCRIPTORS FOR CRSX Main. */
#include "/home/krisrose/Desktop/research/crsx/develop/hacs/build/org/crsx/hacs/Hacs.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SORT $Boolean CONSTANTS. */
char *name_M__sTrue =  "$True" ;
char *nameFun_M__sTrue(Term term) { return name_M__sTrue; }
struct _ConstructionDescriptor descriptor_M__sTrue = {&sort_M__sBoolean, Data_M__sTrue, 0, sizeof(STRUCT_Con_M__sTrue), noBinderOffsets, &nameFun_M__sTrue, &dataStep};
char *name_M__sFalse =  "$False" ;
char *nameFun_M__sFalse(Term term) { return name_M__sFalse; }
struct _ConstructionDescriptor descriptor_M__sFalse = {&sort_M__sBoolean, Data_M__sFalse, 0, sizeof(STRUCT_Con_M__sFalse), noBinderOffsets, &nameFun_M__sFalse, &dataStep};
ConstructionDescriptor sortCon_M__sBoolean[] = {NULL, NULL, &descriptor_M__sTrue, &descriptor_M__sFalse,  NULL};
char *sortNam_M__sBoolean[] = {NULL, NULL,  "$True" ,  "$False" ,  NULL};
char *sortInt_M__sBoolean[] = {NULL, NULL, "_M__sTrue", "_M__sFalse",  NULL};
struct _SortDescriptor sort_M__sBoolean = { "$Boolean" , sortCon_M__sBoolean, sortNam_M__sBoolean, sortInt_M__sBoolean, NULL};

/* SORT $List CONSTANTS. */
int conBindOffs_M__sCons[] = {0 , 0 , 0};
char *name_M__sCons =  "$Cons" ;
char *nameFun_M__sCons(Term term) { return name_M__sCons; }
struct _ConstructionDescriptor descriptor_M__sCons = {&sort_M__sList, Data_M__sCons, 2, sizeof(STRUCT_Con_M__sCons), conBindOffs_M__sCons, &nameFun_M__sCons, &dataStep};
char *name_M__sNil =  "$Nil" ;
char *nameFun_M__sNil(Term term) { return name_M__sNil; }
struct _ConstructionDescriptor descriptor_M__sNil = {&sort_M__sList, Data_M__sNil, 0, sizeof(STRUCT_Con_M__sNil), noBinderOffsets, &nameFun_M__sNil, &dataStep};
ConstructionDescriptor sortCon_M__sList[] = {NULL, NULL, &descriptor_M__sCons, &descriptor_M__sNil,  NULL};
char *sortNam_M__sList[] = {NULL, NULL,  "$Cons" ,  "$Nil" ,  NULL};
char *sortInt_M__sList[] = {NULL, NULL, "_M__sCons", "_M__sNil",  NULL};
struct _SortDescriptor sort_M__sList = { "$List" , sortCon_M__sList, sortNam_M__sList, sortInt_M__sList, NULL};

/* SORT $StringEntrySort CONSTANTS. */
int conBindOffs_M_STRING[] = {0 , 0};
char *name_M_STRING =  "STRING" ;
char *nameFun_M_STRING(Term term) { return name_M_STRING; }
struct _ConstructionDescriptor descriptor_M_STRING = {&sort_M__sStringEntrySort, Data_M_STRING, 1, sizeof(STRUCT_Con_M_STRING), conBindOffs_M_STRING, &nameFun_M_STRING, &dataStep};
ConstructionDescriptor sortCon_M__sStringEntrySort[] = {NULL, NULL, &descriptor_M_STRING,  NULL};
char *sortNam_M__sStringEntrySort[] = {NULL, NULL,  "STRING" ,  NULL};
char *sortInt_M__sStringEntrySort[] = {NULL, NULL, "_M_STRING",  NULL};
struct _SortDescriptor sort_M__sStringEntrySort = { "$StringEntrySort" , sortCon_M__sStringEntrySort, sortNam_M__sStringEntrySort, sortInt_M__sStringEntrySort, NULL};

/* SORT $TryResult CONSTANTS. */
int conBindOffs_M__sTrySuccess[] = {0 , 0};
char *name_M__sTrySuccess =  "$TrySuccess" ;
char *nameFun_M__sTrySuccess(Term term) { return name_M__sTrySuccess; }
struct _ConstructionDescriptor descriptor_M__sTrySuccess = {&sort_M__sTryResult, Data_M__sTrySuccess, 1, sizeof(STRUCT_Con_M__sTrySuccess), conBindOffs_M__sTrySuccess, &nameFun_M__sTrySuccess, &dataStep};
int conBindOffs_M__sTryFailure[] = {0 , 0};
char *name_M__sTryFailure =  "$TryFailure" ;
char *nameFun_M__sTryFailure(Term term) { return name_M__sTryFailure; }
struct _ConstructionDescriptor descriptor_M__sTryFailure = {&sort_M__sTryResult, Data_M__sTryFailure, 1, sizeof(STRUCT_Con_M__sTryFailure), conBindOffs_M__sTryFailure, &nameFun_M__sTryFailure, &dataStep};
ConstructionDescriptor sortCon_M__sTryResult[] = {NULL, NULL, &descriptor_M__sTrySuccess, &descriptor_M__sTryFailure,  NULL};
char *sortNam_M__sTryResult[] = {NULL, NULL,  "$TrySuccess" ,  "$TryFailure" ,  NULL};
char *sortInt_M__sTryResult[] = {NULL, NULL, "_M__sTrySuccess", "_M__sTryFailure",  NULL};
struct _SortDescriptor sort_M__sTryResult = { "$TryResult" , sortCon_M__sTryResult, sortNam_M__sTryResult, sortInt_M__sTryResult, NULL};

/* SORT AttributeDescriptor CONSTANTS. */
int conBindOffs_M_A_xDESCRIPTOR[] = {0 , 0 , 0};
char *name_M_A_xDESCRIPTOR =  "A_DESCRIPTOR" ;
char *nameFun_M_A_xDESCRIPTOR(Term term) { return name_M_A_xDESCRIPTOR; }
struct _ConstructionDescriptor descriptor_M_A_xDESCRIPTOR = {&sort_M_AttributeDescriptor, Data_M_A_xDESCRIPTOR, 2, sizeof(STRUCT_Con_M_A_xDESCRIPTOR), conBindOffs_M_A_xDESCRIPTOR, &nameFun_M_A_xDESCRIPTOR, &dataStep};
ConstructionDescriptor sortCon_M_AttributeDescriptor[] = {NULL, NULL, &descriptor_M_A_xDESCRIPTOR,  NULL};
char *sortNam_M_AttributeDescriptor[] = {NULL, NULL,  "A_DESCRIPTOR" ,  NULL};
char *sortInt_M_AttributeDescriptor[] = {NULL, NULL, "_M_A_xDESCRIPTOR",  NULL};
struct _SortDescriptor sort_M_AttributeDescriptor = { "AttributeDescriptor" , sortCon_M_AttributeDescriptor, sortNam_M_AttributeDescriptor, sortInt_M_AttributeDescriptor, NULL};

/* SORT AttributeFormMap CONSTANTS. */
char *name_M_AFM =  "AFM" ;
char *nameFun_M_AFM(Term term) { return name_M_AFM; }
struct _ConstructionDescriptor descriptor_M_AFM = {&sort_M_AttributeFormMap, Data_M_AFM, 0, sizeof(STRUCT_Con_M_AFM), noBinderOffsets, &nameFun_M_AFM, &dataStep};
ConstructionDescriptor sortCon_M_AttributeFormMap[] = {NULL, NULL, &descriptor_M_AFM,  NULL};
char *sortNam_M_AttributeFormMap[] = {NULL, NULL,  "AFM" ,  NULL};
char *sortInt_M_AttributeFormMap[] = {NULL, NULL, "_M_AFM",  NULL};
struct _SortDescriptor sort_M_AttributeFormMap = { "AttributeFormMap" , sortCon_M_AttributeFormMap, sortNam_M_AttributeFormMap, sortInt_M_AttributeFormMap, NULL};

/* SORT Boolean CONSTANTS. */
char *name_M_B_xTRUE =  "B_TRUE" ;
char *nameFun_M_B_xTRUE(Term term) { return name_M_B_xTRUE; }
struct _ConstructionDescriptor descriptor_M_B_xTRUE = {&sort_M_Boolean, Data_M_B_xTRUE, 0, sizeof(STRUCT_Con_M_B_xTRUE), noBinderOffsets, &nameFun_M_B_xTRUE, &dataStep};
char *name_M_B_xFALSE =  "B_FALSE" ;
char *nameFun_M_B_xFALSE(Term term) { return name_M_B_xFALSE; }
struct _ConstructionDescriptor descriptor_M_B_xFALSE = {&sort_M_Boolean, Data_M_B_xFALSE, 0, sizeof(STRUCT_Con_M_B_xFALSE), noBinderOffsets, &nameFun_M_B_xFALSE, &dataStep};
ConstructionDescriptor sortCon_M_Boolean[] = {NULL, NULL, &descriptor_M_B_xTRUE, &descriptor_M_B_xFALSE,  NULL};
char *sortNam_M_Boolean[] = {NULL, NULL,  "B_TRUE" ,  "B_FALSE" ,  NULL};
char *sortInt_M_Boolean[] = {NULL, NULL, "_M_B_xTRUE", "_M_B_xFALSE",  NULL};
struct _SortDescriptor sort_M_Boolean = { "Boolean" , sortCon_M_Boolean, sortNam_M_Boolean, sortInt_M_Boolean, NULL};

/* SORT CONSUMPTION_SORT CONSTANTS. */
int conBindOffs_M_C_xBUFFER[] = {0 , 0 , 0};
char *name_M_C_xBUFFER =  "C_BUFFER" ;
char *nameFun_M_C_xBUFFER(Term term) { return name_M_C_xBUFFER; }
struct _ConstructionDescriptor descriptor_M_C_xBUFFER = {&sort_M_CONSUMPTION_xSORT, Data_M_C_xBUFFER, 2, sizeof(STRUCT_Con_M_C_xBUFFER), conBindOffs_M_C_xBUFFER, &nameFun_M_C_xBUFFER, &dataStep};
int conBindOffs_M_C_xLEFTRECURSIVE[] = {0 , 0 , 0};
char *name_M_C_xLEFTRECURSIVE =  "C_LEFTRECURSIVE" ;
char *nameFun_M_C_xLEFTRECURSIVE(Term term) { return name_M_C_xLEFTRECURSIVE; }
struct _ConstructionDescriptor descriptor_M_C_xLEFTRECURSIVE = {&sort_M_CONSUMPTION_xSORT, Data_M_C_xLEFTRECURSIVE, 2, sizeof(STRUCT_Con_M_C_xLEFTRECURSIVE), conBindOffs_M_C_xLEFTRECURSIVE, &nameFun_M_C_xLEFTRECURSIVE, &dataStep};
ConstructionDescriptor sortCon_M_CONSUMPTION_xSORT[] = {NULL, NULL, &descriptor_M_C_xBUFFER, &descriptor_M_C_xLEFTRECURSIVE,  NULL};
char *sortNam_M_CONSUMPTION_xSORT[] = {NULL, NULL,  "C_BUFFER" ,  "C_LEFTRECURSIVE" ,  NULL};
char *sortInt_M_CONSUMPTION_xSORT[] = {NULL, NULL, "_M_C_xBUFFER", "_M_C_xLEFTRECURSIVE",  NULL};
struct _SortDescriptor sort_M_CONSUMPTION_xSORT = { "CONSUMPTION_SORT" , sortCon_M_CONSUMPTION_xSORT, sortNam_M_CONSUMPTION_xSORT, sortInt_M_CONSUMPTION_xSORT, NULL};

/* SORT DeclarationMap CONSTANTS. */
char *name_M_DM =  "DM" ;
char *nameFun_M_DM(Term term) { return name_M_DM; }
struct _ConstructionDescriptor descriptor_M_DM = {&sort_M_DeclarationMap, Data_M_DM, 0, sizeof(STRUCT_Con_M_DM), noBinderOffsets, &nameFun_M_DM, &dataStep};
ConstructionDescriptor sortCon_M_DeclarationMap[] = {NULL, NULL, &descriptor_M_DM,  NULL};
char *sortNam_M_DeclarationMap[] = {NULL, NULL,  "DM" ,  NULL};
char *sortInt_M_DeclarationMap[] = {NULL, NULL, "_M_DM",  NULL};
struct _SortDescriptor sort_M_DeclarationMap = { "DeclarationMap" , sortCon_M_DeclarationMap, sortNam_M_DeclarationMap, sortInt_M_DeclarationMap, NULL};

/* SORT DeclarationMapEntry CONSTANTS. */
char *name_M_DME_xNONE =  "DME_NONE" ;
char *nameFun_M_DME_xNONE(Term term) { return name_M_DME_xNONE; }
struct _ConstructionDescriptor descriptor_M_DME_xNONE = {&sort_M_DeclarationMapEntry, Data_M_DME_xNONE, 0, sizeof(STRUCT_Con_M_DME_xNONE), noBinderOffsets, &nameFun_M_DME_xNONE, &dataStep};
int conBindOffs_M_DME_xSTRING[] = {0 , 0};
char *name_M_DME_xSTRING =  "DME_STRING" ;
char *nameFun_M_DME_xSTRING(Term term) { return name_M_DME_xSTRING; }
struct _ConstructionDescriptor descriptor_M_DME_xSTRING = {&sort_M_DeclarationMapEntry, Data_M_DME_xSTRING, 1, sizeof(STRUCT_Con_M_DME_xSTRING), conBindOffs_M_DME_xSTRING, &nameFun_M_DME_xSTRING, &dataStep};
int conBindOffs_M_DME_xTOKEN[] = {0 , 0};
char *name_M_DME_xTOKEN =  "DME_TOKEN" ;
char *nameFun_M_DME_xTOKEN(Term term) { return name_M_DME_xTOKEN; }
struct _ConstructionDescriptor descriptor_M_DME_xTOKEN = {&sort_M_DeclarationMapEntry, Data_M_DME_xTOKEN, 1, sizeof(STRUCT_Con_M_DME_xTOKEN), conBindOffs_M_DME_xTOKEN, &nameFun_M_DME_xTOKEN, &dataStep};
int conBindOffs_M_DME_xNAMES[] = {0 , 0};
char *name_M_DME_xNAMES =  "DME_NAMES" ;
char *nameFun_M_DME_xNAMES(Term term) { return name_M_DME_xNAMES; }
struct _ConstructionDescriptor descriptor_M_DME_xNAMES = {&sort_M_DeclarationMapEntry, Data_M_DME_xNAMES, 1, sizeof(STRUCT_Con_M_DME_xNAMES), conBindOffs_M_DME_xNAMES, &nameFun_M_DME_xNAMES, &dataStep};
int conBindOffs_M_DME_xN2NM[] = {0 , 0};
char *name_M_DME_xN2NM =  "DME_N2NM" ;
char *nameFun_M_DME_xN2NM(Term term) { return name_M_DME_xN2NM; }
struct _ConstructionDescriptor descriptor_M_DME_xN2NM = {&sort_M_DeclarationMapEntry, Data_M_DME_xN2NM, 1, sizeof(STRUCT_Con_M_DME_xN2NM), conBindOffs_M_DME_xN2NM, &nameFun_M_DME_xN2NM, &dataStep};
int conBindOffs_M_DME_xSORT[] = {0 , 0 , 0 , 0 , 0 , 0};
char *name_M_DME_xSORT =  "DME_SORT" ;
char *nameFun_M_DME_xSORT(Term term) { return name_M_DME_xSORT; }
struct _ConstructionDescriptor descriptor_M_DME_xSORT = {&sort_M_DeclarationMapEntry, Data_M_DME_xSORT, 5, sizeof(STRUCT_Con_M_DME_xSORT), conBindOffs_M_DME_xSORT, &nameFun_M_DME_xSORT, &dataStep};
int conBindOffs_M_DME_xAFM[] = {0 , 0};
char *name_M_DME_xAFM =  "DME_AFM" ;
char *nameFun_M_DME_xAFM(Term term) { return name_M_DME_xAFM; }
struct _ConstructionDescriptor descriptor_M_DME_xAFM = {&sort_M_DeclarationMapEntry, Data_M_DME_xAFM, 1, sizeof(STRUCT_Con_M_DME_xAFM), conBindOffs_M_DME_xAFM, &nameFun_M_DME_xAFM, &dataStep};
int conBindOffs_M_DME_xN2N[] = {0 , 0};
char *name_M_DME_xN2N =  "DME_N2N" ;
char *nameFun_M_DME_xN2N(Term term) { return name_M_DME_xN2N; }
struct _ConstructionDescriptor descriptor_M_DME_xN2N = {&sort_M_DeclarationMapEntry, Data_M_DME_xN2N, 1, sizeof(STRUCT_Con_M_DME_xN2N), conBindOffs_M_DME_xN2N, &nameFun_M_DME_xN2N, &dataStep};
int conBindOffs_M_DME_xATTRIBUTE[] = {0 , 0 , 0 , 0 , 0};
char *name_M_DME_xATTRIBUTE =  "DME_ATTRIBUTE" ;
char *nameFun_M_DME_xATTRIBUTE(Term term) { return name_M_DME_xATTRIBUTE; }
struct _ConstructionDescriptor descriptor_M_DME_xATTRIBUTE = {&sort_M_DeclarationMapEntry, Data_M_DME_xATTRIBUTE, 4, sizeof(STRUCT_Con_M_DME_xATTRIBUTE), conBindOffs_M_DME_xATTRIBUTE, &nameFun_M_DME_xATTRIBUTE, &dataStep};
int conBindOffs_M_DME_xALIAS[] = {0 , 0};
char *name_M_DME_xALIAS =  "DME_ALIAS" ;
char *nameFun_M_DME_xALIAS(Term term) { return name_M_DME_xALIAS; }
struct _ConstructionDescriptor descriptor_M_DME_xALIAS = {&sort_M_DeclarationMapEntry, Data_M_DME_xALIAS, 1, sizeof(STRUCT_Con_M_DME_xALIAS), conBindOffs_M_DME_xALIAS, &nameFun_M_DME_xALIAS, &dataStep};
ConstructionDescriptor sortCon_M_DeclarationMapEntry[] = {NULL, NULL, &descriptor_M_DME_xNONE, &descriptor_M_DME_xSTRING, &descriptor_M_DME_xTOKEN, &descriptor_M_DME_xNAMES, &descriptor_M_DME_xN2NM, &descriptor_M_DME_xSORT, &descriptor_M_DME_xAFM, &descriptor_M_DME_xN2N, &descriptor_M_DME_xATTRIBUTE, &descriptor_M_DME_xALIAS,  NULL};
char *sortNam_M_DeclarationMapEntry[] = {NULL, NULL,  "DME_NONE" ,  "DME_STRING" ,  "DME_TOKEN" ,  "DME_NAMES" ,  "DME_N2NM" ,  "DME_SORT" ,  "DME_AFM" ,  "DME_N2N" ,  "DME_ATTRIBUTE" ,  "DME_ALIAS" ,  NULL};
char *sortInt_M_DeclarationMapEntry[] = {NULL, NULL, "_M_DME_xNONE", "_M_DME_xSTRING", "_M_DME_xTOKEN", "_M_DME_xNAMES", "_M_DME_xN2NM", "_M_DME_xSORT", "_M_DME_xAFM", "_M_DME_xN2N", "_M_DME_xATTRIBUTE", "_M_DME_xALIAS",  NULL};
struct _SortDescriptor sort_M_DeclarationMapEntry = { "DeclarationMapEntry" , sortCon_M_DeclarationMapEntry, sortNam_M_DeclarationMapEntry, sortInt_M_DeclarationMapEntry, NULL};

/* SORT Define CONSTANTS. */
int conBindOffs_M_D_xSYNTHESIZES[] = {0 , 0};
char *name_M_D_xSYNTHESIZES =  "D_SYNTHESIZES" ;
char *nameFun_M_D_xSYNTHESIZES(Term term) { return name_M_D_xSYNTHESIZES; }
struct _ConstructionDescriptor descriptor_M_D_xSYNTHESIZES = {&sort_M_Define, Data_M_D_xSYNTHESIZES, 1, sizeof(STRUCT_Con_M_D_xSYNTHESIZES), conBindOffs_M_D_xSYNTHESIZES, &nameFun_M_D_xSYNTHESIZES, &dataStep};
int conBindOffs_M_D_xFORM[] = {0 , 0 , 0};
char *name_M_D_xFORM =  "D_FORM" ;
char *nameFun_M_D_xFORM(Term term) { return name_M_D_xFORM; }
struct _ConstructionDescriptor descriptor_M_D_xFORM = {&sort_M_Define, Data_M_D_xFORM, 2, sizeof(STRUCT_Con_M_D_xFORM), conBindOffs_M_D_xFORM, &nameFun_M_D_xFORM, &dataStep};
int conBindOffs_M_D_xRULE[] = {0 , 0 , 0 , 0};
char *name_M_D_xRULE =  "D_RULE" ;
char *nameFun_M_D_xRULE(Term term) { return name_M_D_xRULE; }
struct _ConstructionDescriptor descriptor_M_D_xRULE = {&sort_M_Define, Data_M_D_xRULE, 3, sizeof(STRUCT_Con_M_D_xRULE), conBindOffs_M_D_xRULE, &nameFun_M_D_xRULE, &dataStep};
char *name_M_D_xNONE =  "D_NONE" ;
char *nameFun_M_D_xNONE(Term term) { return name_M_D_xNONE; }
struct _ConstructionDescriptor descriptor_M_D_xNONE = {&sort_M_Define, Data_M_D_xNONE, 0, sizeof(STRUCT_Con_M_D_xNONE), noBinderOffsets, &nameFun_M_D_xNONE, &dataStep};
int conBindOffs_M_D_xABSTRACTION[] = {0 , 1};
char *name_M_D_xABSTRACTION =  "D_ABSTRACTION" ;
char *nameFun_M_D_xABSTRACTION(Term term) { return name_M_D_xABSTRACTION; }
struct _ConstructionDescriptor descriptor_M_D_xABSTRACTION = {&sort_M_Define, Data_M_D_xABSTRACTION, 1, sizeof(STRUCT_Con_M_D_xABSTRACTION), conBindOffs_M_D_xABSTRACTION, &nameFun_M_D_xABSTRACTION, &dataStep};
ConstructionDescriptor sortCon_M_Define[] = {NULL, NULL, &descriptor_M_D_xSYNTHESIZES, &descriptor_M_D_xFORM, &descriptor_M_D_xRULE, &descriptor_M_D_xNONE, &descriptor_M_D_xABSTRACTION,  NULL};
char *sortNam_M_Define[] = {NULL, NULL,  "D_SYNTHESIZES" ,  "D_FORM" ,  "D_RULE" ,  "D_NONE" ,  "D_ABSTRACTION" ,  NULL};
char *sortInt_M_Define[] = {NULL, NULL, "_M_D_xSYNTHESIZES", "_M_D_xFORM", "_M_D_xRULE", "_M_D_xNONE", "_M_D_xABSTRACTION",  NULL};
struct _SortDescriptor sort_M_Define = { "Define" , sortCon_M_Define, sortNam_M_Define, sortInt_M_Define, NULL};

/* SORT FormKind CONSTANTS. */
int conBindOffs_M_FK_xSYMBOL[] = {0 , 0 , 0};
char *name_M_FK_xSYMBOL =  "FK_SYMBOL" ;
char *nameFun_M_FK_xSYMBOL(Term term) { return name_M_FK_xSYMBOL; }
struct _ConstructionDescriptor descriptor_M_FK_xSYMBOL = {&sort_M_FormKind, Data_M_FK_xSYMBOL, 2, sizeof(STRUCT_Con_M_FK_xSYMBOL), conBindOffs_M_FK_xSYMBOL, &nameFun_M_FK_xSYMBOL, &dataStep};
char *name_M_FK_xALIAS =  "FK_ALIAS" ;
char *nameFun_M_FK_xALIAS(Term term) { return name_M_FK_xALIAS; }
struct _ConstructionDescriptor descriptor_M_FK_xALIAS = {&sort_M_FormKind, Data_M_FK_xALIAS, 0, sizeof(STRUCT_Con_M_FK_xALIAS), noBinderOffsets, &nameFun_M_FK_xALIAS, &dataStep};
int conBindOffs_M_FK_xSUGAR[] = {0 , 0};
char *name_M_FK_xSUGAR =  "FK_SUGAR" ;
char *nameFun_M_FK_xSUGAR(Term term) { return name_M_FK_xSUGAR; }
struct _ConstructionDescriptor descriptor_M_FK_xSUGAR = {&sort_M_FormKind, Data_M_FK_xSUGAR, 1, sizeof(STRUCT_Con_M_FK_xSUGAR), conBindOffs_M_FK_xSUGAR, &nameFun_M_FK_xSUGAR, &dataStep};
int conBindOffs_M_FK_xSCHEME[] = {0 , 0};
char *name_M_FK_xSCHEME =  "FK_SCHEME" ;
char *nameFun_M_FK_xSCHEME(Term term) { return name_M_FK_xSCHEME; }
struct _ConstructionDescriptor descriptor_M_FK_xSCHEME = {&sort_M_FormKind, Data_M_FK_xSCHEME, 1, sizeof(STRUCT_Con_M_FK_xSCHEME), conBindOffs_M_FK_xSCHEME, &nameFun_M_FK_xSCHEME, &dataStep};
int conBindOffs_M_FK_xDATA[] = {0 , 0};
char *name_M_FK_xDATA =  "FK_DATA" ;
char *nameFun_M_FK_xDATA(Term term) { return name_M_FK_xDATA; }
struct _ConstructionDescriptor descriptor_M_FK_xDATA = {&sort_M_FormKind, Data_M_FK_xDATA, 1, sizeof(STRUCT_Con_M_FK_xDATA), conBindOffs_M_FK_xDATA, &nameFun_M_FK_xDATA, &dataStep};
ConstructionDescriptor sortCon_M_FormKind[] = {NULL, NULL, &descriptor_M_FK_xSYMBOL, &descriptor_M_FK_xALIAS, &descriptor_M_FK_xSUGAR, &descriptor_M_FK_xSCHEME, &descriptor_M_FK_xDATA,  NULL};
char *sortNam_M_FormKind[] = {NULL, NULL,  "FK_SYMBOL" ,  "FK_ALIAS" ,  "FK_SUGAR" ,  "FK_SCHEME" ,  "FK_DATA" ,  NULL};
char *sortInt_M_FormKind[] = {NULL, NULL, "_M_FK_xSYMBOL", "_M_FK_xALIAS", "_M_FK_xSUGAR", "_M_FK_xSCHEME", "_M_FK_xDATA",  NULL};
struct _SortDescriptor sort_M_FormKind = { "FormKind" , sortCon_M_FormKind, sortNam_M_FormKind, sortInt_M_FormKind, NULL};

/* SORT HxAttribute CONSTANTS. */
int conBindOffs_M_Hx_xCatchAllAttributes[] = {0 , 0 , 0};
char *name_M_Hx_xCatchAllAttributes =  "Hx_CatchAllAttributes" ;
char *nameFun_M_Hx_xCatchAllAttributes(Term term) { return name_M_Hx_xCatchAllAttributes; }
struct _ConstructionDescriptor descriptor_M_Hx_xCatchAllAttributes = {&sort_M_HxAttribute, Data_M_Hx_xCatchAllAttributes, 2, sizeof(STRUCT_Con_M_Hx_xCatchAllAttributes), conBindOffs_M_Hx_xCatchAllAttributes, &nameFun_M_Hx_xCatchAllAttributes, &dataStep};
int conBindOffs_M_Hx_xAttribute[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xAttribute =  "Hx_Attribute" ;
char *nameFun_M_Hx_xAttribute(Term term) { return name_M_Hx_xAttribute; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttribute = {&sort_M_HxAttribute, Data_M_Hx_xAttribute, 3, sizeof(STRUCT_Con_M_Hx_xAttribute), conBindOffs_M_Hx_xAttribute, &nameFun_M_Hx_xAttribute, &dataStep};
ConstructionDescriptor sortCon_M_HxAttribute[] = {NULL, NULL, &descriptor_M_Hx_xCatchAllAttributes, &descriptor_M_Hx_xAttribute,  NULL};
char *sortNam_M_HxAttribute[] = {NULL, NULL,  "Hx_CatchAllAttributes" ,  "Hx_Attribute" ,  NULL};
char *sortInt_M_HxAttribute[] = {NULL, NULL, "_M_Hx_xCatchAllAttributes", "_M_Hx_xAttribute",  NULL};
struct _SortDescriptor sort_M_HxAttribute = { "HxAttribute" , sortCon_M_HxAttribute, sortNam_M_HxAttribute, sortInt_M_HxAttribute, NULL};

/* SORT HxAttributeForm CONSTANTS. */
int conBindOffs_M_Hx_xAttributeFormSet[] = {0 , 0};
char *name_M_Hx_xAttributeFormSet =  "Hx_AttributeFormSet" ;
char *nameFun_M_Hx_xAttributeFormSet(Term term) { return name_M_Hx_xAttributeFormSet; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttributeFormSet = {&sort_M_HxAttributeForm, Data_M_Hx_xAttributeFormSet, 1, sizeof(STRUCT_Con_M_Hx_xAttributeFormSet), conBindOffs_M_Hx_xAttributeFormSet, &nameFun_M_Hx_xAttributeFormSet, &dataStep};
char *name_M_Hx_xNoAttributeForm =  "Hx_NoAttributeForm" ;
char *nameFun_M_Hx_xNoAttributeForm(Term term) { return name_M_Hx_xNoAttributeForm; }
struct _ConstructionDescriptor descriptor_M_Hx_xNoAttributeForm = {&sort_M_HxAttributeForm, Data_M_Hx_xNoAttributeForm, 0, sizeof(STRUCT_Con_M_Hx_xNoAttributeForm), noBinderOffsets, &nameFun_M_Hx_xNoAttributeForm, &dataStep};
int conBindOffs_M_Hx_xAttributeFormSimple[] = {0 , 0};
char *name_M_Hx_xAttributeFormSimple =  "Hx_AttributeFormSimple" ;
char *nameFun_M_Hx_xAttributeFormSimple(Term term) { return name_M_Hx_xAttributeFormSimple; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttributeFormSimple = {&sort_M_HxAttributeForm, Data_M_Hx_xAttributeFormSimple, 1, sizeof(STRUCT_Con_M_Hx_xAttributeFormSimple), conBindOffs_M_Hx_xAttributeFormSimple, &nameFun_M_Hx_xAttributeFormSimple, &dataStep};
int conBindOffs_M_Hx_xAttributeFormMap[] = {0 , 0 , 0};
char *name_M_Hx_xAttributeFormMap =  "Hx_AttributeFormMap" ;
char *nameFun_M_Hx_xAttributeFormMap(Term term) { return name_M_Hx_xAttributeFormMap; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttributeFormMap = {&sort_M_HxAttributeForm, Data_M_Hx_xAttributeFormMap, 2, sizeof(STRUCT_Con_M_Hx_xAttributeFormMap), conBindOffs_M_Hx_xAttributeFormMap, &nameFun_M_Hx_xAttributeFormMap, &dataStep};
ConstructionDescriptor sortCon_M_HxAttributeForm[] = {NULL, NULL, &descriptor_M_Hx_xAttributeFormSet, &descriptor_M_Hx_xNoAttributeForm, &descriptor_M_Hx_xAttributeFormSimple, &descriptor_M_Hx_xAttributeFormMap,  NULL};
char *sortNam_M_HxAttributeForm[] = {NULL, NULL,  "Hx_AttributeFormSet" ,  "Hx_NoAttributeForm" ,  "Hx_AttributeFormSimple" ,  "Hx_AttributeFormMap" ,  NULL};
char *sortInt_M_HxAttributeForm[] = {NULL, NULL, "_M_Hx_xAttributeFormSet", "_M_Hx_xNoAttributeForm", "_M_Hx_xAttributeFormSimple", "_M_Hx_xAttributeFormMap",  NULL};
struct _SortDescriptor sort_M_HxAttributeForm = { "HxAttributeForm" , sortCon_M_HxAttributeForm, sortNam_M_HxAttributeForm, sortInt_M_HxAttributeForm, NULL};

/* SORT HxAttributeKind CONSTANTS. */
char *name_M_Hx_xAttributeKindUp =  "Hx_AttributeKindUp" ;
char *nameFun_M_Hx_xAttributeKindUp(Term term) { return name_M_Hx_xAttributeKindUp; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttributeKindUp = {&sort_M_HxAttributeKind, Data_M_Hx_xAttributeKindUp, 0, sizeof(STRUCT_Con_M_Hx_xAttributeKindUp), noBinderOffsets, &nameFun_M_Hx_xAttributeKindUp, &dataStep};
char *name_M_Hx_xAttributeKindDown =  "Hx_AttributeKindDown" ;
char *nameFun_M_Hx_xAttributeKindDown(Term term) { return name_M_Hx_xAttributeKindDown; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttributeKindDown = {&sort_M_HxAttributeKind, Data_M_Hx_xAttributeKindDown, 0, sizeof(STRUCT_Con_M_Hx_xAttributeKindDown), noBinderOffsets, &nameFun_M_Hx_xAttributeKindDown, &dataStep};
ConstructionDescriptor sortCon_M_HxAttributeKind[] = {NULL, NULL, &descriptor_M_Hx_xAttributeKindUp, &descriptor_M_Hx_xAttributeKindDown,  NULL};
char *sortNam_M_HxAttributeKind[] = {NULL, NULL,  "Hx_AttributeKindUp" ,  "Hx_AttributeKindDown" ,  NULL};
char *sortInt_M_HxAttributeKind[] = {NULL, NULL, "_M_Hx_xAttributeKindUp", "_M_Hx_xAttributeKindDown",  NULL};
struct _SortDescriptor sort_M_HxAttributeKind = { "HxAttributeKind" , sortCon_M_HxAttributeKind, sortNam_M_HxAttributeKind, sortInt_M_HxAttributeKind, NULL};

/* SORT HxAttributeValue CONSTANTS. */
int conBindOffs_M_Hx_xAttributeCatchAll[] = {0 , 0};
char *name_M_Hx_xAttributeCatchAll =  "Hx_AttributeCatchAll" ;
char *nameFun_M_Hx_xAttributeCatchAll(Term term) { return name_M_Hx_xAttributeCatchAll; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttributeCatchAll = {&sort_M_HxAttributeValue, Data_M_Hx_xAttributeCatchAll, 1, sizeof(STRUCT_Con_M_Hx_xAttributeCatchAll), conBindOffs_M_Hx_xAttributeCatchAll, &nameFun_M_Hx_xAttributeCatchAll, &dataStep};
int conBindOffs_M_Hx_xAttributeKey[] = {0 , 0};
char *name_M_Hx_xAttributeKey =  "Hx_AttributeKey" ;
char *nameFun_M_Hx_xAttributeKey(Term term) { return name_M_Hx_xAttributeKey; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttributeKey = {&sort_M_HxAttributeValue, Data_M_Hx_xAttributeKey, 1, sizeof(STRUCT_Con_M_Hx_xAttributeKey), conBindOffs_M_Hx_xAttributeKey, &nameFun_M_Hx_xAttributeKey, &dataStep};
int conBindOffs_M_Hx_xAttributeNotKey[] = {0 , 0};
char *name_M_Hx_xAttributeNotKey =  "Hx_AttributeNotKey" ;
char *nameFun_M_Hx_xAttributeNotKey(Term term) { return name_M_Hx_xAttributeNotKey; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttributeNotKey = {&sort_M_HxAttributeValue, Data_M_Hx_xAttributeNotKey, 1, sizeof(STRUCT_Con_M_Hx_xAttributeNotKey), conBindOffs_M_Hx_xAttributeNotKey, &nameFun_M_Hx_xAttributeNotKey, &dataStep};
int conBindOffs_M_Hx_xAttributeValue[] = {0 , 0};
char *name_M_Hx_xAttributeValue =  "Hx_AttributeValue" ;
char *nameFun_M_Hx_xAttributeValue(Term term) { return name_M_Hx_xAttributeValue; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttributeValue = {&sort_M_HxAttributeValue, Data_M_Hx_xAttributeValue, 1, sizeof(STRUCT_Con_M_Hx_xAttributeValue), conBindOffs_M_Hx_xAttributeValue, &nameFun_M_Hx_xAttributeValue, &dataStep};
int conBindOffs_M_Hx_xAttributeKeyValue[] = {0 , 0 , 0};
char *name_M_Hx_xAttributeKeyValue =  "Hx_AttributeKeyValue" ;
char *nameFun_M_Hx_xAttributeKeyValue(Term term) { return name_M_Hx_xAttributeKeyValue; }
struct _ConstructionDescriptor descriptor_M_Hx_xAttributeKeyValue = {&sort_M_HxAttributeValue, Data_M_Hx_xAttributeKeyValue, 2, sizeof(STRUCT_Con_M_Hx_xAttributeKeyValue), conBindOffs_M_Hx_xAttributeKeyValue, &nameFun_M_Hx_xAttributeKeyValue, &dataStep};
ConstructionDescriptor sortCon_M_HxAttributeValue[] = {NULL, NULL, &descriptor_M_Hx_xAttributeCatchAll, &descriptor_M_Hx_xAttributeKey, &descriptor_M_Hx_xAttributeNotKey, &descriptor_M_Hx_xAttributeValue, &descriptor_M_Hx_xAttributeKeyValue,  NULL};
char *sortNam_M_HxAttributeValue[] = {NULL, NULL,  "Hx_AttributeCatchAll" ,  "Hx_AttributeKey" ,  "Hx_AttributeNotKey" ,  "Hx_AttributeValue" ,  "Hx_AttributeKeyValue" ,  NULL};
char *sortInt_M_HxAttributeValue[] = {NULL, NULL, "_M_Hx_xAttributeCatchAll", "_M_Hx_xAttributeKey", "_M_Hx_xAttributeNotKey", "_M_Hx_xAttributeValue", "_M_Hx_xAttributeKeyValue",  NULL};
struct _SortDescriptor sort_M_HxAttributeValue = { "HxAttributeValue" , sortCon_M_HxAttributeValue, sortNam_M_HxAttributeValue, sortInt_M_HxAttributeValue, NULL};

/* SORT HxDeclaration CONSTANTS. */
int conBindOffs_M_Hx_xsort[] = {0 , 0 , 0 , 0 , 0};
char *name_M_Hx_xsort =  "Hx_sort" ;
char *nameFun_M_Hx_xsort(Term term) { return name_M_Hx_xsort; }
struct _ConstructionDescriptor descriptor_M_Hx_xsort = {&sort_M_HxDeclaration, Data_M_Hx_xsort, 4, sizeof(STRUCT_Con_M_Hx_xsort), conBindOffs_M_Hx_xsort, &nameFun_M_Hx_xsort, &dataStep};
int conBindOffs_M_Hx_xrule[] = {0 , 0};
char *name_M_Hx_xrule =  "Hx_rule" ;
char *nameFun_M_Hx_xrule(Term term) { return name_M_Hx_xrule; }
struct _ConstructionDescriptor descriptor_M_Hx_xrule = {&sort_M_HxDeclaration, Data_M_Hx_xrule, 1, sizeof(STRUCT_Con_M_Hx_xrule), conBindOffs_M_Hx_xrule, &nameFun_M_Hx_xrule, &dataStep};
int conBindOffs_M_Hx_xspace[] = {0 , 0};
char *name_M_Hx_xspace =  "Hx_space" ;
char *nameFun_M_Hx_xspace(Term term) { return name_M_Hx_xspace; }
struct _ConstructionDescriptor descriptor_M_Hx_xspace = {&sort_M_HxDeclaration, Data_M_Hx_xspace, 1, sizeof(STRUCT_Con_M_Hx_xspace), conBindOffs_M_Hx_xspace, &nameFun_M_Hx_xspace, &dataStep};
int conBindOffs_M_Hx_xembedded__module[] = {0 , 0};
char *name_M_Hx_xembedded__module =  "Hx_embedded-module" ;
char *nameFun_M_Hx_xembedded__module(Term term) { return name_M_Hx_xembedded__module; }
struct _ConstructionDescriptor descriptor_M_Hx_xembedded__module = {&sort_M_HxDeclaration, Data_M_Hx_xembedded__module, 1, sizeof(STRUCT_Con_M_Hx_xembedded__module), conBindOffs_M_Hx_xembedded__module, &nameFun_M_Hx_xembedded__module, &dataStep};
int conBindOffs_M_Hx_xanonymous[] = {0 , 0};
char *name_M_Hx_xanonymous =  "Hx_anonymous" ;
char *nameFun_M_Hx_xanonymous(Term term) { return name_M_Hx_xanonymous; }
struct _ConstructionDescriptor descriptor_M_Hx_xanonymous = {&sort_M_HxDeclaration, Data_M_Hx_xanonymous, 1, sizeof(STRUCT_Con_M_Hx_xanonymous), conBindOffs_M_Hx_xanonymous, &nameFun_M_Hx_xanonymous, &dataStep};
int conBindOffs_M_Hx_xtoken[] = {0 , 0 , 0};
char *name_M_Hx_xtoken =  "Hx_token" ;
char *nameFun_M_Hx_xtoken(Term term) { return name_M_Hx_xtoken; }
struct _ConstructionDescriptor descriptor_M_Hx_xtoken = {&sort_M_HxDeclaration, Data_M_Hx_xtoken, 2, sizeof(STRUCT_Con_M_Hx_xtoken), conBindOffs_M_Hx_xtoken, &nameFun_M_Hx_xtoken, &dataStep};
int conBindOffs_M_Hx_xfragment[] = {0 , 0 , 0};
char *name_M_Hx_xfragment =  "Hx_fragment" ;
char *nameFun_M_Hx_xfragment(Term term) { return name_M_Hx_xfragment; }
struct _ConstructionDescriptor descriptor_M_Hx_xfragment = {&sort_M_HxDeclaration, Data_M_Hx_xfragment, 2, sizeof(STRUCT_Con_M_Hx_xfragment), conBindOffs_M_Hx_xfragment, &nameFun_M_Hx_xfragment, &dataStep};
int conBindOffs_M_Hx_xnestedDeclarations[] = {0 , 0};
char *name_M_Hx_xnestedDeclarations =  "Hx_nestedDeclarations" ;
char *nameFun_M_Hx_xnestedDeclarations(Term term) { return name_M_Hx_xnestedDeclarations; }
struct _ConstructionDescriptor descriptor_M_Hx_xnestedDeclarations = {&sort_M_HxDeclaration, Data_M_Hx_xnestedDeclarations, 1, sizeof(STRUCT_Con_M_Hx_xnestedDeclarations), conBindOffs_M_Hx_xnestedDeclarations, &nameFun_M_Hx_xnestedDeclarations, &dataStep};
int conBindOffs_M_Hx_ximport[] = {0 , 0};
char *name_M_Hx_ximport =  "Hx_import" ;
char *nameFun_M_Hx_ximport(Term term) { return name_M_Hx_ximport; }
struct _ConstructionDescriptor descriptor_M_Hx_ximport = {&sort_M_HxDeclaration, Data_M_Hx_ximport, 1, sizeof(STRUCT_Con_M_Hx_ximport), conBindOffs_M_Hx_ximport, &nameFun_M_Hx_ximport, &dataStep};
int conBindOffs_M_Hx_xattribute[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xattribute =  "Hx_attribute" ;
char *nameFun_M_Hx_xattribute(Term term) { return name_M_Hx_xattribute; }
struct _ConstructionDescriptor descriptor_M_Hx_xattribute = {&sort_M_HxDeclaration, Data_M_Hx_xattribute, 3, sizeof(STRUCT_Con_M_Hx_xattribute), conBindOffs_M_Hx_xattribute, &nameFun_M_Hx_xattribute, &dataStep};
ConstructionDescriptor sortCon_M_HxDeclaration[] = {NULL, NULL, &descriptor_M_Hx_xsort, &descriptor_M_Hx_xrule, &descriptor_M_Hx_xspace, &descriptor_M_Hx_xembedded__module, &descriptor_M_Hx_xanonymous, &descriptor_M_Hx_xtoken, &descriptor_M_Hx_xfragment, &descriptor_M_Hx_xnestedDeclarations, &descriptor_M_Hx_ximport, &descriptor_M_Hx_xattribute,  NULL};
char *sortNam_M_HxDeclaration[] = {NULL, NULL,  "Hx_sort" ,  "Hx_rule" ,  "Hx_space" ,  "Hx_embedded-module" ,  "Hx_anonymous" ,  "Hx_token" ,  "Hx_fragment" ,  "Hx_nestedDeclarations" ,  "Hx_import" ,  "Hx_attribute" ,  NULL};
char *sortInt_M_HxDeclaration[] = {NULL, NULL, "_M_Hx_xsort", "_M_Hx_xrule", "_M_Hx_xspace", "_M_Hx_xembedded__module", "_M_Hx_xanonymous", "_M_Hx_xtoken", "_M_Hx_xfragment", "_M_Hx_xnestedDeclarations", "_M_Hx_ximport", "_M_Hx_xattribute",  NULL};
struct _SortDescriptor sort_M_HxDeclaration = { "HxDeclaration" , sortCon_M_HxDeclaration, sortNam_M_HxDeclaration, sortInt_M_HxDeclaration, NULL};

/* SORT HxEmbeddedModule CONSTANTS. */
int conBindOffs_M_Hx_xmodule[] = {0 , 0 , 0};
char *name_M_Hx_xmodule =  "Hx_module" ;
char *nameFun_M_Hx_xmodule(Term term) { return name_M_Hx_xmodule; }
struct _ConstructionDescriptor descriptor_M_Hx_xmodule = {&sort_M_HxEmbeddedModule, Data_M_Hx_xmodule, 2, sizeof(STRUCT_Con_M_Hx_xmodule), conBindOffs_M_Hx_xmodule, &nameFun_M_Hx_xmodule, &dataStep};
ConstructionDescriptor sortCon_M_HxEmbeddedModule[] = {NULL, NULL, &descriptor_M_Hx_xmodule,  NULL};
char *sortNam_M_HxEmbeddedModule[] = {NULL, NULL,  "Hx_module" ,  NULL};
char *sortInt_M_HxEmbeddedModule[] = {NULL, NULL, "_M_Hx_xmodule",  NULL};
struct _SortDescriptor sort_M_HxEmbeddedModule = { "HxEmbeddedModule" , sortCon_M_HxEmbeddedModule, sortNam_M_HxEmbeddedModule, sortInt_M_HxEmbeddedModule, NULL};

/* SORT HxForm CONSTANTS. */
int conBindOffs_M_Hx_xFormParsed[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xFormParsed =  "Hx_FormParsed" ;
char *nameFun_M_Hx_xFormParsed(Term term) { return name_M_Hx_xFormParsed; }
struct _ConstructionDescriptor descriptor_M_Hx_xFormParsed = {&sort_M_HxForm, Data_M_Hx_xFormParsed, 3, sizeof(STRUCT_Con_M_Hx_xFormParsed), conBindOffs_M_Hx_xFormParsed, &nameFun_M_Hx_xFormParsed, &dataStep};
int conBindOffs_M_Hx_xFormConstruction[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xFormConstruction =  "Hx_FormConstruction" ;
char *nameFun_M_Hx_xFormConstruction(Term term) { return name_M_Hx_xFormConstruction; }
struct _ConstructionDescriptor descriptor_M_Hx_xFormConstruction = {&sort_M_HxForm, Data_M_Hx_xFormConstruction, 3, sizeof(STRUCT_Con_M_Hx_xFormConstruction), conBindOffs_M_Hx_xFormConstruction, &nameFun_M_Hx_xFormConstruction, &dataStep};
ConstructionDescriptor sortCon_M_HxForm[] = {NULL, NULL, &descriptor_M_Hx_xFormParsed, &descriptor_M_Hx_xFormConstruction,  NULL};
char *sortNam_M_HxForm[] = {NULL, NULL,  "Hx_FormParsed" ,  "Hx_FormConstruction" ,  NULL};
char *sortInt_M_HxForm[] = {NULL, NULL, "_M_Hx_xFormParsed", "_M_Hx_xFormConstruction",  NULL};
struct _SortDescriptor sort_M_HxForm = { "HxForm" , sortCon_M_HxForm, sortNam_M_HxForm, sortInt_M_HxForm, NULL};

/* SORT HxMainKind CONSTANTS. */
char *name_M_Hx_xmain =  "Hx_main" ;
char *nameFun_M_Hx_xmain(Term term) { return name_M_Hx_xmain; }
struct _ConstructionDescriptor descriptor_M_Hx_xmain = {&sort_M_HxMainKind, Data_M_Hx_xmain, 0, sizeof(STRUCT_Con_M_Hx_xmain), noBinderOffsets, &nameFun_M_Hx_xmain, &dataStep};
char *name_M_Hx_xno__main =  "Hx_no-main" ;
char *nameFun_M_Hx_xno__main(Term term) { return name_M_Hx_xno__main; }
struct _ConstructionDescriptor descriptor_M_Hx_xno__main = {&sort_M_HxMainKind, Data_M_Hx_xno__main, 0, sizeof(STRUCT_Con_M_Hx_xno__main), noBinderOffsets, &nameFun_M_Hx_xno__main, &dataStep};
ConstructionDescriptor sortCon_M_HxMainKind[] = {NULL, NULL, &descriptor_M_Hx_xmain, &descriptor_M_Hx_xno__main,  NULL};
char *sortNam_M_HxMainKind[] = {NULL, NULL,  "Hx_main" ,  "Hx_no-main" ,  NULL};
char *sortInt_M_HxMainKind[] = {NULL, NULL, "_M_Hx_xmain", "_M_Hx_xno__main",  NULL};
struct _SortDescriptor sort_M_HxMainKind = { "HxMainKind" , sortCon_M_HxMainKind, sortNam_M_HxMainKind, sortInt_M_HxMainKind, NULL};

/* SORT HxModule CONSTANTS. */
int conBindOffs_M_Hx_xtop__module[] = {0 , 0};
char *name_M_Hx_xtop__module =  "Hx_top-module" ;
char *nameFun_M_Hx_xtop__module(Term term) { return name_M_Hx_xtop__module; }
struct _ConstructionDescriptor descriptor_M_Hx_xtop__module = {&sort_M_HxModule, Data_M_Hx_xtop__module, 1, sizeof(STRUCT_Con_M_Hx_xtop__module), conBindOffs_M_Hx_xtop__module, &nameFun_M_Hx_xtop__module, &dataStep};
ConstructionDescriptor sortCon_M_HxModule[] = {NULL, NULL, &descriptor_M_Hx_xtop__module,  NULL};
char *sortNam_M_HxModule[] = {NULL, NULL,  "Hx_top-module" ,  NULL};
char *sortInt_M_HxModule[] = {NULL, NULL, "_M_Hx_xtop__module",  NULL};
struct _SortDescriptor sort_M_HxModule = { "HxModule" , sortCon_M_HxModule, sortNam_M_HxModule, sortInt_M_HxModule, NULL};

/* SORT HxParsedForm CONSTANTS. */
int conBindOffs_M_Hx_xParsedFormTerm[] = {0 , 0 , 0};
char *name_M_Hx_xParsedFormTerm =  "Hx_ParsedFormTerm" ;
char *nameFun_M_Hx_xParsedFormTerm(Term term) { return name_M_Hx_xParsedFormTerm; }
struct _ConstructionDescriptor descriptor_M_Hx_xParsedFormTerm = {&sort_M_HxParsedForm, Data_M_Hx_xParsedFormTerm, 2, sizeof(STRUCT_Con_M_Hx_xParsedFormTerm), conBindOffs_M_Hx_xParsedFormTerm, &nameFun_M_Hx_xParsedFormTerm, &dataStep};
int conBindOffs_M_Hx_xParsedFormWord[] = {0 , 0 , 0};
char *name_M_Hx_xParsedFormWord =  "Hx_ParsedFormWord" ;
char *nameFun_M_Hx_xParsedFormWord(Term term) { return name_M_Hx_xParsedFormWord; }
struct _ConstructionDescriptor descriptor_M_Hx_xParsedFormWord = {&sort_M_HxParsedForm, Data_M_Hx_xParsedFormWord, 2, sizeof(STRUCT_Con_M_Hx_xParsedFormWord), conBindOffs_M_Hx_xParsedFormWord, &nameFun_M_Hx_xParsedFormWord, &dataStep};
char *name_M_Hx_xParsedFormDone =  "Hx_ParsedFormDone" ;
char *nameFun_M_Hx_xParsedFormDone(Term term) { return name_M_Hx_xParsedFormDone; }
struct _ConstructionDescriptor descriptor_M_Hx_xParsedFormDone = {&sort_M_HxParsedForm, Data_M_Hx_xParsedFormDone, 0, sizeof(STRUCT_Con_M_Hx_xParsedFormDone), noBinderOffsets, &nameFun_M_Hx_xParsedFormDone, &dataStep};
int conBindOffs_M_Hx_xParsedFormSpace[] = {0 , 0 , 0};
char *name_M_Hx_xParsedFormSpace =  "Hx_ParsedFormSpace" ;
char *nameFun_M_Hx_xParsedFormSpace(Term term) { return name_M_Hx_xParsedFormSpace; }
struct _ConstructionDescriptor descriptor_M_Hx_xParsedFormSpace = {&sort_M_HxParsedForm, Data_M_Hx_xParsedFormSpace, 2, sizeof(STRUCT_Con_M_Hx_xParsedFormSpace), conBindOffs_M_Hx_xParsedFormSpace, &nameFun_M_Hx_xParsedFormSpace, &dataStep};
ConstructionDescriptor sortCon_M_HxParsedForm[] = {NULL, NULL, &descriptor_M_Hx_xParsedFormTerm, &descriptor_M_Hx_xParsedFormWord, &descriptor_M_Hx_xParsedFormDone, &descriptor_M_Hx_xParsedFormSpace,  NULL};
char *sortNam_M_HxParsedForm[] = {NULL, NULL,  "Hx_ParsedFormTerm" ,  "Hx_ParsedFormWord" ,  "Hx_ParsedFormDone" ,  "Hx_ParsedFormSpace" ,  NULL};
char *sortInt_M_HxParsedForm[] = {NULL, NULL, "_M_Hx_xParsedFormTerm", "_M_Hx_xParsedFormWord", "_M_Hx_xParsedFormDone", "_M_Hx_xParsedFormSpace",  NULL};
struct _SortDescriptor sort_M_HxParsedForm = { "HxParsedForm" , sortCon_M_HxParsedForm, sortNam_M_HxParsedForm, sortInt_M_HxParsedForm, NULL};

/* SORT HxRegExpChoice CONSTANTS. */
int conBindOffs_M_Hx_xnested[] = {0 , 0 , 0};
char *name_M_Hx_xnested =  "Hx_nested" ;
char *nameFun_M_Hx_xnested(Term term) { return name_M_Hx_xnested; }
struct _ConstructionDescriptor descriptor_M_Hx_xnested = {&sort_M_HxRegExpChoice, Data_M_Hx_xnested, 2, sizeof(STRUCT_Con_M_Hx_xnested), conBindOffs_M_Hx_xnested, &nameFun_M_Hx_xnested, &dataStep};
int conBindOffs_M_Hx_xRegExpConcat[] = {0 , 0};
char *name_M_Hx_xRegExpConcat =  "Hx_RegExpConcat" ;
char *nameFun_M_Hx_xRegExpConcat(Term term) { return name_M_Hx_xRegExpConcat; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpConcat = {&sort_M_HxRegExpChoice, Data_M_Hx_xRegExpConcat, 1, sizeof(STRUCT_Con_M_Hx_xRegExpConcat), conBindOffs_M_Hx_xRegExpConcat, &nameFun_M_Hx_xRegExpConcat, &dataStep};
ConstructionDescriptor sortCon_M_HxRegExpChoice[] = {NULL, NULL, &descriptor_M_Hx_xnested, &descriptor_M_Hx_xRegExpConcat,  NULL};
char *sortNam_M_HxRegExpChoice[] = {NULL, NULL,  "Hx_nested" ,  "Hx_RegExpConcat" ,  NULL};
char *sortInt_M_HxRegExpChoice[] = {NULL, NULL, "_M_Hx_xnested", "_M_Hx_xRegExpConcat",  NULL};
struct _SortDescriptor sort_M_HxRegExpChoice = { "HxRegExpChoice" , sortCon_M_HxRegExpChoice, sortNam_M_HxRegExpChoice, sortInt_M_HxRegExpChoice, NULL};

/* SORT HxRegExpClass CONSTANTS. */
int conBindOffs_M_Hx_xRegExpClassChar[] = {0 , 0 , 0};
char *name_M_Hx_xRegExpClassChar =  "Hx_RegExpClassChar" ;
char *nameFun_M_Hx_xRegExpClassChar(Term term) { return name_M_Hx_xRegExpClassChar; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpClassChar = {&sort_M_HxRegExpClass, Data_M_Hx_xRegExpClassChar, 2, sizeof(STRUCT_Con_M_Hx_xRegExpClassChar), conBindOffs_M_Hx_xRegExpClassChar, &nameFun_M_Hx_xRegExpClassChar, &dataStep};
char *name_M_Hx_xRegExpClassDone =  "Hx_RegExpClassDone" ;
char *nameFun_M_Hx_xRegExpClassDone(Term term) { return name_M_Hx_xRegExpClassDone; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpClassDone = {&sort_M_HxRegExpClass, Data_M_Hx_xRegExpClassDone, 0, sizeof(STRUCT_Con_M_Hx_xRegExpClassDone), noBinderOffsets, &nameFun_M_Hx_xRegExpClassDone, &dataStep};
int conBindOffs_M_Hx_xRegExpClassNot[] = {0 , 0};
char *name_M_Hx_xRegExpClassNot =  "Hx_RegExpClassNot" ;
char *nameFun_M_Hx_xRegExpClassNot(Term term) { return name_M_Hx_xRegExpClassNot; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpClassNot = {&sort_M_HxRegExpClass, Data_M_Hx_xRegExpClassNot, 1, sizeof(STRUCT_Con_M_Hx_xRegExpClassNot), conBindOffs_M_Hx_xRegExpClassNot, &nameFun_M_Hx_xRegExpClassNot, &dataStep};
int conBindOffs_M_Hx_xRegExpClassRange[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xRegExpClassRange =  "Hx_RegExpClassRange" ;
char *nameFun_M_Hx_xRegExpClassRange(Term term) { return name_M_Hx_xRegExpClassRange; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpClassRange = {&sort_M_HxRegExpClass, Data_M_Hx_xRegExpClassRange, 3, sizeof(STRUCT_Con_M_Hx_xRegExpClassRange), conBindOffs_M_Hx_xRegExpClassRange, &nameFun_M_Hx_xRegExpClassRange, &dataStep};
ConstructionDescriptor sortCon_M_HxRegExpClass[] = {NULL, NULL, &descriptor_M_Hx_xRegExpClassChar, &descriptor_M_Hx_xRegExpClassDone, &descriptor_M_Hx_xRegExpClassNot, &descriptor_M_Hx_xRegExpClassRange,  NULL};
char *sortNam_M_HxRegExpClass[] = {NULL, NULL,  "Hx_RegExpClassChar" ,  "Hx_RegExpClassDone" ,  "Hx_RegExpClassNot" ,  "Hx_RegExpClassRange" ,  NULL};
char *sortInt_M_HxRegExpClass[] = {NULL, NULL, "_M_Hx_xRegExpClassChar", "_M_Hx_xRegExpClassDone", "_M_Hx_xRegExpClassNot", "_M_Hx_xRegExpClassRange",  NULL};
struct _SortDescriptor sort_M_HxRegExpClass = { "HxRegExpClass" , sortCon_M_HxRegExpClass, sortNam_M_HxRegExpClass, sortInt_M_HxRegExpClass, NULL};

/* SORT HxRegExpSimple CONSTANTS. */
int conBindOffs_M_Hx_xRegExpClass[] = {0 , 0};
char *name_M_Hx_xRegExpClass =  "Hx_RegExpClass" ;
char *nameFun_M_Hx_xRegExpClass(Term term) { return name_M_Hx_xRegExpClass; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpClass = {&sort_M_HxRegExpSimple, Data_M_Hx_xRegExpClass, 1, sizeof(STRUCT_Con_M_Hx_xRegExpClass), conBindOffs_M_Hx_xRegExpClass, &nameFun_M_Hx_xRegExpClass, &dataStep};
int conBindOffs_M_Hx_xRegExpWord[] = {0 , 0};
char *name_M_Hx_xRegExpWord =  "Hx_RegExpWord" ;
char *nameFun_M_Hx_xRegExpWord(Term term) { return name_M_Hx_xRegExpWord; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpWord = {&sort_M_HxRegExpSimple, Data_M_Hx_xRegExpWord, 1, sizeof(STRUCT_Con_M_Hx_xRegExpWord), conBindOffs_M_Hx_xRegExpWord, &nameFun_M_Hx_xRegExpWord, &dataStep};
int conBindOffs_M_Hx_xRegExpRef[] = {0 , 0};
char *name_M_Hx_xRegExpRef =  "Hx_RegExpRef" ;
char *nameFun_M_Hx_xRegExpRef(Term term) { return name_M_Hx_xRegExpRef; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpRef = {&sort_M_HxRegExpSimple, Data_M_Hx_xRegExpRef, 1, sizeof(STRUCT_Con_M_Hx_xRegExpRef), conBindOffs_M_Hx_xRegExpRef, &nameFun_M_Hx_xRegExpRef, &dataStep};
int conBindOffs_M_Hx_xRegExpString[] = {0 , 0};
char *name_M_Hx_xRegExpString =  "Hx_RegExpString" ;
char *nameFun_M_Hx_xRegExpString(Term term) { return name_M_Hx_xRegExpString; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpString = {&sort_M_HxRegExpSimple, Data_M_Hx_xRegExpString, 1, sizeof(STRUCT_Con_M_Hx_xRegExpString), conBindOffs_M_Hx_xRegExpString, &nameFun_M_Hx_xRegExpString, &dataStep};
char *name_M_Hx_xRegExpAny =  "Hx_RegExpAny" ;
char *nameFun_M_Hx_xRegExpAny(Term term) { return name_M_Hx_xRegExpAny; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpAny = {&sort_M_HxRegExpSimple, Data_M_Hx_xRegExpAny, 0, sizeof(STRUCT_Con_M_Hx_xRegExpAny), noBinderOffsets, &nameFun_M_Hx_xRegExpAny, &dataStep};
int conBindOffs_M_Hx_xRegExpNest[] = {0 , 0};
char *name_M_Hx_xRegExpNest =  "Hx_RegExpNest" ;
char *nameFun_M_Hx_xRegExpNest(Term term) { return name_M_Hx_xRegExpNest; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpNest = {&sort_M_HxRegExpSimple, Data_M_Hx_xRegExpNest, 1, sizeof(STRUCT_Con_M_Hx_xRegExpNest), conBindOffs_M_Hx_xRegExpNest, &nameFun_M_Hx_xRegExpNest, &dataStep};
ConstructionDescriptor sortCon_M_HxRegExpSimple[] = {NULL, NULL, &descriptor_M_Hx_xRegExpClass, &descriptor_M_Hx_xRegExpWord, &descriptor_M_Hx_xRegExpRef, &descriptor_M_Hx_xRegExpString, &descriptor_M_Hx_xRegExpAny, &descriptor_M_Hx_xRegExpNest,  NULL};
char *sortNam_M_HxRegExpSimple[] = {NULL, NULL,  "Hx_RegExpClass" ,  "Hx_RegExpWord" ,  "Hx_RegExpRef" ,  "Hx_RegExpString" ,  "Hx_RegExpAny" ,  "Hx_RegExpNest" ,  NULL};
char *sortInt_M_HxRegExpSimple[] = {NULL, NULL, "_M_Hx_xRegExpClass", "_M_Hx_xRegExpWord", "_M_Hx_xRegExpRef", "_M_Hx_xRegExpString", "_M_Hx_xRegExpAny", "_M_Hx_xRegExpNest",  NULL};
struct _SortDescriptor sort_M_HxRegExpSimple = { "HxRegExpSimple" , sortCon_M_HxRegExpSimple, sortNam_M_HxRegExpSimple, sortInt_M_HxRegExpSimple, NULL};

/* SORT HxRegExpUnit CONSTANTS. */
int conBindOffs_M_Hx_xRegExpUnit[] = {0 , 0 , 0};
char *name_M_Hx_xRegExpUnit =  "Hx_RegExpUnit" ;
char *nameFun_M_Hx_xRegExpUnit(Term term) { return name_M_Hx_xRegExpUnit; }
struct _ConstructionDescriptor descriptor_M_Hx_xRegExpUnit = {&sort_M_HxRegExpUnit, Data_M_Hx_xRegExpUnit, 2, sizeof(STRUCT_Con_M_Hx_xRegExpUnit), conBindOffs_M_Hx_xRegExpUnit, &nameFun_M_Hx_xRegExpUnit, &dataStep};
ConstructionDescriptor sortCon_M_HxRegExpUnit[] = {NULL, NULL, &descriptor_M_Hx_xRegExpUnit,  NULL};
char *sortNam_M_HxRegExpUnit[] = {NULL, NULL,  "Hx_RegExpUnit" ,  NULL};
char *sortInt_M_HxRegExpUnit[] = {NULL, NULL, "_M_Hx_xRegExpUnit",  NULL};
struct _SortDescriptor sort_M_HxRegExpUnit = { "HxRegExpUnit" , sortCon_M_HxRegExpUnit, sortNam_M_HxRegExpUnit, sortInt_M_HxRegExpUnit, NULL};

/* SORT HxRepeat CONSTANTS. */
char *name_M_Hx_xRepeatMaybeSome =  "Hx_RepeatMaybeSome" ;
char *nameFun_M_Hx_xRepeatMaybeSome(Term term) { return name_M_Hx_xRepeatMaybeSome; }
struct _ConstructionDescriptor descriptor_M_Hx_xRepeatMaybeSome = {&sort_M_HxRepeat, Data_M_Hx_xRepeatMaybeSome, 0, sizeof(STRUCT_Con_M_Hx_xRepeatMaybeSome), noBinderOffsets, &nameFun_M_Hx_xRepeatMaybeSome, &dataStep};
char *name_M_Hx_xRepeatMaybe =  "Hx_RepeatMaybe" ;
char *nameFun_M_Hx_xRepeatMaybe(Term term) { return name_M_Hx_xRepeatMaybe; }
struct _ConstructionDescriptor descriptor_M_Hx_xRepeatMaybe = {&sort_M_HxRepeat, Data_M_Hx_xRepeatMaybe, 0, sizeof(STRUCT_Con_M_Hx_xRepeatMaybe), noBinderOffsets, &nameFun_M_Hx_xRepeatMaybe, &dataStep};
char *name_M_Hx_xRepeatSingle =  "Hx_RepeatSingle" ;
char *nameFun_M_Hx_xRepeatSingle(Term term) { return name_M_Hx_xRepeatSingle; }
struct _ConstructionDescriptor descriptor_M_Hx_xRepeatSingle = {&sort_M_HxRepeat, Data_M_Hx_xRepeatSingle, 0, sizeof(STRUCT_Con_M_Hx_xRepeatSingle), noBinderOffsets, &nameFun_M_Hx_xRepeatSingle, &dataStep};
char *name_M_Hx_xRepeatSome =  "Hx_RepeatSome" ;
char *nameFun_M_Hx_xRepeatSome(Term term) { return name_M_Hx_xRepeatSome; }
struct _ConstructionDescriptor descriptor_M_Hx_xRepeatSome = {&sort_M_HxRepeat, Data_M_Hx_xRepeatSome, 0, sizeof(STRUCT_Con_M_Hx_xRepeatSome), noBinderOffsets, &nameFun_M_Hx_xRepeatSome, &dataStep};
int conBindOffs_M_Hx_xRepeatSomeSep[] = {0 , 0};
char *name_M_Hx_xRepeatSomeSep =  "Hx_RepeatSomeSep" ;
char *nameFun_M_Hx_xRepeatSomeSep(Term term) { return name_M_Hx_xRepeatSomeSep; }
struct _ConstructionDescriptor descriptor_M_Hx_xRepeatSomeSep = {&sort_M_HxRepeat, Data_M_Hx_xRepeatSomeSep, 1, sizeof(STRUCT_Con_M_Hx_xRepeatSomeSep), conBindOffs_M_Hx_xRepeatSomeSep, &nameFun_M_Hx_xRepeatSomeSep, &dataStep};
ConstructionDescriptor sortCon_M_HxRepeat[] = {NULL, NULL, &descriptor_M_Hx_xRepeatMaybeSome, &descriptor_M_Hx_xRepeatMaybe, &descriptor_M_Hx_xRepeatSingle, &descriptor_M_Hx_xRepeatSome, &descriptor_M_Hx_xRepeatSomeSep,  NULL};
char *sortNam_M_HxRepeat[] = {NULL, NULL,  "Hx_RepeatMaybeSome" ,  "Hx_RepeatMaybe" ,  "Hx_RepeatSingle" ,  "Hx_RepeatSome" ,  "Hx_RepeatSomeSep" ,  NULL};
char *sortInt_M_HxRepeat[] = {NULL, NULL, "_M_Hx_xRepeatMaybeSome", "_M_Hx_xRepeatMaybe", "_M_Hx_xRepeatSingle", "_M_Hx_xRepeatSome", "_M_Hx_xRepeatSomeSep",  NULL};
struct _SortDescriptor sort_M_HxRepeat = { "HxRepeat" , sortCon_M_HxRepeat, sortNam_M_HxRepeat, sortInt_M_HxRepeat, NULL};

/* SORT HxRule CONSTANTS. */
int conBindOffs_M_Hx_xRule[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xRule =  "Hx_Rule" ;
char *nameFun_M_Hx_xRule(Term term) { return name_M_Hx_xRule; }
struct _ConstructionDescriptor descriptor_M_Hx_xRule = {&sort_M_HxRule, Data_M_Hx_xRule, 3, sizeof(STRUCT_Con_M_Hx_xRule), conBindOffs_M_Hx_xRule, &nameFun_M_Hx_xRule, &dataStep};
ConstructionDescriptor sortCon_M_HxRule[] = {NULL, NULL, &descriptor_M_Hx_xRule,  NULL};
char *sortNam_M_HxRule[] = {NULL, NULL,  "Hx_Rule" ,  NULL};
char *sortInt_M_HxRule[] = {NULL, NULL, "_M_Hx_xRule",  NULL};
struct _SortDescriptor sort_M_HxRule = { "HxRule" , sortCon_M_HxRule, sortNam_M_HxRule, sortInt_M_HxRule, NULL};

/* SORT HxRulePrefix CONSTANTS. */
int conBindOffs_M_Hx_xRulePrefix[] = {0 , 0 , 0};
char *name_M_Hx_xRulePrefix =  "Hx_RulePrefix" ;
char *nameFun_M_Hx_xRulePrefix(Term term) { return name_M_Hx_xRulePrefix; }
struct _ConstructionDescriptor descriptor_M_Hx_xRulePrefix = {&sort_M_HxRulePrefix, Data_M_Hx_xRulePrefix, 2, sizeof(STRUCT_Con_M_Hx_xRulePrefix), conBindOffs_M_Hx_xRulePrefix, &nameFun_M_Hx_xRulePrefix, &dataStep};
ConstructionDescriptor sortCon_M_HxRulePrefix[] = {NULL, NULL, &descriptor_M_Hx_xRulePrefix,  NULL};
char *sortNam_M_HxRulePrefix[] = {NULL, NULL,  "Hx_RulePrefix" ,  NULL};
char *sortInt_M_HxRulePrefix[] = {NULL, NULL, "_M_Hx_xRulePrefix",  NULL};
struct _SortDescriptor sort_M_HxRulePrefix = { "HxRulePrefix" , sortCon_M_HxRulePrefix, sortNam_M_HxRulePrefix, sortInt_M_HxRulePrefix, NULL};

/* SORT HxRulePriority CONSTANTS. */
char *name_M_Hx_xNormal =  "Hx_Normal" ;
char *nameFun_M_Hx_xNormal(Term term) { return name_M_Hx_xNormal; }
struct _ConstructionDescriptor descriptor_M_Hx_xNormal = {&sort_M_HxRulePriority, Data_M_Hx_xNormal, 0, sizeof(STRUCT_Con_M_Hx_xNormal), noBinderOffsets, &nameFun_M_Hx_xNormal, &dataStep};
char *name_M_Hx_xdefault =  "Hx_default" ;
char *nameFun_M_Hx_xdefault(Term term) { return name_M_Hx_xdefault; }
struct _ConstructionDescriptor descriptor_M_Hx_xdefault = {&sort_M_HxRulePriority, Data_M_Hx_xdefault, 0, sizeof(STRUCT_Con_M_Hx_xdefault), noBinderOffsets, &nameFun_M_Hx_xdefault, &dataStep};
char *name_M_Hx_xpriority =  "Hx_priority" ;
char *nameFun_M_Hx_xpriority(Term term) { return name_M_Hx_xpriority; }
struct _ConstructionDescriptor descriptor_M_Hx_xpriority = {&sort_M_HxRulePriority, Data_M_Hx_xpriority, 0, sizeof(STRUCT_Con_M_Hx_xpriority), noBinderOffsets, &nameFun_M_Hx_xpriority, &dataStep};
ConstructionDescriptor sortCon_M_HxRulePriority[] = {NULL, NULL, &descriptor_M_Hx_xNormal, &descriptor_M_Hx_xdefault, &descriptor_M_Hx_xpriority,  NULL};
char *sortNam_M_HxRulePriority[] = {NULL, NULL,  "Hx_Normal" ,  "Hx_default" ,  "Hx_priority" ,  NULL};
char *sortInt_M_HxRulePriority[] = {NULL, NULL, "_M_Hx_xNormal", "_M_Hx_xdefault", "_M_Hx_xpriority",  NULL};
struct _SortDescriptor sort_M_HxRulePriority = { "HxRulePriority" , sortCon_M_HxRulePriority, sortNam_M_HxRulePriority, sortInt_M_HxRulePriority, NULL};

/* SORT HxScope CONSTANTS. */
int conBindOffs_M_Hx_xScope[] = {0 , 0 , 0};
char *name_M_Hx_xScope =  "Hx_Scope" ;
char *nameFun_M_Hx_xScope(Term term) { return name_M_Hx_xScope; }
struct _ConstructionDescriptor descriptor_M_Hx_xScope = {&sort_M_HxScope, Data_M_Hx_xScope, 2, sizeof(STRUCT_Con_M_Hx_xScope), conBindOffs_M_Hx_xScope, &nameFun_M_Hx_xScope, &dataStep};
ConstructionDescriptor sortCon_M_HxScope[] = {NULL, NULL, &descriptor_M_Hx_xScope,  NULL};
char *sortNam_M_HxScope[] = {NULL, NULL,  "Hx_Scope" ,  NULL};
char *sortInt_M_HxScope[] = {NULL, NULL, "_M_Hx_xScope",  NULL};
struct _SortDescriptor sort_M_HxScope = { "HxScope" , sortCon_M_HxScope, sortNam_M_HxScope, sortInt_M_HxScope, NULL};

/* SORT HxScopeSort CONSTANTS. */
int conBindOffs_M_Hx_xbinds[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xbinds =  "Hx_binds" ;
char *nameFun_M_Hx_xbinds(Term term) { return name_M_Hx_xbinds; }
struct _ConstructionDescriptor descriptor_M_Hx_xbinds = {&sort_M_HxScopeSort, Data_M_Hx_xbinds, 3, sizeof(STRUCT_Con_M_Hx_xbinds), conBindOffs_M_Hx_xbinds, &nameFun_M_Hx_xbinds, &dataStep};
int conBindOffs_M_Hx_xScopeSort[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xScopeSort =  "Hx_ScopeSort" ;
char *nameFun_M_Hx_xScopeSort(Term term) { return name_M_Hx_xScopeSort; }
struct _ConstructionDescriptor descriptor_M_Hx_xScopeSort = {&sort_M_HxScopeSort, Data_M_Hx_xScopeSort, 3, sizeof(STRUCT_Con_M_Hx_xScopeSort), conBindOffs_M_Hx_xScopeSort, &nameFun_M_Hx_xScopeSort, &dataStep};
ConstructionDescriptor sortCon_M_HxScopeSort[] = {NULL, NULL, &descriptor_M_Hx_xbinds, &descriptor_M_Hx_xScopeSort,  NULL};
char *sortNam_M_HxScopeSort[] = {NULL, NULL,  "Hx_binds" ,  "Hx_ScopeSort" ,  NULL};
char *sortInt_M_HxScopeSort[] = {NULL, NULL, "_M_Hx_xbinds", "_M_Hx_xScopeSort",  NULL};
struct _SortDescriptor sort_M_HxScopeSort = { "HxScopeSort" , sortCon_M_HxScopeSort, sortNam_M_HxScopeSort, sortInt_M_HxScopeSort, NULL};

/* SORT HxScopeSortPrec CONSTANTS. */
int conBindOffs_M_Hx_xScopeSortPrec[] = {0 , 0 , 0};
char *name_M_Hx_xScopeSortPrec =  "Hx_ScopeSortPrec" ;
char *nameFun_M_Hx_xScopeSortPrec(Term term) { return name_M_Hx_xScopeSortPrec; }
struct _ConstructionDescriptor descriptor_M_Hx_xScopeSortPrec = {&sort_M_HxScopeSortPrec, Data_M_Hx_xScopeSortPrec, 2, sizeof(STRUCT_Con_M_Hx_xScopeSortPrec), conBindOffs_M_Hx_xScopeSortPrec, &nameFun_M_Hx_xScopeSortPrec, &dataStep};
int conBindOffs_M_Hx_xScopeSortPrecBind[] = {0 , 0 , 0};
char *name_M_Hx_xScopeSortPrecBind =  "Hx_ScopeSortPrecBind" ;
char *nameFun_M_Hx_xScopeSortPrecBind(Term term) { return name_M_Hx_xScopeSortPrecBind; }
struct _ConstructionDescriptor descriptor_M_Hx_xScopeSortPrecBind = {&sort_M_HxScopeSortPrec, Data_M_Hx_xScopeSortPrecBind, 2, sizeof(STRUCT_Con_M_Hx_xScopeSortPrecBind), conBindOffs_M_Hx_xScopeSortPrecBind, &nameFun_M_Hx_xScopeSortPrecBind, &dataStep};
ConstructionDescriptor sortCon_M_HxScopeSortPrec[] = {NULL, NULL, &descriptor_M_Hx_xScopeSortPrec, &descriptor_M_Hx_xScopeSortPrecBind,  NULL};
char *sortNam_M_HxScopeSortPrec[] = {NULL, NULL,  "Hx_ScopeSortPrec" ,  "Hx_ScopeSortPrecBind" ,  NULL};
char *sortInt_M_HxScopeSortPrec[] = {NULL, NULL, "_M_Hx_xScopeSortPrec", "_M_Hx_xScopeSortPrecBind",  NULL};
struct _SortDescriptor sort_M_HxScopeSortPrec = { "HxScopeSortPrec" , sortCon_M_HxScopeSortPrec, sortNam_M_HxScopeSortPrec, sortInt_M_HxScopeSortPrec, NULL};

/* SORT HxSort CONSTANTS. */
int conBindOffs_M_Hx_xSortParam[] = {0 , 0};
char *name_M_Hx_xSortParam =  "Hx_SortParam" ;
char *nameFun_M_Hx_xSortParam(Term term) { return name_M_Hx_xSortParam; }
struct _ConstructionDescriptor descriptor_M_Hx_xSortParam = {&sort_M_HxSort, Data_M_Hx_xSortParam, 1, sizeof(STRUCT_Con_M_Hx_xSortParam), conBindOffs_M_Hx_xSortParam, &nameFun_M_Hx_xSortParam, &dataStep};
int conBindOffs_M_Hx_xSortName[] = {0 , 0 , 0};
char *name_M_Hx_xSortName =  "Hx_SortName" ;
char *nameFun_M_Hx_xSortName(Term term) { return name_M_Hx_xSortName; }
struct _ConstructionDescriptor descriptor_M_Hx_xSortName = {&sort_M_HxSort, Data_M_Hx_xSortName, 2, sizeof(STRUCT_Con_M_Hx_xSortName), conBindOffs_M_Hx_xSortName, &nameFun_M_Hx_xSortName, &dataStep};
int conBindOffs_M_Hx_xSort[] = {0 , 0 , 0};
char *name_M_Hx_xSort =  "Hx_Sort" ;
char *nameFun_M_Hx_xSort(Term term) { return name_M_Hx_xSort; }
struct _ConstructionDescriptor descriptor_M_Hx_xSort = {&sort_M_HxSort, Data_M_Hx_xSort, 2, sizeof(STRUCT_Con_M_Hx_xSort), conBindOffs_M_Hx_xSort, &nameFun_M_Hx_xSort, &dataStep};
ConstructionDescriptor sortCon_M_HxSort[] = {NULL, NULL, &descriptor_M_Hx_xSortParam, &descriptor_M_Hx_xSortName, &descriptor_M_Hx_xSort,  NULL};
char *sortNam_M_HxSort[] = {NULL, NULL,  "Hx_SortParam" ,  "Hx_SortName" ,  "Hx_Sort" ,  NULL};
char *sortInt_M_HxSort[] = {NULL, NULL, "_M_Hx_xSortParam", "_M_Hx_xSortName", "_M_Hx_xSort",  NULL};
struct _SortDescriptor sort_M_HxSort = { "HxSort" , sortCon_M_HxSort, sortNam_M_HxSort, sortInt_M_HxSort, NULL};

/* SORT HxSortAbstraction CONSTANTS. */
int conBindOffs_M_Hx_xSortAbstractionBody[] = {0 , 0};
char *name_M_Hx_xSortAbstractionBody =  "Hx_SortAbstractionBody" ;
char *nameFun_M_Hx_xSortAbstractionBody(Term term) { return name_M_Hx_xSortAbstractionBody; }
struct _ConstructionDescriptor descriptor_M_Hx_xSortAbstractionBody = {&sort_M_HxSortAbstraction, Data_M_Hx_xSortAbstractionBody, 1, sizeof(STRUCT_Con_M_Hx_xSortAbstractionBody), conBindOffs_M_Hx_xSortAbstractionBody, &nameFun_M_Hx_xSortAbstractionBody, &dataStep};
int conBindOffs_M_Hx_xSortAbstractionParam[] = {0 , 1};
char *name_M_Hx_xSortAbstractionParam =  "Hx_SortAbstractionParam" ;
char *nameFun_M_Hx_xSortAbstractionParam(Term term) { return name_M_Hx_xSortAbstractionParam; }
struct _ConstructionDescriptor descriptor_M_Hx_xSortAbstractionParam = {&sort_M_HxSortAbstraction, Data_M_Hx_xSortAbstractionParam, 1, sizeof(STRUCT_Con_M_Hx_xSortAbstractionParam), conBindOffs_M_Hx_xSortAbstractionParam, &nameFun_M_Hx_xSortAbstractionParam, &dataStep};
ConstructionDescriptor sortCon_M_HxSortAbstraction[] = {NULL, NULL, &descriptor_M_Hx_xSortAbstractionBody, &descriptor_M_Hx_xSortAbstractionParam,  NULL};
char *sortNam_M_HxSortAbstraction[] = {NULL, NULL,  "Hx_SortAbstractionBody" ,  "Hx_SortAbstractionParam" ,  NULL};
char *sortInt_M_HxSortAbstraction[] = {NULL, NULL, "_M_Hx_xSortAbstractionBody", "_M_Hx_xSortAbstractionParam",  NULL};
struct _SortDescriptor sort_M_HxSortAbstraction = { "HxSortAbstraction" , sortCon_M_HxSortAbstraction, sortNam_M_HxSortAbstraction, sortInt_M_HxSortAbstraction, NULL};

/* SORT HxSortAlternative CONSTANTS. */
int conBindOffs_M_Hx_xstatic[] = {0 , 0};
char *name_M_Hx_xstatic =  "Hx_static" ;
char *nameFun_M_Hx_xstatic(Term term) { return name_M_Hx_xstatic; }
struct _ConstructionDescriptor descriptor_M_Hx_xstatic = {&sort_M_HxSortAlternative, Data_M_Hx_xstatic, 1, sizeof(STRUCT_Con_M_Hx_xstatic), conBindOffs_M_Hx_xstatic, &nameFun_M_Hx_xstatic, &dataStep};
int conBindOffs_M_Hx_xsymbol[] = {0 , 0};
char *name_M_Hx_xsymbol =  "Hx_symbol" ;
char *nameFun_M_Hx_xsymbol(Term term) { return name_M_Hx_xsymbol; }
struct _ConstructionDescriptor descriptor_M_Hx_xsymbol = {&sort_M_HxSortAlternative, Data_M_Hx_xsymbol, 1, sizeof(STRUCT_Con_M_Hx_xsymbol), conBindOffs_M_Hx_xsymbol, &nameFun_M_Hx_xsymbol, &dataStep};
int conBindOffs_M_Hx_xdata[] = {0 , 0};
char *name_M_Hx_xdata =  "Hx_data" ;
char *nameFun_M_Hx_xdata(Term term) { return name_M_Hx_xdata; }
struct _ConstructionDescriptor descriptor_M_Hx_xdata = {&sort_M_HxSortAlternative, Data_M_Hx_xdata, 1, sizeof(STRUCT_Con_M_Hx_xdata), conBindOffs_M_Hx_xdata, &nameFun_M_Hx_xdata, &dataStep};
int conBindOffs_M_Hx_xscheme[] = {0 , 0};
char *name_M_Hx_xscheme =  "Hx_scheme" ;
char *nameFun_M_Hx_xscheme(Term term) { return name_M_Hx_xscheme; }
struct _ConstructionDescriptor descriptor_M_Hx_xscheme = {&sort_M_HxSortAlternative, Data_M_Hx_xscheme, 1, sizeof(STRUCT_Con_M_Hx_xscheme), conBindOffs_M_Hx_xscheme, &nameFun_M_Hx_xscheme, &dataStep};
int conBindOffs_M_Hx_xSynthesizedRef[] = {0 , 0};
char *name_M_Hx_xSynthesizedRef =  "Hx_SynthesizedRef" ;
char *nameFun_M_Hx_xSynthesizedRef(Term term) { return name_M_Hx_xSynthesizedRef; }
struct _ConstructionDescriptor descriptor_M_Hx_xSynthesizedRef = {&sort_M_HxSortAlternative, Data_M_Hx_xSynthesizedRef, 1, sizeof(STRUCT_Con_M_Hx_xSynthesizedRef), conBindOffs_M_Hx_xSynthesizedRef, &nameFun_M_Hx_xSynthesizedRef, &dataStep};
int conBindOffs_M_Hx_xsugar[] = {0 , 0 , 0};
char *name_M_Hx_xsugar =  "Hx_sugar" ;
char *nameFun_M_Hx_xsugar(Term term) { return name_M_Hx_xsugar; }
struct _ConstructionDescriptor descriptor_M_Hx_xsugar = {&sort_M_HxSortAlternative, Data_M_Hx_xsugar, 2, sizeof(STRUCT_Con_M_Hx_xsugar), conBindOffs_M_Hx_xsugar, &nameFun_M_Hx_xsugar, &dataStep};
ConstructionDescriptor sortCon_M_HxSortAlternative[] = {NULL, NULL, &descriptor_M_Hx_xstatic, &descriptor_M_Hx_xsymbol, &descriptor_M_Hx_xdata, &descriptor_M_Hx_xscheme, &descriptor_M_Hx_xSynthesizedRef, &descriptor_M_Hx_xsugar,  NULL};
char *sortNam_M_HxSortAlternative[] = {NULL, NULL,  "Hx_static" ,  "Hx_symbol" ,  "Hx_data" ,  "Hx_scheme" ,  "Hx_SynthesizedRef" ,  "Hx_sugar" ,  NULL};
char *sortInt_M_HxSortAlternative[] = {NULL, NULL, "_M_Hx_xstatic", "_M_Hx_xsymbol", "_M_Hx_xdata", "_M_Hx_xscheme", "_M_Hx_xSynthesizedRef", "_M_Hx_xsugar",  NULL};
struct _SortDescriptor sort_M_HxSortAlternative = { "HxSortAlternative" , sortCon_M_HxSortAlternative, sortNam_M_HxSortAlternative, sortInt_M_HxSortAlternative, NULL};

/* SORT HxSubstituteSort CONSTANTS. */
int conBindOffs_M_Hx_xSubstituteNoSort[] = {0 , 0};
char *name_M_Hx_xSubstituteNoSort =  "Hx_SubstituteNoSort" ;
char *nameFun_M_Hx_xSubstituteNoSort(Term term) { return name_M_Hx_xSubstituteNoSort; }
struct _ConstructionDescriptor descriptor_M_Hx_xSubstituteNoSort = {&sort_M_HxSubstituteSort, Data_M_Hx_xSubstituteNoSort, 1, sizeof(STRUCT_Con_M_Hx_xSubstituteNoSort), conBindOffs_M_Hx_xSubstituteNoSort, &nameFun_M_Hx_xSubstituteNoSort, &dataStep};
int conBindOffs_M_Hx_xSubstituteSort[] = {0 , 0 , 0};
char *name_M_Hx_xSubstituteSort =  "Hx_SubstituteSort" ;
char *nameFun_M_Hx_xSubstituteSort(Term term) { return name_M_Hx_xSubstituteSort; }
struct _ConstructionDescriptor descriptor_M_Hx_xSubstituteSort = {&sort_M_HxSubstituteSort, Data_M_Hx_xSubstituteSort, 2, sizeof(STRUCT_Con_M_Hx_xSubstituteSort), conBindOffs_M_Hx_xSubstituteSort, &nameFun_M_Hx_xSubstituteSort, &dataStep};
ConstructionDescriptor sortCon_M_HxSubstituteSort[] = {NULL, NULL, &descriptor_M_Hx_xSubstituteNoSort, &descriptor_M_Hx_xSubstituteSort,  NULL};
char *sortNam_M_HxSubstituteSort[] = {NULL, NULL,  "Hx_SubstituteNoSort" ,  "Hx_SubstituteSort" ,  NULL};
char *sortInt_M_HxSubstituteSort[] = {NULL, NULL, "_M_Hx_xSubstituteNoSort", "_M_Hx_xSubstituteSort",  NULL};
struct _SortDescriptor sort_M_HxSubstituteSort = { "HxSubstituteSort" , sortCon_M_HxSubstituteSort, sortNam_M_HxSubstituteSort, sortInt_M_HxSubstituteSort, NULL};

/* SORT HxTerm CONSTANTS. */
int conBindOffs_M_Hx_xConstructionSorted[] = {0 , 0 , 0 , 0 , 0 , 0};
char *name_M_Hx_xConstructionSorted =  "Hx_ConstructionSorted" ;
char *nameFun_M_Hx_xConstructionSorted(Term term) { return name_M_Hx_xConstructionSorted; }
struct _ConstructionDescriptor descriptor_M_Hx_xConstructionSorted = {&sort_M_HxTerm, Data_M_Hx_xConstructionSorted, 5, sizeof(STRUCT_Con_M_Hx_xConstructionSorted), conBindOffs_M_Hx_xConstructionSorted, &nameFun_M_Hx_xConstructionSorted, &dataStep};
int conBindOffs_M_Hx_xMetaApplication[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xMetaApplication =  "Hx_MetaApplication" ;
char *nameFun_M_Hx_xMetaApplication(Term term) { return name_M_Hx_xMetaApplication; }
struct _ConstructionDescriptor descriptor_M_Hx_xMetaApplication = {&sort_M_HxTerm, Data_M_Hx_xMetaApplication, 3, sizeof(STRUCT_Con_M_Hx_xMetaApplication), conBindOffs_M_Hx_xMetaApplication, &nameFun_M_Hx_xMetaApplication, &dataStep};
char *name_M_Hx_xNullTerm =  "Hx_NullTerm" ;
char *nameFun_M_Hx_xNullTerm(Term term) { return name_M_Hx_xNullTerm; }
struct _ConstructionDescriptor descriptor_M_Hx_xNullTerm = {&sort_M_HxTerm, Data_M_Hx_xNullTerm, 0, sizeof(STRUCT_Con_M_Hx_xNullTerm), noBinderOffsets, &nameFun_M_Hx_xNullTerm, &dataStep};
int conBindOffs_M_Hx_xVariableUse[] = {0 , 0 , 0};
char *name_M_Hx_xVariableUse =  "Hx_VariableUse" ;
char *nameFun_M_Hx_xVariableUse(Term term) { return name_M_Hx_xVariableUse; }
struct _ConstructionDescriptor descriptor_M_Hx_xVariableUse = {&sort_M_HxTerm, Data_M_Hx_xVariableUse, 2, sizeof(STRUCT_Con_M_Hx_xVariableUse), conBindOffs_M_Hx_xVariableUse, &nameFun_M_Hx_xVariableUse, &dataStep};
int conBindOffs_M_Hx_xSpecial[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xSpecial =  "Hx_Special" ;
char *nameFun_M_Hx_xSpecial(Term term) { return name_M_Hx_xSpecial; }
struct _ConstructionDescriptor descriptor_M_Hx_xSpecial = {&sort_M_HxTerm, Data_M_Hx_xSpecial, 3, sizeof(STRUCT_Con_M_Hx_xSpecial), conBindOffs_M_Hx_xSpecial, &nameFun_M_Hx_xSpecial, &dataStep};
int conBindOffs_M_Hx_xUnparsed[] = {0 , 0 , 0};
char *name_M_Hx_xUnparsed =  "Hx_Unparsed" ;
char *nameFun_M_Hx_xUnparsed(Term term) { return name_M_Hx_xUnparsed; }
struct _ConstructionDescriptor descriptor_M_Hx_xUnparsed = {&sort_M_HxTerm, Data_M_Hx_xUnparsed, 2, sizeof(STRUCT_Con_M_Hx_xUnparsed), conBindOffs_M_Hx_xUnparsed, &nameFun_M_Hx_xUnparsed, &dataStep};
int conBindOffs_M_Hx_xVariableUseSorted[] = {0 , 0 , 0 , 0 , 0};
char *name_M_Hx_xVariableUseSorted =  "Hx_VariableUseSorted" ;
char *nameFun_M_Hx_xVariableUseSorted(Term term) { return name_M_Hx_xVariableUseSorted; }
struct _ConstructionDescriptor descriptor_M_Hx_xVariableUseSorted = {&sort_M_HxTerm, Data_M_Hx_xVariableUseSorted, 4, sizeof(STRUCT_Con_M_Hx_xVariableUseSorted), conBindOffs_M_Hx_xVariableUseSorted, &nameFun_M_Hx_xVariableUseSorted, &dataStep};
int conBindOffs_M_Hx_xUnparsedSorted[] = {0 , 0 , 0 , 0 , 0};
char *name_M_Hx_xUnparsedSorted =  "Hx_UnparsedSorted" ;
char *nameFun_M_Hx_xUnparsedSorted(Term term) { return name_M_Hx_xUnparsedSorted; }
struct _ConstructionDescriptor descriptor_M_Hx_xUnparsedSorted = {&sort_M_HxTerm, Data_M_Hx_xUnparsedSorted, 4, sizeof(STRUCT_Con_M_Hx_xUnparsedSorted), conBindOffs_M_Hx_xUnparsedSorted, &nameFun_M_Hx_xUnparsedSorted, &dataStep};
int conBindOffs_M_Hx_xLiteralSorted[] = {0 , 0 , 0 , 0 , 0};
char *name_M_Hx_xLiteralSorted =  "Hx_LiteralSorted" ;
char *nameFun_M_Hx_xLiteralSorted(Term term) { return name_M_Hx_xLiteralSorted; }
struct _ConstructionDescriptor descriptor_M_Hx_xLiteralSorted = {&sort_M_HxTerm, Data_M_Hx_xLiteralSorted, 4, sizeof(STRUCT_Con_M_Hx_xLiteralSorted), conBindOffs_M_Hx_xLiteralSorted, &nameFun_M_Hx_xLiteralSorted, &dataStep};
int conBindOffs_M_Hx_xLiteral[] = {0 , 0 , 0};
char *name_M_Hx_xLiteral =  "Hx_Literal" ;
char *nameFun_M_Hx_xLiteral(Term term) { return name_M_Hx_xLiteral; }
struct _ConstructionDescriptor descriptor_M_Hx_xLiteral = {&sort_M_HxTerm, Data_M_Hx_xLiteral, 2, sizeof(STRUCT_Con_M_Hx_xLiteral), conBindOffs_M_Hx_xLiteral, &nameFun_M_Hx_xLiteral, &dataStep};
int conBindOffs_M_Hx_xMetaApplicationSorted[] = {0 , 0 , 0 , 0 , 0 , 0};
char *name_M_Hx_xMetaApplicationSorted =  "Hx_MetaApplicationSorted" ;
char *nameFun_M_Hx_xMetaApplicationSorted(Term term) { return name_M_Hx_xMetaApplicationSorted; }
struct _ConstructionDescriptor descriptor_M_Hx_xMetaApplicationSorted = {&sort_M_HxTerm, Data_M_Hx_xMetaApplicationSorted, 5, sizeof(STRUCT_Con_M_Hx_xMetaApplicationSorted), conBindOffs_M_Hx_xMetaApplicationSorted, &nameFun_M_Hx_xMetaApplicationSorted, &dataStep};
int conBindOffs_M_Hx_xConstruction[] = {0 , 0 , 0 , 0};
char *name_M_Hx_xConstruction =  "Hx_Construction" ;
char *nameFun_M_Hx_xConstruction(Term term) { return name_M_Hx_xConstruction; }
struct _ConstructionDescriptor descriptor_M_Hx_xConstruction = {&sort_M_HxTerm, Data_M_Hx_xConstruction, 3, sizeof(STRUCT_Con_M_Hx_xConstruction), conBindOffs_M_Hx_xConstruction, &nameFun_M_Hx_xConstruction, &dataStep};
ConstructionDescriptor sortCon_M_HxTerm[] = {NULL, NULL, &descriptor_M_Hx_xConstructionSorted, &descriptor_M_Hx_xMetaApplication, &descriptor_M_Hx_xNullTerm, &descriptor_M_Hx_xVariableUse, &descriptor_M_Hx_xSpecial, &descriptor_M_Hx_xUnparsed, &descriptor_M_Hx_xVariableUseSorted, &descriptor_M_Hx_xUnparsedSorted, &descriptor_M_Hx_xLiteralSorted, &descriptor_M_Hx_xLiteral, &descriptor_M_Hx_xMetaApplicationSorted, &descriptor_M_Hx_xConstruction,  NULL};
char *sortNam_M_HxTerm[] = {NULL, NULL,  "Hx_ConstructionSorted" ,  "Hx_MetaApplication" ,  "Hx_NullTerm" ,  "Hx_VariableUse" ,  "Hx_Special" ,  "Hx_Unparsed" ,  "Hx_VariableUseSorted" ,  "Hx_UnparsedSorted" ,  "Hx_LiteralSorted" ,  "Hx_Literal" ,  "Hx_MetaApplicationSorted" ,  "Hx_Construction" ,  NULL};
char *sortInt_M_HxTerm[] = {NULL, NULL, "_M_Hx_xConstructionSorted", "_M_Hx_xMetaApplication", "_M_Hx_xNullTerm", "_M_Hx_xVariableUse", "_M_Hx_xSpecial", "_M_Hx_xUnparsed", "_M_Hx_xVariableUseSorted", "_M_Hx_xUnparsedSorted", "_M_Hx_xLiteralSorted", "_M_Hx_xLiteral", "_M_Hx_xMetaApplicationSorted", "_M_Hx_xConstruction",  NULL};
struct _SortDescriptor sort_M_HxTerm = { "HxTerm" , sortCon_M_HxTerm, sortNam_M_HxTerm, sortInt_M_HxTerm, NULL};

/* SORT Location CONSTANTS. */
char *name_M_LOC =  "LOC" ;
char *nameFun_M_LOC(Term term) { return name_M_LOC; }
struct _ConstructionDescriptor descriptor_M_LOC = {&sort_M_Location, Data_M_LOC, 0, sizeof(STRUCT_Con_M_LOC), noBinderOffsets, &nameFun_M_LOC, &dataStep};
ConstructionDescriptor sortCon_M_Location[] = {NULL, NULL, &descriptor_M_LOC,  NULL};
char *sortNam_M_Location[] = {NULL, NULL,  "LOC" ,  NULL};
char *sortInt_M_Location[] = {NULL, NULL, "_M_LOC",  NULL};
struct _SortDescriptor sort_M_Location = { "Location" , sortCon_M_Location, sortNam_M_Location, sortInt_M_Location, NULL};

/* SORT Name2NamesMap CONSTANTS. */
char *name_M_N2Ns =  "N2Ns" ;
char *nameFun_M_N2Ns(Term term) { return name_M_N2Ns; }
struct _ConstructionDescriptor descriptor_M_N2Ns = {&sort_M_Name2NamesMap, Data_M_N2Ns, 0, sizeof(STRUCT_Con_M_N2Ns), noBinderOffsets, &nameFun_M_N2Ns, &dataStep};
ConstructionDescriptor sortCon_M_Name2NamesMap[] = {NULL, NULL, &descriptor_M_N2Ns,  NULL};
char *sortNam_M_Name2NamesMap[] = {NULL, NULL,  "N2Ns" ,  NULL};
char *sortInt_M_Name2NamesMap[] = {NULL, NULL, "_M_N2Ns",  NULL};
struct _SortDescriptor sort_M_Name2NamesMap = { "Name2NamesMap" , sortCon_M_Name2NamesMap, sortNam_M_Name2NamesMap, sortInt_M_Name2NamesMap, NULL};

/* SORT NameMap CONSTANTS. */
char *name_M_N2N =  "N2N" ;
char *nameFun_M_N2N(Term term) { return name_M_N2N; }
struct _ConstructionDescriptor descriptor_M_N2N = {&sort_M_NameMap, Data_M_N2N, 0, sizeof(STRUCT_Con_M_N2N), noBinderOffsets, &nameFun_M_N2N, &dataStep};
ConstructionDescriptor sortCon_M_NameMap[] = {NULL, NULL, &descriptor_M_N2N,  NULL};
char *sortNam_M_NameMap[] = {NULL, NULL,  "N2N" ,  NULL};
char *sortInt_M_NameMap[] = {NULL, NULL, "_M_N2N",  NULL};
struct _SortDescriptor sort_M_NameMap = { "NameMap" , sortCon_M_NameMap, sortNam_M_NameMap, sortInt_M_NameMap, NULL};

/* SORT NameSet CONSTANTS. */
int conBindOffs_M_NAME_xSET[] = {0 , 0};
char *name_M_NAME_xSET =  "NAME_SET" ;
char *nameFun_M_NAME_xSET(Term term) { return name_M_NAME_xSET; }
struct _ConstructionDescriptor descriptor_M_NAME_xSET = {&sort_M_NameSet, Data_M_NAME_xSET, 1, sizeof(STRUCT_Con_M_NAME_xSET), conBindOffs_M_NAME_xSET, &nameFun_M_NAME_xSET, &dataStep};
ConstructionDescriptor sortCon_M_NameSet[] = {NULL, NULL, &descriptor_M_NAME_xSET,  NULL};
char *sortNam_M_NameSet[] = {NULL, NULL,  "NAME_SET" ,  NULL};
char *sortInt_M_NameSet[] = {NULL, NULL, "_M_NAME_xSET",  NULL};
struct _SortDescriptor sort_M_NameSet = { "NameSet" , sortCon_M_NameSet, sortNam_M_NameSet, sortInt_M_NameSet, NULL};

/* SORT Ok CONSTANTS. */
char *name_M_OK =  "OK" ;
char *nameFun_M_OK(Term term) { return name_M_OK; }
struct _ConstructionDescriptor descriptor_M_OK = {&sort_M_Ok, Data_M_OK, 0, sizeof(STRUCT_Con_M_OK), noBinderOffsets, &nameFun_M_OK, &dataStep};
ConstructionDescriptor sortCon_M_Ok[] = {NULL, NULL, &descriptor_M_OK,  NULL};
char *sortNam_M_Ok[] = {NULL, NULL,  "OK" ,  NULL};
char *sortInt_M_Ok[] = {NULL, NULL, "_M_OK",  NULL};
struct _SortDescriptor sort_M_Ok = { "Ok" , sortCon_M_Ok, sortNam_M_Ok, sortInt_M_Ok, NULL};

/* SORT PFK_SORT CONSTANTS. */
int conBindOffs_M_PFK[] = {0 , 0 , 0};
char *name_M_PFK =  "PFK" ;
char *nameFun_M_PFK(Term term) { return name_M_PFK; }
struct _ConstructionDescriptor descriptor_M_PFK = {&sort_M_PFK_xSORT, Data_M_PFK, 2, sizeof(STRUCT_Con_M_PFK), conBindOffs_M_PFK, &nameFun_M_PFK, &dataStep};
ConstructionDescriptor sortCon_M_PFK_xSORT[] = {NULL, NULL, &descriptor_M_PFK,  NULL};
char *sortNam_M_PFK_xSORT[] = {NULL, NULL,  "PFK" ,  NULL};
char *sortInt_M_PFK_xSORT[] = {NULL, NULL, "_M_PFK",  NULL};
struct _SortDescriptor sort_M_PFK_xSORT = { "PFK_SORT" , sortCon_M_PFK_xSORT, sortNam_M_PFK_xSORT, sortInt_M_PFK_xSORT, NULL};

/* SORT PropsOf$AFM_SORT CONSTANTS. */
char *name_M_PropsOf_sAFM =  "PropsOf$AFM" ;
char *nameFun_M_PropsOf_sAFM(Term term) { return name_M_PropsOf_sAFM; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sAFM = {&sort_M_PropsOf_sAFM_xSORT, Data_M_PropsOf_sAFM, 0, sizeof(STRUCT_Con_M_PropsOf_sAFM), noBinderOffsets, &nameFun_M_PropsOf_sAFM, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sAFM_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sAFM,  NULL};
char *sortNam_M_PropsOf_sAFM_xSORT[] = {NULL, NULL,  "PropsOf$AFM" ,  NULL};
char *sortInt_M_PropsOf_sAFM_xSORT[] = {NULL, NULL, "_M_PropsOf_sAFM",  NULL};
struct _SortDescriptor sort_M_PropsOf_sAFM_xSORT = { "PropsOf$AFM_SORT" , sortCon_M_PropsOf_sAFM_xSORT, sortNam_M_PropsOf_sAFM_xSORT, sortInt_M_PropsOf_sAFM_xSORT, NULL};

/* SORT PropsOf$DME_AFM_SORT CONSTANTS. */
char *name_M_PropsOf_sDME_xAFM =  "PropsOf$DME_AFM" ;
char *nameFun_M_PropsOf_sDME_xAFM(Term term) { return name_M_PropsOf_sDME_xAFM; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xAFM = {&sort_M_PropsOf_sDME_xAFM_xSORT, Data_M_PropsOf_sDME_xAFM, 0, sizeof(STRUCT_Con_M_PropsOf_sDME_xAFM), noBinderOffsets, &nameFun_M_PropsOf_sDME_xAFM, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDME_xAFM_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDME_xAFM,  NULL};
char *sortNam_M_PropsOf_sDME_xAFM_xSORT[] = {NULL, NULL,  "PropsOf$DME_AFM" ,  NULL};
char *sortInt_M_PropsOf_sDME_xAFM_xSORT[] = {NULL, NULL, "_M_PropsOf_sDME_xAFM",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDME_xAFM_xSORT = { "PropsOf$DME_AFM_SORT" , sortCon_M_PropsOf_sDME_xAFM_xSORT, sortNam_M_PropsOf_sDME_xAFM_xSORT, sortInt_M_PropsOf_sDME_xAFM_xSORT, NULL};

/* SORT PropsOf$DME_ALIAS_SORT CONSTANTS. */
char *name_M_PropsOf_sDME_xALIAS =  "PropsOf$DME_ALIAS" ;
char *nameFun_M_PropsOf_sDME_xALIAS(Term term) { return name_M_PropsOf_sDME_xALIAS; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xALIAS = {&sort_M_PropsOf_sDME_xALIAS_xSORT, Data_M_PropsOf_sDME_xALIAS, 0, sizeof(STRUCT_Con_M_PropsOf_sDME_xALIAS), noBinderOffsets, &nameFun_M_PropsOf_sDME_xALIAS, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDME_xALIAS_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDME_xALIAS,  NULL};
char *sortNam_M_PropsOf_sDME_xALIAS_xSORT[] = {NULL, NULL,  "PropsOf$DME_ALIAS" ,  NULL};
char *sortInt_M_PropsOf_sDME_xALIAS_xSORT[] = {NULL, NULL, "_M_PropsOf_sDME_xALIAS",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDME_xALIAS_xSORT = { "PropsOf$DME_ALIAS_SORT" , sortCon_M_PropsOf_sDME_xALIAS_xSORT, sortNam_M_PropsOf_sDME_xALIAS_xSORT, sortInt_M_PropsOf_sDME_xALIAS_xSORT, NULL};

/* SORT PropsOf$DME_ATTRIBUTE_SORT CONSTANTS. */
char *name_M_PropsOf_sDME_xATTRIBUTE =  "PropsOf$DME_ATTRIBUTE" ;
char *nameFun_M_PropsOf_sDME_xATTRIBUTE(Term term) { return name_M_PropsOf_sDME_xATTRIBUTE; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xATTRIBUTE = {&sort_M_PropsOf_sDME_xATTRIBUTE_xSORT, Data_M_PropsOf_sDME_xATTRIBUTE, 0, sizeof(STRUCT_Con_M_PropsOf_sDME_xATTRIBUTE), noBinderOffsets, &nameFun_M_PropsOf_sDME_xATTRIBUTE, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDME_xATTRIBUTE_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDME_xATTRIBUTE,  NULL};
char *sortNam_M_PropsOf_sDME_xATTRIBUTE_xSORT[] = {NULL, NULL,  "PropsOf$DME_ATTRIBUTE" ,  NULL};
char *sortInt_M_PropsOf_sDME_xATTRIBUTE_xSORT[] = {NULL, NULL, "_M_PropsOf_sDME_xATTRIBUTE",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDME_xATTRIBUTE_xSORT = { "PropsOf$DME_ATTRIBUTE_SORT" , sortCon_M_PropsOf_sDME_xATTRIBUTE_xSORT, sortNam_M_PropsOf_sDME_xATTRIBUTE_xSORT, sortInt_M_PropsOf_sDME_xATTRIBUTE_xSORT, NULL};

/* SORT PropsOf$DME_N2NM_SORT CONSTANTS. */
char *name_M_PropsOf_sDME_xN2NM =  "PropsOf$DME_N2NM" ;
char *nameFun_M_PropsOf_sDME_xN2NM(Term term) { return name_M_PropsOf_sDME_xN2NM; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xN2NM = {&sort_M_PropsOf_sDME_xN2NM_xSORT, Data_M_PropsOf_sDME_xN2NM, 0, sizeof(STRUCT_Con_M_PropsOf_sDME_xN2NM), noBinderOffsets, &nameFun_M_PropsOf_sDME_xN2NM, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDME_xN2NM_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDME_xN2NM,  NULL};
char *sortNam_M_PropsOf_sDME_xN2NM_xSORT[] = {NULL, NULL,  "PropsOf$DME_N2NM" ,  NULL};
char *sortInt_M_PropsOf_sDME_xN2NM_xSORT[] = {NULL, NULL, "_M_PropsOf_sDME_xN2NM",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDME_xN2NM_xSORT = { "PropsOf$DME_N2NM_SORT" , sortCon_M_PropsOf_sDME_xN2NM_xSORT, sortNam_M_PropsOf_sDME_xN2NM_xSORT, sortInt_M_PropsOf_sDME_xN2NM_xSORT, NULL};

/* SORT PropsOf$DME_N2N_SORT CONSTANTS. */
char *name_M_PropsOf_sDME_xN2N =  "PropsOf$DME_N2N" ;
char *nameFun_M_PropsOf_sDME_xN2N(Term term) { return name_M_PropsOf_sDME_xN2N; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xN2N = {&sort_M_PropsOf_sDME_xN2N_xSORT, Data_M_PropsOf_sDME_xN2N, 0, sizeof(STRUCT_Con_M_PropsOf_sDME_xN2N), noBinderOffsets, &nameFun_M_PropsOf_sDME_xN2N, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDME_xN2N_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDME_xN2N,  NULL};
char *sortNam_M_PropsOf_sDME_xN2N_xSORT[] = {NULL, NULL,  "PropsOf$DME_N2N" ,  NULL};
char *sortInt_M_PropsOf_sDME_xN2N_xSORT[] = {NULL, NULL, "_M_PropsOf_sDME_xN2N",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDME_xN2N_xSORT = { "PropsOf$DME_N2N_SORT" , sortCon_M_PropsOf_sDME_xN2N_xSORT, sortNam_M_PropsOf_sDME_xN2N_xSORT, sortInt_M_PropsOf_sDME_xN2N_xSORT, NULL};

/* SORT PropsOf$DME_NAMES_SORT CONSTANTS. */
char *name_M_PropsOf_sDME_xNAMES =  "PropsOf$DME_NAMES" ;
char *nameFun_M_PropsOf_sDME_xNAMES(Term term) { return name_M_PropsOf_sDME_xNAMES; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xNAMES = {&sort_M_PropsOf_sDME_xNAMES_xSORT, Data_M_PropsOf_sDME_xNAMES, 0, sizeof(STRUCT_Con_M_PropsOf_sDME_xNAMES), noBinderOffsets, &nameFun_M_PropsOf_sDME_xNAMES, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDME_xNAMES_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDME_xNAMES,  NULL};
char *sortNam_M_PropsOf_sDME_xNAMES_xSORT[] = {NULL, NULL,  "PropsOf$DME_NAMES" ,  NULL};
char *sortInt_M_PropsOf_sDME_xNAMES_xSORT[] = {NULL, NULL, "_M_PropsOf_sDME_xNAMES",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDME_xNAMES_xSORT = { "PropsOf$DME_NAMES_SORT" , sortCon_M_PropsOf_sDME_xNAMES_xSORT, sortNam_M_PropsOf_sDME_xNAMES_xSORT, sortInt_M_PropsOf_sDME_xNAMES_xSORT, NULL};

/* SORT PropsOf$DME_NONE_SORT CONSTANTS. */
char *name_M_PropsOf_sDME_xNONE =  "PropsOf$DME_NONE" ;
char *nameFun_M_PropsOf_sDME_xNONE(Term term) { return name_M_PropsOf_sDME_xNONE; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xNONE = {&sort_M_PropsOf_sDME_xNONE_xSORT, Data_M_PropsOf_sDME_xNONE, 0, sizeof(STRUCT_Con_M_PropsOf_sDME_xNONE), noBinderOffsets, &nameFun_M_PropsOf_sDME_xNONE, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDME_xNONE_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDME_xNONE,  NULL};
char *sortNam_M_PropsOf_sDME_xNONE_xSORT[] = {NULL, NULL,  "PropsOf$DME_NONE" ,  NULL};
char *sortInt_M_PropsOf_sDME_xNONE_xSORT[] = {NULL, NULL, "_M_PropsOf_sDME_xNONE",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDME_xNONE_xSORT = { "PropsOf$DME_NONE_SORT" , sortCon_M_PropsOf_sDME_xNONE_xSORT, sortNam_M_PropsOf_sDME_xNONE_xSORT, sortInt_M_PropsOf_sDME_xNONE_xSORT, NULL};

/* SORT PropsOf$DME_SORT_SORT CONSTANTS. */
char *name_M_PropsOf_sDME_xSORT =  "PropsOf$DME_SORT" ;
char *nameFun_M_PropsOf_sDME_xSORT(Term term) { return name_M_PropsOf_sDME_xSORT; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xSORT = {&sort_M_PropsOf_sDME_xSORT_xSORT, Data_M_PropsOf_sDME_xSORT, 0, sizeof(STRUCT_Con_M_PropsOf_sDME_xSORT), noBinderOffsets, &nameFun_M_PropsOf_sDME_xSORT, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDME_xSORT_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDME_xSORT,  NULL};
char *sortNam_M_PropsOf_sDME_xSORT_xSORT[] = {NULL, NULL,  "PropsOf$DME_SORT" ,  NULL};
char *sortInt_M_PropsOf_sDME_xSORT_xSORT[] = {NULL, NULL, "_M_PropsOf_sDME_xSORT",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDME_xSORT_xSORT = { "PropsOf$DME_SORT_SORT" , sortCon_M_PropsOf_sDME_xSORT_xSORT, sortNam_M_PropsOf_sDME_xSORT_xSORT, sortInt_M_PropsOf_sDME_xSORT_xSORT, NULL};

/* SORT PropsOf$DME_STRING_SORT CONSTANTS. */
char *name_M_PropsOf_sDME_xSTRING =  "PropsOf$DME_STRING" ;
char *nameFun_M_PropsOf_sDME_xSTRING(Term term) { return name_M_PropsOf_sDME_xSTRING; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xSTRING = {&sort_M_PropsOf_sDME_xSTRING_xSORT, Data_M_PropsOf_sDME_xSTRING, 0, sizeof(STRUCT_Con_M_PropsOf_sDME_xSTRING), noBinderOffsets, &nameFun_M_PropsOf_sDME_xSTRING, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDME_xSTRING_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDME_xSTRING,  NULL};
char *sortNam_M_PropsOf_sDME_xSTRING_xSORT[] = {NULL, NULL,  "PropsOf$DME_STRING" ,  NULL};
char *sortInt_M_PropsOf_sDME_xSTRING_xSORT[] = {NULL, NULL, "_M_PropsOf_sDME_xSTRING",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDME_xSTRING_xSORT = { "PropsOf$DME_STRING_SORT" , sortCon_M_PropsOf_sDME_xSTRING_xSORT, sortNam_M_PropsOf_sDME_xSTRING_xSORT, sortInt_M_PropsOf_sDME_xSTRING_xSORT, NULL};

/* SORT PropsOf$DME_TOKEN_SORT CONSTANTS. */
char *name_M_PropsOf_sDME_xTOKEN =  "PropsOf$DME_TOKEN" ;
char *nameFun_M_PropsOf_sDME_xTOKEN(Term term) { return name_M_PropsOf_sDME_xTOKEN; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xTOKEN = {&sort_M_PropsOf_sDME_xTOKEN_xSORT, Data_M_PropsOf_sDME_xTOKEN, 0, sizeof(STRUCT_Con_M_PropsOf_sDME_xTOKEN), noBinderOffsets, &nameFun_M_PropsOf_sDME_xTOKEN, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDME_xTOKEN_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDME_xTOKEN,  NULL};
char *sortNam_M_PropsOf_sDME_xTOKEN_xSORT[] = {NULL, NULL,  "PropsOf$DME_TOKEN" ,  NULL};
char *sortInt_M_PropsOf_sDME_xTOKEN_xSORT[] = {NULL, NULL, "_M_PropsOf_sDME_xTOKEN",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDME_xTOKEN_xSORT = { "PropsOf$DME_TOKEN_SORT" , sortCon_M_PropsOf_sDME_xTOKEN_xSORT, sortNam_M_PropsOf_sDME_xTOKEN_xSORT, sortInt_M_PropsOf_sDME_xTOKEN_xSORT, NULL};

/* SORT PropsOf$DM_SORT CONSTANTS. */
char *name_M_PropsOf_sDM =  "PropsOf$DM" ;
char *nameFun_M_PropsOf_sDM(Term term) { return name_M_PropsOf_sDM; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sDM = {&sort_M_PropsOf_sDM_xSORT, Data_M_PropsOf_sDM, 0, sizeof(STRUCT_Con_M_PropsOf_sDM), noBinderOffsets, &nameFun_M_PropsOf_sDM, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sDM_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sDM,  NULL};
char *sortNam_M_PropsOf_sDM_xSORT[] = {NULL, NULL,  "PropsOf$DM" ,  NULL};
char *sortInt_M_PropsOf_sDM_xSORT[] = {NULL, NULL, "_M_PropsOf_sDM",  NULL};
struct _SortDescriptor sort_M_PropsOf_sDM_xSORT = { "PropsOf$DM_SORT" , sortCon_M_PropsOf_sDM_xSORT, sortNam_M_PropsOf_sDM_xSORT, sortInt_M_PropsOf_sDM_xSORT, NULL};

/* SORT PropsOf$D_ABSTRACTION_SORT CONSTANTS. */
char *name_M_PropsOf_sD_xABSTRACTION =  "PropsOf$D_ABSTRACTION" ;
char *nameFun_M_PropsOf_sD_xABSTRACTION(Term term) { return name_M_PropsOf_sD_xABSTRACTION; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sD_xABSTRACTION = {&sort_M_PropsOf_sD_xABSTRACTION_xSORT, Data_M_PropsOf_sD_xABSTRACTION, 0, sizeof(STRUCT_Con_M_PropsOf_sD_xABSTRACTION), noBinderOffsets, &nameFun_M_PropsOf_sD_xABSTRACTION, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sD_xABSTRACTION_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sD_xABSTRACTION,  NULL};
char *sortNam_M_PropsOf_sD_xABSTRACTION_xSORT[] = {NULL, NULL,  "PropsOf$D_ABSTRACTION" ,  NULL};
char *sortInt_M_PropsOf_sD_xABSTRACTION_xSORT[] = {NULL, NULL, "_M_PropsOf_sD_xABSTRACTION",  NULL};
struct _SortDescriptor sort_M_PropsOf_sD_xABSTRACTION_xSORT = { "PropsOf$D_ABSTRACTION_SORT" , sortCon_M_PropsOf_sD_xABSTRACTION_xSORT, sortNam_M_PropsOf_sD_xABSTRACTION_xSORT, sortInt_M_PropsOf_sD_xABSTRACTION_xSORT, NULL};

/* SORT PropsOf$D_FORM_SORT CONSTANTS. */
char *name_M_PropsOf_sD_xFORM =  "PropsOf$D_FORM" ;
char *nameFun_M_PropsOf_sD_xFORM(Term term) { return name_M_PropsOf_sD_xFORM; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sD_xFORM = {&sort_M_PropsOf_sD_xFORM_xSORT, Data_M_PropsOf_sD_xFORM, 0, sizeof(STRUCT_Con_M_PropsOf_sD_xFORM), noBinderOffsets, &nameFun_M_PropsOf_sD_xFORM, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sD_xFORM_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sD_xFORM,  NULL};
char *sortNam_M_PropsOf_sD_xFORM_xSORT[] = {NULL, NULL,  "PropsOf$D_FORM" ,  NULL};
char *sortInt_M_PropsOf_sD_xFORM_xSORT[] = {NULL, NULL, "_M_PropsOf_sD_xFORM",  NULL};
struct _SortDescriptor sort_M_PropsOf_sD_xFORM_xSORT = { "PropsOf$D_FORM_SORT" , sortCon_M_PropsOf_sD_xFORM_xSORT, sortNam_M_PropsOf_sD_xFORM_xSORT, sortInt_M_PropsOf_sD_xFORM_xSORT, NULL};

/* SORT PropsOf$D_NONE_SORT CONSTANTS. */
char *name_M_PropsOf_sD_xNONE =  "PropsOf$D_NONE" ;
char *nameFun_M_PropsOf_sD_xNONE(Term term) { return name_M_PropsOf_sD_xNONE; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sD_xNONE = {&sort_M_PropsOf_sD_xNONE_xSORT, Data_M_PropsOf_sD_xNONE, 0, sizeof(STRUCT_Con_M_PropsOf_sD_xNONE), noBinderOffsets, &nameFun_M_PropsOf_sD_xNONE, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sD_xNONE_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sD_xNONE,  NULL};
char *sortNam_M_PropsOf_sD_xNONE_xSORT[] = {NULL, NULL,  "PropsOf$D_NONE" ,  NULL};
char *sortInt_M_PropsOf_sD_xNONE_xSORT[] = {NULL, NULL, "_M_PropsOf_sD_xNONE",  NULL};
struct _SortDescriptor sort_M_PropsOf_sD_xNONE_xSORT = { "PropsOf$D_NONE_SORT" , sortCon_M_PropsOf_sD_xNONE_xSORT, sortNam_M_PropsOf_sD_xNONE_xSORT, sortInt_M_PropsOf_sD_xNONE_xSORT, NULL};

/* SORT PropsOf$D_RULE_SORT CONSTANTS. */
char *name_M_PropsOf_sD_xRULE =  "PropsOf$D_RULE" ;
char *nameFun_M_PropsOf_sD_xRULE(Term term) { return name_M_PropsOf_sD_xRULE; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sD_xRULE = {&sort_M_PropsOf_sD_xRULE_xSORT, Data_M_PropsOf_sD_xRULE, 0, sizeof(STRUCT_Con_M_PropsOf_sD_xRULE), noBinderOffsets, &nameFun_M_PropsOf_sD_xRULE, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sD_xRULE_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sD_xRULE,  NULL};
char *sortNam_M_PropsOf_sD_xRULE_xSORT[] = {NULL, NULL,  "PropsOf$D_RULE" ,  NULL};
char *sortInt_M_PropsOf_sD_xRULE_xSORT[] = {NULL, NULL, "_M_PropsOf_sD_xRULE",  NULL};
struct _SortDescriptor sort_M_PropsOf_sD_xRULE_xSORT = { "PropsOf$D_RULE_SORT" , sortCon_M_PropsOf_sD_xRULE_xSORT, sortNam_M_PropsOf_sD_xRULE_xSORT, sortInt_M_PropsOf_sD_xRULE_xSORT, NULL};

/* SORT PropsOf$D_SYNTHESIZES_SORT CONSTANTS. */
char *name_M_PropsOf_sD_xSYNTHESIZES =  "PropsOf$D_SYNTHESIZES" ;
char *nameFun_M_PropsOf_sD_xSYNTHESIZES(Term term) { return name_M_PropsOf_sD_xSYNTHESIZES; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sD_xSYNTHESIZES = {&sort_M_PropsOf_sD_xSYNTHESIZES_xSORT, Data_M_PropsOf_sD_xSYNTHESIZES, 0, sizeof(STRUCT_Con_M_PropsOf_sD_xSYNTHESIZES), noBinderOffsets, &nameFun_M_PropsOf_sD_xSYNTHESIZES, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sD_xSYNTHESIZES_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sD_xSYNTHESIZES,  NULL};
char *sortNam_M_PropsOf_sD_xSYNTHESIZES_xSORT[] = {NULL, NULL,  "PropsOf$D_SYNTHESIZES" ,  NULL};
char *sortInt_M_PropsOf_sD_xSYNTHESIZES_xSORT[] = {NULL, NULL, "_M_PropsOf_sD_xSYNTHESIZES",  NULL};
struct _SortDescriptor sort_M_PropsOf_sD_xSYNTHESIZES_xSORT = { "PropsOf$D_SYNTHESIZES_SORT" , sortCon_M_PropsOf_sD_xSYNTHESIZES_xSORT, sortNam_M_PropsOf_sD_xSYNTHESIZES_xSORT, sortInt_M_PropsOf_sD_xSYNTHESIZES_xSORT, NULL};

/* SORT PropsOf$Hx_AttributeCatchAll_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttributeCatchAll =  "PropsOf$Hx_AttributeCatchAll" ;
char *nameFun_M_PropsOf_sHx_xAttributeCatchAll(Term term) { return name_M_PropsOf_sHx_xAttributeCatchAll; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeCatchAll = {&sort_M_PropsOf_sHx_xAttributeCatchAll_xSORT, Data_M_PropsOf_sHx_xAttributeCatchAll, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttributeCatchAll), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttributeCatchAll, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttributeCatchAll_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttributeCatchAll,  NULL};
char *sortNam_M_PropsOf_sHx_xAttributeCatchAll_xSORT[] = {NULL, NULL,  "PropsOf$Hx_AttributeCatchAll" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttributeCatchAll_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttributeCatchAll",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeCatchAll_xSORT = { "PropsOf$Hx_AttributeCatchAll_SORT" , sortCon_M_PropsOf_sHx_xAttributeCatchAll_xSORT, sortNam_M_PropsOf_sHx_xAttributeCatchAll_xSORT, sortInt_M_PropsOf_sHx_xAttributeCatchAll_xSORT, NULL};

/* SORT PropsOf$Hx_AttributeFormMap_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttributeFormMap =  "PropsOf$Hx_AttributeFormMap" ;
char *nameFun_M_PropsOf_sHx_xAttributeFormMap(Term term) { return name_M_PropsOf_sHx_xAttributeFormMap; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeFormMap = {&sort_M_PropsOf_sHx_xAttributeFormMap_xSORT, Data_M_PropsOf_sHx_xAttributeFormMap, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttributeFormMap), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttributeFormMap, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttributeFormMap_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttributeFormMap,  NULL};
char *sortNam_M_PropsOf_sHx_xAttributeFormMap_xSORT[] = {NULL, NULL,  "PropsOf$Hx_AttributeFormMap" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttributeFormMap_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttributeFormMap",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeFormMap_xSORT = { "PropsOf$Hx_AttributeFormMap_SORT" , sortCon_M_PropsOf_sHx_xAttributeFormMap_xSORT, sortNam_M_PropsOf_sHx_xAttributeFormMap_xSORT, sortInt_M_PropsOf_sHx_xAttributeFormMap_xSORT, NULL};

/* SORT PropsOf$Hx_AttributeFormSet_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttributeFormSet =  "PropsOf$Hx_AttributeFormSet" ;
char *nameFun_M_PropsOf_sHx_xAttributeFormSet(Term term) { return name_M_PropsOf_sHx_xAttributeFormSet; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeFormSet = {&sort_M_PropsOf_sHx_xAttributeFormSet_xSORT, Data_M_PropsOf_sHx_xAttributeFormSet, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttributeFormSet), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttributeFormSet, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttributeFormSet_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttributeFormSet,  NULL};
char *sortNam_M_PropsOf_sHx_xAttributeFormSet_xSORT[] = {NULL, NULL,  "PropsOf$Hx_AttributeFormSet" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttributeFormSet_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttributeFormSet",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeFormSet_xSORT = { "PropsOf$Hx_AttributeFormSet_SORT" , sortCon_M_PropsOf_sHx_xAttributeFormSet_xSORT, sortNam_M_PropsOf_sHx_xAttributeFormSet_xSORT, sortInt_M_PropsOf_sHx_xAttributeFormSet_xSORT, NULL};

/* SORT PropsOf$Hx_AttributeFormSimple_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttributeFormSimple =  "PropsOf$Hx_AttributeFormSimple" ;
char *nameFun_M_PropsOf_sHx_xAttributeFormSimple(Term term) { return name_M_PropsOf_sHx_xAttributeFormSimple; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeFormSimple = {&sort_M_PropsOf_sHx_xAttributeFormSimple_xSORT, Data_M_PropsOf_sHx_xAttributeFormSimple, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttributeFormSimple), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttributeFormSimple, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttributeFormSimple_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttributeFormSimple,  NULL};
char *sortNam_M_PropsOf_sHx_xAttributeFormSimple_xSORT[] = {NULL, NULL,  "PropsOf$Hx_AttributeFormSimple" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttributeFormSimple_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttributeFormSimple",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeFormSimple_xSORT = { "PropsOf$Hx_AttributeFormSimple_SORT" , sortCon_M_PropsOf_sHx_xAttributeFormSimple_xSORT, sortNam_M_PropsOf_sHx_xAttributeFormSimple_xSORT, sortInt_M_PropsOf_sHx_xAttributeFormSimple_xSORT, NULL};

/* SORT PropsOf$Hx_AttributeKeyValue_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttributeKeyValue =  "PropsOf$Hx_AttributeKeyValue" ;
char *nameFun_M_PropsOf_sHx_xAttributeKeyValue(Term term) { return name_M_PropsOf_sHx_xAttributeKeyValue; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeKeyValue = {&sort_M_PropsOf_sHx_xAttributeKeyValue_xSORT, Data_M_PropsOf_sHx_xAttributeKeyValue, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttributeKeyValue), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttributeKeyValue, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttributeKeyValue_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttributeKeyValue,  NULL};
char *sortNam_M_PropsOf_sHx_xAttributeKeyValue_xSORT[] = {NULL, NULL,  "PropsOf$Hx_AttributeKeyValue" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttributeKeyValue_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttributeKeyValue",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeKeyValue_xSORT = { "PropsOf$Hx_AttributeKeyValue_SORT" , sortCon_M_PropsOf_sHx_xAttributeKeyValue_xSORT, sortNam_M_PropsOf_sHx_xAttributeKeyValue_xSORT, sortInt_M_PropsOf_sHx_xAttributeKeyValue_xSORT, NULL};

/* SORT PropsOf$Hx_AttributeKey_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttributeKey =  "PropsOf$Hx_AttributeKey" ;
char *nameFun_M_PropsOf_sHx_xAttributeKey(Term term) { return name_M_PropsOf_sHx_xAttributeKey; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeKey = {&sort_M_PropsOf_sHx_xAttributeKey_xSORT, Data_M_PropsOf_sHx_xAttributeKey, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttributeKey), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttributeKey, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttributeKey_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttributeKey,  NULL};
char *sortNam_M_PropsOf_sHx_xAttributeKey_xSORT[] = {NULL, NULL,  "PropsOf$Hx_AttributeKey" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttributeKey_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttributeKey",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeKey_xSORT = { "PropsOf$Hx_AttributeKey_SORT" , sortCon_M_PropsOf_sHx_xAttributeKey_xSORT, sortNam_M_PropsOf_sHx_xAttributeKey_xSORT, sortInt_M_PropsOf_sHx_xAttributeKey_xSORT, NULL};

/* SORT PropsOf$Hx_AttributeKindDown_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttributeKindDown =  "PropsOf$Hx_AttributeKindDown" ;
char *nameFun_M_PropsOf_sHx_xAttributeKindDown(Term term) { return name_M_PropsOf_sHx_xAttributeKindDown; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeKindDown = {&sort_M_PropsOf_sHx_xAttributeKindDown_xSORT, Data_M_PropsOf_sHx_xAttributeKindDown, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttributeKindDown), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttributeKindDown, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttributeKindDown_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttributeKindDown,  NULL};
char *sortNam_M_PropsOf_sHx_xAttributeKindDown_xSORT[] = {NULL, NULL,  "PropsOf$Hx_AttributeKindDown" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttributeKindDown_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttributeKindDown",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeKindDown_xSORT = { "PropsOf$Hx_AttributeKindDown_SORT" , sortCon_M_PropsOf_sHx_xAttributeKindDown_xSORT, sortNam_M_PropsOf_sHx_xAttributeKindDown_xSORT, sortInt_M_PropsOf_sHx_xAttributeKindDown_xSORT, NULL};

/* SORT PropsOf$Hx_AttributeKindUp_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttributeKindUp =  "PropsOf$Hx_AttributeKindUp" ;
char *nameFun_M_PropsOf_sHx_xAttributeKindUp(Term term) { return name_M_PropsOf_sHx_xAttributeKindUp; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeKindUp = {&sort_M_PropsOf_sHx_xAttributeKindUp_xSORT, Data_M_PropsOf_sHx_xAttributeKindUp, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttributeKindUp), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttributeKindUp, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttributeKindUp_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttributeKindUp,  NULL};
char *sortNam_M_PropsOf_sHx_xAttributeKindUp_xSORT[] = {NULL, NULL,  "PropsOf$Hx_AttributeKindUp" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttributeKindUp_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttributeKindUp",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeKindUp_xSORT = { "PropsOf$Hx_AttributeKindUp_SORT" , sortCon_M_PropsOf_sHx_xAttributeKindUp_xSORT, sortNam_M_PropsOf_sHx_xAttributeKindUp_xSORT, sortInt_M_PropsOf_sHx_xAttributeKindUp_xSORT, NULL};

/* SORT PropsOf$Hx_AttributeNotKey_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttributeNotKey =  "PropsOf$Hx_AttributeNotKey" ;
char *nameFun_M_PropsOf_sHx_xAttributeNotKey(Term term) { return name_M_PropsOf_sHx_xAttributeNotKey; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeNotKey = {&sort_M_PropsOf_sHx_xAttributeNotKey_xSORT, Data_M_PropsOf_sHx_xAttributeNotKey, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttributeNotKey), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttributeNotKey, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttributeNotKey_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttributeNotKey,  NULL};
char *sortNam_M_PropsOf_sHx_xAttributeNotKey_xSORT[] = {NULL, NULL,  "PropsOf$Hx_AttributeNotKey" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttributeNotKey_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttributeNotKey",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeNotKey_xSORT = { "PropsOf$Hx_AttributeNotKey_SORT" , sortCon_M_PropsOf_sHx_xAttributeNotKey_xSORT, sortNam_M_PropsOf_sHx_xAttributeNotKey_xSORT, sortInt_M_PropsOf_sHx_xAttributeNotKey_xSORT, NULL};

/* SORT PropsOf$Hx_AttributeValue_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttributeValue =  "PropsOf$Hx_AttributeValue" ;
char *nameFun_M_PropsOf_sHx_xAttributeValue(Term term) { return name_M_PropsOf_sHx_xAttributeValue; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeValue = {&sort_M_PropsOf_sHx_xAttributeValue_xSORT, Data_M_PropsOf_sHx_xAttributeValue, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttributeValue), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttributeValue, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttributeValue_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttributeValue,  NULL};
char *sortNam_M_PropsOf_sHx_xAttributeValue_xSORT[] = {NULL, NULL,  "PropsOf$Hx_AttributeValue" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttributeValue_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttributeValue",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeValue_xSORT = { "PropsOf$Hx_AttributeValue_SORT" , sortCon_M_PropsOf_sHx_xAttributeValue_xSORT, sortNam_M_PropsOf_sHx_xAttributeValue_xSORT, sortInt_M_PropsOf_sHx_xAttributeValue_xSORT, NULL};

/* SORT PropsOf$Hx_Attribute_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xAttribute =  "PropsOf$Hx_Attribute" ;
char *nameFun_M_PropsOf_sHx_xAttribute(Term term) { return name_M_PropsOf_sHx_xAttribute; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttribute = {&sort_M_PropsOf_sHx_xAttribute_xSORT, Data_M_PropsOf_sHx_xAttribute, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xAttribute), noBinderOffsets, &nameFun_M_PropsOf_sHx_xAttribute, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xAttribute_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xAttribute,  NULL};
char *sortNam_M_PropsOf_sHx_xAttribute_xSORT[] = {NULL, NULL,  "PropsOf$Hx_Attribute" ,  NULL};
char *sortInt_M_PropsOf_sHx_xAttribute_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xAttribute",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xAttribute_xSORT = { "PropsOf$Hx_Attribute_SORT" , sortCon_M_PropsOf_sHx_xAttribute_xSORT, sortNam_M_PropsOf_sHx_xAttribute_xSORT, sortInt_M_PropsOf_sHx_xAttribute_xSORT, NULL};

/* SORT PropsOf$Hx_CatchAllAttributes_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xCatchAllAttributes =  "PropsOf$Hx_CatchAllAttributes" ;
char *nameFun_M_PropsOf_sHx_xCatchAllAttributes(Term term) { return name_M_PropsOf_sHx_xCatchAllAttributes; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xCatchAllAttributes = {&sort_M_PropsOf_sHx_xCatchAllAttributes_xSORT, Data_M_PropsOf_sHx_xCatchAllAttributes, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xCatchAllAttributes), noBinderOffsets, &nameFun_M_PropsOf_sHx_xCatchAllAttributes, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xCatchAllAttributes_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xCatchAllAttributes,  NULL};
char *sortNam_M_PropsOf_sHx_xCatchAllAttributes_xSORT[] = {NULL, NULL,  "PropsOf$Hx_CatchAllAttributes" ,  NULL};
char *sortInt_M_PropsOf_sHx_xCatchAllAttributes_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xCatchAllAttributes",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xCatchAllAttributes_xSORT = { "PropsOf$Hx_CatchAllAttributes_SORT" , sortCon_M_PropsOf_sHx_xCatchAllAttributes_xSORT, sortNam_M_PropsOf_sHx_xCatchAllAttributes_xSORT, sortInt_M_PropsOf_sHx_xCatchAllAttributes_xSORT, NULL};

/* SORT PropsOf$Hx_ConstructionSorted_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xConstructionSorted =  "PropsOf$Hx_ConstructionSorted" ;
char *nameFun_M_PropsOf_sHx_xConstructionSorted(Term term) { return name_M_PropsOf_sHx_xConstructionSorted; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xConstructionSorted = {&sort_M_PropsOf_sHx_xConstructionSorted_xSORT, Data_M_PropsOf_sHx_xConstructionSorted, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xConstructionSorted), noBinderOffsets, &nameFun_M_PropsOf_sHx_xConstructionSorted, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xConstructionSorted_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xConstructionSorted,  NULL};
char *sortNam_M_PropsOf_sHx_xConstructionSorted_xSORT[] = {NULL, NULL,  "PropsOf$Hx_ConstructionSorted" ,  NULL};
char *sortInt_M_PropsOf_sHx_xConstructionSorted_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xConstructionSorted",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xConstructionSorted_xSORT = { "PropsOf$Hx_ConstructionSorted_SORT" , sortCon_M_PropsOf_sHx_xConstructionSorted_xSORT, sortNam_M_PropsOf_sHx_xConstructionSorted_xSORT, sortInt_M_PropsOf_sHx_xConstructionSorted_xSORT, NULL};

/* SORT PropsOf$Hx_Construction_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xConstruction =  "PropsOf$Hx_Construction" ;
char *nameFun_M_PropsOf_sHx_xConstruction(Term term) { return name_M_PropsOf_sHx_xConstruction; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xConstruction = {&sort_M_PropsOf_sHx_xConstruction_xSORT, Data_M_PropsOf_sHx_xConstruction, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xConstruction), noBinderOffsets, &nameFun_M_PropsOf_sHx_xConstruction, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xConstruction_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xConstruction,  NULL};
char *sortNam_M_PropsOf_sHx_xConstruction_xSORT[] = {NULL, NULL,  "PropsOf$Hx_Construction" ,  NULL};
char *sortInt_M_PropsOf_sHx_xConstruction_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xConstruction",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xConstruction_xSORT = { "PropsOf$Hx_Construction_SORT" , sortCon_M_PropsOf_sHx_xConstruction_xSORT, sortNam_M_PropsOf_sHx_xConstruction_xSORT, sortInt_M_PropsOf_sHx_xConstruction_xSORT, NULL};

/* SORT PropsOf$Hx_FormConstruction_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xFormConstruction =  "PropsOf$Hx_FormConstruction" ;
char *nameFun_M_PropsOf_sHx_xFormConstruction(Term term) { return name_M_PropsOf_sHx_xFormConstruction; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xFormConstruction = {&sort_M_PropsOf_sHx_xFormConstruction_xSORT, Data_M_PropsOf_sHx_xFormConstruction, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xFormConstruction), noBinderOffsets, &nameFun_M_PropsOf_sHx_xFormConstruction, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xFormConstruction_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xFormConstruction,  NULL};
char *sortNam_M_PropsOf_sHx_xFormConstruction_xSORT[] = {NULL, NULL,  "PropsOf$Hx_FormConstruction" ,  NULL};
char *sortInt_M_PropsOf_sHx_xFormConstruction_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xFormConstruction",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xFormConstruction_xSORT = { "PropsOf$Hx_FormConstruction_SORT" , sortCon_M_PropsOf_sHx_xFormConstruction_xSORT, sortNam_M_PropsOf_sHx_xFormConstruction_xSORT, sortInt_M_PropsOf_sHx_xFormConstruction_xSORT, NULL};

/* SORT PropsOf$Hx_FormParsed_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xFormParsed =  "PropsOf$Hx_FormParsed" ;
char *nameFun_M_PropsOf_sHx_xFormParsed(Term term) { return name_M_PropsOf_sHx_xFormParsed; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xFormParsed = {&sort_M_PropsOf_sHx_xFormParsed_xSORT, Data_M_PropsOf_sHx_xFormParsed, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xFormParsed), noBinderOffsets, &nameFun_M_PropsOf_sHx_xFormParsed, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xFormParsed_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xFormParsed,  NULL};
char *sortNam_M_PropsOf_sHx_xFormParsed_xSORT[] = {NULL, NULL,  "PropsOf$Hx_FormParsed" ,  NULL};
char *sortInt_M_PropsOf_sHx_xFormParsed_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xFormParsed",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xFormParsed_xSORT = { "PropsOf$Hx_FormParsed_SORT" , sortCon_M_PropsOf_sHx_xFormParsed_xSORT, sortNam_M_PropsOf_sHx_xFormParsed_xSORT, sortInt_M_PropsOf_sHx_xFormParsed_xSORT, NULL};

/* SORT PropsOf$Hx_LiteralSorted_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xLiteralSorted =  "PropsOf$Hx_LiteralSorted" ;
char *nameFun_M_PropsOf_sHx_xLiteralSorted(Term term) { return name_M_PropsOf_sHx_xLiteralSorted; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xLiteralSorted = {&sort_M_PropsOf_sHx_xLiteralSorted_xSORT, Data_M_PropsOf_sHx_xLiteralSorted, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xLiteralSorted), noBinderOffsets, &nameFun_M_PropsOf_sHx_xLiteralSorted, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xLiteralSorted_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xLiteralSorted,  NULL};
char *sortNam_M_PropsOf_sHx_xLiteralSorted_xSORT[] = {NULL, NULL,  "PropsOf$Hx_LiteralSorted" ,  NULL};
char *sortInt_M_PropsOf_sHx_xLiteralSorted_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xLiteralSorted",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xLiteralSorted_xSORT = { "PropsOf$Hx_LiteralSorted_SORT" , sortCon_M_PropsOf_sHx_xLiteralSorted_xSORT, sortNam_M_PropsOf_sHx_xLiteralSorted_xSORT, sortInt_M_PropsOf_sHx_xLiteralSorted_xSORT, NULL};

/* SORT PropsOf$Hx_Literal_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xLiteral =  "PropsOf$Hx_Literal" ;
char *nameFun_M_PropsOf_sHx_xLiteral(Term term) { return name_M_PropsOf_sHx_xLiteral; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xLiteral = {&sort_M_PropsOf_sHx_xLiteral_xSORT, Data_M_PropsOf_sHx_xLiteral, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xLiteral), noBinderOffsets, &nameFun_M_PropsOf_sHx_xLiteral, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xLiteral_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xLiteral,  NULL};
char *sortNam_M_PropsOf_sHx_xLiteral_xSORT[] = {NULL, NULL,  "PropsOf$Hx_Literal" ,  NULL};
char *sortInt_M_PropsOf_sHx_xLiteral_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xLiteral",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xLiteral_xSORT = { "PropsOf$Hx_Literal_SORT" , sortCon_M_PropsOf_sHx_xLiteral_xSORT, sortNam_M_PropsOf_sHx_xLiteral_xSORT, sortInt_M_PropsOf_sHx_xLiteral_xSORT, NULL};

/* SORT PropsOf$Hx_MetaApplicationSorted_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xMetaApplicationSorted =  "PropsOf$Hx_MetaApplicationSorted" ;
char *nameFun_M_PropsOf_sHx_xMetaApplicationSorted(Term term) { return name_M_PropsOf_sHx_xMetaApplicationSorted; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xMetaApplicationSorted = {&sort_M_PropsOf_sHx_xMetaApplicationSorted_xSORT, Data_M_PropsOf_sHx_xMetaApplicationSorted, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xMetaApplicationSorted), noBinderOffsets, &nameFun_M_PropsOf_sHx_xMetaApplicationSorted, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xMetaApplicationSorted_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xMetaApplicationSorted,  NULL};
char *sortNam_M_PropsOf_sHx_xMetaApplicationSorted_xSORT[] = {NULL, NULL,  "PropsOf$Hx_MetaApplicationSorted" ,  NULL};
char *sortInt_M_PropsOf_sHx_xMetaApplicationSorted_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xMetaApplicationSorted",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xMetaApplicationSorted_xSORT = { "PropsOf$Hx_MetaApplicationSorted_SORT" , sortCon_M_PropsOf_sHx_xMetaApplicationSorted_xSORT, sortNam_M_PropsOf_sHx_xMetaApplicationSorted_xSORT, sortInt_M_PropsOf_sHx_xMetaApplicationSorted_xSORT, NULL};

/* SORT PropsOf$Hx_MetaApplication_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xMetaApplication =  "PropsOf$Hx_MetaApplication" ;
char *nameFun_M_PropsOf_sHx_xMetaApplication(Term term) { return name_M_PropsOf_sHx_xMetaApplication; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xMetaApplication = {&sort_M_PropsOf_sHx_xMetaApplication_xSORT, Data_M_PropsOf_sHx_xMetaApplication, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xMetaApplication), noBinderOffsets, &nameFun_M_PropsOf_sHx_xMetaApplication, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xMetaApplication_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xMetaApplication,  NULL};
char *sortNam_M_PropsOf_sHx_xMetaApplication_xSORT[] = {NULL, NULL,  "PropsOf$Hx_MetaApplication" ,  NULL};
char *sortInt_M_PropsOf_sHx_xMetaApplication_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xMetaApplication",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xMetaApplication_xSORT = { "PropsOf$Hx_MetaApplication_SORT" , sortCon_M_PropsOf_sHx_xMetaApplication_xSORT, sortNam_M_PropsOf_sHx_xMetaApplication_xSORT, sortInt_M_PropsOf_sHx_xMetaApplication_xSORT, NULL};

/* SORT PropsOf$Hx_NoAttributeForm_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xNoAttributeForm =  "PropsOf$Hx_NoAttributeForm" ;
char *nameFun_M_PropsOf_sHx_xNoAttributeForm(Term term) { return name_M_PropsOf_sHx_xNoAttributeForm; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xNoAttributeForm = {&sort_M_PropsOf_sHx_xNoAttributeForm_xSORT, Data_M_PropsOf_sHx_xNoAttributeForm, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xNoAttributeForm), noBinderOffsets, &nameFun_M_PropsOf_sHx_xNoAttributeForm, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xNoAttributeForm_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xNoAttributeForm,  NULL};
char *sortNam_M_PropsOf_sHx_xNoAttributeForm_xSORT[] = {NULL, NULL,  "PropsOf$Hx_NoAttributeForm" ,  NULL};
char *sortInt_M_PropsOf_sHx_xNoAttributeForm_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xNoAttributeForm",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xNoAttributeForm_xSORT = { "PropsOf$Hx_NoAttributeForm_SORT" , sortCon_M_PropsOf_sHx_xNoAttributeForm_xSORT, sortNam_M_PropsOf_sHx_xNoAttributeForm_xSORT, sortInt_M_PropsOf_sHx_xNoAttributeForm_xSORT, NULL};

/* SORT PropsOf$Hx_Normal_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xNormal =  "PropsOf$Hx_Normal" ;
char *nameFun_M_PropsOf_sHx_xNormal(Term term) { return name_M_PropsOf_sHx_xNormal; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xNormal = {&sort_M_PropsOf_sHx_xNormal_xSORT, Data_M_PropsOf_sHx_xNormal, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xNormal), noBinderOffsets, &nameFun_M_PropsOf_sHx_xNormal, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xNormal_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xNormal,  NULL};
char *sortNam_M_PropsOf_sHx_xNormal_xSORT[] = {NULL, NULL,  "PropsOf$Hx_Normal" ,  NULL};
char *sortInt_M_PropsOf_sHx_xNormal_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xNormal",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xNormal_xSORT = { "PropsOf$Hx_Normal_SORT" , sortCon_M_PropsOf_sHx_xNormal_xSORT, sortNam_M_PropsOf_sHx_xNormal_xSORT, sortInt_M_PropsOf_sHx_xNormal_xSORT, NULL};

/* SORT PropsOf$Hx_NullTerm_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xNullTerm =  "PropsOf$Hx_NullTerm" ;
char *nameFun_M_PropsOf_sHx_xNullTerm(Term term) { return name_M_PropsOf_sHx_xNullTerm; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xNullTerm = {&sort_M_PropsOf_sHx_xNullTerm_xSORT, Data_M_PropsOf_sHx_xNullTerm, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xNullTerm), noBinderOffsets, &nameFun_M_PropsOf_sHx_xNullTerm, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xNullTerm_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xNullTerm,  NULL};
char *sortNam_M_PropsOf_sHx_xNullTerm_xSORT[] = {NULL, NULL,  "PropsOf$Hx_NullTerm" ,  NULL};
char *sortInt_M_PropsOf_sHx_xNullTerm_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xNullTerm",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xNullTerm_xSORT = { "PropsOf$Hx_NullTerm_SORT" , sortCon_M_PropsOf_sHx_xNullTerm_xSORT, sortNam_M_PropsOf_sHx_xNullTerm_xSORT, sortInt_M_PropsOf_sHx_xNullTerm_xSORT, NULL};

/* SORT PropsOf$Hx_ParsedFormDone_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xParsedFormDone =  "PropsOf$Hx_ParsedFormDone" ;
char *nameFun_M_PropsOf_sHx_xParsedFormDone(Term term) { return name_M_PropsOf_sHx_xParsedFormDone; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xParsedFormDone = {&sort_M_PropsOf_sHx_xParsedFormDone_xSORT, Data_M_PropsOf_sHx_xParsedFormDone, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xParsedFormDone), noBinderOffsets, &nameFun_M_PropsOf_sHx_xParsedFormDone, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xParsedFormDone_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xParsedFormDone,  NULL};
char *sortNam_M_PropsOf_sHx_xParsedFormDone_xSORT[] = {NULL, NULL,  "PropsOf$Hx_ParsedFormDone" ,  NULL};
char *sortInt_M_PropsOf_sHx_xParsedFormDone_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xParsedFormDone",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xParsedFormDone_xSORT = { "PropsOf$Hx_ParsedFormDone_SORT" , sortCon_M_PropsOf_sHx_xParsedFormDone_xSORT, sortNam_M_PropsOf_sHx_xParsedFormDone_xSORT, sortInt_M_PropsOf_sHx_xParsedFormDone_xSORT, NULL};

/* SORT PropsOf$Hx_ParsedFormSpace_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xParsedFormSpace =  "PropsOf$Hx_ParsedFormSpace" ;
char *nameFun_M_PropsOf_sHx_xParsedFormSpace(Term term) { return name_M_PropsOf_sHx_xParsedFormSpace; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xParsedFormSpace = {&sort_M_PropsOf_sHx_xParsedFormSpace_xSORT, Data_M_PropsOf_sHx_xParsedFormSpace, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xParsedFormSpace), noBinderOffsets, &nameFun_M_PropsOf_sHx_xParsedFormSpace, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xParsedFormSpace_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xParsedFormSpace,  NULL};
char *sortNam_M_PropsOf_sHx_xParsedFormSpace_xSORT[] = {NULL, NULL,  "PropsOf$Hx_ParsedFormSpace" ,  NULL};
char *sortInt_M_PropsOf_sHx_xParsedFormSpace_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xParsedFormSpace",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xParsedFormSpace_xSORT = { "PropsOf$Hx_ParsedFormSpace_SORT" , sortCon_M_PropsOf_sHx_xParsedFormSpace_xSORT, sortNam_M_PropsOf_sHx_xParsedFormSpace_xSORT, sortInt_M_PropsOf_sHx_xParsedFormSpace_xSORT, NULL};

/* SORT PropsOf$Hx_ParsedFormTerm_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xParsedFormTerm =  "PropsOf$Hx_ParsedFormTerm" ;
char *nameFun_M_PropsOf_sHx_xParsedFormTerm(Term term) { return name_M_PropsOf_sHx_xParsedFormTerm; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xParsedFormTerm = {&sort_M_PropsOf_sHx_xParsedFormTerm_xSORT, Data_M_PropsOf_sHx_xParsedFormTerm, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xParsedFormTerm), noBinderOffsets, &nameFun_M_PropsOf_sHx_xParsedFormTerm, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xParsedFormTerm_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xParsedFormTerm,  NULL};
char *sortNam_M_PropsOf_sHx_xParsedFormTerm_xSORT[] = {NULL, NULL,  "PropsOf$Hx_ParsedFormTerm" ,  NULL};
char *sortInt_M_PropsOf_sHx_xParsedFormTerm_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xParsedFormTerm",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xParsedFormTerm_xSORT = { "PropsOf$Hx_ParsedFormTerm_SORT" , sortCon_M_PropsOf_sHx_xParsedFormTerm_xSORT, sortNam_M_PropsOf_sHx_xParsedFormTerm_xSORT, sortInt_M_PropsOf_sHx_xParsedFormTerm_xSORT, NULL};

/* SORT PropsOf$Hx_ParsedFormWord_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xParsedFormWord =  "PropsOf$Hx_ParsedFormWord" ;
char *nameFun_M_PropsOf_sHx_xParsedFormWord(Term term) { return name_M_PropsOf_sHx_xParsedFormWord; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xParsedFormWord = {&sort_M_PropsOf_sHx_xParsedFormWord_xSORT, Data_M_PropsOf_sHx_xParsedFormWord, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xParsedFormWord), noBinderOffsets, &nameFun_M_PropsOf_sHx_xParsedFormWord, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xParsedFormWord_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xParsedFormWord,  NULL};
char *sortNam_M_PropsOf_sHx_xParsedFormWord_xSORT[] = {NULL, NULL,  "PropsOf$Hx_ParsedFormWord" ,  NULL};
char *sortInt_M_PropsOf_sHx_xParsedFormWord_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xParsedFormWord",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xParsedFormWord_xSORT = { "PropsOf$Hx_ParsedFormWord_SORT" , sortCon_M_PropsOf_sHx_xParsedFormWord_xSORT, sortNam_M_PropsOf_sHx_xParsedFormWord_xSORT, sortInt_M_PropsOf_sHx_xParsedFormWord_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpAny_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpAny =  "PropsOf$Hx_RegExpAny" ;
char *nameFun_M_PropsOf_sHx_xRegExpAny(Term term) { return name_M_PropsOf_sHx_xRegExpAny; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpAny = {&sort_M_PropsOf_sHx_xRegExpAny_xSORT, Data_M_PropsOf_sHx_xRegExpAny, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpAny), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpAny, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpAny_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpAny,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpAny_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpAny" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpAny_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpAny",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpAny_xSORT = { "PropsOf$Hx_RegExpAny_SORT" , sortCon_M_PropsOf_sHx_xRegExpAny_xSORT, sortNam_M_PropsOf_sHx_xRegExpAny_xSORT, sortInt_M_PropsOf_sHx_xRegExpAny_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpClassChar_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpClassChar =  "PropsOf$Hx_RegExpClassChar" ;
char *nameFun_M_PropsOf_sHx_xRegExpClassChar(Term term) { return name_M_PropsOf_sHx_xRegExpClassChar; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpClassChar = {&sort_M_PropsOf_sHx_xRegExpClassChar_xSORT, Data_M_PropsOf_sHx_xRegExpClassChar, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpClassChar), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpClassChar, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpClassChar_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpClassChar,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpClassChar_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpClassChar" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpClassChar_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpClassChar",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpClassChar_xSORT = { "PropsOf$Hx_RegExpClassChar_SORT" , sortCon_M_PropsOf_sHx_xRegExpClassChar_xSORT, sortNam_M_PropsOf_sHx_xRegExpClassChar_xSORT, sortInt_M_PropsOf_sHx_xRegExpClassChar_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpClassDone_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpClassDone =  "PropsOf$Hx_RegExpClassDone" ;
char *nameFun_M_PropsOf_sHx_xRegExpClassDone(Term term) { return name_M_PropsOf_sHx_xRegExpClassDone; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpClassDone = {&sort_M_PropsOf_sHx_xRegExpClassDone_xSORT, Data_M_PropsOf_sHx_xRegExpClassDone, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpClassDone), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpClassDone, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpClassDone_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpClassDone,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpClassDone_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpClassDone" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpClassDone_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpClassDone",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpClassDone_xSORT = { "PropsOf$Hx_RegExpClassDone_SORT" , sortCon_M_PropsOf_sHx_xRegExpClassDone_xSORT, sortNam_M_PropsOf_sHx_xRegExpClassDone_xSORT, sortInt_M_PropsOf_sHx_xRegExpClassDone_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpClassNot_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpClassNot =  "PropsOf$Hx_RegExpClassNot" ;
char *nameFun_M_PropsOf_sHx_xRegExpClassNot(Term term) { return name_M_PropsOf_sHx_xRegExpClassNot; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpClassNot = {&sort_M_PropsOf_sHx_xRegExpClassNot_xSORT, Data_M_PropsOf_sHx_xRegExpClassNot, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpClassNot), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpClassNot, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpClassNot_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpClassNot,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpClassNot_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpClassNot" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpClassNot_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpClassNot",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpClassNot_xSORT = { "PropsOf$Hx_RegExpClassNot_SORT" , sortCon_M_PropsOf_sHx_xRegExpClassNot_xSORT, sortNam_M_PropsOf_sHx_xRegExpClassNot_xSORT, sortInt_M_PropsOf_sHx_xRegExpClassNot_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpClassRange_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpClassRange =  "PropsOf$Hx_RegExpClassRange" ;
char *nameFun_M_PropsOf_sHx_xRegExpClassRange(Term term) { return name_M_PropsOf_sHx_xRegExpClassRange; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpClassRange = {&sort_M_PropsOf_sHx_xRegExpClassRange_xSORT, Data_M_PropsOf_sHx_xRegExpClassRange, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpClassRange), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpClassRange, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpClassRange_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpClassRange,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpClassRange_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpClassRange" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpClassRange_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpClassRange",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpClassRange_xSORT = { "PropsOf$Hx_RegExpClassRange_SORT" , sortCon_M_PropsOf_sHx_xRegExpClassRange_xSORT, sortNam_M_PropsOf_sHx_xRegExpClassRange_xSORT, sortInt_M_PropsOf_sHx_xRegExpClassRange_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpClass_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpClass =  "PropsOf$Hx_RegExpClass" ;
char *nameFun_M_PropsOf_sHx_xRegExpClass(Term term) { return name_M_PropsOf_sHx_xRegExpClass; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpClass = {&sort_M_PropsOf_sHx_xRegExpClass_xSORT, Data_M_PropsOf_sHx_xRegExpClass, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpClass), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpClass, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpClass_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpClass,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpClass_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpClass" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpClass_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpClass",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpClass_xSORT = { "PropsOf$Hx_RegExpClass_SORT" , sortCon_M_PropsOf_sHx_xRegExpClass_xSORT, sortNam_M_PropsOf_sHx_xRegExpClass_xSORT, sortInt_M_PropsOf_sHx_xRegExpClass_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpConcat_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpConcat =  "PropsOf$Hx_RegExpConcat" ;
char *nameFun_M_PropsOf_sHx_xRegExpConcat(Term term) { return name_M_PropsOf_sHx_xRegExpConcat; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpConcat = {&sort_M_PropsOf_sHx_xRegExpConcat_xSORT, Data_M_PropsOf_sHx_xRegExpConcat, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpConcat), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpConcat, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpConcat_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpConcat,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpConcat_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpConcat" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpConcat_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpConcat",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpConcat_xSORT = { "PropsOf$Hx_RegExpConcat_SORT" , sortCon_M_PropsOf_sHx_xRegExpConcat_xSORT, sortNam_M_PropsOf_sHx_xRegExpConcat_xSORT, sortInt_M_PropsOf_sHx_xRegExpConcat_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpNest_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpNest =  "PropsOf$Hx_RegExpNest" ;
char *nameFun_M_PropsOf_sHx_xRegExpNest(Term term) { return name_M_PropsOf_sHx_xRegExpNest; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpNest = {&sort_M_PropsOf_sHx_xRegExpNest_xSORT, Data_M_PropsOf_sHx_xRegExpNest, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpNest), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpNest, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpNest_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpNest,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpNest_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpNest" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpNest_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpNest",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpNest_xSORT = { "PropsOf$Hx_RegExpNest_SORT" , sortCon_M_PropsOf_sHx_xRegExpNest_xSORT, sortNam_M_PropsOf_sHx_xRegExpNest_xSORT, sortInt_M_PropsOf_sHx_xRegExpNest_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpRef_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpRef =  "PropsOf$Hx_RegExpRef" ;
char *nameFun_M_PropsOf_sHx_xRegExpRef(Term term) { return name_M_PropsOf_sHx_xRegExpRef; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpRef = {&sort_M_PropsOf_sHx_xRegExpRef_xSORT, Data_M_PropsOf_sHx_xRegExpRef, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpRef), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpRef, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpRef_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpRef,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpRef_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpRef" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpRef_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpRef",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpRef_xSORT = { "PropsOf$Hx_RegExpRef_SORT" , sortCon_M_PropsOf_sHx_xRegExpRef_xSORT, sortNam_M_PropsOf_sHx_xRegExpRef_xSORT, sortInt_M_PropsOf_sHx_xRegExpRef_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpString_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpString =  "PropsOf$Hx_RegExpString" ;
char *nameFun_M_PropsOf_sHx_xRegExpString(Term term) { return name_M_PropsOf_sHx_xRegExpString; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpString = {&sort_M_PropsOf_sHx_xRegExpString_xSORT, Data_M_PropsOf_sHx_xRegExpString, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpString), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpString, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpString_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpString,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpString_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpString" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpString_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpString",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpString_xSORT = { "PropsOf$Hx_RegExpString_SORT" , sortCon_M_PropsOf_sHx_xRegExpString_xSORT, sortNam_M_PropsOf_sHx_xRegExpString_xSORT, sortInt_M_PropsOf_sHx_xRegExpString_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpUnit_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpUnit =  "PropsOf$Hx_RegExpUnit" ;
char *nameFun_M_PropsOf_sHx_xRegExpUnit(Term term) { return name_M_PropsOf_sHx_xRegExpUnit; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpUnit = {&sort_M_PropsOf_sHx_xRegExpUnit_xSORT, Data_M_PropsOf_sHx_xRegExpUnit, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpUnit), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpUnit, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpUnit_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpUnit,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpUnit_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpUnit" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpUnit_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpUnit",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpUnit_xSORT = { "PropsOf$Hx_RegExpUnit_SORT" , sortCon_M_PropsOf_sHx_xRegExpUnit_xSORT, sortNam_M_PropsOf_sHx_xRegExpUnit_xSORT, sortInt_M_PropsOf_sHx_xRegExpUnit_xSORT, NULL};

/* SORT PropsOf$Hx_RegExpWord_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRegExpWord =  "PropsOf$Hx_RegExpWord" ;
char *nameFun_M_PropsOf_sHx_xRegExpWord(Term term) { return name_M_PropsOf_sHx_xRegExpWord; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpWord = {&sort_M_PropsOf_sHx_xRegExpWord_xSORT, Data_M_PropsOf_sHx_xRegExpWord, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRegExpWord), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRegExpWord, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRegExpWord_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRegExpWord,  NULL};
char *sortNam_M_PropsOf_sHx_xRegExpWord_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RegExpWord" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRegExpWord_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRegExpWord",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpWord_xSORT = { "PropsOf$Hx_RegExpWord_SORT" , sortCon_M_PropsOf_sHx_xRegExpWord_xSORT, sortNam_M_PropsOf_sHx_xRegExpWord_xSORT, sortInt_M_PropsOf_sHx_xRegExpWord_xSORT, NULL};

/* SORT PropsOf$Hx_RepeatMaybeSome_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRepeatMaybeSome =  "PropsOf$Hx_RepeatMaybeSome" ;
char *nameFun_M_PropsOf_sHx_xRepeatMaybeSome(Term term) { return name_M_PropsOf_sHx_xRepeatMaybeSome; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRepeatMaybeSome = {&sort_M_PropsOf_sHx_xRepeatMaybeSome_xSORT, Data_M_PropsOf_sHx_xRepeatMaybeSome, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRepeatMaybeSome), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRepeatMaybeSome, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRepeatMaybeSome_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRepeatMaybeSome,  NULL};
char *sortNam_M_PropsOf_sHx_xRepeatMaybeSome_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RepeatMaybeSome" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRepeatMaybeSome_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRepeatMaybeSome",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRepeatMaybeSome_xSORT = { "PropsOf$Hx_RepeatMaybeSome_SORT" , sortCon_M_PropsOf_sHx_xRepeatMaybeSome_xSORT, sortNam_M_PropsOf_sHx_xRepeatMaybeSome_xSORT, sortInt_M_PropsOf_sHx_xRepeatMaybeSome_xSORT, NULL};

/* SORT PropsOf$Hx_RepeatMaybe_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRepeatMaybe =  "PropsOf$Hx_RepeatMaybe" ;
char *nameFun_M_PropsOf_sHx_xRepeatMaybe(Term term) { return name_M_PropsOf_sHx_xRepeatMaybe; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRepeatMaybe = {&sort_M_PropsOf_sHx_xRepeatMaybe_xSORT, Data_M_PropsOf_sHx_xRepeatMaybe, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRepeatMaybe), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRepeatMaybe, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRepeatMaybe_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRepeatMaybe,  NULL};
char *sortNam_M_PropsOf_sHx_xRepeatMaybe_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RepeatMaybe" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRepeatMaybe_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRepeatMaybe",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRepeatMaybe_xSORT = { "PropsOf$Hx_RepeatMaybe_SORT" , sortCon_M_PropsOf_sHx_xRepeatMaybe_xSORT, sortNam_M_PropsOf_sHx_xRepeatMaybe_xSORT, sortInt_M_PropsOf_sHx_xRepeatMaybe_xSORT, NULL};

/* SORT PropsOf$Hx_RepeatSingle_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRepeatSingle =  "PropsOf$Hx_RepeatSingle" ;
char *nameFun_M_PropsOf_sHx_xRepeatSingle(Term term) { return name_M_PropsOf_sHx_xRepeatSingle; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRepeatSingle = {&sort_M_PropsOf_sHx_xRepeatSingle_xSORT, Data_M_PropsOf_sHx_xRepeatSingle, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRepeatSingle), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRepeatSingle, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRepeatSingle_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRepeatSingle,  NULL};
char *sortNam_M_PropsOf_sHx_xRepeatSingle_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RepeatSingle" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRepeatSingle_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRepeatSingle",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRepeatSingle_xSORT = { "PropsOf$Hx_RepeatSingle_SORT" , sortCon_M_PropsOf_sHx_xRepeatSingle_xSORT, sortNam_M_PropsOf_sHx_xRepeatSingle_xSORT, sortInt_M_PropsOf_sHx_xRepeatSingle_xSORT, NULL};

/* SORT PropsOf$Hx_RepeatSomeSep_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRepeatSomeSep =  "PropsOf$Hx_RepeatSomeSep" ;
char *nameFun_M_PropsOf_sHx_xRepeatSomeSep(Term term) { return name_M_PropsOf_sHx_xRepeatSomeSep; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRepeatSomeSep = {&sort_M_PropsOf_sHx_xRepeatSomeSep_xSORT, Data_M_PropsOf_sHx_xRepeatSomeSep, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRepeatSomeSep), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRepeatSomeSep, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRepeatSomeSep_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRepeatSomeSep,  NULL};
char *sortNam_M_PropsOf_sHx_xRepeatSomeSep_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RepeatSomeSep" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRepeatSomeSep_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRepeatSomeSep",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRepeatSomeSep_xSORT = { "PropsOf$Hx_RepeatSomeSep_SORT" , sortCon_M_PropsOf_sHx_xRepeatSomeSep_xSORT, sortNam_M_PropsOf_sHx_xRepeatSomeSep_xSORT, sortInt_M_PropsOf_sHx_xRepeatSomeSep_xSORT, NULL};

/* SORT PropsOf$Hx_RepeatSome_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRepeatSome =  "PropsOf$Hx_RepeatSome" ;
char *nameFun_M_PropsOf_sHx_xRepeatSome(Term term) { return name_M_PropsOf_sHx_xRepeatSome; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRepeatSome = {&sort_M_PropsOf_sHx_xRepeatSome_xSORT, Data_M_PropsOf_sHx_xRepeatSome, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRepeatSome), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRepeatSome, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRepeatSome_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRepeatSome,  NULL};
char *sortNam_M_PropsOf_sHx_xRepeatSome_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RepeatSome" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRepeatSome_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRepeatSome",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRepeatSome_xSORT = { "PropsOf$Hx_RepeatSome_SORT" , sortCon_M_PropsOf_sHx_xRepeatSome_xSORT, sortNam_M_PropsOf_sHx_xRepeatSome_xSORT, sortInt_M_PropsOf_sHx_xRepeatSome_xSORT, NULL};

/* SORT PropsOf$Hx_RulePrefix_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRulePrefix =  "PropsOf$Hx_RulePrefix" ;
char *nameFun_M_PropsOf_sHx_xRulePrefix(Term term) { return name_M_PropsOf_sHx_xRulePrefix; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRulePrefix = {&sort_M_PropsOf_sHx_xRulePrefix_xSORT, Data_M_PropsOf_sHx_xRulePrefix, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRulePrefix), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRulePrefix, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRulePrefix_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRulePrefix,  NULL};
char *sortNam_M_PropsOf_sHx_xRulePrefix_xSORT[] = {NULL, NULL,  "PropsOf$Hx_RulePrefix" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRulePrefix_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRulePrefix",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRulePrefix_xSORT = { "PropsOf$Hx_RulePrefix_SORT" , sortCon_M_PropsOf_sHx_xRulePrefix_xSORT, sortNam_M_PropsOf_sHx_xRulePrefix_xSORT, sortInt_M_PropsOf_sHx_xRulePrefix_xSORT, NULL};

/* SORT PropsOf$Hx_Rule_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xRule =  "PropsOf$Hx_Rule" ;
char *nameFun_M_PropsOf_sHx_xRule(Term term) { return name_M_PropsOf_sHx_xRule; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRule = {&sort_M_PropsOf_sHx_xRule_xSORT, Data_M_PropsOf_sHx_xRule, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xRule), noBinderOffsets, &nameFun_M_PropsOf_sHx_xRule, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xRule_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xRule,  NULL};
char *sortNam_M_PropsOf_sHx_xRule_xSORT[] = {NULL, NULL,  "PropsOf$Hx_Rule" ,  NULL};
char *sortInt_M_PropsOf_sHx_xRule_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xRule",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xRule_xSORT = { "PropsOf$Hx_Rule_SORT" , sortCon_M_PropsOf_sHx_xRule_xSORT, sortNam_M_PropsOf_sHx_xRule_xSORT, sortInt_M_PropsOf_sHx_xRule_xSORT, NULL};

/* SORT PropsOf$Hx_ScopeSortPrecBind_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xScopeSortPrecBind =  "PropsOf$Hx_ScopeSortPrecBind" ;
char *nameFun_M_PropsOf_sHx_xScopeSortPrecBind(Term term) { return name_M_PropsOf_sHx_xScopeSortPrecBind; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xScopeSortPrecBind = {&sort_M_PropsOf_sHx_xScopeSortPrecBind_xSORT, Data_M_PropsOf_sHx_xScopeSortPrecBind, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xScopeSortPrecBind), noBinderOffsets, &nameFun_M_PropsOf_sHx_xScopeSortPrecBind, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xScopeSortPrecBind_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xScopeSortPrecBind,  NULL};
char *sortNam_M_PropsOf_sHx_xScopeSortPrecBind_xSORT[] = {NULL, NULL,  "PropsOf$Hx_ScopeSortPrecBind" ,  NULL};
char *sortInt_M_PropsOf_sHx_xScopeSortPrecBind_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xScopeSortPrecBind",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xScopeSortPrecBind_xSORT = { "PropsOf$Hx_ScopeSortPrecBind_SORT" , sortCon_M_PropsOf_sHx_xScopeSortPrecBind_xSORT, sortNam_M_PropsOf_sHx_xScopeSortPrecBind_xSORT, sortInt_M_PropsOf_sHx_xScopeSortPrecBind_xSORT, NULL};

/* SORT PropsOf$Hx_ScopeSortPrec_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xScopeSortPrec =  "PropsOf$Hx_ScopeSortPrec" ;
char *nameFun_M_PropsOf_sHx_xScopeSortPrec(Term term) { return name_M_PropsOf_sHx_xScopeSortPrec; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xScopeSortPrec = {&sort_M_PropsOf_sHx_xScopeSortPrec_xSORT, Data_M_PropsOf_sHx_xScopeSortPrec, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xScopeSortPrec), noBinderOffsets, &nameFun_M_PropsOf_sHx_xScopeSortPrec, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xScopeSortPrec_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xScopeSortPrec,  NULL};
char *sortNam_M_PropsOf_sHx_xScopeSortPrec_xSORT[] = {NULL, NULL,  "PropsOf$Hx_ScopeSortPrec" ,  NULL};
char *sortInt_M_PropsOf_sHx_xScopeSortPrec_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xScopeSortPrec",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xScopeSortPrec_xSORT = { "PropsOf$Hx_ScopeSortPrec_SORT" , sortCon_M_PropsOf_sHx_xScopeSortPrec_xSORT, sortNam_M_PropsOf_sHx_xScopeSortPrec_xSORT, sortInt_M_PropsOf_sHx_xScopeSortPrec_xSORT, NULL};

/* SORT PropsOf$Hx_ScopeSort_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xScopeSort =  "PropsOf$Hx_ScopeSort" ;
char *nameFun_M_PropsOf_sHx_xScopeSort(Term term) { return name_M_PropsOf_sHx_xScopeSort; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xScopeSort = {&sort_M_PropsOf_sHx_xScopeSort_xSORT, Data_M_PropsOf_sHx_xScopeSort, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xScopeSort), noBinderOffsets, &nameFun_M_PropsOf_sHx_xScopeSort, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xScopeSort_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xScopeSort,  NULL};
char *sortNam_M_PropsOf_sHx_xScopeSort_xSORT[] = {NULL, NULL,  "PropsOf$Hx_ScopeSort" ,  NULL};
char *sortInt_M_PropsOf_sHx_xScopeSort_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xScopeSort",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xScopeSort_xSORT = { "PropsOf$Hx_ScopeSort_SORT" , sortCon_M_PropsOf_sHx_xScopeSort_xSORT, sortNam_M_PropsOf_sHx_xScopeSort_xSORT, sortInt_M_PropsOf_sHx_xScopeSort_xSORT, NULL};

/* SORT PropsOf$Hx_Scope_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xScope =  "PropsOf$Hx_Scope" ;
char *nameFun_M_PropsOf_sHx_xScope(Term term) { return name_M_PropsOf_sHx_xScope; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xScope = {&sort_M_PropsOf_sHx_xScope_xSORT, Data_M_PropsOf_sHx_xScope, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xScope), noBinderOffsets, &nameFun_M_PropsOf_sHx_xScope, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xScope_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xScope,  NULL};
char *sortNam_M_PropsOf_sHx_xScope_xSORT[] = {NULL, NULL,  "PropsOf$Hx_Scope" ,  NULL};
char *sortInt_M_PropsOf_sHx_xScope_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xScope",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xScope_xSORT = { "PropsOf$Hx_Scope_SORT" , sortCon_M_PropsOf_sHx_xScope_xSORT, sortNam_M_PropsOf_sHx_xScope_xSORT, sortInt_M_PropsOf_sHx_xScope_xSORT, NULL};

/* SORT PropsOf$Hx_SortAbstractionBody_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xSortAbstractionBody =  "PropsOf$Hx_SortAbstractionBody" ;
char *nameFun_M_PropsOf_sHx_xSortAbstractionBody(Term term) { return name_M_PropsOf_sHx_xSortAbstractionBody; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSortAbstractionBody = {&sort_M_PropsOf_sHx_xSortAbstractionBody_xSORT, Data_M_PropsOf_sHx_xSortAbstractionBody, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xSortAbstractionBody), noBinderOffsets, &nameFun_M_PropsOf_sHx_xSortAbstractionBody, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xSortAbstractionBody_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xSortAbstractionBody,  NULL};
char *sortNam_M_PropsOf_sHx_xSortAbstractionBody_xSORT[] = {NULL, NULL,  "PropsOf$Hx_SortAbstractionBody" ,  NULL};
char *sortInt_M_PropsOf_sHx_xSortAbstractionBody_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xSortAbstractionBody",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xSortAbstractionBody_xSORT = { "PropsOf$Hx_SortAbstractionBody_SORT" , sortCon_M_PropsOf_sHx_xSortAbstractionBody_xSORT, sortNam_M_PropsOf_sHx_xSortAbstractionBody_xSORT, sortInt_M_PropsOf_sHx_xSortAbstractionBody_xSORT, NULL};

/* SORT PropsOf$Hx_SortAbstractionParam_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xSortAbstractionParam =  "PropsOf$Hx_SortAbstractionParam" ;
char *nameFun_M_PropsOf_sHx_xSortAbstractionParam(Term term) { return name_M_PropsOf_sHx_xSortAbstractionParam; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSortAbstractionParam = {&sort_M_PropsOf_sHx_xSortAbstractionParam_xSORT, Data_M_PropsOf_sHx_xSortAbstractionParam, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xSortAbstractionParam), noBinderOffsets, &nameFun_M_PropsOf_sHx_xSortAbstractionParam, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xSortAbstractionParam_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xSortAbstractionParam,  NULL};
char *sortNam_M_PropsOf_sHx_xSortAbstractionParam_xSORT[] = {NULL, NULL,  "PropsOf$Hx_SortAbstractionParam" ,  NULL};
char *sortInt_M_PropsOf_sHx_xSortAbstractionParam_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xSortAbstractionParam",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xSortAbstractionParam_xSORT = { "PropsOf$Hx_SortAbstractionParam_SORT" , sortCon_M_PropsOf_sHx_xSortAbstractionParam_xSORT, sortNam_M_PropsOf_sHx_xSortAbstractionParam_xSORT, sortInt_M_PropsOf_sHx_xSortAbstractionParam_xSORT, NULL};

/* SORT PropsOf$Hx_SortName_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xSortName =  "PropsOf$Hx_SortName" ;
char *nameFun_M_PropsOf_sHx_xSortName(Term term) { return name_M_PropsOf_sHx_xSortName; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSortName = {&sort_M_PropsOf_sHx_xSortName_xSORT, Data_M_PropsOf_sHx_xSortName, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xSortName), noBinderOffsets, &nameFun_M_PropsOf_sHx_xSortName, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xSortName_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xSortName,  NULL};
char *sortNam_M_PropsOf_sHx_xSortName_xSORT[] = {NULL, NULL,  "PropsOf$Hx_SortName" ,  NULL};
char *sortInt_M_PropsOf_sHx_xSortName_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xSortName",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xSortName_xSORT = { "PropsOf$Hx_SortName_SORT" , sortCon_M_PropsOf_sHx_xSortName_xSORT, sortNam_M_PropsOf_sHx_xSortName_xSORT, sortInt_M_PropsOf_sHx_xSortName_xSORT, NULL};

/* SORT PropsOf$Hx_SortParam_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xSortParam =  "PropsOf$Hx_SortParam" ;
char *nameFun_M_PropsOf_sHx_xSortParam(Term term) { return name_M_PropsOf_sHx_xSortParam; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSortParam = {&sort_M_PropsOf_sHx_xSortParam_xSORT, Data_M_PropsOf_sHx_xSortParam, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xSortParam), noBinderOffsets, &nameFun_M_PropsOf_sHx_xSortParam, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xSortParam_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xSortParam,  NULL};
char *sortNam_M_PropsOf_sHx_xSortParam_xSORT[] = {NULL, NULL,  "PropsOf$Hx_SortParam" ,  NULL};
char *sortInt_M_PropsOf_sHx_xSortParam_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xSortParam",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xSortParam_xSORT = { "PropsOf$Hx_SortParam_SORT" , sortCon_M_PropsOf_sHx_xSortParam_xSORT, sortNam_M_PropsOf_sHx_xSortParam_xSORT, sortInt_M_PropsOf_sHx_xSortParam_xSORT, NULL};

/* SORT PropsOf$Hx_Sort_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xSort =  "PropsOf$Hx_Sort" ;
char *nameFun_M_PropsOf_sHx_xSort(Term term) { return name_M_PropsOf_sHx_xSort; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSort = {&sort_M_PropsOf_sHx_xSort_xSORT, Data_M_PropsOf_sHx_xSort, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xSort), noBinderOffsets, &nameFun_M_PropsOf_sHx_xSort, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xSort_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xSort,  NULL};
char *sortNam_M_PropsOf_sHx_xSort_xSORT[] = {NULL, NULL,  "PropsOf$Hx_Sort" ,  NULL};
char *sortInt_M_PropsOf_sHx_xSort_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xSort",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xSort_xSORT = { "PropsOf$Hx_Sort_SORT" , sortCon_M_PropsOf_sHx_xSort_xSORT, sortNam_M_PropsOf_sHx_xSort_xSORT, sortInt_M_PropsOf_sHx_xSort_xSORT, NULL};

/* SORT PropsOf$Hx_Special_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xSpecial =  "PropsOf$Hx_Special" ;
char *nameFun_M_PropsOf_sHx_xSpecial(Term term) { return name_M_PropsOf_sHx_xSpecial; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSpecial = {&sort_M_PropsOf_sHx_xSpecial_xSORT, Data_M_PropsOf_sHx_xSpecial, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xSpecial), noBinderOffsets, &nameFun_M_PropsOf_sHx_xSpecial, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xSpecial_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xSpecial,  NULL};
char *sortNam_M_PropsOf_sHx_xSpecial_xSORT[] = {NULL, NULL,  "PropsOf$Hx_Special" ,  NULL};
char *sortInt_M_PropsOf_sHx_xSpecial_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xSpecial",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xSpecial_xSORT = { "PropsOf$Hx_Special_SORT" , sortCon_M_PropsOf_sHx_xSpecial_xSORT, sortNam_M_PropsOf_sHx_xSpecial_xSORT, sortInt_M_PropsOf_sHx_xSpecial_xSORT, NULL};

/* SORT PropsOf$Hx_SubstituteNoSort_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xSubstituteNoSort =  "PropsOf$Hx_SubstituteNoSort" ;
char *nameFun_M_PropsOf_sHx_xSubstituteNoSort(Term term) { return name_M_PropsOf_sHx_xSubstituteNoSort; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSubstituteNoSort = {&sort_M_PropsOf_sHx_xSubstituteNoSort_xSORT, Data_M_PropsOf_sHx_xSubstituteNoSort, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xSubstituteNoSort), noBinderOffsets, &nameFun_M_PropsOf_sHx_xSubstituteNoSort, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xSubstituteNoSort_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xSubstituteNoSort,  NULL};
char *sortNam_M_PropsOf_sHx_xSubstituteNoSort_xSORT[] = {NULL, NULL,  "PropsOf$Hx_SubstituteNoSort" ,  NULL};
char *sortInt_M_PropsOf_sHx_xSubstituteNoSort_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xSubstituteNoSort",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xSubstituteNoSort_xSORT = { "PropsOf$Hx_SubstituteNoSort_SORT" , sortCon_M_PropsOf_sHx_xSubstituteNoSort_xSORT, sortNam_M_PropsOf_sHx_xSubstituteNoSort_xSORT, sortInt_M_PropsOf_sHx_xSubstituteNoSort_xSORT, NULL};

/* SORT PropsOf$Hx_SubstituteSort_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xSubstituteSort =  "PropsOf$Hx_SubstituteSort" ;
char *nameFun_M_PropsOf_sHx_xSubstituteSort(Term term) { return name_M_PropsOf_sHx_xSubstituteSort; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSubstituteSort = {&sort_M_PropsOf_sHx_xSubstituteSort_xSORT, Data_M_PropsOf_sHx_xSubstituteSort, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xSubstituteSort), noBinderOffsets, &nameFun_M_PropsOf_sHx_xSubstituteSort, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xSubstituteSort_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xSubstituteSort,  NULL};
char *sortNam_M_PropsOf_sHx_xSubstituteSort_xSORT[] = {NULL, NULL,  "PropsOf$Hx_SubstituteSort" ,  NULL};
char *sortInt_M_PropsOf_sHx_xSubstituteSort_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xSubstituteSort",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xSubstituteSort_xSORT = { "PropsOf$Hx_SubstituteSort_SORT" , sortCon_M_PropsOf_sHx_xSubstituteSort_xSORT, sortNam_M_PropsOf_sHx_xSubstituteSort_xSORT, sortInt_M_PropsOf_sHx_xSubstituteSort_xSORT, NULL};

/* SORT PropsOf$Hx_SynthesizedRef_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xSynthesizedRef =  "PropsOf$Hx_SynthesizedRef" ;
char *nameFun_M_PropsOf_sHx_xSynthesizedRef(Term term) { return name_M_PropsOf_sHx_xSynthesizedRef; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSynthesizedRef = {&sort_M_PropsOf_sHx_xSynthesizedRef_xSORT, Data_M_PropsOf_sHx_xSynthesizedRef, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xSynthesizedRef), noBinderOffsets, &nameFun_M_PropsOf_sHx_xSynthesizedRef, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xSynthesizedRef_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xSynthesizedRef,  NULL};
char *sortNam_M_PropsOf_sHx_xSynthesizedRef_xSORT[] = {NULL, NULL,  "PropsOf$Hx_SynthesizedRef" ,  NULL};
char *sortInt_M_PropsOf_sHx_xSynthesizedRef_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xSynthesizedRef",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xSynthesizedRef_xSORT = { "PropsOf$Hx_SynthesizedRef_SORT" , sortCon_M_PropsOf_sHx_xSynthesizedRef_xSORT, sortNam_M_PropsOf_sHx_xSynthesizedRef_xSORT, sortInt_M_PropsOf_sHx_xSynthesizedRef_xSORT, NULL};

/* SORT PropsOf$Hx_UnparsedSorted_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xUnparsedSorted =  "PropsOf$Hx_UnparsedSorted" ;
char *nameFun_M_PropsOf_sHx_xUnparsedSorted(Term term) { return name_M_PropsOf_sHx_xUnparsedSorted; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xUnparsedSorted = {&sort_M_PropsOf_sHx_xUnparsedSorted_xSORT, Data_M_PropsOf_sHx_xUnparsedSorted, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xUnparsedSorted), noBinderOffsets, &nameFun_M_PropsOf_sHx_xUnparsedSorted, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xUnparsedSorted_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xUnparsedSorted,  NULL};
char *sortNam_M_PropsOf_sHx_xUnparsedSorted_xSORT[] = {NULL, NULL,  "PropsOf$Hx_UnparsedSorted" ,  NULL};
char *sortInt_M_PropsOf_sHx_xUnparsedSorted_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xUnparsedSorted",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xUnparsedSorted_xSORT = { "PropsOf$Hx_UnparsedSorted_SORT" , sortCon_M_PropsOf_sHx_xUnparsedSorted_xSORT, sortNam_M_PropsOf_sHx_xUnparsedSorted_xSORT, sortInt_M_PropsOf_sHx_xUnparsedSorted_xSORT, NULL};

/* SORT PropsOf$Hx_Unparsed_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xUnparsed =  "PropsOf$Hx_Unparsed" ;
char *nameFun_M_PropsOf_sHx_xUnparsed(Term term) { return name_M_PropsOf_sHx_xUnparsed; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xUnparsed = {&sort_M_PropsOf_sHx_xUnparsed_xSORT, Data_M_PropsOf_sHx_xUnparsed, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xUnparsed), noBinderOffsets, &nameFun_M_PropsOf_sHx_xUnparsed, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xUnparsed_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xUnparsed,  NULL};
char *sortNam_M_PropsOf_sHx_xUnparsed_xSORT[] = {NULL, NULL,  "PropsOf$Hx_Unparsed" ,  NULL};
char *sortInt_M_PropsOf_sHx_xUnparsed_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xUnparsed",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xUnparsed_xSORT = { "PropsOf$Hx_Unparsed_SORT" , sortCon_M_PropsOf_sHx_xUnparsed_xSORT, sortNam_M_PropsOf_sHx_xUnparsed_xSORT, sortInt_M_PropsOf_sHx_xUnparsed_xSORT, NULL};

/* SORT PropsOf$Hx_VariableUseSorted_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xVariableUseSorted =  "PropsOf$Hx_VariableUseSorted" ;
char *nameFun_M_PropsOf_sHx_xVariableUseSorted(Term term) { return name_M_PropsOf_sHx_xVariableUseSorted; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xVariableUseSorted = {&sort_M_PropsOf_sHx_xVariableUseSorted_xSORT, Data_M_PropsOf_sHx_xVariableUseSorted, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xVariableUseSorted), noBinderOffsets, &nameFun_M_PropsOf_sHx_xVariableUseSorted, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xVariableUseSorted_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xVariableUseSorted,  NULL};
char *sortNam_M_PropsOf_sHx_xVariableUseSorted_xSORT[] = {NULL, NULL,  "PropsOf$Hx_VariableUseSorted" ,  NULL};
char *sortInt_M_PropsOf_sHx_xVariableUseSorted_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xVariableUseSorted",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xVariableUseSorted_xSORT = { "PropsOf$Hx_VariableUseSorted_SORT" , sortCon_M_PropsOf_sHx_xVariableUseSorted_xSORT, sortNam_M_PropsOf_sHx_xVariableUseSorted_xSORT, sortInt_M_PropsOf_sHx_xVariableUseSorted_xSORT, NULL};

/* SORT PropsOf$Hx_VariableUse_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xVariableUse =  "PropsOf$Hx_VariableUse" ;
char *nameFun_M_PropsOf_sHx_xVariableUse(Term term) { return name_M_PropsOf_sHx_xVariableUse; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xVariableUse = {&sort_M_PropsOf_sHx_xVariableUse_xSORT, Data_M_PropsOf_sHx_xVariableUse, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xVariableUse), noBinderOffsets, &nameFun_M_PropsOf_sHx_xVariableUse, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xVariableUse_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xVariableUse,  NULL};
char *sortNam_M_PropsOf_sHx_xVariableUse_xSORT[] = {NULL, NULL,  "PropsOf$Hx_VariableUse" ,  NULL};
char *sortInt_M_PropsOf_sHx_xVariableUse_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xVariableUse",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xVariableUse_xSORT = { "PropsOf$Hx_VariableUse_SORT" , sortCon_M_PropsOf_sHx_xVariableUse_xSORT, sortNam_M_PropsOf_sHx_xVariableUse_xSORT, sortInt_M_PropsOf_sHx_xVariableUse_xSORT, NULL};

/* SORT PropsOf$Hx_anonymous_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xanonymous =  "PropsOf$Hx_anonymous" ;
char *nameFun_M_PropsOf_sHx_xanonymous(Term term) { return name_M_PropsOf_sHx_xanonymous; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xanonymous = {&sort_M_PropsOf_sHx_xanonymous_xSORT, Data_M_PropsOf_sHx_xanonymous, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xanonymous), noBinderOffsets, &nameFun_M_PropsOf_sHx_xanonymous, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xanonymous_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xanonymous,  NULL};
char *sortNam_M_PropsOf_sHx_xanonymous_xSORT[] = {NULL, NULL,  "PropsOf$Hx_anonymous" ,  NULL};
char *sortInt_M_PropsOf_sHx_xanonymous_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xanonymous",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xanonymous_xSORT = { "PropsOf$Hx_anonymous_SORT" , sortCon_M_PropsOf_sHx_xanonymous_xSORT, sortNam_M_PropsOf_sHx_xanonymous_xSORT, sortInt_M_PropsOf_sHx_xanonymous_xSORT, NULL};

/* SORT PropsOf$Hx_attribute_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xattribute =  "PropsOf$Hx_attribute" ;
char *nameFun_M_PropsOf_sHx_xattribute(Term term) { return name_M_PropsOf_sHx_xattribute; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xattribute = {&sort_M_PropsOf_sHx_xattribute_xSORT, Data_M_PropsOf_sHx_xattribute, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xattribute), noBinderOffsets, &nameFun_M_PropsOf_sHx_xattribute, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xattribute_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xattribute,  NULL};
char *sortNam_M_PropsOf_sHx_xattribute_xSORT[] = {NULL, NULL,  "PropsOf$Hx_attribute" ,  NULL};
char *sortInt_M_PropsOf_sHx_xattribute_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xattribute",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xattribute_xSORT = { "PropsOf$Hx_attribute_SORT" , sortCon_M_PropsOf_sHx_xattribute_xSORT, sortNam_M_PropsOf_sHx_xattribute_xSORT, sortInt_M_PropsOf_sHx_xattribute_xSORT, NULL};

/* SORT PropsOf$Hx_binds_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xbinds =  "PropsOf$Hx_binds" ;
char *nameFun_M_PropsOf_sHx_xbinds(Term term) { return name_M_PropsOf_sHx_xbinds; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xbinds = {&sort_M_PropsOf_sHx_xbinds_xSORT, Data_M_PropsOf_sHx_xbinds, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xbinds), noBinderOffsets, &nameFun_M_PropsOf_sHx_xbinds, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xbinds_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xbinds,  NULL};
char *sortNam_M_PropsOf_sHx_xbinds_xSORT[] = {NULL, NULL,  "PropsOf$Hx_binds" ,  NULL};
char *sortInt_M_PropsOf_sHx_xbinds_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xbinds",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xbinds_xSORT = { "PropsOf$Hx_binds_SORT" , sortCon_M_PropsOf_sHx_xbinds_xSORT, sortNam_M_PropsOf_sHx_xbinds_xSORT, sortInt_M_PropsOf_sHx_xbinds_xSORT, NULL};

/* SORT PropsOf$Hx_data_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xdata =  "PropsOf$Hx_data" ;
char *nameFun_M_PropsOf_sHx_xdata(Term term) { return name_M_PropsOf_sHx_xdata; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xdata = {&sort_M_PropsOf_sHx_xdata_xSORT, Data_M_PropsOf_sHx_xdata, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xdata), noBinderOffsets, &nameFun_M_PropsOf_sHx_xdata, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xdata_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xdata,  NULL};
char *sortNam_M_PropsOf_sHx_xdata_xSORT[] = {NULL, NULL,  "PropsOf$Hx_data" ,  NULL};
char *sortInt_M_PropsOf_sHx_xdata_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xdata",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xdata_xSORT = { "PropsOf$Hx_data_SORT" , sortCon_M_PropsOf_sHx_xdata_xSORT, sortNam_M_PropsOf_sHx_xdata_xSORT, sortInt_M_PropsOf_sHx_xdata_xSORT, NULL};

/* SORT PropsOf$Hx_default_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xdefault =  "PropsOf$Hx_default" ;
char *nameFun_M_PropsOf_sHx_xdefault(Term term) { return name_M_PropsOf_sHx_xdefault; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xdefault = {&sort_M_PropsOf_sHx_xdefault_xSORT, Data_M_PropsOf_sHx_xdefault, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xdefault), noBinderOffsets, &nameFun_M_PropsOf_sHx_xdefault, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xdefault_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xdefault,  NULL};
char *sortNam_M_PropsOf_sHx_xdefault_xSORT[] = {NULL, NULL,  "PropsOf$Hx_default" ,  NULL};
char *sortInt_M_PropsOf_sHx_xdefault_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xdefault",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xdefault_xSORT = { "PropsOf$Hx_default_SORT" , sortCon_M_PropsOf_sHx_xdefault_xSORT, sortNam_M_PropsOf_sHx_xdefault_xSORT, sortInt_M_PropsOf_sHx_xdefault_xSORT, NULL};

/* SORT PropsOf$Hx_embedded-module_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xembedded__module =  "PropsOf$Hx_embedded-module" ;
char *nameFun_M_PropsOf_sHx_xembedded__module(Term term) { return name_M_PropsOf_sHx_xembedded__module; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xembedded__module = {&sort_M_PropsOf_sHx_xembedded__module_xSORT, Data_M_PropsOf_sHx_xembedded__module, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xembedded__module), noBinderOffsets, &nameFun_M_PropsOf_sHx_xembedded__module, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xembedded__module_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xembedded__module,  NULL};
char *sortNam_M_PropsOf_sHx_xembedded__module_xSORT[] = {NULL, NULL,  "PropsOf$Hx_embedded-module" ,  NULL};
char *sortInt_M_PropsOf_sHx_xembedded__module_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xembedded__module",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xembedded__module_xSORT = { "PropsOf$Hx_embedded-module_SORT" , sortCon_M_PropsOf_sHx_xembedded__module_xSORT, sortNam_M_PropsOf_sHx_xembedded__module_xSORT, sortInt_M_PropsOf_sHx_xembedded__module_xSORT, NULL};

/* SORT PropsOf$Hx_fragment_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xfragment =  "PropsOf$Hx_fragment" ;
char *nameFun_M_PropsOf_sHx_xfragment(Term term) { return name_M_PropsOf_sHx_xfragment; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xfragment = {&sort_M_PropsOf_sHx_xfragment_xSORT, Data_M_PropsOf_sHx_xfragment, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xfragment), noBinderOffsets, &nameFun_M_PropsOf_sHx_xfragment, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xfragment_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xfragment,  NULL};
char *sortNam_M_PropsOf_sHx_xfragment_xSORT[] = {NULL, NULL,  "PropsOf$Hx_fragment" ,  NULL};
char *sortInt_M_PropsOf_sHx_xfragment_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xfragment",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xfragment_xSORT = { "PropsOf$Hx_fragment_SORT" , sortCon_M_PropsOf_sHx_xfragment_xSORT, sortNam_M_PropsOf_sHx_xfragment_xSORT, sortInt_M_PropsOf_sHx_xfragment_xSORT, NULL};

/* SORT PropsOf$Hx_import_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_ximport =  "PropsOf$Hx_import" ;
char *nameFun_M_PropsOf_sHx_ximport(Term term) { return name_M_PropsOf_sHx_ximport; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_ximport = {&sort_M_PropsOf_sHx_ximport_xSORT, Data_M_PropsOf_sHx_ximport, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_ximport), noBinderOffsets, &nameFun_M_PropsOf_sHx_ximport, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_ximport_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_ximport,  NULL};
char *sortNam_M_PropsOf_sHx_ximport_xSORT[] = {NULL, NULL,  "PropsOf$Hx_import" ,  NULL};
char *sortInt_M_PropsOf_sHx_ximport_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_ximport",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_ximport_xSORT = { "PropsOf$Hx_import_SORT" , sortCon_M_PropsOf_sHx_ximport_xSORT, sortNam_M_PropsOf_sHx_ximport_xSORT, sortInt_M_PropsOf_sHx_ximport_xSORT, NULL};

/* SORT PropsOf$Hx_main_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xmain =  "PropsOf$Hx_main" ;
char *nameFun_M_PropsOf_sHx_xmain(Term term) { return name_M_PropsOf_sHx_xmain; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xmain = {&sort_M_PropsOf_sHx_xmain_xSORT, Data_M_PropsOf_sHx_xmain, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xmain), noBinderOffsets, &nameFun_M_PropsOf_sHx_xmain, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xmain_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xmain,  NULL};
char *sortNam_M_PropsOf_sHx_xmain_xSORT[] = {NULL, NULL,  "PropsOf$Hx_main" ,  NULL};
char *sortInt_M_PropsOf_sHx_xmain_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xmain",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xmain_xSORT = { "PropsOf$Hx_main_SORT" , sortCon_M_PropsOf_sHx_xmain_xSORT, sortNam_M_PropsOf_sHx_xmain_xSORT, sortInt_M_PropsOf_sHx_xmain_xSORT, NULL};

/* SORT PropsOf$Hx_module_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xmodule =  "PropsOf$Hx_module" ;
char *nameFun_M_PropsOf_sHx_xmodule(Term term) { return name_M_PropsOf_sHx_xmodule; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xmodule = {&sort_M_PropsOf_sHx_xmodule_xSORT, Data_M_PropsOf_sHx_xmodule, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xmodule), noBinderOffsets, &nameFun_M_PropsOf_sHx_xmodule, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xmodule_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xmodule,  NULL};
char *sortNam_M_PropsOf_sHx_xmodule_xSORT[] = {NULL, NULL,  "PropsOf$Hx_module" ,  NULL};
char *sortInt_M_PropsOf_sHx_xmodule_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xmodule",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xmodule_xSORT = { "PropsOf$Hx_module_SORT" , sortCon_M_PropsOf_sHx_xmodule_xSORT, sortNam_M_PropsOf_sHx_xmodule_xSORT, sortInt_M_PropsOf_sHx_xmodule_xSORT, NULL};

/* SORT PropsOf$Hx_nestedDeclarations_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xnestedDeclarations =  "PropsOf$Hx_nestedDeclarations" ;
char *nameFun_M_PropsOf_sHx_xnestedDeclarations(Term term) { return name_M_PropsOf_sHx_xnestedDeclarations; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xnestedDeclarations = {&sort_M_PropsOf_sHx_xnestedDeclarations_xSORT, Data_M_PropsOf_sHx_xnestedDeclarations, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xnestedDeclarations), noBinderOffsets, &nameFun_M_PropsOf_sHx_xnestedDeclarations, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xnestedDeclarations_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xnestedDeclarations,  NULL};
char *sortNam_M_PropsOf_sHx_xnestedDeclarations_xSORT[] = {NULL, NULL,  "PropsOf$Hx_nestedDeclarations" ,  NULL};
char *sortInt_M_PropsOf_sHx_xnestedDeclarations_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xnestedDeclarations",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xnestedDeclarations_xSORT = { "PropsOf$Hx_nestedDeclarations_SORT" , sortCon_M_PropsOf_sHx_xnestedDeclarations_xSORT, sortNam_M_PropsOf_sHx_xnestedDeclarations_xSORT, sortInt_M_PropsOf_sHx_xnestedDeclarations_xSORT, NULL};

/* SORT PropsOf$Hx_nested_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xnested =  "PropsOf$Hx_nested" ;
char *nameFun_M_PropsOf_sHx_xnested(Term term) { return name_M_PropsOf_sHx_xnested; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xnested = {&sort_M_PropsOf_sHx_xnested_xSORT, Data_M_PropsOf_sHx_xnested, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xnested), noBinderOffsets, &nameFun_M_PropsOf_sHx_xnested, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xnested_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xnested,  NULL};
char *sortNam_M_PropsOf_sHx_xnested_xSORT[] = {NULL, NULL,  "PropsOf$Hx_nested" ,  NULL};
char *sortInt_M_PropsOf_sHx_xnested_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xnested",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xnested_xSORT = { "PropsOf$Hx_nested_SORT" , sortCon_M_PropsOf_sHx_xnested_xSORT, sortNam_M_PropsOf_sHx_xnested_xSORT, sortInt_M_PropsOf_sHx_xnested_xSORT, NULL};

/* SORT PropsOf$Hx_no-main_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xno__main =  "PropsOf$Hx_no-main" ;
char *nameFun_M_PropsOf_sHx_xno__main(Term term) { return name_M_PropsOf_sHx_xno__main; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xno__main = {&sort_M_PropsOf_sHx_xno__main_xSORT, Data_M_PropsOf_sHx_xno__main, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xno__main), noBinderOffsets, &nameFun_M_PropsOf_sHx_xno__main, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xno__main_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xno__main,  NULL};
char *sortNam_M_PropsOf_sHx_xno__main_xSORT[] = {NULL, NULL,  "PropsOf$Hx_no-main" ,  NULL};
char *sortInt_M_PropsOf_sHx_xno__main_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xno__main",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xno__main_xSORT = { "PropsOf$Hx_no-main_SORT" , sortCon_M_PropsOf_sHx_xno__main_xSORT, sortNam_M_PropsOf_sHx_xno__main_xSORT, sortInt_M_PropsOf_sHx_xno__main_xSORT, NULL};

/* SORT PropsOf$Hx_priority_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xpriority =  "PropsOf$Hx_priority" ;
char *nameFun_M_PropsOf_sHx_xpriority(Term term) { return name_M_PropsOf_sHx_xpriority; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xpriority = {&sort_M_PropsOf_sHx_xpriority_xSORT, Data_M_PropsOf_sHx_xpriority, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xpriority), noBinderOffsets, &nameFun_M_PropsOf_sHx_xpriority, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xpriority_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xpriority,  NULL};
char *sortNam_M_PropsOf_sHx_xpriority_xSORT[] = {NULL, NULL,  "PropsOf$Hx_priority" ,  NULL};
char *sortInt_M_PropsOf_sHx_xpriority_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xpriority",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xpriority_xSORT = { "PropsOf$Hx_priority_SORT" , sortCon_M_PropsOf_sHx_xpriority_xSORT, sortNam_M_PropsOf_sHx_xpriority_xSORT, sortInt_M_PropsOf_sHx_xpriority_xSORT, NULL};

/* SORT PropsOf$Hx_rule_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xrule =  "PropsOf$Hx_rule" ;
char *nameFun_M_PropsOf_sHx_xrule(Term term) { return name_M_PropsOf_sHx_xrule; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xrule = {&sort_M_PropsOf_sHx_xrule_xSORT, Data_M_PropsOf_sHx_xrule, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xrule), noBinderOffsets, &nameFun_M_PropsOf_sHx_xrule, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xrule_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xrule,  NULL};
char *sortNam_M_PropsOf_sHx_xrule_xSORT[] = {NULL, NULL,  "PropsOf$Hx_rule" ,  NULL};
char *sortInt_M_PropsOf_sHx_xrule_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xrule",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xrule_xSORT = { "PropsOf$Hx_rule_SORT" , sortCon_M_PropsOf_sHx_xrule_xSORT, sortNam_M_PropsOf_sHx_xrule_xSORT, sortInt_M_PropsOf_sHx_xrule_xSORT, NULL};

/* SORT PropsOf$Hx_scheme_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xscheme =  "PropsOf$Hx_scheme" ;
char *nameFun_M_PropsOf_sHx_xscheme(Term term) { return name_M_PropsOf_sHx_xscheme; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xscheme = {&sort_M_PropsOf_sHx_xscheme_xSORT, Data_M_PropsOf_sHx_xscheme, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xscheme), noBinderOffsets, &nameFun_M_PropsOf_sHx_xscheme, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xscheme_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xscheme,  NULL};
char *sortNam_M_PropsOf_sHx_xscheme_xSORT[] = {NULL, NULL,  "PropsOf$Hx_scheme" ,  NULL};
char *sortInt_M_PropsOf_sHx_xscheme_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xscheme",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xscheme_xSORT = { "PropsOf$Hx_scheme_SORT" , sortCon_M_PropsOf_sHx_xscheme_xSORT, sortNam_M_PropsOf_sHx_xscheme_xSORT, sortInt_M_PropsOf_sHx_xscheme_xSORT, NULL};

/* SORT PropsOf$Hx_sort_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xsort =  "PropsOf$Hx_sort" ;
char *nameFun_M_PropsOf_sHx_xsort(Term term) { return name_M_PropsOf_sHx_xsort; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xsort = {&sort_M_PropsOf_sHx_xsort_xSORT, Data_M_PropsOf_sHx_xsort, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xsort), noBinderOffsets, &nameFun_M_PropsOf_sHx_xsort, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xsort_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xsort,  NULL};
char *sortNam_M_PropsOf_sHx_xsort_xSORT[] = {NULL, NULL,  "PropsOf$Hx_sort" ,  NULL};
char *sortInt_M_PropsOf_sHx_xsort_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xsort",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xsort_xSORT = { "PropsOf$Hx_sort_SORT" , sortCon_M_PropsOf_sHx_xsort_xSORT, sortNam_M_PropsOf_sHx_xsort_xSORT, sortInt_M_PropsOf_sHx_xsort_xSORT, NULL};

/* SORT PropsOf$Hx_space_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xspace =  "PropsOf$Hx_space" ;
char *nameFun_M_PropsOf_sHx_xspace(Term term) { return name_M_PropsOf_sHx_xspace; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xspace = {&sort_M_PropsOf_sHx_xspace_xSORT, Data_M_PropsOf_sHx_xspace, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xspace), noBinderOffsets, &nameFun_M_PropsOf_sHx_xspace, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xspace_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xspace,  NULL};
char *sortNam_M_PropsOf_sHx_xspace_xSORT[] = {NULL, NULL,  "PropsOf$Hx_space" ,  NULL};
char *sortInt_M_PropsOf_sHx_xspace_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xspace",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xspace_xSORT = { "PropsOf$Hx_space_SORT" , sortCon_M_PropsOf_sHx_xspace_xSORT, sortNam_M_PropsOf_sHx_xspace_xSORT, sortInt_M_PropsOf_sHx_xspace_xSORT, NULL};

/* SORT PropsOf$Hx_static_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xstatic =  "PropsOf$Hx_static" ;
char *nameFun_M_PropsOf_sHx_xstatic(Term term) { return name_M_PropsOf_sHx_xstatic; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xstatic = {&sort_M_PropsOf_sHx_xstatic_xSORT, Data_M_PropsOf_sHx_xstatic, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xstatic), noBinderOffsets, &nameFun_M_PropsOf_sHx_xstatic, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xstatic_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xstatic,  NULL};
char *sortNam_M_PropsOf_sHx_xstatic_xSORT[] = {NULL, NULL,  "PropsOf$Hx_static" ,  NULL};
char *sortInt_M_PropsOf_sHx_xstatic_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xstatic",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xstatic_xSORT = { "PropsOf$Hx_static_SORT" , sortCon_M_PropsOf_sHx_xstatic_xSORT, sortNam_M_PropsOf_sHx_xstatic_xSORT, sortInt_M_PropsOf_sHx_xstatic_xSORT, NULL};

/* SORT PropsOf$Hx_sugar_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xsugar =  "PropsOf$Hx_sugar" ;
char *nameFun_M_PropsOf_sHx_xsugar(Term term) { return name_M_PropsOf_sHx_xsugar; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xsugar = {&sort_M_PropsOf_sHx_xsugar_xSORT, Data_M_PropsOf_sHx_xsugar, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xsugar), noBinderOffsets, &nameFun_M_PropsOf_sHx_xsugar, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xsugar_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xsugar,  NULL};
char *sortNam_M_PropsOf_sHx_xsugar_xSORT[] = {NULL, NULL,  "PropsOf$Hx_sugar" ,  NULL};
char *sortInt_M_PropsOf_sHx_xsugar_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xsugar",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xsugar_xSORT = { "PropsOf$Hx_sugar_SORT" , sortCon_M_PropsOf_sHx_xsugar_xSORT, sortNam_M_PropsOf_sHx_xsugar_xSORT, sortInt_M_PropsOf_sHx_xsugar_xSORT, NULL};

/* SORT PropsOf$Hx_symbol_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xsymbol =  "PropsOf$Hx_symbol" ;
char *nameFun_M_PropsOf_sHx_xsymbol(Term term) { return name_M_PropsOf_sHx_xsymbol; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xsymbol = {&sort_M_PropsOf_sHx_xsymbol_xSORT, Data_M_PropsOf_sHx_xsymbol, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xsymbol), noBinderOffsets, &nameFun_M_PropsOf_sHx_xsymbol, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xsymbol_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xsymbol,  NULL};
char *sortNam_M_PropsOf_sHx_xsymbol_xSORT[] = {NULL, NULL,  "PropsOf$Hx_symbol" ,  NULL};
char *sortInt_M_PropsOf_sHx_xsymbol_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xsymbol",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xsymbol_xSORT = { "PropsOf$Hx_symbol_SORT" , sortCon_M_PropsOf_sHx_xsymbol_xSORT, sortNam_M_PropsOf_sHx_xsymbol_xSORT, sortInt_M_PropsOf_sHx_xsymbol_xSORT, NULL};

/* SORT PropsOf$Hx_token_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xtoken =  "PropsOf$Hx_token" ;
char *nameFun_M_PropsOf_sHx_xtoken(Term term) { return name_M_PropsOf_sHx_xtoken; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xtoken = {&sort_M_PropsOf_sHx_xtoken_xSORT, Data_M_PropsOf_sHx_xtoken, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xtoken), noBinderOffsets, &nameFun_M_PropsOf_sHx_xtoken, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xtoken_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xtoken,  NULL};
char *sortNam_M_PropsOf_sHx_xtoken_xSORT[] = {NULL, NULL,  "PropsOf$Hx_token" ,  NULL};
char *sortInt_M_PropsOf_sHx_xtoken_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xtoken",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xtoken_xSORT = { "PropsOf$Hx_token_SORT" , sortCon_M_PropsOf_sHx_xtoken_xSORT, sortNam_M_PropsOf_sHx_xtoken_xSORT, sortInt_M_PropsOf_sHx_xtoken_xSORT, NULL};

/* SORT PropsOf$Hx_top-module_SORT CONSTANTS. */
char *name_M_PropsOf_sHx_xtop__module =  "PropsOf$Hx_top-module" ;
char *nameFun_M_PropsOf_sHx_xtop__module(Term term) { return name_M_PropsOf_sHx_xtop__module; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xtop__module = {&sort_M_PropsOf_sHx_xtop__module_xSORT, Data_M_PropsOf_sHx_xtop__module, 0, sizeof(STRUCT_Con_M_PropsOf_sHx_xtop__module), noBinderOffsets, &nameFun_M_PropsOf_sHx_xtop__module, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sHx_xtop__module_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sHx_xtop__module,  NULL};
char *sortNam_M_PropsOf_sHx_xtop__module_xSORT[] = {NULL, NULL,  "PropsOf$Hx_top-module" ,  NULL};
char *sortInt_M_PropsOf_sHx_xtop__module_xSORT[] = {NULL, NULL, "_M_PropsOf_sHx_xtop__module",  NULL};
struct _SortDescriptor sort_M_PropsOf_sHx_xtop__module_xSORT = { "PropsOf$Hx_top-module_SORT" , sortCon_M_PropsOf_sHx_xtop__module_xSORT, sortNam_M_PropsOf_sHx_xtop__module_xSORT, sortInt_M_PropsOf_sHx_xtop__module_xSORT, NULL};

/* SORT PropsOf$LOC_SORT CONSTANTS. */
char *name_M_PropsOf_sLOC =  "PropsOf$LOC" ;
char *nameFun_M_PropsOf_sLOC(Term term) { return name_M_PropsOf_sLOC; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sLOC = {&sort_M_PropsOf_sLOC_xSORT, Data_M_PropsOf_sLOC, 0, sizeof(STRUCT_Con_M_PropsOf_sLOC), noBinderOffsets, &nameFun_M_PropsOf_sLOC, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sLOC_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sLOC,  NULL};
char *sortNam_M_PropsOf_sLOC_xSORT[] = {NULL, NULL,  "PropsOf$LOC" ,  NULL};
char *sortInt_M_PropsOf_sLOC_xSORT[] = {NULL, NULL, "_M_PropsOf_sLOC",  NULL};
struct _SortDescriptor sort_M_PropsOf_sLOC_xSORT = { "PropsOf$LOC_SORT" , sortCon_M_PropsOf_sLOC_xSORT, sortNam_M_PropsOf_sLOC_xSORT, sortInt_M_PropsOf_sLOC_xSORT, NULL};

/* SORT PropsOf$N2N_SORT CONSTANTS. */
char *name_M_PropsOf_sN2N =  "PropsOf$N2N" ;
char *nameFun_M_PropsOf_sN2N(Term term) { return name_M_PropsOf_sN2N; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sN2N = {&sort_M_PropsOf_sN2N_xSORT, Data_M_PropsOf_sN2N, 0, sizeof(STRUCT_Con_M_PropsOf_sN2N), noBinderOffsets, &nameFun_M_PropsOf_sN2N, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sN2N_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sN2N,  NULL};
char *sortNam_M_PropsOf_sN2N_xSORT[] = {NULL, NULL,  "PropsOf$N2N" ,  NULL};
char *sortInt_M_PropsOf_sN2N_xSORT[] = {NULL, NULL, "_M_PropsOf_sN2N",  NULL};
struct _SortDescriptor sort_M_PropsOf_sN2N_xSORT = { "PropsOf$N2N_SORT" , sortCon_M_PropsOf_sN2N_xSORT, sortNam_M_PropsOf_sN2N_xSORT, sortInt_M_PropsOf_sN2N_xSORT, NULL};

/* SORT PropsOf$N2Ns_SORT CONSTANTS. */
char *name_M_PropsOf_sN2Ns =  "PropsOf$N2Ns" ;
char *nameFun_M_PropsOf_sN2Ns(Term term) { return name_M_PropsOf_sN2Ns; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sN2Ns = {&sort_M_PropsOf_sN2Ns_xSORT, Data_M_PropsOf_sN2Ns, 0, sizeof(STRUCT_Con_M_PropsOf_sN2Ns), noBinderOffsets, &nameFun_M_PropsOf_sN2Ns, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sN2Ns_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sN2Ns,  NULL};
char *sortNam_M_PropsOf_sN2Ns_xSORT[] = {NULL, NULL,  "PropsOf$N2Ns" ,  NULL};
char *sortInt_M_PropsOf_sN2Ns_xSORT[] = {NULL, NULL, "_M_PropsOf_sN2Ns",  NULL};
struct _SortDescriptor sort_M_PropsOf_sN2Ns_xSORT = { "PropsOf$N2Ns_SORT" , sortCon_M_PropsOf_sN2Ns_xSORT, sortNam_M_PropsOf_sN2Ns_xSORT, sortInt_M_PropsOf_sN2Ns_xSORT, NULL};

/* SORT PropsOf$SM_SORT CONSTANTS. */
char *name_M_PropsOf_sSM =  "PropsOf$SM" ;
char *nameFun_M_PropsOf_sSM(Term term) { return name_M_PropsOf_sSM; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sSM = {&sort_M_PropsOf_sSM_xSORT, Data_M_PropsOf_sSM, 0, sizeof(STRUCT_Con_M_PropsOf_sSM), noBinderOffsets, &nameFun_M_PropsOf_sSM, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sSM_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sSM,  NULL};
char *sortNam_M_PropsOf_sSM_xSORT[] = {NULL, NULL,  "PropsOf$SM" ,  NULL};
char *sortInt_M_PropsOf_sSM_xSORT[] = {NULL, NULL, "_M_PropsOf_sSM",  NULL};
struct _SortDescriptor sort_M_PropsOf_sSM_xSORT = { "PropsOf$SM_SORT" , sortCon_M_PropsOf_sSM_xSORT, sortNam_M_PropsOf_sSM_xSORT, sortInt_M_PropsOf_sSM_xSORT, NULL};

/* SORT PropsOf$TEXT_MAP_SORT CONSTANTS. */
char *name_M_PropsOf_sTEXT_xMAP =  "PropsOf$TEXT_MAP" ;
char *nameFun_M_PropsOf_sTEXT_xMAP(Term term) { return name_M_PropsOf_sTEXT_xMAP; }
struct _ConstructionDescriptor descriptor_M_PropsOf_sTEXT_xMAP = {&sort_M_PropsOf_sTEXT_xMAP_xSORT, Data_M_PropsOf_sTEXT_xMAP, 0, sizeof(STRUCT_Con_M_PropsOf_sTEXT_xMAP), noBinderOffsets, &nameFun_M_PropsOf_sTEXT_xMAP, &dataStep};
ConstructionDescriptor sortCon_M_PropsOf_sTEXT_xMAP_xSORT[] = {NULL, NULL, &descriptor_M_PropsOf_sTEXT_xMAP,  NULL};
char *sortNam_M_PropsOf_sTEXT_xMAP_xSORT[] = {NULL, NULL,  "PropsOf$TEXT_MAP" ,  NULL};
char *sortInt_M_PropsOf_sTEXT_xMAP_xSORT[] = {NULL, NULL, "_M_PropsOf_sTEXT_xMAP",  NULL};
struct _SortDescriptor sort_M_PropsOf_sTEXT_xMAP_xSORT = { "PropsOf$TEXT_MAP_SORT" , sortCon_M_PropsOf_sTEXT_xMAP_xSORT, sortNam_M_PropsOf_sTEXT_xMAP_xSORT, sortInt_M_PropsOf_sTEXT_xMAP_xSORT, NULL};

/* SORT SortMap CONSTANTS. */
int conBindOffs_M_SM[] = {0 , 0 , 0};
char *name_M_SM =  "SM" ;
char *nameFun_M_SM(Term term) { return name_M_SM; }
struct _ConstructionDescriptor descriptor_M_SM = {&sort_M_SortMap, Data_M_SM, 2, sizeof(STRUCT_Con_M_SM), conBindOffs_M_SM, &nameFun_M_SM, &dataStep};
ConstructionDescriptor sortCon_M_SortMap[] = {NULL, NULL, &descriptor_M_SM,  NULL};
char *sortNam_M_SortMap[] = {NULL, NULL,  "SM" ,  NULL};
char *sortInt_M_SortMap[] = {NULL, NULL, "_M_SM",  NULL};
struct _SortDescriptor sort_M_SortMap = { "SortMap" , sortCon_M_SortMap, sortNam_M_SortMap, sortInt_M_SortMap, NULL};

/* SORT Text CONSTANTS. */
char *name_M__sTextNil =  "$TextNil" ;
char *nameFun_M__sTextNil(Term term) { return name_M__sTextNil; }
struct _ConstructionDescriptor descriptor_M__sTextNil = {&sort_M_Text, Data_M__sTextNil, 0, sizeof(STRUCT_Con_M__sTextNil), noBinderOffsets, &nameFun_M__sTextNil, &dataStep};
int conBindOffs_M__sTextCons[] = {0 , 0 , 0};
char *name_M__sTextCons =  "$TextCons" ;
char *nameFun_M__sTextCons(Term term) { return name_M__sTextCons; }
struct _ConstructionDescriptor descriptor_M__sTextCons = {&sort_M_Text, Data_M__sTextCons, 2, sizeof(STRUCT_Con_M__sTextCons), conBindOffs_M__sTextCons, &nameFun_M__sTextCons, &dataStep};
ConstructionDescriptor sortCon_M_Text[] = {NULL, NULL, &descriptor_M__sTextNil, &descriptor_M__sTextCons,  NULL};
char *sortNam_M_Text[] = {NULL, NULL,  "$TextNil" ,  "$TextCons" ,  NULL};
char *sortInt_M_Text[] = {NULL, NULL, "_M__sTextNil", "_M__sTextCons",  NULL};
struct _SortDescriptor sort_M_Text = { "Text" , sortCon_M_Text, sortNam_M_Text, sortInt_M_Text, NULL};

/* SORT Text-Part CONSTANTS. */
int conBindOffs_M__sTextChars[] = {0 , 0};
char *name_M__sTextChars =  "$TextChars" ;
char *nameFun_M__sTextChars(Term term) { return name_M__sTextChars; }
struct _ConstructionDescriptor descriptor_M__sTextChars = {&sort_M_Text_Part, Data_M__sTextChars, 1, sizeof(STRUCT_Con_M__sTextChars), conBindOffs_M__sTextChars, &nameFun_M__sTextChars, &dataStep};
int conBindOffs_M__sTextGroup[] = {0 , 0};
char *name_M__sTextGroup =  "$TextGroup" ;
char *nameFun_M__sTextGroup(Term term) { return name_M__sTextGroup; }
struct _ConstructionDescriptor descriptor_M__sTextGroup = {&sort_M_Text_Part, Data_M__sTextGroup, 1, sizeof(STRUCT_Con_M__sTextGroup), conBindOffs_M__sTextGroup, &nameFun_M__sTextGroup, &dataStep};
int conBindOffs_M__sTextBreak[] = {0 , 0};
char *name_M__sTextBreak =  "$TextBreak" ;
char *nameFun_M__sTextBreak(Term term) { return name_M__sTextBreak; }
struct _ConstructionDescriptor descriptor_M__sTextBreak = {&sort_M_Text_Part, Data_M__sTextBreak, 1, sizeof(STRUCT_Con_M__sTextBreak), conBindOffs_M__sTextBreak, &nameFun_M__sTextBreak, &dataStep};
int conBindOffs_M__sTextString[] = {0 , 0};
char *name_M__sTextString =  "$TextString" ;
char *nameFun_M__sTextString(Term term) { return name_M__sTextString; }
struct _ConstructionDescriptor descriptor_M__sTextString = {&sort_M_Text_Part, Data_M__sTextString, 1, sizeof(STRUCT_Con_M__sTextString), conBindOffs_M__sTextString, &nameFun_M__sTextString, &dataStep};
int conBindOffs_M__sTextIndent[] = {0 , 0};
char *name_M__sTextIndent =  "$TextIndent" ;
char *nameFun_M__sTextIndent(Term term) { return name_M__sTextIndent; }
struct _ConstructionDescriptor descriptor_M__sTextIndent = {&sort_M_Text_Part, Data_M__sTextIndent, 1, sizeof(STRUCT_Con_M__sTextIndent), conBindOffs_M__sTextIndent, &nameFun_M__sTextIndent, &dataStep};
int conBindOffs_M__sTextEmbed[] = {0 , 0};
char *name_M__sTextEmbed =  "$TextEmbed" ;
char *nameFun_M__sTextEmbed(Term term) { return name_M__sTextEmbed; }
struct _ConstructionDescriptor descriptor_M__sTextEmbed = {&sort_M_Text_Part, Data_M__sTextEmbed, 1, sizeof(STRUCT_Con_M__sTextEmbed), conBindOffs_M__sTextEmbed, &nameFun_M__sTextEmbed, &dataStep};
char *name_M__sTextSeparator =  "$TextSeparator" ;
char *nameFun_M__sTextSeparator(Term term) { return name_M__sTextSeparator; }
struct _ConstructionDescriptor descriptor_M__sTextSeparator = {&sort_M_Text_Part, Data_M__sTextSeparator, 0, sizeof(STRUCT_Con_M__sTextSeparator), noBinderOffsets, &nameFun_M__sTextSeparator, &dataStep};
ConstructionDescriptor sortCon_M_Text_Part[] = {NULL, NULL, &descriptor_M__sTextChars, &descriptor_M__sTextGroup, &descriptor_M__sTextBreak, &descriptor_M__sTextString, &descriptor_M__sTextIndent, &descriptor_M__sTextEmbed, &descriptor_M__sTextSeparator,  NULL};
char *sortNam_M_Text_Part[] = {NULL, NULL,  "$TextChars" ,  "$TextGroup" ,  "$TextBreak" ,  "$TextString" ,  "$TextIndent" ,  "$TextEmbed" ,  "$TextSeparator" ,  NULL};
char *sortInt_M_Text_Part[] = {NULL, NULL, "_M__sTextChars", "_M__sTextGroup", "_M__sTextBreak", "_M__sTextString", "_M__sTextIndent", "_M__sTextEmbed", "_M__sTextSeparator",  NULL};
struct _SortDescriptor sort_M_Text_Part = { "Text-Part" , sortCon_M_Text_Part, sortNam_M_Text_Part, sortInt_M_Text_Part, NULL};

/* SORT TextMapSort CONSTANTS. */
int conBindOffs_M_TEXT_xMAP[] = {0 , 0};
char *name_M_TEXT_xMAP =  "TEXT_MAP" ;
char *nameFun_M_TEXT_xMAP(Term term) { return name_M_TEXT_xMAP; }
struct _ConstructionDescriptor descriptor_M_TEXT_xMAP = {&sort_M_TextMapSort, Data_M_TEXT_xMAP, 1, sizeof(STRUCT_Con_M_TEXT_xMAP), conBindOffs_M_TEXT_xMAP, &nameFun_M_TEXT_xMAP, &dataStep};
ConstructionDescriptor sortCon_M_TextMapSort[] = {NULL, NULL, &descriptor_M_TEXT_xMAP,  NULL};
char *sortNam_M_TextMapSort[] = {NULL, NULL,  "TEXT_MAP" ,  NULL};
char *sortInt_M_TextMapSort[] = {NULL, NULL, "_M_TEXT_xMAP",  NULL};
struct _SortDescriptor sort_M_TextMapSort = { "TextMapSort" , sortCon_M_TextMapSort, sortNam_M_TextMapSort, sortInt_M_TextMapSort, NULL};

/* SORT Wrapper CONSTANTS. */
int conBindOffs_M_WRAPPER[] = {0 , 0};
char *name_M_WRAPPER =  "WRAPPER" ;
char *nameFun_M_WRAPPER(Term term) { return name_M_WRAPPER; }
struct _ConstructionDescriptor descriptor_M_WRAPPER = {&sort_M_Wrapper, Data_M_WRAPPER, 1, sizeof(STRUCT_Con_M_WRAPPER), conBindOffs_M_WRAPPER, &nameFun_M_WRAPPER, &dataStep};
char *name_M_NO_xWRAPPER =  "NO_WRAPPER" ;
char *nameFun_M_NO_xWRAPPER(Term term) { return name_M_NO_xWRAPPER; }
struct _ConstructionDescriptor descriptor_M_NO_xWRAPPER = {&sort_M_Wrapper, Data_M_NO_xWRAPPER, 0, sizeof(STRUCT_Con_M_NO_xWRAPPER), noBinderOffsets, &nameFun_M_NO_xWRAPPER, &dataStep};
ConstructionDescriptor sortCon_M_Wrapper[] = {NULL, NULL, &descriptor_M_WRAPPER, &descriptor_M_NO_xWRAPPER,  NULL};
char *sortNam_M_Wrapper[] = {NULL, NULL,  "WRAPPER" ,  "NO_WRAPPER" ,  NULL};
char *sortInt_M_Wrapper[] = {NULL, NULL, "_M_WRAPPER", "_M_NO_xWRAPPER",  NULL};
struct _SortDescriptor sort_M_Wrapper = { "Wrapper" , sortCon_M_Wrapper, sortNam_M_Wrapper, sortInt_M_Wrapper, NULL};

#ifdef __cplusplus
}
#endif
/* END OF C SORT DESCRIPTORS FOR CRSX Main. */

