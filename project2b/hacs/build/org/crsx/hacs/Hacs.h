 /* C HEADER FOR CRSX Main MODULE . */
#ifndef CRSX__M_Main_M__H
#define CRSX__M_Main_M__H
#include "crsx.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DATA SORT $Boolean HEADER DECLARATIONS. */
typedef enum {FunOf_M__sBoolean = 0, VarOf_M__sBoolean = 1, Data_M__sTrue, Data_M__sFalse} EnumOf_M__sBoolean;
#define STRUCT_Con_M__sTrue struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M__sTrue;
#define STRUCT_Con_M__sFalse struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M__sFalse;
extern struct _SortDescriptor sort_M__sBoolean;

/* DATA SORT $List HEADER DECLARATIONS. */
typedef enum {FunOf_M__sList = 0, VarOf_M__sList = 1, Data_M__sCons, Data_M__sNil} EnumOf_M__sList;
#define STRUCT_Con_M__sCons struct _Con_M__sCons
struct _Con_M__sCons {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__sCons;
#define STRUCT_Con_M__sNil struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M__sNil;
extern struct _SortDescriptor sort_M__sList;

/* DATA SORT $StringEntrySort HEADER DECLARATIONS. */
typedef enum {FunOf_M__sStringEntrySort = 0, VarOf_M__sStringEntrySort = 1, Data_M_STRING} EnumOf_M__sStringEntrySort;
#define STRUCT_Con_M_STRING struct _Con_M_STRING
struct _Con_M_STRING {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_STRING;
extern struct _SortDescriptor sort_M__sStringEntrySort;

/* DATA SORT $TryResult HEADER DECLARATIONS. */
typedef enum {FunOf_M__sTryResult = 0, VarOf_M__sTryResult = 1, Data_M__sTrySuccess, Data_M__sTryFailure} EnumOf_M__sTryResult;
#define STRUCT_Con_M__sTrySuccess struct _Con_M__sTrySuccess
struct _Con_M__sTrySuccess {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__sTrySuccess;
#define STRUCT_Con_M__sTryFailure struct _Con_M__sTryFailure
struct _Con_M__sTryFailure {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__sTryFailure;
extern struct _SortDescriptor sort_M__sTryResult;

/* DATA SORT AttributeDescriptor HEADER DECLARATIONS. */
typedef enum {FunOf_M_AttributeDescriptor = 0, VarOf_M_AttributeDescriptor = 1, Data_M_A_xDESCRIPTOR} EnumOf_M_AttributeDescriptor;
#define STRUCT_Con_M_A_xDESCRIPTOR struct _Con_M_A_xDESCRIPTOR
struct _Con_M_A_xDESCRIPTOR {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_A_xDESCRIPTOR;
extern struct _SortDescriptor sort_M_AttributeDescriptor;

/* DATA SORT AttributeFormMap HEADER DECLARATIONS. */
typedef enum {FunOf_M_AttributeFormMap = 0, VarOf_M_AttributeFormMap = 1, Data_M_AFM} EnumOf_M_AttributeFormMap;
#define STRUCT_Con_M_AFM struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_AFM;
extern struct _SortDescriptor sort_M_AttributeFormMap;

/* DATA SORT Boolean HEADER DECLARATIONS. */
typedef enum {FunOf_M_Boolean = 0, VarOf_M_Boolean = 1, Data_M_B_xTRUE, Data_M_B_xFALSE} EnumOf_M_Boolean;
#define STRUCT_Con_M_B_xTRUE struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_B_xTRUE;
#define STRUCT_Con_M_B_xFALSE struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_B_xFALSE;
extern struct _SortDescriptor sort_M_Boolean;

/* DATA SORT CONSUMPTION_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_CONSUMPTION_xSORT = 0, VarOf_M_CONSUMPTION_xSORT = 1, Data_M_C_xBUFFER, Data_M_C_xLEFTRECURSIVE} EnumOf_M_CONSUMPTION_xSORT;
#define STRUCT_Con_M_C_xBUFFER struct _Con_M_C_xBUFFER
struct _Con_M_C_xBUFFER {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_xBUFFER;
#define STRUCT_Con_M_C_xLEFTRECURSIVE struct _Con_M_C_xLEFTRECURSIVE
struct _Con_M_C_xLEFTRECURSIVE {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_xLEFTRECURSIVE;
extern struct _SortDescriptor sort_M_CONSUMPTION_xSORT;

/* DATA SORT DeclarationMap HEADER DECLARATIONS. */
typedef enum {FunOf_M_DeclarationMap = 0, VarOf_M_DeclarationMap = 1, Data_M_DM} EnumOf_M_DeclarationMap;
#define STRUCT_Con_M_DM struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_DM;
extern struct _SortDescriptor sort_M_DeclarationMap;

/* DATA SORT DeclarationMapEntry HEADER DECLARATIONS. */
typedef enum {FunOf_M_DeclarationMapEntry = 0, VarOf_M_DeclarationMapEntry = 1, Data_M_DME_xNONE, Data_M_DME_xSTRING, Data_M_DME_xTOKEN, Data_M_DME_xNAMES, Data_M_DME_xN2NM, Data_M_DME_xSORT, Data_M_DME_xAFM, Data_M_DME_xN2N, Data_M_DME_xATTRIBUTE, Data_M_DME_xALIAS} EnumOf_M_DeclarationMapEntry;
#define STRUCT_Con_M_DME_xNONE struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_DME_xNONE;
#define STRUCT_Con_M_DME_xSTRING struct _Con_M_DME_xSTRING
struct _Con_M_DME_xSTRING {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_DME_xSTRING;
#define STRUCT_Con_M_DME_xTOKEN struct _Con_M_DME_xTOKEN
struct _Con_M_DME_xTOKEN {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_DME_xTOKEN;
#define STRUCT_Con_M_DME_xNAMES struct _Con_M_DME_xNAMES
struct _Con_M_DME_xNAMES {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_DME_xNAMES;
#define STRUCT_Con_M_DME_xN2NM struct _Con_M_DME_xN2NM
struct _Con_M_DME_xN2NM {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_DME_xN2NM;
#define STRUCT_Con_M_DME_xSORT struct _Con_M_DME_xSORT
struct _Con_M_DME_xSORT {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_DME_xSORT;
#define STRUCT_Con_M_DME_xAFM struct _Con_M_DME_xAFM
struct _Con_M_DME_xAFM {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_DME_xAFM;
#define STRUCT_Con_M_DME_xN2N struct _Con_M_DME_xN2N
struct _Con_M_DME_xN2N {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_DME_xN2N;
#define STRUCT_Con_M_DME_xATTRIBUTE struct _Con_M_DME_xATTRIBUTE
struct _Con_M_DME_xATTRIBUTE {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_DME_xATTRIBUTE;
#define STRUCT_Con_M_DME_xALIAS struct _Con_M_DME_xALIAS
struct _Con_M_DME_xALIAS {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_DME_xALIAS;
extern struct _SortDescriptor sort_M_DeclarationMapEntry;

/* DATA SORT Define HEADER DECLARATIONS. */
typedef enum {FunOf_M_Define = 0, VarOf_M_Define = 1, Data_M_D_xSYNTHESIZES, Data_M_D_xFORM, Data_M_D_xRULE, Data_M_D_xNONE, Data_M_D_xABSTRACTION} EnumOf_M_Define;
#define STRUCT_Con_M_D_xSYNTHESIZES struct _Con_M_D_xSYNTHESIZES
struct _Con_M_D_xSYNTHESIZES {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_D_xSYNTHESIZES;
#define STRUCT_Con_M_D_xFORM struct _Con_M_D_xFORM
struct _Con_M_D_xFORM {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_D_xFORM;
#define STRUCT_Con_M_D_xRULE struct _Con_M_D_xRULE
struct _Con_M_D_xRULE {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_D_xRULE;
#define STRUCT_Con_M_D_xNONE struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_D_xNONE;
#define STRUCT_Con_M_D_xABSTRACTION struct _Con_M_D_xABSTRACTION
struct _Con_M_D_xABSTRACTION {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_D_xABSTRACTION;
extern struct _SortDescriptor sort_M_Define;

/* DATA SORT FormKind HEADER DECLARATIONS. */
typedef enum {FunOf_M_FormKind = 0, VarOf_M_FormKind = 1, Data_M_FK_xSYMBOL, Data_M_FK_xALIAS, Data_M_FK_xSUGAR, Data_M_FK_xSCHEME, Data_M_FK_xDATA} EnumOf_M_FormKind;
#define STRUCT_Con_M_FK_xSYMBOL struct _Con_M_FK_xSYMBOL
struct _Con_M_FK_xSYMBOL {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_FK_xSYMBOL;
#define STRUCT_Con_M_FK_xALIAS struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_FK_xALIAS;
#define STRUCT_Con_M_FK_xSUGAR struct _Con_M_FK_xSUGAR
struct _Con_M_FK_xSUGAR {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_FK_xSUGAR;
#define STRUCT_Con_M_FK_xSCHEME struct _Con_M_FK_xSCHEME
struct _Con_M_FK_xSCHEME {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_FK_xSCHEME;
#define STRUCT_Con_M_FK_xDATA struct _Con_M_FK_xDATA
struct _Con_M_FK_xDATA {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_FK_xDATA;
extern struct _SortDescriptor sort_M_FormKind;

/* DATA SORT HxAttribute HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxAttribute = 0, VarOf_M_HxAttribute = 1, Data_M_Hx_xCatchAllAttributes, Data_M_Hx_xAttribute} EnumOf_M_HxAttribute;
#define STRUCT_Con_M_Hx_xCatchAllAttributes struct _Con_M_Hx_xCatchAllAttributes
struct _Con_M_Hx_xCatchAllAttributes {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xCatchAllAttributes;
#define STRUCT_Con_M_Hx_xAttribute struct _Con_M_Hx_xAttribute
struct _Con_M_Hx_xAttribute {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttribute;
extern struct _SortDescriptor sort_M_HxAttribute;

/* DATA SORT HxAttributeForm HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxAttributeForm = 0, VarOf_M_HxAttributeForm = 1, Data_M_Hx_xAttributeFormSet, Data_M_Hx_xNoAttributeForm, Data_M_Hx_xAttributeFormSimple, Data_M_Hx_xAttributeFormMap} EnumOf_M_HxAttributeForm;
#define STRUCT_Con_M_Hx_xAttributeFormSet struct _Con_M_Hx_xAttributeFormSet
struct _Con_M_Hx_xAttributeFormSet {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttributeFormSet;
#define STRUCT_Con_M_Hx_xNoAttributeForm struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xNoAttributeForm;
#define STRUCT_Con_M_Hx_xAttributeFormSimple struct _Con_M_Hx_xAttributeFormSimple
struct _Con_M_Hx_xAttributeFormSimple {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttributeFormSimple;
#define STRUCT_Con_M_Hx_xAttributeFormMap struct _Con_M_Hx_xAttributeFormMap
struct _Con_M_Hx_xAttributeFormMap {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttributeFormMap;
extern struct _SortDescriptor sort_M_HxAttributeForm;

/* DATA SORT HxAttributeKind HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxAttributeKind = 0, VarOf_M_HxAttributeKind = 1, Data_M_Hx_xAttributeKindUp, Data_M_Hx_xAttributeKindDown} EnumOf_M_HxAttributeKind;
#define STRUCT_Con_M_Hx_xAttributeKindUp struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttributeKindUp;
#define STRUCT_Con_M_Hx_xAttributeKindDown struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttributeKindDown;
extern struct _SortDescriptor sort_M_HxAttributeKind;

/* DATA SORT HxAttributeValue HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxAttributeValue = 0, VarOf_M_HxAttributeValue = 1, Data_M_Hx_xAttributeCatchAll, Data_M_Hx_xAttributeKey, Data_M_Hx_xAttributeNotKey, Data_M_Hx_xAttributeValue, Data_M_Hx_xAttributeKeyValue} EnumOf_M_HxAttributeValue;
#define STRUCT_Con_M_Hx_xAttributeCatchAll struct _Con_M_Hx_xAttributeCatchAll
struct _Con_M_Hx_xAttributeCatchAll {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttributeCatchAll;
#define STRUCT_Con_M_Hx_xAttributeKey struct _Con_M_Hx_xAttributeKey
struct _Con_M_Hx_xAttributeKey {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttributeKey;
#define STRUCT_Con_M_Hx_xAttributeNotKey struct _Con_M_Hx_xAttributeNotKey
struct _Con_M_Hx_xAttributeNotKey {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttributeNotKey;
#define STRUCT_Con_M_Hx_xAttributeValue struct _Con_M_Hx_xAttributeValue
struct _Con_M_Hx_xAttributeValue {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttributeValue;
#define STRUCT_Con_M_Hx_xAttributeKeyValue struct _Con_M_Hx_xAttributeKeyValue
struct _Con_M_Hx_xAttributeKeyValue {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xAttributeKeyValue;
extern struct _SortDescriptor sort_M_HxAttributeValue;

/* DATA SORT HxDeclaration HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxDeclaration = 0, VarOf_M_HxDeclaration = 1, Data_M_Hx_xsort, Data_M_Hx_xrule, Data_M_Hx_xspace, Data_M_Hx_xembedded__module, Data_M_Hx_xanonymous, Data_M_Hx_xtoken, Data_M_Hx_xfragment, Data_M_Hx_xnestedDeclarations, Data_M_Hx_ximport, Data_M_Hx_xattribute} EnumOf_M_HxDeclaration;
#define STRUCT_Con_M_Hx_xsort struct _Con_M_Hx_xsort
struct _Con_M_Hx_xsort {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xsort;
#define STRUCT_Con_M_Hx_xrule struct _Con_M_Hx_xrule
struct _Con_M_Hx_xrule {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xrule;
#define STRUCT_Con_M_Hx_xspace struct _Con_M_Hx_xspace
struct _Con_M_Hx_xspace {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xspace;
#define STRUCT_Con_M_Hx_xembedded__module struct _Con_M_Hx_xembedded__module
struct _Con_M_Hx_xembedded__module {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xembedded__module;
#define STRUCT_Con_M_Hx_xanonymous struct _Con_M_Hx_xanonymous
struct _Con_M_Hx_xanonymous {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xanonymous;
#define STRUCT_Con_M_Hx_xtoken struct _Con_M_Hx_xtoken
struct _Con_M_Hx_xtoken {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xtoken;
#define STRUCT_Con_M_Hx_xfragment struct _Con_M_Hx_xfragment
struct _Con_M_Hx_xfragment {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xfragment;
#define STRUCT_Con_M_Hx_xnestedDeclarations struct _Con_M_Hx_xnestedDeclarations
struct _Con_M_Hx_xnestedDeclarations {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xnestedDeclarations;
#define STRUCT_Con_M_Hx_ximport struct _Con_M_Hx_ximport
struct _Con_M_Hx_ximport {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_ximport;
#define STRUCT_Con_M_Hx_xattribute struct _Con_M_Hx_xattribute
struct _Con_M_Hx_xattribute {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xattribute;
extern struct _SortDescriptor sort_M_HxDeclaration;

/* DATA SORT HxEmbeddedModule HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxEmbeddedModule = 0, VarOf_M_HxEmbeddedModule = 1, Data_M_Hx_xmodule} EnumOf_M_HxEmbeddedModule;
#define STRUCT_Con_M_Hx_xmodule struct _Con_M_Hx_xmodule
struct _Con_M_Hx_xmodule {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xmodule;
extern struct _SortDescriptor sort_M_HxEmbeddedModule;

/* DATA SORT HxForm HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxForm = 0, VarOf_M_HxForm = 1, Data_M_Hx_xFormParsed, Data_M_Hx_xFormConstruction} EnumOf_M_HxForm;
#define STRUCT_Con_M_Hx_xFormParsed struct _Con_M_Hx_xFormParsed
struct _Con_M_Hx_xFormParsed {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xFormParsed;
#define STRUCT_Con_M_Hx_xFormConstruction struct _Con_M_Hx_xFormConstruction
struct _Con_M_Hx_xFormConstruction {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xFormConstruction;
extern struct _SortDescriptor sort_M_HxForm;

/* DATA SORT HxMainKind HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxMainKind = 0, VarOf_M_HxMainKind = 1, Data_M_Hx_xmain, Data_M_Hx_xno__main} EnumOf_M_HxMainKind;
#define STRUCT_Con_M_Hx_xmain struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xmain;
#define STRUCT_Con_M_Hx_xno__main struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xno__main;
extern struct _SortDescriptor sort_M_HxMainKind;

/* DATA SORT HxModule HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxModule = 0, VarOf_M_HxModule = 1, Data_M_Hx_xtop__module} EnumOf_M_HxModule;
#define STRUCT_Con_M_Hx_xtop__module struct _Con_M_Hx_xtop__module
struct _Con_M_Hx_xtop__module {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xtop__module;
extern struct _SortDescriptor sort_M_HxModule;

/* DATA SORT HxParsedForm HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxParsedForm = 0, VarOf_M_HxParsedForm = 1, Data_M_Hx_xParsedFormTerm, Data_M_Hx_xParsedFormWord, Data_M_Hx_xParsedFormDone, Data_M_Hx_xParsedFormSpace} EnumOf_M_HxParsedForm;
#define STRUCT_Con_M_Hx_xParsedFormTerm struct _Con_M_Hx_xParsedFormTerm
struct _Con_M_Hx_xParsedFormTerm {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xParsedFormTerm;
#define STRUCT_Con_M_Hx_xParsedFormWord struct _Con_M_Hx_xParsedFormWord
struct _Con_M_Hx_xParsedFormWord {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xParsedFormWord;
#define STRUCT_Con_M_Hx_xParsedFormDone struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xParsedFormDone;
#define STRUCT_Con_M_Hx_xParsedFormSpace struct _Con_M_Hx_xParsedFormSpace
struct _Con_M_Hx_xParsedFormSpace {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xParsedFormSpace;
extern struct _SortDescriptor sort_M_HxParsedForm;

/* DATA SORT HxRegExpChoice HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxRegExpChoice = 0, VarOf_M_HxRegExpChoice = 1, Data_M_Hx_xnested, Data_M_Hx_xRegExpConcat} EnumOf_M_HxRegExpChoice;
#define STRUCT_Con_M_Hx_xnested struct _Con_M_Hx_xnested
struct _Con_M_Hx_xnested {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xnested;
#define STRUCT_Con_M_Hx_xRegExpConcat struct _Con_M_Hx_xRegExpConcat
struct _Con_M_Hx_xRegExpConcat {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpConcat;
extern struct _SortDescriptor sort_M_HxRegExpChoice;

/* DATA SORT HxRegExpClass HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxRegExpClass = 0, VarOf_M_HxRegExpClass = 1, Data_M_Hx_xRegExpClassChar, Data_M_Hx_xRegExpClassDone, Data_M_Hx_xRegExpClassNot, Data_M_Hx_xRegExpClassRange} EnumOf_M_HxRegExpClass;
#define STRUCT_Con_M_Hx_xRegExpClassChar struct _Con_M_Hx_xRegExpClassChar
struct _Con_M_Hx_xRegExpClassChar {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpClassChar;
#define STRUCT_Con_M_Hx_xRegExpClassDone struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpClassDone;
#define STRUCT_Con_M_Hx_xRegExpClassNot struct _Con_M_Hx_xRegExpClassNot
struct _Con_M_Hx_xRegExpClassNot {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpClassNot;
#define STRUCT_Con_M_Hx_xRegExpClassRange struct _Con_M_Hx_xRegExpClassRange
struct _Con_M_Hx_xRegExpClassRange {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpClassRange;
extern struct _SortDescriptor sort_M_HxRegExpClass;

/* DATA SORT HxRegExpSimple HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxRegExpSimple = 0, VarOf_M_HxRegExpSimple = 1, Data_M_Hx_xRegExpClass, Data_M_Hx_xRegExpWord, Data_M_Hx_xRegExpRef, Data_M_Hx_xRegExpString, Data_M_Hx_xRegExpAny, Data_M_Hx_xRegExpNest} EnumOf_M_HxRegExpSimple;
#define STRUCT_Con_M_Hx_xRegExpClass struct _Con_M_Hx_xRegExpClass
struct _Con_M_Hx_xRegExpClass {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpClass;
#define STRUCT_Con_M_Hx_xRegExpWord struct _Con_M_Hx_xRegExpWord
struct _Con_M_Hx_xRegExpWord {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpWord;
#define STRUCT_Con_M_Hx_xRegExpRef struct _Con_M_Hx_xRegExpRef
struct _Con_M_Hx_xRegExpRef {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpRef;
#define STRUCT_Con_M_Hx_xRegExpString struct _Con_M_Hx_xRegExpString
struct _Con_M_Hx_xRegExpString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpString;
#define STRUCT_Con_M_Hx_xRegExpAny struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpAny;
#define STRUCT_Con_M_Hx_xRegExpNest struct _Con_M_Hx_xRegExpNest
struct _Con_M_Hx_xRegExpNest {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpNest;
extern struct _SortDescriptor sort_M_HxRegExpSimple;

/* DATA SORT HxRegExpUnit HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxRegExpUnit = 0, VarOf_M_HxRegExpUnit = 1, Data_M_Hx_xRegExpUnit} EnumOf_M_HxRegExpUnit;
#define STRUCT_Con_M_Hx_xRegExpUnit struct _Con_M_Hx_xRegExpUnit
struct _Con_M_Hx_xRegExpUnit {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRegExpUnit;
extern struct _SortDescriptor sort_M_HxRegExpUnit;

/* DATA SORT HxRepeat HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxRepeat = 0, VarOf_M_HxRepeat = 1, Data_M_Hx_xRepeatMaybeSome, Data_M_Hx_xRepeatMaybe, Data_M_Hx_xRepeatSingle, Data_M_Hx_xRepeatSome, Data_M_Hx_xRepeatSomeSep} EnumOf_M_HxRepeat;
#define STRUCT_Con_M_Hx_xRepeatMaybeSome struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xRepeatMaybeSome;
#define STRUCT_Con_M_Hx_xRepeatMaybe struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xRepeatMaybe;
#define STRUCT_Con_M_Hx_xRepeatSingle struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xRepeatSingle;
#define STRUCT_Con_M_Hx_xRepeatSome struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xRepeatSome;
#define STRUCT_Con_M_Hx_xRepeatSomeSep struct _Con_M_Hx_xRepeatSomeSep
struct _Con_M_Hx_xRepeatSomeSep {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRepeatSomeSep;
extern struct _SortDescriptor sort_M_HxRepeat;

/* DATA SORT HxRule HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxRule = 0, VarOf_M_HxRule = 1, Data_M_Hx_xRule} EnumOf_M_HxRule;
#define STRUCT_Con_M_Hx_xRule struct _Con_M_Hx_xRule
struct _Con_M_Hx_xRule {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRule;
extern struct _SortDescriptor sort_M_HxRule;

/* DATA SORT HxRulePrefix HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxRulePrefix = 0, VarOf_M_HxRulePrefix = 1, Data_M_Hx_xRulePrefix} EnumOf_M_HxRulePrefix;
#define STRUCT_Con_M_Hx_xRulePrefix struct _Con_M_Hx_xRulePrefix
struct _Con_M_Hx_xRulePrefix {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xRulePrefix;
extern struct _SortDescriptor sort_M_HxRulePrefix;

/* DATA SORT HxRulePriority HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxRulePriority = 0, VarOf_M_HxRulePriority = 1, Data_M_Hx_xNormal, Data_M_Hx_xdefault, Data_M_Hx_xpriority} EnumOf_M_HxRulePriority;
#define STRUCT_Con_M_Hx_xNormal struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xNormal;
#define STRUCT_Con_M_Hx_xdefault struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xdefault;
#define STRUCT_Con_M_Hx_xpriority struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xpriority;
extern struct _SortDescriptor sort_M_HxRulePriority;

/* DATA SORT HxScope HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxScope = 0, VarOf_M_HxScope = 1, Data_M_Hx_xScope} EnumOf_M_HxScope;
#define STRUCT_Con_M_Hx_xScope struct _Con_M_Hx_xScope
struct _Con_M_Hx_xScope {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xScope;
extern struct _SortDescriptor sort_M_HxScope;

/* DATA SORT HxScopeSort HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxScopeSort = 0, VarOf_M_HxScopeSort = 1, Data_M_Hx_xbinds, Data_M_Hx_xScopeSort} EnumOf_M_HxScopeSort;
#define STRUCT_Con_M_Hx_xbinds struct _Con_M_Hx_xbinds
struct _Con_M_Hx_xbinds {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xbinds;
#define STRUCT_Con_M_Hx_xScopeSort struct _Con_M_Hx_xScopeSort
struct _Con_M_Hx_xScopeSort {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xScopeSort;
extern struct _SortDescriptor sort_M_HxScopeSort;

/* DATA SORT HxScopeSortPrec HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxScopeSortPrec = 0, VarOf_M_HxScopeSortPrec = 1, Data_M_Hx_xScopeSortPrec, Data_M_Hx_xScopeSortPrecBind} EnumOf_M_HxScopeSortPrec;
#define STRUCT_Con_M_Hx_xScopeSortPrec struct _Con_M_Hx_xScopeSortPrec
struct _Con_M_Hx_xScopeSortPrec {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xScopeSortPrec;
#define STRUCT_Con_M_Hx_xScopeSortPrecBind struct _Con_M_Hx_xScopeSortPrecBind
struct _Con_M_Hx_xScopeSortPrecBind {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xScopeSortPrecBind;
extern struct _SortDescriptor sort_M_HxScopeSortPrec;

/* DATA SORT HxSort HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxSort = 0, VarOf_M_HxSort = 1, Data_M_Hx_xSortParam, Data_M_Hx_xSortName, Data_M_Hx_xSort} EnumOf_M_HxSort;
#define STRUCT_Con_M_Hx_xSortParam struct _Con_M_Hx_xSortParam
struct _Con_M_Hx_xSortParam {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xSortParam;
#define STRUCT_Con_M_Hx_xSortName struct _Con_M_Hx_xSortName
struct _Con_M_Hx_xSortName {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xSortName;
#define STRUCT_Con_M_Hx_xSort struct _Con_M_Hx_xSort
struct _Con_M_Hx_xSort {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xSort;
extern struct _SortDescriptor sort_M_HxSort;

/* DATA SORT HxSortAbstraction HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxSortAbstraction = 0, VarOf_M_HxSortAbstraction = 1, Data_M_Hx_xSortAbstractionBody, Data_M_Hx_xSortAbstractionParam} EnumOf_M_HxSortAbstraction;
#define STRUCT_Con_M_Hx_xSortAbstractionBody struct _Con_M_Hx_xSortAbstractionBody
struct _Con_M_Hx_xSortAbstractionBody {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xSortAbstractionBody;
#define STRUCT_Con_M_Hx_xSortAbstractionParam struct _Con_M_Hx_xSortAbstractionParam
struct _Con_M_Hx_xSortAbstractionParam {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xSortAbstractionParam;
extern struct _SortDescriptor sort_M_HxSortAbstraction;

/* DATA SORT HxSortAlternative HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxSortAlternative = 0, VarOf_M_HxSortAlternative = 1, Data_M_Hx_xstatic, Data_M_Hx_xsymbol, Data_M_Hx_xdata, Data_M_Hx_xscheme, Data_M_Hx_xSynthesizedRef, Data_M_Hx_xsugar} EnumOf_M_HxSortAlternative;
#define STRUCT_Con_M_Hx_xstatic struct _Con_M_Hx_xstatic
struct _Con_M_Hx_xstatic {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xstatic;
#define STRUCT_Con_M_Hx_xsymbol struct _Con_M_Hx_xsymbol
struct _Con_M_Hx_xsymbol {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xsymbol;
#define STRUCT_Con_M_Hx_xdata struct _Con_M_Hx_xdata
struct _Con_M_Hx_xdata {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xdata;
#define STRUCT_Con_M_Hx_xscheme struct _Con_M_Hx_xscheme
struct _Con_M_Hx_xscheme {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xscheme;
#define STRUCT_Con_M_Hx_xSynthesizedRef struct _Con_M_Hx_xSynthesizedRef
struct _Con_M_Hx_xSynthesizedRef {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xSynthesizedRef;
#define STRUCT_Con_M_Hx_xsugar struct _Con_M_Hx_xsugar
struct _Con_M_Hx_xsugar {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xsugar;
extern struct _SortDescriptor sort_M_HxSortAlternative;

/* DATA SORT HxSubstituteSort HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxSubstituteSort = 0, VarOf_M_HxSubstituteSort = 1, Data_M_Hx_xSubstituteNoSort, Data_M_Hx_xSubstituteSort} EnumOf_M_HxSubstituteSort;
#define STRUCT_Con_M_Hx_xSubstituteNoSort struct _Con_M_Hx_xSubstituteNoSort
struct _Con_M_Hx_xSubstituteNoSort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xSubstituteNoSort;
#define STRUCT_Con_M_Hx_xSubstituteSort struct _Con_M_Hx_xSubstituteSort
struct _Con_M_Hx_xSubstituteSort {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xSubstituteSort;
extern struct _SortDescriptor sort_M_HxSubstituteSort;

/* DATA SORT HxTerm HEADER DECLARATIONS. */
typedef enum {FunOf_M_HxTerm = 0, VarOf_M_HxTerm = 1, Data_M_Hx_xConstructionSorted, Data_M_Hx_xMetaApplication, Data_M_Hx_xNullTerm, Data_M_Hx_xVariableUse, Data_M_Hx_xSpecial, Data_M_Hx_xUnparsed, Data_M_Hx_xVariableUseSorted, Data_M_Hx_xUnparsedSorted, Data_M_Hx_xLiteralSorted, Data_M_Hx_xLiteral, Data_M_Hx_xMetaApplicationSorted, Data_M_Hx_xConstruction} EnumOf_M_HxTerm;
#define STRUCT_Con_M_Hx_xConstructionSorted struct _Con_M_Hx_xConstructionSorted
struct _Con_M_Hx_xConstructionSorted {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xConstructionSorted;
#define STRUCT_Con_M_Hx_xMetaApplication struct _Con_M_Hx_xMetaApplication
struct _Con_M_Hx_xMetaApplication {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xMetaApplication;
#define STRUCT_Con_M_Hx_xNullTerm struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hx_xNullTerm;
#define STRUCT_Con_M_Hx_xVariableUse struct _Con_M_Hx_xVariableUse
struct _Con_M_Hx_xVariableUse {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xVariableUse;
#define STRUCT_Con_M_Hx_xSpecial struct _Con_M_Hx_xSpecial
struct _Con_M_Hx_xSpecial {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xSpecial;
#define STRUCT_Con_M_Hx_xUnparsed struct _Con_M_Hx_xUnparsed
struct _Con_M_Hx_xUnparsed {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xUnparsed;
#define STRUCT_Con_M_Hx_xVariableUseSorted struct _Con_M_Hx_xVariableUseSorted
struct _Con_M_Hx_xVariableUseSorted {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xVariableUseSorted;
#define STRUCT_Con_M_Hx_xUnparsedSorted struct _Con_M_Hx_xUnparsedSorted
struct _Con_M_Hx_xUnparsedSorted {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xUnparsedSorted;
#define STRUCT_Con_M_Hx_xLiteralSorted struct _Con_M_Hx_xLiteralSorted
struct _Con_M_Hx_xLiteralSorted {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xLiteralSorted;
#define STRUCT_Con_M_Hx_xLiteral struct _Con_M_Hx_xLiteral
struct _Con_M_Hx_xLiteral {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xLiteral;
#define STRUCT_Con_M_Hx_xMetaApplicationSorted struct _Con_M_Hx_xMetaApplicationSorted
struct _Con_M_Hx_xMetaApplicationSorted {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xMetaApplicationSorted;
#define STRUCT_Con_M_Hx_xConstruction struct _Con_M_Hx_xConstruction
struct _Con_M_Hx_xConstruction {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hx_xConstruction;
extern struct _SortDescriptor sort_M_HxTerm;

/* DATA SORT Location HEADER DECLARATIONS. */
typedef enum {FunOf_M_Location = 0, VarOf_M_Location = 1, Data_M_LOC} EnumOf_M_Location;
#define STRUCT_Con_M_LOC struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_LOC;
extern struct _SortDescriptor sort_M_Location;

/* DATA SORT Name2NamesMap HEADER DECLARATIONS. */
typedef enum {FunOf_M_Name2NamesMap = 0, VarOf_M_Name2NamesMap = 1, Data_M_N2Ns} EnumOf_M_Name2NamesMap;
#define STRUCT_Con_M_N2Ns struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_N2Ns;
extern struct _SortDescriptor sort_M_Name2NamesMap;

/* DATA SORT NameMap HEADER DECLARATIONS. */
typedef enum {FunOf_M_NameMap = 0, VarOf_M_NameMap = 1, Data_M_N2N} EnumOf_M_NameMap;
#define STRUCT_Con_M_N2N struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_N2N;
extern struct _SortDescriptor sort_M_NameMap;

/* DATA SORT NameSet HEADER DECLARATIONS. */
typedef enum {FunOf_M_NameSet = 0, VarOf_M_NameSet = 1, Data_M_NAME_xSET} EnumOf_M_NameSet;
#define STRUCT_Con_M_NAME_xSET struct _Con_M_NAME_xSET
struct _Con_M_NAME_xSET {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NAME_xSET;
extern struct _SortDescriptor sort_M_NameSet;

/* DATA SORT Ok HEADER DECLARATIONS. */
typedef enum {FunOf_M_Ok = 0, VarOf_M_Ok = 1, Data_M_OK} EnumOf_M_Ok;
#define STRUCT_Con_M_OK struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_OK;
extern struct _SortDescriptor sort_M_Ok;

/* DATA SORT PFK_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PFK_xSORT = 0, VarOf_M_PFK_xSORT = 1, Data_M_PFK} EnumOf_M_PFK_xSORT;
#define STRUCT_Con_M_PFK struct _Con_M_PFK
struct _Con_M_PFK {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_PFK;
extern struct _SortDescriptor sort_M_PFK_xSORT;

/* DATA SORT PropsOf$AFM_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sAFM_xSORT = 0, VarOf_M_PropsOf_sAFM_xSORT = 1, Data_M_PropsOf_sAFM} EnumOf_M_PropsOf_sAFM_xSORT;
#define STRUCT_Con_M_PropsOf_sAFM struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sAFM;
extern struct _SortDescriptor sort_M_PropsOf_sAFM_xSORT;

/* DATA SORT PropsOf$DME_AFM_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDME_xAFM_xSORT = 0, VarOf_M_PropsOf_sDME_xAFM_xSORT = 1, Data_M_PropsOf_sDME_xAFM} EnumOf_M_PropsOf_sDME_xAFM_xSORT;
#define STRUCT_Con_M_PropsOf_sDME_xAFM struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xAFM;
extern struct _SortDescriptor sort_M_PropsOf_sDME_xAFM_xSORT;

/* DATA SORT PropsOf$DME_ALIAS_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDME_xALIAS_xSORT = 0, VarOf_M_PropsOf_sDME_xALIAS_xSORT = 1, Data_M_PropsOf_sDME_xALIAS} EnumOf_M_PropsOf_sDME_xALIAS_xSORT;
#define STRUCT_Con_M_PropsOf_sDME_xALIAS struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xALIAS;
extern struct _SortDescriptor sort_M_PropsOf_sDME_xALIAS_xSORT;

/* DATA SORT PropsOf$DME_ATTRIBUTE_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDME_xATTRIBUTE_xSORT = 0, VarOf_M_PropsOf_sDME_xATTRIBUTE_xSORT = 1, Data_M_PropsOf_sDME_xATTRIBUTE} EnumOf_M_PropsOf_sDME_xATTRIBUTE_xSORT;
#define STRUCT_Con_M_PropsOf_sDME_xATTRIBUTE struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xATTRIBUTE;
extern struct _SortDescriptor sort_M_PropsOf_sDME_xATTRIBUTE_xSORT;

/* DATA SORT PropsOf$DME_N2NM_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDME_xN2NM_xSORT = 0, VarOf_M_PropsOf_sDME_xN2NM_xSORT = 1, Data_M_PropsOf_sDME_xN2NM} EnumOf_M_PropsOf_sDME_xN2NM_xSORT;
#define STRUCT_Con_M_PropsOf_sDME_xN2NM struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xN2NM;
extern struct _SortDescriptor sort_M_PropsOf_sDME_xN2NM_xSORT;

/* DATA SORT PropsOf$DME_N2N_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDME_xN2N_xSORT = 0, VarOf_M_PropsOf_sDME_xN2N_xSORT = 1, Data_M_PropsOf_sDME_xN2N} EnumOf_M_PropsOf_sDME_xN2N_xSORT;
#define STRUCT_Con_M_PropsOf_sDME_xN2N struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xN2N;
extern struct _SortDescriptor sort_M_PropsOf_sDME_xN2N_xSORT;

/* DATA SORT PropsOf$DME_NAMES_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDME_xNAMES_xSORT = 0, VarOf_M_PropsOf_sDME_xNAMES_xSORT = 1, Data_M_PropsOf_sDME_xNAMES} EnumOf_M_PropsOf_sDME_xNAMES_xSORT;
#define STRUCT_Con_M_PropsOf_sDME_xNAMES struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xNAMES;
extern struct _SortDescriptor sort_M_PropsOf_sDME_xNAMES_xSORT;

/* DATA SORT PropsOf$DME_NONE_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDME_xNONE_xSORT = 0, VarOf_M_PropsOf_sDME_xNONE_xSORT = 1, Data_M_PropsOf_sDME_xNONE} EnumOf_M_PropsOf_sDME_xNONE_xSORT;
#define STRUCT_Con_M_PropsOf_sDME_xNONE struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xNONE;
extern struct _SortDescriptor sort_M_PropsOf_sDME_xNONE_xSORT;

/* DATA SORT PropsOf$DME_SORT_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDME_xSORT_xSORT = 0, VarOf_M_PropsOf_sDME_xSORT_xSORT = 1, Data_M_PropsOf_sDME_xSORT} EnumOf_M_PropsOf_sDME_xSORT_xSORT;
#define STRUCT_Con_M_PropsOf_sDME_xSORT struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xSORT;
extern struct _SortDescriptor sort_M_PropsOf_sDME_xSORT_xSORT;

/* DATA SORT PropsOf$DME_STRING_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDME_xSTRING_xSORT = 0, VarOf_M_PropsOf_sDME_xSTRING_xSORT = 1, Data_M_PropsOf_sDME_xSTRING} EnumOf_M_PropsOf_sDME_xSTRING_xSORT;
#define STRUCT_Con_M_PropsOf_sDME_xSTRING struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xSTRING;
extern struct _SortDescriptor sort_M_PropsOf_sDME_xSTRING_xSORT;

/* DATA SORT PropsOf$DME_TOKEN_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDME_xTOKEN_xSORT = 0, VarOf_M_PropsOf_sDME_xTOKEN_xSORT = 1, Data_M_PropsOf_sDME_xTOKEN} EnumOf_M_PropsOf_sDME_xTOKEN_xSORT;
#define STRUCT_Con_M_PropsOf_sDME_xTOKEN struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDME_xTOKEN;
extern struct _SortDescriptor sort_M_PropsOf_sDME_xTOKEN_xSORT;

/* DATA SORT PropsOf$DM_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sDM_xSORT = 0, VarOf_M_PropsOf_sDM_xSORT = 1, Data_M_PropsOf_sDM} EnumOf_M_PropsOf_sDM_xSORT;
#define STRUCT_Con_M_PropsOf_sDM struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sDM;
extern struct _SortDescriptor sort_M_PropsOf_sDM_xSORT;

/* DATA SORT PropsOf$D_ABSTRACTION_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sD_xABSTRACTION_xSORT = 0, VarOf_M_PropsOf_sD_xABSTRACTION_xSORT = 1, Data_M_PropsOf_sD_xABSTRACTION} EnumOf_M_PropsOf_sD_xABSTRACTION_xSORT;
#define STRUCT_Con_M_PropsOf_sD_xABSTRACTION struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sD_xABSTRACTION;
extern struct _SortDescriptor sort_M_PropsOf_sD_xABSTRACTION_xSORT;

/* DATA SORT PropsOf$D_FORM_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sD_xFORM_xSORT = 0, VarOf_M_PropsOf_sD_xFORM_xSORT = 1, Data_M_PropsOf_sD_xFORM} EnumOf_M_PropsOf_sD_xFORM_xSORT;
#define STRUCT_Con_M_PropsOf_sD_xFORM struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sD_xFORM;
extern struct _SortDescriptor sort_M_PropsOf_sD_xFORM_xSORT;

/* DATA SORT PropsOf$D_NONE_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sD_xNONE_xSORT = 0, VarOf_M_PropsOf_sD_xNONE_xSORT = 1, Data_M_PropsOf_sD_xNONE} EnumOf_M_PropsOf_sD_xNONE_xSORT;
#define STRUCT_Con_M_PropsOf_sD_xNONE struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sD_xNONE;
extern struct _SortDescriptor sort_M_PropsOf_sD_xNONE_xSORT;

/* DATA SORT PropsOf$D_RULE_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sD_xRULE_xSORT = 0, VarOf_M_PropsOf_sD_xRULE_xSORT = 1, Data_M_PropsOf_sD_xRULE} EnumOf_M_PropsOf_sD_xRULE_xSORT;
#define STRUCT_Con_M_PropsOf_sD_xRULE struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sD_xRULE;
extern struct _SortDescriptor sort_M_PropsOf_sD_xRULE_xSORT;

/* DATA SORT PropsOf$D_SYNTHESIZES_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sD_xSYNTHESIZES_xSORT = 0, VarOf_M_PropsOf_sD_xSYNTHESIZES_xSORT = 1, Data_M_PropsOf_sD_xSYNTHESIZES} EnumOf_M_PropsOf_sD_xSYNTHESIZES_xSORT;
#define STRUCT_Con_M_PropsOf_sD_xSYNTHESIZES struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sD_xSYNTHESIZES;
extern struct _SortDescriptor sort_M_PropsOf_sD_xSYNTHESIZES_xSORT;

/* DATA SORT PropsOf$Hx_AttributeCatchAll_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttributeCatchAll_xSORT = 0, VarOf_M_PropsOf_sHx_xAttributeCatchAll_xSORT = 1, Data_M_PropsOf_sHx_xAttributeCatchAll} EnumOf_M_PropsOf_sHx_xAttributeCatchAll_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttributeCatchAll struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeCatchAll;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeCatchAll_xSORT;

/* DATA SORT PropsOf$Hx_AttributeFormMap_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttributeFormMap_xSORT = 0, VarOf_M_PropsOf_sHx_xAttributeFormMap_xSORT = 1, Data_M_PropsOf_sHx_xAttributeFormMap} EnumOf_M_PropsOf_sHx_xAttributeFormMap_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttributeFormMap struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeFormMap;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeFormMap_xSORT;

/* DATA SORT PropsOf$Hx_AttributeFormSet_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttributeFormSet_xSORT = 0, VarOf_M_PropsOf_sHx_xAttributeFormSet_xSORT = 1, Data_M_PropsOf_sHx_xAttributeFormSet} EnumOf_M_PropsOf_sHx_xAttributeFormSet_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttributeFormSet struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeFormSet;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeFormSet_xSORT;

/* DATA SORT PropsOf$Hx_AttributeFormSimple_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttributeFormSimple_xSORT = 0, VarOf_M_PropsOf_sHx_xAttributeFormSimple_xSORT = 1, Data_M_PropsOf_sHx_xAttributeFormSimple} EnumOf_M_PropsOf_sHx_xAttributeFormSimple_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttributeFormSimple struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeFormSimple;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeFormSimple_xSORT;

/* DATA SORT PropsOf$Hx_AttributeKeyValue_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttributeKeyValue_xSORT = 0, VarOf_M_PropsOf_sHx_xAttributeKeyValue_xSORT = 1, Data_M_PropsOf_sHx_xAttributeKeyValue} EnumOf_M_PropsOf_sHx_xAttributeKeyValue_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttributeKeyValue struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeKeyValue;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeKeyValue_xSORT;

/* DATA SORT PropsOf$Hx_AttributeKey_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttributeKey_xSORT = 0, VarOf_M_PropsOf_sHx_xAttributeKey_xSORT = 1, Data_M_PropsOf_sHx_xAttributeKey} EnumOf_M_PropsOf_sHx_xAttributeKey_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttributeKey struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeKey;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeKey_xSORT;

/* DATA SORT PropsOf$Hx_AttributeKindDown_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttributeKindDown_xSORT = 0, VarOf_M_PropsOf_sHx_xAttributeKindDown_xSORT = 1, Data_M_PropsOf_sHx_xAttributeKindDown} EnumOf_M_PropsOf_sHx_xAttributeKindDown_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttributeKindDown struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeKindDown;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeKindDown_xSORT;

/* DATA SORT PropsOf$Hx_AttributeKindUp_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttributeKindUp_xSORT = 0, VarOf_M_PropsOf_sHx_xAttributeKindUp_xSORT = 1, Data_M_PropsOf_sHx_xAttributeKindUp} EnumOf_M_PropsOf_sHx_xAttributeKindUp_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttributeKindUp struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeKindUp;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeKindUp_xSORT;

/* DATA SORT PropsOf$Hx_AttributeNotKey_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttributeNotKey_xSORT = 0, VarOf_M_PropsOf_sHx_xAttributeNotKey_xSORT = 1, Data_M_PropsOf_sHx_xAttributeNotKey} EnumOf_M_PropsOf_sHx_xAttributeNotKey_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttributeNotKey struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeNotKey;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeNotKey_xSORT;

/* DATA SORT PropsOf$Hx_AttributeValue_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttributeValue_xSORT = 0, VarOf_M_PropsOf_sHx_xAttributeValue_xSORT = 1, Data_M_PropsOf_sHx_xAttributeValue} EnumOf_M_PropsOf_sHx_xAttributeValue_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttributeValue struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttributeValue;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttributeValue_xSORT;

/* DATA SORT PropsOf$Hx_Attribute_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xAttribute_xSORT = 0, VarOf_M_PropsOf_sHx_xAttribute_xSORT = 1, Data_M_PropsOf_sHx_xAttribute} EnumOf_M_PropsOf_sHx_xAttribute_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xAttribute struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xAttribute;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xAttribute_xSORT;

/* DATA SORT PropsOf$Hx_CatchAllAttributes_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xCatchAllAttributes_xSORT = 0, VarOf_M_PropsOf_sHx_xCatchAllAttributes_xSORT = 1, Data_M_PropsOf_sHx_xCatchAllAttributes} EnumOf_M_PropsOf_sHx_xCatchAllAttributes_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xCatchAllAttributes struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xCatchAllAttributes;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xCatchAllAttributes_xSORT;

/* DATA SORT PropsOf$Hx_ConstructionSorted_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xConstructionSorted_xSORT = 0, VarOf_M_PropsOf_sHx_xConstructionSorted_xSORT = 1, Data_M_PropsOf_sHx_xConstructionSorted} EnumOf_M_PropsOf_sHx_xConstructionSorted_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xConstructionSorted struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xConstructionSorted;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xConstructionSorted_xSORT;

/* DATA SORT PropsOf$Hx_Construction_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xConstruction_xSORT = 0, VarOf_M_PropsOf_sHx_xConstruction_xSORT = 1, Data_M_PropsOf_sHx_xConstruction} EnumOf_M_PropsOf_sHx_xConstruction_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xConstruction struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xConstruction;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xConstruction_xSORT;

/* DATA SORT PropsOf$Hx_FormConstruction_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xFormConstruction_xSORT = 0, VarOf_M_PropsOf_sHx_xFormConstruction_xSORT = 1, Data_M_PropsOf_sHx_xFormConstruction} EnumOf_M_PropsOf_sHx_xFormConstruction_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xFormConstruction struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xFormConstruction;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xFormConstruction_xSORT;

/* DATA SORT PropsOf$Hx_FormParsed_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xFormParsed_xSORT = 0, VarOf_M_PropsOf_sHx_xFormParsed_xSORT = 1, Data_M_PropsOf_sHx_xFormParsed} EnumOf_M_PropsOf_sHx_xFormParsed_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xFormParsed struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xFormParsed;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xFormParsed_xSORT;

/* DATA SORT PropsOf$Hx_LiteralSorted_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xLiteralSorted_xSORT = 0, VarOf_M_PropsOf_sHx_xLiteralSorted_xSORT = 1, Data_M_PropsOf_sHx_xLiteralSorted} EnumOf_M_PropsOf_sHx_xLiteralSorted_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xLiteralSorted struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xLiteralSorted;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xLiteralSorted_xSORT;

/* DATA SORT PropsOf$Hx_Literal_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xLiteral_xSORT = 0, VarOf_M_PropsOf_sHx_xLiteral_xSORT = 1, Data_M_PropsOf_sHx_xLiteral} EnumOf_M_PropsOf_sHx_xLiteral_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xLiteral struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xLiteral;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xLiteral_xSORT;

/* DATA SORT PropsOf$Hx_MetaApplicationSorted_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xMetaApplicationSorted_xSORT = 0, VarOf_M_PropsOf_sHx_xMetaApplicationSorted_xSORT = 1, Data_M_PropsOf_sHx_xMetaApplicationSorted} EnumOf_M_PropsOf_sHx_xMetaApplicationSorted_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xMetaApplicationSorted struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xMetaApplicationSorted;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xMetaApplicationSorted_xSORT;

/* DATA SORT PropsOf$Hx_MetaApplication_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xMetaApplication_xSORT = 0, VarOf_M_PropsOf_sHx_xMetaApplication_xSORT = 1, Data_M_PropsOf_sHx_xMetaApplication} EnumOf_M_PropsOf_sHx_xMetaApplication_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xMetaApplication struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xMetaApplication;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xMetaApplication_xSORT;

/* DATA SORT PropsOf$Hx_NoAttributeForm_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xNoAttributeForm_xSORT = 0, VarOf_M_PropsOf_sHx_xNoAttributeForm_xSORT = 1, Data_M_PropsOf_sHx_xNoAttributeForm} EnumOf_M_PropsOf_sHx_xNoAttributeForm_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xNoAttributeForm struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xNoAttributeForm;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xNoAttributeForm_xSORT;

/* DATA SORT PropsOf$Hx_Normal_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xNormal_xSORT = 0, VarOf_M_PropsOf_sHx_xNormal_xSORT = 1, Data_M_PropsOf_sHx_xNormal} EnumOf_M_PropsOf_sHx_xNormal_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xNormal struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xNormal;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xNormal_xSORT;

/* DATA SORT PropsOf$Hx_NullTerm_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xNullTerm_xSORT = 0, VarOf_M_PropsOf_sHx_xNullTerm_xSORT = 1, Data_M_PropsOf_sHx_xNullTerm} EnumOf_M_PropsOf_sHx_xNullTerm_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xNullTerm struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xNullTerm;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xNullTerm_xSORT;

/* DATA SORT PropsOf$Hx_ParsedFormDone_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xParsedFormDone_xSORT = 0, VarOf_M_PropsOf_sHx_xParsedFormDone_xSORT = 1, Data_M_PropsOf_sHx_xParsedFormDone} EnumOf_M_PropsOf_sHx_xParsedFormDone_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xParsedFormDone struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xParsedFormDone;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xParsedFormDone_xSORT;

/* DATA SORT PropsOf$Hx_ParsedFormSpace_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xParsedFormSpace_xSORT = 0, VarOf_M_PropsOf_sHx_xParsedFormSpace_xSORT = 1, Data_M_PropsOf_sHx_xParsedFormSpace} EnumOf_M_PropsOf_sHx_xParsedFormSpace_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xParsedFormSpace struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xParsedFormSpace;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xParsedFormSpace_xSORT;

/* DATA SORT PropsOf$Hx_ParsedFormTerm_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xParsedFormTerm_xSORT = 0, VarOf_M_PropsOf_sHx_xParsedFormTerm_xSORT = 1, Data_M_PropsOf_sHx_xParsedFormTerm} EnumOf_M_PropsOf_sHx_xParsedFormTerm_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xParsedFormTerm struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xParsedFormTerm;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xParsedFormTerm_xSORT;

/* DATA SORT PropsOf$Hx_ParsedFormWord_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xParsedFormWord_xSORT = 0, VarOf_M_PropsOf_sHx_xParsedFormWord_xSORT = 1, Data_M_PropsOf_sHx_xParsedFormWord} EnumOf_M_PropsOf_sHx_xParsedFormWord_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xParsedFormWord struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xParsedFormWord;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xParsedFormWord_xSORT;

/* DATA SORT PropsOf$Hx_RegExpAny_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpAny_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpAny_xSORT = 1, Data_M_PropsOf_sHx_xRegExpAny} EnumOf_M_PropsOf_sHx_xRegExpAny_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpAny struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpAny;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpAny_xSORT;

/* DATA SORT PropsOf$Hx_RegExpClassChar_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpClassChar_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpClassChar_xSORT = 1, Data_M_PropsOf_sHx_xRegExpClassChar} EnumOf_M_PropsOf_sHx_xRegExpClassChar_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpClassChar struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpClassChar;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpClassChar_xSORT;

/* DATA SORT PropsOf$Hx_RegExpClassDone_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpClassDone_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpClassDone_xSORT = 1, Data_M_PropsOf_sHx_xRegExpClassDone} EnumOf_M_PropsOf_sHx_xRegExpClassDone_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpClassDone struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpClassDone;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpClassDone_xSORT;

/* DATA SORT PropsOf$Hx_RegExpClassNot_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpClassNot_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpClassNot_xSORT = 1, Data_M_PropsOf_sHx_xRegExpClassNot} EnumOf_M_PropsOf_sHx_xRegExpClassNot_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpClassNot struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpClassNot;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpClassNot_xSORT;

/* DATA SORT PropsOf$Hx_RegExpClassRange_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpClassRange_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpClassRange_xSORT = 1, Data_M_PropsOf_sHx_xRegExpClassRange} EnumOf_M_PropsOf_sHx_xRegExpClassRange_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpClassRange struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpClassRange;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpClassRange_xSORT;

/* DATA SORT PropsOf$Hx_RegExpClass_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpClass_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpClass_xSORT = 1, Data_M_PropsOf_sHx_xRegExpClass} EnumOf_M_PropsOf_sHx_xRegExpClass_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpClass struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpClass;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpClass_xSORT;

/* DATA SORT PropsOf$Hx_RegExpConcat_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpConcat_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpConcat_xSORT = 1, Data_M_PropsOf_sHx_xRegExpConcat} EnumOf_M_PropsOf_sHx_xRegExpConcat_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpConcat struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpConcat;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpConcat_xSORT;

/* DATA SORT PropsOf$Hx_RegExpNest_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpNest_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpNest_xSORT = 1, Data_M_PropsOf_sHx_xRegExpNest} EnumOf_M_PropsOf_sHx_xRegExpNest_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpNest struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpNest;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpNest_xSORT;

/* DATA SORT PropsOf$Hx_RegExpRef_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpRef_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpRef_xSORT = 1, Data_M_PropsOf_sHx_xRegExpRef} EnumOf_M_PropsOf_sHx_xRegExpRef_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpRef struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpRef;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpRef_xSORT;

/* DATA SORT PropsOf$Hx_RegExpString_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpString_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpString_xSORT = 1, Data_M_PropsOf_sHx_xRegExpString} EnumOf_M_PropsOf_sHx_xRegExpString_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpString struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpString;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpString_xSORT;

/* DATA SORT PropsOf$Hx_RegExpUnit_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpUnit_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpUnit_xSORT = 1, Data_M_PropsOf_sHx_xRegExpUnit} EnumOf_M_PropsOf_sHx_xRegExpUnit_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpUnit struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpUnit;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpUnit_xSORT;

/* DATA SORT PropsOf$Hx_RegExpWord_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRegExpWord_xSORT = 0, VarOf_M_PropsOf_sHx_xRegExpWord_xSORT = 1, Data_M_PropsOf_sHx_xRegExpWord} EnumOf_M_PropsOf_sHx_xRegExpWord_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRegExpWord struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRegExpWord;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRegExpWord_xSORT;

/* DATA SORT PropsOf$Hx_RepeatMaybeSome_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRepeatMaybeSome_xSORT = 0, VarOf_M_PropsOf_sHx_xRepeatMaybeSome_xSORT = 1, Data_M_PropsOf_sHx_xRepeatMaybeSome} EnumOf_M_PropsOf_sHx_xRepeatMaybeSome_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRepeatMaybeSome struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRepeatMaybeSome;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRepeatMaybeSome_xSORT;

/* DATA SORT PropsOf$Hx_RepeatMaybe_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRepeatMaybe_xSORT = 0, VarOf_M_PropsOf_sHx_xRepeatMaybe_xSORT = 1, Data_M_PropsOf_sHx_xRepeatMaybe} EnumOf_M_PropsOf_sHx_xRepeatMaybe_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRepeatMaybe struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRepeatMaybe;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRepeatMaybe_xSORT;

/* DATA SORT PropsOf$Hx_RepeatSingle_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRepeatSingle_xSORT = 0, VarOf_M_PropsOf_sHx_xRepeatSingle_xSORT = 1, Data_M_PropsOf_sHx_xRepeatSingle} EnumOf_M_PropsOf_sHx_xRepeatSingle_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRepeatSingle struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRepeatSingle;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRepeatSingle_xSORT;

/* DATA SORT PropsOf$Hx_RepeatSomeSep_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRepeatSomeSep_xSORT = 0, VarOf_M_PropsOf_sHx_xRepeatSomeSep_xSORT = 1, Data_M_PropsOf_sHx_xRepeatSomeSep} EnumOf_M_PropsOf_sHx_xRepeatSomeSep_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRepeatSomeSep struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRepeatSomeSep;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRepeatSomeSep_xSORT;

/* DATA SORT PropsOf$Hx_RepeatSome_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRepeatSome_xSORT = 0, VarOf_M_PropsOf_sHx_xRepeatSome_xSORT = 1, Data_M_PropsOf_sHx_xRepeatSome} EnumOf_M_PropsOf_sHx_xRepeatSome_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRepeatSome struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRepeatSome;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRepeatSome_xSORT;

/* DATA SORT PropsOf$Hx_RulePrefix_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRulePrefix_xSORT = 0, VarOf_M_PropsOf_sHx_xRulePrefix_xSORT = 1, Data_M_PropsOf_sHx_xRulePrefix} EnumOf_M_PropsOf_sHx_xRulePrefix_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRulePrefix struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRulePrefix;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRulePrefix_xSORT;

/* DATA SORT PropsOf$Hx_Rule_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xRule_xSORT = 0, VarOf_M_PropsOf_sHx_xRule_xSORT = 1, Data_M_PropsOf_sHx_xRule} EnumOf_M_PropsOf_sHx_xRule_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xRule struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xRule;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xRule_xSORT;

/* DATA SORT PropsOf$Hx_ScopeSortPrecBind_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xScopeSortPrecBind_xSORT = 0, VarOf_M_PropsOf_sHx_xScopeSortPrecBind_xSORT = 1, Data_M_PropsOf_sHx_xScopeSortPrecBind} EnumOf_M_PropsOf_sHx_xScopeSortPrecBind_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xScopeSortPrecBind struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xScopeSortPrecBind;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xScopeSortPrecBind_xSORT;

/* DATA SORT PropsOf$Hx_ScopeSortPrec_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xScopeSortPrec_xSORT = 0, VarOf_M_PropsOf_sHx_xScopeSortPrec_xSORT = 1, Data_M_PropsOf_sHx_xScopeSortPrec} EnumOf_M_PropsOf_sHx_xScopeSortPrec_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xScopeSortPrec struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xScopeSortPrec;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xScopeSortPrec_xSORT;

/* DATA SORT PropsOf$Hx_ScopeSort_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xScopeSort_xSORT = 0, VarOf_M_PropsOf_sHx_xScopeSort_xSORT = 1, Data_M_PropsOf_sHx_xScopeSort} EnumOf_M_PropsOf_sHx_xScopeSort_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xScopeSort struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xScopeSort;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xScopeSort_xSORT;

/* DATA SORT PropsOf$Hx_Scope_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xScope_xSORT = 0, VarOf_M_PropsOf_sHx_xScope_xSORT = 1, Data_M_PropsOf_sHx_xScope} EnumOf_M_PropsOf_sHx_xScope_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xScope struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xScope;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xScope_xSORT;

/* DATA SORT PropsOf$Hx_SortAbstractionBody_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xSortAbstractionBody_xSORT = 0, VarOf_M_PropsOf_sHx_xSortAbstractionBody_xSORT = 1, Data_M_PropsOf_sHx_xSortAbstractionBody} EnumOf_M_PropsOf_sHx_xSortAbstractionBody_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xSortAbstractionBody struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSortAbstractionBody;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xSortAbstractionBody_xSORT;

/* DATA SORT PropsOf$Hx_SortAbstractionParam_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xSortAbstractionParam_xSORT = 0, VarOf_M_PropsOf_sHx_xSortAbstractionParam_xSORT = 1, Data_M_PropsOf_sHx_xSortAbstractionParam} EnumOf_M_PropsOf_sHx_xSortAbstractionParam_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xSortAbstractionParam struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSortAbstractionParam;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xSortAbstractionParam_xSORT;

/* DATA SORT PropsOf$Hx_SortName_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xSortName_xSORT = 0, VarOf_M_PropsOf_sHx_xSortName_xSORT = 1, Data_M_PropsOf_sHx_xSortName} EnumOf_M_PropsOf_sHx_xSortName_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xSortName struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSortName;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xSortName_xSORT;

/* DATA SORT PropsOf$Hx_SortParam_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xSortParam_xSORT = 0, VarOf_M_PropsOf_sHx_xSortParam_xSORT = 1, Data_M_PropsOf_sHx_xSortParam} EnumOf_M_PropsOf_sHx_xSortParam_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xSortParam struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSortParam;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xSortParam_xSORT;

/* DATA SORT PropsOf$Hx_Sort_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xSort_xSORT = 0, VarOf_M_PropsOf_sHx_xSort_xSORT = 1, Data_M_PropsOf_sHx_xSort} EnumOf_M_PropsOf_sHx_xSort_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xSort struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSort;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xSort_xSORT;

/* DATA SORT PropsOf$Hx_Special_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xSpecial_xSORT = 0, VarOf_M_PropsOf_sHx_xSpecial_xSORT = 1, Data_M_PropsOf_sHx_xSpecial} EnumOf_M_PropsOf_sHx_xSpecial_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xSpecial struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSpecial;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xSpecial_xSORT;

/* DATA SORT PropsOf$Hx_SubstituteNoSort_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xSubstituteNoSort_xSORT = 0, VarOf_M_PropsOf_sHx_xSubstituteNoSort_xSORT = 1, Data_M_PropsOf_sHx_xSubstituteNoSort} EnumOf_M_PropsOf_sHx_xSubstituteNoSort_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xSubstituteNoSort struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSubstituteNoSort;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xSubstituteNoSort_xSORT;

/* DATA SORT PropsOf$Hx_SubstituteSort_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xSubstituteSort_xSORT = 0, VarOf_M_PropsOf_sHx_xSubstituteSort_xSORT = 1, Data_M_PropsOf_sHx_xSubstituteSort} EnumOf_M_PropsOf_sHx_xSubstituteSort_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xSubstituteSort struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSubstituteSort;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xSubstituteSort_xSORT;

/* DATA SORT PropsOf$Hx_SynthesizedRef_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xSynthesizedRef_xSORT = 0, VarOf_M_PropsOf_sHx_xSynthesizedRef_xSORT = 1, Data_M_PropsOf_sHx_xSynthesizedRef} EnumOf_M_PropsOf_sHx_xSynthesizedRef_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xSynthesizedRef struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xSynthesizedRef;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xSynthesizedRef_xSORT;

/* DATA SORT PropsOf$Hx_UnparsedSorted_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xUnparsedSorted_xSORT = 0, VarOf_M_PropsOf_sHx_xUnparsedSorted_xSORT = 1, Data_M_PropsOf_sHx_xUnparsedSorted} EnumOf_M_PropsOf_sHx_xUnparsedSorted_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xUnparsedSorted struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xUnparsedSorted;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xUnparsedSorted_xSORT;

/* DATA SORT PropsOf$Hx_Unparsed_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xUnparsed_xSORT = 0, VarOf_M_PropsOf_sHx_xUnparsed_xSORT = 1, Data_M_PropsOf_sHx_xUnparsed} EnumOf_M_PropsOf_sHx_xUnparsed_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xUnparsed struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xUnparsed;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xUnparsed_xSORT;

/* DATA SORT PropsOf$Hx_VariableUseSorted_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xVariableUseSorted_xSORT = 0, VarOf_M_PropsOf_sHx_xVariableUseSorted_xSORT = 1, Data_M_PropsOf_sHx_xVariableUseSorted} EnumOf_M_PropsOf_sHx_xVariableUseSorted_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xVariableUseSorted struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xVariableUseSorted;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xVariableUseSorted_xSORT;

/* DATA SORT PropsOf$Hx_VariableUse_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xVariableUse_xSORT = 0, VarOf_M_PropsOf_sHx_xVariableUse_xSORT = 1, Data_M_PropsOf_sHx_xVariableUse} EnumOf_M_PropsOf_sHx_xVariableUse_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xVariableUse struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xVariableUse;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xVariableUse_xSORT;

/* DATA SORT PropsOf$Hx_anonymous_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xanonymous_xSORT = 0, VarOf_M_PropsOf_sHx_xanonymous_xSORT = 1, Data_M_PropsOf_sHx_xanonymous} EnumOf_M_PropsOf_sHx_xanonymous_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xanonymous struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xanonymous;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xanonymous_xSORT;

/* DATA SORT PropsOf$Hx_attribute_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xattribute_xSORT = 0, VarOf_M_PropsOf_sHx_xattribute_xSORT = 1, Data_M_PropsOf_sHx_xattribute} EnumOf_M_PropsOf_sHx_xattribute_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xattribute struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xattribute;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xattribute_xSORT;

/* DATA SORT PropsOf$Hx_binds_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xbinds_xSORT = 0, VarOf_M_PropsOf_sHx_xbinds_xSORT = 1, Data_M_PropsOf_sHx_xbinds} EnumOf_M_PropsOf_sHx_xbinds_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xbinds struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xbinds;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xbinds_xSORT;

/* DATA SORT PropsOf$Hx_data_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xdata_xSORT = 0, VarOf_M_PropsOf_sHx_xdata_xSORT = 1, Data_M_PropsOf_sHx_xdata} EnumOf_M_PropsOf_sHx_xdata_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xdata struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xdata;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xdata_xSORT;

/* DATA SORT PropsOf$Hx_default_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xdefault_xSORT = 0, VarOf_M_PropsOf_sHx_xdefault_xSORT = 1, Data_M_PropsOf_sHx_xdefault} EnumOf_M_PropsOf_sHx_xdefault_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xdefault struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xdefault;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xdefault_xSORT;

/* DATA SORT PropsOf$Hx_embedded-module_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xembedded__module_xSORT = 0, VarOf_M_PropsOf_sHx_xembedded__module_xSORT = 1, Data_M_PropsOf_sHx_xembedded__module} EnumOf_M_PropsOf_sHx_xembedded__module_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xembedded__module struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xembedded__module;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xembedded__module_xSORT;

/* DATA SORT PropsOf$Hx_fragment_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xfragment_xSORT = 0, VarOf_M_PropsOf_sHx_xfragment_xSORT = 1, Data_M_PropsOf_sHx_xfragment} EnumOf_M_PropsOf_sHx_xfragment_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xfragment struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xfragment;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xfragment_xSORT;

/* DATA SORT PropsOf$Hx_import_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_ximport_xSORT = 0, VarOf_M_PropsOf_sHx_ximport_xSORT = 1, Data_M_PropsOf_sHx_ximport} EnumOf_M_PropsOf_sHx_ximport_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_ximport struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_ximport;
extern struct _SortDescriptor sort_M_PropsOf_sHx_ximport_xSORT;

/* DATA SORT PropsOf$Hx_main_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xmain_xSORT = 0, VarOf_M_PropsOf_sHx_xmain_xSORT = 1, Data_M_PropsOf_sHx_xmain} EnumOf_M_PropsOf_sHx_xmain_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xmain struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xmain;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xmain_xSORT;

/* DATA SORT PropsOf$Hx_module_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xmodule_xSORT = 0, VarOf_M_PropsOf_sHx_xmodule_xSORT = 1, Data_M_PropsOf_sHx_xmodule} EnumOf_M_PropsOf_sHx_xmodule_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xmodule struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xmodule;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xmodule_xSORT;

/* DATA SORT PropsOf$Hx_nestedDeclarations_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xnestedDeclarations_xSORT = 0, VarOf_M_PropsOf_sHx_xnestedDeclarations_xSORT = 1, Data_M_PropsOf_sHx_xnestedDeclarations} EnumOf_M_PropsOf_sHx_xnestedDeclarations_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xnestedDeclarations struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xnestedDeclarations;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xnestedDeclarations_xSORT;

/* DATA SORT PropsOf$Hx_nested_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xnested_xSORT = 0, VarOf_M_PropsOf_sHx_xnested_xSORT = 1, Data_M_PropsOf_sHx_xnested} EnumOf_M_PropsOf_sHx_xnested_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xnested struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xnested;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xnested_xSORT;

/* DATA SORT PropsOf$Hx_no-main_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xno__main_xSORT = 0, VarOf_M_PropsOf_sHx_xno__main_xSORT = 1, Data_M_PropsOf_sHx_xno__main} EnumOf_M_PropsOf_sHx_xno__main_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xno__main struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xno__main;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xno__main_xSORT;

/* DATA SORT PropsOf$Hx_priority_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xpriority_xSORT = 0, VarOf_M_PropsOf_sHx_xpriority_xSORT = 1, Data_M_PropsOf_sHx_xpriority} EnumOf_M_PropsOf_sHx_xpriority_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xpriority struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xpriority;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xpriority_xSORT;

/* DATA SORT PropsOf$Hx_rule_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xrule_xSORT = 0, VarOf_M_PropsOf_sHx_xrule_xSORT = 1, Data_M_PropsOf_sHx_xrule} EnumOf_M_PropsOf_sHx_xrule_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xrule struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xrule;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xrule_xSORT;

/* DATA SORT PropsOf$Hx_scheme_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xscheme_xSORT = 0, VarOf_M_PropsOf_sHx_xscheme_xSORT = 1, Data_M_PropsOf_sHx_xscheme} EnumOf_M_PropsOf_sHx_xscheme_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xscheme struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xscheme;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xscheme_xSORT;

/* DATA SORT PropsOf$Hx_sort_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xsort_xSORT = 0, VarOf_M_PropsOf_sHx_xsort_xSORT = 1, Data_M_PropsOf_sHx_xsort} EnumOf_M_PropsOf_sHx_xsort_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xsort struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xsort;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xsort_xSORT;

/* DATA SORT PropsOf$Hx_space_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xspace_xSORT = 0, VarOf_M_PropsOf_sHx_xspace_xSORT = 1, Data_M_PropsOf_sHx_xspace} EnumOf_M_PropsOf_sHx_xspace_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xspace struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xspace;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xspace_xSORT;

/* DATA SORT PropsOf$Hx_static_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xstatic_xSORT = 0, VarOf_M_PropsOf_sHx_xstatic_xSORT = 1, Data_M_PropsOf_sHx_xstatic} EnumOf_M_PropsOf_sHx_xstatic_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xstatic struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xstatic;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xstatic_xSORT;

/* DATA SORT PropsOf$Hx_sugar_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xsugar_xSORT = 0, VarOf_M_PropsOf_sHx_xsugar_xSORT = 1, Data_M_PropsOf_sHx_xsugar} EnumOf_M_PropsOf_sHx_xsugar_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xsugar struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xsugar;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xsugar_xSORT;

/* DATA SORT PropsOf$Hx_symbol_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xsymbol_xSORT = 0, VarOf_M_PropsOf_sHx_xsymbol_xSORT = 1, Data_M_PropsOf_sHx_xsymbol} EnumOf_M_PropsOf_sHx_xsymbol_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xsymbol struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xsymbol;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xsymbol_xSORT;

/* DATA SORT PropsOf$Hx_token_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xtoken_xSORT = 0, VarOf_M_PropsOf_sHx_xtoken_xSORT = 1, Data_M_PropsOf_sHx_xtoken} EnumOf_M_PropsOf_sHx_xtoken_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xtoken struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xtoken;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xtoken_xSORT;

/* DATA SORT PropsOf$Hx_top-module_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sHx_xtop__module_xSORT = 0, VarOf_M_PropsOf_sHx_xtop__module_xSORT = 1, Data_M_PropsOf_sHx_xtop__module} EnumOf_M_PropsOf_sHx_xtop__module_xSORT;
#define STRUCT_Con_M_PropsOf_sHx_xtop__module struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sHx_xtop__module;
extern struct _SortDescriptor sort_M_PropsOf_sHx_xtop__module_xSORT;

/* DATA SORT PropsOf$LOC_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sLOC_xSORT = 0, VarOf_M_PropsOf_sLOC_xSORT = 1, Data_M_PropsOf_sLOC} EnumOf_M_PropsOf_sLOC_xSORT;
#define STRUCT_Con_M_PropsOf_sLOC struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sLOC;
extern struct _SortDescriptor sort_M_PropsOf_sLOC_xSORT;

/* DATA SORT PropsOf$N2N_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sN2N_xSORT = 0, VarOf_M_PropsOf_sN2N_xSORT = 1, Data_M_PropsOf_sN2N} EnumOf_M_PropsOf_sN2N_xSORT;
#define STRUCT_Con_M_PropsOf_sN2N struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sN2N;
extern struct _SortDescriptor sort_M_PropsOf_sN2N_xSORT;

/* DATA SORT PropsOf$N2Ns_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sN2Ns_xSORT = 0, VarOf_M_PropsOf_sN2Ns_xSORT = 1, Data_M_PropsOf_sN2Ns} EnumOf_M_PropsOf_sN2Ns_xSORT;
#define STRUCT_Con_M_PropsOf_sN2Ns struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sN2Ns;
extern struct _SortDescriptor sort_M_PropsOf_sN2Ns_xSORT;

/* DATA SORT PropsOf$SM_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sSM_xSORT = 0, VarOf_M_PropsOf_sSM_xSORT = 1, Data_M_PropsOf_sSM} EnumOf_M_PropsOf_sSM_xSORT;
#define STRUCT_Con_M_PropsOf_sSM struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sSM;
extern struct _SortDescriptor sort_M_PropsOf_sSM_xSORT;

/* DATA SORT PropsOf$TEXT_MAP_SORT HEADER DECLARATIONS. */
typedef enum {FunOf_M_PropsOf_sTEXT_xMAP_xSORT = 0, VarOf_M_PropsOf_sTEXT_xMAP_xSORT = 1, Data_M_PropsOf_sTEXT_xMAP} EnumOf_M_PropsOf_sTEXT_xMAP_xSORT;
#define STRUCT_Con_M_PropsOf_sTEXT_xMAP struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_PropsOf_sTEXT_xMAP;
extern struct _SortDescriptor sort_M_PropsOf_sTEXT_xMAP_xSORT;

/* DATA SORT SortMap HEADER DECLARATIONS. */
typedef enum {FunOf_M_SortMap = 0, VarOf_M_SortMap = 1, Data_M_SM} EnumOf_M_SortMap;
#define STRUCT_Con_M_SM struct _Con_M_SM
struct _Con_M_SM {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SM;
extern struct _SortDescriptor sort_M_SortMap;

/* DATA SORT Text HEADER DECLARATIONS. */
typedef enum {FunOf_M_Text = 0, VarOf_M_Text = 1, Data_M__sTextNil, Data_M__sTextCons} EnumOf_M_Text;
#define STRUCT_Con_M__sTextNil struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M__sTextNil;
#define STRUCT_Con_M__sTextCons struct _Con_M__sTextCons
struct _Con_M__sTextCons {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__sTextCons;
extern struct _SortDescriptor sort_M_Text;

/* DATA SORT Text-Part HEADER DECLARATIONS. */
typedef enum {FunOf_M_Text_Part = 0, VarOf_M_Text_Part = 1, Data_M__sTextChars, Data_M__sTextGroup, Data_M__sTextBreak, Data_M__sTextString, Data_M__sTextIndent, Data_M__sTextEmbed, Data_M__sTextSeparator} EnumOf_M_Text_Part;
#define STRUCT_Con_M__sTextChars struct _Con_M__sTextChars
struct _Con_M__sTextChars {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__sTextChars;
#define STRUCT_Con_M__sTextGroup struct _Con_M__sTextGroup
struct _Con_M__sTextGroup {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__sTextGroup;
#define STRUCT_Con_M__sTextBreak struct _Con_M__sTextBreak
struct _Con_M__sTextBreak {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__sTextBreak;
#define STRUCT_Con_M__sTextString struct _Con_M__sTextString
struct _Con_M__sTextString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__sTextString;
#define STRUCT_Con_M__sTextIndent struct _Con_M__sTextIndent
struct _Con_M__sTextIndent {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__sTextIndent;
#define STRUCT_Con_M__sTextEmbed struct _Con_M__sTextEmbed
struct _Con_M__sTextEmbed {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__sTextEmbed;
#define STRUCT_Con_M__sTextSeparator struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M__sTextSeparator;
extern struct _SortDescriptor sort_M_Text_Part;

/* DATA SORT TextMapSort HEADER DECLARATIONS. */
typedef enum {FunOf_M_TextMapSort = 0, VarOf_M_TextMapSort = 1, Data_M_TEXT_xMAP} EnumOf_M_TextMapSort;
#define STRUCT_Con_M_TEXT_xMAP struct _Con_M_TEXT_xMAP
struct _Con_M_TEXT_xMAP {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TEXT_xMAP;
extern struct _SortDescriptor sort_M_TextMapSort;

/* DATA SORT Wrapper HEADER DECLARATIONS. */
typedef enum {FunOf_M_Wrapper = 0, VarOf_M_Wrapper = 1, Data_M_WRAPPER, Data_M_NO_xWRAPPER} EnumOf_M_Wrapper;
#define STRUCT_Con_M_WRAPPER struct _Con_M_WRAPPER
struct _Con_M_WRAPPER {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_WRAPPER;
#define STRUCT_Con_M_NO_xWRAPPER struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_NO_xWRAPPER;
extern struct _SortDescriptor sort_M_Wrapper;

/* FUNCTION Util-U-MakeAllNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAllNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MakeAllNames;
extern int step_M_U_MakeAllNames(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes1-1$C-UnsynthesizeAttributes1$1$LOC HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes1_s1 struct _Con_M_C_UnsynthesizeAttributes1_s1
struct _Con_M_C_UnsynthesizeAttributes1_s1 {struct _Construction construction; Term sub[11]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes1_s1;
extern int step_M_C_UnsynthesizeAttributes1_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes1_s2 struct _Con_M_C_UnsynthesizeAttributes1_s2
struct _Con_M_C_UnsynthesizeAttributes1_s2 {struct _Construction construction; Term sub[11]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes1_s2;
extern int step_M_C_UnsynthesizeAttributes1_s2(Sink,Term);

/* FUNCTION Prelude-JoinMappedTextMaps2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JoinMappedTextMaps2_s3 struct _Con_M_JoinMappedTextMaps2_s3
struct _Con_M_JoinMappedTextMaps2_s3 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_JoinMappedTextMaps2_s3;
extern int step_M_JoinMappedTextMaps2_s3(Sink,Term);

/* FUNCTION Util-U-Qualify-Sort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Qualify_Sort_s1 struct _Con_M_U_Qualify_Sort_s1
struct _Con_M_U_Qualify_Sort_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Qualify_Sort_s1;
extern int step_M_U_Qualify_Sort_s1(Sink,Term);

/* FUNCTION Util-U-InsertDefine3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine3_s2 struct _Con_M_U_InsertDefine3_s2
struct _Con_M_U_InsertDefine3_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine3_s2;
extern int step_M_U_InsertDefine3_s2(Sink,Term);

/* FUNCTION Util-U-InsertDefine3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine3_s1 struct _Con_M_U_InsertDefine3_s1
struct _Con_M_U_InsertDefine3_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine3_s1;
extern int step_M_U_InsertDefine3_s1(Sink,Term);

/* FUNCTION Util-U-Qualify-Sort-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Qualify_Sort_s3 struct _Con_M_U_Qualify_Sort_s3
struct _Con_M_U_Qualify_Sort_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Qualify_Sort_s3;
extern int step_M_U_Qualify_Sort_s3(Sink,Term);

/* FUNCTION Util-U-Qualify-Sort-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Qualify_Sort_s2 struct _Con_M_U_Qualify_Sort_s2
struct _Con_M_U_Qualify_Sort_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Qualify_Sort_s2;
extern int step_M_U_Qualify_Sort_s2(Sink,Term);

/* FUNCTION Util-U-GetAttributeKeySort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetAttributeKeySort_s3 struct _Con_M_U_GetAttributeKeySort_s3
struct _Con_M_U_GetAttributeKeySort_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetAttributeKeySort_s3;
extern int step_M_U_GetAttributeKeySort_s3(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-AddVariable- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_AddVariable_s1 struct _Con_M_C_ExtendSortMap_AddVariable_s1
struct _Con_M_C_ExtendSortMap_AddVariable_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_AddVariable_s1;
extern int step_M_C_ExtendSortMap_AddVariable_s1(Sink,Term);

/* FUNCTION Util-U-GetAttributeKeySort-1$U-GetAttributeKeySort$2$DME_N2N HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetAttributeKeySort_s2 struct _Con_M_U_GetAttributeKeySort_s2
struct _Con_M_U_GetAttributeKeySort_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetAttributeKeySort_s2;
extern int step_M_U_GetAttributeKeySort_s2(Sink,Term);

/* FUNCTION Util-U-AllSynthesizedMapNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllSynthesizedMapNames_s2 struct _Con_M_U_AllSynthesizedMapNames_s2
struct _Con_M_U_AllSynthesizedMapNames_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllSynthesizedMapNames_s2;
extern int step_M_U_AllSynthesizedMapNames_s2(Sink,Term);

/* FUNCTION Util-U-AllSynthesizedMapNames-1$U-AllSynthesizedMapNames$1$DME_NAMES HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllSynthesizedMapNames_s1 struct _Con_M_U_AllSynthesizedMapNames_s1
struct _Con_M_U_AllSynthesizedMapNames_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllSynthesizedMapNames_s1;
extern int step_M_U_AllSynthesizedMapNames_s1(Sink,Term);

/* FUNCTION Prelude-Neg-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Neg struct _Con_M_Neg
struct _Con_M_Neg {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Neg;
extern int step_M_Neg(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-AddVariable-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_AddVariable_s6 struct _Con_M_C_ExtendSortMap_AddVariable_s6
struct _Con_M_C_ExtendSortMap_AddVariable_s6 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_AddVariable_s6;
extern int step_M_C_ExtendSortMap_AddVariable_s6(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttribute-1$C-CrsxifyAttribute$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttribute_s1 struct _Con_M_C_CrsxifyAttribute_s1
struct _Con_M_C_CrsxifyAttribute_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttribute_s1;
extern int step_M_C_CrsxifyAttribute_s1(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-AddVariable-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_AddVariable_s3 struct _Con_M_C_ExtendSortMap_AddVariable_s3
struct _Con_M_C_ExtendSortMap_AddVariable_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_AddVariable_s3;
extern int step_M_C_ExtendSortMap_AddVariable_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttribute-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttribute_s2 struct _Con_M_C_CrsxifyAttribute_s2
struct _Con_M_C_CrsxifyAttribute_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttribute_s2;
extern int step_M_C_CrsxifyAttribute_s2(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-AddVariable-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_AddVariable_s2 struct _Con_M_C_ExtendSortMap_AddVariable_s2
struct _Con_M_C_ExtendSortMap_AddVariable_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_AddVariable_s2;
extern int step_M_C_ExtendSortMap_AddVariable_s2(Sink,Term);

/* FUNCTION Util-U-DefineWrapper- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapper struct _Con_M_U_DefineWrapper
struct _Con_M_U_DefineWrapper {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapper;
extern int step_M_U_DefineWrapper(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-AddVariable-2$C-ExtendSortMap-AddVariable$5$SM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_AddVariable_s5 struct _Con_M_C_ExtendSortMap_AddVariable_s5
struct _Con_M_C_ExtendSortMap_AddVariable_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_AddVariable_s5;
extern int step_M_C_ExtendSortMap_AddVariable_s5(Sink,Term);

/* FUNCTION Util-U-AttributeFormString-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AttributeFormString_s1 struct _Con_M_U_AttributeFormString_s1
struct _Con_M_U_AttributeFormString_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AttributeFormString_s1;
extern int step_M_U_AttributeFormString_s1(Sink,Term);

/* FUNCTION Util-U-AttributeFormString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AttributeFormString_s2 struct _Con_M_U_AttributeFormString_s2
struct _Con_M_U_AttributeFormString_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AttributeFormString_s2;
extern int step_M_U_AttributeFormString_s2(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternatives-Error-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternatives_Error struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternatives_Error;
extern int step_M_U_MakeDM_SortAlternatives_Error(Sink,Term);

/* FUNCTION Util-U-AttributeFormString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AttributeFormString_s3 struct _Con_M_U_AttributeFormString_s3
struct _Con_M_U_AttributeFormString_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AttributeFormString_s3;
extern int step_M_U_AttributeFormString_s3(Sink,Term);

/* FUNCTION Prelude-ContainsName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_ContainsName_s1 struct _Con_M_ContainsName_s1
struct _Con_M_ContainsName_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_ContainsName_s1;
extern int step_M_ContainsName_s1(Sink,Term);

/* FUNCTION Util-U-AllInheritedNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllInheritedNames_s2 struct _Con_M_U_AllInheritedNames_s2
struct _Con_M_U_AllInheritedNames_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllInheritedNames_s2;
extern int step_M_U_AllInheritedNames_s2(Sink,Term);

/* FUNCTION Util-U-AllInheritedNames-1$U-AllInheritedNames$1$DME_NAMES HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllInheritedNames_s1 struct _Con_M_U_AllInheritedNames_s1
struct _Con_M_U_AllInheritedNames_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllInheritedNames_s1;
extern int step_M_U_AllInheritedNames_s1(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s3 struct _Con_M_C_AddTermInnerSynthesized_s3
struct _Con_M_C_AddTermInnerSynthesized_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s3;
extern int step_M_C_AddTermInnerSynthesized_s3(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s4 struct _Con_M_C_AddTermInnerSynthesized_s4
struct _Con_M_C_AddTermInnerSynthesized_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s4;
extern int step_M_C_AddTermInnerSynthesized_s4(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s1 struct _Con_M_C_AddTermInnerSynthesized_s1
struct _Con_M_C_AddTermInnerSynthesized_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s1;
extern int step_M_C_AddTermInnerSynthesized_s1(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s2 struct _Con_M_C_AddTermInnerSynthesized_s2
struct _Con_M_C_AddTermInnerSynthesized_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s2;
extern int step_M_C_AddTermInnerSynthesized_s2(Sink,Term);

/* FUNCTION Prep-SortVar3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar3_s4 struct _Con_M_SortVar3_s4
struct _Con_M_SortVar3_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar3_s4;
extern int step_M_SortVar3_s4(Sink,Term);

/* FUNCTION Prelude-TraceNameSet-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TraceNameSet_s2 struct _Con_M_TraceNameSet_s2
struct _Con_M_TraceNameSet_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TraceNameSet_s2;
extern int step_M_TraceNameSet_s2(Sink,Term);

/* FUNCTION Prep-SortVar3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar3_s5 struct _Con_M_SortVar3_s5
struct _Con_M_SortVar3_s5 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar3_s5;
extern int step_M_SortVar3_s5(Sink,Term);

/* FUNCTION Prelude-TextToStringWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextToStringWhen_s1 struct _Con_M_TextToStringWhen_s1
struct _Con_M_TextToStringWhen_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextToStringWhen_s1;
extern int step_M_TextToStringWhen_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes struct _Con_M_C_CrsxifyAttributes
struct _Con_M_C_CrsxifyAttributes {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes;
extern int step_M_C_CrsxifyAttributes(Sink,Term);

/* FUNCTION Prep-SortVar3-2$SortVar3$3$$Nil HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar3_s3 struct _Con_M_SortVar3_s3
struct _Con_M_SortVar3_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar3_s3;
extern int step_M_SortVar3_s3(Sink,Term);

/* FUNCTION Prep-SortVar3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar3_s1 struct _Con_M_SortVar3_s1
struct _Con_M_SortVar3_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar3_s1;
extern int step_M_SortVar3_s1(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s9 struct _Con_M_C_AddTermInnerSynthesized_s9
struct _Con_M_C_AddTermInnerSynthesized_s9 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s9;
extern int step_M_C_AddTermInnerSynthesized_s9(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-10 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s7 struct _Con_M_C_AddTermInnerSynthesized_s7
struct _Con_M_C_AddTermInnerSynthesized_s7 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s7;
extern int step_M_C_AddTermInnerSynthesized_s7(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-9$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s8 struct _Con_M_C_AddTermInnerSynthesized_s8
struct _Con_M_C_AddTermInnerSynthesized_s8 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s8;
extern int step_M_C_AddTermInnerSynthesized_s8(Sink,Term);

/* FUNCTION Prelude-StringEmpty-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringEmpty struct _Con_M_StringEmpty
struct _Con_M_StringEmpty {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringEmpty;
extern int step_M_StringEmpty(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s5 struct _Con_M_C_AddTermInnerSynthesized_s5
struct _Con_M_C_AddTermInnerSynthesized_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s5;
extern int step_M_C_AddTermInnerSynthesized_s5(Sink,Term);

/* FUNCTION Cook-C-Print-Form- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Form struct _Con_M_C_Print_Form
struct _Con_M_C_Print_Form {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Form;
extern int step_M_C_Print_Form(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s6 struct _Con_M_C_AddTermInnerSynthesized_s6
struct _Con_M_C_AddTermInnerSynthesized_s6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s6;
extern int step_M_C_AddTermInnerSynthesized_s6(Sink,Term);

/* FUNCTION Util-U-TestIfToken1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1_s10 struct _Con_M_U_TestIfToken1_s10
struct _Con_M_U_TestIfToken1_s10 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1_s10;
extern int step_M_U_TestIfToken1_s10(Sink,Term);

/* FUNCTION Prelude-JoinTextMaps-1$JoinTextMaps$TEXT_MAP HEADER DECLARATIONS. */
#define STRUCT_Con_M_JoinTextMaps struct _Con_M_JoinTextMaps
struct _Con_M_JoinTextMaps {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JoinTextMaps;
extern int step_M_JoinTextMaps(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternatives-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternatives_s2 struct _Con_M_U_MakeDM_SortAlternatives_s2
struct _Con_M_U_MakeDM_SortAlternatives_s2 {struct _Construction construction; Term sub[4]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternatives_s2;
extern int step_M_U_MakeDM_SortAlternatives_s2(Sink,Term);

/* FUNCTION Prelude-EmptyNameMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_EmptyNameMap struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_EmptyNameMap;
extern int step_M_EmptyNameMap(Sink,Term);

/* FUNCTION Util-U-then-ExtendDeclarationMap-1$U-then-ExtendDeclarationMap$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_ExtendDeclarationMap struct _Con_M_U__then_ExtendDeclarationMap
struct _Con_M_U__then_ExtendDeclarationMap {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U__then_ExtendDeclarationMap;
extern int step_M_U__then_ExtendDeclarationMap(Sink,Term);

/* FUNCTION Util-U-IsInheritedMapAttribute-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsInheritedMapAttribute struct _Con_M_U_IsInheritedMapAttribute
struct _Con_M_U_IsInheritedMapAttribute {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsInheritedMapAttribute;
extern int step_M_U_IsInheritedMapAttribute(Sink,Term);

/* FUNCTION Prep-P-Production1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production1_s5 struct _Con_M_P_Production1_s5
struct _Con_M_P_Production1_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production1_s5;
extern int step_M_P_Production1_s5(Sink,Term);

/* FUNCTION Prep-P-Production1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production1_s4 struct _Con_M_P_Production1_s4
struct _Con_M_P_Production1_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production1_s4;
extern int step_M_P_Production1_s4(Sink,Term);

/* FUNCTION Util-U-MapAllConstructorsForSorts2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MapAllConstructorsForSorts2_s1 struct _Con_M_U_MapAllConstructorsForSorts2_s1
struct _Con_M_U_MapAllConstructorsForSorts2_s1 {struct _Construction construction; Term sub[5]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_U_MapAllConstructorsForSorts2_s1;
extern int step_M_U_MapAllConstructorsForSorts2_s1(Sink,Term);

/* FUNCTION Prep-P-Production1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production1_s3 struct _Con_M_P_Production1_s3
struct _Con_M_P_Production1_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production1_s3;
extern int step_M_P_Production1_s3(Sink,Term);

/* FUNCTION Util-U-MapAllConstructorsForSorts2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MapAllConstructorsForSorts2_s2 struct _Con_M_U_MapAllConstructorsForSorts2_s2
struct _Con_M_U_MapAllConstructorsForSorts2_s2 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_U_MapAllConstructorsForSorts2_s2;
extern int step_M_U_MapAllConstructorsForSorts2_s2(Sink,Term);

/* FUNCTION Prelude-AddName2Name-1$AddName2Name$N2Ns HEADER DECLARATIONS. */
#define STRUCT_Con_M_AddName2Name struct _Con_M_AddName2Name
struct _Con_M_AddName2Name {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AddName2Name;
extern int step_M_AddName2Name(Sink,Term);

/* FUNCTION Prep-P-Production1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production1_s2 struct _Con_M_P_Production1_s2
struct _Con_M_P_Production1_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production1_s2;
extern int step_M_P_Production1_s2(Sink,Term);

/* FUNCTION Prep-P-Production1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production1_s1 struct _Con_M_P_Production1_s1
struct _Con_M_P_Production1_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production1_s1;
extern int step_M_P_Production1_s1(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternatives-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternatives_s1 struct _Con_M_U_MakeDM_SortAlternatives_s1
struct _Con_M_U_MakeDM_SortAlternatives_s1 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternatives_s1;
extern int step_M_U_MakeDM_SortAlternatives_s1(Sink,Term);

/* FUNCTION Prelude-CheckName2Name-1$CheckName2Name$N2Ns HEADER DECLARATIONS. */
#define STRUCT_Con_M_CheckName2Name struct _Con_M_CheckName2Name
struct _Con_M_CheckName2Name {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_CheckName2Name;
extern int step_M_CheckName2Name(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish5-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish5_s2 struct _Con_M_U_MakeDM_Finish5_s2
struct _Con_M_U_MakeDM_Finish5_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish5_s2;
extern int step_M_U_MakeDM_Finish5_s2(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish5-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish5_s3 struct _Con_M_U_MakeDM_Finish5_s3
struct _Con_M_U_MakeDM_Finish5_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish5_s3;
extern int step_M_U_MakeDM_Finish5_s3(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish5- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish5_s1 struct _Con_M_U_MakeDM_Finish5_s1
struct _Con_M_U_MakeDM_Finish5_s1 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish5_s1;
extern int step_M_U_MakeDM_Finish5_s1(Sink,Term);

/* FUNCTION Util-U-MakeSynthesizedNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSynthesizedNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MakeSynthesizedNames;
extern int step_M_U_MakeSynthesizedNames(Sink,Term);

/* FUNCTION Prelude-RemoveFirstName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_RemoveFirstName_s1 struct _Con_M_RemoveFirstName_s1
struct _Con_M_RemoveFirstName_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_RemoveFirstName_s1;
extern int step_M_RemoveFirstName_s1(Sink,Term);

/* FUNCTION Cook-C-Print-Abstraction- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Abstraction struct _Con_M_C_Print_Abstraction
struct _Con_M_C_Print_Abstraction {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Abstraction;
extern int step_M_C_Print_Abstraction(Sink,Term);

/* FUNCTION Prelude-EmptyTextMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_EmptyTextMap struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_EmptyTextMap;
extern int step_M_EmptyTextMap(Sink,Term);

/* FUNCTION Cook-C-CrsxifyConstructor-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyConstructor struct _Con_M_C_CrsxifyConstructor
struct _Con_M_C_CrsxifyConstructor {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyConstructor;
extern int step_M_C_CrsxifyConstructor(Sink,Term);

/* FUNCTION Util-U-AllSortNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllSortNames_s2 struct _Con_M_U_AllSortNames_s2
struct _Con_M_U_AllSortNames_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllSortNames_s2;
extern int step_M_U_AllSortNames_s2(Sink,Term);

/* FUNCTION Util-U-AllSortNames-1$U-AllSortNames$1$DME_NAMES HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllSortNames_s1 struct _Con_M_U_AllSortNames_s1
struct _Con_M_U_AllSortNames_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllSortNames_s1;
extern int step_M_U_AllSortNames_s1(Sink,Term);

/* FUNCTION Prelude-TextJoinMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextJoinMap_s1 struct _Con_M_TextJoinMap_s1
struct _Con_M_TextJoinMap_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextJoinMap_s1;
extern int step_M_TextJoinMap_s1(Sink,Term);

/* FUNCTION Prep-P-Production-Defines- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines_s2 struct _Con_M_P_Production_Defines_s2
struct _Con_M_P_Production_Defines_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines_s2;
extern int step_M_P_Production_Defines_s2(Sink,Term);

/* FUNCTION Prep-P-Production-Defines- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines_s1 struct _Con_M_P_Production_Defines_s1
struct _Con_M_P_Production_Defines_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines_s1;
extern int step_M_P_Production_Defines_s1(Sink,Term);

/* FUNCTION Util-U-AllInheritedNames-1$U-AllInheritedNames HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllInheritedNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_AllInheritedNames;
extern int step_M_U_AllInheritedNames(Sink,Term);

/* FUNCTION Cook-C-AddAttributeInnerSynthesized- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeInnerSynthesized struct _Con_M_C_AddAttributeInnerSynthesized
struct _Con_M_C_AddAttributeInnerSynthesized {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeInnerSynthesized;
extern int step_M_C_AddAttributeInnerSynthesized(Sink,Term);

/* FUNCTION Prep-P-Production-Defines- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines_s8 struct _Con_M_P_Production_Defines_s8
struct _Con_M_P_Production_Defines_s8 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines_s8;
extern int step_M_P_Production_Defines_s8(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry1 struct _Con_M_U_KeepSynthesizedEntry1
struct _Con_M_U_KeepSynthesizedEntry1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry1;
extern int step_M_U_KeepSynthesizedEntry1(Sink,Term);

/* FUNCTION Prep-P-Production-Defines-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines_s9 struct _Con_M_P_Production_Defines_s9
struct _Con_M_P_Production_Defines_s9 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines_s9;
extern int step_M_P_Production_Defines_s9(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2$U-KeepSynthesizedEntry2$DME_ HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2 struct _Con_M_U_KeepSynthesizedEntry2
struct _Con_M_U_KeepSynthesizedEntry2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2;
extern int step_M_U_KeepSynthesizedEntry2(Sink,Term);

/* FUNCTION Prep-P-Production-Defines-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines_s3 struct _Con_M_P_Production_Defines_s3
struct _Con_M_P_Production_Defines_s3 {struct _Construction construction; Term sub[7]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines_s3;
extern int step_M_P_Production_Defines_s3(Sink,Term);

/* FUNCTION Prep-P-Production-Defines-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines_s4 struct _Con_M_P_Production_Defines_s4
struct _Con_M_P_Production_Defines_s4 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines_s4;
extern int step_M_P_Production_Defines_s4(Sink,Term);

/* FUNCTION Prep-P-Production-Defines-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines_s5 struct _Con_M_P_Production_Defines_s5
struct _Con_M_P_Production_Defines_s5 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines_s5;
extern int step_M_P_Production_Defines_s5(Sink,Term);

/* FUNCTION Prep-P-Production-Defines-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines_s6 struct _Con_M_P_Production_Defines_s6
struct _Con_M_P_Production_Defines_s6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines_s6;
extern int step_M_P_Production_Defines_s6(Sink,Term);

/* FUNCTION Cook-C-SortMap-ContainsFreeVariable-1$C-SortMap-ContainsFreeVariable$SM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap_ContainsFreeVariable struct _Con_M_C_SortMap_ContainsFreeVariable
struct _Con_M_C_SortMap_ContainsFreeVariable {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap_ContainsFreeVariable;
extern int step_M_C_SortMap_ContainsFreeVariable(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpUnits-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpUnits_s1 struct _Con_M_P_DeclareRegExpUnits_s1
struct _Con_M_P_DeclareRegExpUnits_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpUnits_s1;
extern int step_M_P_DeclareRegExpUnits_s1(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpUnits-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpUnits_s2 struct _Con_M_P_DeclareRegExpUnits_s2
struct _Con_M_P_DeclareRegExpUnits_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpUnits_s2;
extern int step_M_P_DeclareRegExpUnits_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyEntry-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyEntry_s5 struct _Con_M_C_CrsxifyEntry_s5
struct _Con_M_C_CrsxifyEntry_s5 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyEntry_s5;
extern int step_M_C_CrsxifyEntry_s5(Sink,Term);

/* FUNCTION Cook-C-CrsxifyEntry-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyEntry_s4 struct _Con_M_C_CrsxifyEntry_s4
struct _Con_M_C_CrsxifyEntry_s4 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyEntry_s4;
extern int step_M_C_CrsxifyEntry_s4(Sink,Term);

/* FUNCTION Cook-C-CrsxifyEntry-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyEntry_s1 struct _Con_M_C_CrsxifyEntry_s1
struct _Con_M_C_CrsxifyEntry_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyEntry_s1;
extern int step_M_C_CrsxifyEntry_s1(Sink,Term);

/* FUNCTION Text-Print1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print1 struct _Con_M_Text_Print1
struct _Con_M_Text_Print1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print1;
extern int step_M_Text_Print1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyEntry-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyEntry_s3 struct _Con_M_C_CrsxifyEntry_s3
struct _Con_M_C_CrsxifyEntry_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyEntry_s3;
extern int step_M_C_CrsxifyEntry_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyEntry-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyEntry_s2 struct _Con_M_C_CrsxifyEntry_s2
struct _Con_M_C_CrsxifyEntry_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyEntry_s2;
extern int step_M_C_CrsxifyEntry_s2(Sink,Term);

/* FUNCTION Prelude-RemoveNameWhen-1$RemoveNameWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_RemoveNameWhen struct _Con_M_RemoveNameWhen
struct _Con_M_RemoveNameWhen {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_RemoveNameWhen;
extern int step_M_RemoveNameWhen(Sink,Term);

/* FUNCTION Prep-P-CRSX-ArgumentWrapper-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_CRSX_ArgumentWrapper_s2 struct _Con_M_P_CRSX_ArgumentWrapper_s2
struct _Con_M_P_CRSX_ArgumentWrapper_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_CRSX_ArgumentWrapper_s2;
extern int step_M_P_CRSX_ArgumentWrapper_s2(Sink,Term);

/* FUNCTION Prep-P-CRSX-ArgumentWrapper-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_CRSX_ArgumentWrapper_s3 struct _Con_M_P_CRSX_ArgumentWrapper_s3
struct _Con_M_P_CRSX_ArgumentWrapper_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_CRSX_ArgumentWrapper_s3;
extern int step_M_P_CRSX_ArgumentWrapper_s3(Sink,Term);

/* FUNCTION Prep-P-CRSX-ArgumentWrapper-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_CRSX_ArgumentWrapper_s4 struct _Con_M_P_CRSX_ArgumentWrapper_s4
struct _Con_M_P_CRSX_ArgumentWrapper_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_CRSX_ArgumentWrapper_s4;
extern int step_M_P_CRSX_ArgumentWrapper_s4(Sink,Term);

/* FUNCTION Prep-P-CRSX-ArgumentWrapper-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_CRSX_ArgumentWrapper_s5 struct _Con_M_P_CRSX_ArgumentWrapper_s5
struct _Con_M_P_CRSX_ArgumentWrapper_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_CRSX_ArgumentWrapper_s5;
extern int step_M_P_CRSX_ArgumentWrapper_s5(Sink,Term);

/* FUNCTION Prep-P-CRSX-ArgumentWrapper-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_CRSX_ArgumentWrapper_s6 struct _Con_M_P_CRSX_ArgumentWrapper_s6
struct _Con_M_P_CRSX_ArgumentWrapper_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_CRSX_ArgumentWrapper_s6;
extern int step_M_P_CRSX_ArgumentWrapper_s6(Sink,Term);

/* FUNCTION Util-U-FormString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormString_s1 struct _Con_M_U_FormString_s1
struct _Con_M_U_FormString_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormString_s1;
extern int step_M_U_FormString_s1(Sink,Term);

/* FUNCTION Util-U-FormString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormString_s2 struct _Con_M_U_FormString_s2
struct _Con_M_U_FormString_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormString_s2;
extern int step_M_U_FormString_s2(Sink,Term);

/* FUNCTION Prep-P-CRSX-ArgumentWrapper- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_CRSX_ArgumentWrapper_s1 struct _Con_M_P_CRSX_ArgumentWrapper_s1
struct _Con_M_P_CRSX_ArgumentWrapper_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_CRSX_ArgumentWrapper_s1;
extern int step_M_P_CRSX_ArgumentWrapper_s1(Sink,Term);

/* FUNCTION Prep-P-LeftRecursive2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_LeftRecursive2_s1 struct _Con_M_P_LeftRecursive2_s1
struct _Con_M_P_LeftRecursive2_s1 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_LeftRecursive2_s1;
extern int step_M_P_LeftRecursive2_s1(Sink,Term);

/* FUNCTION Prep-P-LeftRecursive2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_LeftRecursive2_s3 struct _Con_M_P_LeftRecursive2_s3
struct _Con_M_P_LeftRecursive2_s3 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_LeftRecursive2_s3;
extern int step_M_P_LeftRecursive2_s3(Sink,Term);

/* FUNCTION Prep-P-LeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_LeftRecursive2_s2 struct _Con_M_P_LeftRecursive2_s2
struct _Con_M_P_LeftRecursive2_s2 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_LeftRecursive2_s2;
extern int step_M_P_LeftRecursive2_s2(Sink,Term);

/* FUNCTION Prelude-LookupName2Names-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_LookupName2Names_s1 struct _Con_M_LookupName2Names_s1
struct _Con_M_LookupName2Names_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_LookupName2Names_s1;
extern int step_M_LookupName2Names_s1(Sink,Term);

/* FUNCTION Cook-C-then-VariablesContain-2$C-then-VariablesContain$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_C__then_VariablesContain struct _Con_M_C__then_VariablesContain
struct _Con_M_C__then_VariablesContain {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C__then_VariablesContain;
extern int step_M_C__then_VariablesContain(Sink,Term);

/* FUNCTION Cook-Cook-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Cook_s2 struct _Con_M_Cook_s2
struct _Con_M_Cook_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Cook_s2;
extern int step_M_Cook_s2(Sink,Term);

/* FUNCTION Cook-Cook-1$Cook$1$Hx_module HEADER DECLARATIONS. */
#define STRUCT_Con_M_Cook_s1 struct _Con_M_Cook_s1
struct _Con_M_Cook_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Cook_s1;
extern int step_M_Cook_s1(Sink,Term);

/* FUNCTION Prelude-IfSingleton- HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfSingleton struct _Con_M_IfSingleton
struct _Con_M_IfSingleton {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfSingleton;
extern int step_M_IfSingleton(Sink,Term);

/* FUNCTION Cook-C-CrsxifyVariable-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyVariable_s1 struct _Con_M_C_CrsxifyVariable_s1
struct _Con_M_C_CrsxifyVariable_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyVariable_s1;
extern int step_M_C_CrsxifyVariable_s1(Sink,Term);

/* FUNCTION Prep-P-ExtractSubstitutedSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ExtractSubstitutedSort_s2 struct _Con_M_P_ExtractSubstitutedSort_s2
struct _Con_M_P_ExtractSubstitutedSort_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ExtractSubstitutedSort_s2;
extern int step_M_P_ExtractSubstitutedSort_s2(Sink,Term);

/* FUNCTION Prep-P-ExtractSubstitutedSort-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ExtractSubstitutedSort_s1 struct _Con_M_P_ExtractSubstitutedSort_s1
struct _Con_M_P_ExtractSubstitutedSort_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ExtractSubstitutedSort_s1;
extern int step_M_P_ExtractSubstitutedSort_s1(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4b-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4b_s5 struct _Con_M_U_MakeConstructor2Sort4b_s5
struct _Con_M_U_MakeConstructor2Sort4b_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4b_s5;
extern int step_M_U_MakeConstructor2Sort4b_s5(Sink,Term);

/* FUNCTION Prelude-CheckName2-1$CheckName2$N2Ns HEADER DECLARATIONS. */
#define STRUCT_Con_M_CheckName2 struct _Con_M_CheckName2
struct _Con_M_CheckName2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_CheckName2;
extern int step_M_CheckName2(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4b-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4b_s4 struct _Con_M_U_MakeConstructor2Sort4b_s4
struct _Con_M_U_MakeConstructor2Sort4b_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4b_s4;
extern int step_M_U_MakeConstructor2Sort4b_s4(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4b-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4b_s3 struct _Con_M_U_MakeConstructor2Sort4b_s3
struct _Con_M_U_MakeConstructor2Sort4b_s3 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4b_s3;
extern int step_M_U_MakeConstructor2Sort4b_s3(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4b- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4b_s2 struct _Con_M_U_MakeConstructor2Sort4b_s2
struct _Con_M_U_MakeConstructor2Sort4b_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4b_s2;
extern int step_M_U_MakeConstructor2Sort4b_s2(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4b-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4b_s8 struct _Con_M_U_MakeConstructor2Sort4b_s8
struct _Con_M_U_MakeConstructor2Sort4b_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4b_s8;
extern int step_M_U_MakeConstructor2Sort4b_s8(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4b-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4b_s7 struct _Con_M_U_MakeConstructor2Sort4b_s7
struct _Con_M_U_MakeConstructor2Sort4b_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4b_s7;
extern int step_M_U_MakeConstructor2Sort4b_s7(Sink,Term);

/* FUNCTION Prep-PrepError-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_PrepError struct _Con_M_PrepError
struct _Con_M_PrepError {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_PrepError;
extern int step_M_PrepError(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4b-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4b_s6 struct _Con_M_U_MakeConstructor2Sort4b_s6
struct _Con_M_U_MakeConstructor2Sort4b_s6 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4b_s6;
extern int step_M_U_MakeConstructor2Sort4b_s6(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4b- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4b_s1 struct _Con_M_U_MakeConstructor2Sort4b_s1
struct _Con_M_U_MakeConstructor2Sort4b_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4b_s1;
extern int step_M_U_MakeConstructor2Sort4b_s1(Sink,Term);

/* FUNCTION Prelude-IfSingleton-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfSingleton_s1 struct _Con_M_IfSingleton_s1
struct _Con_M_IfSingleton_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfSingleton_s1;
extern int step_M_IfSingleton_s1(Sink,Term);

/* FUNCTION Prelude-IfSingleton-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfSingleton_s2 struct _Con_M_IfSingleton_s2
struct _Con_M_IfSingleton_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfSingleton_s2;
extern int step_M_IfSingleton_s2(Sink,Term);

/* FUNCTION Prep-AttributeKindIndicator- HEADER DECLARATIONS. */
#define STRUCT_Con_M_AttributeKindIndicator struct _Con_M_AttributeKindIndicator
struct _Con_M_AttributeKindIndicator {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AttributeKindIndicator;
extern int step_M_AttributeKindIndicator(Sink,Term);

/* FUNCTION Prelude-MapTextConcat-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextConcat_s2 struct _Con_M_MapTextConcat_s2
struct _Con_M_MapTextConcat_s2 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapTextConcat_s2;
extern int step_M_MapTextConcat_s2(Sink,Term);

/* FUNCTION Prelude-MapTextConcat- HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextConcat_s1 struct _Con_M_MapTextConcat_s1
struct _Con_M_MapTextConcat_s1 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapTextConcat_s1;
extern int step_M_MapTextConcat_s1(Sink,Term);

/* FUNCTION Prelude-MapTextConcat-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextConcat_s3 struct _Con_M_MapTextConcat_s3
struct _Con_M_MapTextConcat_s3 {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapTextConcat_s3;
extern int step_M_MapTextConcat_s3(Sink,Term);

/* FUNCTION Prep-P-Embed-Tail- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Embed_Tail struct _Con_M_P_Embed_Tail
struct _Con_M_P_Embed_Tail {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Embed_Tail;
extern int step_M_P_Embed_Tail(Sink,Term);

/* FUNCTION Cook-C-Print-Sort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Sort struct _Con_M_C_Print_Sort
struct _Con_M_C_Print_Sort {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Sort;
extern int step_M_C_Print_Sort(Sink,Term);

/* FUNCTION Prep-P-SameSort2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2 struct _Con_M_P_SameSort2
struct _Con_M_P_SameSort2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2;
extern int step_M_P_SameSort2(Sink,Term);

/* FUNCTION Cook-C-VariablesExcept- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_VariablesExcept struct _Con_M_C_VariablesExcept
struct _Con_M_C_VariablesExcept {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_VariablesExcept;
extern int step_M_C_VariablesExcept(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2 struct _Con_M_C_Unsynthesize2
struct _Con_M_C_Unsynthesize2 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2;
extern int step_M_C_Unsynthesize2(Sink,Term);

/* FUNCTION Prelude-Fold2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold2_s5 struct _Con_M_Fold2_s5
struct _Con_M_Fold2_s5 {struct _Construction construction; Term sub[4]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_Fold2_s5;
extern int step_M_Fold2_s5(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize1 struct _Con_M_C_Unsynthesize1
struct _Con_M_C_Unsynthesize1 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize1;
extern int step_M_C_Unsynthesize1(Sink,Term);

/* FUNCTION Prelude-Fold2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold2_s6 struct _Con_M_Fold2_s6
struct _Con_M_Fold2_s6 {struct _Construction construction; Term sub[3]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_Fold2_s6;
extern int step_M_Fold2_s6(Sink,Term);

/* FUNCTION Prelude-Fold2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold2_s3 struct _Con_M_Fold2_s3
struct _Con_M_Fold2_s3 {struct _Construction construction; Term sub[5]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_Fold2_s3;
extern int step_M_Fold2_s3(Sink,Term);

/* FUNCTION Prelude-Fold2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold2_s4 struct _Con_M_Fold2_s4
struct _Con_M_Fold2_s4 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_Fold2_s4;
extern int step_M_Fold2_s4(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion-2$P-stripLeftRecursion$8$$Nil HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion_s8 struct _Con_M_P__stripLeftRecursion_s8
struct _Con_M_P__stripLeftRecursion_s8 {struct _Construction construction; Term sub[13]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion_s8;
extern int step_M_P__stripLeftRecursion_s8(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion-2$P-stripLeftRecursion$6$Hx_SortName HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion_s6 struct _Con_M_P__stripLeftRecursion_s6
struct _Con_M_P__stripLeftRecursion_s6 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion_s6;
extern int step_M_P__stripLeftRecursion_s6(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion-2$P-stripLeftRecursion$5$Hx_Sort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion_s5 struct _Con_M_P__stripLeftRecursion_s5
struct _Con_M_P__stripLeftRecursion_s5 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion_s5;
extern int step_M_P__stripLeftRecursion_s5(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion-2$P-stripLeftRecursion$4$Hx_ScopeSort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion_s4 struct _Con_M_P__stripLeftRecursion_s4
struct _Con_M_P__stripLeftRecursion_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion_s4;
extern int step_M_P__stripLeftRecursion_s4(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion_s2 struct _Con_M_P__stripLeftRecursion_s2
struct _Con_M_P__stripLeftRecursion_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion_s2;
extern int step_M_P__stripLeftRecursion_s2(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion-2$P-stripLeftRecursion$3$Hx_ScopeSortPrec HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion_s3 struct _Con_M_P__stripLeftRecursion_s3
struct _Con_M_P__stripLeftRecursion_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion_s3;
extern int step_M_P__stripLeftRecursion_s3(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpUnits- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpUnits struct _Con_M_P_InlineRegExpUnits
struct _Con_M_P_InlineRegExpUnits {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpUnits;
extern int step_M_P_InlineRegExpUnits(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion_s1 struct _Con_M_P__stripLeftRecursion_s1
struct _Con_M_P__stripLeftRecursion_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion_s1;
extern int step_M_P__stripLeftRecursion_s1(Sink,Term);

/* FUNCTION Util-U-DeclarationMapString-1$U-DeclarationMapString$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapString struct _Con_M_U_DeclarationMapString
struct _Con_M_U_DeclarationMapString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapString;
extern int step_M_U_DeclarationMapString(Sink,Term);

/* FUNCTION Prelude-FirstName-1$FirstName$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_FirstName struct _Con_M_FirstName
struct _Con_M_FirstName {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_FirstName;
extern int step_M_FirstName(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName struct _Con_M_U_SymbolSortTokenName
struct _Con_M_U_SymbolSortTokenName {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName;
extern int step_M_U_SymbolSortTokenName(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3_s10 struct _Con_M_C_GetConstructorScopeSorts3_s10
struct _Con_M_C_GetConstructorScopeSorts3_s10 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3_s10;
extern int step_M_C_GetConstructorScopeSorts3_s10(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s8 struct _Con_M_U_TermTopConstructor_s8
struct _Con_M_U_TermTopConstructor_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s8;
extern int step_M_U_TermTopConstructor_s8(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s7 struct _Con_M_U_TermTopConstructor_s7
struct _Con_M_U_TermTopConstructor_s7 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s7;
extern int step_M_U_TermTopConstructor_s7(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRuleVars-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRuleVars struct _Con_M_C_CrsxifyRuleVars
struct _Con_M_C_CrsxifyRuleVars {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRuleVars;
extern int step_M_C_CrsxifyRuleVars(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-10 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s9 struct _Con_M_U_TermTopConstructor_s9
struct _Con_M_U_TermTopConstructor_s9 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s9;
extern int step_M_U_TermTopConstructor_s9(Sink,Term);

/* FUNCTION Prep-SortVar2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar2 struct _Con_M_SortVar2
struct _Con_M_SortVar2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar2;
extern int step_M_SortVar2(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s4 struct _Con_M_U_TermTopConstructor_s4
struct _Con_M_U_TermTopConstructor_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s4;
extern int step_M_U_TermTopConstructor_s4(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s3 struct _Con_M_U_TermTopConstructor_s3
struct _Con_M_U_TermTopConstructor_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s3;
extern int step_M_U_TermTopConstructor_s3(Sink,Term);

/* FUNCTION Util-U-FormKindString- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormKindString struct _Con_M_U_FormKindString
struct _Con_M_U_FormKindString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormKindString;
extern int step_M_U_FormKindString(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-11 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s6 struct _Con_M_U_TermTopConstructor_s6
struct _Con_M_U_TermTopConstructor_s6 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s6;
extern int step_M_U_TermTopConstructor_s6(Sink,Term);

/* FUNCTION Prep-P-SameScopeSortPrec- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSortPrec struct _Con_M_P_SameScopeSortPrec
struct _Con_M_P_SameScopeSortPrec {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSortPrec;
extern int step_M_P_SameScopeSortPrec(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s5 struct _Con_M_U_TermTopConstructor_s5
struct _Con_M_U_TermTopConstructor_s5 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s5;
extern int step_M_U_TermTopConstructor_s5(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s2 struct _Con_M_U_TermTopConstructor_s2
struct _Con_M_U_TermTopConstructor_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s2;
extern int step_M_U_TermTopConstructor_s2(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s1 struct _Con_M_U_TermTopConstructor_s1
struct _Con_M_U_TermTopConstructor_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s1;
extern int step_M_U_TermTopConstructor_s1(Sink,Term);

/* FUNCTION Prep-P-GetModuleName-1$P-GetModuleName$Hx_top-module HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_GetModuleName struct _Con_M_P_GetModuleName
struct _Con_M_P_GetModuleName {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_GetModuleName;
extern int step_M_P_GetModuleName(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized2_s3 struct _Con_M_U_MakeSort2Synthesized2_s3
struct _Con_M_U_MakeSort2Synthesized2_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized2_s3;
extern int step_M_U_MakeSort2Synthesized2_s3(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized2_s2 struct _Con_M_U_MakeSort2Synthesized2_s2
struct _Con_M_U_MakeSort2Synthesized2_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized2_s2;
extern int step_M_U_MakeSort2Synthesized2_s2(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized2_s1 struct _Con_M_U_MakeSort2Synthesized2_s1
struct _Con_M_U_MakeSort2Synthesized2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized2_s1;
extern int step_M_U_MakeSort2Synthesized2_s1(Sink,Term);

/* FUNCTION Util-U-ExtractFormFirstSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ExtractFormFirstSort_s1 struct _Con_M_U_ExtractFormFirstSort_s1
struct _Con_M_U_ExtractFormFirstSort_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ExtractFormFirstSort_s1;
extern int step_M_U_ExtractFormFirstSort_s1(Sink,Term);

/* FUNCTION Cook-C-Print-1$C-Print$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_s1 struct _Con_M_C_Print_s1
struct _Con_M_C_Print_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_s1;
extern int step_M_C_Print_s1(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor struct _Con_M_U_TermTopConstructor
struct _Con_M_U_TermTopConstructor {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor;
extern int step_M_U_TermTopConstructor(Sink,Term);

/* FUNCTION Cook-C-Print-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_s2 struct _Con_M_C_Print_s2
struct _Con_M_C_Print_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_s2;
extern int step_M_C_Print_s2(Sink,Term);

/* FUNCTION Prep-P2Print-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P2Print_s1 struct _Con_M_P2Print_s1
struct _Con_M_P2Print_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P2Print_s1;
extern int step_M_P2Print_s1(Sink,Term);

/* FUNCTION Prep-P-Production-Defines3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines3_s1 struct _Con_M_P_Production_Defines3_s1
struct _Con_M_P_Production_Defines3_s1 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines3_s1;
extern int step_M_P_Production_Defines3_s1(Sink,Term);

/* FUNCTION Prelude-TraceNameSet-1$TraceNameSet$1$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_TraceNameSet_s1 struct _Con_M_TraceNameSet_s1
struct _Con_M_TraceNameSet_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TraceNameSet_s1;
extern int step_M_TraceNameSet_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRuleOptions- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRuleOptions struct _Con_M_C_CrsxifyRuleOptions
struct _Con_M_C_CrsxifyRuleOptions {struct _Construction construction; Term sub[7]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRuleOptions;
extern int step_M_C_CrsxifyRuleOptions(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes struct _Con_M_C_ExtendSortMap_Scopes
struct _Con_M_C_ExtendSortMap_Scopes {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes;
extern int step_M_C_ExtendSortMap_Scopes(Sink,Term);

/* FUNCTION Prelude-StringToText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringToText struct _Con_M_StringToText
struct _Con_M_StringToText {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringToText;
extern int step_M_StringToText(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized4-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized4_s6 struct _Con_M_U_MakeSort2Synthesized4_s6
struct _Con_M_U_MakeSort2Synthesized4_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized4_s6;
extern int step_M_U_MakeSort2Synthesized4_s6(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized4-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized4_s7 struct _Con_M_U_MakeSort2Synthesized4_s7
struct _Con_M_U_MakeSort2Synthesized4_s7 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized4_s7;
extern int step_M_U_MakeSort2Synthesized4_s7(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized4_s4 struct _Con_M_U_MakeSort2Synthesized4_s4
struct _Con_M_U_MakeSort2Synthesized4_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized4_s4;
extern int step_M_U_MakeSort2Synthesized4_s4(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized4_s5 struct _Con_M_U_MakeSort2Synthesized4_s5
struct _Con_M_U_MakeSort2Synthesized4_s5 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized4_s5;
extern int step_M_U_MakeSort2Synthesized4_s5(Sink,Term);

/* FUNCTION Prelude-MapStringConcatWhen- HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapStringConcatWhen_s1 struct _Con_M_MapStringConcatWhen_s1
struct _Con_M_MapStringConcatWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapStringConcatWhen_s1;
extern int step_M_MapStringConcatWhen_s1(Sink,Term);

/* FUNCTION Prelude-MapStringConcatWhen-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapStringConcatWhen_s2 struct _Con_M_MapStringConcatWhen_s2
struct _Con_M_MapStringConcatWhen_s2 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapStringConcatWhen_s2;
extern int step_M_MapStringConcatWhen_s2(Sink,Term);

/* FUNCTION Prelude-Fold2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold2_s1 struct _Con_M_Fold2_s1
struct _Con_M_Fold2_s1 {struct _Construction construction; Term sub[4]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_Fold2_s1;
extern int step_M_Fold2_s1(Sink,Term);

/* FUNCTION Prelude-MapStringConcatWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapStringConcatWhen_s3 struct _Con_M_MapStringConcatWhen_s3
struct _Con_M_MapStringConcatWhen_s3 {struct _Construction construction; Term sub[1]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapStringConcatWhen_s3;
extern int step_M_MapStringConcatWhen_s3(Sink,Term);

/* FUNCTION Prelude-Stringify-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Stringify struct _Con_M_Stringify
struct _Con_M_Stringify {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Stringify;
extern int step_M_Stringify(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort2_s1 struct _Con_M_U_MakeConstructor2Sort2_s1
struct _Con_M_U_MakeConstructor2Sort2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort2_s1;
extern int step_M_U_MakeConstructor2Sort2_s1(Sink,Term);

/* FUNCTION Cook-Unparse-Done HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s13 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s13;
extern int step_M_C_Unparse_s13(Sink,Term);

/* FUNCTION Text-User-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_User struct _Con_M_Text_User
struct _Con_M_Text_User {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_User;
extern int step_M_Text_User(Sink,Term);

/* FUNCTION Cook-Unparse-Token HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s12 struct _Con_M_C_Unparse_s12
struct _Con_M_C_Unparse_s12 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s12;
extern int step_M_C_Unparse_s12(Sink,Term);

/* FUNCTION Cook-Unparse-Space HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s11 struct _Con_M_C_Unparse_s11
struct _Con_M_C_Unparse_s11 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s11;
extern int step_M_C_Unparse_s11(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized4-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized4_s2 struct _Con_M_U_MakeSort2Synthesized4_s2
struct _Con_M_U_MakeSort2Synthesized4_s2 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized4_s2;
extern int step_M_U_MakeSort2Synthesized4_s2(Sink,Term);

/* FUNCTION Cook-Unparse-Sort HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s10 struct _Con_M_C_Unparse_s10
struct _Con_M_C_Unparse_s10 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s10;
extern int step_M_C_Unparse_s10(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized4_s3 struct _Con_M_U_MakeSort2Synthesized4_s3
struct _Con_M_U_MakeSort2Synthesized4_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized4_s3;
extern int step_M_U_MakeSort2Synthesized4_s3(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort2_s3 struct _Con_M_U_MakeConstructor2Sort2_s3
struct _Con_M_U_MakeConstructor2Sort2_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort2_s3;
extern int step_M_U_MakeConstructor2Sort2_s3(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized4- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized4_s1 struct _Con_M_U_MakeSort2Synthesized4_s1
struct _Con_M_U_MakeSort2Synthesized4_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized4_s1;
extern int step_M_U_MakeSort2Synthesized4_s1(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort2_s2 struct _Con_M_U_MakeConstructor2Sort2_s2
struct _Con_M_U_MakeConstructor2Sort2_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort2_s2;
extern int step_M_U_MakeConstructor2Sort2_s2(Sink,Term);

/* FUNCTION Prelude-StringEndsWithWhen-1$StringEndsWithWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringEndsWithWhen struct _Con_M_StringEndsWithWhen
struct _Con_M_StringEndsWithWhen {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringEndsWithWhen;
extern int step_M_StringEndsWithWhen(Sink,Term);

/* FUNCTION Prelude-LookupName2Names-1$LookupName2Names$N2Ns HEADER DECLARATIONS. */
#define STRUCT_Con_M_LookupName2Names struct _Con_M_LookupName2Names
struct _Con_M_LookupName2Names {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_LookupName2Names;
extern int step_M_LookupName2Names(Sink,Term);

/* FUNCTION Util-U-DefineWrapperSugar- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperSugar_s1 struct _Con_M_U_DefineWrapperSugar_s1
struct _Con_M_U_DefineWrapperSugar_s1 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperSugar_s1;
extern int step_M_U_DefineWrapperSugar_s1(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication2_s1 struct _Con_M_C_ExtendSortMap_MetaApplication2_s1
struct _Con_M_C_ExtendSortMap_MetaApplication2_s1 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication2_s1;
extern int step_M_C_ExtendSortMap_MetaApplication2_s1(Sink,Term);

/* FUNCTION Util-U-DefineWrapperSugar-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperSugar_s3 struct _Con_M_U_DefineWrapperSugar_s3
struct _Con_M_U_DefineWrapperSugar_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperSugar_s3;
extern int step_M_U_DefineWrapperSugar_s3(Sink,Term);

/* FUNCTION Util-U-DefineWrapperSugar-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperSugar_s2 struct _Con_M_U_DefineWrapperSugar_s2
struct _Con_M_U_DefineWrapperSugar_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperSugar_s2;
extern int step_M_U_DefineWrapperSugar_s2(Sink,Term);

/* FUNCTION Util-U-DefineWrapperSugar-1$U-DefineWrapperSugar$5$Hx_ScopeSortPrec HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperSugar_s5 struct _Con_M_U_DefineWrapperSugar_s5
struct _Con_M_U_DefineWrapperSugar_s5 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperSugar_s5;
extern int step_M_U_DefineWrapperSugar_s5(Sink,Term);

/* FUNCTION Util-U-DefineWrapperSugar-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperSugar_s4 struct _Con_M_U_DefineWrapperSugar_s4
struct _Con_M_U_DefineWrapperSugar_s4 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperSugar_s4;
extern int step_M_U_DefineWrapperSugar_s4(Sink,Term);

/* FUNCTION Util-U-DefineWrapperSugar-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperSugar_s7 struct _Con_M_U_DefineWrapperSugar_s7
struct _Con_M_U_DefineWrapperSugar_s7 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperSugar_s7;
extern int step_M_U_DefineWrapperSugar_s7(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication2_s6 struct _Con_M_C_ExtendSortMap_MetaApplication2_s6
struct _Con_M_C_ExtendSortMap_MetaApplication2_s6 {struct _Construction construction; Term sub[9]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication2_s6;
extern int step_M_C_ExtendSortMap_MetaApplication2_s6(Sink,Term);

/* FUNCTION Util-U-DefineWrapperSugar-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperSugar_s6 struct _Con_M_U_DefineWrapperSugar_s6
struct _Con_M_U_DefineWrapperSugar_s6 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperSugar_s6;
extern int step_M_U_DefineWrapperSugar_s6(Sink,Term);

/* FUNCTION Cook-C-CrsxifySpecial-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifySpecial struct _Con_M_C_CrsxifySpecial
struct _Con_M_C_CrsxifySpecial {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifySpecial;
extern int step_M_C_CrsxifySpecial(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication2-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication2_s8 struct _Con_M_C_ExtendSortMap_MetaApplication2_s8
struct _Con_M_C_ExtendSortMap_MetaApplication2_s8 {struct _Construction construction; Term sub[9]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication2_s8;
extern int step_M_C_ExtendSortMap_MetaApplication2_s8(Sink,Term);

/* FUNCTION Util-U-RegExpSubSuffix-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RegExpSubSuffix_s1 struct _Con_M_U_RegExpSubSuffix_s1
struct _Con_M_U_RegExpSubSuffix_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RegExpSubSuffix_s1;
extern int step_M_U_RegExpSubSuffix_s1(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication2_s2 struct _Con_M_C_ExtendSortMap_MetaApplication2_s2
struct _Con_M_C_ExtendSortMap_MetaApplication2_s2 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication2_s2;
extern int step_M_C_ExtendSortMap_MetaApplication2_s2(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication2-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication2_s3 struct _Con_M_C_ExtendSortMap_MetaApplication2_s3
struct _Con_M_C_ExtendSortMap_MetaApplication2_s3 {struct _Construction construction; Term sub[7]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication2_s3;
extern int step_M_C_ExtendSortMap_MetaApplication2_s3(Sink,Term);

/* FUNCTION Util-U-RegExpSubSuffix-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RegExpSubSuffix_s2 struct _Con_M_U_RegExpSubSuffix_s2
struct _Con_M_U_RegExpSubSuffix_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RegExpSubSuffix_s2;
extern int step_M_U_RegExpSubSuffix_s2(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication2-1$C-ExtendSortMap-MetaApplication2$5$SM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication2_s5 struct _Con_M_C_ExtendSortMap_MetaApplication2_s5
struct _Con_M_C_ExtendSortMap_MetaApplication2_s5 {struct _Construction construction; Term sub[7]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication2_s5;
extern int step_M_C_ExtendSortMap_MetaApplication2_s5(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure2_s2 struct _Con_M_Name2NamesClosure2_s2
struct _Con_M_Name2NamesClosure2_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure2_s2;
extern int step_M_Name2NamesClosure2_s2(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure2_s3 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure2_s3;
extern int step_M_Name2NamesClosure2_s3(Sink,Term);

/* FUNCTION Util-U-MainSymbol0-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol0 struct _Con_M_U_MainSymbol0
struct _Con_M_U_MainSymbol0 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol0;
extern int step_M_U_MainSymbol0(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure2_s1 struct _Con_M_Name2NamesClosure2_s1
struct _Con_M_Name2NamesClosure2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure2_s1;
extern int step_M_Name2NamesClosure2_s1(Sink,Term);

/* FUNCTION Util-U-MainSymbol2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2 struct _Con_M_U_MainSymbol2
struct _Con_M_U_MainSymbol2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2;
extern int step_M_U_MainSymbol2(Sink,Term);

/* FUNCTION Util-U-MainSymbol1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol1 struct _Con_M_U_MainSymbol1
struct _Con_M_U_MainSymbol1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol1;
extern int step_M_U_MainSymbol1(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure2_s4 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure2_s4;
extern int step_M_Name2NamesClosure2_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s93 struct _Con_M_C_UnsynthesizeRule_s93
struct _Con_M_C_UnsynthesizeRule_s93 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s93;
extern int step_M_C_UnsynthesizeRule_s93(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s92 struct _Con_M_C_UnsynthesizeRule_s92
struct _Con_M_C_UnsynthesizeRule_s92 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s92;
extern int step_M_C_UnsynthesizeRule_s92(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s95 struct _Con_M_C_UnsynthesizeRule_s95
struct _Con_M_C_UnsynthesizeRule_s95 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s95;
extern int step_M_C_UnsynthesizeRule_s95(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s91 struct _Con_M_C_UnsynthesizeRule_s91
struct _Con_M_C_UnsynthesizeRule_s91 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s91;
extern int step_M_C_UnsynthesizeRule_s91(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s90 struct _Con_M_C_UnsynthesizeRule_s90
struct _Con_M_C_UnsynthesizeRule_s90 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s90;
extern int step_M_C_UnsynthesizeRule_s90(Sink,Term);

/* FUNCTION Prelude-All- HEADER DECLARATIONS. */
#define STRUCT_Con_M_All_s1 struct _Con_M_All_s1
struct _Con_M_All_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_All_s1;
extern int step_M_All_s1(Sink,Term);

/* FUNCTION Prelude-All-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_All_s2 struct _Con_M_All_s2
struct _Con_M_All_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_All_s2;
extern int step_M_All_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s97 struct _Con_M_C_UnsynthesizeRule_s97
struct _Con_M_C_UnsynthesizeRule_s97 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s97;
extern int step_M_C_UnsynthesizeRule_s97(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s96 struct _Con_M_C_UnsynthesizeRule_s96
struct _Con_M_C_UnsynthesizeRule_s96 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s96;
extern int step_M_C_UnsynthesizeRule_s96(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s99 struct _Con_M_C_UnsynthesizeRule_s99
struct _Con_M_C_UnsynthesizeRule_s99 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s99;
extern int step_M_C_UnsynthesizeRule_s99(Sink,Term);

/* FUNCTION Prep-P-Production-Defines3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines3_s2 struct _Con_M_P_Production_Defines3_s2
struct _Con_M_P_Production_Defines3_s2 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines3_s2;
extern int step_M_P_Production_Defines3_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s98 struct _Con_M_C_UnsynthesizeRule_s98
struct _Con_M_C_UnsynthesizeRule_s98 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s98;
extern int step_M_C_UnsynthesizeRule_s98(Sink,Term);

/* FUNCTION Prep-P-Production-Defines3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines3_s3 struct _Con_M_P_Production_Defines3_s3
struct _Con_M_P_Production_Defines3_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines3_s3;
extern int step_M_P_Production_Defines3_s3(Sink,Term);

/* FUNCTION Util-U-FormLess- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormLess struct _Con_M_U_FormLess
struct _Con_M_U_FormLess {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormLess;
extern int step_M_U_FormLess(Sink,Term);

/* FUNCTION Prelude-All-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_All_s4 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_All_s4;
extern int step_M_All_s4(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders3-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders3 struct _Con_M_C_ScopeSort_AddBinders3
struct _Con_M_C_ScopeSort_AddBinders3 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders3;
extern int step_M_C_ScopeSort_AddBinders3(Sink,Term);

/* FUNCTION Prelude-All-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_All_s3 struct _Con_M_All_s3
struct _Con_M_All_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_All_s3;
extern int step_M_All_s3(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders2 struct _Con_M_C_ScopeSort_AddBinders2
struct _Con_M_C_ScopeSort_AddBinders2 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders2;
extern int step_M_C_ScopeSort_AddBinders2(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpRangeChar-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpRangeChar struct _Con_M_P_InlineRegExpRangeChar
struct _Con_M_P_InlineRegExpRangeChar {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpRangeChar;
extern int step_M_P_InlineRegExpRangeChar(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeMap struct _Con_M_C_CrsxifyAttributeMap
struct _Con_M_C_CrsxifyAttributeMap {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeMap;
extern int step_M_C_CrsxifyAttributeMap(Sink,Term);

/* FUNCTION Prelude-MapTextWrap- HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextWrap_s1 struct _Con_M_MapTextWrap_s1
struct _Con_M_MapTextWrap_s1 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapTextWrap_s1;
extern int step_M_MapTextWrap_s1(Sink,Term);

/* FUNCTION Prelude-MapTextWrap-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextWrap_s2 struct _Con_M_MapTextWrap_s2
struct _Con_M_MapTextWrap_s2 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapTextWrap_s2;
extern int step_M_MapTextWrap_s2(Sink,Term);

/* FUNCTION Prelude-MapTextWrap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextWrap_s3 struct _Con_M_MapTextWrap_s3
struct _Con_M_MapTextWrap_s3 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapTextWrap_s3;
extern int step_M_MapTextWrap_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s262 struct _Con_M_C_UnsynthesizeRule_s262
struct _Con_M_C_UnsynthesizeRule_s262 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s262;
extern int step_M_C_UnsynthesizeRule_s262(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s261 struct _Con_M_C_UnsynthesizeRule_s261
struct _Con_M_C_UnsynthesizeRule_s261 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s261;
extern int step_M_C_UnsynthesizeRule_s261(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s260 struct _Con_M_C_UnsynthesizeRule_s260
struct _Con_M_C_UnsynthesizeRule_s260 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s260;
extern int step_M_C_UnsynthesizeRule_s260(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s266 struct _Con_M_C_UnsynthesizeRule_s266
struct _Con_M_C_UnsynthesizeRule_s266 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s266;
extern int step_M_C_UnsynthesizeRule_s266(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort struct _Con_M_U_MakeAttribute2KeySort
struct _Con_M_U_MakeAttribute2KeySort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort;
extern int step_M_U_MakeAttribute2KeySort(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s265 struct _Con_M_C_UnsynthesizeRule_s265
struct _Con_M_C_UnsynthesizeRule_s265 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s265;
extern int step_M_C_UnsynthesizeRule_s265(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s264 struct _Con_M_C_UnsynthesizeRule_s264
struct _Con_M_C_UnsynthesizeRule_s264 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s264;
extern int step_M_C_UnsynthesizeRule_s264(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s263 struct _Con_M_C_UnsynthesizeRule_s263
struct _Con_M_C_UnsynthesizeRule_s263 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s263;
extern int step_M_C_UnsynthesizeRule_s263(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s269 struct _Con_M_C_UnsynthesizeRule_s269
struct _Con_M_C_UnsynthesizeRule_s269 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s269;
extern int step_M_C_UnsynthesizeRule_s269(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s268 struct _Con_M_C_UnsynthesizeRule_s268
struct _Con_M_C_UnsynthesizeRule_s268 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s268;
extern int step_M_C_UnsynthesizeRule_s268(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s267 struct _Con_M_C_UnsynthesizeRule_s267
struct _Con_M_C_UnsynthesizeRule_s267 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s267;
extern int step_M_C_UnsynthesizeRule_s267(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-WrapPattern2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_WrapPattern2_s1 struct _Con_M_C_ScopeSort_WrapPattern2_s1
struct _Con_M_C_ScopeSort_WrapPattern2_s1 {struct _Construction construction; Term sub[8]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_WrapPattern2_s1;
extern int step_M_C_ScopeSort_WrapPattern2_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRulePriority- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRulePriority struct _Con_M_C_CrsxifyRulePriority
struct _Con_M_C_CrsxifyRulePriority {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRulePriority;
extern int step_M_C_CrsxifyRulePriority(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Attributes- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Attributes struct _Con_M_C_ExtendSortMap_Attributes
struct _Con_M_C_ExtendSortMap_Attributes {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Attributes;
extern int step_M_C_ExtendSortMap_Attributes(Sink,Term);

/* FUNCTION Prelude-StringJoin- HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringJoin struct _Con_M_StringJoin
struct _Con_M_StringJoin {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringJoin;
extern int step_M_StringJoin(Sink,Term);

/* FUNCTION Util-U-MakeSynthesizedMapNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSynthesizedMapNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MakeSynthesizedMapNames;
extern int step_M_U_MakeSynthesizedMapNames(Sink,Term);

/* FUNCTION Util-U-then-TestIfToken-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_TestIfToken_s1 struct _Con_M_U__then_TestIfToken_s1
struct _Con_M_U__then_TestIfToken_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_TestIfToken_s1;
extern int step_M_U__then_TestIfToken_s1(Sink,Term);

/* FUNCTION Cook-C-Print-SymbolForm2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_SymbolForm2 struct _Con_M_C_Print_SymbolForm2
struct _Con_M_C_Print_SymbolForm2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_SymbolForm2;
extern int step_M_C_Print_SymbolForm2(Sink,Term);

/* FUNCTION Util-U-SortName2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortName2 struct _Con_M_U_SortName2
struct _Con_M_U_SortName2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortName2;
extern int step_M_U_SortName2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s271 struct _Con_M_C_UnsynthesizeRule_s271
struct _Con_M_C_UnsynthesizeRule_s271 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s271;
extern int step_M_C_UnsynthesizeRule_s271(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s270 struct _Con_M_C_UnsynthesizeRule_s270
struct _Con_M_C_UnsynthesizeRule_s270 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s270;
extern int step_M_C_UnsynthesizeRule_s270(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes2-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes2_s1 struct _Con_M_C_ExtendSortMap_Scopes2_s1
struct _Con_M_C_ExtendSortMap_Scopes2_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes2_s1;
extern int step_M_C_ExtendSortMap_Scopes2_s1(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes2-2$C-ExtendSortMap-Scopes2$3$Hx_binds HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes2_s3 struct _Con_M_C_ExtendSortMap_Scopes2_s3
struct _Con_M_C_ExtendSortMap_Scopes2_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes2_s3;
extern int step_M_C_ExtendSortMap_Scopes2_s3(Sink,Term);

/* FUNCTION Prep-JJ-Token-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JJ_Token struct _Con_M_JJ_Token
struct _Con_M_JJ_Token {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JJ_Token;
extern int step_M_JJ_Token(Sink,Term);

/* FUNCTION Util-U-DefineString2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString2 struct _Con_M_U_DefineString2
struct _Con_M_U_DefineString2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString2;
extern int step_M_U_DefineString2(Sink,Term);

/* FUNCTION Cook-C-AttributeValuePattern-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeValuePattern_s2 struct _Con_M_C_AttributeValuePattern_s2
struct _Con_M_C_AttributeValuePattern_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeValuePattern_s2;
extern int step_M_C_AttributeValuePattern_s2(Sink,Term);

/* FUNCTION Cook-C-AttributeValuePattern-1$C-AttributeValuePattern$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeValuePattern_s1 struct _Con_M_C_AttributeValuePattern_s1
struct _Con_M_C_AttributeValuePattern_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeValuePattern_s1;
extern int step_M_C_AttributeValuePattern_s1(Sink,Term);

/* FUNCTION Prelude-AddName-1$AddName$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_AddName struct _Con_M_AddName
struct _Con_M_AddName {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AddName;
extern int step_M_AddName(Sink,Term);

/* FUNCTION Prelude-UnString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_UnString struct _Con_M_UnString
struct _Con_M_UnString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_UnString;
extern int step_M_UnString(Sink,Term);

/* FUNCTION Util-U-ClassName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ClassName struct _Con_M_U_ClassName
struct _Con_M_U_ClassName {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ClassName;
extern int step_M_U_ClassName(Sink,Term);

/* FUNCTION Prelude-Length1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Length1 struct _Con_M_Length1
struct _Con_M_Length1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Length1;
extern int step_M_Length1(Sink,Term);

/* FUNCTION Prep-P-LeftRecursive-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_LeftRecursive_s3 struct _Con_M_P_LeftRecursive_s3
struct _Con_M_P_LeftRecursive_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_LeftRecursive_s3;
extern int step_M_P_LeftRecursive_s3(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes2-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes2_s5 struct _Con_M_C_ExtendSortMap_Scopes2_s5
struct _Con_M_C_ExtendSortMap_Scopes2_s5 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes2_s5;
extern int step_M_C_ExtendSortMap_Scopes2_s5(Sink,Term);

/* FUNCTION Prep-P-LeftRecursive-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_LeftRecursive_s2 struct _Con_M_P_LeftRecursive_s2
struct _Con_M_P_LeftRecursive_s2 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_LeftRecursive_s2;
extern int step_M_P_LeftRecursive_s2(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes2_s6 struct _Con_M_C_ExtendSortMap_Scopes2_s6
struct _Con_M_C_ExtendSortMap_Scopes2_s6 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes2_s6;
extern int step_M_C_ExtendSortMap_Scopes2_s6(Sink,Term);

/* FUNCTION Prep-P-Lexical2Tail- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2Tail struct _Con_M_P_Lexical2Tail
struct _Con_M_P_Lexical2Tail {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2Tail;
extern int step_M_P_Lexical2Tail(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes2-1$C-ExtendSortMap-Scopes2$8$Hx_ScopeSort HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes2_s8 struct _Con_M_C_ExtendSortMap_Scopes2_s8
struct _Con_M_C_ExtendSortMap_Scopes2_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes2_s8;
extern int step_M_C_ExtendSortMap_Scopes2_s8(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes2_s9 struct _Con_M_C_ExtendSortMap_Scopes2_s9
struct _Con_M_C_ExtendSortMap_Scopes2_s9 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes2_s9;
extern int step_M_C_ExtendSortMap_Scopes2_s9(Sink,Term);

/* FUNCTION Prep-P-LeftRecursive- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_LeftRecursive_s1 struct _Con_M_P_LeftRecursive_s1
struct _Con_M_P_LeftRecursive_s1 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_LeftRecursive_s1;
extern int step_M_P_LeftRecursive_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s243 struct _Con_M_C_UnsynthesizeRule_s243
struct _Con_M_C_UnsynthesizeRule_s243 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s243;
extern int step_M_C_UnsynthesizeRule_s243(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s242 struct _Con_M_C_UnsynthesizeRule_s242
struct _Con_M_C_UnsynthesizeRule_s242 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s242;
extern int step_M_C_UnsynthesizeRule_s242(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s241 struct _Con_M_C_UnsynthesizeRule_s241
struct _Con_M_C_UnsynthesizeRule_s241 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s241;
extern int step_M_C_UnsynthesizeRule_s241(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s240 struct _Con_M_C_UnsynthesizeRule_s240
struct _Con_M_C_UnsynthesizeRule_s240 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s240;
extern int step_M_C_UnsynthesizeRule_s240(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Defines-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Defines_s3 struct _Con_M_P_MetaJJ_Production_Defines_s3
struct _Con_M_P_MetaJJ_Production_Defines_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Defines_s3;
extern int step_M_P_MetaJJ_Production_Defines_s3(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Defines-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Defines_s2 struct _Con_M_P_MetaJJ_Production_Defines_s2
struct _Con_M_P_MetaJJ_Production_Defines_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Defines_s2;
extern int step_M_P_MetaJJ_Production_Defines_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s249 struct _Con_M_C_UnsynthesizeRule_s249
struct _Con_M_C_UnsynthesizeRule_s249 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s249;
extern int step_M_C_UnsynthesizeRule_s249(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Defines- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Defines_s1 struct _Con_M_P_MetaJJ_Production_Defines_s1
struct _Con_M_P_MetaJJ_Production_Defines_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Defines_s1;
extern int step_M_P_MetaJJ_Production_Defines_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s248 struct _Con_M_C_UnsynthesizeRule_s248
struct _Con_M_C_UnsynthesizeRule_s248 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s248;
extern int step_M_C_UnsynthesizeRule_s248(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s247 struct _Con_M_C_UnsynthesizeRule_s247
struct _Con_M_C_UnsynthesizeRule_s247 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s247;
extern int step_M_C_UnsynthesizeRule_s247(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s246 struct _Con_M_C_UnsynthesizeRule_s246
struct _Con_M_C_UnsynthesizeRule_s246 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s246;
extern int step_M_C_UnsynthesizeRule_s246(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s245 struct _Con_M_C_UnsynthesizeRule_s245
struct _Con_M_C_UnsynthesizeRule_s245 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s245;
extern int step_M_C_UnsynthesizeRule_s245(Sink,Term);

/* FUNCTION Util-U-SortNameWithRepeat1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortNameWithRepeat1 struct _Con_M_U_SortNameWithRepeat1
struct _Con_M_U_SortNameWithRepeat1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortNameWithRepeat1;
extern int step_M_U_SortNameWithRepeat1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s253 struct _Con_M_C_UnsynthesizeRule_s253
struct _Con_M_C_UnsynthesizeRule_s253 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s253;
extern int step_M_C_UnsynthesizeRule_s253(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts1_s4 struct _Con_M_C_ParsedForm_ScopeSorts1_s4
struct _Con_M_C_ParsedForm_ScopeSorts1_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts1_s4;
extern int step_M_C_ParsedForm_ScopeSorts1_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s252 struct _Con_M_C_UnsynthesizeRule_s252
struct _Con_M_C_UnsynthesizeRule_s252 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s252;
extern int step_M_C_UnsynthesizeRule_s252(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s255 struct _Con_M_C_UnsynthesizeRule_s255
struct _Con_M_C_UnsynthesizeRule_s255 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s255;
extern int step_M_C_UnsynthesizeRule_s255(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts1_s2 struct _Con_M_C_ParsedForm_ScopeSorts1_s2
struct _Con_M_C_ParsedForm_ScopeSorts1_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts1_s2;
extern int step_M_C_ParsedForm_ScopeSorts1_s2(Sink,Term);

/* FUNCTION Prelude-Trace-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Trace struct _Con_M_Trace
struct _Con_M_Trace {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Trace;
extern int step_M_Trace(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s254 struct _Con_M_C_UnsynthesizeRule_s254
struct _Con_M_C_UnsynthesizeRule_s254 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s254;
extern int step_M_C_UnsynthesizeRule_s254(Sink,Term);

/* FUNCTION Cook-C-Unparse-Alternatives- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Alternatives struct _Con_M_C_Unparse_Alternatives
struct _Con_M_C_Unparse_Alternatives {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Alternatives;
extern int step_M_C_Unparse_Alternatives(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts1_s3 struct _Con_M_C_ParsedForm_ScopeSorts1_s3
struct _Con_M_C_ParsedForm_ScopeSorts1_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts1_s3;
extern int step_M_C_ParsedForm_ScopeSorts1_s3(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts1_s8 struct _Con_M_C_ParsedForm_ScopeSorts1_s8
struct _Con_M_C_ParsedForm_ScopeSorts1_s8 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts1_s8;
extern int step_M_C_ParsedForm_ScopeSorts1_s8(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s251 struct _Con_M_C_UnsynthesizeRule_s251
struct _Con_M_C_UnsynthesizeRule_s251 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s251;
extern int step_M_C_UnsynthesizeRule_s251(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts1-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts1_s6 struct _Con_M_C_ParsedForm_ScopeSorts1_s6
struct _Con_M_C_ParsedForm_ScopeSorts1_s6 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts1_s6;
extern int step_M_C_ParsedForm_ScopeSorts1_s6(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s250 struct _Con_M_C_UnsynthesizeRule_s250
struct _Con_M_C_UnsynthesizeRule_s250 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s250;
extern int step_M_C_UnsynthesizeRule_s250(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts1_s7 struct _Con_M_C_ParsedForm_ScopeSorts1_s7
struct _Con_M_C_ParsedForm_ScopeSorts1_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts1_s7;
extern int step_M_C_ParsedForm_ScopeSorts1_s7(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s257 struct _Con_M_C_UnsynthesizeRule_s257
struct _Con_M_C_UnsynthesizeRule_s257 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s257;
extern int step_M_C_UnsynthesizeRule_s257(Sink,Term);

/* FUNCTION Prep-AttributeKindIndicator-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AttributeKindIndicator_s1 struct _Con_M_AttributeKindIndicator_s1
struct _Con_M_AttributeKindIndicator_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AttributeKindIndicator_s1;
extern int step_M_AttributeKindIndicator_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s256 struct _Con_M_C_UnsynthesizeRule_s256
struct _Con_M_C_UnsynthesizeRule_s256 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s256;
extern int step_M_C_UnsynthesizeRule_s256(Sink,Term);

/* FUNCTION Prep-AttributeKindIndicator-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AttributeKindIndicator_s2 struct _Con_M_AttributeKindIndicator_s2
struct _Con_M_AttributeKindIndicator_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AttributeKindIndicator_s2;
extern int step_M_AttributeKindIndicator_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s259 struct _Con_M_C_UnsynthesizeRule_s259
struct _Con_M_C_UnsynthesizeRule_s259 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s259;
extern int step_M_C_UnsynthesizeRule_s259(Sink,Term);

/* FUNCTION Prelude-Map2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Map2_s3 struct _Con_M_Map2_s3
struct _Con_M_Map2_s3 {struct _Construction construction; Term sub[4]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_Map2_s3;
extern int step_M_Map2_s3(Sink,Term);

/* FUNCTION Prelude-Map2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Map2_s5 struct _Con_M_Map2_s5
struct _Con_M_Map2_s5 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_Map2_s5;
extern int step_M_Map2_s5(Sink,Term);

/* FUNCTION Prelude-Map2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Map2_s4 struct _Con_M_Map2_s4
struct _Con_M_Map2_s4 {struct _Construction construction; Term sub[5]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_Map2_s4;
extern int step_M_Map2_s4(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-WrapPattern2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_WrapPattern2_s4 struct _Con_M_C_ScopeSort_WrapPattern2_s4
struct _Con_M_C_ScopeSort_WrapPattern2_s4 {struct _Construction construction; Term sub[8]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_WrapPattern2_s4;
extern int step_M_C_ScopeSort_WrapPattern2_s4(Sink,Term);

/* FUNCTION Prelude-NamesFrom-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_NamesFrom_s1 struct _Con_M_NamesFrom_s1
struct _Con_M_NamesFrom_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NamesFrom_s1;
extern int step_M_NamesFrom_s1(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-WrapPattern2-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_WrapPattern2_s3 struct _Con_M_C_ScopeSort_WrapPattern2_s3
struct _Con_M_C_ScopeSort_WrapPattern2_s3 {struct _Construction construction; Term sub[8]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_WrapPattern2_s3;
extern int step_M_C_ScopeSort_WrapPattern2_s3(Sink,Term);

/* FUNCTION Prelude-Map2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Map2_s1 struct _Con_M_Map2_s1
struct _Con_M_Map2_s1 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_Map2_s1;
extern int step_M_Map2_s1(Sink,Term);

/* FUNCTION Prep-P-Meta-Prefix-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Meta_Prefix struct _Con_M_P_Meta_Prefix
struct _Con_M_P_Meta_Prefix {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Meta_Prefix;
extern int step_M_P_Meta_Prefix(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts1-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts1_s1 struct _Con_M_C_ParsedForm_ScopeSorts1_s1
struct _Con_M_C_ParsedForm_ScopeSorts1_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts1_s1;
extern int step_M_C_ParsedForm_ScopeSorts1_s1(Sink,Term);

/* FUNCTION Prelude-Map2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Map2_s6 struct _Con_M_Map2_s6
struct _Con_M_Map2_s6 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_Map2_s6;
extern int step_M_Map2_s6(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s16 struct _Con_M_U_SymbolSortTokenName2_s16
struct _Con_M_U_SymbolSortTokenName2_s16 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s16;
extern int step_M_U_SymbolSortTokenName2_s16(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s225 struct _Con_M_C_UnsynthesizeRule_s225
struct _Con_M_C_UnsynthesizeRule_s225 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s225;
extern int step_M_C_UnsynthesizeRule_s225(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s15 struct _Con_M_U_SymbolSortTokenName2_s15
struct _Con_M_U_SymbolSortTokenName2_s15 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s15;
extern int step_M_U_SymbolSortTokenName2_s15(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s226 struct _Con_M_C_UnsynthesizeRule_s226
struct _Con_M_C_UnsynthesizeRule_s226 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s226;
extern int step_M_C_UnsynthesizeRule_s226(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s18 struct _Con_M_U_SymbolSortTokenName2_s18
struct _Con_M_U_SymbolSortTokenName2_s18 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s18;
extern int step_M_U_SymbolSortTokenName2_s18(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s223 struct _Con_M_C_UnsynthesizeRule_s223
struct _Con_M_C_UnsynthesizeRule_s223 {struct _Construction construction; Term sub[24]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s223;
extern int step_M_C_UnsynthesizeRule_s223(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s224 struct _Con_M_C_UnsynthesizeRule_s224
struct _Con_M_C_UnsynthesizeRule_s224 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s224;
extern int step_M_C_UnsynthesizeRule_s224(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s12 struct _Con_M_U_SymbolSortTokenName2_s12
struct _Con_M_U_SymbolSortTokenName2_s12 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s12;
extern int step_M_U_SymbolSortTokenName2_s12(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish1_s1 struct _Con_M_U_MakeDM_Finish1_s1
struct _Con_M_U_MakeDM_Finish1_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish1_s1;
extern int step_M_U_MakeDM_Finish1_s1(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s14 struct _Con_M_U_SymbolSortTokenName2_s14
struct _Con_M_U_SymbolSortTokenName2_s14 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s14;
extern int step_M_U_SymbolSortTokenName2_s14(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish1_s2 struct _Con_M_U_MakeDM_Finish1_s2
struct _Con_M_U_MakeDM_Finish1_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish1_s2;
extern int step_M_U_MakeDM_Finish1_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s227 struct _Con_M_C_UnsynthesizeRule_s227
struct _Con_M_C_UnsynthesizeRule_s227 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s227;
extern int step_M_C_UnsynthesizeRule_s227(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s13 struct _Con_M_U_SymbolSortTokenName2_s13
struct _Con_M_U_SymbolSortTokenName2_s13 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s13;
extern int step_M_U_SymbolSortTokenName2_s13(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish1_s3 struct _Con_M_U_MakeDM_Finish1_s3
struct _Con_M_U_MakeDM_Finish1_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish1_s3;
extern int step_M_U_MakeDM_Finish1_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s228 struct _Con_M_C_UnsynthesizeRule_s228
struct _Con_M_C_UnsynthesizeRule_s228 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s228;
extern int step_M_C_UnsynthesizeRule_s228(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeDefine- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeDefine struct _Con_M_C_UnsynthesizeDefine
struct _Con_M_C_UnsynthesizeDefine {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeDefine;
extern int step_M_C_UnsynthesizeDefine(Sink,Term);

/* FUNCTION Cook-C-AddAttributeSynthesized-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeSynthesized struct _Con_M_C_AddAttributeSynthesized
struct _Con_M_C_AddAttributeSynthesized {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeSynthesized;
extern int step_M_C_AddAttributeSynthesized(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s10 struct _Con_M_U_SymbolSortTokenName2_s10
struct _Con_M_U_SymbolSortTokenName2_s10 {struct _Construction construction; Term sub[8]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s10;
extern int step_M_U_SymbolSortTokenName2_s10(Sink,Term);

/* FUNCTION Util-U-RulePrefixString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RulePrefixString_s1 struct _Con_M_U_RulePrefixString_s1
struct _Con_M_U_RulePrefixString_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RulePrefixString_s1;
extern int step_M_U_RulePrefixString_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s221 struct _Con_M_C_UnsynthesizeRule_s221
struct _Con_M_C_UnsynthesizeRule_s221 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s221;
extern int step_M_C_UnsynthesizeRule_s221(Sink,Term);

/* FUNCTION Prep-P-SameScopeSort-1$P-SameScopeSort$4$Hx_ScopeSort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSort_s4 struct _Con_M_P_SameScopeSort_s4
struct _Con_M_P_SameScopeSort_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSort_s4;
extern int step_M_P_SameScopeSort_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s222 struct _Con_M_C_UnsynthesizeRule_s222
struct _Con_M_C_UnsynthesizeRule_s222 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s222;
extern int step_M_C_UnsynthesizeRule_s222(Sink,Term);

/* FUNCTION Prep-P-SameScopeSort-1$P-SameScopeSort$2$Hx_RepeatSingle HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSort_s2 struct _Con_M_P_SameScopeSort_s2
struct _Con_M_P_SameScopeSort_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSort_s2;
extern int step_M_P_SameScopeSort_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s220 struct _Con_M_C_UnsynthesizeRule_s220
struct _Con_M_C_UnsynthesizeRule_s220 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s220;
extern int step_M_C_UnsynthesizeRule_s220(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s19 struct _Con_M_U_SymbolSortTokenName2_s19
struct _Con_M_U_SymbolSortTokenName2_s19 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s19;
extern int step_M_U_SymbolSortTokenName2_s19(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s234 struct _Con_M_C_UnsynthesizeRule_s234
struct _Con_M_C_UnsynthesizeRule_s234 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s234;
extern int step_M_C_UnsynthesizeRule_s234(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s235 struct _Con_M_C_UnsynthesizeRule_s235
struct _Con_M_C_UnsynthesizeRule_s235 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s235;
extern int step_M_C_UnsynthesizeRule_s235(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s236 struct _Con_M_C_UnsynthesizeRule_s236
struct _Con_M_C_UnsynthesizeRule_s236 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s236;
extern int step_M_C_UnsynthesizeRule_s236(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders_s3 struct _Con_M_C_ScopeSort_AddBinders_s3
struct _Con_M_C_ScopeSort_AddBinders_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders_s3;
extern int step_M_C_ScopeSort_AddBinders_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s237 struct _Con_M_C_UnsynthesizeRule_s237
struct _Con_M_C_UnsynthesizeRule_s237 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s237;
extern int step_M_C_UnsynthesizeRule_s237(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders_s4 struct _Con_M_C_ScopeSort_AddBinders_s4
struct _Con_M_C_ScopeSort_AddBinders_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders_s4;
extern int step_M_C_ScopeSort_AddBinders_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s238 struct _Con_M_C_UnsynthesizeRule_s238
struct _Con_M_C_UnsynthesizeRule_s238 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s238;
extern int step_M_C_UnsynthesizeRule_s238(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders_s1 struct _Con_M_C_ScopeSort_AddBinders_s1
struct _Con_M_C_ScopeSort_AddBinders_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders_s1;
extern int step_M_C_ScopeSort_AddBinders_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s239 struct _Con_M_C_UnsynthesizeRule_s239
struct _Con_M_C_UnsynthesizeRule_s239 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s239;
extern int step_M_C_UnsynthesizeRule_s239(Sink,Term);

/* FUNCTION Prep-P-PrintEnvironment-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_PrintEnvironment_s2 struct _Con_M_P_PrintEnvironment_s2
struct _Con_M_P_PrintEnvironment_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_PrintEnvironment_s2;
extern int step_M_P_PrintEnvironment_s2(Sink,Term);

/* FUNCTION Prep-P-PrintEnvironment-1$P-PrintEnvironment$1$Hx_module HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_PrintEnvironment_s1 struct _Con_M_P_PrintEnvironment_s1
struct _Con_M_P_PrintEnvironment_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_PrintEnvironment_s1;
extern int step_M_P_PrintEnvironment_s1(Sink,Term);

/* FUNCTION Prep-JJ-NumericLiteral-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JJ_NumericLiteral struct _Con_M_JJ_NumericLiteral
struct _Con_M_JJ_NumericLiteral {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JJ_NumericLiteral;
extern int step_M_JJ_NumericLiteral(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s230 struct _Con_M_C_UnsynthesizeRule_s230
struct _Con_M_C_UnsynthesizeRule_s230 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s230;
extern int step_M_C_UnsynthesizeRule_s230(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1-3$P-ProduceBodyTerm1$2$PFK HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1_s2 struct _Con_M_P_ProduceBodyTerm1_s2
struct _Con_M_P_ProduceBodyTerm1_s2 {struct _Construction construction; Term sub[14]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1_s2;
extern int step_M_P_ProduceBodyTerm1_s2(Sink,Term);

/* FUNCTION Prelude-StringConcatWhen-1$StringConcatWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringConcatWhen struct _Con_M_StringConcatWhen
struct _Con_M_StringConcatWhen {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringConcatWhen;
extern int step_M_StringConcatWhen(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s231 struct _Con_M_C_UnsynthesizeRule_s231
struct _Con_M_C_UnsynthesizeRule_s231 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s231;
extern int step_M_C_UnsynthesizeRule_s231(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1_s3 struct _Con_M_P_ProduceBodyTerm1_s3
struct _Con_M_P_ProduceBodyTerm1_s3 {struct _Construction construction; Term sub[15]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1_s3;
extern int step_M_P_ProduceBodyTerm1_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s232 struct _Con_M_C_UnsynthesizeRule_s232
struct _Con_M_C_UnsynthesizeRule_s232 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s232;
extern int step_M_C_UnsynthesizeRule_s232(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s233 struct _Con_M_C_UnsynthesizeRule_s233
struct _Con_M_C_UnsynthesizeRule_s233 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s233;
extern int step_M_C_UnsynthesizeRule_s233(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1_s1 struct _Con_M_P_ProduceBodyTerm1_s1
struct _Con_M_P_ProduceBodyTerm1_s1 {struct _Construction construction; Term sub[13]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1_s1;
extern int step_M_P_ProduceBodyTerm1_s1(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols1_s1 struct _Con_M_U_NonMainSyntacticSymbols1_s1
struct _Con_M_U_NonMainSyntacticSymbols1_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols1_s1;
extern int step_M_U_NonMainSyntacticSymbols1_s1(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1_s7 struct _Con_M_P_ProduceBodyTerm1_s7
struct _Con_M_P_ProduceBodyTerm1_s7 {struct _Construction construction; Term sub[17]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1_s7;
extern int step_M_P_ProduceBodyTerm1_s7(Sink,Term);

/* FUNCTION Util-U-MapAllConstructorsForSorts- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MapAllConstructorsForSorts struct _Con_M_U_MapAllConstructorsForSorts
struct _Con_M_U_MapAllConstructorsForSorts {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_U_MapAllConstructorsForSorts;
extern int step_M_U_MapAllConstructorsForSorts(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited struct _Con_M_U_MakeFunction2Inherited
struct _Con_M_U_MakeFunction2Inherited {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited;
extern int step_M_U_MakeFunction2Inherited(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1_s6 struct _Con_M_P_ProduceBodyTerm1_s6
struct _Con_M_P_ProduceBodyTerm1_s6 {struct _Construction construction; Term sub[17]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1_s6;
extern int step_M_P_ProduceBodyTerm1_s6(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1_s5 struct _Con_M_P_ProduceBodyTerm1_s5
struct _Con_M_P_ProduceBodyTerm1_s5 {struct _Construction construction; Term sub[17]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1_s5;
extern int step_M_P_ProduceBodyTerm1_s5(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols1_s2 struct _Con_M_U_NonMainSyntacticSymbols1_s2
struct _Con_M_U_NonMainSyntacticSymbols1_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols1_s2;
extern int step_M_U_NonMainSyntacticSymbols1_s2(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1_s4 struct _Con_M_P_ProduceBodyTerm1_s4
struct _Con_M_P_ProduceBodyTerm1_s4 {struct _Construction construction; Term sub[15]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1_s4;
extern int step_M_P_ProduceBodyTerm1_s4(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1_s8 struct _Con_M_P_ProduceBodyTerm1_s8
struct _Con_M_P_ProduceBodyTerm1_s8 {struct _Construction construction; Term sub[12]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1_s8;
extern int step_M_P_ProduceBodyTerm1_s8(Sink,Term);

/* FUNCTION Cook-C-AddScopesSynthesized-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddScopesSynthesized struct _Con_M_C_AddScopesSynthesized
struct _Con_M_C_AddScopesSynthesized {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddScopesSynthesized;
extern int step_M_C_AddScopesSynthesized(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar3 struct _Con_M_P_SortMetaVar3
struct _Con_M_P_SortMetaVar3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar3;
extern int step_M_P_SortMetaVar3(Sink,Term);

/* FUNCTION Prep-P2Print-1$P2Print$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_P2Print struct _Con_M_P2Print
struct _Con_M_P2Print {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P2Print;
extern int step_M_P2Print(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar2 struct _Con_M_P_SortMetaVar2
struct _Con_M_P_SortMetaVar2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar2;
extern int step_M_P_SortMetaVar2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s207 struct _Con_M_C_UnsynthesizeRule_s207
struct _Con_M_C_UnsynthesizeRule_s207 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s207;
extern int step_M_C_UnsynthesizeRule_s207(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s208 struct _Con_M_C_UnsynthesizeRule_s208
struct _Con_M_C_UnsynthesizeRule_s208 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s208;
extern int step_M_C_UnsynthesizeRule_s208(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s205 struct _Con_M_C_UnsynthesizeRule_s205
struct _Con_M_C_UnsynthesizeRule_s205 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s205;
extern int step_M_C_UnsynthesizeRule_s205(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s206 struct _Con_M_C_UnsynthesizeRule_s206
struct _Con_M_C_UnsynthesizeRule_s206 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s206;
extern int step_M_C_UnsynthesizeRule_s206(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s2 struct _Con_M_U_MakeSort2UserConstructors3_s2
struct _Con_M_U_MakeSort2UserConstructors3_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s2;
extern int step_M_U_MakeSort2UserConstructors3_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s203 struct _Con_M_C_UnsynthesizeRule_s203
struct _Con_M_C_UnsynthesizeRule_s203 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s203;
extern int step_M_C_UnsynthesizeRule_s203(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s1 struct _Con_M_U_MakeSort2UserConstructors3_s1
struct _Con_M_U_MakeSort2UserConstructors3_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s1;
extern int step_M_U_MakeSort2UserConstructors3_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s204 struct _Con_M_C_UnsynthesizeRule_s204
struct _Con_M_C_UnsynthesizeRule_s204 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s204;
extern int step_M_C_UnsynthesizeRule_s204(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s201 struct _Con_M_C_UnsynthesizeRule_s201
struct _Con_M_C_UnsynthesizeRule_s201 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s201;
extern int step_M_C_UnsynthesizeRule_s201(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s202 struct _Con_M_C_UnsynthesizeRule_s202
struct _Con_M_C_UnsynthesizeRule_s202 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s202;
extern int step_M_C_UnsynthesizeRule_s202(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s200 struct _Con_M_C_UnsynthesizeRule_s200
struct _Con_M_C_UnsynthesizeRule_s200 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s200;
extern int step_M_C_UnsynthesizeRule_s200(Sink,Term);

/* FUNCTION Util-LookupAttributeForm-1$LookupAttributeForm$AFM HEADER DECLARATIONS. */
#define STRUCT_Con_M_LookupAttributeForm struct _Con_M_LookupAttributeForm
struct _Con_M_LookupAttributeForm {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_LookupAttributeForm;
extern int step_M_LookupAttributeForm(Sink,Term);

/* FUNCTION Prelude-IntersectNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IntersectNames struct _Con_M_IntersectNames
struct _Con_M_IntersectNames {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IntersectNames;
extern int step_M_IntersectNames(Sink,Term);

/* FUNCTION Util-U-Local-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Local struct _Con_M_U_Local
struct _Con_M_U_Local {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Local;
extern int step_M_U_Local(Sink,Term);

/* FUNCTION Prelude-And-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_And_s1 struct _Con_M_And_s1
struct _Con_M_And_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_And_s1;
extern int step_M_And_s1(Sink,Term);

/* FUNCTION Prelude-And-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_And_s2 struct _Con_M_And_s2
struct _Con_M_And_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_And_s2;
extern int step_M_And_s2(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s10 struct _Con_M_U_KeepInheritedMapEntry2_s10
struct _Con_M_U_KeepInheritedMapEntry2_s10 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s10;
extern int step_M_U_KeepInheritedMapEntry2_s10(Sink,Term);

/* FUNCTION Prep-P-RepairLeftRecursiveConsumerFormTag-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_RepairLeftRecursiveConsumerFormTag_s2 struct _Con_M_P_RepairLeftRecursiveConsumerFormTag_s2
struct _Con_M_P_RepairLeftRecursiveConsumerFormTag_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_RepairLeftRecursiveConsumerFormTag_s2;
extern int step_M_P_RepairLeftRecursiveConsumerFormTag_s2(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s11 struct _Con_M_U_KeepInheritedMapEntry2_s11
struct _Con_M_U_KeepInheritedMapEntry2_s11 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s11;
extern int step_M_U_KeepInheritedMapEntry2_s11(Sink,Term);

/* FUNCTION Prep-P-RepairLeftRecursiveConsumerFormTag- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_RepairLeftRecursiveConsumerFormTag_s1 struct _Con_M_P_RepairLeftRecursiveConsumerFormTag_s1
struct _Con_M_P_RepairLeftRecursiveConsumerFormTag_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_RepairLeftRecursiveConsumerFormTag_s1;
extern int step_M_P_RepairLeftRecursiveConsumerFormTag_s1(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s12 struct _Con_M_U_KeepInheritedMapEntry2_s12
struct _Con_M_U_KeepInheritedMapEntry2_s12 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s12;
extern int step_M_U_KeepInheritedMapEntry2_s12(Sink,Term);

/* FUNCTION Util-U-DefinesConstructors- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinesConstructors struct _Con_M_U_DefinesConstructors
struct _Con_M_U_DefinesConstructors {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinesConstructors;
extern int step_M_U_DefinesConstructors(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s13 struct _Con_M_U_KeepInheritedMapEntry2_s13
struct _Con_M_U_KeepInheritedMapEntry2_s13 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s13;
extern int step_M_U_KeepInheritedMapEntry2_s13(Sink,Term);

/* FUNCTION Prep-P-RepairLeftRecursiveConsumerFormTag-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_RepairLeftRecursiveConsumerFormTag_s3 struct _Con_M_P_RepairLeftRecursiveConsumerFormTag_s3
struct _Con_M_P_RepairLeftRecursiveConsumerFormTag_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_RepairLeftRecursiveConsumerFormTag_s3;
extern int step_M_P_RepairLeftRecursiveConsumerFormTag_s3(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s5 struct _Con_M_U_MakeSort2UserConstructors3_s5
struct _Con_M_U_MakeSort2UserConstructors3_s5 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s5;
extern int step_M_U_MakeSort2UserConstructors3_s5(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s14 struct _Con_M_U_KeepInheritedMapEntry2_s14
struct _Con_M_U_KeepInheritedMapEntry2_s14 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s14;
extern int step_M_U_KeepInheritedMapEntry2_s14(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s6 struct _Con_M_U_MakeSort2UserConstructors3_s6
struct _Con_M_U_MakeSort2UserConstructors3_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s6;
extern int step_M_U_MakeSort2UserConstructors3_s6(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s15 struct _Con_M_U_KeepInheritedMapEntry2_s15
struct _Con_M_U_KeepInheritedMapEntry2_s15 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s15;
extern int step_M_U_KeepInheritedMapEntry2_s15(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExp-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExp_s1 struct _Con_M_P_DeclareRegExp_s1
struct _Con_M_P_DeclareRegExp_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExp_s1;
extern int step_M_P_DeclareRegExp_s1(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s3 struct _Con_M_U_MakeSort2UserConstructors3_s3
struct _Con_M_U_MakeSort2UserConstructors3_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s3;
extern int step_M_U_MakeSort2UserConstructors3_s3(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s16 struct _Con_M_U_KeepInheritedMapEntry2_s16
struct _Con_M_U_KeepInheritedMapEntry2_s16 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s16;
extern int step_M_U_KeepInheritedMapEntry2_s16(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s4 struct _Con_M_U_MakeSort2UserConstructors3_s4
struct _Con_M_U_MakeSort2UserConstructors3_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s4;
extern int step_M_U_MakeSort2UserConstructors3_s4(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s17 struct _Con_M_U_KeepInheritedMapEntry2_s17
struct _Con_M_U_KeepInheritedMapEntry2_s17 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s17;
extern int step_M_U_KeepInheritedMapEntry2_s17(Sink,Term);

/* FUNCTION Util-U-ExtendDeclarationMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ExtendDeclarationMap_s1 struct _Con_M_U_ExtendDeclarationMap_s1
struct _Con_M_U_ExtendDeclarationMap_s1 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_ExtendDeclarationMap_s1;
extern int step_M_U_ExtendDeclarationMap_s1(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s9 struct _Con_M_U_MakeSort2UserConstructors3_s9
struct _Con_M_U_MakeSort2UserConstructors3_s9 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s9;
extern int step_M_U_MakeSort2UserConstructors3_s9(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s7 struct _Con_M_U_MakeSort2UserConstructors3_s7
struct _Con_M_U_MakeSort2UserConstructors3_s7 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s7;
extern int step_M_U_MakeSort2UserConstructors3_s7(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExp-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExp_s2 struct _Con_M_P_DeclareRegExp_s2
struct _Con_M_P_DeclareRegExp_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExp_s2;
extern int step_M_P_DeclareRegExp_s2(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s8 struct _Con_M_U_MakeSort2UserConstructors3_s8
struct _Con_M_U_MakeSort2UserConstructors3_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s8;
extern int step_M_U_MakeSort2UserConstructors3_s8(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s25 struct _Con_M_U_SymbolSortTokenName2_s25
struct _Con_M_U_SymbolSortTokenName2_s25 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s25;
extern int step_M_U_SymbolSortTokenName2_s25(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s216 struct _Con_M_C_UnsynthesizeRule_s216
struct _Con_M_C_UnsynthesizeRule_s216 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s216;
extern int step_M_C_UnsynthesizeRule_s216(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s24 struct _Con_M_U_SymbolSortTokenName2_s24
struct _Con_M_U_SymbolSortTokenName2_s24 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s24;
extern int step_M_U_SymbolSortTokenName2_s24(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s217 struct _Con_M_C_UnsynthesizeRule_s217
struct _Con_M_C_UnsynthesizeRule_s217 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s217;
extern int step_M_C_UnsynthesizeRule_s217(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s23 struct _Con_M_U_SymbolSortTokenName2_s23
struct _Con_M_U_SymbolSortTokenName2_s23 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s23;
extern int step_M_U_SymbolSortTokenName2_s23(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s218 struct _Con_M_C_UnsynthesizeRule_s218
struct _Con_M_C_UnsynthesizeRule_s218 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s218;
extern int step_M_C_UnsynthesizeRule_s218(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s22 struct _Con_M_U_SymbolSortTokenName2_s22
struct _Con_M_U_SymbolSortTokenName2_s22 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s22;
extern int step_M_U_SymbolSortTokenName2_s22(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s219 struct _Con_M_C_UnsynthesizeRule_s219
struct _Con_M_C_UnsynthesizeRule_s219 {struct _Construction construction; Term sub[24]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s219;
extern int step_M_C_UnsynthesizeRule_s219(Sink,Term);

/* FUNCTION Cook-C-CrsxifyScope-1$C-CrsxifyScope$Hx_Scope HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyScope struct _Con_M_C_CrsxifyScope
struct _Con_M_C_CrsxifyScope {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyScope;
extern int step_M_C_CrsxifyScope(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s212 struct _Con_M_C_UnsynthesizeRule_s212
struct _Con_M_C_UnsynthesizeRule_s212 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s212;
extern int step_M_C_UnsynthesizeRule_s212(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$C-UnsynthesizeRule$214$$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s214 struct _Con_M_C_UnsynthesizeRule_s214
struct _Con_M_C_UnsynthesizeRule_s214 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s214;
extern int step_M_C_UnsynthesizeRule_s214(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s26 struct _Con_M_U_SymbolSortTokenName2_s26
struct _Con_M_U_SymbolSortTokenName2_s26 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s26;
extern int step_M_U_SymbolSortTokenName2_s26(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s210 struct _Con_M_C_UnsynthesizeRule_s210
struct _Con_M_C_UnsynthesizeRule_s210 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s210;
extern int step_M_C_UnsynthesizeRule_s210(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRulePrefix-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRulePrefix_s1 struct _Con_M_C_CrsxifyRulePrefix_s1
struct _Con_M_C_CrsxifyRulePrefix_s1 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRulePrefix_s1;
extern int step_M_C_CrsxifyRulePrefix_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s211 struct _Con_M_C_UnsynthesizeRule_s211
struct _Con_M_C_UnsynthesizeRule_s211 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s211;
extern int step_M_C_UnsynthesizeRule_s211(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s21 struct _Con_M_U_SymbolSortTokenName2_s21
struct _Con_M_U_SymbolSortTokenName2_s21 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s21;
extern int step_M_U_SymbolSortTokenName2_s21(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s20 struct _Con_M_U_SymbolSortTokenName2_s20
struct _Con_M_U_SymbolSortTokenName2_s20 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s20;
extern int step_M_U_SymbolSortTokenName2_s20(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s7 struct _Con_M_C_AttributeWrapperSorted1_s7
struct _Con_M_C_AttributeWrapperSorted1_s7 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s7;
extern int step_M_C_AttributeWrapperSorted1_s7(Sink,Term);

/* FUNCTION Prelude-RemoveName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_RemoveName_s1 struct _Con_M_RemoveName_s1
struct _Con_M_RemoveName_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_RemoveName_s1;
extern int step_M_RemoveName_s1(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-9$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s8 struct _Con_M_C_AttributeWrapperSorted1_s8
struct _Con_M_C_AttributeWrapperSorted1_s8 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s8;
extern int step_M_C_AttributeWrapperSorted1_s8(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s5 struct _Con_M_C_AttributeWrapperSorted1_s5
struct _Con_M_C_AttributeWrapperSorted1_s5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s5;
extern int step_M_C_AttributeWrapperSorted1_s5(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts struct _Con_M_C_ParsedForm_ScopeSorts
struct _Con_M_C_ParsedForm_ScopeSorts {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts;
extern int step_M_C_ParsedForm_ScopeSorts(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s6 struct _Con_M_C_AttributeWrapperSorted1_s6
struct _Con_M_C_AttributeWrapperSorted1_s6 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s6;
extern int step_M_C_AttributeWrapperSorted1_s6(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s3 struct _Con_M_C_AttributeWrapperSorted1_s3
struct _Con_M_C_AttributeWrapperSorted1_s3 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s3;
extern int step_M_C_AttributeWrapperSorted1_s3(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s4 struct _Con_M_C_AttributeWrapperSorted1_s4
struct _Con_M_C_AttributeWrapperSorted1_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s4;
extern int step_M_C_AttributeWrapperSorted1_s4(Sink,Term);

/* FUNCTION Prep-P-SameScopeSort-1$P-SameScopeSort$6$Hx_RepeatSingle HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSort_s6 struct _Con_M_P_SameScopeSort_s6
struct _Con_M_P_SameScopeSort_s6 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSort_s6;
extern int step_M_P_SameScopeSort_s6(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s1 struct _Con_M_C_AttributeWrapperSorted1_s1
struct _Con_M_C_AttributeWrapperSorted1_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s1;
extern int step_M_C_AttributeWrapperSorted1_s1(Sink,Term);

/* FUNCTION Prep-P-SameScopeSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSort_s7 struct _Con_M_P_SameScopeSort_s7
struct _Con_M_P_SameScopeSort_s7 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSort_s7;
extern int step_M_P_SameScopeSort_s7(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s2 struct _Con_M_C_AttributeWrapperSorted1_s2
struct _Con_M_C_AttributeWrapperSorted1_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s2;
extern int step_M_C_AttributeWrapperSorted1_s2(Sink,Term);

/* FUNCTION Prep-P-AttributeProduction-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_AttributeProduction struct _Con_M_P_AttributeProduction
struct _Con_M_P_AttributeProduction {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_AttributeProduction;
extern int step_M_P_AttributeProduction(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s209 struct _Con_M_C_UnsynthesizeRule_s209
struct _Con_M_C_UnsynthesizeRule_s209 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s209;
extern int step_M_C_UnsynthesizeRule_s209(Sink,Term);

/* FUNCTION Cook-C-Unparse-Abstraction-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Abstraction_s1 struct _Con_M_C_Unparse_Abstraction_s1
struct _Con_M_C_Unparse_Abstraction_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Abstraction_s1;
extern int step_M_C_Unparse_Abstraction_s1(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s9 struct _Con_M_C_AttributeWrapperSorted1_s9
struct _Con_M_C_AttributeWrapperSorted1_s9 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s9;
extern int step_M_C_AttributeWrapperSorted1_s9(Sink,Term);

/* FUNCTION Cook-C-Unparse-Abstraction-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Abstraction_s2 struct _Con_M_C_Unparse_Abstraction_s2
struct _Con_M_C_Unparse_Abstraction_s2 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Abstraction_s2;
extern int step_M_C_Unparse_Abstraction_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyEntry- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyEntry struct _Con_M_C_CrsxifyEntry
struct _Con_M_C_CrsxifyEntry {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyEntry;
extern int step_M_C_CrsxifyEntry(Sink,Term);

/* FUNCTION Prelude-SameString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SameString struct _Con_M_SameString
struct _Con_M_SameString {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SameString;
extern int step_M_SameString(Sink,Term);

/* FUNCTION Util-U-Defines-NoSyntax- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Defines_NoSyntax_s1 struct _Con_M_U_Defines_NoSyntax_s1
struct _Con_M_U_Defines_NoSyntax_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Defines_NoSyntax_s1;
extern int step_M_U_Defines_NoSyntax_s1(Sink,Term);

/* FUNCTION Util-U-Defines-NoSyntax-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Defines_NoSyntax_s2 struct _Con_M_U_Defines_NoSyntax_s2
struct _Con_M_U_Defines_NoSyntax_s2 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_Defines_NoSyntax_s2;
extern int step_M_U_Defines_NoSyntax_s2(Sink,Term);

/* FUNCTION Prelude-UnionNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_UnionNames struct _Con_M_UnionNames
struct _Con_M_UnionNames {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_UnionNames;
extern int step_M_UnionNames(Sink,Term);

/* FUNCTION Prep-Prep2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Prep2_s1 struct _Con_M_Prep2_s1
struct _Con_M_Prep2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Prep2_s1;
extern int step_M_Prep2_s1(Sink,Term);

/* FUNCTION Text-ReverseConcat-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_ReverseConcat_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Text_ReverseConcat_s2;
extern int step_M_Text_ReverseConcat_s2(Sink,Term);

/* FUNCTION Text-ReverseConcat-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_ReverseConcat_s1 struct _Con_M_Text_ReverseConcat_s1
struct _Con_M_Text_ReverseConcat_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_ReverseConcat_s1;
extern int step_M_Text_ReverseConcat_s1(Sink,Term);

/* FUNCTION Util-U-Defines-NoSyntax-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Defines_NoSyntax_s8 struct _Con_M_U_Defines_NoSyntax_s8
struct _Con_M_U_Defines_NoSyntax_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Defines_NoSyntax_s8;
extern int step_M_U_Defines_NoSyntax_s8(Sink,Term);

/* FUNCTION Util-U-Defines-NoSyntax-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Defines_NoSyntax_s7 struct _Con_M_U_Defines_NoSyntax_s7
struct _Con_M_U_Defines_NoSyntax_s7 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Defines_NoSyntax_s7;
extern int step_M_U_Defines_NoSyntax_s7(Sink,Term);

/* FUNCTION Util-U-Defines-NoSyntax-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Defines_NoSyntax_s9 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_Defines_NoSyntax_s9;
extern int step_M_U_Defines_NoSyntax_s9(Sink,Term);

/* FUNCTION Util-U-Defines-NoSyntax-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Defines_NoSyntax_s4 struct _Con_M_U_Defines_NoSyntax_s4
struct _Con_M_U_Defines_NoSyntax_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Defines_NoSyntax_s4;
extern int step_M_U_Defines_NoSyntax_s4(Sink,Term);

/* FUNCTION Prelude-TextJoinMap-1$TextJoinMap$TEXT_MAP HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextJoinMap struct _Con_M_TextJoinMap
struct _Con_M_TextJoinMap {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextJoinMap;
extern int step_M_TextJoinMap(Sink,Term);

/* FUNCTION Prep-JJ-Nonterminal-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JJ_Nonterminal struct _Con_M_JJ_Nonterminal
struct _Con_M_JJ_Nonterminal {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JJ_Nonterminal;
extern int step_M_JJ_Nonterminal(Sink,Term);

/* FUNCTION Util-U-Defines-NoSyntax- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Defines_NoSyntax_s3 struct _Con_M_U_Defines_NoSyntax_s3
struct _Con_M_U_Defines_NoSyntax_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Defines_NoSyntax_s3;
extern int step_M_U_Defines_NoSyntax_s3(Sink,Term);

/* FUNCTION Util-U-Defines-NoSyntax-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Defines_NoSyntax_s6 struct _Con_M_U_Defines_NoSyntax_s6
struct _Con_M_U_Defines_NoSyntax_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Defines_NoSyntax_s6;
extern int step_M_U_Defines_NoSyntax_s6(Sink,Term);

/* FUNCTION Prep-IfSingletonRepeat- HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfSingletonRepeat struct _Con_M_IfSingletonRepeat
struct _Con_M_IfSingletonRepeat {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfSingletonRepeat;
extern int step_M_IfSingletonRepeat(Sink,Term);

/* FUNCTION Util-U-Defines-NoSyntax-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Defines_NoSyntax_s5 struct _Con_M_U_Defines_NoSyntax_s5
struct _Con_M_U_Defines_NoSyntax_s5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Defines_NoSyntax_s5;
extern int step_M_U_Defines_NoSyntax_s5(Sink,Term);

/* FUNCTION Cook-C-AD-AddAttributeValue-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AD_AddAttributeValue_s1 struct _Con_M_C_AD_AddAttributeValue_s1
struct _Con_M_C_AD_AddAttributeValue_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AD_AddAttributeValue_s1;
extern int step_M_C_AD_AddAttributeValue_s1(Sink,Term);

/* FUNCTION Prelude-Append-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Append_s2 struct _Con_M_Append_s2
struct _Con_M_Append_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Append_s2;
extern int step_M_Append_s2(Sink,Term);

/* FUNCTION Prelude-ContainsNameWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_ContainsNameWhen_s2 struct _Con_M_ContainsNameWhen_s2
struct _Con_M_ContainsNameWhen_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_ContainsNameWhen_s2;
extern int step_M_ContainsNameWhen_s2(Sink,Term);

/* FUNCTION Util-U-GetAttributeForm-1$U-GetAttributeForm$2$DME_AFM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetAttributeForm_s2 struct _Con_M_U_GetAttributeForm_s2
struct _Con_M_U_GetAttributeForm_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetAttributeForm_s2;
extern int step_M_U_GetAttributeForm_s2(Sink,Term);

/* FUNCTION Prelude-ContainsNameWhen-1$ContainsNameWhen$1$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_ContainsNameWhen_s1 struct _Con_M_ContainsNameWhen_s1
struct _Con_M_ContainsNameWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_ContainsNameWhen_s1;
extern int step_M_ContainsNameWhen_s1(Sink,Term);

/* FUNCTION Util-U-GetAttributeForm-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetAttributeForm_s3 struct _Con_M_U_GetAttributeForm_s3
struct _Con_M_U_GetAttributeForm_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetAttributeForm_s3;
extern int step_M_U_GetAttributeForm_s3(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited2_s1 struct _Con_M_U_MakeFunction2Inherited2_s1
struct _Con_M_U_MakeFunction2Inherited2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited2_s1;
extern int step_M_U_MakeFunction2Inherited2_s1(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited2_s2 struct _Con_M_U_MakeFunction2Inherited2_s2
struct _Con_M_U_MakeFunction2Inherited2_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited2_s2;
extern int step_M_U_MakeFunction2Inherited2_s2(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited2_s3 struct _Con_M_U_MakeFunction2Inherited2_s3
struct _Con_M_U_MakeFunction2Inherited2_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited2_s3;
extern int step_M_U_MakeFunction2Inherited2_s3(Sink,Term);

/* FUNCTION Cook-Cook-1$Cook$Hx_top-module HEADER DECLARATIONS. */
#define STRUCT_Con_M_Cook struct _Con_M_Cook
struct _Con_M_Cook {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Cook;
extern int step_M_Cook(Sink,Term);

/* FUNCTION Util-U-Error-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Error struct _Con_M_U_Error
struct _Con_M_U_Error {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Error;
extern int step_M_U_Error(Sink,Term);

/* FUNCTION Util-U-DeclarationMapEntryString- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapEntryString struct _Con_M_U_DeclarationMapEntryString
struct _Con_M_U_DeclarationMapEntryString {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapEntryString;
extern int step_M_U_DeclarationMapEntryString(Sink,Term);

/* FUNCTION Prelude-Append-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Append_s1 struct _Con_M_Append_s1
struct _Con_M_Append_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Append_s1;
extern int step_M_Append_s1(Sink,Term);

/* FUNCTION Cook-C-SortMap-GetMetaApplicationSubsorts-1$C-SortMap-GetMetaApplicationSubsorts$SM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap_GetMetaApplicationSubsorts struct _Con_M_C_SortMap_GetMetaApplicationSubsorts
struct _Con_M_C_SortMap_GetMetaApplicationSubsorts {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap_GetMetaApplicationSubsorts;
extern int step_M_C_SortMap_GetMetaApplicationSubsorts(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes2 struct _Con_M_C_ExtendSortMap_Scopes2
struct _Con_M_C_ExtendSortMap_Scopes2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes2;
extern int step_M_C_ExtendSortMap_Scopes2(Sink,Term);

/* FUNCTION Prelude-StringToNumericDefault-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringToNumericDefault struct _Con_M_StringToNumericDefault
struct _Con_M_StringToNumericDefault {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringToNumericDefault;
extern int step_M_StringToNumericDefault(Sink,Term);

/* FUNCTION Prelude-TextConcat-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextConcat struct _Con_M_TextConcat
struct _Con_M_TextConcat {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextConcat;
extern int step_M_TextConcat(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain_s9 struct _Con_M_U_InsertDefinesMain_s9
struct _Con_M_U_InsertDefinesMain_s9 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain_s9;
extern int step_M_U_InsertDefinesMain_s9(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain_s8 struct _Con_M_U_InsertDefinesMain_s8
struct _Con_M_U_InsertDefinesMain_s8 {struct _Construction construction; Term sub[10]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain_s8;
extern int step_M_U_InsertDefinesMain_s8(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain_s5 struct _Con_M_U_InsertDefinesMain_s5
struct _Con_M_U_InsertDefinesMain_s5 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain_s5;
extern int step_M_U_InsertDefinesMain_s5(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain_s4 struct _Con_M_U_InsertDefinesMain_s4
struct _Con_M_U_InsertDefinesMain_s4 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain_s4;
extern int step_M_U_InsertDefinesMain_s4(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors struct _Con_M_U_MakeSort2UserConstructors
struct _Con_M_U_MakeSort2UserConstructors {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors;
extern int step_M_U_MakeSort2UserConstructors(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain_s7 struct _Con_M_U_InsertDefinesMain_s7
struct _Con_M_U_InsertDefinesMain_s7 {struct _Construction construction; Term sub[5]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain_s7;
extern int step_M_U_InsertDefinesMain_s7(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain_s6 struct _Con_M_U_InsertDefinesMain_s6
struct _Con_M_U_InsertDefinesMain_s6 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain_s6;
extern int step_M_U_InsertDefinesMain_s6(Sink,Term);

/* FUNCTION Prep-NestedRepeat-some-single HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s22 struct _Con_M_NestedRepeat_s22
struct _Con_M_NestedRepeat_s22 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s22;
extern int step_M_NestedRepeat_s22(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain_s1 struct _Con_M_U_InsertDefinesMain_s1
struct _Con_M_U_InsertDefinesMain_s1 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain_s1;
extern int step_M_U_InsertDefinesMain_s1(Sink,Term);

/* FUNCTION Prep-NestedRepeat-some-some HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s23 struct _Con_M_NestedRepeat_s23
struct _Con_M_NestedRepeat_s23 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s23;
extern int step_M_NestedRepeat_s23(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain_s2 struct _Con_M_U_InsertDefinesMain_s2
struct _Con_M_U_InsertDefinesMain_s2 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain_s2;
extern int step_M_U_InsertDefinesMain_s2(Sink,Term);

/* FUNCTION Prep-NestedRepeat-some-maybe HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s20 struct _Con_M_NestedRepeat_s20
struct _Con_M_NestedRepeat_s20 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s20;
extern int step_M_NestedRepeat_s20(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain_s3 struct _Con_M_U_InsertDefinesMain_s3
struct _Con_M_U_InsertDefinesMain_s3 {struct _Construction construction; Term sub[9]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain_s3;
extern int step_M_U_InsertDefinesMain_s3(Sink,Term);

/* FUNCTION Cook-C-Unparse-Form- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Form struct _Con_M_C_Unparse_Form
struct _Con_M_C_Unparse_Form {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Form;
extern int step_M_C_Unparse_Form(Sink,Term);

/* FUNCTION Prep-NestedRepeat-some-many HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s21 struct _Con_M_NestedRepeat_s21
struct _Con_M_NestedRepeat_s21 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s21;
extern int step_M_NestedRepeat_s21(Sink,Term);

/* FUNCTION Prep-NestedRepeat-somesep- HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s26 struct _Con_M_NestedRepeat_s26
struct _Con_M_NestedRepeat_s26 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s26;
extern int step_M_NestedRepeat_s26(Sink,Term);

/* FUNCTION Prep-NestedRepeat-somesep-maybe HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s27 struct _Con_M_NestedRepeat_s27
struct _Con_M_NestedRepeat_s27 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s27;
extern int step_M_NestedRepeat_s27(Sink,Term);

/* FUNCTION Prep-NestedRepeat-some-somesep HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s24 struct _Con_M_NestedRepeat_s24
struct _Con_M_NestedRepeat_s24 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s24;
extern int step_M_NestedRepeat_s24(Sink,Term);

/* FUNCTION Prep-P-ProduceBody2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody2 struct _Con_M_P_ProduceBody2
struct _Con_M_P_ProduceBody2 {struct _Construction construction; Term sub[11]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody2;
extern int step_M_P_ProduceBody2(Sink,Term);

/* FUNCTION Prep-NestedRepeat-somesep-many HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s28 struct _Con_M_NestedRepeat_s28
struct _Con_M_NestedRepeat_s28 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s28;
extern int step_M_NestedRepeat_s28(Sink,Term);

/* FUNCTION Prep-NestedRepeat-somesep-single HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s29 struct _Con_M_NestedRepeat_s29
struct _Con_M_NestedRepeat_s29 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s29;
extern int step_M_NestedRepeat_s29(Sink,Term);

/* FUNCTION Util-U-then-Finish7-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_Finish7_s1 struct _Con_M_U__then_Finish7_s1
struct _Con_M_U__then_Finish7_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_Finish7_s1;
extern int step_M_U__then_Finish7_s1(Sink,Term);

/* FUNCTION Prelude-TextConcat3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextConcat3 struct _Con_M_TextConcat3
struct _Con_M_TextConcat3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextConcat3;
extern int step_M_TextConcat3(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar2_s9 struct _Con_M_P_SortMetaVar2_s9
struct _Con_M_P_SortMetaVar2_s9 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar2_s9;
extern int step_M_P_SortMetaVar2_s9(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar2-1$P-SortMetaVar2$6$$Nil HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar2_s6 struct _Con_M_P_SortMetaVar2_s6
struct _Con_M_P_SortMetaVar2_s6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar2_s6;
extern int step_M_P_SortMetaVar2_s6(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar2_s7 struct _Con_M_P_SortMetaVar2_s7
struct _Con_M_P_SortMetaVar2_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar2_s7;
extern int step_M_P_SortMetaVar2_s7(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar2_s8 struct _Con_M_P_SortMetaVar2_s8
struct _Con_M_P_SortMetaVar2_s8 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar2_s8;
extern int step_M_P_SortMetaVar2_s8(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar2_s1 struct _Con_M_P_SortMetaVar2_s1
struct _Con_M_P_SortMetaVar2_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar2_s1;
extern int step_M_P_SortMetaVar2_s1(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpChoice- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpChoice struct _Con_M_P_DeclareRegExpChoice
struct _Con_M_P_DeclareRegExpChoice {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpChoice;
extern int step_M_P_DeclareRegExpChoice(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar2_s2 struct _Con_M_P_SortMetaVar2_s2
struct _Con_M_P_SortMetaVar2_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar2_s2;
extern int step_M_P_SortMetaVar2_s2(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar2_s4 struct _Con_M_P_SortMetaVar2_s4
struct _Con_M_P_SortMetaVar2_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar2_s4;
extern int step_M_P_SortMetaVar2_s4(Sink,Term);

/* FUNCTION Util-U-DefinePrec-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinePrec_s3 struct _Con_M_U_DefinePrec_s3
struct _Con_M_U_DefinePrec_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinePrec_s3;
extern int step_M_U_DefinePrec_s3(Sink,Term);

/* FUNCTION Util-U-DefinePrec-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinePrec_s4 struct _Con_M_U_DefinePrec_s4
struct _Con_M_U_DefinePrec_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinePrec_s4;
extern int step_M_U_DefinePrec_s4(Sink,Term);

/* FUNCTION Util-U-DefinePrec-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinePrec_s1 struct _Con_M_U_DefinePrec_s1
struct _Con_M_U_DefinePrec_s1 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinePrec_s1;
extern int step_M_U_DefinePrec_s1(Sink,Term);

/* FUNCTION Util-U-DefinePrec- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinePrec_s2 struct _Con_M_U_DefinePrec_s2
struct _Con_M_U_DefinePrec_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinePrec_s2;
extern int step_M_U_DefinePrec_s2(Sink,Term);

/* FUNCTION Util-U-DefinePrec-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinePrec_s5 struct _Con_M_U_DefinePrec_s5
struct _Con_M_U_DefinePrec_s5 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinePrec_s5;
extern int step_M_U_DefinePrec_s5(Sink,Term);

/* FUNCTION Prep-NestedRepeat-somesep-some HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s30 struct _Con_M_NestedRepeat_s30
struct _Con_M_NestedRepeat_s30 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s30;
extern int step_M_NestedRepeat_s30(Sink,Term);

/* FUNCTION Prelude-NumberToText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_NumberToText struct _Con_M_NumberToText
struct _Con_M_NumberToText {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NumberToText;
extern int step_M_NumberToText(Sink,Term);

/* FUNCTION Util-U-DefinePrec-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinePrec_s6 struct _Con_M_U_DefinePrec_s6
struct _Con_M_U_DefinePrec_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinePrec_s6;
extern int step_M_U_DefinePrec_s6(Sink,Term);

/* FUNCTION Prelude-FirstName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_FirstName_s1 struct _Con_M_FirstName_s1
struct _Con_M_FirstName_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_FirstName_s1;
extern int step_M_FirstName_s1(Sink,Term);

/* FUNCTION Prep-NestedRepeat-somesep-somesep HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s31 struct _Con_M_NestedRepeat_s31
struct _Con_M_NestedRepeat_s31 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s31;
extern int step_M_NestedRepeat_s31(Sink,Term);

/* FUNCTION Prep-ProductionWord-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_ProductionWord struct _Con_M_ProductionWord
struct _Con_M_ProductionWord {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_ProductionWord;
extern int step_M_ProductionWord(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s11 struct _Con_M_P_MetaJJ_AttributeBody_s11
struct _Con_M_P_MetaJJ_AttributeBody_s11 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s11;
extern int step_M_P_MetaJJ_AttributeBody_s11(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1x-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1x_s2 struct _Con_M_P_ProduceBodyTerm1x_s2
struct _Con_M_P_ProduceBodyTerm1x_s2 {struct _Construction construction; Term sub[16]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1x_s2;
extern int step_M_P_ProduceBodyTerm1x_s2(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s10 struct _Con_M_P_MetaJJ_AttributeBody_s10
struct _Con_M_P_MetaJJ_AttributeBody_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s10;
extern int step_M_P_MetaJJ_AttributeBody_s10(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1x-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1x_s3 struct _Con_M_P_ProduceBodyTerm1x_s3
struct _Con_M_P_ProduceBodyTerm1x_s3 {struct _Construction construction; Term sub[16]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1x_s3;
extern int step_M_P_ProduceBodyTerm1x_s3(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm1x- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm1x_s1 struct _Con_M_P_ProduceBodyTerm1x_s1
struct _Con_M_P_ProduceBodyTerm1x_s1 {struct _Construction construction; Term sub[17]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm1x_s1;
extern int step_M_P_ProduceBodyTerm1x_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes_s3 struct _Con_M_C_UnsynthesizeAttributes_s3
struct _Con_M_C_UnsynthesizeAttributes_s3 {struct _Construction construction; Term sub[12]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes_s3;
extern int step_M_C_UnsynthesizeAttributes_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes_s2 struct _Con_M_C_UnsynthesizeAttributes_s2
struct _Con_M_C_UnsynthesizeAttributes_s2 {struct _Construction construction; Term sub[12]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes_s2;
extern int step_M_C_UnsynthesizeAttributes_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes-3$C-UnsynthesizeAttributes$1$Hx_Attribute HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes_s1 struct _Con_M_C_UnsynthesizeAttributes_s1
struct _Con_M_C_UnsynthesizeAttributes_s1 {struct _Construction construction; Term sub[9]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes_s1;
extern int step_M_C_UnsynthesizeAttributes_s1(Sink,Term);

/* FUNCTION Prelude-All- HEADER DECLARATIONS. */
#define STRUCT_Con_M_All struct _Con_M_All
struct _Con_M_All {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_All;
extern int step_M_All(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes_s5 struct _Con_M_C_UnsynthesizeAttributes_s5
struct _Con_M_C_UnsynthesizeAttributes_s5 {struct _Construction construction; Term sub[7]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes_s5;
extern int step_M_C_UnsynthesizeAttributes_s5(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes_s4 struct _Con_M_C_UnsynthesizeAttributes_s4
struct _Con_M_C_UnsynthesizeAttributes_s4 {struct _Construction construction; Term sub[12]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes_s4;
extern int step_M_C_UnsynthesizeAttributes_s4(Sink,Term);

/* FUNCTION Prelude-AddName2Names-1$AddName2Names$N2Ns HEADER DECLARATIONS. */
#define STRUCT_Con_M_AddName2Names struct _Con_M_AddName2Names
struct _Con_M_AddName2Names {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AddName2Names;
extern int step_M_AddName2Names(Sink,Term);

/* FUNCTION Prelude-StringJoin1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringJoin1 struct _Con_M_StringJoin1
struct _Con_M_StringJoin1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringJoin1;
extern int step_M_StringJoin1(Sink,Term);

/* FUNCTION Prelude-NamesFrom-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_NamesFrom_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_NamesFrom_s2;
extern int step_M_NamesFrom_s2(Sink,Term);

/* FUNCTION Prep-NestedRepeat-maybe- HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s1 struct _Con_M_NestedRepeat_s1
struct _Con_M_NestedRepeat_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s1;
extern int step_M_NestedRepeat_s1(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpUnit-3$P-DeclareRegExpUnit$Hx_RegExpUnit HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpUnit struct _Con_M_P_DeclareRegExpUnit
struct _Con_M_P_DeclareRegExpUnit {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpUnit;
extern int step_M_P_DeclareRegExpUnit(Sink,Term);

/* FUNCTION Prep-NestedRepeat-many-maybe HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s8 struct _Con_M_NestedRepeat_s8
struct _Con_M_NestedRepeat_s8 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s8;
extern int step_M_NestedRepeat_s8(Sink,Term);

/* FUNCTION Prep-NestedRepeat-many-many HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s9 struct _Con_M_NestedRepeat_s9
struct _Con_M_NestedRepeat_s9 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s9;
extern int step_M_NestedRepeat_s9(Sink,Term);

/* FUNCTION Util-U-MakeDeclarationMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDeclarationMap struct _Con_M_U_MakeDeclarationMap
struct _Con_M_U_MakeDeclarationMap {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDeclarationMap;
extern int step_M_U_MakeDeclarationMap(Sink,Term);

/* FUNCTION Prep-NestedRepeat-maybe-somesep HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s6 struct _Con_M_NestedRepeat_s6
struct _Con_M_NestedRepeat_s6 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s6;
extern int step_M_NestedRepeat_s6(Sink,Term);

/* FUNCTION Prep-NestedRepeat-many- HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s7 struct _Con_M_NestedRepeat_s7
struct _Con_M_NestedRepeat_s7 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s7;
extern int step_M_NestedRepeat_s7(Sink,Term);

/* FUNCTION Prep-NestedRepeat-maybe-single HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s4 struct _Con_M_NestedRepeat_s4
struct _Con_M_NestedRepeat_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s4;
extern int step_M_NestedRepeat_s4(Sink,Term);

/* FUNCTION Prep-NestedRepeat-maybe-some HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s5 struct _Con_M_NestedRepeat_s5
struct _Con_M_NestedRepeat_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s5;
extern int step_M_NestedRepeat_s5(Sink,Term);

/* FUNCTION Prep-NestedRepeat-maybe-maybe HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s2 struct _Con_M_NestedRepeat_s2
struct _Con_M_NestedRepeat_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s2;
extern int step_M_NestedRepeat_s2(Sink,Term);

/* FUNCTION Prep-NestedRepeat-maybe-many HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s3 struct _Con_M_NestedRepeat_s3
struct _Con_M_NestedRepeat_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s3;
extern int step_M_NestedRepeat_s3(Sink,Term);

/* FUNCTION Util-U-DefineWrapper-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapper_s1 struct _Con_M_U_DefineWrapper_s1
struct _Con_M_U_DefineWrapper_s1 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapper_s1;
extern int step_M_U_DefineWrapper_s1(Sink,Term);

/* FUNCTION Text-String-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_String struct _Con_M_Text_String
struct _Con_M_Text_String {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_String;
extern int step_M_Text_String(Sink,Term);

/* FUNCTION Prelude-Hd-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Hd_s1 struct _Con_M_Hd_s1
struct _Con_M_Hd_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hd_s1;
extern int step_M_Hd_s1(Sink,Term);

/* FUNCTION Util-U-DefineWrapper- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapper_s2 struct _Con_M_U_DefineWrapper_s2
struct _Con_M_U_DefineWrapper_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapper_s2;
extern int step_M_U_DefineWrapper_s2(Sink,Term);

/* FUNCTION Prelude-Hd-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Hd_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Hd_s2;
extern int step_M_Hd_s2(Sink,Term);

/* FUNCTION Util-U-DefineWrapper-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapper_s3 struct _Con_M_U_DefineWrapper_s3
struct _Con_M_U_DefineWrapper_s3 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapper_s3;
extern int step_M_U_DefineWrapper_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRule1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRule1_s2 struct _Con_M_C_CrsxifyRule1_s2
struct _Con_M_C_CrsxifyRule1_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRule1_s2;
extern int step_M_C_CrsxifyRule1_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRule1-1$C-CrsxifyRule1$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRule1_s1 struct _Con_M_C_CrsxifyRule1_s1
struct _Con_M_C_CrsxifyRule1_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRule1_s1;
extern int step_M_C_CrsxifyRule1_s1(Sink,Term);

/* FUNCTION Util-U-DefineWrapper-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapper_s5 struct _Con_M_U_DefineWrapper_s5
struct _Con_M_U_DefineWrapper_s5 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapper_s5;
extern int step_M_U_DefineWrapper_s5(Sink,Term);

/* FUNCTION Prep-NestedRepeat-single-somesep HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s18 struct _Con_M_NestedRepeat_s18
struct _Con_M_NestedRepeat_s18 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s18;
extern int step_M_NestedRepeat_s18(Sink,Term);

/* FUNCTION Util-U-DefineWrapper-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapper_s4 struct _Con_M_U_DefineWrapper_s4
struct _Con_M_U_DefineWrapper_s4 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapper_s4;
extern int step_M_U_DefineWrapper_s4(Sink,Term);

/* FUNCTION Prep-NestedRepeat-single-some HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s17 struct _Con_M_NestedRepeat_s17
struct _Con_M_NestedRepeat_s17 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s17;
extern int step_M_NestedRepeat_s17(Sink,Term);

/* FUNCTION Util-U-DefineWrapper-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapper_s6 struct _Con_M_U_DefineWrapper_s6
struct _Con_M_U_DefineWrapper_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapper_s6;
extern int step_M_U_DefineWrapper_s6(Sink,Term);

/* FUNCTION Prep-NestedRepeat-some- HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s19 struct _Con_M_NestedRepeat_s19
struct _Con_M_NestedRepeat_s19 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s19;
extern int step_M_NestedRepeat_s19(Sink,Term);

/* FUNCTION Prep-NestedRepeat-single-maybe HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s14 struct _Con_M_NestedRepeat_s14
struct _Con_M_NestedRepeat_s14 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s14;
extern int step_M_NestedRepeat_s14(Sink,Term);

/* FUNCTION Prep-NestedRepeat-single- HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s13 struct _Con_M_NestedRepeat_s13
struct _Con_M_NestedRepeat_s13 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s13;
extern int step_M_NestedRepeat_s13(Sink,Term);

/* FUNCTION Prep-NestedRepeat-single-single HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s16 struct _Con_M_NestedRepeat_s16
struct _Con_M_NestedRepeat_s16 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s16;
extern int step_M_NestedRepeat_s16(Sink,Term);

/* FUNCTION Prep-NestedRepeat-single-many HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s15 struct _Con_M_NestedRepeat_s15
struct _Con_M_NestedRepeat_s15 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s15;
extern int step_M_NestedRepeat_s15(Sink,Term);

/* FUNCTION Util-U-IsSynthesizedMapAttribute-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsSynthesizedMapAttribute struct _Con_M_U_IsSynthesizedMapAttribute
struct _Con_M_U_IsSynthesizedMapAttribute {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsSynthesizedMapAttribute;
extern int step_M_U_IsSynthesizedMapAttribute(Sink,Term);

/* FUNCTION Prep-NestedRepeat-many-single HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s10 struct _Con_M_NestedRepeat_s10
struct _Con_M_NestedRepeat_s10 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s10;
extern int step_M_NestedRepeat_s10(Sink,Term);

/* FUNCTION Prelude-And- HEADER DECLARATIONS. */
#define STRUCT_Con_M_And struct _Con_M_And
struct _Con_M_And {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_And;
extern int step_M_And(Sink,Term);

/* FUNCTION Prep-NestedRepeat-many-somesep HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s12 struct _Con_M_NestedRepeat_s12
struct _Con_M_NestedRepeat_s12 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s12;
extern int step_M_NestedRepeat_s12(Sink,Term);

/* FUNCTION Prep-NestedRepeat-many-some HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat_s11 struct _Con_M_NestedRepeat_s11
struct _Con_M_NestedRepeat_s11 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat_s11;
extern int step_M_NestedRepeat_s11(Sink,Term);

/* FUNCTION Prelude-Any- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Any struct _Con_M_Any
struct _Con_M_Any {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Any;
extern int step_M_Any(Sink,Term);

/* FUNCTION Util-U-MakeDM2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM2 struct _Con_M_U_MakeDM2
struct _Con_M_U_MakeDM2 {struct _Construction construction; Term sub[7]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM2;
extern int step_M_U_MakeDM2(Sink,Term);

/* FUNCTION Util-U-MakeDM1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1 struct _Con_M_U_MakeDM1
struct _Con_M_U_MakeDM1 {struct _Construction construction; Term sub[5]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1;
extern int step_M_U_MakeDM1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes2_s3 struct _Con_M_C_CrsxifyAttributes2_s3
struct _Con_M_C_CrsxifyAttributes2_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes2_s3;
extern int step_M_C_CrsxifyAttributes2_s3(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxForm-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxForm_s3 struct _Con_M_P_MetaJJ_Production_HxForm_s3
struct _Con_M_P_MetaJJ_Production_HxForm_s3 {struct _Construction construction; Term sub[9]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxForm_s3;
extern int step_M_P_MetaJJ_Production_HxForm_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes2_s1 struct _Con_M_C_CrsxifyAttributes2_s1
struct _Con_M_C_CrsxifyAttributes2_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes2_s1;
extern int step_M_C_CrsxifyAttributes2_s1(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxForm- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxForm_s1 struct _Con_M_P_MetaJJ_Production_HxForm_s1
struct _Con_M_P_MetaJJ_Production_HxForm_s1 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxForm_s1;
extern int step_M_P_MetaJJ_Production_HxForm_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes2_s2 struct _Con_M_C_CrsxifyAttributes2_s2
struct _Con_M_C_CrsxifyAttributes2_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes2_s2;
extern int step_M_C_CrsxifyAttributes2_s2(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxForm-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxForm_s2 struct _Con_M_P_MetaJJ_Production_HxForm_s2
struct _Con_M_P_MetaJJ_Production_HxForm_s2 {struct _Construction construction; Term sub[9]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxForm_s2;
extern int step_M_P_MetaJJ_Production_HxForm_s2(Sink,Term);

/* FUNCTION Prelude-AddName2Name1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AddName2Name1 struct _Con_M_AddName2Name1
struct _Con_M_AddName2Name1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AddName2Name1;
extern int step_M_AddName2Name1(Sink,Term);

/* FUNCTION Prelude-Eq2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Eq2 struct _Con_M_Eq2
struct _Con_M_Eq2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Eq2;
extern int step_M_Eq2(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpSimple- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpSimple struct _Con_M_P_DeclareRegExpSimple
struct _Con_M_P_DeclareRegExpSimple {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpSimple;
extern int step_M_P_DeclareRegExpSimple(Sink,Term);

/* FUNCTION Prep-P-ProductionConstructionText- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionConstructionText_s1 struct _Con_M_P_ProductionConstructionText_s1
struct _Con_M_P_ProductionConstructionText_s1 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionConstructionText_s1;
extern int step_M_P_ProductionConstructionText_s1(Sink,Term);

/* FUNCTION Prep-P-ProductionConstructionText-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionConstructionText_s2 struct _Con_M_P_ProductionConstructionText_s2
struct _Con_M_P_ProductionConstructionText_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionConstructionText_s2;
extern int step_M_P_ProductionConstructionText_s2(Sink,Term);

/* FUNCTION Prep-P-ProductionConstructionText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionConstructionText_s3 struct _Con_M_P_ProductionConstructionText_s3
struct _Con_M_P_ProductionConstructionText_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionConstructionText_s3;
extern int step_M_P_ProductionConstructionText_s3(Sink,Term);

/* FUNCTION Prep-P-then-Construction-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__then_Construction_s1 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_P__then_Construction_s1;
extern int step_M_P__then_Construction_s1(Sink,Term);

/* FUNCTION Prep-P-ProductionConstructionText-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionConstructionText_s4 struct _Con_M_P_ProductionConstructionText_s4
struct _Con_M_P_ProductionConstructionText_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionConstructionText_s4;
extern int step_M_P_ProductionConstructionText_s4(Sink,Term);

/* FUNCTION Prep-P-ProductionConstructionText-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionConstructionText_s5 struct _Con_M_P_ProductionConstructionText_s5
struct _Con_M_P_ProductionConstructionText_s5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionConstructionText_s5;
extern int step_M_P_ProductionConstructionText_s5(Sink,Term);

/* FUNCTION Cook-C-AD-AddAttributeValue-1$C-AD-AddAttributeValue$A_DESCRIPTOR HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AD_AddAttributeValue struct _Con_M_C_AD_AddAttributeValue
struct _Con_M_C_AD_AddAttributeValue {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AD_AddAttributeValue;
extern int step_M_C_AD_AddAttributeValue(Sink,Term);

/* FUNCTION Prep-P-ProductionConstructionText-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionConstructionText_s6 struct _Con_M_P_ProductionConstructionText_s6
struct _Con_M_P_ProductionConstructionText_s6 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionConstructionText_s6;
extern int step_M_P_ProductionConstructionText_s6(Sink,Term);

/* FUNCTION Cook-C-Text-open-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Text__open struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_Text__open;
extern int step_M_C_Text__open(Sink,Term);

/* FUNCTION Cook-C-AttributeValuePattern1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeValuePattern1_s4 struct _Con_M_C_AttributeValuePattern1_s4
struct _Con_M_C_AttributeValuePattern1_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeValuePattern1_s4;
extern int step_M_C_AttributeValuePattern1_s4(Sink,Term);

/* FUNCTION Util-U-DefineString- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString struct _Con_M_U_DefineString
struct _Con_M_U_DefineString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString;
extern int step_M_U_DefineString(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s10 struct _Con_M_C_Print_Declarations_s10
struct _Con_M_C_Print_Declarations_s10 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s10;
extern int step_M_C_Print_Declarations_s10(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s11 struct _Con_M_C_Print_Declarations_s11
struct _Con_M_C_Print_Declarations_s11 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s11;
extern int step_M_C_Print_Declarations_s11(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-10 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s12 struct _Con_M_C_Print_Declarations_s12
struct _Con_M_C_Print_Declarations_s12 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s12;
extern int step_M_C_Print_Declarations_s12(Sink,Term);

/* FUNCTION Prelude-Not- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Not struct _Con_M_Not
struct _Con_M_Not {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Not;
extern int step_M_Not(Sink,Term);

/* FUNCTION Cook-C-AttributeValuePattern1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeValuePattern1_s2 struct _Con_M_C_AttributeValuePattern1_s2
struct _Con_M_C_AttributeValuePattern1_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeValuePattern1_s2;
extern int step_M_C_AttributeValuePattern1_s2(Sink,Term);

/* FUNCTION Cook-C-AttributeValuePattern1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeValuePattern1_s3 struct _Con_M_C_AttributeValuePattern1_s3
struct _Con_M_C_AttributeValuePattern1_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeValuePattern1_s3;
extern int step_M_C_AttributeValuePattern1_s3(Sink,Term);

/* FUNCTION Cook-C-AttributeValuePattern1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeValuePattern1_s1 struct _Con_M_C_AttributeValuePattern1_s1
struct _Con_M_C_AttributeValuePattern1_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeValuePattern1_s1;
extern int step_M_C_AttributeValuePattern1_s1(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-12 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s31 struct _Con_M_C_ExtendSortMap_Terms_s31
struct _Con_M_C_ExtendSortMap_Terms_s31 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s31;
extern int step_M_C_ExtendSortMap_Terms_s31(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s32 struct _Con_M_C_ExtendSortMap_Terms_s32
struct _Con_M_C_ExtendSortMap_Terms_s32 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s32;
extern int step_M_C_ExtendSortMap_Terms_s32(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-12$C-ExtendSortMap-Terms$30$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s30 struct _Con_M_C_ExtendSortMap_Terms_s30
struct _Con_M_C_ExtendSortMap_Terms_s30 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s30;
extern int step_M_C_ExtendSortMap_Terms_s30(Sink,Term);

/* FUNCTION Prelude-HasNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_HasNames_s1 struct _Con_M_HasNames_s1
struct _Con_M_HasNames_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_HasNames_s1;
extern int step_M_HasNames_s1(Sink,Term);

/* FUNCTION Util-U-SortName2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortName2_s1 struct _Con_M_U_SortName2_s1
struct _Con_M_U_SortName2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortName2_s1;
extern int step_M_U_SortName2_s1(Sink,Term);

/* FUNCTION Util-U-SortName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortName2_s2 struct _Con_M_U_SortName2_s2
struct _Con_M_U_SortName2_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortName2_s2;
extern int step_M_U_SortName2_s2(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAbstractionDefines- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAbstractionDefines struct _Con_M_U_MakeDM_SortAbstractionDefines
struct _Con_M_U_MakeDM_SortAbstractionDefines {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAbstractionDefines;
extern int step_M_U_MakeDM_SortAbstractionDefines(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-3$C-ExtendSortMap-Terms$39$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s39 struct _Con_M_C_ExtendSortMap_Terms_s39
struct _Con_M_C_ExtendSortMap_Terms_s39 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s39;
extern int step_M_C_ExtendSortMap_Terms_s39(Sink,Term);

/* FUNCTION Util-U-GetConstructorSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetConstructorSort_s3 struct _Con_M_U_GetConstructorSort_s3
struct _Con_M_U_GetConstructorSort_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetConstructorSort_s3;
extern int step_M_U_GetConstructorSort_s3(Sink,Term);

/* FUNCTION Util-U-GetConstructorSort-1$U-GetConstructorSort$2$DME_N2N HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetConstructorSort_s2 struct _Con_M_U_GetConstructorSort_s2
struct _Con_M_U_GetConstructorSort_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetConstructorSort_s2;
extern int step_M_U_GetConstructorSort_s2(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-3$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s37 struct _Con_M_C_ExtendSortMap_Terms_s37
struct _Con_M_C_ExtendSortMap_Terms_s37 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s37;
extern int step_M_C_ExtendSortMap_Terms_s37(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s35 struct _Con_M_C_ExtendSortMap_Terms_s35
struct _Con_M_C_ExtendSortMap_Terms_s35 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s35;
extern int step_M_C_ExtendSortMap_Terms_s35(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-2$C-ExtendSortMap-Terms$34$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s34 struct _Con_M_C_ExtendSortMap_Terms_s34
struct _Con_M_C_ExtendSortMap_Terms_s34 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s34;
extern int step_M_C_ExtendSortMap_Terms_s34(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations struct _Con_M_C_Print_Declarations
struct _Con_M_C_Print_Declarations {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations;
extern int step_M_C_Print_Declarations(Sink,Term);

/* FUNCTION Util-U-DefineWrapperForm- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperForm_s1 struct _Con_M_U_DefineWrapperForm_s1
struct _Con_M_U_DefineWrapperForm_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperForm_s1;
extern int step_M_U_DefineWrapperForm_s1(Sink,Term);

/* FUNCTION Util-U-EntryConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors_s10 struct _Con_M_U_EntryConstructors_s10
struct _Con_M_U_EntryConstructors_s10 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors_s10;
extern int step_M_U_EntryConstructors_s10(Sink,Term);

/* FUNCTION Util-U-DefineWrapperForm-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperForm_s2 struct _Con_M_U_DefineWrapperForm_s2
struct _Con_M_U_DefineWrapperForm_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperForm_s2;
extern int step_M_U_DefineWrapperForm_s2(Sink,Term);

/* FUNCTION Util-U-DefineWrapperForm-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperForm_s3 struct _Con_M_U_DefineWrapperForm_s3
struct _Con_M_U_DefineWrapperForm_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperForm_s3;
extern int step_M_U_DefineWrapperForm_s3(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-13$C-ExtendSortMap-Terms$21$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s21 struct _Con_M_C_ExtendSortMap_Terms_s21
struct _Con_M_C_ExtendSortMap_Terms_s21 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s21;
extern int step_M_C_ExtendSortMap_Terms_s21(Sink,Term);

/* FUNCTION Util-U-DefineWrapperForm-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperForm_s4 struct _Con_M_U_DefineWrapperForm_s4
struct _Con_M_U_DefineWrapperForm_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperForm_s4;
extern int step_M_U_DefineWrapperForm_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s17 struct _Con_M_C_UnsynthesizeTerm_s17
struct _Con_M_C_UnsynthesizeTerm_s17 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s17;
extern int step_M_C_UnsynthesizeTerm_s17(Sink,Term);

/* FUNCTION Util-U-DefineWrapperForm-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperForm_s5 struct _Con_M_U_DefineWrapperForm_s5
struct _Con_M_U_DefineWrapperForm_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperForm_s5;
extern int step_M_U_DefineWrapperForm_s5(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-6$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s16 struct _Con_M_C_UnsynthesizeTerm_s16
struct _Con_M_C_UnsynthesizeTerm_s16 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s16;
extern int step_M_C_UnsynthesizeTerm_s16(Sink,Term);

/* FUNCTION Util-U-DefineWrapperForm-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperForm_s6 struct _Con_M_U_DefineWrapperForm_s6
struct _Con_M_U_DefineWrapperForm_s6 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperForm_s6;
extern int step_M_U_DefineWrapperForm_s6(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpSimple-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpSimple_s4 struct _Con_M_P_InlineRegExpSimple_s4
struct _Con_M_P_InlineRegExpSimple_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpSimple_s4;
extern int step_M_P_InlineRegExpSimple_s4(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpSimple-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpSimple_s3 struct _Con_M_P_InlineRegExpSimple_s3
struct _Con_M_P_InlineRegExpSimple_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpSimple_s3;
extern int step_M_P_InlineRegExpSimple_s3(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpSimple-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpSimple_s6 struct _Con_M_P_InlineRegExpSimple_s6
struct _Con_M_P_InlineRegExpSimple_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpSimple_s6;
extern int step_M_P_InlineRegExpSimple_s6(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpSimple-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpSimple_s5 struct _Con_M_P_InlineRegExpSimple_s5
struct _Con_M_P_InlineRegExpSimple_s5 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpSimple_s5;
extern int step_M_P_InlineRegExpSimple_s5(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-11$C-ExtendSortMap-Terms$27$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s27 struct _Con_M_C_ExtendSortMap_Terms_s27
struct _Con_M_C_ExtendSortMap_Terms_s27 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s27;
extern int step_M_C_ExtendSortMap_Terms_s27(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s12 struct _Con_M_C_UnsynthesizeTerm_s12
struct _Con_M_C_UnsynthesizeTerm_s12 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s12;
extern int step_M_C_UnsynthesizeTerm_s12(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-5$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s13 struct _Con_M_C_UnsynthesizeTerm_s13
struct _Con_M_C_UnsynthesizeTerm_s13 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s13;
extern int step_M_C_UnsynthesizeTerm_s13(Sink,Term);

/* FUNCTION Prelude-Sum2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Sum2 struct _Con_M_Sum2
struct _Con_M_Sum2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Sum2;
extern int step_M_Sum2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s14 struct _Con_M_C_UnsynthesizeTerm_s14
struct _Con_M_C_UnsynthesizeTerm_s14 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s14;
extern int step_M_C_UnsynthesizeTerm_s14(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-11 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s28 struct _Con_M_C_ExtendSortMap_Terms_s28
struct _Con_M_C_ExtendSortMap_Terms_s28 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s28;
extern int step_M_C_ExtendSortMap_Terms_s28(Sink,Term);

/* FUNCTION Util-U-FormTag- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormTag struct _Con_M_U_FormTag
struct _Con_M_U_FormTag {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormTag;
extern int step_M_U_FormTag(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-13 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s22 struct _Con_M_C_ExtendSortMap_Terms_s22
struct _Con_M_C_ExtendSortMap_Terms_s22 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s22;
extern int step_M_C_ExtendSortMap_Terms_s22(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-10 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s25 struct _Con_M_C_ExtendSortMap_Terms_s25
struct _Con_M_C_ExtendSortMap_Terms_s25 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s25;
extern int step_M_C_ExtendSortMap_Terms_s25(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s10 struct _Con_M_C_UnsynthesizeTerm_s10
struct _Con_M_C_UnsynthesizeTerm_s10 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s10;
extern int step_M_C_UnsynthesizeTerm_s10(Sink,Term);

/* FUNCTION Prep-P-InlineRegExp-1$P-InlineRegExp$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExp struct _Con_M_P_InlineRegExp
struct _Con_M_P_InlineRegExp {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExp;
extern int step_M_P_InlineRegExp(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-10$C-ExtendSortMap-Terms$24$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s24 struct _Con_M_C_ExtendSortMap_Terms_s24
struct _Con_M_C_ExtendSortMap_Terms_s24 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s24;
extern int step_M_C_ExtendSortMap_Terms_s24(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-9$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s11 struct _Con_M_C_UnsynthesizeTerm_s11
struct _Con_M_C_UnsynthesizeTerm_s11 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s11;
extern int step_M_C_UnsynthesizeTerm_s11(Sink,Term);

/* FUNCTION Prelude-SetName2Names-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SetName2Names_s1 struct _Con_M_SetName2Names_s1
struct _Con_M_SetName2Names_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SetName2Names_s1;
extern int step_M_SetName2Names_s1(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s10 struct _Con_M_C_ExtendSortMap_Terms_s10
struct _Con_M_C_ExtendSortMap_Terms_s10 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s10;
extern int step_M_C_ExtendSortMap_Terms_s10(Sink,Term);

/* FUNCTION Prep-P-then-MetaSorts-ConstructionSortCaseText-1$P-then-MetaSorts-ConstructionSortCaseText$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__then_MetaSorts_ConstructionSortCaseText struct _Con_M_P__then_MetaSorts_ConstructionSortCaseText
struct _Con_M_P__then_MetaSorts_ConstructionSortCaseText {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__then_MetaSorts_ConstructionSortCaseText;
extern int step_M_P__then_MetaSorts_ConstructionSortCaseText(Sink,Term);

/* FUNCTION Prep-P-SameScopeSortPrec- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSortPrec_s2 struct _Con_M_P_SameScopeSortPrec_s2
struct _Con_M_P_SameScopeSortPrec_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSortPrec_s2;
extern int step_M_P_SameScopeSortPrec_s2(Sink,Term);

/* FUNCTION Prep-P-SameScopeSortPrec-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSortPrec_s3 struct _Con_M_P_SameScopeSortPrec_s3
struct _Con_M_P_SameScopeSortPrec_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSortPrec_s3;
extern int step_M_P_SameScopeSortPrec_s3(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s9 struct _Con_M_U_MakeAttribute2KeySort3_s9
struct _Con_M_U_MakeAttribute2KeySort3_s9 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s9;
extern int step_M_U_MakeAttribute2KeySort3_s9(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpSimple-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpSimple_s1 struct _Con_M_P_InlineRegExpSimple_s1
struct _Con_M_P_InlineRegExpSimple_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpSimple_s1;
extern int step_M_P_InlineRegExpSimple_s1(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s8 struct _Con_M_U_MakeAttribute2KeySort3_s8
struct _Con_M_U_MakeAttribute2KeySort3_s8 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s8;
extern int step_M_U_MakeAttribute2KeySort3_s8(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpSimple-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpSimple_s2 struct _Con_M_P_InlineRegExpSimple_s2
struct _Con_M_P_InlineRegExpSimple_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpSimple_s2;
extern int step_M_P_InlineRegExpSimple_s2(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s7 struct _Con_M_U_MakeAttribute2KeySort3_s7
struct _Con_M_U_MakeAttribute2KeySort3_s7 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s7;
extern int step_M_U_MakeAttribute2KeySort3_s7(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s6 struct _Con_M_U_MakeAttribute2KeySort3_s6
struct _Con_M_U_MakeAttribute2KeySort3_s6 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s6;
extern int step_M_U_MakeAttribute2KeySort3_s6(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s19 struct _Con_M_C_ExtendSortMap_Terms_s19
struct _Con_M_C_ExtendSortMap_Terms_s19 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s19;
extern int step_M_C_ExtendSortMap_Terms_s19(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s5 struct _Con_M_U_MakeAttribute2KeySort3_s5
struct _Con_M_U_MakeAttribute2KeySort3_s5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s5;
extern int step_M_U_MakeAttribute2KeySort3_s5(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized struct _Con_M_C_AddTermInnerSynthesized
struct _Con_M_C_AddTermInnerSynthesized {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized;
extern int step_M_C_AddTermInnerSynthesized(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s3 struct _Con_M_U_MakeAttribute2KeySort3_s3
struct _Con_M_U_MakeAttribute2KeySort3_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s3;
extern int step_M_U_MakeAttribute2KeySort3_s3(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s2 struct _Con_M_U_MakeAttribute2KeySort3_s2
struct _Con_M_U_MakeAttribute2KeySort3_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s2;
extern int step_M_U_MakeAttribute2KeySort3_s2(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s13 struct _Con_M_C_ExtendSortMap_Terms_s13
struct _Con_M_C_ExtendSortMap_Terms_s13 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s13;
extern int step_M_C_ExtendSortMap_Terms_s13(Sink,Term);

/* FUNCTION Prelude-JoinTextMaps2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JoinTextMaps2_s4 struct _Con_M_JoinTextMaps2_s4
struct _Con_M_JoinTextMaps2_s4 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JoinTextMaps2_s4;
extern int step_M_JoinTextMaps2_s4(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-9$C-ExtendSortMap-Terms$12$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s12 struct _Con_M_C_ExtendSortMap_Terms_s12
struct _Con_M_C_ExtendSortMap_Terms_s12 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s12;
extern int step_M_C_ExtendSortMap_Terms_s12(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-7$C-ExtendSortMap-Terms$18$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s18 struct _Con_M_C_ExtendSortMap_Terms_s18
struct _Con_M_C_ExtendSortMap_Terms_s18 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s18;
extern int step_M_C_ExtendSortMap_Terms_s18(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s16 struct _Con_M_C_ExtendSortMap_Terms_s16
struct _Con_M_C_ExtendSortMap_Terms_s16 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s16;
extern int step_M_C_ExtendSortMap_Terms_s16(Sink,Term);

/* FUNCTION Prelude-JoinTextMaps2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JoinTextMaps2_s3 struct _Con_M_JoinTextMaps2_s3
struct _Con_M_JoinTextMaps2_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JoinTextMaps2_s3;
extern int step_M_JoinTextMaps2_s3(Sink,Term);

/* FUNCTION Prelude-StringConcat3When-1$StringConcat3When$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringConcat3When struct _Con_M_StringConcat3When
struct _Con_M_StringConcat3When {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringConcat3When;
extern int step_M_StringConcat3When(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-6$C-ExtendSortMap-Terms$15$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s15 struct _Con_M_C_ExtendSortMap_Terms_s15
struct _Con_M_C_ExtendSortMap_Terms_s15 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s15;
extern int step_M_C_ExtendSortMap_Terms_s15(Sink,Term);

/* FUNCTION Prelude-JoinTextMaps2-2$JoinTextMaps2$2$TEXT_MAP HEADER DECLARATIONS. */
#define STRUCT_Con_M_JoinTextMaps2_s2 struct _Con_M_JoinTextMaps2_s2
struct _Con_M_JoinTextMaps2_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JoinTextMaps2_s2;
extern int step_M_JoinTextMaps2_s2(Sink,Term);

/* FUNCTION Util-U-AllSynthesizedMapNames-1$U-AllSynthesizedMapNames HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllSynthesizedMapNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_AllSynthesizedMapNames;
extern int step_M_U_AllSynthesizedMapNames(Sink,Term);

/* FUNCTION Util-U-SortName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortName2_s6 struct _Con_M_U_SortName2_s6
struct _Con_M_U_SortName2_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortName2_s6;
extern int step_M_U_SortName2_s6(Sink,Term);

/* FUNCTION Util-U-SortName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortName2_s5 struct _Con_M_U_SortName2_s5
struct _Con_M_U_SortName2_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortName2_s5;
extern int step_M_U_SortName2_s5(Sink,Term);

/* FUNCTION Util-U-SortName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortName2_s4 struct _Con_M_U_SortName2_s4
struct _Con_M_U_SortName2_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortName2_s4;
extern int step_M_U_SortName2_s4(Sink,Term);

/* FUNCTION Util-U-SortName2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortName2_s3 struct _Con_M_U_SortName2_s3
struct _Con_M_U_SortName2_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortName2_s3;
extern int step_M_U_SortName2_s3(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s1 struct _Con_M_U_MakeAttribute2KeySort3_s1
struct _Con_M_U_MakeAttribute2KeySort3_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s1;
extern int step_M_U_MakeAttribute2KeySort3_s1(Sink,Term);

/* FUNCTION Prep-P-Embed-Prefix-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Embed_Prefix struct _Con_M_P_Embed_Prefix
struct _Con_M_P_Embed_Prefix {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Embed_Prefix;
extern int step_M_P_Embed_Prefix(Sink,Term);

/* FUNCTION Prep-JJ-StringLiteral-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JJ_StringLiteral struct _Con_M_JJ_StringLiteral
struct _Con_M_JJ_StringLiteral {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JJ_StringLiteral;
extern int step_M_JJ_StringLiteral(Sink,Term);

/* FUNCTION Util-U-MakeDM-1$U-MakeDM$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM struct _Con_M_U_MakeDM
struct _Con_M_U_MakeDM {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM;
extern int step_M_U_MakeDM(Sink,Term);

/* FUNCTION Text-ReverseConcat- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_ReverseConcat struct _Con_M_Text_ReverseConcat
struct _Con_M_Text_ReverseConcat {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_ReverseConcat;
extern int step_M_Text_ReverseConcat(Sink,Term);

/* FUNCTION Prelude-FoldWhen- HEADER DECLARATIONS. */
#define STRUCT_Con_M_FoldWhen_s1 struct _Con_M_FoldWhen_s1
struct _Con_M_FoldWhen_s1 {struct _Construction construction; Term sub[3]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_FoldWhen_s1;
extern int step_M_FoldWhen_s1(Sink,Term);

/* FUNCTION Prelude-FoldWhen-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_FoldWhen_s2 struct _Con_M_FoldWhen_s2
struct _Con_M_FoldWhen_s2 {struct _Construction construction; Term sub[4]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_FoldWhen_s2;
extern int step_M_FoldWhen_s2(Sink,Term);

/* FUNCTION Prelude-FoldWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_FoldWhen_s3 struct _Con_M_FoldWhen_s3
struct _Con_M_FoldWhen_s3 {struct _Construction construction; Term sub[2]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_FoldWhen_s3;
extern int step_M_FoldWhen_s3(Sink,Term);

/* FUNCTION Util-U-ScopeSortPrecTopSort- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ScopeSortPrecTopSort struct _Con_M_U_ScopeSortPrecTopSort
struct _Con_M_U_ScopeSortPrecTopSort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ScopeSortPrecTopSort;
extern int step_M_U_ScopeSortPrecTopSort(Sink,Term);

/* FUNCTION Util-U-IsFunction-1$U-IsFunction HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsFunction struct _Con_M_U_IsFunction
struct _Con_M_U_IsFunction {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsFunction;
extern int step_M_U_IsFunction(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry_s1 struct _Con_M_U_KeepInheritedEntry_s1
struct _Con_M_U_KeepInheritedEntry_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry_s1;
extern int step_M_U_KeepInheritedEntry_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyVariable-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyVariable struct _Con_M_C_CrsxifyVariable
struct _Con_M_C_CrsxifyVariable {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyVariable;
extern int step_M_C_CrsxifyVariable(Sink,Term);

/* FUNCTION Util-U-IsMapAttribute-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsMapAttribute struct _Con_M_U_IsMapAttribute
struct _Con_M_U_IsMapAttribute {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsMapAttribute;
extern int step_M_U_IsMapAttribute(Sink,Term);

/* FUNCTION Cook-C-EmptySortMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_EmptySortMap struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_EmptySortMap;
extern int step_M_C_EmptySortMap(Sink,Term);

/* FUNCTION Prelude-SingletonTextMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SingletonTextMap struct _Con_M_SingletonTextMap
struct _Con_M_SingletonTextMap {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SingletonTextMap;
extern int step_M_SingletonTextMap(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeScope-1$C-UnsynthesizeScope$Hx_Scope HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeScope struct _Con_M_C_UnsynthesizeScope
struct _Con_M_C_UnsynthesizeScope {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeScope;
extern int step_M_C_UnsynthesizeScope(Sink,Term);

/* FUNCTION Prelude-ExceptNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_ExceptNames struct _Con_M_ExceptNames
struct _Con_M_ExceptNames {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_ExceptNames;
extern int step_M_ExceptNames(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s11 struct _Con_M_U_MakeAttribute2Form3_s11
struct _Con_M_U_MakeAttribute2Form3_s11 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s11;
extern int step_M_U_MakeAttribute2Form3_s11(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s10 struct _Con_M_U_MakeAttribute2Form3_s10
struct _Con_M_U_MakeAttribute2Form3_s10 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s10;
extern int step_M_U_MakeAttribute2Form3_s10(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s13 struct _Con_M_U_MakeAttribute2Form3_s13
struct _Con_M_U_MakeAttribute2Form3_s13 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s13;
extern int step_M_U_MakeAttribute2Form3_s13(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s12 struct _Con_M_U_MakeAttribute2Form3_s12
struct _Con_M_U_MakeAttribute2Form3_s12 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s12;
extern int step_M_U_MakeAttribute2Form3_s12(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry-1$U-KeepSynthesizedMapEntry$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry struct _Con_M_U_KeepSynthesizedMapEntry
struct _Con_M_U_KeepSynthesizedMapEntry {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry;
extern int step_M_U_KeepSynthesizedMapEntry(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-WrapPattern-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_WrapPattern struct _Con_M_C_ScopeSort_WrapPattern
struct _Con_M_C_ScopeSort_WrapPattern {struct _Construction construction; Term sub[4]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_WrapPattern;
extern int step_M_C_ScopeSort_WrapPattern(Sink,Term);

/* FUNCTION Prelude-NamesFrom- HEADER DECLARATIONS. */
#define STRUCT_Con_M_NamesFrom struct _Con_M_NamesFrom
struct _Con_M_NamesFrom {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NamesFrom;
extern int step_M_NamesFrom(Sink,Term);

/* FUNCTION Cook-C-Text-newline-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Text__newline struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_Text__newline;
extern int step_M_C_Text__newline(Sink,Term);

/* FUNCTION Prelude-RemoveName2Name-1$RemoveName2Name$N2Ns HEADER DECLARATIONS. */
#define STRUCT_Con_M_RemoveName2Name struct _Con_M_RemoveName2Name
struct _Con_M_RemoveName2Name {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_RemoveName2Name;
extern int step_M_RemoveName2Name(Sink,Term);

/* FUNCTION Cook-C-CrsxifyMetaApplication-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyMetaApplication struct _Con_M_C_CrsxifyMetaApplication
struct _Con_M_C_CrsxifyMetaApplication {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyMetaApplication;
extern int step_M_C_CrsxifyMetaApplication(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpUnits-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpUnits_s2 struct _Con_M_P_InlineRegExpUnits_s2
struct _Con_M_P_InlineRegExpUnits_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpUnits_s2;
extern int step_M_P_InlineRegExpUnits_s2(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpUnits-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpUnits_s1 struct _Con_M_P_InlineRegExpUnits_s1
struct _Con_M_P_InlineRegExpUnits_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpUnits_s1;
extern int step_M_P_InlineRegExpUnits_s1(Sink,Term);

/* FUNCTION Prep-P-VariableMarker2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_VariableMarker2_s2 struct _Con_M_P_VariableMarker2_s2
struct _Con_M_P_VariableMarker2_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_VariableMarker2_s2;
extern int step_M_P_VariableMarker2_s2(Sink,Term);

/* FUNCTION Prep-P-VariableMarker2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_VariableMarker2_s1 struct _Con_M_P_VariableMarker2_s1
struct _Con_M_P_VariableMarker2_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_VariableMarker2_s1;
extern int step_M_P_VariableMarker2_s1(Sink,Term);

/* FUNCTION Prep-P-VariableMarker2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_VariableMarker2_s4 struct _Con_M_P_VariableMarker2_s4
struct _Con_M_P_VariableMarker2_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_VariableMarker2_s4;
extern int step_M_P_VariableMarker2_s4(Sink,Term);

/* FUNCTION Prep-P-VariableMarker2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_VariableMarker2_s3 struct _Con_M_P_VariableMarker2_s3
struct _Con_M_P_VariableMarker2_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_VariableMarker2_s3;
extern int step_M_P_VariableMarker2_s3(Sink,Term);

/* FUNCTION Util-U-CheckString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_CheckString struct _Con_M_U_CheckString
struct _Con_M_U_CheckString {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_CheckString;
extern int step_M_U_CheckString(Sink,Term);

/* FUNCTION Prelude-TextLookup-1$TextLookup$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextLookup struct _Con_M_TextLookup
struct _Con_M_TextLookup {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextLookup;
extern int step_M_TextLookup(Sink,Term);

/* FUNCTION Prelude-EmptyName2NamesMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_EmptyName2NamesMap struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_EmptyName2NamesMap;
extern int step_M_EmptyName2NamesMap(Sink,Term);

/* FUNCTION Cook-C-Print-SymbolForm-1$C-Print-SymbolForm$Hx_FormParsed HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_SymbolForm struct _Con_M_C_Print_SymbolForm
struct _Con_M_C_Print_SymbolForm {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_SymbolForm;
extern int step_M_C_Print_SymbolForm(Sink,Term);

/* FUNCTION Prelude-MapIndexWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapIndexWhen struct _Con_M_MapIndexWhen
struct _Con_M_MapIndexWhen {struct _Construction construction; Term sub[2]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_MapIndexWhen;
extern int step_M_MapIndexWhen(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord2_s1 struct _Con_M_P_ProduceBodyWord2_s1
struct _Con_M_P_ProduceBodyWord2_s1 {struct _Construction construction; Term sub[11]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord2_s1;
extern int step_M_P_ProduceBodyWord2_s1(Sink,Term);

/* FUNCTION Prep-P-VariableMarker2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_VariableMarker2_s5 struct _Con_M_P_VariableMarker2_s5
struct _Con_M_P_VariableMarker2_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_VariableMarker2_s5;
extern int step_M_P_VariableMarker2_s5(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord2_s2 struct _Con_M_P_ProduceBodyWord2_s2
struct _Con_M_P_ProduceBodyWord2_s2 {struct _Construction construction; Term sub[12]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord2_s2;
extern int step_M_P_ProduceBodyWord2_s2(Sink,Term);

/* FUNCTION Prep-P-VariableMarker2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_VariableMarker2_s6 struct _Con_M_P_VariableMarker2_s6
struct _Con_M_P_VariableMarker2_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_VariableMarker2_s6;
extern int step_M_P_VariableMarker2_s6(Sink,Term);

/* FUNCTION Util-U-AllNames-1$U-AllNames$1$DME_NAMES HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllNames_s1 struct _Con_M_U_AllNames_s1
struct _Con_M_U_AllNames_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllNames_s1;
extern int step_M_U_AllNames_s1(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord2_s3 struct _Con_M_P_ProduceBodyWord2_s3
struct _Con_M_P_ProduceBodyWord2_s3 {struct _Construction construction; Term sub[10]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord2_s3;
extern int step_M_P_ProduceBodyWord2_s3(Sink,Term);

/* FUNCTION Prep-P-VariableMarker2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_VariableMarker2_s7 struct _Con_M_P_VariableMarker2_s7
struct _Con_M_P_VariableMarker2_s7 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_VariableMarker2_s7;
extern int step_M_P_VariableMarker2_s7(Sink,Term);

/* FUNCTION Util-U-AllNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllNames_s2 struct _Con_M_U_AllNames_s2
struct _Con_M_U_AllNames_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllNames_s2;
extern int step_M_U_AllNames_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeSortEntry- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeSortEntry struct _Con_M_C_UnsynthesizeSortEntry
struct _Con_M_C_UnsynthesizeSortEntry {struct _Construction construction; Term sub[5]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeSortEntry;
extern int step_M_C_UnsynthesizeSortEntry(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s14 struct _Con_M_C_AttributeWrapperSorted1_s14
struct _Con_M_C_AttributeWrapperSorted1_s14 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s14;
extern int step_M_C_AttributeWrapperSorted1_s14(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-6$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s13 struct _Con_M_C_AttributeWrapperSorted1_s13
struct _Con_M_C_AttributeWrapperSorted1_s13 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s13;
extern int step_M_C_AttributeWrapperSorted1_s13(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s11 struct _Con_M_C_AttributeWrapperSorted1_s11
struct _Con_M_C_AttributeWrapperSorted1_s11 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s11;
extern int step_M_C_AttributeWrapperSorted1_s11(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted1-5$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted1_s10 struct _Con_M_C_AttributeWrapperSorted1_s10
struct _Con_M_C_AttributeWrapperSorted1_s10 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted1_s10;
extern int step_M_C_AttributeWrapperSorted1_s10(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort struct _Con_M_U_MakeAttribute2ValueSort
struct _Con_M_U_MakeAttribute2ValueSort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort;
extern int step_M_U_MakeAttribute2ValueSort(Sink,Term);

/* FUNCTION Cook-C-AddScopeSynthesized-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddScopeSynthesized_s1 struct _Con_M_C_AddScopeSynthesized_s1
struct _Con_M_C_AddScopeSynthesized_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddScopeSynthesized_s1;
extern int step_M_C_AddScopeSynthesized_s1(Sink,Term);

/* FUNCTION Prep-P-BaseSortName2-2$P-BaseSortName2$Hx_Sort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_BaseSortName2 struct _Con_M_P_BaseSortName2
struct _Con_M_P_BaseSortName2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_BaseSortName2;
extern int step_M_P_BaseSortName2(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternativesDefines-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternativesDefines_s1 struct _Con_M_U_MakeDM_SortAlternativesDefines_s1
struct _Con_M_U_MakeDM_SortAlternativesDefines_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternativesDefines_s1;
extern int step_M_U_MakeDM_SortAlternativesDefines_s1(Sink,Term);

/* FUNCTION Prelude-AddName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AddName_s1 struct _Con_M_AddName_s1
struct _Con_M_AddName_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AddName_s1;
extern int step_M_AddName_s1(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternativesDefines-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternativesDefines_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternativesDefines_s2;
extern int step_M_U_MakeDM_SortAlternativesDefines_s2(Sink,Term);

/* FUNCTION Util-U-AllInheritedMapNames-1$U-AllInheritedMapNames HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllInheritedMapNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_AllInheritedMapNames;
extern int step_M_U_AllInheritedMapNames(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRuleName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRuleName struct _Con_M_C_CrsxifyRuleName
struct _Con_M_C_CrsxifyRuleName {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRuleName;
extern int step_M_C_CrsxifyRuleName(Sink,Term);

/* FUNCTION Util-U-then-ParsedFormLess-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_ParsedFormLess_s1 struct _Con_M_U__then_ParsedFormLess_s1
struct _Con_M_U__then_ParsedFormLess_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_ParsedFormLess_s1;
extern int step_M_U__then_ParsedFormLess_s1(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s9 struct _Con_M_U_KeepSynthesizedMapEntry2_s9
struct _Con_M_U_KeepSynthesizedMapEntry2_s9 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s9;
extern int step_M_U_KeepSynthesizedMapEntry2_s9(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s6 struct _Con_M_U_KeepSynthesizedMapEntry2_s6
struct _Con_M_U_KeepSynthesizedMapEntry2_s6 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s6;
extern int step_M_U_KeepSynthesizedMapEntry2_s6(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s8 struct _Con_M_U_KeepSynthesizedMapEntry2_s8
struct _Con_M_U_KeepSynthesizedMapEntry2_s8 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s8;
extern int step_M_U_KeepSynthesizedMapEntry2_s8(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s7 struct _Con_M_U_KeepSynthesizedMapEntry2_s7
struct _Con_M_U_KeepSynthesizedMapEntry2_s7 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s7;
extern int step_M_U_KeepSynthesizedMapEntry2_s7(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s1 struct _Con_M_U_KeepSynthesizedMapEntry2_s1
struct _Con_M_U_KeepSynthesizedMapEntry2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s1;
extern int step_M_U_KeepSynthesizedMapEntry2_s1(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s2 struct _Con_M_U_KeepSynthesizedMapEntry2_s2
struct _Con_M_U_KeepSynthesizedMapEntry2_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s2;
extern int step_M_U_KeepSynthesizedMapEntry2_s2(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2$U-KeepSynthesizedMapEntry2$3$Hx_AttributeKind HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s3 struct _Con_M_U_KeepSynthesizedMapEntry2_s3
struct _Con_M_U_KeepSynthesizedMapEntry2_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s3;
extern int step_M_U_KeepSynthesizedMapEntry2_s3(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s4 struct _Con_M_U_KeepSynthesizedMapEntry2_s4
struct _Con_M_U_KeepSynthesizedMapEntry2_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s4;
extern int step_M_U_KeepSynthesizedMapEntry2_s4(Sink,Term);

/* FUNCTION Prelude-LookupName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_LookupName_s1 struct _Con_M_LookupName_s1
struct _Con_M_LookupName_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_LookupName_s1;
extern int step_M_LookupName_s1(Sink,Term);

/* FUNCTION Util-U-then-SortNameWithRepeat2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortNameWithRepeat2_s3 struct _Con_M_U__then_SortNameWithRepeat2_s3
struct _Con_M_U__then_SortNameWithRepeat2_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortNameWithRepeat2_s3;
extern int step_M_U__then_SortNameWithRepeat2_s3(Sink,Term);

/* FUNCTION Util-U-then-SortNameWithRepeat2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortNameWithRepeat2_s2 struct _Con_M_U__then_SortNameWithRepeat2_s2
struct _Con_M_U__then_SortNameWithRepeat2_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortNameWithRepeat2_s2;
extern int step_M_U__then_SortNameWithRepeat2_s2(Sink,Term);

/* FUNCTION Util-U-LastName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_LastName struct _Con_M_U_LastName
struct _Con_M_U_LastName {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_LastName;
extern int step_M_U_LastName(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-some-single HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s17 struct _Con_M_P_SubRepeat_s17
struct _Con_M_P_SubRepeat_s17 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s17;
extern int step_M_P_SubRepeat_s17(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-some-some HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s18 struct _Con_M_P_SubRepeat_s18
struct _Con_M_P_SubRepeat_s18 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s18;
extern int step_M_P_SubRepeat_s18(Sink,Term);

/* FUNCTION Util-U-QN2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_QN2 struct _Con_M_U_QN2
struct _Con_M_U_QN2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_QN2;
extern int step_M_U_QN2(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-some-somesep HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s19 struct _Con_M_P_SubRepeat_s19
struct _Con_M_P_SubRepeat_s19 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s19;
extern int step_M_P_SubRepeat_s19(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-single HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s13 struct _Con_M_P_SubRepeat_s13
struct _Con_M_P_SubRepeat_s13 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s13;
extern int step_M_P_SubRepeat_s13(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-some- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s14 struct _Con_M_P_SubRepeat_s14
struct _Con_M_P_SubRepeat_s14 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s14;
extern int step_M_P_SubRepeat_s14(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-some-maybe HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s15 struct _Con_M_P_SubRepeat_s15
struct _Con_M_P_SubRepeat_s15 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s15;
extern int step_M_P_SubRepeat_s15(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-some-many HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s16 struct _Con_M_P_SubRepeat_s16
struct _Con_M_P_SubRepeat_s16 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s16;
extern int step_M_P_SubRepeat_s16(Sink,Term);

/* FUNCTION Util-U-IsInheritedAttribute-1$U-IsInheritedAttribute HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsInheritedAttribute struct _Con_M_U_IsInheritedAttribute
struct _Con_M_U_IsInheritedAttribute {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsInheritedAttribute;
extern int step_M_U_IsInheritedAttribute(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-many-other HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s10 struct _Con_M_P_SubRepeat_s10
struct _Con_M_P_SubRepeat_s10 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s10;
extern int step_M_P_SubRepeat_s10(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-many-other HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s11 struct _Con_M_P_SubRepeat_s11
struct _Con_M_P_SubRepeat_s11 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s11;
extern int step_M_P_SubRepeat_s11(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-many-other HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s12 struct _Con_M_P_SubRepeat_s12
struct _Con_M_P_SubRepeat_s12 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s12;
extern int step_M_P_SubRepeat_s12(Sink,Term);

/* FUNCTION Util-U-then-TestIfSort-1$U-then-TestIfSort$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_TestIfSort struct _Con_M_U__then_TestIfSort
struct _Con_M_U__then_TestIfSort {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_TestIfSort;
extern int step_M_U__then_TestIfSort(Sink,Term);

/* FUNCTION Cook-C-Print-Form-1$C-Print-Form$2$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Form_s2 struct _Con_M_C_Print_Form_s2
struct _Con_M_C_Print_Form_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Form_s2;
extern int step_M_C_Print_Form_s2(Sink,Term);

/* FUNCTION Cook-C-Print-Form-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Form_s3 struct _Con_M_C_Print_Form_s3
struct _Con_M_C_Print_Form_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Form_s3;
extern int step_M_C_Print_Form_s3(Sink,Term);

/* FUNCTION Cook-C-Print-Form-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Form_s4 struct _Con_M_C_Print_Form_s4
struct _Con_M_C_Print_Form_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Form_s4;
extern int step_M_C_Print_Form_s4(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-Text-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_Text struct _Con_M_C_ParsedForm_Text
struct _Con_M_C_ParsedForm_Text {struct _Construction construction; Term sub[4]; Variable binder[9];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_Text;
extern int step_M_C_ParsedForm_Text(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s2 struct _Con_M_U_KeepSynthesizedEntry2_s2
struct _Con_M_U_KeepSynthesizedEntry2_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s2;
extern int step_M_U_KeepSynthesizedEntry2_s2(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s1 struct _Con_M_U_KeepSynthesizedEntry2_s1
struct _Con_M_U_KeepSynthesizedEntry2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s1;
extern int step_M_U_KeepSynthesizedEntry2_s1(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopSynthesized- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopSynthesized struct _Con_M_C_AddAttributeTopSynthesized
struct _Con_M_C_AddAttributeTopSynthesized {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopSynthesized;
extern int step_M_C_AddAttributeTopSynthesized(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s4 struct _Con_M_U_KeepSynthesizedEntry2_s4
struct _Con_M_U_KeepSynthesizedEntry2_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s4;
extern int step_M_U_KeepSynthesizedEntry2_s4(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s3 struct _Con_M_U_KeepSynthesizedEntry2_s3
struct _Con_M_U_KeepSynthesizedEntry2_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s3;
extern int step_M_U_KeepSynthesizedEntry2_s3(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s6 struct _Con_M_U_KeepSynthesizedEntry2_s6
struct _Con_M_U_KeepSynthesizedEntry2_s6 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s6;
extern int step_M_U_KeepSynthesizedEntry2_s6(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s5 struct _Con_M_U_KeepSynthesizedEntry2_s5
struct _Con_M_U_KeepSynthesizedEntry2_s5 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s5;
extern int step_M_U_KeepSynthesizedEntry2_s5(Sink,Term);

/* FUNCTION Util-U-DefinePrec- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinePrec struct _Con_M_U_DefinePrec
struct _Con_M_U_DefinePrec {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinePrec;
extern int step_M_U_DefinePrec(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s7 struct _Con_M_U_KeepSynthesizedEntry2_s7
struct _Con_M_U_KeepSynthesizedEntry2_s7 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s7;
extern int step_M_U_KeepSynthesizedEntry2_s7(Sink,Term);

/* FUNCTION Cook-C-CrsxifyDefine-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyDefine_s2 struct _Con_M_C_CrsxifyDefine_s2
struct _Con_M_C_CrsxifyDefine_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyDefine_s2;
extern int step_M_C_CrsxifyDefine_s2(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s8 struct _Con_M_U_KeepSynthesizedEntry2_s8
struct _Con_M_U_KeepSynthesizedEntry2_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s8;
extern int step_M_U_KeepSynthesizedEntry2_s8(Sink,Term);

/* FUNCTION Cook-C-CrsxifyDefine-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyDefine_s1 struct _Con_M_C_CrsxifyDefine_s1
struct _Con_M_C_CrsxifyDefine_s1 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyDefine_s1;
extern int step_M_C_CrsxifyDefine_s1(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s9 struct _Con_M_U_KeepSynthesizedEntry2_s9
struct _Con_M_U_KeepSynthesizedEntry2_s9 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s9;
extern int step_M_U_KeepSynthesizedEntry2_s9(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive struct _Con_M_P__isLeftRecursive
struct _Con_M_P__isLeftRecursive {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive;
extern int step_M_P__isLeftRecursive(Sink,Term);

/* FUNCTION Cook-C-CrsxifyDefine-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyDefine_s6 struct _Con_M_C_CrsxifyDefine_s6
struct _Con_M_C_CrsxifyDefine_s6 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyDefine_s6;
extern int step_M_C_CrsxifyDefine_s6(Sink,Term);

/* FUNCTION Cook-C-CrsxifyDefine-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyDefine_s5 struct _Con_M_C_CrsxifyDefine_s5
struct _Con_M_C_CrsxifyDefine_s5 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyDefine_s5;
extern int step_M_C_CrsxifyDefine_s5(Sink,Term);

/* FUNCTION Cook-C-CrsxifyDefine-4$C-CrsxifyDefine$4$Hx_Rule HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyDefine_s4 struct _Con_M_C_CrsxifyDefine_s4
struct _Con_M_C_CrsxifyDefine_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyDefine_s4;
extern int step_M_C_CrsxifyDefine_s4(Sink,Term);

/* FUNCTION Cook-C-CrsxifyDefine-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyDefine_s3 struct _Con_M_C_CrsxifyDefine_s3
struct _Con_M_C_CrsxifyDefine_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyDefine_s3;
extern int step_M_C_CrsxifyDefine_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRuleVars3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRuleVars3 struct _Con_M_C_CrsxifyRuleVars3
struct _Con_M_C_CrsxifyRuleVars3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRuleVars3;
extern int step_M_C_CrsxifyRuleVars3(Sink,Term);

/* FUNCTION Prep-AttributeKindCategory- HEADER DECLARATIONS. */
#define STRUCT_Con_M_AttributeKindCategory struct _Con_M_AttributeKindCategory
struct _Con_M_AttributeKindCategory {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AttributeKindCategory;
extern int step_M_AttributeKindCategory(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRuleVars2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRuleVars2 struct _Con_M_C_CrsxifyRuleVars2
struct _Con_M_C_CrsxifyRuleVars2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRuleVars2;
extern int step_M_C_CrsxifyRuleVars2(Sink,Term);

/* FUNCTION Prep-P-ProductionNameText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionNameText struct _Con_M_P_ProductionNameText
struct _Con_M_P_ProductionNameText {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionNameText;
extern int step_M_P_ProductionNameText(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRuleVars1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRuleVars1 struct _Con_M_C_CrsxifyRuleVars1
struct _Con_M_C_CrsxifyRuleVars1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRuleVars1;
extern int step_M_C_CrsxifyRuleVars1(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpUnits- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpUnits struct _Con_M_P_DeclareRegExpUnits
struct _Con_M_P_DeclareRegExpUnits {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpUnits;
extern int step_M_P_DeclareRegExpUnits(Sink,Term);

/* FUNCTION Prelude-_NameSetString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M__xNameSetString_s1 struct _Con_M__xNameSetString_s1
struct _Con_M__xNameSetString_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__xNameSetString_s1;
extern int step_M__xNameSetString_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRuleVars0-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRuleVars0 struct _Con_M_C_CrsxifyRuleVars0
struct _Con_M_C_CrsxifyRuleVars0 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRuleVars0;
extern int step_M_C_CrsxifyRuleVars0(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s8 struct _Con_M_U_SymbolSortTokenName2_s8
struct _Con_M_U_SymbolSortTokenName2_s8 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s8;
extern int step_M_U_SymbolSortTokenName2_s8(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s9 struct _Con_M_U_SymbolSortTokenName2_s9
struct _Con_M_U_SymbolSortTokenName2_s9 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s9;
extern int step_M_U_SymbolSortTokenName2_s9(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s11 struct _Con_M_C_AddTermTopSynthesized_s11
struct _Con_M_C_AddTermTopSynthesized_s11 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s11;
extern int step_M_C_AddTermTopSynthesized_s11(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s14 struct _Con_M_C_AddTermTopSynthesized_s14
struct _Con_M_C_AddTermTopSynthesized_s14 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s14;
extern int step_M_C_AddTermTopSynthesized_s14(Sink,Term);

/* FUNCTION Prelude-StringToNumericDefaultWhen-1$StringToNumericDefaultWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringToNumericDefaultWhen struct _Con_M_StringToNumericDefaultWhen
struct _Con_M_StringToNumericDefaultWhen {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringToNumericDefaultWhen;
extern int step_M_StringToNumericDefaultWhen(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-6$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s13 struct _Con_M_C_AddTermTopSynthesized_s13
struct _Con_M_C_AddTermTopSynthesized_s13 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s13;
extern int step_M_C_AddTermTopSynthesized_s13(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-5$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s10 struct _Con_M_C_AddTermTopSynthesized_s10
struct _Con_M_C_AddTermTopSynthesized_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s10;
extern int step_M_C_AddTermTopSynthesized_s10(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s1 struct _Con_M_U_SymbolSortTokenName2_s1
struct _Con_M_U_SymbolSortTokenName2_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s1;
extern int step_M_U_SymbolSortTokenName2_s1(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s3 struct _Con_M_U_SymbolSortTokenName2_s3
struct _Con_M_U_SymbolSortTokenName2_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s3;
extern int step_M_U_SymbolSortTokenName2_s3(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s2 struct _Con_M_U_SymbolSortTokenName2_s2
struct _Con_M_U_SymbolSortTokenName2_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s2;
extern int step_M_U_SymbolSortTokenName2_s2(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s5 struct _Con_M_U_SymbolSortTokenName2_s5
struct _Con_M_U_SymbolSortTokenName2_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s5;
extern int step_M_U_SymbolSortTokenName2_s5(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s4 struct _Con_M_U_SymbolSortTokenName2_s4
struct _Con_M_U_SymbolSortTokenName2_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s4;
extern int step_M_U_SymbolSortTokenName2_s4(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s7 struct _Con_M_U_SymbolSortTokenName2_s7
struct _Con_M_U_SymbolSortTokenName2_s7 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s7;
extern int step_M_U_SymbolSortTokenName2_s7(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2_s6 struct _Con_M_U_SymbolSortTokenName2_s6
struct _Con_M_U_SymbolSortTokenName2_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2_s6;
extern int step_M_U_SymbolSortTokenName2_s6(Sink,Term);

/* FUNCTION Util-U-then-NonMainSymbols1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_NonMainSymbols1_s1 struct _Con_M_U__then_NonMainSymbols1_s1
struct _Con_M_U__then_NonMainSymbols1_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_NonMainSymbols1_s1;
extern int step_M_U__then_NonMainSymbols1_s1(Sink,Term);

/* FUNCTION Util-DLE-Form-Abstraction HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s9 struct _Con_M_U_DefineLessEqual_s9
struct _Con_M_U_DefineLessEqual_s9 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s9;
extern int step_M_U_DefineLessEqual_s9(Sink,Term);

/* FUNCTION Util-DLE-Form- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s8 struct _Con_M_U_DefineLessEqual_s8
struct _Con_M_U_DefineLessEqual_s8 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s8;
extern int step_M_U_DefineLessEqual_s8(Sink,Term);

/* FUNCTION Util-DLE-Abstraction-Rule HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s5 struct _Con_M_U_DefineLessEqual_s5
struct _Con_M_U_DefineLessEqual_s5 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s5;
extern int step_M_U_DefineLessEqual_s5(Sink,Term);

/* FUNCTION Util-DLE-Abstraction-Form HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s4 struct _Con_M_U_DefineLessEqual_s4
struct _Con_M_U_DefineLessEqual_s4 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s4;
extern int step_M_U_DefineLessEqual_s4(Sink,Term);

/* FUNCTION Util-DLE-Abstraction-Synthesizes HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s6 struct _Con_M_U_DefineLessEqual_s6
struct _Con_M_U_DefineLessEqual_s6 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s6;
extern int step_M_U_DefineLessEqual_s6(Sink,Term);

/* FUNCTION Util-EmptyAttributeFormMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_EmptyAttributeFormMap struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_EmptyAttributeFormMap;
extern int step_M_EmptyAttributeFormMap(Sink,Term);

/* FUNCTION Util-U-DefineLessEqual-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s3 struct _Con_M_U_DefineLessEqual_s3
struct _Con_M_U_DefineLessEqual_s3 {struct _Construction construction; Term sub[4]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s3;
extern int step_M_U_DefineLessEqual_s3(Sink,Term);

/* FUNCTION Util-U-InsertDefine1b-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine1b struct _Con_M_U_InsertDefine1b
struct _Con_M_U_InsertDefine1b {struct _Construction construction; Term sub[7]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine1b;
extern int step_M_U_InsertDefine1b(Sink,Term);

/* FUNCTION Util- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s2 struct _Con_M_U_DefineLessEqual_s2
struct _Con_M_U_DefineLessEqual_s2 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s2;
extern int step_M_U_DefineLessEqual_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyLiteral-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyLiteral struct _Con_M_C_CrsxifyLiteral
struct _Con_M_C_CrsxifyLiteral {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyLiteral;
extern int step_M_C_CrsxifyLiteral(Sink,Term);

/* FUNCTION Util-U-then-DefineWrapperSugar-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_DefineWrapperSugar_s1 struct _Con_M_U__then_DefineWrapperSugar_s1
struct _Con_M_U__then_DefineWrapperSugar_s1 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_DefineWrapperSugar_s1;
extern int step_M_U__then_DefineWrapperSugar_s1(Sink,Term);

/* FUNCTION Util-U-DeclarationMapString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapString_s1 struct _Con_M_U_DeclarationMapString_s1
struct _Con_M_U_DeclarationMapString_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapString_s1;
extern int step_M_U_DeclarationMapString_s1(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure7-1$Name2NamesClosure7$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure7 struct _Con_M_Name2NamesClosure7
struct _Con_M_Name2NamesClosure7 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure7;
extern int step_M_Name2NamesClosure7(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure6-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure6 struct _Con_M_Name2NamesClosure6
struct _Con_M_Name2NamesClosure6 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure6;
extern int step_M_Name2NamesClosure6(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure3 struct _Con_M_Name2NamesClosure3
struct _Con_M_Name2NamesClosure3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure3;
extern int step_M_Name2NamesClosure3(Sink,Term);

/* FUNCTION Prep-P-SameScopeSortPrec-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSortPrec_s6 struct _Con_M_P_SameScopeSortPrec_s6
struct _Con_M_P_SameScopeSortPrec_s6 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSortPrec_s6;
extern int step_M_P_SameScopeSortPrec_s6(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure2 struct _Con_M_Name2NamesClosure2
struct _Con_M_Name2NamesClosure2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure2;
extern int step_M_Name2NamesClosure2(Sink,Term);

/* FUNCTION Prep-P-SameScopeSortPrec-3$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSortPrec_s5 struct _Con_M_P_SameScopeSortPrec_s5
struct _Con_M_P_SameScopeSortPrec_s5 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSortPrec_s5;
extern int step_M_P_SameScopeSortPrec_s5(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure5-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure5 struct _Con_M_Name2NamesClosure5
struct _Con_M_Name2NamesClosure5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure5;
extern int step_M_Name2NamesClosure5(Sink,Term);

/* FUNCTION Prep-P-SameScopeSortPrec-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSortPrec_s8 struct _Con_M_P_SameScopeSortPrec_s8
struct _Con_M_P_SameScopeSortPrec_s8 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSortPrec_s8;
extern int step_M_P_SameScopeSortPrec_s8(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure4-2$Name2NamesClosure4$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure4 struct _Con_M_Name2NamesClosure4
struct _Con_M_Name2NamesClosure4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure4;
extern int step_M_Name2NamesClosure4(Sink,Term);

/* FUNCTION Prep-NestedRepeat- HEADER DECLARATIONS. */
#define STRUCT_Con_M_NestedRepeat struct _Con_M_NestedRepeat
struct _Con_M_NestedRepeat {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NestedRepeat;
extern int step_M_NestedRepeat(Sink,Term);

/* FUNCTION Util-U-IsInheritedAttribute-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsInheritedAttribute_s3 struct _Con_M_U_IsInheritedAttribute_s3
struct _Con_M_U_IsInheritedAttribute_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsInheritedAttribute_s3;
extern int step_M_U_IsInheritedAttribute_s3(Sink,Term);

/* FUNCTION Util-U-IsInheritedAttribute-1$U-IsInheritedAttribute$2$DME_NAMES HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsInheritedAttribute_s2 struct _Con_M_U_IsInheritedAttribute_s2
struct _Con_M_U_IsInheritedAttribute_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsInheritedAttribute_s2;
extern int step_M_U_IsInheritedAttribute_s2(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized3-1$U-MakeSort2Synthesized3$1$DME_SORT HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized3_s1 struct _Con_M_U_MakeSort2Synthesized3_s1
struct _Con_M_U_MakeSort2Synthesized3_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized3_s1;
extern int step_M_U_MakeSort2Synthesized3_s1(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized3_s2 struct _Con_M_U_MakeSort2Synthesized3_s2
struct _Con_M_U_MakeSort2Synthesized3_s2 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized3_s2;
extern int step_M_U_MakeSort2Synthesized3_s2(Sink,Term);

/* FUNCTION Cook-C-AD-AddAttributeTerm-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AD_AddAttributeTerm_s1 struct _Con_M_C_AD_AddAttributeTerm_s1
struct _Con_M_C_AD_AddAttributeTerm_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AD_AddAttributeTerm_s1;
extern int step_M_C_AD_AddAttributeTerm_s1(Sink,Term);

/* FUNCTION Prep-P-GetModuleName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_GetModuleName_s2 struct _Con_M_P_GetModuleName_s2
struct _Con_M_P_GetModuleName_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_GetModuleName_s2;
extern int step_M_P_GetModuleName_s2(Sink,Term);

/* FUNCTION Prep-P-GetModuleName-1$P-GetModuleName$1$Hx_module HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_GetModuleName_s1 struct _Con_M_P_GetModuleName_s1
struct _Con_M_P_GetModuleName_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_GetModuleName_s1;
extern int step_M_P_GetModuleName_s1(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternatives- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternatives struct _Con_M_U_MakeDM_SortAlternatives
struct _Con_M_U_MakeDM_SortAlternatives {struct _Construction construction; Term sub[5]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternatives;
extern int step_M_U_MakeDM_SortAlternatives(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors4- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors4 struct _Con_M_U_MakeSort2UserConstructors4
struct _Con_M_U_MakeSort2UserConstructors4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors4;
extern int step_M_U_MakeSort2UserConstructors4(Sink,Term);

/* FUNCTION Prelude-MapStringConcat-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapStringConcat_s3 struct _Con_M_MapStringConcat_s3
struct _Con_M_MapStringConcat_s3 {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapStringConcat_s3;
extern int step_M_MapStringConcat_s3(Sink,Term);

/* FUNCTION Prelude-TraceWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TraceWhen_s1 struct _Con_M_TraceWhen_s1
struct _Con_M_TraceWhen_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TraceWhen_s1;
extern int step_M_TraceWhen_s1(Sink,Term);

/* FUNCTION Util-U-EntryConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors_s2 struct _Con_M_U_EntryConstructors_s2
struct _Con_M_U_EntryConstructors_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors_s2;
extern int step_M_U_EntryConstructors_s2(Sink,Term);

/* FUNCTION Prep-SortVar2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar2_s4 struct _Con_M_SortVar2_s4
struct _Con_M_SortVar2_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar2_s4;
extern int step_M_SortVar2_s4(Sink,Term);

/* FUNCTION Util-U-EntryConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors_s1 struct _Con_M_U_EntryConstructors_s1
struct _Con_M_U_EntryConstructors_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors_s1;
extern int step_M_U_EntryConstructors_s1(Sink,Term);

/* FUNCTION Prep-SortVar2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar2_s3 struct _Con_M_SortVar2_s3
struct _Con_M_SortVar2_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar2_s3;
extern int step_M_SortVar2_s3(Sink,Term);

/* FUNCTION Util-U-EntryConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors_s4 struct _Con_M_U_EntryConstructors_s4
struct _Con_M_U_EntryConstructors_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors_s4;
extern int step_M_U_EntryConstructors_s4(Sink,Term);

/* FUNCTION Prep-SortVar2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar2_s6 struct _Con_M_SortVar2_s6
struct _Con_M_SortVar2_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar2_s6;
extern int step_M_SortVar2_s6(Sink,Term);

/* FUNCTION Util-U-EntryConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors_s3 struct _Con_M_U_EntryConstructors_s3
struct _Con_M_U_EntryConstructors_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors_s3;
extern int step_M_U_EntryConstructors_s3(Sink,Term);

/* FUNCTION Prep-SortVar2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar2_s5 struct _Con_M_SortVar2_s5
struct _Con_M_SortVar2_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar2_s5;
extern int step_M_SortVar2_s5(Sink,Term);

/* FUNCTION Util-U-EntryConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors_s6 struct _Con_M_U_EntryConstructors_s6
struct _Con_M_U_EntryConstructors_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors_s6;
extern int step_M_U_EntryConstructors_s6(Sink,Term);

/* FUNCTION Util-U-EntryConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors_s5 struct _Con_M_U_EntryConstructors_s5
struct _Con_M_U_EntryConstructors_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors_s5;
extern int step_M_U_EntryConstructors_s5(Sink,Term);

/* FUNCTION Util-U-EntryConstructors-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors_s8 struct _Con_M_U_EntryConstructors_s8
struct _Con_M_U_EntryConstructors_s8 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors_s8;
extern int step_M_U_EntryConstructors_s8(Sink,Term);

/* FUNCTION Util-U-EntryConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors_s7 struct _Con_M_U_EntryConstructors_s7
struct _Con_M_U_EntryConstructors_s7 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors_s7;
extern int step_M_U_EntryConstructors_s7(Sink,Term);

/* FUNCTION Prelude-MapStringConcat- HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapStringConcat_s1 struct _Con_M_MapStringConcat_s1
struct _Con_M_MapStringConcat_s1 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapStringConcat_s1;
extern int step_M_MapStringConcat_s1(Sink,Term);

/* FUNCTION Util-U-EntryConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors_s9 struct _Con_M_U_EntryConstructors_s9
struct _Con_M_U_EntryConstructors_s9 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors_s9;
extern int step_M_U_EntryConstructors_s9(Sink,Term);

/* FUNCTION Prelude-MapStringConcat-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapStringConcat_s2 struct _Con_M_MapStringConcat_s2
struct _Con_M_MapStringConcat_s2 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapStringConcat_s2;
extern int step_M_MapStringConcat_s2(Sink,Term);

/* FUNCTION Prep-SortVar2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar2_s2 struct _Con_M_SortVar2_s2
struct _Con_M_SortVar2_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar2_s2;
extern int step_M_SortVar2_s2(Sink,Term);

/* FUNCTION Prep-SortVar2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar2_s1 struct _Con_M_SortVar2_s1
struct _Con_M_SortVar2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar2_s1;
extern int step_M_SortVar2_s1(Sink,Term);

/* FUNCTION Util-U-then-SortNameWithRepeat2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortNameWithRepeat2_s5 struct _Con_M_U__then_SortNameWithRepeat2_s5
struct _Con_M_U__then_SortNameWithRepeat2_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortNameWithRepeat2_s5;
extern int step_M_U__then_SortNameWithRepeat2_s5(Sink,Term);

/* FUNCTION Util-U-then-SortNameWithRepeat2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortNameWithRepeat2_s4 struct _Con_M_U__then_SortNameWithRepeat2_s4
struct _Con_M_U__then_SortNameWithRepeat2_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortNameWithRepeat2_s4;
extern int step_M_U__then_SortNameWithRepeat2_s4(Sink,Term);

/* FUNCTION Util-U-then-SortNameWithRepeat2-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortNameWithRepeat2_s7 struct _Con_M_U__then_SortNameWithRepeat2_s7
struct _Con_M_U__then_SortNameWithRepeat2_s7 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortNameWithRepeat2_s7;
extern int step_M_U__then_SortNameWithRepeat2_s7(Sink,Term);

/* FUNCTION Util-U-then-SortNameWithRepeat2-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortNameWithRepeat2_s6 struct _Con_M_U__then_SortNameWithRepeat2_s6
struct _Con_M_U__then_SortNameWithRepeat2_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortNameWithRepeat2_s6;
extern int step_M_U__then_SortNameWithRepeat2_s6(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAbstraction-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAbstraction struct _Con_M_U_MakeDM_SortAbstraction
struct _Con_M_U_MakeDM_SortAbstraction {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAbstraction;
extern int step_M_U_MakeDM_SortAbstraction(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s42 struct _Con_M_C_ExtendSortMap_Terms_s42
struct _Con_M_C_ExtendSortMap_Terms_s42 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s42;
extern int step_M_C_ExtendSortMap_Terms_s42(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-1$C-ExtendSortMap-Terms$41$$Nil HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s41 struct _Con_M_C_ExtendSortMap_Terms_s41
struct _Con_M_C_ExtendSortMap_Terms_s41 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s41;
extern int step_M_C_ExtendSortMap_Terms_s41(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s40 struct _Con_M_C_ExtendSortMap_Terms_s40
struct _Con_M_C_ExtendSortMap_Terms_s40 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s40;
extern int step_M_C_ExtendSortMap_Terms_s40(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpChoice- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpChoice struct _Con_M_P_InlineRegExpChoice
struct _Con_M_P_InlineRegExpChoice {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpChoice;
extern int step_M_P_InlineRegExpChoice(Sink,Term);

/* FUNCTION Util-U-ScopeSortPrecTopSort-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ScopeSortPrecTopSort_s1 struct _Con_M_U_ScopeSortPrecTopSort_s1
struct _Con_M_U_ScopeSortPrecTopSort_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ScopeSortPrecTopSort_s1;
extern int step_M_U_ScopeSortPrecTopSort_s1(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry_s1 struct _Con_M_U_KeepInheritedMapEntry_s1
struct _Con_M_U_KeepInheritedMapEntry_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry_s1;
extern int step_M_U_KeepInheritedMapEntry_s1(Sink,Term);

/* FUNCTION Cook-C-AttributeValuePattern1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeValuePattern1 struct _Con_M_C_AttributeValuePattern1
struct _Con_M_C_AttributeValuePattern1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeValuePattern1;
extern int step_M_C_AttributeValuePattern1(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s6 struct _Con_M_U_KeepInheritedMapEntry2_s6
struct _Con_M_U_KeepInheritedMapEntry2_s6 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s6;
extern int step_M_U_KeepInheritedMapEntry2_s6(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s5 struct _Con_M_U_KeepInheritedMapEntry2_s5
struct _Con_M_U_KeepInheritedMapEntry2_s5 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s5;
extern int step_M_U_KeepInheritedMapEntry2_s5(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s8 struct _Con_M_U_KeepInheritedMapEntry2_s8
struct _Con_M_U_KeepInheritedMapEntry2_s8 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s8;
extern int step_M_U_KeepInheritedMapEntry2_s8(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s7 struct _Con_M_U_KeepInheritedMapEntry2_s7
struct _Con_M_U_KeepInheritedMapEntry2_s7 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s7;
extern int step_M_U_KeepInheritedMapEntry2_s7(Sink,Term);

/* FUNCTION Util-U-AllTokenNames-1$U-AllTokenNames HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllTokenNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_AllTokenNames;
extern int step_M_U_AllTokenNames(Sink,Term);

/* FUNCTION Util-U-ScopeSortPrecTopSort-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ScopeSortPrecTopSort_s3 struct _Con_M_U_ScopeSortPrecTopSort_s3
struct _Con_M_U_ScopeSortPrecTopSort_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ScopeSortPrecTopSort_s3;
extern int step_M_U_ScopeSortPrecTopSort_s3(Sink,Term);

/* FUNCTION Util-U-ScopeSortPrecTopSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ScopeSortPrecTopSort_s4 struct _Con_M_U_ScopeSortPrecTopSort_s4
struct _Con_M_U_ScopeSortPrecTopSort_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ScopeSortPrecTopSort_s4;
extern int step_M_U_ScopeSortPrecTopSort_s4(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s9 struct _Con_M_U_KeepInheritedMapEntry2_s9
struct _Con_M_U_KeepInheritedMapEntry2_s9 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s9;
extern int step_M_U_KeepInheritedMapEntry2_s9(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s1 struct _Con_M_U_KeepInheritedMapEntry2_s1
struct _Con_M_U_KeepInheritedMapEntry2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s1;
extern int step_M_U_KeepInheritedMapEntry2_s1(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s2 struct _Con_M_U_KeepInheritedMapEntry2_s2
struct _Con_M_U_KeepInheritedMapEntry2_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s2;
extern int step_M_U_KeepInheritedMapEntry2_s2(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2$U-KeepInheritedMapEntry2$3$Hx_AttributeKind HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2_s3 struct _Con_M_U_KeepInheritedMapEntry2_s3
struct _Con_M_U_KeepInheritedMapEntry2_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2_s3;
extern int step_M_U_KeepInheritedMapEntry2_s3(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAbstractionDefines-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAbstractionDefines_s2 struct _Con_M_U_MakeDM_SortAbstractionDefines_s2
struct _Con_M_U_MakeDM_SortAbstractionDefines_s2 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAbstractionDefines_s2;
extern int step_M_U_MakeDM_SortAbstractionDefines_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeDefine-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeDefine_s8 struct _Con_M_C_UnsynthesizeDefine_s8
struct _Con_M_C_UnsynthesizeDefine_s8 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeDefine_s8;
extern int step_M_C_UnsynthesizeDefine_s8(Sink,Term);

/* FUNCTION Prep-P-Lexical2Tail-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2Tail_s1 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2Tail_s1;
extern int step_M_P_Lexical2Tail_s1(Sink,Term);

/* FUNCTION Prep-P-Lexical2Tail-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2Tail_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2Tail_s2;
extern int step_M_P_Lexical2Tail_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeDefine-2$C-UnsynthesizeDefine$4$Hx_Rule HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeDefine_s4 struct _Con_M_C_UnsynthesizeDefine_s4
struct _Con_M_C_UnsynthesizeDefine_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeDefine_s4;
extern int step_M_C_UnsynthesizeDefine_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeDefine-2$C-UnsynthesizeDefine$6$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeDefine_s6 struct _Con_M_C_UnsynthesizeDefine_s6
struct _Con_M_C_UnsynthesizeDefine_s6 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeDefine_s6;
extern int step_M_C_UnsynthesizeDefine_s6(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAbstractionDefines-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAbstractionDefines_s1 struct _Con_M_U_MakeDM_SortAbstractionDefines_s1
struct _Con_M_U_MakeDM_SortAbstractionDefines_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAbstractionDefines_s1;
extern int step_M_U_MakeDM_SortAbstractionDefines_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeDefine-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeDefine_s7 struct _Con_M_C_UnsynthesizeDefine_s7
struct _Con_M_C_UnsynthesizeDefine_s7 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeDefine_s7;
extern int step_M_C_UnsynthesizeDefine_s7(Sink,Term);

/* FUNCTION Prelude-WrappedTextJoin-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_WrappedTextJoin_s2 struct _Con_M_WrappedTextJoin_s2
struct _Con_M_WrappedTextJoin_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_WrappedTextJoin_s2;
extern int step_M_WrappedTextJoin_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeDefine-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeDefine_s1 struct _Con_M_C_UnsynthesizeDefine_s1
struct _Con_M_C_UnsynthesizeDefine_s1 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeDefine_s1;
extern int step_M_C_UnsynthesizeDefine_s1(Sink,Term);

/* FUNCTION Prelude-WrappedTextJoin-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_WrappedTextJoin_s1 struct _Con_M_WrappedTextJoin_s1
struct _Con_M_WrappedTextJoin_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_WrappedTextJoin_s1;
extern int step_M_WrappedTextJoin_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeDefine-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeDefine_s2 struct _Con_M_C_UnsynthesizeDefine_s2
struct _Con_M_C_UnsynthesizeDefine_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeDefine_s2;
extern int step_M_C_UnsynthesizeDefine_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeDefine-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeDefine_s3 struct _Con_M_C_UnsynthesizeDefine_s3
struct _Con_M_C_UnsynthesizeDefine_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeDefine_s3;
extern int step_M_C_UnsynthesizeDefine_s3(Sink,Term);

/* FUNCTION Util-U-ExtractParsedFormFirstSort- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ExtractParsedFormFirstSort struct _Con_M_U_ExtractParsedFormFirstSort
struct _Con_M_U_ExtractParsedFormFirstSort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ExtractParsedFormFirstSort;
extern int step_M_U_ExtractParsedFormFirstSort(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s19 struct _Con_M_P__isLeftRecursive2_s19
struct _Con_M_P__isLeftRecursive2_s19 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s19;
extern int step_M_P__isLeftRecursive2_s19(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s17 struct _Con_M_P__isLeftRecursive2_s17
struct _Con_M_P__isLeftRecursive2_s17 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s17;
extern int step_M_P__isLeftRecursive2_s17(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s18 struct _Con_M_P__isLeftRecursive2_s18
struct _Con_M_P__isLeftRecursive2_s18 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s18;
extern int step_M_P__isLeftRecursive2_s18(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s15 struct _Con_M_P__isLeftRecursive2_s15
struct _Con_M_P__isLeftRecursive2_s15 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s15;
extern int step_M_P__isLeftRecursive2_s15(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s16 struct _Con_M_P__isLeftRecursive2_s16
struct _Con_M_P__isLeftRecursive2_s16 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s16;
extern int step_M_P__isLeftRecursive2_s16(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s13 struct _Con_M_P__isLeftRecursive2_s13
struct _Con_M_P__isLeftRecursive2_s13 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s13;
extern int step_M_P__isLeftRecursive2_s13(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s14 struct _Con_M_P__isLeftRecursive2_s14
struct _Con_M_P__isLeftRecursive2_s14 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s14;
extern int step_M_P__isLeftRecursive2_s14(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s11 struct _Con_M_P__isLeftRecursive2_s11
struct _Con_M_P__isLeftRecursive2_s11 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s11;
extern int step_M_P__isLeftRecursive2_s11(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s10 struct _Con_M_P__isLeftRecursive2_s10
struct _Con_M_P__isLeftRecursive2_s10 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s10;
extern int step_M_P__isLeftRecursive2_s10(Sink,Term);

/* FUNCTION Prelude-JoinMappedTextMaps-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JoinMappedTextMaps struct _Con_M_JoinMappedTextMaps
struct _Con_M_JoinMappedTextMaps {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_JoinMappedTextMaps;
extern int step_M_JoinMappedTextMaps(Sink,Term);

/* FUNCTION Prep-P-InlineRegExp-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExp_s1 struct _Con_M_P_InlineRegExp_s1
struct _Con_M_P_InlineRegExp_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExp_s1;
extern int step_M_P_InlineRegExp_s1(Sink,Term);

/* FUNCTION Prelude-Max2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Max2 struct _Con_M_Max2
struct _Con_M_Max2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Max2;
extern int step_M_Max2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeSimple- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeSimple_s3 struct _Con_M_C_CrsxifyAttributeSimple_s3
struct _Con_M_C_CrsxifyAttributeSimple_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeSimple_s3;
extern int step_M_C_CrsxifyAttributeSimple_s3(Sink,Term);

/* FUNCTION Prelude-NumericToStringWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_NumericToStringWhen_s1 struct _Con_M_NumericToStringWhen_s1
struct _Con_M_NumericToStringWhen_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NumericToStringWhen_s1;
extern int step_M_NumericToStringWhen_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeSimple- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeSimple_s1 struct _Con_M_C_CrsxifyAttributeSimple_s1
struct _Con_M_C_CrsxifyAttributeSimple_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeSimple_s1;
extern int step_M_C_CrsxifyAttributeSimple_s1(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s20 struct _Con_M_P__isLeftRecursive2_s20
struct _Con_M_P__isLeftRecursive2_s20 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s20;
extern int step_M_P__isLeftRecursive2_s20(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s21 struct _Con_M_P__isLeftRecursive2_s21
struct _Con_M_P__isLeftRecursive2_s21 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s21;
extern int step_M_P__isLeftRecursive2_s21(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule2-1$C-UnsynthesizeRule2$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule2_s1 struct _Con_M_C_UnsynthesizeRule2_s1
struct _Con_M_C_UnsynthesizeRule2_s1 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule2_s1;
extern int step_M_C_UnsynthesizeRule2_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule2_s2 struct _Con_M_C_UnsynthesizeRule2_s2
struct _Con_M_C_UnsynthesizeRule2_s2 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule2_s2;
extern int step_M_C_UnsynthesizeRule2_s2(Sink,Term);

/* FUNCTION Prelude-StringStartsWithWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringStartsWithWhen_s1 struct _Con_M_StringStartsWithWhen_s1
struct _Con_M_StringStartsWithWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringStartsWithWhen_s1;
extern int step_M_StringStartsWithWhen_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeSimple-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeSimple_s4 struct _Con_M_C_CrsxifyAttributeSimple_s4
struct _Con_M_C_CrsxifyAttributeSimple_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeSimple_s4;
extern int step_M_C_CrsxifyAttributeSimple_s4(Sink,Term);

/* FUNCTION Cook-C-VariablesExcept-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_VariablesExcept_s3 struct _Con_M_C_VariablesExcept_s3
struct _Con_M_C_VariablesExcept_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_VariablesExcept_s3;
extern int step_M_C_VariablesExcept_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeSimple-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeSimple_s5 struct _Con_M_C_CrsxifyAttributeSimple_s5
struct _Con_M_C_CrsxifyAttributeSimple_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeSimple_s5;
extern int step_M_C_CrsxifyAttributeSimple_s5(Sink,Term);

/* FUNCTION Cook-C-VariablesExcept-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_VariablesExcept_s2 struct _Con_M_C_VariablesExcept_s2
struct _Con_M_C_VariablesExcept_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_VariablesExcept_s2;
extern int step_M_C_VariablesExcept_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeSimple-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeSimple_s6 struct _Con_M_C_CrsxifyAttributeSimple_s6
struct _Con_M_C_CrsxifyAttributeSimple_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeSimple_s6;
extern int step_M_C_CrsxifyAttributeSimple_s6(Sink,Term);

/* FUNCTION Cook-C-VariablesExcept-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_VariablesExcept_s1 struct _Con_M_C_VariablesExcept_s1
struct _Con_M_C_VariablesExcept_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_VariablesExcept_s1;
extern int step_M_C_VariablesExcept_s1(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry-1$U-KeepInheritedMapEntry$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry struct _Con_M_U_KeepInheritedMapEntry
struct _Con_M_U_KeepInheritedMapEntry {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry;
extern int step_M_U_KeepInheritedMapEntry(Sink,Term);

/* FUNCTION Prelude-ContainsName-1$ContainsName$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_ContainsName struct _Con_M_ContainsName
struct _Con_M_ContainsName {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_ContainsName;
extern int step_M_ContainsName(Sink,Term);

/* FUNCTION Util-U-IsSynthesizedAttribute-1$U-IsSynthesizedAttribute$2$DME_NAMES HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsSynthesizedAttribute_s2 struct _Con_M_U_IsSynthesizedAttribute_s2
struct _Con_M_U_IsSynthesizedAttribute_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsSynthesizedAttribute_s2;
extern int step_M_U_IsSynthesizedAttribute_s2(Sink,Term);

/* FUNCTION Util-U-IsSynthesizedAttribute-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsSynthesizedAttribute_s3 struct _Con_M_U_IsSynthesizedAttribute_s3
struct _Con_M_U_IsSynthesizedAttribute_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsSynthesizedAttribute_s3;
extern int step_M_U_IsSynthesizedAttribute_s3(Sink,Term);

/* FUNCTION Prelude-When-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_When_s1 struct _Con_M_When_s1
struct _Con_M_When_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_When_s1;
extern int step_M_When_s1(Sink,Term);

/* FUNCTION Prelude-FoldNamesWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_FoldNamesWhen struct _Con_M_FoldNamesWhen
struct _Con_M_FoldNamesWhen {struct _Construction construction; Term sub[3]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_FoldNamesWhen;
extern int step_M_FoldNamesWhen(Sink,Term);

/* FUNCTION Prelude-SetName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SetName_s1 struct _Con_M_SetName_s1
struct _Con_M_SetName_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SetName_s1;
extern int step_M_SetName_s1(Sink,Term);

/* FUNCTION Cook-C-AddAttributeInnerSynthesized-3$C-AddAttributeInnerSynthesized$1$Hx_Attribute HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeInnerSynthesized_s1 struct _Con_M_C_AddAttributeInnerSynthesized_s1
struct _Con_M_C_AddAttributeInnerSynthesized_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeInnerSynthesized_s1;
extern int step_M_C_AddAttributeInnerSynthesized_s1(Sink,Term);

/* FUNCTION Prelude-AddNameNumber-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AddNameNumber struct _Con_M_AddNameNumber
struct _Con_M_AddNameNumber {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AddNameNumber;
extern int step_M_AddNameNumber(Sink,Term);

/* FUNCTION Cook-C-AddAttributeInnerSynthesized-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeInnerSynthesized_s8 struct _Con_M_C_AddAttributeInnerSynthesized_s8
struct _Con_M_C_AddAttributeInnerSynthesized_s8 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeInnerSynthesized_s8;
extern int step_M_C_AddAttributeInnerSynthesized_s8(Sink,Term);

/* FUNCTION Cook-C-AddAttributeInnerSynthesized-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeInnerSynthesized_s7 struct _Con_M_C_AddAttributeInnerSynthesized_s7
struct _Con_M_C_AddAttributeInnerSynthesized_s7 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeInnerSynthesized_s7;
extern int step_M_C_AddAttributeInnerSynthesized_s7(Sink,Term);

/* FUNCTION Cook-C-AddAttributeInnerSynthesized-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeInnerSynthesized_s4 struct _Con_M_C_AddAttributeInnerSynthesized_s4
struct _Con_M_C_AddAttributeInnerSynthesized_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeInnerSynthesized_s4;
extern int step_M_C_AddAttributeInnerSynthesized_s4(Sink,Term);

/* FUNCTION Cook-C-AddAttributeInnerSynthesized- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeInnerSynthesized_s3 struct _Con_M_C_AddAttributeInnerSynthesized_s3
struct _Con_M_C_AddAttributeInnerSynthesized_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeInnerSynthesized_s3;
extern int step_M_C_AddAttributeInnerSynthesized_s3(Sink,Term);

/* FUNCTION Cook-C-AddAttributeInnerSynthesized-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeInnerSynthesized_s6 struct _Con_M_C_AddAttributeInnerSynthesized_s6
struct _Con_M_C_AddAttributeInnerSynthesized_s6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeInnerSynthesized_s6;
extern int step_M_C_AddAttributeInnerSynthesized_s6(Sink,Term);

/* FUNCTION Cook-C-AddAttributeInnerSynthesized-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeInnerSynthesized_s5 struct _Con_M_C_AddAttributeInnerSynthesized_s5
struct _Con_M_C_AddAttributeInnerSynthesized_s5 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeInnerSynthesized_s5;
extern int step_M_C_AddAttributeInnerSynthesized_s5(Sink,Term);

/* FUNCTION Util-U-DeclarationMapString1-1$U-DeclarationMapString1$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapString1 struct _Con_M_U_DeclarationMapString1
struct _Con_M_U_DeclarationMapString1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapString1;
extern int step_M_U_DeclarationMapString1(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxScopeSort- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxScopeSort_s1 struct _Con_M_P_MetaJJ_Production_HxScopeSort_s1
struct _Con_M_P_MetaJJ_Production_HxScopeSort_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxScopeSort_s1;
extern int step_M_P_MetaJJ_Production_HxScopeSort_s1(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxScopeSort-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxScopeSort_s2 struct _Con_M_P_MetaJJ_Production_HxScopeSort_s2
struct _Con_M_P_MetaJJ_Production_HxScopeSort_s2 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxScopeSort_s2;
extern int step_M_P_MetaJJ_Production_HxScopeSort_s2(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxScopeSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxScopeSort_s5 struct _Con_M_P_MetaJJ_Production_HxScopeSort_s5
struct _Con_M_P_MetaJJ_Production_HxScopeSort_s5 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxScopeSort_s5;
extern int step_M_P_MetaJJ_Production_HxScopeSort_s5(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxScopeSort-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxScopeSort_s4 struct _Con_M_P_MetaJJ_Production_HxScopeSort_s4
struct _Con_M_P_MetaJJ_Production_HxScopeSort_s4 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxScopeSort_s4;
extern int step_M_P_MetaJJ_Production_HxScopeSort_s4(Sink,Term);

/* FUNCTION Cook-C-SubstituteSort-Pattern- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SubstituteSort_Pattern struct _Con_M_C_SubstituteSort_Pattern
struct _Con_M_C_SubstituteSort_Pattern {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SubstituteSort_Pattern;
extern int step_M_C_SubstituteSort_Pattern(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized struct _Con_M_C_AddTermTopSynthesized
struct _Con_M_C_AddTermTopSynthesized {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized;
extern int step_M_C_AddTermTopSynthesized(Sink,Term);

/* FUNCTION Util-U-ConstructorsForSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ConstructorsForSort struct _Con_M_U_ConstructorsForSort
struct _Con_M_U_ConstructorsForSort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ConstructorsForSort;
extern int step_M_U_ConstructorsForSort(Sink,Term);

/* FUNCTION Prelude-MapIndexFrom- HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapIndexFrom_s1 struct _Con_M_MapIndexFrom_s1
struct _Con_M_MapIndexFrom_s1 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapIndexFrom_s1;
extern int step_M_MapIndexFrom_s1(Sink,Term);

/* FUNCTION Prelude-MapIndexFrom-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapIndexFrom_s3 struct _Con_M_MapIndexFrom_s3
struct _Con_M_MapIndexFrom_s3 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapIndexFrom_s3;
extern int step_M_MapIndexFrom_s3(Sink,Term);

/* FUNCTION Prelude-MapIndexFrom-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapIndexFrom_s2 struct _Con_M_MapIndexFrom_s2
struct _Con_M_MapIndexFrom_s2 {struct _Construction construction; Term sub[4]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapIndexFrom_s2;
extern int step_M_MapIndexFrom_s2(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors2_s3 struct _Con_M_U_MakeSort2UserConstructors2_s3
struct _Con_M_U_MakeSort2UserConstructors2_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors2_s3;
extern int step_M_U_MakeSort2UserConstructors2_s3(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors2_s2 struct _Con_M_U_MakeSort2UserConstructors2_s2
struct _Con_M_U_MakeSort2UserConstructors2_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors2_s2;
extern int step_M_U_MakeSort2UserConstructors2_s2(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors2_s1 struct _Con_M_U_MakeSort2UserConstructors2_s1
struct _Con_M_U_MakeSort2UserConstructors2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors2_s1;
extern int step_M_U_MakeSort2UserConstructors2_s1(Sink,Term);

/* FUNCTION Prep-P-Embed-Head- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Embed_Head struct _Con_M_P_Embed_Head
struct _Con_M_P_Embed_Head {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Embed_Head;
extern int step_M_P_Embed_Head(Sink,Term);

/* FUNCTION Cook-C-CrsxifyDefine- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyDefine struct _Con_M_C_CrsxifyDefine
struct _Con_M_C_CrsxifyDefine {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyDefine;
extern int step_M_C_CrsxifyDefine(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep-word-word HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s34 struct _Con_M_P_SubRepeat_s34
struct _Con_M_P_SubRepeat_s34 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s34;
extern int step_M_P_SubRepeat_s34(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep-string-word HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s33 struct _Con_M_P_SubRepeat_s33
struct _Con_M_P_SubRepeat_s33 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s33;
extern int step_M_P_SubRepeat_s33(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s11 struct _Con_M_U_KeepSynthesizedEntry2_s11
struct _Con_M_U_KeepSynthesizedEntry2_s11 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s11;
extern int step_M_U_KeepSynthesizedEntry2_s11(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s32 struct _Con_M_P_SubRepeat_s32
struct _Con_M_P_SubRepeat_s32 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s32;
extern int step_M_P_SubRepeat_s32(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s10 struct _Con_M_U_KeepSynthesizedEntry2_s10
struct _Con_M_U_KeepSynthesizedEntry2_s10 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s10;
extern int step_M_U_KeepSynthesizedEntry2_s10(Sink,Term);

/* FUNCTION Util-U-TestIfToken1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1 struct _Con_M_U_TestIfToken1
struct _Con_M_U_TestIfToken1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1;
extern int step_M_U_TestIfToken1(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep-word-string HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s30 struct _Con_M_P_SubRepeat_s30
struct _Con_M_P_SubRepeat_s30 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s30;
extern int step_M_P_SubRepeat_s30(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s4 struct _Con_M_P__isLeftRecursive2_s4
struct _Con_M_P__isLeftRecursive2_s4 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s4;
extern int step_M_P__isLeftRecursive2_s4(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2$P-isLeftRecursive2$3$Hx_Sort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s3 struct _Con_M_P__isLeftRecursive2_s3
struct _Con_M_P__isLeftRecursive2_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s3;
extern int step_M_P__isLeftRecursive2_s3(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s2 struct _Con_M_P__isLeftRecursive2_s2
struct _Con_M_P__isLeftRecursive2_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s2;
extern int step_M_P__isLeftRecursive2_s2(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2$P-isLeftRecursive2$1$Hx_ HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s1 struct _Con_M_P__isLeftRecursive2_s1
struct _Con_M_P__isLeftRecursive2_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s1;
extern int step_M_P__isLeftRecursive2_s1(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry_s1 struct _Con_M_U_KeepSynthesizedMapEntry_s1
struct _Con_M_U_KeepSynthesizedMapEntry_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry_s1;
extern int step_M_U_KeepSynthesizedMapEntry_s1(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry2_s12 struct _Con_M_U_KeepSynthesizedEntry2_s12
struct _Con_M_U_KeepSynthesizedEntry2_s12 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry2_s12;
extern int step_M_U_KeepSynthesizedEntry2_s12(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols0-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols0 struct _Con_M_U_NonMainSymbols0
struct _Con_M_U_NonMainSymbols0 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols0;
extern int step_M_U_NonMainSymbols0(Sink,Term);

/* FUNCTION Prep-P-RegExpSubWord- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_RegExpSubWord struct _Con_M_P_RegExpSubWord
struct _Con_M_P_RegExpSubWord {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_RegExpSubWord;
extern int step_M_P_RegExpSubWord(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2$P-isLeftRecursive2$6$$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s6 struct _Con_M_P__isLeftRecursive2_s6
struct _Con_M_P__isLeftRecursive2_s6 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s6;
extern int step_M_P__isLeftRecursive2_s6(Sink,Term);

/* FUNCTION Prelude-StringStartsWithWhen-1$StringStartsWithWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringStartsWithWhen struct _Con_M_StringStartsWithWhen
struct _Con_M_StringStartsWithWhen {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringStartsWithWhen;
extern int step_M_StringStartsWithWhen(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s7 struct _Con_M_P__isLeftRecursive2_s7
struct _Con_M_P__isLeftRecursive2_s7 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s7;
extern int step_M_P__isLeftRecursive2_s7(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2 struct _Con_M_U_NonMainSymbols2
struct _Con_M_U_NonMainSymbols2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2;
extern int step_M_U_NonMainSymbols2(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols1 struct _Con_M_U_NonMainSymbols1
struct _Con_M_U_NonMainSymbols1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols1;
extern int step_M_U_NonMainSymbols1(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive2_s9 struct _Con_M_P__isLeftRecursive2_s9
struct _Con_M_P__isLeftRecursive2_s9 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive2_s9;
extern int step_M_P__isLeftRecursive2_s9(Sink,Term);

/* FUNCTION Cook-C-HashWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_HashWhen_s1 struct _Con_M_C_HashWhen_s1
struct _Con_M_C_HashWhen_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_HashWhen_s1;
extern int step_M_C_HashWhen_s1(Sink,Term);

/* FUNCTION Util-U-ParsedFormTag1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormTag1 struct _Con_M_U_ParsedFormTag1
struct _Con_M_U_ParsedFormTag1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormTag1;
extern int step_M_U_ParsedFormTag1(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s21 struct _Con_M_P_SubRepeat_s21
struct _Con_M_P_SubRepeat_s21 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s21;
extern int step_M_P_SubRepeat_s21(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep-many HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s23 struct _Con_M_P_SubRepeat_s23
struct _Con_M_P_SubRepeat_s23 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s23;
extern int step_M_P_SubRepeat_s23(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxFormConstruction-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxFormConstruction struct _Con_M_P_MetaJJ_Production_HxFormConstruction
struct _Con_M_P_MetaJJ_Production_HxFormConstruction {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxFormConstruction;
extern int step_M_P_MetaJJ_Production_HxFormConstruction(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep-maybe HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s22 struct _Con_M_P_SubRepeat_s22
struct _Con_M_P_SubRepeat_s22 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s22;
extern int step_M_P_SubRepeat_s22(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep-string-string HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s29 struct _Con_M_P_SubRepeat_s29
struct _Con_M_P_SubRepeat_s29 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s29;
extern int step_M_P_SubRepeat_s29(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s28 struct _Con_M_P_SubRepeat_s28
struct _Con_M_P_SubRepeat_s28 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s28;
extern int step_M_P_SubRepeat_s28(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep-some HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s25 struct _Con_M_P_SubRepeat_s25
struct _Con_M_P_SubRepeat_s25 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s25;
extern int step_M_P_SubRepeat_s25(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep-single HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s24 struct _Con_M_P_SubRepeat_s24
struct _Con_M_P_SubRepeat_s24 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s24;
extern int step_M_P_SubRepeat_s24(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-somesep-word- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s26 struct _Con_M_P_SubRepeat_s26
struct _Con_M_P_SubRepeat_s26 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s26;
extern int step_M_P_SubRepeat_s26(Sink,Term);

/* FUNCTION Util-U-then-Local-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_Local_s1 struct _Con_M_U__then_Local_s1
struct _Con_M_U__then_Local_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_Local_s1;
extern int step_M_U__then_Local_s1(Sink,Term);

/* FUNCTION Util-U-ScopeSortString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ScopeSortString struct _Con_M_U_ScopeSortString
struct _Con_M_U_ScopeSortString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ScopeSortString;
extern int step_M_U_ScopeSortString(Sink,Term);

/* FUNCTION Cook-C-ReabstractDefine-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ReabstractDefine_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_ReabstractDefine_s2;
extern int step_M_C_ReabstractDefine_s2(Sink,Term);

/* FUNCTION Cook-C-ReabstractDefine-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ReabstractDefine_s1 struct _Con_M_C_ReabstractDefine_s1
struct _Con_M_C_ReabstractDefine_s1 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_C_ReabstractDefine_s1;
extern int step_M_C_ReabstractDefine_s1(Sink,Term);

/* FUNCTION Prep-Prep3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Prep3_s1 struct _Con_M_Prep3_s1
struct _Con_M_Prep3_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Prep3_s1;
extern int step_M_Prep3_s1(Sink,Term);

/* FUNCTION Cook-C-Print-SymbolForm2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_SymbolForm2_s1 struct _Con_M_C_Print_SymbolForm2_s1
struct _Con_M_C_Print_SymbolForm2_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_SymbolForm2_s1;
extern int step_M_C_Print_SymbolForm2_s1(Sink,Term);

/* FUNCTION Cook-C-Print-SymbolForm2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_SymbolForm2_s3 struct _Con_M_C_Print_SymbolForm2_s3
struct _Con_M_C_Print_SymbolForm2_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_SymbolForm2_s3;
extern int step_M_C_Print_SymbolForm2_s3(Sink,Term);

/* FUNCTION Cook-C-Print-SymbolForm2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_SymbolForm2_s2 struct _Con_M_C_Print_SymbolForm2_s2
struct _Con_M_C_Print_SymbolForm2_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_SymbolForm2_s2;
extern int step_M_C_Print_SymbolForm2_s2(Sink,Term);

/* FUNCTION Util-U-MapAllConstructorsForSorts2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MapAllConstructorsForSorts2 struct _Con_M_U_MapAllConstructorsForSorts2
struct _Con_M_U_MapAllConstructorsForSorts2 {struct _Construction construction; Term sub[4]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_U_MapAllConstructorsForSorts2;
extern int step_M_U_MapAllConstructorsForSorts2(Sink,Term);

/* FUNCTION Util-U-ExtendDeclarationMap-1$U-ExtendDeclarationMap$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ExtendDeclarationMap struct _Con_M_U_ExtendDeclarationMap
struct _Con_M_U_ExtendDeclarationMap {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_ExtendDeclarationMap;
extern int step_M_U_ExtendDeclarationMap(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s13 struct _Con_M_U_MainSymbol2_s13
struct _Con_M_U_MainSymbol2_s13 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s13;
extern int step_M_U_MainSymbol2_s13(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s12 struct _Con_M_U_MainSymbol2_s12
struct _Con_M_U_MainSymbol2_s12 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s12;
extern int step_M_U_MainSymbol2_s12(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s11 struct _Con_M_U_MainSymbol2_s11
struct _Con_M_U_MainSymbol2_s11 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s11;
extern int step_M_U_MainSymbol2_s11(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s10 struct _Con_M_U_MainSymbol2_s10
struct _Con_M_U_MainSymbol2_s10 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s10;
extern int step_M_U_MainSymbol2_s10(Sink,Term);

/* FUNCTION Prelude-TextToString2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextToString2 struct _Con_M_TextToString2
struct _Con_M_TextToString2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextToString2;
extern int step_M_TextToString2(Sink,Term);

/* FUNCTION Prep-Lexical-done HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s14 struct _Con_M_P_Lexical2_s14
struct _Con_M_P_Lexical2_s14 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s14;
extern int step_M_P_Lexical2_s14(Sink,Term);

/* FUNCTION Prep-Lexical-space HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s12 struct _Con_M_P_Lexical2_s12
struct _Con_M_P_Lexical2_s12 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s12;
extern int step_M_P_Lexical2_s12(Sink,Term);

/* FUNCTION Prep-Lexical-token HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s13 struct _Con_M_P_Lexical2_s13
struct _Con_M_P_Lexical2_s13 {struct _Construction construction; Term sub[7]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s13;
extern int step_M_P_Lexical2_s13(Sink,Term);

/* FUNCTION Prep-Lexical-main-sort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s10 struct _Con_M_P_Lexical2_s10
struct _Con_M_P_Lexical2_s10 {struct _Construction construction; Term sub[9]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s10;
extern int step_M_P_Lexical2_s10(Sink,Term);

/* FUNCTION Prep-Lexical-sort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s11 struct _Con_M_P_Lexical2_s11
struct _Con_M_P_Lexical2_s11 {struct _Construction construction; Term sub[9]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s11;
extern int step_M_P_Lexical2_s11(Sink,Term);

/* FUNCTION Cook-C-AD-EmptyDescriptor-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AD_EmptyDescriptor struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_AD_EmptyDescriptor;
extern int step_M_C_AD_EmptyDescriptor(Sink,Term);

/* FUNCTION Util-U-MakeDM1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s1 struct _Con_M_U_MakeDM1_s1
struct _Con_M_U_MakeDM1_s1 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s1;
extern int step_M_U_MakeDM1_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifySortWhen-1$C-CrsxifySortWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifySortWhen struct _Con_M_C_CrsxifySortWhen
struct _Con_M_C_CrsxifySortWhen {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifySortWhen;
extern int step_M_C_CrsxifySortWhen(Sink,Term);

/* FUNCTION Prep-P-then-MetaSorts-ConstructionSortCaseText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__then_MetaSorts_ConstructionSortCaseText_s1 struct _Con_M_P__then_MetaSorts_ConstructionSortCaseText_s1
struct _Con_M_P__then_MetaSorts_ConstructionSortCaseText_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__then_MetaSorts_ConstructionSortCaseText_s1;
extern int step_M_P__then_MetaSorts_ConstructionSortCaseText_s1(Sink,Term);

/* FUNCTION Util-U-MakeDM1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s9 struct _Con_M_U_MakeDM1_s9
struct _Con_M_U_MakeDM1_s9 {struct _Construction construction; Term sub[10]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s9;
extern int step_M_U_MakeDM1_s9(Sink,Term);

/* FUNCTION Util-U-MakeDM1-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s8 struct _Con_M_U_MakeDM1_s8
struct _Con_M_U_MakeDM1_s8 {struct _Construction construction; Term sub[7]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s8;
extern int step_M_U_MakeDM1_s8(Sink,Term);

/* FUNCTION Util-U-MakeDM1-10 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s7 struct _Con_M_U_MakeDM1_s7
struct _Con_M_U_MakeDM1_s7 {struct _Construction construction; Term sub[7]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s7;
extern int step_M_U_MakeDM1_s7(Sink,Term);

/* FUNCTION Util-U-MakeDM1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s6 struct _Con_M_U_MakeDM1_s6
struct _Con_M_U_MakeDM1_s6 {struct _Construction construction; Term sub[8]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s6;
extern int step_M_U_MakeDM1_s6(Sink,Term);

/* FUNCTION Util-U-MakeDM1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s5 struct _Con_M_U_MakeDM1_s5
struct _Con_M_U_MakeDM1_s5 {struct _Construction construction; Term sub[9]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s5;
extern int step_M_U_MakeDM1_s5(Sink,Term);

/* FUNCTION Util-U-MakeDM1-1$U-MakeDM1$4$Hx_module HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s4 struct _Con_M_U_MakeDM1_s4
struct _Con_M_U_MakeDM1_s4 {struct _Construction construction; Term sub[7]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s4;
extern int step_M_U_MakeDM1_s4(Sink,Term);

/* FUNCTION Util-U-MakeDM1-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s3 struct _Con_M_U_MakeDM1_s3
struct _Con_M_U_MakeDM1_s3 {struct _Construction construction; Term sub[9]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s3;
extern int step_M_U_MakeDM1_s3(Sink,Term);

/* FUNCTION Util-U-MakeDM1-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s2 struct _Con_M_U_MakeDM1_s2
struct _Con_M_U_MakeDM1_s2 {struct _Construction construction; Term sub[7]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s2;
extern int step_M_U_MakeDM1_s2(Sink,Term);

/* FUNCTION Prelude-JoinMappedTextMaps2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JoinMappedTextMaps2_s2 struct _Con_M_JoinMappedTextMaps2_s2
struct _Con_M_JoinMappedTextMaps2_s2 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_JoinMappedTextMaps2_s2;
extern int step_M_JoinMappedTextMaps2_s2(Sink,Term);

/* FUNCTION Cook-C-ContainsVariable-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ContainsVariable_s1 struct _Con_M_C_ContainsVariable_s1
struct _Con_M_C_ContainsVariable_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ContainsVariable_s1;
extern int step_M_C_ContainsVariable_s1(Sink,Term);

/* FUNCTION Prelude-JoinMappedTextMaps2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_JoinMappedTextMaps2_s1 struct _Con_M_JoinMappedTextMaps2_s1
struct _Con_M_JoinMappedTextMaps2_s1 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_JoinMappedTextMaps2_s1;
extern int step_M_JoinMappedTextMaps2_s1(Sink,Term);

/* FUNCTION Cook-C-ContainsVariable-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ContainsVariable_s4 struct _Con_M_C_ContainsVariable_s4
struct _Con_M_C_ContainsVariable_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ContainsVariable_s4;
extern int step_M_C_ContainsVariable_s4(Sink,Term);

/* FUNCTION Cook-C-ContainsVariable-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ContainsVariable_s3 struct _Con_M_C_ContainsVariable_s3
struct _Con_M_C_ContainsVariable_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ContainsVariable_s3;
extern int step_M_C_ContainsVariable_s3(Sink,Term);

/* FUNCTION Cook-C-ContainsVariable-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ContainsVariable_s6 struct _Con_M_C_ContainsVariable_s6
struct _Con_M_C_ContainsVariable_s6 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ContainsVariable_s6;
extern int step_M_C_ContainsVariable_s6(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts1 struct _Con_M_C_ParsedForm_ScopeSorts1
struct _Con_M_C_ParsedForm_ScopeSorts1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts1;
extern int step_M_C_ParsedForm_ScopeSorts1(Sink,Term);

/* FUNCTION Cook-C-ContainsVariable-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ContainsVariable_s5 struct _Con_M_C_ContainsVariable_s5
struct _Con_M_C_ContainsVariable_s5 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ContainsVariable_s5;
extern int step_M_C_ContainsVariable_s5(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts2 struct _Con_M_C_ParsedForm_ScopeSorts2
struct _Con_M_C_ParsedForm_ScopeSorts2 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts2;
extern int step_M_C_ParsedForm_ScopeSorts2(Sink,Term);

/* FUNCTION Prelude-IfEmpty- HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfEmpty struct _Con_M_IfEmpty
struct _Con_M_IfEmpty {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfEmpty;
extern int step_M_IfEmpty(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s9 struct _Con_M_C_UnsynthesizeRule_s9
struct _Con_M_C_UnsynthesizeRule_s9 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s9;
extern int step_M_C_UnsynthesizeRule_s9(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBodies-1$P-MetaJJ-AttributeBodies$1$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBodies_s1 struct _Con_M_P_MetaJJ_AttributeBodies_s1
struct _Con_M_P_MetaJJ_AttributeBodies_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBodies_s1;
extern int step_M_P_MetaJJ_AttributeBodies_s1(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBodies-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBodies_s2 struct _Con_M_P_MetaJJ_AttributeBodies_s2
struct _Con_M_P_MetaJJ_AttributeBodies_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBodies_s2;
extern int step_M_P_MetaJJ_AttributeBodies_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s7 struct _Con_M_C_UnsynthesizeRule_s7
struct _Con_M_C_UnsynthesizeRule_s7 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s7;
extern int step_M_C_UnsynthesizeRule_s7(Sink,Term);

/* FUNCTION Cook-C-Text-close-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Text__close struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_Text__close;
extern int step_M_C_Text__close(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s8 struct _Con_M_C_UnsynthesizeRule_s8
struct _Con_M_C_UnsynthesizeRule_s8 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s8;
extern int step_M_C_UnsynthesizeRule_s8(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$C-UnsynthesizeRule$5$Hx_AttributeKind HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s5 struct _Con_M_C_UnsynthesizeRule_s5
struct _Con_M_C_UnsynthesizeRule_s5 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s5;
extern int step_M_C_UnsynthesizeRule_s5(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$C-UnsynthesizeRule$3$$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s3 struct _Con_M_C_UnsynthesizeRule_s3
struct _Con_M_C_UnsynthesizeRule_s3 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s3;
extern int step_M_C_UnsynthesizeRule_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$C-UnsynthesizeRule$4$Hx_ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s4 struct _Con_M_C_UnsynthesizeRule_s4
struct _Con_M_C_UnsynthesizeRule_s4 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s4;
extern int step_M_C_UnsynthesizeRule_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s1 struct _Con_M_C_UnsynthesizeRule_s1
struct _Con_M_C_UnsynthesizeRule_s1 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s1;
extern int step_M_C_UnsynthesizeRule_s1(Sink,Term);

/* FUNCTION Prep-P-Productions1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Productions1_s2 struct _Con_M_P_Productions1_s2
struct _Con_M_P_Productions1_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Productions1_s2;
extern int step_M_P_Productions1_s2(Sink,Term);

/* FUNCTION Prep-P-Productions1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Productions1_s1 struct _Con_M_P_Productions1_s1
struct _Con_M_P_Productions1_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Productions1_s1;
extern int step_M_P_Productions1_s1(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-maybe- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s1 struct _Con_M_P_SubRepeat_s1
struct _Con_M_P_SubRepeat_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s1;
extern int step_M_P_SubRepeat_s1(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-maybe-many HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s3 struct _Con_M_P_SubRepeat_s3
struct _Con_M_P_SubRepeat_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s3;
extern int step_M_P_SubRepeat_s3(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-maybe-maybe HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s2 struct _Con_M_P_SubRepeat_s2
struct _Con_M_P_SubRepeat_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s2;
extern int step_M_P_SubRepeat_s2(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-maybe-some HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s5 struct _Con_M_P_SubRepeat_s5
struct _Con_M_P_SubRepeat_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s5;
extern int step_M_P_SubRepeat_s5(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-maybe-single HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s4 struct _Con_M_P_SubRepeat_s4
struct _Con_M_P_SubRepeat_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s4;
extern int step_M_P_SubRepeat_s4(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-maybe-somesep HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s6 struct _Con_M_P_SubRepeat_s6
struct _Con_M_P_SubRepeat_s6 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s6;
extern int step_M_P_SubRepeat_s6(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-many- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s7 struct _Con_M_P_SubRepeat_s7
struct _Con_M_P_SubRepeat_s7 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s7;
extern int step_M_P_SubRepeat_s7(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited3_s2 struct _Con_M_U_MakeFunction2Inherited3_s2
struct _Con_M_U_MakeFunction2Inherited3_s2 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited3_s2;
extern int step_M_U_MakeFunction2Inherited3_s2(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-many-other HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s8 struct _Con_M_P_SubRepeat_s8
struct _Con_M_P_SubRepeat_s8 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s8;
extern int step_M_P_SubRepeat_s8(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited3-1$U-MakeFunction2Inherited3$1$DME_SORT HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited3_s1 struct _Con_M_U_MakeFunction2Inherited3_s1
struct _Con_M_U_MakeFunction2Inherited3_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited3_s1;
extern int step_M_U_MakeFunction2Inherited3_s1(Sink,Term);

/* FUNCTION Prep-P-SubRepeat-many-many HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat_s9 struct _Con_M_P_SubRepeat_s9
struct _Con_M_P_SubRepeat_s9 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat_s9;
extern int step_M_P_SubRepeat_s9(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s17 struct _Con_M_C_CrsxifyTerm_s17
struct _Con_M_C_CrsxifyTerm_s17 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s17;
extern int step_M_C_CrsxifyTerm_s17(Sink,Term);

/* FUNCTION Prep-P-AttributeCollection- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_AttributeCollection_s1 struct _Con_M_P_AttributeCollection_s1
struct _Con_M_P_AttributeCollection_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_AttributeCollection_s1;
extern int step_M_P_AttributeCollection_s1(Sink,Term);

/* FUNCTION Prep-P-AttributeCollection-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_AttributeCollection_s2 struct _Con_M_P_AttributeCollection_s2
struct _Con_M_P_AttributeCollection_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_AttributeCollection_s2;
extern int step_M_P_AttributeCollection_s2(Sink,Term);

/* FUNCTION Prep-P-AttributeCollection-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_AttributeCollection_s3 struct _Con_M_P_AttributeCollection_s3
struct _Con_M_P_AttributeCollection_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_AttributeCollection_s3;
extern int step_M_P_AttributeCollection_s3(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2_s10 struct _Con_M_C_Unsynthesize2_s10
struct _Con_M_C_Unsynthesize2_s10 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2_s10;
extern int step_M_C_Unsynthesize2_s10(Sink,Term);

/* FUNCTION Prelude-Less2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Less2 struct _Con_M_Less2
struct _Con_M_Less2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Less2;
extern int step_M_Less2(Sink,Term);

/* FUNCTION Util-U-SortRepeatString2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortRepeatString2_s1 struct _Con_M_U_SortRepeatString2_s1
struct _Con_M_U_SortRepeatString2_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortRepeatString2_s1;
extern int step_M_U_SortRepeatString2_s1(Sink,Term);

/* FUNCTION Util-U-SortRepeatString2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortRepeatString2_s2 struct _Con_M_U_SortRepeatString2_s2
struct _Con_M_U_SortRepeatString2_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortRepeatString2_s2;
extern int step_M_U_SortRepeatString2_s2(Sink,Term);

/* FUNCTION Util-U-SortRepeatString2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortRepeatString2_s3 struct _Con_M_U_SortRepeatString2_s3
struct _Con_M_U_SortRepeatString2_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortRepeatString2_s3;
extern int step_M_U_SortRepeatString2_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s12 struct _Con_M_C_CrsxifyTerm_s12
struct _Con_M_C_CrsxifyTerm_s12 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s12;
extern int step_M_C_CrsxifyTerm_s12(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-9$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s11 struct _Con_M_C_CrsxifyTerm_s11
struct _Con_M_C_CrsxifyTerm_s11 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s11;
extern int step_M_C_CrsxifyTerm_s11(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s10 struct _Con_M_C_CrsxifyTerm_s10
struct _Con_M_C_CrsxifyTerm_s10 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s10;
extern int step_M_C_CrsxifyTerm_s10(Sink,Term);

/* FUNCTION Prelude-Concat- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Concat struct _Con_M_Concat
struct _Con_M_Concat {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Concat;
extern int step_M_Concat(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-6$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s16 struct _Con_M_C_CrsxifyTerm_s16
struct _Con_M_C_CrsxifyTerm_s16 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s16;
extern int step_M_C_CrsxifyTerm_s16(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s14 struct _Con_M_C_CrsxifyTerm_s14
struct _Con_M_C_CrsxifyTerm_s14 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s14;
extern int step_M_C_CrsxifyTerm_s14(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-5$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s13 struct _Con_M_C_CrsxifyTerm_s13
struct _Con_M_C_CrsxifyTerm_s13 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s13;
extern int step_M_C_CrsxifyTerm_s13(Sink,Term);

/* FUNCTION Util-U-RulePriorityString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RulePriorityString_s3 struct _Con_M_U_RulePriorityString_s3
struct _Con_M_U_RulePriorityString_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RulePriorityString_s3;
extern int step_M_U_RulePriorityString_s3(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish2 struct _Con_M_U_MakeDM_Finish2
struct _Con_M_U_MakeDM_Finish2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish2;
extern int step_M_U_MakeDM_Finish2(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish4-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish4 struct _Con_M_U_MakeDM_Finish4
struct _Con_M_U_MakeDM_Finish4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish4;
extern int step_M_U_MakeDM_Finish4(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish6-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish6 struct _Con_M_U_MakeDM_Finish6
struct _Con_M_U_MakeDM_Finish6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish6;
extern int step_M_U_MakeDM_Finish6(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes6-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes6_s1 struct _Con_M_C_CrsxifyAttributes6_s1
struct _Con_M_C_CrsxifyAttributes6_s1 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes6_s1;
extern int step_M_C_CrsxifyAttributes6_s1(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish7-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish7 struct _Con_M_U_MakeDM_Finish7
struct _Con_M_U_MakeDM_Finish7 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish7;
extern int step_M_U_MakeDM_Finish7(Sink,Term);

/* FUNCTION Cook-C-Text-unclose-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Text__unclose struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_Text__unclose;
extern int step_M_C_Text__unclose(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3_s8 struct _Con_M_C_GetConstructorScopeSorts3_s8
struct _Con_M_C_GetConstructorScopeSorts3_s8 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3_s8;
extern int step_M_C_GetConstructorScopeSorts3_s8(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3_s9 struct _Con_M_C_GetConstructorScopeSorts3_s9
struct _Con_M_C_GetConstructorScopeSorts3_s9 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3_s9;
extern int step_M_C_GetConstructorScopeSorts3_s9(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3_s6 struct _Con_M_C_GetConstructorScopeSorts3_s6
struct _Con_M_C_GetConstructorScopeSorts3_s6 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3_s6;
extern int step_M_C_GetConstructorScopeSorts3_s6(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3_s7 struct _Con_M_C_GetConstructorScopeSorts3_s7
struct _Con_M_C_GetConstructorScopeSorts3_s7 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3_s7;
extern int step_M_C_GetConstructorScopeSorts3_s7(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3_s4 struct _Con_M_C_GetConstructorScopeSorts3_s4
struct _Con_M_C_GetConstructorScopeSorts3_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3_s4;
extern int step_M_C_GetConstructorScopeSorts3_s4(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3_s5 struct _Con_M_C_GetConstructorScopeSorts3_s5
struct _Con_M_C_GetConstructorScopeSorts3_s5 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3_s5;
extern int step_M_C_GetConstructorScopeSorts3_s5(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3-2$C-GetConstructorScopeSorts3$2$D_ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3_s2 struct _Con_M_C_GetConstructorScopeSorts3_s2
struct _Con_M_C_GetConstructorScopeSorts3_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3_s2;
extern int step_M_C_GetConstructorScopeSorts3_s2(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3_s3 struct _Con_M_C_GetConstructorScopeSorts3_s3
struct _Con_M_C_GetConstructorScopeSorts3_s3 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3_s3;
extern int step_M_C_GetConstructorScopeSorts3_s3(Sink,Term);

/* FUNCTION Util-U-RulePriorityString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RulePriorityString_s2 struct _Con_M_U_RulePriorityString_s2
struct _Con_M_U_RulePriorityString_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RulePriorityString_s2;
extern int step_M_U_RulePriorityString_s2(Sink,Term);

/* FUNCTION Util-U-RulePriorityString-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RulePriorityString_s1 struct _Con_M_U_RulePriorityString_s1
struct _Con_M_U_RulePriorityString_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RulePriorityString_s1;
extern int step_M_U_RulePriorityString_s1(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3_s1 struct _Con_M_C_GetConstructorScopeSorts3_s1
struct _Con_M_C_GetConstructorScopeSorts3_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3_s1;
extern int step_M_C_GetConstructorScopeSorts3_s1(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s10 struct _Con_M_U_MakeSort2UserConstructors3_s10
struct _Con_M_U_MakeSort2UserConstructors3_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s10;
extern int step_M_U_MakeSort2UserConstructors3_s10(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors3_s11 struct _Con_M_U_MakeSort2UserConstructors3_s11
struct _Con_M_U_MakeSort2UserConstructors3_s11 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors3_s11;
extern int step_M_U_MakeSort2UserConstructors3_s11(Sink,Term);

/* FUNCTION Util-U-GetAttributeValueSort-1$U-GetAttributeValueSort HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetAttributeValueSort struct _Con_M_U_GetAttributeValueSort
struct _Con_M_U_GetAttributeValueSort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetAttributeValueSort;
extern int step_M_U_GetAttributeValueSort(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish0-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish0 struct _Con_M_U_MakeDM_Finish0
struct _Con_M_U_MakeDM_Finish0 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish0;
extern int step_M_U_MakeDM_Finish0(Sink,Term);

/* FUNCTION Prelude-AddName2Names-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AddName2Names_s1 struct _Con_M_AddName2Names_s1
struct _Con_M_AddName2Names_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AddName2Names_s1;
extern int step_M_AddName2Names_s1(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts2-4$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts2_s6 struct _Con_M_C_ParsedForm_ScopeSorts2_s6
struct _Con_M_C_ParsedForm_ScopeSorts2_s6 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts2_s6;
extern int step_M_C_ParsedForm_ScopeSorts2_s6(Sink,Term);

/* FUNCTION Util-U-GetAttributeKeySort-1$U-GetAttributeKeySort HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetAttributeKeySort struct _Con_M_U_GetAttributeKeySort
struct _Con_M_U_GetAttributeKeySort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetAttributeKeySort;
extern int step_M_U_GetAttributeKeySort(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts2_s8 struct _Con_M_C_ParsedForm_ScopeSorts2_s8
struct _Con_M_C_ParsedForm_ScopeSorts2_s8 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts2_s8;
extern int step_M_C_ParsedForm_ScopeSorts2_s8(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts2-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts2_s7 struct _Con_M_C_ParsedForm_ScopeSorts2_s7
struct _Con_M_C_ParsedForm_ScopeSorts2_s7 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts2_s7;
extern int step_M_C_ParsedForm_ScopeSorts2_s7(Sink,Term);

/* FUNCTION Cook-C-SortMap-GetMetaApplicationSubsorts-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap_GetMetaApplicationSubsorts_s1 struct _Con_M_C_SortMap_GetMetaApplicationSubsorts_s1
struct _Con_M_C_SortMap_GetMetaApplicationSubsorts_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap_GetMetaApplicationSubsorts_s1;
extern int step_M_C_SortMap_GetMetaApplicationSubsorts_s1(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts2_s2 struct _Con_M_C_ParsedForm_ScopeSorts2_s2
struct _Con_M_C_ParsedForm_ScopeSorts2_s2 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts2_s2;
extern int step_M_C_ParsedForm_ScopeSorts2_s2(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts2-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts2_s1 struct _Con_M_C_ParsedForm_ScopeSorts2_s1
struct _Con_M_C_ParsedForm_ScopeSorts2_s1 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts2_s1;
extern int step_M_C_ParsedForm_ScopeSorts2_s1(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts2_s4 struct _Con_M_C_ParsedForm_ScopeSorts2_s4
struct _Con_M_C_ParsedForm_ScopeSorts2_s4 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts2_s4;
extern int step_M_C_ParsedForm_ScopeSorts2_s4(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-ScopeSorts2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_ScopeSorts2_s3 struct _Con_M_C_ParsedForm_ScopeSorts2_s3
struct _Con_M_C_ParsedForm_ScopeSorts2_s3 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_ScopeSorts2_s3;
extern int step_M_C_ParsedForm_ScopeSorts2_s3(Sink,Term);

/* FUNCTION Util-U-MakeDM1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s13 struct _Con_M_U_MakeDM1_s13
struct _Con_M_U_MakeDM1_s13 {struct _Construction construction; Term sub[8]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s13;
extern int step_M_U_MakeDM1_s13(Sink,Term);

/* FUNCTION Util-U-MakeDM1-11 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s14 struct _Con_M_U_MakeDM1_s14
struct _Con_M_U_MakeDM1_s14 {struct _Construction construction; Term sub[4]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s14;
extern int step_M_U_MakeDM1_s14(Sink,Term);

/* FUNCTION Util-U-SortRepeatString2-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortRepeatString2_s6 struct _Con_M_U_SortRepeatString2_s6
struct _Con_M_U_SortRepeatString2_s6 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortRepeatString2_s6;
extern int step_M_U_SortRepeatString2_s6(Sink,Term);

/* FUNCTION Util-U-MakeDM1-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s10 struct _Con_M_U_MakeDM1_s10
struct _Con_M_U_MakeDM1_s10 {struct _Construction construction; Term sub[10]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s10;
extern int step_M_U_MakeDM1_s10(Sink,Term);

/* FUNCTION Util-U-SortRepeatString2-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortRepeatString2_s5 struct _Con_M_U_SortRepeatString2_s5
struct _Con_M_U_SortRepeatString2_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortRepeatString2_s5;
extern int step_M_U_SortRepeatString2_s5(Sink,Term);

/* FUNCTION Util-U-MakeDM1-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s11 struct _Con_M_U_MakeDM1_s11
struct _Con_M_U_MakeDM1_s11 {struct _Construction construction; Term sub[10]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s11;
extern int step_M_U_MakeDM1_s11(Sink,Term);

/* FUNCTION Util-U-SortRepeatString2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortRepeatString2_s4 struct _Con_M_U_SortRepeatString2_s4
struct _Con_M_U_SortRepeatString2_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortRepeatString2_s4;
extern int step_M_U_SortRepeatString2_s4(Sink,Term);

/* FUNCTION Util-U-MakeDM1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM1_s12 struct _Con_M_U_MakeDM1_s12
struct _Con_M_U_MakeDM1_s12 {struct _Construction construction; Term sub[7]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM1_s12;
extern int step_M_U_MakeDM1_s12(Sink,Term);

/* FUNCTION Util-U-FormLess-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormLess_s1 struct _Con_M_U_FormLess_s1
struct _Con_M_U_FormLess_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormLess_s1;
extern int step_M_U_FormLess_s1(Sink,Term);

/* FUNCTION Util-U-FormLess-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormLess_s5 struct _Con_M_U_FormLess_s5
struct _Con_M_U_FormLess_s5 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormLess_s5;
extern int step_M_U_FormLess_s5(Sink,Term);

/* FUNCTION Util-U-FormLess- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormLess_s3 struct _Con_M_U_FormLess_s3
struct _Con_M_U_FormLess_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormLess_s3;
extern int step_M_U_FormLess_s3(Sink,Term);

/* FUNCTION Util-U-FormLess-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormLess_s4 struct _Con_M_U_FormLess_s4
struct _Con_M_U_FormLess_s4 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormLess_s4;
extern int step_M_U_FormLess_s4(Sink,Term);

/* FUNCTION MakeRun-MakeRun-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MakeRun struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_MakeRun;
extern int step_M_MakeRun(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes_s6 struct _Con_M_C_ExtendSortMap_Scopes_s6
struct _Con_M_C_ExtendSortMap_Scopes_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes_s6;
extern int step_M_C_ExtendSortMap_Scopes_s6(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes_s5 struct _Con_M_C_ExtendSortMap_Scopes_s5
struct _Con_M_C_ExtendSortMap_Scopes_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes_s5;
extern int step_M_C_ExtendSortMap_Scopes_s5(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes_s4 struct _Con_M_C_ExtendSortMap_Scopes_s4
struct _Con_M_C_ExtendSortMap_Scopes_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes_s4;
extern int step_M_C_ExtendSortMap_Scopes_s4(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes_s3 struct _Con_M_C_ExtendSortMap_Scopes_s3
struct _Con_M_C_ExtendSortMap_Scopes_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes_s3;
extern int step_M_C_ExtendSortMap_Scopes_s3(Sink,Term);

/* FUNCTION Prelude-MapTextConcatWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextConcatWhen_s3 struct _Con_M_MapTextConcatWhen_s3
struct _Con_M_MapTextConcatWhen_s3 {struct _Construction construction; Term sub[1]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapTextConcatWhen_s3;
extern int step_M_MapTextConcatWhen_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue_s12 struct _Con_M_C_UnsynthesizeAttributeValue_s12
struct _Con_M_C_UnsynthesizeAttributeValue_s12 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue_s12;
extern int step_M_C_UnsynthesizeAttributeValue_s12(Sink,Term);

/* FUNCTION Prelude-MapTextConcatWhen- HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextConcatWhen_s1 struct _Con_M_MapTextConcatWhen_s1
struct _Con_M_MapTextConcatWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapTextConcatWhen_s1;
extern int step_M_MapTextConcatWhen_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue-3$C-UnsynthesizeAttributeValue$11$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue_s11 struct _Con_M_C_UnsynthesizeAttributeValue_s11
struct _Con_M_C_UnsynthesizeAttributeValue_s11 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue_s11;
extern int step_M_C_UnsynthesizeAttributeValue_s11(Sink,Term);

/* FUNCTION Prelude-MapTextConcatWhen-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextConcatWhen_s2 struct _Con_M_MapTextConcatWhen_s2
struct _Con_M_MapTextConcatWhen_s2 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapTextConcatWhen_s2;
extern int step_M_MapTextConcatWhen_s2(Sink,Term);

/* FUNCTION Util-U-InsertDefine1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine1_s1 struct _Con_M_U_InsertDefine1_s1
struct _Con_M_U_InsertDefine1_s1 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine1_s1;
extern int step_M_U_InsertDefine1_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue-1$C-UnsynthesizeAttributeValue$14$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue_s14 struct _Con_M_C_UnsynthesizeAttributeValue_s14
struct _Con_M_C_UnsynthesizeAttributeValue_s14 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue_s14;
extern int step_M_C_UnsynthesizeAttributeValue_s14(Sink,Term);

/* FUNCTION Util-U-InsertDefine1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine1_s2 struct _Con_M_U_InsertDefine1_s2
struct _Con_M_U_InsertDefine1_s2 {struct _Construction construction; Term sub[11]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine1_s2;
extern int step_M_U_InsertDefine1_s2(Sink,Term);

/* FUNCTION Text-AsText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AsText struct _Con_M_AsText
struct _Con_M_AsText {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AsText;
extern int step_M_AsText(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue_s15 struct _Con_M_C_UnsynthesizeAttributeValue_s15
struct _Con_M_C_UnsynthesizeAttributeValue_s15 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue_s15;
extern int step_M_C_UnsynthesizeAttributeValue_s15(Sink,Term);

/* FUNCTION Prep-P-ProduceBody-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody_s4 struct _Con_M_P_ProduceBody_s4
struct _Con_M_P_ProduceBody_s4 {struct _Construction construction; Term sub[8]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody_s4;
extern int step_M_P_ProduceBody_s4(Sink,Term);

/* FUNCTION Prep-P-ProduceBody-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody_s3 struct _Con_M_P_ProduceBody_s3
struct _Con_M_P_ProduceBody_s3 {struct _Construction construction; Term sub[11]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody_s3;
extern int step_M_P_ProduceBody_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes3_s2 struct _Con_M_C_UnsynthesizeAttributes3_s2
struct _Con_M_C_UnsynthesizeAttributes3_s2 {struct _Construction construction; Term sub[11]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes3_s2;
extern int step_M_C_UnsynthesizeAttributes3_s2(Sink,Term);

/* FUNCTION Prep-P-ProduceBody-2$P-ProduceBody$2$PFK HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody_s2 struct _Con_M_P_ProduceBody_s2
struct _Con_M_P_ProduceBody_s2 {struct _Construction construction; Term sub[10]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody_s2;
extern int step_M_P_ProduceBody_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes3-1$C-UnsynthesizeAttributes3$1$LOC HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes3_s1 struct _Con_M_C_UnsynthesizeAttributes3_s1
struct _Con_M_C_UnsynthesizeAttributes3_s1 {struct _Construction construction; Term sub[11]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes3_s1;
extern int step_M_C_UnsynthesizeAttributes3_s1(Sink,Term);

/* FUNCTION Prep-P-ProduceBody- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody_s1 struct _Con_M_P_ProduceBody_s1
struct _Con_M_P_ProduceBody_s1 {struct _Construction construction; Term sub[9]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody_s1;
extern int step_M_P_ProduceBody_s1(Sink,Term);

/* FUNCTION Util-U-then-SortHasUserHx-1$U-then-SortHasUserHx$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortHasUserHx struct _Con_M_U__then_SortHasUserHx
struct _Con_M_U__then_SortHasUserHx {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortHasUserHx;
extern int step_M_U__then_SortHasUserHx(Sink,Term);

/* FUNCTION Prelude-NewLine-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_NewLine struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_NewLine;
extern int step_M_NewLine(Sink,Term);

/* FUNCTION Cook-Cook4-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Cook4 struct _Con_M_Cook4
struct _Con_M_Cook4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Cook4;
extern int step_M_Cook4(Sink,Term);

/* FUNCTION Util-U-TestIfToken1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1_s3 struct _Con_M_U_TestIfToken1_s3
struct _Con_M_U_TestIfToken1_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1_s3;
extern int step_M_U_TestIfToken1_s3(Sink,Term);

/* FUNCTION Cook-Cook2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Cook2 struct _Con_M_Cook2
struct _Con_M_Cook2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Cook2;
extern int step_M_Cook2(Sink,Term);

/* FUNCTION Util-U-TestIfToken1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1_s4 struct _Con_M_U_TestIfToken1_s4
struct _Con_M_U_TestIfToken1_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1_s4;
extern int step_M_U_TestIfToken1_s4(Sink,Term);

/* FUNCTION Cook-Cook3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Cook3 struct _Con_M_Cook3
struct _Con_M_Cook3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Cook3;
extern int step_M_Cook3(Sink,Term);

/* FUNCTION Util-U-TestIfToken1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1_s1 struct _Con_M_U_TestIfToken1_s1
struct _Con_M_U_TestIfToken1_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1_s1;
extern int step_M_U_TestIfToken1_s1(Sink,Term);

/* FUNCTION Util-U-TestIfToken1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1_s2 struct _Con_M_U_TestIfToken1_s2
struct _Con_M_U_TestIfToken1_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1_s2;
extern int step_M_U_TestIfToken1_s2(Sink,Term);

/* FUNCTION Cook-Cook1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Cook1 struct _Con_M_Cook1
struct _Con_M_Cook1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Cook1;
extern int step_M_Cook1(Sink,Term);

/* FUNCTION Prep-P-RegExpSubNameText- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_RegExpSubNameText_s1 struct _Con_M_P_RegExpSubNameText_s1
struct _Con_M_P_RegExpSubNameText_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_RegExpSubNameText_s1;
extern int step_M_P_RegExpSubNameText_s1(Sink,Term);

/* FUNCTION Util-U-MapAllConstructorSorts-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MapAllConstructorSorts struct _Con_M_U_MapAllConstructorSorts
struct _Con_M_U_MapAllConstructorSorts {struct _Construction construction; Term sub[1]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_U_MapAllConstructorSorts;
extern int step_M_U_MapAllConstructorSorts(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpUnit-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpUnit_s7 struct _Con_M_P_InlineRegExpUnit_s7
struct _Con_M_P_InlineRegExpUnit_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpUnit_s7;
extern int step_M_P_InlineRegExpUnit_s7(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols;
extern int step_M_U_NonMainSyntacticSymbols(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpUnit-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpUnit_s5 struct _Con_M_P_InlineRegExpUnit_s5
struct _Con_M_P_InlineRegExpUnit_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpUnit_s5;
extern int step_M_P_InlineRegExpUnit_s5(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpUnit-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpUnit_s6 struct _Con_M_P_InlineRegExpUnit_s6
struct _Con_M_P_InlineRegExpUnit_s6 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpUnit_s6;
extern int step_M_P_InlineRegExpUnit_s6(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpUnit-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpUnit_s3 struct _Con_M_P_InlineRegExpUnit_s3
struct _Con_M_P_InlineRegExpUnit_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpUnit_s3;
extern int step_M_P_InlineRegExpUnit_s3(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2_s2 struct _Con_M_U_MakeAttribute2_s2
struct _Con_M_U_MakeAttribute2_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2_s2;
extern int step_M_U_MakeAttribute2_s2(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpUnit-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpUnit_s4 struct _Con_M_P_InlineRegExpUnit_s4
struct _Con_M_P_InlineRegExpUnit_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpUnit_s4;
extern int step_M_P_InlineRegExpUnit_s4(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2-1$U-MakeAttribute2$1$N2N HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2_s1 struct _Con_M_U_MakeAttribute2_s1
struct _Con_M_U_MakeAttribute2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2_s1;
extern int step_M_U_MakeAttribute2_s1(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpUnit- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpUnit_s2 struct _Con_M_P_InlineRegExpUnit_s2
struct _Con_M_P_InlineRegExpUnit_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpUnit_s2;
extern int step_M_P_InlineRegExpUnit_s2(Sink,Term);

/* FUNCTION Util-U-TestIfToken1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1_s8 struct _Con_M_U_TestIfToken1_s8
struct _Con_M_U_TestIfToken1_s8 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1_s8;
extern int step_M_U_TestIfToken1_s8(Sink,Term);

/* FUNCTION Util-U-TestIfToken1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1_s7 struct _Con_M_U_TestIfToken1_s7
struct _Con_M_U_TestIfToken1_s7 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1_s7;
extern int step_M_U_TestIfToken1_s7(Sink,Term);

/* FUNCTION Util-U-TestIfToken1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1_s6 struct _Con_M_U_TestIfToken1_s6
struct _Con_M_U_TestIfToken1_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1_s6;
extern int step_M_U_TestIfToken1_s6(Sink,Term);

/* FUNCTION Util-U-TestIfToken1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1_s5 struct _Con_M_U_TestIfToken1_s5
struct _Con_M_U_TestIfToken1_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1_s5;
extern int step_M_U_TestIfToken1_s5(Sink,Term);

/* FUNCTION Util-U-TestIfToken1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfToken1_s9 struct _Con_M_U_TestIfToken1_s9
struct _Con_M_U_TestIfToken1_s9 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfToken1_s9;
extern int step_M_U_TestIfToken1_s9(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s8 struct _Con_M_P_MetaJJ_AttributeBody_s8
struct _Con_M_P_MetaJJ_AttributeBody_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s8;
extern int step_M_P_MetaJJ_AttributeBody_s8(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s7 struct _Con_M_P_MetaJJ_AttributeBody_s7
struct _Con_M_P_MetaJJ_AttributeBody_s7 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s7;
extern int step_M_P_MetaJJ_AttributeBody_s7(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s6 struct _Con_M_P_MetaJJ_AttributeBody_s6
struct _Con_M_P_MetaJJ_AttributeBody_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s6;
extern int step_M_P_MetaJJ_AttributeBody_s6(Sink,Term);

/* FUNCTION Prelude-RemoveName1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_RemoveName1 struct _Con_M_RemoveName1
struct _Con_M_RemoveName1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_RemoveName1;
extern int step_M_RemoveName1(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s5 struct _Con_M_P_MetaJJ_AttributeBody_s5
struct _Con_M_P_MetaJJ_AttributeBody_s5 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s5;
extern int step_M_P_MetaJJ_AttributeBody_s5(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s4 struct _Con_M_P_MetaJJ_AttributeBody_s4
struct _Con_M_P_MetaJJ_AttributeBody_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s4;
extern int step_M_P_MetaJJ_AttributeBody_s4(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s3 struct _Con_M_P_MetaJJ_AttributeBody_s3
struct _Con_M_P_MetaJJ_AttributeBody_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s3;
extern int step_M_P_MetaJJ_AttributeBody_s3(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s2 struct _Con_M_P_MetaJJ_AttributeBody_s2
struct _Con_M_P_MetaJJ_AttributeBody_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s2;
extern int step_M_P_MetaJJ_AttributeBody_s2(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s1 struct _Con_M_P_MetaJJ_AttributeBody_s1
struct _Con_M_P_MetaJJ_AttributeBody_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s1;
extern int step_M_P_MetaJJ_AttributeBody_s1(Sink,Term);

/* FUNCTION Prelude-Map- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Map_s1 struct _Con_M_Map_s1
struct _Con_M_Map_s1 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_Map_s1;
extern int step_M_Map_s1(Sink,Term);

/* FUNCTION Prelude-Map-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Map_s3 struct _Con_M_Map_s3
struct _Con_M_Map_s3 {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_Map_s3;
extern int step_M_Map_s3(Sink,Term);

/* FUNCTION Prelude-Map-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Map_s2 struct _Con_M_Map_s2
struct _Con_M_Map_s2 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_Map_s2;
extern int step_M_Map_s2(Sink,Term);

/* FUNCTION Util-U-AttributeKindString- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AttributeKindString struct _Con_M_U_AttributeKindString
struct _Con_M_U_AttributeKindString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AttributeKindString;
extern int step_M_U_AttributeKindString(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeSimpleValue-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeSimpleValue_s1 struct _Con_M_C_CrsxifyAttributeSimpleValue_s1
struct _Con_M_C_CrsxifyAttributeSimpleValue_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeSimpleValue_s1;
extern int step_M_C_CrsxifyAttributeSimpleValue_s1(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBody-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBody_s9 struct _Con_M_P_MetaJJ_AttributeBody_s9
struct _Con_M_P_MetaJJ_AttributeBody_s9 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBody_s9;
extern int step_M_P_MetaJJ_AttributeBody_s9(Sink,Term);

/* FUNCTION Prep-P-RegExpSubNameText-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_RegExpSubNameText_s3 struct _Con_M_P_RegExpSubNameText_s3
struct _Con_M_P_RegExpSubNameText_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_RegExpSubNameText_s3;
extern int step_M_P_RegExpSubNameText_s3(Sink,Term);

/* FUNCTION Prep-P-RegExpSubNameText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_RegExpSubNameText_s2 struct _Con_M_P_RegExpSubNameText_s2
struct _Con_M_P_RegExpSubNameText_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_RegExpSubNameText_s2;
extern int step_M_P_RegExpSubNameText_s2(Sink,Term);

/* FUNCTION Util-U-then-Finish7-1$U-then-Finish7$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_Finish7 struct _Con_M_U__then_Finish7
struct _Con_M_U__then_Finish7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_Finish7;
extern int step_M_U__then_Finish7(Sink,Term);

/* FUNCTION Util-U-InsertDefine-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine struct _Con_M_U_InsertDefine
struct _Con_M_U_InsertDefine {struct _Construction construction; Term sub[5]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine;
extern int step_M_U_InsertDefine(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry1 struct _Con_M_U_KeepInheritedMapEntry1
struct _Con_M_U_KeepInheritedMapEntry1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry1;
extern int step_M_U_KeepInheritedMapEntry1(Sink,Term);

/* FUNCTION Util-U-KeepInheritedMapEntry2-2$U-KeepInheritedMapEntry2$DME_ HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedMapEntry2 struct _Con_M_U_KeepInheritedMapEntry2
struct _Con_M_U_KeepInheritedMapEntry2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedMapEntry2;
extern int step_M_U_KeepInheritedMapEntry2(Sink,Term);

/* FUNCTION Prep-JJ-Construction-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JJ_Construction struct _Con_M_JJ_Construction
struct _Con_M_JJ_Construction {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JJ_Construction;
extern int step_M_JJ_Construction(Sink,Term);

/* FUNCTION Util-U-LinkDefine-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_LinkDefine struct _Con_M_U_LinkDefine
struct _Con_M_U_LinkDefine {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_LinkDefine;
extern int step_M_U_LinkDefine(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Scopes-2$C-ExtendSortMap-Scopes$1$Hx_Scope HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Scopes_s1 struct _Con_M_C_ExtendSortMap_Scopes_s1
struct _Con_M_C_ExtendSortMap_Scopes_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Scopes_s1;
extern int step_M_C_ExtendSortMap_Scopes_s1(Sink,Term);

/* FUNCTION Prelude-Tl-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Tl_s1 struct _Con_M_Tl_s1
struct _Con_M_Tl_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Tl_s1;
extern int step_M_Tl_s1(Sink,Term);

/* FUNCTION Prelude-Tl-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Tl_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Tl_s2;
extern int step_M_Tl_s2(Sink,Term);

/* FUNCTION Util-Resolve-Fragment HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s6 struct _Con_M_U_ResolveImports_s6
struct _Con_M_U_ResolveImports_s6 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s6;
extern int step_M_U_ResolveImports_s6(Sink,Term);

/* FUNCTION Util-Resolve-Import HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s7 struct _Con_M_U_ResolveImports_s7
struct _Con_M_U_ResolveImports_s7 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s7;
extern int step_M_U_ResolveImports_s7(Sink,Term);

/* FUNCTION Util-ResolveNesting HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s8 struct _Con_M_U_ResolveImports_s8
struct _Con_M_U_ResolveImports_s8 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s8;
extern int step_M_U_ResolveImports_s8(Sink,Term);

/* FUNCTION Util-ResolveRule HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s9 struct _Con_M_U_ResolveImports_s9
struct _Con_M_U_ResolveImports_s9 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s9;
extern int step_M_U_ResolveImports_s9(Sink,Term);

/* FUNCTION Util-Resolve-NakedAlternative HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s2 struct _Con_M_U_ResolveImports_s2
struct _Con_M_U_ResolveImports_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s2;
extern int step_M_U_ResolveImports_s2(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4_s3 struct _Con_M_U_MakeConstructor2Sort4_s3
struct _Con_M_U_MakeConstructor2Sort4_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4_s3;
extern int step_M_U_MakeConstructor2Sort4_s3(Sink,Term);

/* FUNCTION Util-U-then-TestIfToken-1$U-then-TestIfToken$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_TestIfToken struct _Con_M_U__then_TestIfToken
struct _Con_M_U__then_TestIfToken {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_TestIfToken;
extern int step_M_U__then_TestIfToken(Sink,Term);

/* FUNCTION Util-Resolve-Attribute HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s3 struct _Con_M_U_ResolveImports_s3
struct _Con_M_U_ResolveImports_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s3;
extern int step_M_U_ResolveImports_s3(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4_s2 struct _Con_M_U_MakeConstructor2Sort4_s2
struct _Con_M_U_MakeConstructor2Sort4_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4_s2;
extern int step_M_U_MakeConstructor2Sort4_s2(Sink,Term);

/* FUNCTION Util-Resolve-Module$U-ResolveImports$4$Hx_module HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s4 struct _Con_M_U_ResolveImports_s4
struct _Con_M_U_ResolveImports_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s4;
extern int step_M_U_ResolveImports_s4(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort4- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort4_s1 struct _Con_M_U_MakeConstructor2Sort4_s1
struct _Con_M_U_MakeConstructor2Sort4_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort4_s1;
extern int step_M_U_MakeConstructor2Sort4_s1(Sink,Term);

/* FUNCTION Util-Resolve-Module HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s5 struct _Con_M_U_ResolveImports_s5
struct _Con_M_U_ResolveImports_s5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s5;
extern int step_M_U_ResolveImports_s5(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_9-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x9 struct _Con_M_C_UnravelScope_x9
struct _Con_M_C_UnravelScope_x9 {struct _Construction construction; Term sub[1]; Variable binder[9];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x9;
extern int step_M_C_UnravelScope_x9(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_8-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x8 struct _Con_M_C_UnravelScope_x8
struct _Con_M_C_UnravelScope_x8 {struct _Construction construction; Term sub[1]; Variable binder[8];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x8;
extern int step_M_C_UnravelScope_x8(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_7-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x7 struct _Con_M_C_UnravelScope_x7
struct _Con_M_C_UnravelScope_x7 {struct _Construction construction; Term sub[1]; Variable binder[7];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x7;
extern int step_M_C_UnravelScope_x7(Sink,Term);

/* FUNCTION Util-Resolve HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s1 struct _Con_M_U_ResolveImports_s1
struct _Con_M_U_ResolveImports_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s1;
extern int step_M_U_ResolveImports_s1(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_6-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x6 struct _Con_M_C_UnravelScope_x6
struct _Con_M_C_UnravelScope_x6 {struct _Construction construction; Term sub[1]; Variable binder[6];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x6;
extern int step_M_C_UnravelScope_x6(Sink,Term);

/* FUNCTION Util-U-TestIfSort1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1_s3 struct _Con_M_U_TestIfSort1_s3
struct _Con_M_U_TestIfSort1_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1_s3;
extern int step_M_U_TestIfSort1_s3(Sink,Term);

/* FUNCTION Prep-P-ProduceBody0- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody0_s1 struct _Con_M_P_ProduceBody0_s1
struct _Con_M_P_ProduceBody0_s1 {struct _Construction construction; Term sub[9]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody0_s1;
extern int step_M_P_ProduceBody0_s1(Sink,Term);

/* FUNCTION Util-U-TestIfSort1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1_s2 struct _Con_M_U_TestIfSort1_s2
struct _Con_M_U_TestIfSort1_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1_s2;
extern int step_M_U_TestIfSort1_s2(Sink,Term);

/* FUNCTION Prep-P-ProduceBody0-2$P-ProduceBody0$2$PFK HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody0_s2 struct _Con_M_P_ProduceBody0_s2
struct _Con_M_P_ProduceBody0_s2 {struct _Construction construction; Term sub[10]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody0_s2;
extern int step_M_P_ProduceBody0_s2(Sink,Term);

/* FUNCTION Util-U-TestIfSort1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1_s1 struct _Con_M_U_TestIfSort1_s1
struct _Con_M_U_TestIfSort1_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1_s1;
extern int step_M_U_TestIfSort1_s1(Sink,Term);

/* FUNCTION Prep-P-ProduceBody0-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody0_s3 struct _Con_M_P_ProduceBody0_s3
struct _Con_M_P_ProduceBody0_s3 {struct _Construction construction; Term sub[11]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody0_s3;
extern int step_M_P_ProduceBody0_s3(Sink,Term);

/* FUNCTION Prep-P-ProduceBody0-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody0_s4 struct _Con_M_P_ProduceBody0_s4
struct _Con_M_P_ProduceBody0_s4 {struct _Construction construction; Term sub[8]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody0_s4;
extern int step_M_P_ProduceBody0_s4(Sink,Term);

/* FUNCTION Util-U-TestIfSort1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1_s7 struct _Con_M_U_TestIfSort1_s7
struct _Con_M_U_TestIfSort1_s7 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1_s7;
extern int step_M_U_TestIfSort1_s7(Sink,Term);

/* FUNCTION Util-U-TestIfSort1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1_s6 struct _Con_M_U_TestIfSort1_s6
struct _Con_M_U_TestIfSort1_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1_s6;
extern int step_M_U_TestIfSort1_s6(Sink,Term);

/* FUNCTION Util-U-TestIfSort1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1_s5 struct _Con_M_U_TestIfSort1_s5
struct _Con_M_U_TestIfSort1_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1_s5;
extern int step_M_U_TestIfSort1_s5(Sink,Term);

/* FUNCTION Util-U-TestIfSort1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1_s4 struct _Con_M_U_TestIfSort1_s4
struct _Con_M_U_TestIfSort1_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1_s4;
extern int step_M_U_TestIfSort1_s4(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpSimple- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpSimple struct _Con_M_P_InlineRegExpSimple
struct _Con_M_P_InlineRegExpSimple {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpSimple;
extern int step_M_P_InlineRegExpSimple(Sink,Term);

/* FUNCTION Util-U-ParsedFormString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormString struct _Con_M_U_ParsedFormString
struct _Con_M_U_ParsedFormString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormString;
extern int step_M_U_ParsedFormString(Sink,Term);

/* FUNCTION Prep-P-VariableMarker-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_VariableMarker struct _Con_M_P_VariableMarker
struct _Con_M_P_VariableMarker {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_VariableMarker;
extern int step_M_P_VariableMarker(Sink,Term);

/* FUNCTION Util-U-FormKindString-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormKindString_s1 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_FormKindString_s1;
extern int step_M_U_FormKindString_s1(Sink,Term);

/* FUNCTION Cook-C-Scheme-Form- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Scheme_Form struct _Con_M_C_Scheme_Form
struct _Con_M_C_Scheme_Form {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Scheme_Form;
extern int step_M_C_Scheme_Form(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s10 struct _Con_M_U_ParsedFormLess_s10
struct _Con_M_U_ParsedFormLess_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s10;
extern int step_M_U_ParsedFormLess_s10(Sink,Term);

/* FUNCTION Util-U-FormKindString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormKindString_s2 struct _Con_M_U_FormKindString_s2
struct _Con_M_U_FormKindString_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormKindString_s2;
extern int step_M_U_FormKindString_s2(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s11 struct _Con_M_U_ParsedFormLess_s11
struct _Con_M_U_ParsedFormLess_s11 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s11;
extern int step_M_U_ParsedFormLess_s11(Sink,Term);

/* FUNCTION Prelude-Empty-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Empty_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Empty_s2;
extern int step_M_Empty_s2(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s12 struct _Con_M_U_ParsedFormLess_s12
struct _Con_M_U_ParsedFormLess_s12 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s12;
extern int step_M_U_ParsedFormLess_s12(Sink,Term);

/* FUNCTION Prelude-Empty-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Empty_s1 struct _Con_M_Empty_s1
struct _Con_M_Empty_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Empty_s1;
extern int step_M_Empty_s1(Sink,Term);

/* FUNCTION Util-U-FormKindString-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormKindString_s5 struct _Con_M_U_FormKindString_s5
struct _Con_M_U_FormKindString_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormKindString_s5;
extern int step_M_U_FormKindString_s5(Sink,Term);

/* FUNCTION Prelude-AsTextLiteralWhen-1$AsTextLiteralWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_AsTextLiteralWhen struct _Con_M_AsTextLiteralWhen
struct _Con_M_AsTextLiteralWhen {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AsTextLiteralWhen;
extern int step_M_AsTextLiteralWhen(Sink,Term);

/* FUNCTION Util-U-FormKindString-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormKindString_s4 struct _Con_M_U_FormKindString_s4
struct _Con_M_U_FormKindString_s4 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormKindString_s4;
extern int step_M_U_FormKindString_s4(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_0-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x0 struct _Con_M_C_UnravelScope_x0
struct _Con_M_C_UnravelScope_x0 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x0;
extern int step_M_C_UnravelScope_x0(Sink,Term);

/* FUNCTION Util-U-FormKindString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormKindString_s3 struct _Con_M_U_FormKindString_s3
struct _Con_M_U_FormKindString_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormKindString_s3;
extern int step_M_U_FormKindString_s3(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x1 struct _Con_M_C_UnravelScope_x1
struct _Con_M_C_UnravelScope_x1 {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x1;
extern int step_M_C_UnravelScope_x1(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x2 struct _Con_M_C_UnravelScope_x2
struct _Con_M_C_UnravelScope_x2 {struct _Construction construction; Term sub[1]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x2;
extern int step_M_C_UnravelScope_x2(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x3 struct _Con_M_C_UnravelScope_x3
struct _Con_M_C_UnravelScope_x3 {struct _Construction construction; Term sub[1]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x3;
extern int step_M_C_UnravelScope_x3(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpChoice-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpChoice_s2 struct _Con_M_P_InlineRegExpChoice_s2
struct _Con_M_P_InlineRegExpChoice_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpChoice_s2;
extern int step_M_P_InlineRegExpChoice_s2(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_4-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x4 struct _Con_M_C_UnravelScope_x4
struct _Con_M_C_UnravelScope_x4 {struct _Construction construction; Term sub[1]; Variable binder[4];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x4;
extern int step_M_C_UnravelScope_x4(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpChoice-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpChoice_s1 struct _Con_M_P_InlineRegExpChoice_s1
struct _Con_M_P_InlineRegExpChoice_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpChoice_s1;
extern int step_M_P_InlineRegExpChoice_s1(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_5-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x5 struct _Con_M_C_UnravelScope_x5
struct _Con_M_C_UnravelScope_x5 {struct _Construction construction; Term sub[1]; Variable binder[5];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x5;
extern int step_M_C_UnravelScope_x5(Sink,Term);

/* FUNCTION Prep-SortVar-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_SortVar struct _Con_M_SortVar
struct _Con_M_SortVar {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SortVar;
extern int step_M_SortVar(Sink,Term);

/* FUNCTION Prelude-IfThen- HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfThen struct _Con_M_IfThen
struct _Con_M_IfThen {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_IfThen;
extern int step_M_IfThen(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-4$C-ExtendSortMap-Terms$3$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s3 struct _Con_M_C_ExtendSortMap_Terms_s3
struct _Con_M_C_ExtendSortMap_Terms_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s3;
extern int step_M_C_ExtendSortMap_Terms_s3(Sink,Term);

/* FUNCTION Prelude-AsTextLiteralWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AsTextLiteralWhen_s1 struct _Con_M_AsTextLiteralWhen_s1
struct _Con_M_AsTextLiteralWhen_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AsTextLiteralWhen_s1;
extern int step_M_AsTextLiteralWhen_s1(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s1 struct _Con_M_C_ExtendSortMap_Terms_s1
struct _Con_M_C_ExtendSortMap_Terms_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s1;
extern int step_M_C_ExtendSortMap_Terms_s1(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s7 struct _Con_M_C_ExtendSortMap_Terms_s7
struct _Con_M_C_ExtendSortMap_Terms_s7 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s7;
extern int step_M_C_ExtendSortMap_Terms_s7(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-5$C-ExtendSortMap-Terms$6$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s6 struct _Con_M_C_ExtendSortMap_Terms_s6
struct _Con_M_C_ExtendSortMap_Terms_s6 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s6;
extern int step_M_C_ExtendSortMap_Terms_s6(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s4 struct _Con_M_C_ExtendSortMap_Terms_s4
struct _Con_M_C_ExtendSortMap_Terms_s4 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s4;
extern int step_M_C_ExtendSortMap_Terms_s4(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-8$C-ExtendSortMap-Terms$9$$Cons HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms_s9 struct _Con_M_C_ExtendSortMap_Terms_s9
struct _Con_M_C_ExtendSortMap_Terms_s9 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms_s9;
extern int step_M_C_ExtendSortMap_Terms_s9(Sink,Term);

/* FUNCTION Util-U-then-DefineWrapperSugar-1$U-then-DefineWrapperSugar$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_DefineWrapperSugar struct _Con_M_U__then_DefineWrapperSugar
struct _Con_M_U__then_DefineWrapperSugar {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_DefineWrapperSugar;
extern int step_M_U__then_DefineWrapperSugar(Sink,Term);

/* FUNCTION Prep-P-SamePrec-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SamePrec struct _Con_M_P_SamePrec
struct _Con_M_P_SamePrec {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SamePrec;
extern int step_M_P_SamePrec(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s19 struct _Con_M_U_ParsedFormLess_s19
struct _Con_M_U_ParsedFormLess_s19 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s19;
extern int step_M_U_ParsedFormLess_s19(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s18 struct _Con_M_U_ParsedFormLess_s18
struct _Con_M_U_ParsedFormLess_s18 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s18;
extern int step_M_U_ParsedFormLess_s18(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s17 struct _Con_M_U_ParsedFormLess_s17
struct _Con_M_U_ParsedFormLess_s17 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s17;
extern int step_M_U_ParsedFormLess_s17(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s16 struct _Con_M_U_ParsedFormLess_s16
struct _Con_M_U_ParsedFormLess_s16 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s16;
extern int step_M_U_ParsedFormLess_s16(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpClass2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpClass2_s3 struct _Con_M_P_InlineRegExpClass2_s3
struct _Con_M_P_InlineRegExpClass2_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpClass2_s3;
extern int step_M_P_InlineRegExpClass2_s3(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s15 struct _Con_M_U_ParsedFormLess_s15
struct _Con_M_U_ParsedFormLess_s15 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s15;
extern int step_M_U_ParsedFormLess_s15(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s13 struct _Con_M_U_ParsedFormLess_s13
struct _Con_M_U_ParsedFormLess_s13 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s13;
extern int step_M_U_ParsedFormLess_s13(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpClass2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpClass2_s1 struct _Con_M_P_InlineRegExpClass2_s1
struct _Con_M_P_InlineRegExpClass2_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpClass2_s1;
extern int step_M_P_InlineRegExpClass2_s1(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpClass2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpClass2_s2 struct _Con_M_P_InlineRegExpClass2_s2
struct _Con_M_P_InlineRegExpClass2_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpClass2_s2;
extern int step_M_P_InlineRegExpClass2_s2(Sink,Term);

/* FUNCTION Prep-P-Produce-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Produce_s3 struct _Con_M_P_Produce_s3
struct _Con_M_P_Produce_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Produce_s3;
extern int step_M_P_Produce_s3(Sink,Term);

/* FUNCTION Prep-P-Produce-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Produce_s2 struct _Con_M_P_Produce_s2
struct _Con_M_P_Produce_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Produce_s2;
extern int step_M_P_Produce_s2(Sink,Term);

/* FUNCTION Prep-P-Produce- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Produce_s1 struct _Con_M_P_Produce_s1
struct _Con_M_P_Produce_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Produce_s1;
extern int step_M_P_Produce_s1(Sink,Term);

/* FUNCTION Util-U-then-ParsedFormLess-1$U-then-ParsedFormLess$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_ParsedFormLess struct _Con_M_U__then_ParsedFormLess
struct _Con_M_U__then_ParsedFormLess {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_ParsedFormLess;
extern int step_M_U__then_ParsedFormLess(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpUnit-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpUnit_s6 struct _Con_M_P_DeclareRegExpUnit_s6
struct _Con_M_P_DeclareRegExpUnit_s6 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpUnit_s6;
extern int step_M_P_DeclareRegExpUnit_s6(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpUnit-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpUnit_s7 struct _Con_M_P_DeclareRegExpUnit_s7
struct _Con_M_P_DeclareRegExpUnit_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpUnit_s7;
extern int step_M_P_DeclareRegExpUnit_s7(Sink,Term);

/* FUNCTION Util-U-TestIfSort1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1_s8 struct _Con_M_U_TestIfSort1_s8
struct _Con_M_U_TestIfSort1_s8 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1_s8;
extern int step_M_U_TestIfSort1_s8(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpUnit- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpUnit_s2 struct _Con_M_P_DeclareRegExpUnit_s2
struct _Con_M_P_DeclareRegExpUnit_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpUnit_s2;
extern int step_M_P_DeclareRegExpUnit_s2(Sink,Term);

/* FUNCTION Util-U-TestIfSort1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1_s9 struct _Con_M_U_TestIfSort1_s9
struct _Con_M_U_TestIfSort1_s9 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1_s9;
extern int step_M_U_TestIfSort1_s9(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpUnit-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpUnit_s3 struct _Con_M_P_DeclareRegExpUnit_s3
struct _Con_M_P_DeclareRegExpUnit_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpUnit_s3;
extern int step_M_P_DeclareRegExpUnit_s3(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpUnit-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpUnit_s4 struct _Con_M_P_DeclareRegExpUnit_s4
struct _Con_M_P_DeclareRegExpUnit_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpUnit_s4;
extern int step_M_P_DeclareRegExpUnit_s4(Sink,Term);

/* FUNCTION Prelude-StringConcat3When-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringConcat3When_s1 struct _Con_M_StringConcat3When_s1
struct _Con_M_StringConcat3When_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringConcat3When_s1;
extern int step_M_StringConcat3When_s1(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpUnit-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpUnit_s5 struct _Con_M_P_DeclareRegExpUnit_s5
struct _Con_M_P_DeclareRegExpUnit_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpUnit_s5;
extern int step_M_P_DeclareRegExpUnit_s5(Sink,Term);

/* FUNCTION Prelude-Or-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Or_s1 struct _Con_M_Or_s1
struct _Con_M_Or_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Or_s1;
extern int step_M_Or_s1(Sink,Term);

/* FUNCTION Prelude-Or-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Or_s2 struct _Con_M_Or_s2
struct _Con_M_Or_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Or_s2;
extern int step_M_Or_s2(Sink,Term);

/* FUNCTION Prelude-CheckName2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_CheckName2_s1 struct _Con_M_CheckName2_s1
struct _Con_M_CheckName2_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_CheckName2_s1;
extern int step_M_CheckName2_s1(Sink,Term);

/* FUNCTION Prelude-Fold2When-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold2When_s4 struct _Con_M_Fold2When_s4
struct _Con_M_Fold2When_s4 {struct _Construction construction; Term sub[6]; Variable binder[4];};
extern struct _ConstructionDescriptor descriptor_M_Fold2When_s4;
extern int step_M_Fold2When_s4(Sink,Term);

/* FUNCTION Prelude-Fold2When- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold2When_s3 struct _Con_M_Fold2When_s3
struct _Con_M_Fold2When_s3 {struct _Construction construction; Term sub[5]; Variable binder[4];};
extern struct _ConstructionDescriptor descriptor_M_Fold2When_s3;
extern int step_M_Fold2When_s3(Sink,Term);

/* FUNCTION Prelude-Fold2When- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold2When_s1 struct _Con_M_Fold2When_s1
struct _Con_M_Fold2When_s1 {struct _Construction construction; Term sub[4]; Variable binder[4];};
extern struct _ConstructionDescriptor descriptor_M_Fold2When_s1;
extern int step_M_Fold2When_s1(Sink,Term);

/* FUNCTION Prelude-Fold2When-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold2When_s6 struct _Con_M_Fold2When_s6
struct _Con_M_Fold2When_s6 {struct _Construction construction; Term sub[3]; Variable binder[4];};
extern struct _ConstructionDescriptor descriptor_M_Fold2When_s6;
extern int step_M_Fold2When_s6(Sink,Term);

/* FUNCTION Prelude-Fold2When-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold2When_s5 struct _Con_M_Fold2When_s5
struct _Con_M_Fold2When_s5 {struct _Construction construction; Term sub[4]; Variable binder[4];};
extern struct _ConstructionDescriptor descriptor_M_Fold2When_s5;
extern int step_M_Fold2When_s5(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s1 struct _Con_M_C_AddTermTopInherited_s1
struct _Con_M_C_AddTermTopInherited_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s1;
extern int step_M_C_AddTermTopInherited_s1(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s3 struct _Con_M_C_AddTermTopInherited_s3
struct _Con_M_C_AddTermTopInherited_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s3;
extern int step_M_C_AddTermTopInherited_s3(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s2 struct _Con_M_C_AddTermTopInherited_s2
struct _Con_M_C_AddTermTopInherited_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s2;
extern int step_M_C_AddTermTopInherited_s2(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s5 struct _Con_M_C_AddTermTopInherited_s5
struct _Con_M_C_AddTermTopInherited_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s5;
extern int step_M_C_AddTermTopInherited_s5(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s4 struct _Con_M_C_AddTermTopInherited_s4
struct _Con_M_C_AddTermTopInherited_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s4;
extern int step_M_C_AddTermTopInherited_s4(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-10 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s7 struct _Con_M_C_AddTermTopInherited_s7
struct _Con_M_C_AddTermTopInherited_s7 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s7;
extern int step_M_C_AddTermTopInherited_s7(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s6 struct _Con_M_C_AddTermTopInherited_s6
struct _Con_M_C_AddTermTopInherited_s6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s6;
extern int step_M_C_AddTermTopInherited_s6(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s9 struct _Con_M_C_AddTermTopInherited_s9
struct _Con_M_C_AddTermTopInherited_s9 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s9;
extern int step_M_C_AddTermTopInherited_s9(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-9$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s8 struct _Con_M_C_AddTermTopInherited_s8
struct _Con_M_C_AddTermTopInherited_s8 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s8;
extern int step_M_C_AddTermTopInherited_s8(Sink,Term);

/* FUNCTION Prelude-NumericToString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_NumericToString struct _Con_M_NumericToString
struct _Con_M_NumericToString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NumericToString;
extern int step_M_NumericToString(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form struct _Con_M_U_MakeAttribute2Form
struct _Con_M_U_MakeAttribute2Form {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form;
extern int step_M_U_MakeAttribute2Form(Sink,Term);

/* FUNCTION Cook-C-SortMap-GetMetaVariables-1$C-SortMap-GetMetaVariables$SM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap_GetMetaVariables struct _Con_M_C_SortMap_GetMetaVariables
struct _Con_M_C_SortMap_GetMetaVariables {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap_GetMetaVariables;
extern int step_M_C_SortMap_GetMetaVariables(Sink,Term);

/* FUNCTION Prelude-RemoveNameWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_RemoveNameWhen_s1 struct _Con_M_RemoveNameWhen_s1
struct _Con_M_RemoveNameWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_RemoveNameWhen_s1;
extern int step_M_RemoveNameWhen_s1(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication struct _Con_M_C_ExtendSortMap_MetaApplication
struct _Con_M_C_ExtendSortMap_MetaApplication {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication;
extern int step_M_C_ExtendSortMap_MetaApplication(Sink,Term);

/* FUNCTION Prep-Prep-1$Prep$Hx_top-module HEADER DECLARATIONS. */
#define STRUCT_Con_M_Prep struct _Con_M_Prep
struct _Con_M_Prep {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Prep;
extern int step_M_Prep(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion-2$P-stripLeftRecursion$PFK HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion struct _Con_M_P__stripLeftRecursion
struct _Con_M_P__stripLeftRecursion {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion;
extern int step_M_P__stripLeftRecursion(Sink,Term);

/* FUNCTION Util-U-ExtractParsedFormFirstSort-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ExtractParsedFormFirstSort_s5 struct _Con_M_U_ExtractParsedFormFirstSort_s5
struct _Con_M_U_ExtractParsedFormFirstSort_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ExtractParsedFormFirstSort_s5;
extern int step_M_U_ExtractParsedFormFirstSort_s5(Sink,Term);

/* FUNCTION Util-U-ExtractParsedFormFirstSort-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ExtractParsedFormFirstSort_s4 struct _Con_M_U_ExtractParsedFormFirstSort_s4
struct _Con_M_U_ExtractParsedFormFirstSort_s4 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ExtractParsedFormFirstSort_s4;
extern int step_M_U_ExtractParsedFormFirstSort_s4(Sink,Term);

/* FUNCTION Prelude-MapNamesWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapNamesWhen struct _Con_M_MapNamesWhen
struct _Con_M_MapNamesWhen {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapNamesWhen;
extern int step_M_MapNamesWhen(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2 struct _Con_M_U_KeepInheritedEntry2
struct _Con_M_U_KeepInheritedEntry2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2;
extern int step_M_U_KeepInheritedEntry2(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry1 struct _Con_M_U_KeepInheritedEntry1
struct _Con_M_U_KeepInheritedEntry1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry1;
extern int step_M_U_KeepInheritedEntry1(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s10 struct _Con_M_U_KeepSynthesizedMapEntry2_s10
struct _Con_M_U_KeepSynthesizedMapEntry2_s10 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s10;
extern int step_M_U_KeepSynthesizedMapEntry2_s10(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s11 struct _Con_M_U_KeepSynthesizedMapEntry2_s11
struct _Con_M_U_KeepSynthesizedMapEntry2_s11 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s11;
extern int step_M_U_KeepSynthesizedMapEntry2_s11(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s12 struct _Con_M_U_KeepSynthesizedMapEntry2_s12
struct _Con_M_U_KeepSynthesizedMapEntry2_s12 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s12;
extern int step_M_U_KeepSynthesizedMapEntry2_s12(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s13 struct _Con_M_U_KeepSynthesizedMapEntry2_s13
struct _Con_M_U_KeepSynthesizedMapEntry2_s13 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s13;
extern int step_M_U_KeepSynthesizedMapEntry2_s13(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s14 struct _Con_M_U_KeepSynthesizedMapEntry2_s14
struct _Con_M_U_KeepSynthesizedMapEntry2_s14 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s14;
extern int step_M_U_KeepSynthesizedMapEntry2_s14(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes3-1$C-UnsynthesizeAttributes3$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes3 struct _Con_M_C_UnsynthesizeAttributes3
struct _Con_M_C_UnsynthesizeAttributes3 {struct _Construction construction; Term sub[12]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes3;
extern int step_M_C_UnsynthesizeAttributes3(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s15 struct _Con_M_U_KeepSynthesizedMapEntry2_s15
struct _Con_M_U_KeepSynthesizedMapEntry2_s15 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s15;
extern int step_M_U_KeepSynthesizedMapEntry2_s15(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes2-1$C-UnsynthesizeAttributes2$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes2 struct _Con_M_C_UnsynthesizeAttributes2
struct _Con_M_C_UnsynthesizeAttributes2 {struct _Construction construction; Term sub[12]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes2;
extern int step_M_C_UnsynthesizeAttributes2(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s16 struct _Con_M_U_KeepSynthesizedMapEntry2_s16
struct _Con_M_U_KeepSynthesizedMapEntry2_s16 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s16;
extern int step_M_U_KeepSynthesizedMapEntry2_s16(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes1-1$C-UnsynthesizeAttributes1$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes1 struct _Con_M_C_UnsynthesizeAttributes1
struct _Con_M_C_UnsynthesizeAttributes1 {struct _Construction construction; Term sub[12]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes1;
extern int step_M_C_UnsynthesizeAttributes1(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2_s17 struct _Con_M_U_KeepSynthesizedMapEntry2_s17
struct _Con_M_U_KeepSynthesizedMapEntry2_s17 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2_s17;
extern int step_M_U_KeepSynthesizedMapEntry2_s17(Sink,Term);

/* FUNCTION Prelude-WrappedStringJoin- HEADER DECLARATIONS. */
#define STRUCT_Con_M_WrappedStringJoin struct _Con_M_WrappedStringJoin
struct _Con_M_WrappedStringJoin {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_WrappedStringJoin;
extern int step_M_WrappedStringJoin(Sink,Term);

/* FUNCTION Util-U-GetConstructorSort-1$U-GetConstructorSort HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetConstructorSort struct _Con_M_U_GetConstructorSort
struct _Con_M_U_GetConstructorSort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetConstructorSort;
extern int step_M_U_GetConstructorSort(Sink,Term);

/* FUNCTION Util-U-MakeTokenNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeTokenNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MakeTokenNames;
extern int step_M_U_MakeTokenNames(Sink,Term);

/* FUNCTION Util-U-ExtractParsedFormFirstSort-3$U-ExtractParsedFormFirstSort$2$Hx_ScopeSortPrec HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ExtractParsedFormFirstSort_s2 struct _Con_M_U_ExtractParsedFormFirstSort_s2
struct _Con_M_U_ExtractParsedFormFirstSort_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ExtractParsedFormFirstSort_s2;
extern int step_M_U_ExtractParsedFormFirstSort_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s9 struct _Con_M_C_CrsxifyTerm_s9
struct _Con_M_C_CrsxifyTerm_s9 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s9;
extern int step_M_C_CrsxifyTerm_s9(Sink,Term);

/* FUNCTION Util-U-ExtractParsedFormFirstSort-3$U-ExtractParsedFormFirstSort$3$Hx_ScopeSort HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ExtractParsedFormFirstSort_s3 struct _Con_M_U_ExtractParsedFormFirstSort_s3
struct _Con_M_U_ExtractParsedFormFirstSort_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ExtractParsedFormFirstSort_s3;
extern int step_M_U_ExtractParsedFormFirstSort_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s8 struct _Con_M_C_CrsxifyTerm_s8
struct _Con_M_C_CrsxifyTerm_s8 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s8;
extern int step_M_C_CrsxifyTerm_s8(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s7 struct _Con_M_C_CrsxifyTerm_s7
struct _Con_M_C_CrsxifyTerm_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s7;
extern int step_M_C_CrsxifyTerm_s7(Sink,Term);

/* FUNCTION Util-U-ExtractParsedFormFirstSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ExtractParsedFormFirstSort_s1 struct _Con_M_U_ExtractParsedFormFirstSort_s1
struct _Con_M_U_ExtractParsedFormFirstSort_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ExtractParsedFormFirstSort_s1;
extern int step_M_U_ExtractParsedFormFirstSort_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s6 struct _Con_M_C_CrsxifyTerm_s6
struct _Con_M_C_CrsxifyTerm_s6 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s6;
extern int step_M_C_CrsxifyTerm_s6(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-2$C-CrsxifyTerm$5$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s5 struct _Con_M_C_CrsxifyTerm_s5
struct _Con_M_C_CrsxifyTerm_s5 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s5;
extern int step_M_C_CrsxifyTerm_s5(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxScopeSortList-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxScopeSortList_s3 struct _Con_M_P_MetaJJ_Production_HxScopeSortList_s3
struct _Con_M_P_MetaJJ_Production_HxScopeSortList_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxScopeSortList_s3;
extern int step_M_P_MetaJJ_Production_HxScopeSortList_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s3 struct _Con_M_C_CrsxifyTerm_s3
struct _Con_M_C_CrsxifyTerm_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s3;
extern int step_M_C_CrsxifyTerm_s3(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxScopeSortList-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxScopeSortList_s2 struct _Con_M_P_MetaJJ_Production_HxScopeSortList_s2
struct _Con_M_P_MetaJJ_Production_HxScopeSortList_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxScopeSortList_s2;
extern int step_M_P_MetaJJ_Production_HxScopeSortList_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm-1$C-CrsxifyTerm$2$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm_s2 struct _Con_M_C_CrsxifyTerm_s2
struct _Con_M_C_CrsxifyTerm_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm_s2;
extern int step_M_C_CrsxifyTerm_s2(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-HxScopeSortList- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_HxScopeSortList_s1 struct _Con_M_P_MetaJJ_Production_HxScopeSortList_s1
struct _Con_M_P_MetaJJ_Production_HxScopeSortList_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_HxScopeSortList_s1;
extern int step_M_P_MetaJJ_Production_HxScopeSortList_s1(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s10 struct _Con_M_U_MakeFunction2Inherited4_s10
struct _Con_M_U_MakeFunction2Inherited4_s10 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s10;
extern int step_M_U_MakeFunction2Inherited4_s10(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s12 struct _Con_M_U_MakeFunction2Inherited4_s12
struct _Con_M_U_MakeFunction2Inherited4_s12 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s12;
extern int step_M_U_MakeFunction2Inherited4_s12(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s11 struct _Con_M_U_MakeFunction2Inherited4_s11
struct _Con_M_U_MakeFunction2Inherited4_s11 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s11;
extern int step_M_U_MakeFunction2Inherited4_s11(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopInherited- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopInherited_s2 struct _Con_M_C_AddAttributeTopInherited_s2
struct _Con_M_C_AddAttributeTopInherited_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopInherited_s2;
extern int step_M_C_AddAttributeTopInherited_s2(Sink,Term);

/* FUNCTION Prelude-NumericToStringWhen-1$NumericToStringWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_NumericToStringWhen struct _Con_M_NumericToStringWhen
struct _Con_M_NumericToStringWhen {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NumericToStringWhen;
extern int step_M_NumericToStringWhen(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopInherited-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopInherited_s3 struct _Con_M_C_AddAttributeTopInherited_s3
struct _Con_M_C_AddAttributeTopInherited_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopInherited_s3;
extern int step_M_C_AddAttributeTopInherited_s3(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopInherited-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopInherited_s4 struct _Con_M_C_AddAttributeTopInherited_s4
struct _Con_M_C_AddAttributeTopInherited_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopInherited_s4;
extern int step_M_C_AddAttributeTopInherited_s4(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopInherited-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopInherited_s5 struct _Con_M_C_AddAttributeTopInherited_s5
struct _Con_M_C_AddAttributeTopInherited_s5 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopInherited_s5;
extern int step_M_C_AddAttributeTopInherited_s5(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopInherited-3$C-AddAttributeTopInherited$1$Hx_Attribute HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopInherited_s1 struct _Con_M_C_AddAttributeTopInherited_s1
struct _Con_M_C_AddAttributeTopInherited_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopInherited_s1;
extern int step_M_C_AddAttributeTopInherited_s1(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s14 struct _Con_M_U_MakeFunction2Inherited4_s14
struct _Con_M_U_MakeFunction2Inherited4_s14 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s14;
extern int step_M_U_MakeFunction2Inherited4_s14(Sink,Term);

/* FUNCTION Prelude-MapTextWrap2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextWrap2_s1 struct _Con_M_MapTextWrap2_s1
struct _Con_M_MapTextWrap2_s1 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapTextWrap2_s1;
extern int step_M_MapTextWrap2_s1(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s13 struct _Con_M_U_MakeFunction2Inherited4_s13
struct _Con_M_U_MakeFunction2Inherited4_s13 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s13;
extern int step_M_U_MakeFunction2Inherited4_s13(Sink,Term);

/* FUNCTION Prelude-MapTextWrap2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextWrap2_s2 struct _Con_M_MapTextWrap2_s2
struct _Con_M_MapTextWrap2_s2 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapTextWrap2_s2;
extern int step_M_MapTextWrap2_s2(Sink,Term);

/* FUNCTION Prelude-MapTextWrap2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapTextWrap2_s3 struct _Con_M_MapTextWrap2_s3
struct _Con_M_MapTextWrap2_s3 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapTextWrap2_s3;
extern int step_M_MapTextWrap2_s3(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s11 struct _Con_M_U_TermTopConstructor_s11
struct _Con_M_U_TermTopConstructor_s11 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s11;
extern int step_M_U_TermTopConstructor_s11(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s5 struct _Con_M_C_Print_Declarations_s5
struct _Con_M_C_Print_Declarations_s5 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s5;
extern int step_M_C_Print_Declarations_s5(Sink,Term);

/* FUNCTION Prep-P-BaseSortName2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_BaseSortName2_s3 struct _Con_M_P_BaseSortName2_s3
struct _Con_M_P_BaseSortName2_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_BaseSortName2_s3;
extern int step_M_P_BaseSortName2_s3(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s10 struct _Con_M_U_TermTopConstructor_s10
struct _Con_M_U_TermTopConstructor_s10 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s10;
extern int step_M_U_TermTopConstructor_s10(Sink,Term);

/* FUNCTION Util- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual struct _Con_M_U_DefineLessEqual
struct _Con_M_U_DefineLessEqual {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual;
extern int step_M_U_DefineLessEqual(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s6 struct _Con_M_C_Print_Declarations_s6
struct _Con_M_C_Print_Declarations_s6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s6;
extern int step_M_C_Print_Declarations_s6(Sink,Term);

/* FUNCTION Prep-P-BaseSortName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_BaseSortName2_s4 struct _Con_M_P_BaseSortName2_s4
struct _Con_M_P_BaseSortName2_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_BaseSortName2_s4;
extern int step_M_P_BaseSortName2_s4(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s7 struct _Con_M_C_Print_Declarations_s7
struct _Con_M_C_Print_Declarations_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s7;
extern int step_M_C_Print_Declarations_s7(Sink,Term);

/* FUNCTION Prep-P-BaseSortName2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_BaseSortName2_s1 struct _Con_M_P_BaseSortName2_s1
struct _Con_M_P_BaseSortName2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_BaseSortName2_s1;
extern int step_M_P_BaseSortName2_s1(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive1_s7 struct _Con_M_P__isLeftRecursive1_s7
struct _Con_M_P__isLeftRecursive1_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive1_s7;
extern int step_M_P__isLeftRecursive1_s7(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s8 struct _Con_M_C_Print_Declarations_s8
struct _Con_M_C_Print_Declarations_s8 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s8;
extern int step_M_C_Print_Declarations_s8(Sink,Term);

/* FUNCTION Prep-P-BaseSortName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_BaseSortName2_s2 struct _Con_M_P_BaseSortName2_s2
struct _Con_M_P_BaseSortName2_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_BaseSortName2_s2;
extern int step_M_P_BaseSortName2_s2(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s1 struct _Con_M_C_Print_Declarations_s1
struct _Con_M_C_Print_Declarations_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s1;
extern int step_M_C_Print_Declarations_s1(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s14 struct _Con_M_U_TermTopConstructor_s14
struct _Con_M_U_TermTopConstructor_s14 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s14;
extern int step_M_U_TermTopConstructor_s14(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s2 struct _Con_M_C_Print_Declarations_s2
struct _Con_M_C_Print_Declarations_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s2;
extern int step_M_C_Print_Declarations_s2(Sink,Term);

/* FUNCTION Util-U-TermTopConstructor-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermTopConstructor_s13 struct _Con_M_U_TermTopConstructor_s13
struct _Con_M_U_TermTopConstructor_s13 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermTopConstructor_s13;
extern int step_M_U_TermTopConstructor_s13(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s3 struct _Con_M_C_Print_Declarations_s3
struct _Con_M_C_Print_Declarations_s3 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s3;
extern int step_M_C_Print_Declarations_s3(Sink,Term);

/* FUNCTION Prep-P-BaseSortName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_BaseSortName2_s5 struct _Con_M_P_BaseSortName2_s5
struct _Con_M_P_BaseSortName2_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_BaseSortName2_s5;
extern int step_M_P_BaseSortName2_s5(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-1$C-Print-Declarations$4$Hx_module HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s4 struct _Con_M_C_Print_Declarations_s4
struct _Con_M_C_Print_Declarations_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s4;
extern int step_M_C_Print_Declarations_s4(Sink,Term);

/* FUNCTION Prep-P-BaseSortName2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_BaseSortName2_s6 struct _Con_M_P_BaseSortName2_s6
struct _Con_M_P_BaseSortName2_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_BaseSortName2_s6;
extern int step_M_P_BaseSortName2_s6(Sink,Term);

/* FUNCTION Cook-C-Print-Declarations-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Declarations_s9 struct _Con_M_C_Print_Declarations_s9
struct _Con_M_C_Print_Declarations_s9 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Declarations_s9;
extern int step_M_C_Print_Declarations_s9(Sink,Term);

/* FUNCTION Prep-P-User-Prefix-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_User_Prefix struct _Con_M_P_User_Prefix
struct _Con_M_P_User_Prefix {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_User_Prefix;
extern int step_M_P_User_Prefix(Sink,Term);

/* FUNCTION Prelude-Hd- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Hd struct _Con_M_Hd
struct _Con_M_Hd {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Hd;
extern int step_M_Hd(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize-1$C-Unsynthesize$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize_s1 struct _Con_M_C_Unsynthesize_s1
struct _Con_M_C_Unsynthesize_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize_s1;
extern int step_M_C_Unsynthesize_s1(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize_s2 struct _Con_M_C_Unsynthesize_s2
struct _Con_M_C_Unsynthesize_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize_s2;
extern int step_M_C_Unsynthesize_s2(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish3_s1 struct _Con_M_U_MakeDM_Finish3_s1
struct _Con_M_U_MakeDM_Finish3_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish3_s1;
extern int step_M_U_MakeDM_Finish3_s1(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive1_s2 struct _Con_M_P__isLeftRecursive1_s2
struct _Con_M_P__isLeftRecursive1_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive1_s2;
extern int step_M_P__isLeftRecursive1_s2(Sink,Term);

/* FUNCTION Prep-P-Production-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production struct _Con_M_P_Production
struct _Con_M_P_Production {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production;
extern int step_M_P_Production(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive1-4$P-isLeftRecursive1$1$PFK HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive1_s1 struct _Con_M_P__isLeftRecursive1_s1
struct _Con_M_P__isLeftRecursive1_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive1_s1;
extern int step_M_P__isLeftRecursive1_s1(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive1_s4 struct _Con_M_P__isLeftRecursive1_s4
struct _Con_M_P__isLeftRecursive1_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive1_s4;
extern int step_M_P__isLeftRecursive1_s4(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive1_s3 struct _Con_M_P__isLeftRecursive1_s3
struct _Con_M_P__isLeftRecursive1_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive1_s3;
extern int step_M_P__isLeftRecursive1_s3(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s11 struct _Con_M_U_MakeConstructor2Sort3_s11
struct _Con_M_U_MakeConstructor2Sort3_s11 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s11;
extern int step_M_U_MakeConstructor2Sort3_s11(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive1_s6 struct _Con_M_P__isLeftRecursive1_s6
struct _Con_M_P__isLeftRecursive1_s6 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive1_s6;
extern int step_M_P__isLeftRecursive1_s6(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s10 struct _Con_M_U_MakeConstructor2Sort3_s10
struct _Con_M_U_MakeConstructor2Sort3_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s10;
extern int step_M_U_MakeConstructor2Sort3_s10(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive1-3$P-isLeftRecursive1$5$Hx_ScopeSortPrec HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive1_s5 struct _Con_M_P__isLeftRecursive1_s5
struct _Con_M_P__isLeftRecursive1_s5 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive1_s5;
extern int step_M_P__isLeftRecursive1_s5(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish3_s4 struct _Con_M_U_MakeDM_Finish3_s4
struct _Con_M_U_MakeDM_Finish3_s4 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish3_s4;
extern int step_M_U_MakeDM_Finish3_s4(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish3_s5 struct _Con_M_U_MakeDM_Finish3_s5
struct _Con_M_U_MakeDM_Finish3_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish3_s5;
extern int step_M_U_MakeDM_Finish3_s5(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish3-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish3_s2 struct _Con_M_U_MakeDM_Finish3_s2
struct _Con_M_U_MakeDM_Finish3_s2 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish3_s2;
extern int step_M_U_MakeDM_Finish3_s2(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish3_s3 struct _Con_M_U_MakeDM_Finish3_s3
struct _Con_M_U_MakeDM_Finish3_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish3_s3;
extern int step_M_U_MakeDM_Finish3_s3(Sink,Term);

/* FUNCTION Prelude-If- HEADER DECLARATIONS. */
#define STRUCT_Con_M_If struct _Con_M_If
struct _Con_M_If {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_If;
extern int step_M_If(Sink,Term);

/* FUNCTION Util-U-InheritedRefsList- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InheritedRefsList struct _Con_M_U_InheritedRefsList
struct _Con_M_U_InheritedRefsList {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_InheritedRefsList;
extern int step_M_U_InheritedRefsList(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure4-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure4_s3 struct _Con_M_Name2NamesClosure4_s3
struct _Con_M_Name2NamesClosure4_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure4_s3;
extern int step_M_Name2NamesClosure4_s3(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBodies2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBodies2_s3 struct _Con_M_P_MetaJJ_AttributeBodies2_s3
struct _Con_M_P_MetaJJ_AttributeBodies2_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBodies2_s3;
extern int step_M_P_MetaJJ_AttributeBodies2_s3(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure4-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure4_s2 struct _Con_M_Name2NamesClosure4_s2
struct _Con_M_Name2NamesClosure4_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure4_s2;
extern int step_M_Name2NamesClosure4_s2(Sink,Term);

/* FUNCTION Util-U-GetAttributeValueSort-1$U-GetAttributeValueSort$2$DME_N2N HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetAttributeValueSort_s2 struct _Con_M_U_GetAttributeValueSort_s2
struct _Con_M_U_GetAttributeValueSort_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetAttributeValueSort_s2;
extern int step_M_U_GetAttributeValueSort_s2(Sink,Term);

/* FUNCTION Prep-P-RegExpSubWord-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_RegExpSubWord_s1 struct _Con_M_P_RegExpSubWord_s1
struct _Con_M_P_RegExpSubWord_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_RegExpSubWord_s1;
extern int step_M_P_RegExpSubWord_s1(Sink,Term);

/* FUNCTION Prep-P-RegExpSubWord-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_RegExpSubWord_s2 struct _Con_M_P_RegExpSubWord_s2
struct _Con_M_P_RegExpSubWord_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_RegExpSubWord_s2;
extern int step_M_P_RegExpSubWord_s2(Sink,Term);

/* FUNCTION Cook-C-Text-unopen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Text__unopen struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_Text__unopen;
extern int step_M_C_Text__unopen(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure4- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure4_s1 struct _Con_M_Name2NamesClosure4_s1
struct _Con_M_Name2NamesClosure4_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure4_s1;
extern int step_M_Name2NamesClosure4_s1(Sink,Term);

/* FUNCTION Cook-C-ContainsVariable- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ContainsVariable struct _Con_M_C_ContainsVariable
struct _Con_M_C_ContainsVariable {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ContainsVariable;
extern int step_M_C_ContainsVariable(Sink,Term);

/* FUNCTION Prep-P-SameScopeSortPrec-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSortPrec_s14 struct _Con_M_P_SameScopeSortPrec_s14
struct _Con_M_P_SameScopeSortPrec_s14 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSortPrec_s14;
extern int step_M_P_SameScopeSortPrec_s14(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Terms-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Terms struct _Con_M_C_ExtendSortMap_Terms
struct _Con_M_C_ExtendSortMap_Terms {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Terms;
extern int step_M_C_ExtendSortMap_Terms(Sink,Term);

/* FUNCTION Prelude-Special_error-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Special_xerror struct _Con_M_Special_xerror
struct _Con_M_Special_xerror {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Special_xerror;
extern int step_M_Special_xerror(Sink,Term);

/* FUNCTION Prep-Lexical- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s9 struct _Con_M_P_Lexical2_s9
struct _Con_M_P_Lexical2_s9 {struct _Construction construction; Term sub[9]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s9;
extern int step_M_P_Lexical2_s9(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBodies2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBodies2_s2 struct _Con_M_P_MetaJJ_AttributeBodies2_s2
struct _Con_M_P_MetaJJ_AttributeBodies2_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBodies2_s2;
extern int step_M_P_MetaJJ_AttributeBodies2_s2(Sink,Term);

/* FUNCTION Prep-P-SameScopeSortPrec-4$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSortPrec_s13 struct _Con_M_P_SameScopeSortPrec_s13
struct _Con_M_P_SameScopeSortPrec_s13 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSortPrec_s13;
extern int step_M_P_SameScopeSortPrec_s13(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeBodies2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeBodies2_s1 struct _Con_M_P_MetaJJ_AttributeBodies2_s1
struct _Con_M_P_MetaJJ_AttributeBodies2_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeBodies2_s1;
extern int step_M_P_MetaJJ_AttributeBodies2_s1(Sink,Term);

/* FUNCTION Prep-P-SameScopeSortPrec-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSortPrec_s11 struct _Con_M_P_SameScopeSortPrec_s11
struct _Con_M_P_SameScopeSortPrec_s11 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSortPrec_s11;
extern int step_M_P_SameScopeSortPrec_s11(Sink,Term);

/* FUNCTION Prep-P-SameScopeSortPrec- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSortPrec_s10 struct _Con_M_P_SameScopeSortPrec_s10
struct _Con_M_P_SameScopeSortPrec_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSortPrec_s10;
extern int step_M_P_SameScopeSortPrec_s10(Sink,Term);

/* FUNCTION Util-U-DeclarationMapEntryString-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapEntryString_s7 struct _Con_M_U_DeclarationMapEntryString_s7
struct _Con_M_U_DeclarationMapEntryString_s7 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapEntryString_s7;
extern int step_M_U_DeclarationMapEntryString_s7(Sink,Term);

/* FUNCTION Prep-Lexical-rule HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s8 struct _Con_M_P_Lexical2_s8
struct _Con_M_P_Lexical2_s8 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s8;
extern int step_M_P_Lexical2_s8(Sink,Term);

/* FUNCTION Util-U-DeclarationMapEntryString-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapEntryString_s8 struct _Con_M_U_DeclarationMapEntryString_s8
struct _Con_M_U_DeclarationMapEntryString_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapEntryString_s8;
extern int step_M_U_DeclarationMapEntryString_s8(Sink,Term);

/* FUNCTION Prep-Lexical-nest HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s7 struct _Con_M_P_Lexical2_s7
struct _Con_M_P_Lexical2_s7 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s7;
extern int step_M_P_Lexical2_s7(Sink,Term);

/* FUNCTION Util-U-DeclarationMapEntryString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapEntryString_s9 struct _Con_M_U_DeclarationMapEntryString_s9
struct _Con_M_U_DeclarationMapEntryString_s9 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapEntryString_s9;
extern int step_M_U_DeclarationMapEntryString_s9(Sink,Term);

/* FUNCTION Prep-Lexical-fragment HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s6 struct _Con_M_P_Lexical2_s6
struct _Con_M_P_Lexical2_s6 {struct _Construction construction; Term sub[7]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s6;
extern int step_M_P_Lexical2_s6(Sink,Term);

/* FUNCTION Prep-Lexical-module HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s5 struct _Con_M_P_Lexical2_s5
struct _Con_M_P_Lexical2_s5 {struct _Construction construction; Term sub[8]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s5;
extern int step_M_P_Lexical2_s5(Sink,Term);

/* FUNCTION Util-U-DeclarationMapEntryString-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapEntryString_s3 struct _Con_M_U_DeclarationMapEntryString_s3
struct _Con_M_U_DeclarationMapEntryString_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapEntryString_s3;
extern int step_M_U_DeclarationMapEntryString_s3(Sink,Term);

/* FUNCTION Prep-Lexical-module$P-Lexical2$4$Hx_module HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s4 struct _Con_M_P_Lexical2_s4
struct _Con_M_P_Lexical2_s4 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s4;
extern int step_M_P_Lexical2_s4(Sink,Term);

/* FUNCTION Util-U-DeclarationMapEntryString-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapEntryString_s4 struct _Con_M_U_DeclarationMapEntryString_s4
struct _Con_M_U_DeclarationMapEntryString_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapEntryString_s4;
extern int step_M_U_DeclarationMapEntryString_s4(Sink,Term);

/* FUNCTION Prep-Lexical-attribute HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s3 struct _Con_M_P_Lexical2_s3
struct _Con_M_P_Lexical2_s3 {struct _Construction construction; Term sub[8]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s3;
extern int step_M_P_Lexical2_s3(Sink,Term);

/* FUNCTION Util-U-DefinesConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinesConstructors_s2 struct _Con_M_U_DefinesConstructors_s2
struct _Con_M_U_DefinesConstructors_s2 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinesConstructors_s2;
extern int step_M_U_DefinesConstructors_s2(Sink,Term);

/* FUNCTION Util-U-DeclarationMapEntryString-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapEntryString_s5 struct _Con_M_U_DeclarationMapEntryString_s5
struct _Con_M_U_DeclarationMapEntryString_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapEntryString_s5;
extern int step_M_U_DeclarationMapEntryString_s5(Sink,Term);

/* FUNCTION Prep-Lexical-alternatives HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s2 struct _Con_M_P_Lexical2_s2
struct _Con_M_P_Lexical2_s2 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s2;
extern int step_M_P_Lexical2_s2(Sink,Term);

/* FUNCTION Util-U-DefinesConstructors- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinesConstructors_s1 struct _Con_M_U_DefinesConstructors_s1
struct _Con_M_U_DefinesConstructors_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinesConstructors_s1;
extern int step_M_U_DefinesConstructors_s1(Sink,Term);

/* FUNCTION Util-U-DeclarationMapEntryString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapEntryString_s6 struct _Con_M_U_DeclarationMapEntryString_s6
struct _Con_M_U_DeclarationMapEntryString_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapEntryString_s6;
extern int step_M_U_DeclarationMapEntryString_s6(Sink,Term);

/* FUNCTION Prep-Lexical- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2_s1 struct _Con_M_P_Lexical2_s1
struct _Con_M_P_Lexical2_s1 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2_s1;
extern int step_M_P_Lexical2_s1(Sink,Term);

/* FUNCTION Util-U-DefinesConstructors-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinesConstructors_s4 struct _Con_M_U_DefinesConstructors_s4
struct _Con_M_U_DefinesConstructors_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinesConstructors_s4;
extern int step_M_U_DefinesConstructors_s4(Sink,Term);

/* FUNCTION Util-U-DefinesConstructors- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinesConstructors_s3 struct _Con_M_U_DefinesConstructors_s3
struct _Con_M_U_DefinesConstructors_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinesConstructors_s3;
extern int step_M_U_DefinesConstructors_s3(Sink,Term);

/* FUNCTION Util-U-DefinesConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinesConstructors_s6 struct _Con_M_U_DefinesConstructors_s6
struct _Con_M_U_DefinesConstructors_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinesConstructors_s6;
extern int step_M_U_DefinesConstructors_s6(Sink,Term);

/* FUNCTION Util-U-DeclarationMapEntryString-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapEntryString_s1 struct _Con_M_U_DeclarationMapEntryString_s1
struct _Con_M_U_DeclarationMapEntryString_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapEntryString_s1;
extern int step_M_U_DeclarationMapEntryString_s1(Sink,Term);

/* FUNCTION Util-U-DefinesConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinesConstructors_s5 struct _Con_M_U_DefinesConstructors_s5
struct _Con_M_U_DefinesConstructors_s5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinesConstructors_s5;
extern int step_M_U_DefinesConstructors_s5(Sink,Term);

/* FUNCTION Util-U-DeclarationMapEntryString-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapEntryString_s2 struct _Con_M_U_DeclarationMapEntryString_s2
struct _Con_M_U_DeclarationMapEntryString_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapEntryString_s2;
extern int step_M_U_DeclarationMapEntryString_s2(Sink,Term);

/* FUNCTION Util-U-DefinesConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinesConstructors_s8 struct _Con_M_U_DefinesConstructors_s8
struct _Con_M_U_DefinesConstructors_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinesConstructors_s8;
extern int step_M_U_DefinesConstructors_s8(Sink,Term);

/* FUNCTION Util-U-DefinesConstructors-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinesConstructors_s7 struct _Con_M_U_DefinesConstructors_s7
struct _Con_M_U_DefinesConstructors_s7 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefinesConstructors_s7;
extern int step_M_U_DefinesConstructors_s7(Sink,Term);

/* FUNCTION Util-U-DefinesConstructors-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefinesConstructors_s9 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_DefinesConstructors_s9;
extern int step_M_U_DefinesConstructors_s9(Sink,Term);

/* FUNCTION Util-U-MakeDM-ExtraInformation-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_ExtraInformation struct _Con_M_U_MakeDM_ExtraInformation
struct _Con_M_U_MakeDM_ExtraInformation {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_ExtraInformation;
extern int step_M_U_MakeDM_ExtraInformation(Sink,Term);

/* FUNCTION Util-U-then-TestIfSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_TestIfSort_s1 struct _Con_M_U__then_TestIfSort_s1
struct _Con_M_U__then_TestIfSort_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_TestIfSort_s1;
extern int step_M_U__then_TestIfSort_s1(Sink,Term);

/* FUNCTION Util-U-GetFunctionInherited-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetFunctionInherited_s3 struct _Con_M_U_GetFunctionInherited_s3
struct _Con_M_U_GetFunctionInherited_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetFunctionInherited_s3;
extern int step_M_U_GetFunctionInherited_s3(Sink,Term);

/* FUNCTION Prep-P-InlineRegExp2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExp2 struct _Con_M_P_InlineRegExp2
struct _Con_M_P_InlineRegExp2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExp2;
extern int step_M_P_InlineRegExp2(Sink,Term);

/* FUNCTION Util-U-GetFunctionInherited-1$U-GetFunctionInherited$2$DME_N2NM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetFunctionInherited_s2 struct _Con_M_U_GetFunctionInherited_s2
struct _Con_M_U_GetFunctionInherited_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetFunctionInherited_s2;
extern int step_M_U_GetFunctionInherited_s2(Sink,Term);

/* FUNCTION Prelude-AddName2Name-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AddName2Name_s1 struct _Con_M_AddName2Name_s1
struct _Con_M_AddName2Name_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AddName2Name_s1;
extern int step_M_AddName2Name_s1(Sink,Term);

/* FUNCTION Util-U-GetAttributeValueSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetAttributeValueSort_s3 struct _Con_M_U_GetAttributeValueSort_s3
struct _Con_M_U_GetAttributeValueSort_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetAttributeValueSort_s3;
extern int step_M_U_GetAttributeValueSort_s3(Sink,Term);

/* FUNCTION Prelude-TextJoin-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextJoin_s1 struct _Con_M_TextJoin_s1
struct _Con_M_TextJoin_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextJoin_s1;
extern int step_M_TextJoin_s1(Sink,Term);

/* FUNCTION Prelude-TextJoin-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextJoin_s2 struct _Con_M_TextJoin_s2
struct _Con_M_TextJoin_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextJoin_s2;
extern int step_M_TextJoin_s2(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s2 struct _Con_M_U_MakeFunction2Inherited4_s2
struct _Con_M_U_MakeFunction2Inherited4_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s2;
extern int step_M_U_MakeFunction2Inherited4_s2(Sink,Term);

/* FUNCTION Prelude-StringConcat-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringConcat struct _Con_M_StringConcat
struct _Con_M_StringConcat {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringConcat;
extern int step_M_StringConcat(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s3 struct _Con_M_U_MakeFunction2Inherited4_s3
struct _Con_M_U_MakeFunction2Inherited4_s3 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s3;
extern int step_M_U_MakeFunction2Inherited4_s3(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s5 struct _Con_M_U_MakeFunction2Inherited4_s5
struct _Con_M_U_MakeFunction2Inherited4_s5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s5;
extern int step_M_U_MakeFunction2Inherited4_s5(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form2_s3 struct _Con_M_U_MakeAttribute2Form2_s3
struct _Con_M_U_MakeAttribute2Form2_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form2_s3;
extern int step_M_U_MakeAttribute2Form2_s3(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form2_s2 struct _Con_M_U_MakeAttribute2Form2_s2
struct _Con_M_U_MakeAttribute2Form2_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form2_s2;
extern int step_M_U_MakeAttribute2Form2_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes5- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes5 struct _Con_M_C_CrsxifyAttributes5
struct _Con_M_C_CrsxifyAttributes5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes5;
extern int step_M_C_CrsxifyAttributes5(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s1 struct _Con_M_U_MakeFunction2Inherited4_s1
struct _Con_M_U_MakeFunction2Inherited4_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s1;
extern int step_M_U_MakeFunction2Inherited4_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes6-1$C-CrsxifyAttributes6$A_DESCRIPTOR HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes6 struct _Con_M_C_CrsxifyAttributes6
struct _Con_M_C_CrsxifyAttributes6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes6;
extern int step_M_C_CrsxifyAttributes6(Sink,Term);

/* FUNCTION Util-U-MainSymbol1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol1_s1 struct _Con_M_U_MainSymbol1_s1
struct _Con_M_U_MainSymbol1_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol1_s1;
extern int step_M_U_MainSymbol1_s1(Sink,Term);

/* FUNCTION Util-U-MainSymbol1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol1_s2 struct _Con_M_U_MainSymbol1_s2
struct _Con_M_U_MainSymbol1_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol1_s2;
extern int step_M_U_MainSymbol1_s2(Sink,Term);

/* FUNCTION Util-DLE-Form-Form HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s10 struct _Con_M_U_DefineLessEqual_s10
struct _Con_M_U_DefineLessEqual_s10 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s10;
extern int step_M_U_DefineLessEqual_s10(Sink,Term);

/* FUNCTION Prelude-StringConcat3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringConcat3 struct _Con_M_StringConcat3
struct _Con_M_StringConcat3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringConcat3;
extern int step_M_StringConcat3(Sink,Term);

/* FUNCTION Util-DLE-Form-Rule HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s11 struct _Con_M_U_DefineLessEqual_s11
struct _Con_M_U_DefineLessEqual_s11 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s11;
extern int step_M_U_DefineLessEqual_s11(Sink,Term);

/* FUNCTION Util-DLE-Form-Synthesizes HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s12 struct _Con_M_U_DefineLessEqual_s12
struct _Con_M_U_DefineLessEqual_s12 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s12;
extern int step_M_U_DefineLessEqual_s12(Sink,Term);

/* FUNCTION Util-DLE-Rule- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s14 struct _Con_M_U_DefineLessEqual_s14
struct _Con_M_U_DefineLessEqual_s14 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s14;
extern int step_M_U_DefineLessEqual_s14(Sink,Term);

/* FUNCTION Cook-Unparse-Rule HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s9 struct _Con_M_C_Unparse_s9
struct _Con_M_C_Unparse_s9 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s9;
extern int step_M_C_Unparse_s9(Sink,Term);

/* FUNCTION Cook-Unparse-Nesting HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s8 struct _Con_M_C_Unparse_s8
struct _Con_M_C_Unparse_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s8;
extern int step_M_C_Unparse_s8(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess struct _Con_M_U_ParsedFormLess
struct _Con_M_U_ParsedFormLess {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess;
extern int step_M_U_ParsedFormLess(Sink,Term);

/* FUNCTION Cook-Unparse-Module HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s5 struct _Con_M_C_Unparse_s5
struct _Con_M_C_Unparse_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s5;
extern int step_M_C_Unparse_s5(Sink,Term);

/* FUNCTION Prelude-Length1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Length1_s1 struct _Con_M_Length1_s1
struct _Con_M_Length1_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Length1_s1;
extern int step_M_Length1_s1(Sink,Term);

/* FUNCTION Cook-Unparse-Module$C-Unparse$4$Hx_module HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s4 struct _Con_M_C_Unparse_s4
struct _Con_M_C_Unparse_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s4;
extern int step_M_C_Unparse_s4(Sink,Term);

/* FUNCTION Prelude-Length1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Length1_s2 struct _Con_M_Length1_s2
struct _Con_M_Length1_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Length1_s2;
extern int step_M_Length1_s2(Sink,Term);

/* FUNCTION Cook-Unparse-Import HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s7 struct _Con_M_C_Unparse_s7
struct _Con_M_C_Unparse_s7 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s7;
extern int step_M_C_Unparse_s7(Sink,Term);

/* FUNCTION Cook-Unparse-Fragment HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s6 struct _Con_M_C_Unparse_s6
struct _Con_M_C_Unparse_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s6;
extern int step_M_C_Unparse_s6(Sink,Term);

/* FUNCTION Util-U-InsertDefine4-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine4 struct _Con_M_U_InsertDefine4
struct _Con_M_U_InsertDefine4 {struct _Construction construction; Term sub[7]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine4;
extern int step_M_U_InsertDefine4(Sink,Term);

/* FUNCTION Cook-Unparse-NakedAlternative HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s2 struct _Con_M_C_Unparse_s2
struct _Con_M_C_Unparse_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s2;
extern int step_M_C_Unparse_s2(Sink,Term);

/* FUNCTION Cook-C-then-VariablesContain- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C__then_VariablesContain_s1 struct _Con_M_C__then_VariablesContain_s1
struct _Con_M_C__then_VariablesContain_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C__then_VariablesContain_s1;
extern int step_M_C__then_VariablesContain_s1(Sink,Term);

/* FUNCTION Cook-Unparse-Attribute HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s3 struct _Con_M_C_Unparse_s3
struct _Con_M_C_Unparse_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s3;
extern int step_M_C_Unparse_s3(Sink,Term);

/* FUNCTION Cook-C-then-VariablesContain-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C__then_VariablesContain_s2 struct _Con_M_C__then_VariablesContain_s2
struct _Con_M_C__then_VariablesContain_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C__then_VariablesContain_s2;
extern int step_M_C__then_VariablesContain_s2(Sink,Term);

/* FUNCTION Cook-Unparse- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_s1 struct _Con_M_C_Unparse_s1
struct _Con_M_C_Unparse_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_s1;
extern int step_M_C_Unparse_s1(Sink,Term);

/* FUNCTION Cook-C-then-VariablesContain-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C__then_VariablesContain_s4 struct _Con_M_C__then_VariablesContain_s4
struct _Con_M_C__then_VariablesContain_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C__then_VariablesContain_s4;
extern int step_M_C__then_VariablesContain_s4(Sink,Term);

/* FUNCTION Prelude-Tl- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Tl struct _Con_M_Tl
struct _Con_M_Tl {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Tl;
extern int step_M_Tl(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopSynthesized-2$C-AddAttributeTopSynthesized$1$Hx_Attribute HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopSynthesized_s1 struct _Con_M_C_AddAttributeTopSynthesized_s1
struct _Con_M_C_AddAttributeTopSynthesized_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopSynthesized_s1;
extern int step_M_C_AddAttributeTopSynthesized_s1(Sink,Term);

/* FUNCTION Cook-C-then-VariablesContain-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C__then_VariablesContain_s5 struct _Con_M_C__then_VariablesContain_s5
struct _Con_M_C__then_VariablesContain_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C__then_VariablesContain_s5;
extern int step_M_C__then_VariablesContain_s5(Sink,Term);

/* FUNCTION Cook-C-then-VariablesContain-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C__then_VariablesContain_s6 struct _Con_M_C__then_VariablesContain_s6
struct _Con_M_C__then_VariablesContain_s6 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C__then_VariablesContain_s6;
extern int step_M_C__then_VariablesContain_s6(Sink,Term);

/* FUNCTION Cook-C-then-VariablesContain-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C__then_VariablesContain_s7 struct _Con_M_C__then_VariablesContain_s7
struct _Con_M_C__then_VariablesContain_s7 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C__then_VariablesContain_s7;
extern int step_M_C__then_VariablesContain_s7(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopSynthesized-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopSynthesized_s5 struct _Con_M_C_AddAttributeTopSynthesized_s5
struct _Con_M_C_AddAttributeTopSynthesized_s5 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopSynthesized_s5;
extern int step_M_C_AddAttributeTopSynthesized_s5(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternativeDefine-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternativeDefine_s6 struct _Con_M_U_MakeDM_SortAlternativeDefine_s6
struct _Con_M_U_MakeDM_SortAlternativeDefine_s6 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternativeDefine_s6;
extern int step_M_U_MakeDM_SortAlternativeDefine_s6(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopSynthesized-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopSynthesized_s4 struct _Con_M_C_AddAttributeTopSynthesized_s4
struct _Con_M_C_AddAttributeTopSynthesized_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopSynthesized_s4;
extern int step_M_C_AddAttributeTopSynthesized_s4(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternativeDefine-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternativeDefine_s5 struct _Con_M_U_MakeDM_SortAlternativeDefine_s5
struct _Con_M_U_MakeDM_SortAlternativeDefine_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternativeDefine_s5;
extern int step_M_U_MakeDM_SortAlternativeDefine_s5(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopSynthesized-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopSynthesized_s3 struct _Con_M_C_AddAttributeTopSynthesized_s3
struct _Con_M_C_AddAttributeTopSynthesized_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopSynthesized_s3;
extern int step_M_C_AddAttributeTopSynthesized_s3(Sink,Term);

/* FUNCTION Util-U-then-NonMainSymbols1-1$U-then-NonMainSymbols1$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_NonMainSymbols1 struct _Con_M_U__then_NonMainSymbols1
struct _Con_M_U__then_NonMainSymbols1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_NonMainSymbols1;
extern int step_M_U__then_NonMainSymbols1(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternativeDefine-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternativeDefine_s4 struct _Con_M_U_MakeDM_SortAlternativeDefine_s4
struct _Con_M_U_MakeDM_SortAlternativeDefine_s4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternativeDefine_s4;
extern int step_M_U_MakeDM_SortAlternativeDefine_s4(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopSynthesized- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopSynthesized_s2 struct _Con_M_C_AddAttributeTopSynthesized_s2
struct _Con_M_C_AddAttributeTopSynthesized_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopSynthesized_s2;
extern int step_M_C_AddAttributeTopSynthesized_s2(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternativeDefine-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternativeDefine_s3 struct _Con_M_U_MakeDM_SortAlternativeDefine_s3
struct _Con_M_U_MakeDM_SortAlternativeDefine_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternativeDefine_s3;
extern int step_M_U_MakeDM_SortAlternativeDefine_s3(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s1 struct _Con_M_U_MakeAttribute2ValueSort3_s1
struct _Con_M_U_MakeAttribute2ValueSort3_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s1;
extern int step_M_U_MakeAttribute2ValueSort3_s1(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternativeDefine-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternativeDefine_s2 struct _Con_M_U_MakeDM_SortAlternativeDefine_s2
struct _Con_M_U_MakeDM_SortAlternativeDefine_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternativeDefine_s2;
extern int step_M_U_MakeDM_SortAlternativeDefine_s2(Sink,Term);

/* FUNCTION Util-U-InsertDefine1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine1 struct _Con_M_U_InsertDefine1
struct _Con_M_U_InsertDefine1 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine1;
extern int step_M_U_InsertDefine1(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternativeDefine-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternativeDefine_s1 struct _Con_M_U_MakeDM_SortAlternativeDefine_s1
struct _Con_M_U_MakeDM_SortAlternativeDefine_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternativeDefine_s1;
extern int step_M_U_MakeDM_SortAlternativeDefine_s1(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s3 struct _Con_M_U_MakeAttribute2ValueSort3_s3
struct _Con_M_U_MakeAttribute2ValueSort3_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s3;
extern int step_M_U_MakeAttribute2ValueSort3_s3(Sink,Term);

/* FUNCTION Util-U-InsertDefine2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine2 struct _Con_M_U_InsertDefine2
struct _Con_M_U_InsertDefine2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine2;
extern int step_M_U_InsertDefine2(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s2 struct _Con_M_U_MakeAttribute2ValueSort3_s2
struct _Con_M_U_MakeAttribute2ValueSort3_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s2;
extern int step_M_U_MakeAttribute2ValueSort3_s2(Sink,Term);

/* FUNCTION Util-U-InsertDefine3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine3 struct _Con_M_U_InsertDefine3
struct _Con_M_U_InsertDefine3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine3;
extern int step_M_U_InsertDefine3(Sink,Term);

/* FUNCTION Cook-C-Crsxify-1$C-Crsxify$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Crsxify struct _Con_M_C_Crsxify
struct _Con_M_C_Crsxify {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Crsxify;
extern int step_M_C_Crsxify(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s5 struct _Con_M_U_MakeAttribute2ValueSort3_s5
struct _Con_M_U_MakeAttribute2ValueSort3_s5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s5;
extern int step_M_U_MakeAttribute2ValueSort3_s5(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form2_s1 struct _Con_M_U_MakeAttribute2Form2_s1
struct _Con_M_U_MakeAttribute2Form2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form2_s1;
extern int step_M_U_MakeAttribute2Form2_s1(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s6 struct _Con_M_U_MakeAttribute2ValueSort3_s6
struct _Con_M_U_MakeAttribute2ValueSort3_s6 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s6;
extern int step_M_U_MakeAttribute2ValueSort3_s6(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes4-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes4 struct _Con_M_C_CrsxifyAttributes4
struct _Con_M_C_CrsxifyAttributes4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes4;
extern int step_M_C_CrsxifyAttributes4(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s7 struct _Con_M_U_MakeAttribute2ValueSort3_s7
struct _Con_M_U_MakeAttribute2ValueSort3_s7 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s7;
extern int step_M_U_MakeAttribute2ValueSort3_s7(Sink,Term);

/* FUNCTION Cook-C-Print-Token-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Token struct _Con_M_C_Print_Token
struct _Con_M_C_Print_Token {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Token;
extern int step_M_C_Print_Token(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes3 struct _Con_M_C_CrsxifyAttributes3
struct _Con_M_C_CrsxifyAttributes3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes3;
extern int step_M_C_CrsxifyAttributes3(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized struct _Con_M_U_MakeSort2Synthesized
struct _Con_M_U_MakeSort2Synthesized {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized;
extern int step_M_U_MakeSort2Synthesized(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s8 struct _Con_M_U_MakeAttribute2ValueSort3_s8
struct _Con_M_U_MakeAttribute2ValueSort3_s8 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s8;
extern int step_M_U_MakeAttribute2ValueSort3_s8(Sink,Term);

/* FUNCTION Prelude-ThenFilter-1$ThenFilter$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_ThenFilter struct _Con_M_ThenFilter
struct _Con_M_ThenFilter {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_ThenFilter;
extern int step_M_ThenFilter(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s9 struct _Con_M_U_MakeAttribute2ValueSort3_s9
struct _Con_M_U_MakeAttribute2ValueSort3_s9 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s9;
extern int step_M_U_MakeAttribute2ValueSort3_s9(Sink,Term);

/* FUNCTION Prelude-NameSetList1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_NameSetList1_s1 struct _Con_M_NameSetList1_s1
struct _Con_M_NameSetList1_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NameSetList1_s1;
extern int step_M_NameSetList1_s1(Sink,Term);

/* FUNCTION Util-U-ScopeSortTopSort-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ScopeSortTopSort_s1 struct _Con_M_U_ScopeSortTopSort_s1
struct _Con_M_U_ScopeSortTopSort_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ScopeSortTopSort_s1;
extern int step_M_U_ScopeSortTopSort_s1(Sink,Term);

/* FUNCTION Util-Resolve HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports struct _Con_M_U_ResolveImports
struct _Con_M_U_ResolveImports {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports;
extern int step_M_U_ResolveImports(Sink,Term);

/* FUNCTION Util-U-ScopeSortTopSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ScopeSortTopSort_s4 struct _Con_M_U_ScopeSortTopSort_s4
struct _Con_M_U_ScopeSortTopSort_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ScopeSortTopSort_s4;
extern int step_M_U_ScopeSortTopSort_s4(Sink,Term);

/* FUNCTION Prelude-UnionDisjointNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_UnionDisjointNames_s3 struct _Con_M_UnionDisjointNames_s3
struct _Con_M_UnionDisjointNames_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_UnionDisjointNames_s3;
extern int step_M_UnionDisjointNames_s3(Sink,Term);

/* FUNCTION Util-U-ScopeSortTopSort-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ScopeSortTopSort_s3 struct _Con_M_U_ScopeSortTopSort_s3
struct _Con_M_U_ScopeSortTopSort_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ScopeSortTopSort_s3;
extern int step_M_U_ScopeSortTopSort_s3(Sink,Term);

/* FUNCTION Util-U-SortNameWithRepeat-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortNameWithRepeat struct _Con_M_U_SortNameWithRepeat
struct _Con_M_U_SortNameWithRepeat {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortNameWithRepeat;
extern int step_M_U_SortNameWithRepeat(Sink,Term);

/* FUNCTION Prelude-UnionDisjointNames-1$UnionDisjointNames$2$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_UnionDisjointNames_s2 struct _Con_M_UnionDisjointNames_s2
struct _Con_M_UnionDisjointNames_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_UnionDisjointNames_s2;
extern int step_M_UnionDisjointNames_s2(Sink,Term);

/* FUNCTION Prelude-Filter-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Filter_s2 struct _Con_M_Filter_s2
struct _Con_M_Filter_s2 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_Filter_s2;
extern int step_M_Filter_s2(Sink,Term);

/* FUNCTION Prelude-Filter-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Filter_s3 struct _Con_M_Filter_s3
struct _Con_M_Filter_s3 {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_Filter_s3;
extern int step_M_Filter_s3(Sink,Term);

/* FUNCTION Prelude-Filter- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Filter_s1 struct _Con_M_Filter_s1
struct _Con_M_Filter_s1 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_Filter_s1;
extern int step_M_Filter_s1(Sink,Term);

/* FUNCTION Util-U-DefineLessEqual2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual2_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual2_s2;
extern int step_M_U_DefineLessEqual2_s2(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited struct _Con_M_C_AddTermTopInherited
struct _Con_M_C_AddTermTopInherited {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited;
extern int step_M_C_AddTermTopInherited(Sink,Term);

/* FUNCTION Util-U-DefineLessEqual2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual2_s1 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual2_s1;
extern int step_M_U_DefineLessEqual2_s1(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s2 struct _Con_M_C_AddTermSynthesized_s2
struct _Con_M_C_AddTermSynthesized_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s2;
extern int step_M_C_AddTermSynthesized_s2(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s15 struct _Con_M_U_MakeAttribute2KeySort3_s15
struct _Con_M_U_MakeAttribute2KeySort3_s15 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s15;
extern int step_M_U_MakeAttribute2KeySort3_s15(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s1 struct _Con_M_C_AddTermSynthesized_s1
struct _Con_M_C_AddTermSynthesized_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s1;
extern int step_M_C_AddTermSynthesized_s1(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s14 struct _Con_M_U_MakeAttribute2KeySort3_s14
struct _Con_M_U_MakeAttribute2KeySort3_s14 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s14;
extern int step_M_U_MakeAttribute2KeySort3_s14(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s4 struct _Con_M_C_AddTermSynthesized_s4
struct _Con_M_C_AddTermSynthesized_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s4;
extern int step_M_C_AddTermSynthesized_s4(Sink,Term);

/* FUNCTION Util-U-MakeDM-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_s1 struct _Con_M_U_MakeDM_s1
struct _Con_M_U_MakeDM_s1 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_s1;
extern int step_M_U_MakeDM_s1(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s13 struct _Con_M_U_MakeAttribute2KeySort3_s13
struct _Con_M_U_MakeAttribute2KeySort3_s13 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s13;
extern int step_M_U_MakeAttribute2KeySort3_s13(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s3 struct _Con_M_C_AddTermSynthesized_s3
struct _Con_M_C_AddTermSynthesized_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s3;
extern int step_M_C_AddTermSynthesized_s3(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s12 struct _Con_M_U_MakeAttribute2KeySort3_s12
struct _Con_M_U_MakeAttribute2KeySort3_s12 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s12;
extern int step_M_U_MakeAttribute2KeySort3_s12(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s11 struct _Con_M_U_MakeAttribute2KeySort3_s11
struct _Con_M_U_MakeAttribute2KeySort3_s11 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s11;
extern int step_M_U_MakeAttribute2KeySort3_s11(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort3_s10 struct _Con_M_U_MakeAttribute2KeySort3_s10
struct _Con_M_U_MakeAttribute2KeySort3_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort3_s10;
extern int step_M_U_MakeAttribute2KeySort3_s10(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s9 struct _Con_M_C_AddTermSynthesized_s9
struct _Con_M_C_AddTermSynthesized_s9 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s9;
extern int step_M_C_AddTermSynthesized_s9(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s6 struct _Con_M_C_AddTermSynthesized_s6
struct _Con_M_C_AddTermSynthesized_s6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s6;
extern int step_M_C_AddTermSynthesized_s6(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s5 struct _Con_M_C_AddTermSynthesized_s5
struct _Con_M_C_AddTermSynthesized_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s5;
extern int step_M_C_AddTermSynthesized_s5(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-9$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s8 struct _Con_M_C_AddTermSynthesized_s8
struct _Con_M_C_AddTermSynthesized_s8 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s8;
extern int step_M_C_AddTermSynthesized_s8(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-10 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s7 struct _Con_M_C_AddTermSynthesized_s7
struct _Con_M_C_AddTermSynthesized_s7 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s7;
extern int step_M_C_AddTermSynthesized_s7(Sink,Term);

/* FUNCTION Util-DLE-Rule-Synthesizes HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s18 struct _Con_M_U_DefineLessEqual_s18
struct _Con_M_U_DefineLessEqual_s18 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s18;
extern int step_M_U_DefineLessEqual_s18(Sink,Term);

/* FUNCTION Util-DLE-Rule-Rule HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s17 struct _Con_M_U_DefineLessEqual_s17
struct _Con_M_U_DefineLessEqual_s17 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s17;
extern int step_M_U_DefineLessEqual_s17(Sink,Term);

/* FUNCTION Util-DLE-Rule-Form HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s16 struct _Con_M_U_DefineLessEqual_s16
struct _Con_M_U_DefineLessEqual_s16 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s16;
extern int step_M_U_DefineLessEqual_s16(Sink,Term);

/* FUNCTION Util-DLE-Rule-Abstraction HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s15 struct _Con_M_U_DefineLessEqual_s15
struct _Con_M_U_DefineLessEqual_s15 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s15;
extern int step_M_U_DefineLessEqual_s15(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s9 struct _Con_M_U_MakeFunction2Inherited4_s9
struct _Con_M_U_MakeFunction2Inherited4_s9 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s9;
extern int step_M_U_MakeFunction2Inherited4_s9(Sink,Term);

/* FUNCTION Util-U-FormInheritedAttributes-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormInheritedAttributes_s1 struct _Con_M_U_FormInheritedAttributes_s1
struct _Con_M_U_FormInheritedAttributes_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormInheritedAttributes_s1;
extern int step_M_U_FormInheritedAttributes_s1(Sink,Term);

/* FUNCTION Util-DLE-Syntesizes-Synthesizes HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s24 struct _Con_M_U_DefineLessEqual_s24
struct _Con_M_U_DefineLessEqual_s24 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s24;
extern int step_M_U_DefineLessEqual_s24(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s8 struct _Con_M_U_MakeFunction2Inherited4_s8
struct _Con_M_U_MakeFunction2Inherited4_s8 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s8;
extern int step_M_U_MakeFunction2Inherited4_s8(Sink,Term);

/* FUNCTION Util-U-FormInheritedAttributes-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormInheritedAttributes_s2 struct _Con_M_U_FormInheritedAttributes_s2
struct _Con_M_U_FormInheritedAttributes_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormInheritedAttributes_s2;
extern int step_M_U_FormInheritedAttributes_s2(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s7 struct _Con_M_U_MakeFunction2Inherited4_s7
struct _Con_M_U_MakeFunction2Inherited4_s7 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s7;
extern int step_M_U_MakeFunction2Inherited4_s7(Sink,Term);

/* FUNCTION Util-DLE-Synthesizes-Form HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s22 struct _Con_M_U_DefineLessEqual_s22
struct _Con_M_U_DefineLessEqual_s22 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s22;
extern int step_M_U_DefineLessEqual_s22(Sink,Term);

/* FUNCTION Util-U-MakeFunction2Inherited4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeFunction2Inherited4_s6 struct _Con_M_U_MakeFunction2Inherited4_s6
struct _Con_M_U_MakeFunction2Inherited4_s6 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeFunction2Inherited4_s6;
extern int step_M_U_MakeFunction2Inherited4_s6(Sink,Term);

/* FUNCTION Util-DLE-Synthesizes-Rule HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s23 struct _Con_M_U_DefineLessEqual_s23
struct _Con_M_U_DefineLessEqual_s23 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s23;
extern int step_M_U_DefineLessEqual_s23(Sink,Term);

/* FUNCTION Util-DLE-Synt HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s20 struct _Con_M_U_DefineLessEqual_s20
struct _Con_M_U_DefineLessEqual_s20 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s20;
extern int step_M_U_DefineLessEqual_s20(Sink,Term);

/* FUNCTION Util-DLE-Synthesizes-Abstraction HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual_s21 struct _Con_M_U_DefineLessEqual_s21
struct _Con_M_U_DefineLessEqual_s21 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual_s21;
extern int step_M_U_DefineLessEqual_s21(Sink,Term);

/* FUNCTION Prep-P-Production-Defines-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines_s10 struct _Con_M_P_Production_Defines_s10
struct _Con_M_P_Production_Defines_s10 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines_s10;
extern int step_M_P_Production_Defines_s10(Sink,Term);

/* FUNCTION Util-U-then-ExtendDeclarationMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_ExtendDeclarationMap_s1 struct _Con_M_U__then_ExtendDeclarationMap_s1
struct _Con_M_U__then_ExtendDeclarationMap_s1 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U__then_ExtendDeclarationMap_s1;
extern int step_M_U__then_ExtendDeclarationMap_s1(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-WrapPattern2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_WrapPattern2 struct _Con_M_C_ScopeSort_WrapPattern2
struct _Con_M_C_ScopeSort_WrapPattern2 {struct _Construction construction; Term sub[5]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_WrapPattern2;
extern int step_M_C_ScopeSort_WrapPattern2(Sink,Term);

/* FUNCTION Util-U-FormInheritedAttributes- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormInheritedAttributes struct _Con_M_U_FormInheritedAttributes
struct _Con_M_U_FormInheritedAttributes {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormInheritedAttributes;
extern int step_M_U_FormInheritedAttributes(Sink,Term);

/* FUNCTION Util-U-SortRepeatString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortRepeatString struct _Con_M_U_SortRepeatString
struct _Con_M_U_SortRepeatString {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortRepeatString;
extern int step_M_U_SortRepeatString(Sink,Term);

/* FUNCTION Prelude-ContainsNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_ContainsNames struct _Con_M_ContainsNames
struct _Con_M_ContainsNames {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_ContainsNames;
extern int step_M_ContainsNames(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAbstractionDefines2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAbstractionDefines2_s1 struct _Con_M_U_MakeDM_SortAbstractionDefines2_s1
struct _Con_M_U_MakeDM_SortAbstractionDefines2_s1 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAbstractionDefines2_s1;
extern int step_M_U_MakeDM_SortAbstractionDefines2_s1(Sink,Term);

/* FUNCTION Util-U-MakeDM-ExtraInformation1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_ExtraInformation1_s2 struct _Con_M_U_MakeDM_ExtraInformation1_s2
struct _Con_M_U_MakeDM_ExtraInformation1_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_ExtraInformation1_s2;
extern int step_M_U_MakeDM_ExtraInformation1_s2(Sink,Term);

/* FUNCTION Util-U-MakeDM-ExtraInformation1-1$U-MakeDM-ExtraInformation1$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_ExtraInformation1_s1 struct _Con_M_U_MakeDM_ExtraInformation1_s1
struct _Con_M_U_MakeDM_ExtraInformation1_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_ExtraInformation1_s1;
extern int step_M_U_MakeDM_ExtraInformation1_s1(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAbstractionDefines2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAbstractionDefines2_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAbstractionDefines2_s2;
extern int step_M_U_MakeDM_SortAbstractionDefines2_s2(Sink,Term);

/* FUNCTION Util-U-DefineLessEqual2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineLessEqual2 struct _Con_M_U_DefineLessEqual2
struct _Con_M_U_DefineLessEqual2 {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineLessEqual2;
extern int step_M_U_DefineLessEqual2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyMetaVariable-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyMetaVariable struct _Con_M_C_CrsxifyMetaVariable
struct _Con_M_C_CrsxifyMetaVariable {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyMetaVariable;
extern int step_M_C_CrsxifyMetaVariable(Sink,Term);

/* FUNCTION Prelude-Min2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Min2 struct _Con_M_Min2
struct _Con_M_Min2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Min2;
extern int step_M_Min2(Sink,Term);

/* FUNCTION Prelude-JoinTextMaps2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_JoinTextMaps2 struct _Con_M_JoinTextMaps2
struct _Con_M_JoinTextMaps2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JoinTextMaps2;
extern int step_M_JoinTextMaps2(Sink,Term);

/* FUNCTION Prelude-RemoveFirstName-1$RemoveFirstName$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_RemoveFirstName struct _Con_M_RemoveFirstName
struct _Con_M_RemoveFirstName {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_RemoveFirstName;
extern int step_M_RemoveFirstName(Sink,Term);

/* FUNCTION Cook-C-CrsxifyScope-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyScope_s1 struct _Con_M_C_CrsxifyScope_s1
struct _Con_M_C_CrsxifyScope_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyScope_s1;
extern int step_M_C_CrsxifyScope_s1(Sink,Term);

/* FUNCTION Prelude-Or- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Or struct _Con_M_Or
struct _Con_M_Or {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Or;
extern int step_M_Or(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s3 struct _Con_M_U_ParsedFormLess_s3
struct _Con_M_U_ParsedFormLess_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s3;
extern int step_M_U_ParsedFormLess_s3(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAbstractionDefines2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAbstractionDefines2 struct _Con_M_U_MakeDM_SortAbstractionDefines2
struct _Con_M_U_MakeDM_SortAbstractionDefines2 {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAbstractionDefines2;
extern int step_M_U_MakeDM_SortAbstractionDefines2(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s4 struct _Con_M_U_ParsedFormLess_s4
struct _Con_M_U_ParsedFormLess_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s4;
extern int step_M_U_ParsedFormLess_s4(Sink,Term);

/* FUNCTION Prep-P-hx-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__hx struct _Con_M_P__hx
struct _Con_M_P__hx {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__hx;
extern int step_M_P__hx(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s5 struct _Con_M_U_ParsedFormLess_s5
struct _Con_M_U_ParsedFormLess_s5 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s5;
extern int step_M_U_ParsedFormLess_s5(Sink,Term);

/* FUNCTION Prelude-NameSetList1-1$NameSetList1$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_NameSetList1 struct _Con_M_NameSetList1
struct _Con_M_NameSetList1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NameSetList1;
extern int step_M_NameSetList1(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s1 struct _Con_M_U_ParsedFormLess_s1
struct _Con_M_U_ParsedFormLess_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s1;
extern int step_M_U_ParsedFormLess_s1(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s6 struct _Con_M_U_ParsedFormLess_s6
struct _Con_M_U_ParsedFormLess_s6 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s6;
extern int step_M_U_ParsedFormLess_s6(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s7 struct _Con_M_U_ParsedFormLess_s7
struct _Con_M_U_ParsedFormLess_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s7;
extern int step_M_U_ParsedFormLess_s7(Sink,Term);

/* FUNCTION Prelude-TextToStringWhen-1$TextToStringWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextToStringWhen struct _Con_M_TextToStringWhen
struct _Con_M_TextToStringWhen {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextToStringWhen;
extern int step_M_TextToStringWhen(Sink,Term);

/* FUNCTION Util-U-ParsedFormLess- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormLess_s9 struct _Con_M_U_ParsedFormLess_s9
struct _Con_M_U_ParsedFormLess_s9 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormLess_s9;
extern int step_M_U_ParsedFormLess_s9(Sink,Term);

/* FUNCTION Cook-C-AD-AddAttributeTerm-1$C-AD-AddAttributeTerm$A_DESCRIPTOR HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AD_AddAttributeTerm struct _Con_M_C_AD_AddAttributeTerm
struct _Con_M_C_AD_AddAttributeTerm {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AD_AddAttributeTerm;
extern int step_M_C_AD_AddAttributeTerm(Sink,Term);

/* FUNCTION Text-Embed-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Embed struct _Con_M_Text_Embed
struct _Con_M_Text_Embed {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Embed;
extern int step_M_Text_Embed(Sink,Term);

/* FUNCTION Prelude-TextPartToString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextPartToString_s2 struct _Con_M_TextPartToString_s2
struct _Con_M_TextPartToString_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextPartToString_s2;
extern int step_M_TextPartToString_s2(Sink,Term);

/* FUNCTION Prelude-TextPartToString-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextPartToString_s3 struct _Con_M_TextPartToString_s3
struct _Con_M_TextPartToString_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextPartToString_s3;
extern int step_M_TextPartToString_s3(Sink,Term);

/* FUNCTION Util-U-MainSymbol-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol;
extern int step_M_U_MainSymbol(Sink,Term);

/* FUNCTION Prelude-TextPartToString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextPartToString_s1 struct _Con_M_TextPartToString_s1
struct _Con_M_TextPartToString_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextPartToString_s1;
extern int step_M_TextPartToString_s1(Sink,Term);

/* FUNCTION Prelude-TextPartToString-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextPartToString_s6 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_TextPartToString_s6;
extern int step_M_TextPartToString_s6(Sink,Term);

/* FUNCTION Prelude-TextPartToString-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextPartToString_s4 struct _Con_M_TextPartToString_s4
struct _Con_M_TextPartToString_s4 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextPartToString_s4;
extern int step_M_TextPartToString_s4(Sink,Term);

/* FUNCTION Prelude-JoinTextMaps-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_JoinTextMaps_s1 struct _Con_M_JoinTextMaps_s1
struct _Con_M_JoinTextMaps_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_JoinTextMaps_s1;
extern int step_M_JoinTextMaps_s1(Sink,Term);

/* FUNCTION Prelude-TextPartToString-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextPartToString_s5 struct _Con_M_TextPartToString_s5
struct _Con_M_TextPartToString_s5 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextPartToString_s5;
extern int step_M_TextPartToString_s5(Sink,Term);

/* FUNCTION Util-U-InsertDefines- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefines struct _Con_M_U_InsertDefines
struct _Con_M_U_InsertDefines {struct _Construction construction; Term sub[5]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefines;
extern int step_M_U_InsertDefines(Sink,Term);

/* FUNCTION Util-U-Defines-NoSyntax- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Defines_NoSyntax struct _Con_M_U_Defines_NoSyntax
struct _Con_M_U_Defines_NoSyntax {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Defines_NoSyntax;
extern int step_M_U_Defines_NoSyntax(Sink,Term);

/* FUNCTION Util-U-EntryConstructors- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_EntryConstructors struct _Con_M_U_EntryConstructors
struct _Con_M_U_EntryConstructors {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_EntryConstructors;
extern int step_M_U_EntryConstructors(Sink,Term);

/* FUNCTION Prelude-TraceAddName-1$TraceAddName$1$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_TraceAddName_s1 struct _Con_M_TraceAddName_s1
struct _Con_M_TraceAddName_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TraceAddName_s1;
extern int step_M_TraceAddName_s1(Sink,Term);

/* FUNCTION Prelude-TraceAddName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TraceAddName_s2 struct _Con_M_TraceAddName_s2
struct _Con_M_TraceAddName_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TraceAddName_s2;
extern int step_M_TraceAddName_s2(Sink,Term);

/* FUNCTION Cook-C-SortMap-GetMetaVariables-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap_GetMetaVariables_s1 struct _Con_M_C_SortMap_GetMetaVariables_s1
struct _Con_M_C_SortMap_GetMetaVariables_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap_GetMetaVariables_s1;
extern int step_M_C_SortMap_GetMetaVariables_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule1-1$C-UnsynthesizeRule1$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule1_s1 struct _Con_M_C_UnsynthesizeRule1_s1
struct _Con_M_C_UnsynthesizeRule1_s1 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule1_s1;
extern int step_M_C_UnsynthesizeRule1_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule1_s2 struct _Con_M_C_UnsynthesizeRule1_s2
struct _Con_M_C_UnsynthesizeRule1_s2 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule1_s2;
extern int step_M_C_UnsynthesizeRule1_s2(Sink,Term);

/* FUNCTION Cook-C-Print-Alternatives-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Alternatives_s8 struct _Con_M_C_Print_Alternatives_s8
struct _Con_M_C_Print_Alternatives_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Alternatives_s8;
extern int step_M_C_Print_Alternatives_s8(Sink,Term);

/* FUNCTION Cook-C-Print-Alternatives-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Alternatives_s5 struct _Con_M_C_Print_Alternatives_s5
struct _Con_M_C_Print_Alternatives_s5 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Alternatives_s5;
extern int step_M_C_Print_Alternatives_s5(Sink,Term);

/* FUNCTION Cook-C-Print-Alternatives-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Alternatives_s4 struct _Con_M_C_Print_Alternatives_s4
struct _Con_M_C_Print_Alternatives_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Alternatives_s4;
extern int step_M_C_Print_Alternatives_s4(Sink,Term);

/* FUNCTION Cook-C-Print-Alternatives-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Alternatives_s7 struct _Con_M_C_Print_Alternatives_s7
struct _Con_M_C_Print_Alternatives_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Alternatives_s7;
extern int step_M_C_Print_Alternatives_s7(Sink,Term);

/* FUNCTION Cook-C-Print-Alternatives-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Alternatives_s6 struct _Con_M_C_Print_Alternatives_s6
struct _Con_M_C_Print_Alternatives_s6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Alternatives_s6;
extern int step_M_C_Print_Alternatives_s6(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols;
extern int step_M_U_NonMainSymbols(Sink,Term);

/* FUNCTION Util-U-TestIfSort1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1 struct _Con_M_U_TestIfSort1
struct _Con_M_U_TestIfSort1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1;
extern int step_M_U_TestIfSort1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeScope-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeScope_s1 struct _Con_M_C_UnsynthesizeScope_s1
struct _Con_M_C_UnsynthesizeScope_s1 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeScope_s1;
extern int step_M_C_UnsynthesizeScope_s1(Sink,Term);

/* FUNCTION Prep-P-PrintEnvironment-1$P-PrintEnvironment$Hx_top-module HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_PrintEnvironment struct _Con_M_P_PrintEnvironment
struct _Con_M_P_PrintEnvironment {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_PrintEnvironment;
extern int step_M_P_PrintEnvironment(Sink,Term);

/* FUNCTION Cook-C-Print-Alternatives-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Alternatives_s2 struct _Con_M_C_Print_Alternatives_s2
struct _Con_M_C_Print_Alternatives_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Alternatives_s2;
extern int step_M_C_Print_Alternatives_s2(Sink,Term);

/* FUNCTION Cook-C-Print-Alternatives-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Alternatives_s3 struct _Con_M_C_Print_Alternatives_s3
struct _Con_M_C_Print_Alternatives_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Alternatives_s3;
extern int step_M_C_Print_Alternatives_s3(Sink,Term);

/* FUNCTION Cook-C-Print-Alternatives- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Alternatives_s1 struct _Con_M_C_Print_Alternatives_s1
struct _Con_M_C_Print_Alternatives_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Alternatives_s1;
extern int step_M_C_Print_Alternatives_s1(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-6$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s13 struct _Con_M_C_AddTermInnerSynthesized_s13
struct _Con_M_C_AddTermInnerSynthesized_s13 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s13;
extern int step_M_C_AddTermInnerSynthesized_s13(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s11 struct _Con_M_C_AddTermInnerSynthesized_s11
struct _Con_M_C_AddTermInnerSynthesized_s11 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s11;
extern int step_M_C_AddTermInnerSynthesized_s11(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-5$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s10 struct _Con_M_C_AddTermInnerSynthesized_s10
struct _Con_M_C_AddTermInnerSynthesized_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s10;
extern int step_M_C_AddTermInnerSynthesized_s10(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-TextFrom- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_TextFrom_s3 struct _Con_M_C_ParsedForm_TextFrom_s3
struct _Con_M_C_ParsedForm_TextFrom_s3 {struct _Construction construction; Term sub[7]; Variable binder[9];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_TextFrom_s3;
extern int step_M_C_ParsedForm_TextFrom_s3(Sink,Term);

/* FUNCTION Util-U-FormString- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormString struct _Con_M_U_FormString
struct _Con_M_U_FormString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormString;
extern int step_M_U_FormString(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-TextFrom-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_TextFrom_s4 struct _Con_M_C_ParsedForm_TextFrom_s4
struct _Con_M_C_ParsedForm_TextFrom_s4 {struct _Construction construction; Term sub[9]; Variable binder[9];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_TextFrom_s4;
extern int step_M_C_ParsedForm_TextFrom_s4(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-TextFrom-4$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_TextFrom_s6 struct _Con_M_C_ParsedForm_TextFrom_s6
struct _Con_M_C_ParsedForm_TextFrom_s6 {struct _Construction construction; Term sub[9]; Variable binder[9];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_TextFrom_s6;
extern int step_M_C_ParsedForm_TextFrom_s6(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-TextFrom-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_TextFrom_s1 struct _Con_M_C_ParsedForm_TextFrom_s1
struct _Con_M_C_ParsedForm_TextFrom_s1 {struct _Construction construction; Term sub[5]; Variable binder[9];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_TextFrom_s1;
extern int step_M_C_ParsedForm_TextFrom_s1(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-TextFrom-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_TextFrom_s2 struct _Con_M_C_ParsedForm_TextFrom_s2
struct _Con_M_C_ParsedForm_TextFrom_s2 {struct _Construction construction; Term sub[7]; Variable binder[9];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_TextFrom_s2;
extern int step_M_C_ParsedForm_TextFrom_s2(Sink,Term);

/* FUNCTION Prelude-Trim-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Trim struct _Con_M_Trim
struct _Con_M_Trim {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Trim;
extern int step_M_Trim(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-TextFrom-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_TextFrom_s7 struct _Con_M_C_ParsedForm_TextFrom_s7
struct _Con_M_C_ParsedForm_TextFrom_s7 {struct _Construction construction; Term sub[9]; Variable binder[9];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_TextFrom_s7;
extern int step_M_C_ParsedForm_TextFrom_s7(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-TextFrom-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_TextFrom_s8 struct _Con_M_C_ParsedForm_TextFrom_s8
struct _Con_M_C_ParsedForm_TextFrom_s8 {struct _Construction construction; Term sub[7]; Variable binder[9];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_TextFrom_s8;
extern int step_M_C_ParsedForm_TextFrom_s8(Sink,Term);

/* FUNCTION Cook-C-Text-dagger-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Text__dagger struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_Text__dagger;
extern int step_M_C_Text__dagger(Sink,Term);

/* FUNCTION Util-U-DefineString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString_s4 struct _Con_M_U_DefineString_s4
struct _Con_M_U_DefineString_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString_s4;
extern int step_M_U_DefineString_s4(Sink,Term);

/* FUNCTION Util-U-DefineString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString_s5 struct _Con_M_U_DefineString_s5
struct _Con_M_U_DefineString_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString_s5;
extern int step_M_U_DefineString_s5(Sink,Term);

/* FUNCTION Prelude-StringJoin1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringJoin1_s2 struct _Con_M_StringJoin1_s2
struct _Con_M_StringJoin1_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringJoin1_s2;
extern int step_M_StringJoin1_s2(Sink,Term);

/* FUNCTION Prelude-StringJoin1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringJoin1_s1 struct _Con_M_StringJoin1_s1
struct _Con_M_StringJoin1_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringJoin1_s1;
extern int step_M_StringJoin1_s1(Sink,Term);

/* FUNCTION Util-U-DefineString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString_s1 struct _Con_M_U_DefineString_s1
struct _Con_M_U_DefineString_s1 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString_s1;
extern int step_M_U_DefineString_s1(Sink,Term);

/* FUNCTION Util-U-DefineString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString_s2 struct _Con_M_U_DefineString_s2
struct _Con_M_U_DefineString_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString_s2;
extern int step_M_U_DefineString_s2(Sink,Term);

/* FUNCTION Util-U-DefineString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString_s3 struct _Con_M_U_DefineString_s3
struct _Con_M_U_DefineString_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString_s3;
extern int step_M_U_DefineString_s3(Sink,Term);

/* FUNCTION Prep-Lexical- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical2 struct _Con_M_P_Lexical2
struct _Con_M_P_Lexical2 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical2;
extern int step_M_P_Lexical2(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2_s9 struct _Con_M_C_Unsynthesize2_s9
struct _Con_M_C_Unsynthesize2_s9 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2_s9;
extern int step_M_C_Unsynthesize2_s9(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2_s7 struct _Con_M_C_Unsynthesize2_s7
struct _Con_M_C_Unsynthesize2_s7 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2_s7;
extern int step_M_C_Unsynthesize2_s7(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2_s8 struct _Con_M_C_Unsynthesize2_s8
struct _Con_M_C_Unsynthesize2_s8 {struct _Construction construction; Term sub[10]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2_s8;
extern int step_M_C_Unsynthesize2_s8(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2_s5 struct _Con_M_C_Unsynthesize2_s5
struct _Con_M_C_Unsynthesize2_s5 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2_s5;
extern int step_M_C_Unsynthesize2_s5(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2_s6 struct _Con_M_C_Unsynthesize2_s6
struct _Con_M_C_Unsynthesize2_s6 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2_s6;
extern int step_M_C_Unsynthesize2_s6(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2_s3 struct _Con_M_C_Unsynthesize2_s3
struct _Con_M_C_Unsynthesize2_s3 {struct _Construction construction; Term sub[9]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2_s3;
extern int step_M_C_Unsynthesize2_s3(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2_s4 struct _Con_M_C_Unsynthesize2_s4
struct _Con_M_C_Unsynthesize2_s4 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2_s4;
extern int step_M_C_Unsynthesize2_s4(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure-1$Name2NamesClosure$N2Ns HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure struct _Con_M_Name2NamesClosure
struct _Con_M_Name2NamesClosure {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure;
extern int step_M_Name2NamesClosure(Sink,Term);

/* FUNCTION Util-U-Qualify-AttributeForm-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Qualify_AttributeForm_s2 struct _Con_M_U_Qualify_AttributeForm_s2
struct _Con_M_U_Qualify_AttributeForm_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Qualify_AttributeForm_s2;
extern int step_M_U_Qualify_AttributeForm_s2(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2_s1 struct _Con_M_C_Unsynthesize2_s1
struct _Con_M_C_Unsynthesize2_s1 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2_s1;
extern int step_M_C_Unsynthesize2_s1(Sink,Term);

/* FUNCTION Util-U-Qualify-AttributeForm-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Qualify_AttributeForm_s3 struct _Con_M_U_Qualify_AttributeForm_s3
struct _Con_M_U_Qualify_AttributeForm_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Qualify_AttributeForm_s3;
extern int step_M_U_Qualify_AttributeForm_s3(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize2_s2 struct _Con_M_C_Unsynthesize2_s2
struct _Con_M_C_Unsynthesize2_s2 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize2_s2;
extern int step_M_C_Unsynthesize2_s2(Sink,Term);

/* FUNCTION Util-U-Qualify-AttributeForm-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Qualify_AttributeForm_s1 struct _Con_M_U_Qualify_AttributeForm_s1
struct _Con_M_U_Qualify_AttributeForm_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Qualify_AttributeForm_s1;
extern int step_M_U_Qualify_AttributeForm_s1(Sink,Term);

/* FUNCTION Prelude-Length-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Length struct _Con_M_Length
struct _Con_M_Length {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Length;
extern int step_M_Length(Sink,Term);

/* FUNCTION Cook-C-Unparse-Form-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Form_s1 struct _Con_M_C_Unparse_Form_s1
struct _Con_M_C_Unparse_Form_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Form_s1;
extern int step_M_C_Unparse_Form_s1(Sink,Term);

/* FUNCTION Cook-C-Unparse-Form-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Form_s2 struct _Con_M_C_Unparse_Form_s2
struct _Con_M_C_Unparse_Form_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Form_s2;
extern int step_M_C_Unparse_Form_s2(Sink,Term);

/* FUNCTION Prelude-NameSetList-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_NameSetList struct _Con_M_NameSetList
struct _Con_M_NameSetList {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_NameSetList;
extern int step_M_NameSetList(Sink,Term);

/* FUNCTION Prep-P-ProductionNameWithPrecRepeatText-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionNameWithPrecRepeatText_s3 struct _Con_M_P_ProductionNameWithPrecRepeatText_s3
struct _Con_M_P_ProductionNameWithPrecRepeatText_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionNameWithPrecRepeatText_s3;
extern int step_M_P_ProductionNameWithPrecRepeatText_s3(Sink,Term);

/* FUNCTION Text-Print1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print1_s3 struct _Con_M_Text_Print1_s3
struct _Con_M_Text_Print1_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print1_s3;
extern int step_M_Text_Print1_s3(Sink,Term);

/* FUNCTION Prep-P-ProductionNameWithPrecRepeatText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionNameWithPrecRepeatText_s4 struct _Con_M_P_ProductionNameWithPrecRepeatText_s4
struct _Con_M_P_ProductionNameWithPrecRepeatText_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionNameWithPrecRepeatText_s4;
extern int step_M_P_ProductionNameWithPrecRepeatText_s4(Sink,Term);

/* FUNCTION Prelude-StringToNumericWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringToNumericWhen_s1 struct _Con_M_StringToNumericWhen_s1
struct _Con_M_StringToNumericWhen_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringToNumericWhen_s1;
extern int step_M_StringToNumericWhen_s1(Sink,Term);

/* FUNCTION Text-Print1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print1_s2 struct _Con_M_Text_Print1_s2
struct _Con_M_Text_Print1_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print1_s2;
extern int step_M_Text_Print1_s2(Sink,Term);

/* FUNCTION Prep-P-ProductionNameWithPrecRepeatText- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionNameWithPrecRepeatText_s1 struct _Con_M_P_ProductionNameWithPrecRepeatText_s1
struct _Con_M_P_ProductionNameWithPrecRepeatText_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionNameWithPrecRepeatText_s1;
extern int step_M_P_ProductionNameWithPrecRepeatText_s1(Sink,Term);

/* FUNCTION Text-Print1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print1_s1 struct _Con_M_Text_Print1_s1
struct _Con_M_Text_Print1_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print1_s1;
extern int step_M_Text_Print1_s1(Sink,Term);

/* FUNCTION Prep-P-ProductionNameWithPrecRepeatText-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionNameWithPrecRepeatText_s2 struct _Con_M_P_ProductionNameWithPrecRepeatText_s2
struct _Con_M_P_ProductionNameWithPrecRepeatText_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionNameWithPrecRepeatText_s2;
extern int step_M_P_ProductionNameWithPrecRepeatText_s2(Sink,Term);

/* FUNCTION Util-U-then-InsertDefines-1$U-then-InsertDefines$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_InsertDefines struct _Con_M_U__then_InsertDefines
struct _Con_M_U__then_InsertDefines {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U__then_InsertDefines;
extern int step_M_U__then_InsertDefines(Sink,Term);

/* FUNCTION Text-Print1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print1_s7 struct _Con_M_Text_Print1_s7
struct _Con_M_Text_Print1_s7 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print1_s7;
extern int step_M_Text_Print1_s7(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish_s1 struct _Con_M_U_MakeDM_Finish_s1
struct _Con_M_U_MakeDM_Finish_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish_s1;
extern int step_M_U_MakeDM_Finish_s1(Sink,Term);

/* FUNCTION Text-Print1-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print1_s6 struct _Con_M_Text_Print1_s6
struct _Con_M_Text_Print1_s6 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print1_s6;
extern int step_M_Text_Print1_s6(Sink,Term);

/* FUNCTION Text-Print1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print1_s5 struct _Con_M_Text_Print1_s5
struct _Con_M_Text_Print1_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print1_s5;
extern int step_M_Text_Print1_s5(Sink,Term);

/* FUNCTION Text-Print1-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print1_s4 struct _Con_M_Text_Print1_s4
struct _Con_M_Text_Print1_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print1_s4;
extern int step_M_Text_Print1_s4(Sink,Term);

/* FUNCTION Text-Print1-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print1_s9 struct _Con_M_Text_Print1_s9
struct _Con_M_Text_Print1_s9 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print1_s9;
extern int step_M_Text_Print1_s9(Sink,Term);

/* FUNCTION Text-Print1-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print1_s8 struct _Con_M_Text_Print1_s8
struct _Con_M_Text_Print1_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print1_s8;
extern int step_M_Text_Print1_s8(Sink,Term);

/* FUNCTION Util-U-DefineWrapperSugar- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineWrapperSugar struct _Con_M_U_DefineWrapperSugar
struct _Con_M_U_DefineWrapperSugar {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineWrapperSugar;
extern int step_M_U_DefineWrapperSugar(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRulePriority-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRulePriority_s1 struct _Con_M_C_CrsxifyRulePriority_s1
struct _Con_M_C_CrsxifyRulePriority_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRulePriority_s1;
extern int step_M_C_CrsxifyRulePriority_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRulePriority-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRulePriority_s3 struct _Con_M_C_CrsxifyRulePriority_s3
struct _Con_M_C_CrsxifyRulePriority_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRulePriority_s3;
extern int step_M_C_CrsxifyRulePriority_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRulePriority-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRulePriority_s2 struct _Con_M_C_CrsxifyRulePriority_s2
struct _Con_M_C_CrsxifyRulePriority_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRulePriority_s2;
extern int step_M_C_CrsxifyRulePriority_s2(Sink,Term);

/* FUNCTION Util-U-InheritedRefsList-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InheritedRefsList_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_InheritedRefsList_s2;
extern int step_M_U_InheritedRefsList_s2(Sink,Term);

/* FUNCTION Prep-Prep-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Prep_s2 struct _Con_M_Prep_s2
struct _Con_M_Prep_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Prep_s2;
extern int step_M_Prep_s2(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExp- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExp struct _Con_M_P_DeclareRegExp
struct _Con_M_P_DeclareRegExp {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExp;
extern int step_M_P_DeclareRegExp(Sink,Term);

/* FUNCTION Prep-Prep-1$Prep$1$Hx_module HEADER DECLARATIONS. */
#define STRUCT_Con_M_Prep_s1 struct _Con_M_Prep_s1
struct _Con_M_Prep_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Prep_s1;
extern int step_M_Prep_s1(Sink,Term);

/* FUNCTION Util-U-InheritedRefsList-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InheritedRefsList_s1 struct _Con_M_U_InheritedRefsList_s1
struct _Con_M_U_InheritedRefsList_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_InheritedRefsList_s1;
extern int step_M_U_InheritedRefsList_s1(Sink,Term);

/* FUNCTION Cook-C-PrintWrap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_PrintWrap struct _Con_M_C_PrintWrap
struct _Con_M_C_PrintWrap {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_PrintWrap;
extern int step_M_C_PrintWrap(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts3-2$C-GetConstructorScopeSorts3$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts3 struct _Con_M_C_GetConstructorScopeSorts3
struct _Con_M_C_GetConstructorScopeSorts3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts3;
extern int step_M_C_GetConstructorScopeSorts3(Sink,Term);

/* FUNCTION Prep-P-InlineRegExp2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExp2_s2 struct _Con_M_P_InlineRegExp2_s2
struct _Con_M_P_InlineRegExp2_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExp2_s2;
extern int step_M_P_InlineRegExp2_s2(Sink,Term);

/* FUNCTION Prelude-Append- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Append struct _Con_M_Append
struct _Con_M_Append {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Append;
extern int step_M_Append(Sink,Term);

/* FUNCTION Prep-P-InlineRegExp2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExp2_s1 struct _Con_M_P_InlineRegExp2_s1
struct _Con_M_P_InlineRegExp2_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExp2_s1;
extern int step_M_P_InlineRegExp2_s1(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts2 struct _Con_M_C_GetConstructorScopeSorts2
struct _Con_M_C_GetConstructorScopeSorts2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts2;
extern int step_M_C_GetConstructorScopeSorts2(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts1 struct _Con_M_C_GetConstructorScopeSorts1
struct _Con_M_C_GetConstructorScopeSorts1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts1;
extern int step_M_C_GetConstructorScopeSorts1(Sink,Term);

/* FUNCTION Prelude-TextToString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextToString_s2 struct _Con_M_TextToString_s2
struct _Con_M_TextToString_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextToString_s2;
extern int step_M_TextToString_s2(Sink,Term);

/* FUNCTION Prelude-TextToString-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextToString_s1 struct _Con_M_TextToString_s1
struct _Con_M_TextToString_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextToString_s1;
extern int step_M_TextToString_s1(Sink,Term);

/* FUNCTION Util-U-ScopeSortTopSort- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ScopeSortTopSort struct _Con_M_U_ScopeSortTopSort
struct _Con_M_U_ScopeSortTopSort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ScopeSortTopSort;
extern int step_M_U_ScopeSortTopSort(Sink,Term);

/* FUNCTION Prelude-Filter2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Filter2 struct _Con_M_Filter2
struct _Con_M_Filter2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Filter2;
extern int step_M_Filter2(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure_s1 struct _Con_M_Name2NamesClosure_s1
struct _Con_M_Name2NamesClosure_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure_s1;
extern int step_M_Name2NamesClosure_s1(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols1_s2 struct _Con_M_U_NonMainSymbols1_s2
struct _Con_M_U_NonMainSymbols1_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols1_s2;
extern int step_M_U_NonMainSymbols1_s2(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion-2$P-stripLeftRecursion$12$$Nil HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion_s12 struct _Con_M_P__stripLeftRecursion_s12
struct _Con_M_P__stripLeftRecursion_s12 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion_s12;
extern int step_M_P__stripLeftRecursion_s12(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols1_s1 struct _Con_M_U_NonMainSymbols1_s1
struct _Con_M_U_NonMainSymbols1_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols1_s1;
extern int step_M_U_NonMainSymbols1_s1(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion_s13 struct _Con_M_P__stripLeftRecursion_s13
struct _Con_M_P__stripLeftRecursion_s13 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion_s13;
extern int step_M_P__stripLeftRecursion_s13(Sink,Term);

/* FUNCTION Util-U-then-Local-1$U-then-Local$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_Local struct _Con_M_U__then_Local
struct _Con_M_U__then_Local {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_Local;
extern int step_M_U__then_Local(Sink,Term);

/* FUNCTION Prep-P-ProductionNameWithPrecRepeatText-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionNameWithPrecRepeatText_s6 struct _Con_M_P_ProductionNameWithPrecRepeatText_s6
struct _Con_M_P_ProductionNameWithPrecRepeatText_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionNameWithPrecRepeatText_s6;
extern int step_M_P_ProductionNameWithPrecRepeatText_s6(Sink,Term);

/* FUNCTION Prep-P-ProductionNameWithPrecRepeatText-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionNameWithPrecRepeatText_s5 struct _Con_M_P_ProductionNameWithPrecRepeatText_s5
struct _Con_M_P_ProductionNameWithPrecRepeatText_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionNameWithPrecRepeatText_s5;
extern int step_M_P_ProductionNameWithPrecRepeatText_s5(Sink,Term);

/* FUNCTION Prelude-TextToString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextToString_s3 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_TextToString_s3;
extern int step_M_TextToString_s3(Sink,Term);

/* FUNCTION Prep-P-stripLeftRecursion-2$P-stripLeftRecursion$10$Hx_RepeatSingle HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__stripLeftRecursion_s10 struct _Con_M_P__stripLeftRecursion_s10
struct _Con_M_P__stripLeftRecursion_s10 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__stripLeftRecursion_s10;
extern int step_M_P__stripLeftRecursion_s10(Sink,Term);

/* FUNCTION Util-U-then-SortHasUserHx-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortHasUserHx_s4 struct _Con_M_U__then_SortHasUserHx_s4
struct _Con_M_U__then_SortHasUserHx_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortHasUserHx_s4;
extern int step_M_U__then_SortHasUserHx_s4(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes5-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes5_s2 struct _Con_M_C_CrsxifyAttributes5_s2
struct _Con_M_C_CrsxifyAttributes5_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes5_s2;
extern int step_M_C_CrsxifyAttributes5_s2(Sink,Term);

/* FUNCTION Util-U-then-SortHasUserHx-1$U-then-SortHasUserHx$3$DME_N2NM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortHasUserHx_s3 struct _Con_M_U__then_SortHasUserHx_s3
struct _Con_M_U__then_SortHasUserHx_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortHasUserHx_s3;
extern int step_M_U__then_SortHasUserHx_s3(Sink,Term);

/* FUNCTION Util-U-then-SortHasUserHx-1$U-then-SortHasUserHx$1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortHasUserHx_s1 struct _Con_M_U__then_SortHasUserHx_s1
struct _Con_M_U__then_SortHasUserHx_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortHasUserHx_s1;
extern int step_M_U__then_SortHasUserHx_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes5-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes5_s1 struct _Con_M_C_CrsxifyAttributes5_s1
struct _Con_M_C_CrsxifyAttributes5_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes5_s1;
extern int step_M_C_CrsxifyAttributes5_s1(Sink,Term);

/* FUNCTION Prelude-TextJoin1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextJoin1_s2 struct _Con_M_TextJoin1_s2
struct _Con_M_TextJoin1_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextJoin1_s2;
extern int step_M_TextJoin1_s2(Sink,Term);

/* FUNCTION Cook-C-AddTermInnerSynthesized-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermInnerSynthesized_s14 struct _Con_M_C_AddTermInnerSynthesized_s14
struct _Con_M_C_AddTermInnerSynthesized_s14 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermInnerSynthesized_s14;
extern int step_M_C_AddTermInnerSynthesized_s14(Sink,Term);

/* FUNCTION Util-U-MakeDM-Finish-1$U-MakeDM-Finish$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_Finish struct _Con_M_U_MakeDM_Finish
struct _Con_M_U_MakeDM_Finish {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_Finish;
extern int step_M_U_MakeDM_Finish(Sink,Term);

/* FUNCTION Prelude-TextJoin1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextJoin1_s1 struct _Con_M_TextJoin1_s1
struct _Con_M_TextJoin1_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextJoin1_s1;
extern int step_M_TextJoin1_s1(Sink,Term);

/* FUNCTION Util-U-TestIfSort1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TestIfSort1_s10 struct _Con_M_U_TestIfSort1_s10
struct _Con_M_U_TestIfSort1_s10 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TestIfSort1_s10;
extern int step_M_U_TestIfSort1_s10(Sink,Term);

/* FUNCTION Prep-P-BaseSortName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_BaseSortName struct _Con_M_P_BaseSortName
struct _Con_M_P_BaseSortName {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_BaseSortName;
extern int step_M_P_BaseSortName(Sink,Term);

/* FUNCTION Util-U-MapAllConstructorsForSorts-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MapAllConstructorsForSorts_s2 struct _Con_M_U_MapAllConstructorsForSorts_s2
struct _Con_M_U_MapAllConstructorsForSorts_s2 {struct _Construction construction; Term sub[1]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_U_MapAllConstructorsForSorts_s2;
extern int step_M_U_MapAllConstructorsForSorts_s2(Sink,Term);

/* FUNCTION Prep-P-Lexical-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Lexical struct _Con_M_P_Lexical
struct _Con_M_P_Lexical {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Lexical;
extern int step_M_P_Lexical(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders3_s1 struct _Con_M_C_ScopeSort_AddBinders3_s1
struct _Con_M_C_ScopeSort_AddBinders3_s1 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders3_s1;
extern int step_M_C_ScopeSort_AddBinders3_s1(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication2_s11 struct _Con_M_C_ExtendSortMap_MetaApplication2_s11
struct _Con_M_C_ExtendSortMap_MetaApplication2_s11 {struct _Construction construction; Term sub[11]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication2_s11;
extern int step_M_C_ExtendSortMap_MetaApplication2_s11(Sink,Term);

/* FUNCTION Prelude-LookupName-1$LookupName$N2N HEADER DECLARATIONS. */
#define STRUCT_Con_M_LookupName struct _Con_M_LookupName
struct _Con_M_LookupName {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_LookupName;
extern int step_M_LookupName(Sink,Term);

/* FUNCTION Prep-P-VariableMarker2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_VariableMarker2 struct _Con_M_P_VariableMarker2
struct _Con_M_P_VariableMarker2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_VariableMarker2;
extern int step_M_P_VariableMarker2(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication2-2$C-ExtendSortMap-MetaApplication2$10$SM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication2_s10 struct _Con_M_C_ExtendSortMap_MetaApplication2_s10
struct _Con_M_C_ExtendSortMap_MetaApplication2_s10 {struct _Construction construction; Term sub[9]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication2_s10;
extern int step_M_C_ExtendSortMap_MetaApplication2_s10(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain_s10 struct _Con_M_U_InsertDefinesMain_s10
struct _Con_M_U_InsertDefinesMain_s10 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain_s10;
extern int step_M_U_InsertDefinesMain_s10(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication2_s14 struct _Con_M_C_ExtendSortMap_MetaApplication2_s14
struct _Con_M_C_ExtendSortMap_MetaApplication2_s14 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication2_s14;
extern int step_M_C_ExtendSortMap_MetaApplication2_s14(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication2-3$C-ExtendSortMap-MetaApplication2$13$SM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication2_s13 struct _Con_M_C_ExtendSortMap_MetaApplication2_s13
struct _Con_M_C_ExtendSortMap_MetaApplication2_s13 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication2_s13;
extern int step_M_C_ExtendSortMap_MetaApplication2_s13(Sink,Term);

/* FUNCTION Util-U-MapAllConstructorsForSorts-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MapAllConstructorsForSorts_s1 struct _Con_M_U_MapAllConstructorsForSorts_s1
struct _Con_M_U_MapAllConstructorsForSorts_s1 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_U_MapAllConstructorsForSorts_s1;
extern int step_M_U_MapAllConstructorsForSorts_s1(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s3 struct _Con_M_U_MakeConstructor2Sort3_s3
struct _Con_M_U_MakeConstructor2Sort3_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s3;
extern int step_M_U_MakeConstructor2Sort3_s3(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s4 struct _Con_M_U_MakeConstructor2Sort3_s4
struct _Con_M_U_MakeConstructor2Sort3_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s4;
extern int step_M_U_MakeConstructor2Sort3_s4(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s1 struct _Con_M_U_MakeConstructor2Sort3_s1
struct _Con_M_U_MakeConstructor2Sort3_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s1;
extern int step_M_U_MakeConstructor2Sort3_s1(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s2 struct _Con_M_U_MakeConstructor2Sort3_s2
struct _Con_M_U_MakeConstructor2Sort3_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s2;
extern int step_M_U_MakeConstructor2Sort3_s2(Sink,Term);

/* FUNCTION Util-U-Qualify-Sort- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Qualify_Sort struct _Con_M_U_Qualify_Sort
struct _Con_M_U_Qualify_Sort {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Qualify_Sort;
extern int step_M_U_Qualify_Sort(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s9 struct _Con_M_U_MakeConstructor2Sort3_s9
struct _Con_M_U_MakeConstructor2Sort3_s9 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s9;
extern int step_M_U_MakeConstructor2Sort3_s9(Sink,Term);

/* FUNCTION Prep-P-Expand-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Expand struct _Con_M_P_Expand
struct _Con_M_P_Expand {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Expand;
extern int step_M_P_Expand(Sink,Term);

/* FUNCTION Prep-P-TokenConstructorText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_TokenConstructorText struct _Con_M_P_TokenConstructorText
struct _Con_M_P_TokenConstructorText {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_TokenConstructorText;
extern int step_M_P_TokenConstructorText(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s7 struct _Con_M_U_MakeConstructor2Sort3_s7
struct _Con_M_U_MakeConstructor2Sort3_s7 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s7;
extern int step_M_U_MakeConstructor2Sort3_s7(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s8 struct _Con_M_U_MakeConstructor2Sort3_s8
struct _Con_M_U_MakeConstructor2Sort3_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s8;
extern int step_M_U_MakeConstructor2Sort3_s8(Sink,Term);

/* FUNCTION Prelude-Singleton- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Singleton struct _Con_M_Singleton
struct _Con_M_Singleton {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Singleton;
extern int step_M_Singleton(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s5 struct _Con_M_U_MakeConstructor2Sort3_s5
struct _Con_M_U_MakeConstructor2Sort3_s5 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s5;
extern int step_M_U_MakeConstructor2Sort3_s5(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort3_s6 struct _Con_M_U_MakeConstructor2Sort3_s6
struct _Con_M_U_MakeConstructor2Sort3_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort3_s6;
extern int step_M_U_MakeConstructor2Sort3_s6(Sink,Term);

/* FUNCTION Prelude-HasNames-1$HasNames$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_HasNames struct _Con_M_HasNames
struct _Con_M_HasNames {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_HasNames;
extern int step_M_HasNames(Sink,Term);

/* FUNCTION Prelude-ContainsNameWhen-1$ContainsNameWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_ContainsNameWhen struct _Con_M_ContainsNameWhen
struct _Con_M_ContainsNameWhen {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_ContainsNameWhen;
extern int step_M_ContainsNameWhen(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternativeDefine- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternativeDefine struct _Con_M_U_MakeDM_SortAlternativeDefine
struct _Con_M_U_MakeDM_SortAlternativeDefine {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternativeDefine;
extern int step_M_U_MakeDM_SortAlternativeDefine(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry2 struct _Con_M_U_KeepSynthesizedMapEntry2
struct _Con_M_U_KeepSynthesizedMapEntry2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry2;
extern int step_M_U_KeepSynthesizedMapEntry2(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedMapEntry1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedMapEntry1 struct _Con_M_U_KeepSynthesizedMapEntry1
struct _Con_M_U_KeepSynthesizedMapEntry1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedMapEntry1;
extern int step_M_U_KeepSynthesizedMapEntry1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes3_s1 struct _Con_M_C_CrsxifyAttributes3_s1
struct _Con_M_C_CrsxifyAttributes3_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes3_s1;
extern int step_M_C_CrsxifyAttributes3_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes3_s3 struct _Con_M_C_CrsxifyAttributes3_s3
struct _Con_M_C_CrsxifyAttributes3_s3 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes3_s3;
extern int step_M_C_CrsxifyAttributes3_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes3_s2 struct _Con_M_C_CrsxifyAttributes3_s2
struct _Con_M_C_CrsxifyAttributes3_s2 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes3_s2;
extern int step_M_C_CrsxifyAttributes3_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributes3-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributes3_s4 struct _Con_M_C_CrsxifyAttributes3_s4
struct _Con_M_C_CrsxifyAttributes3_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributes3_s4;
extern int step_M_C_CrsxifyAttributes3_s4(Sink,Term);

/* FUNCTION Prep-P-SameSort2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s6 struct _Con_M_P_SameSort2_s6
struct _Con_M_P_SameSort2_s6 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s6;
extern int step_M_P_SameSort2_s6(Sink,Term);

/* FUNCTION Prep-P-SameSort2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s5 struct _Con_M_P_SameSort2_s5
struct _Con_M_P_SameSort2_s5 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s5;
extern int step_M_P_SameSort2_s5(Sink,Term);

/* FUNCTION Prelude-UnionDisjointNames-1$UnionDisjointNames$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_UnionDisjointNames struct _Con_M_UnionDisjointNames
struct _Con_M_UnionDisjointNames {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_UnionDisjointNames;
extern int step_M_UnionDisjointNames(Sink,Term);

/* FUNCTION Prep-P-SameSort2-3$P-SameSort2$4$Hx_Sort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s4 struct _Con_M_P_SameSort2_s4
struct _Con_M_P_SameSort2_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s4;
extern int step_M_P_SameSort2_s4(Sink,Term);

/* FUNCTION Prep-P-SameSort2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s9 struct _Con_M_P_SameSort2_s9
struct _Con_M_P_SameSort2_s9 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s9;
extern int step_M_P_SameSort2_s9(Sink,Term);

/* FUNCTION Prep-P-SameSort2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s8 struct _Con_M_P_SameSort2_s8
struct _Con_M_P_SameSort2_s8 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s8;
extern int step_M_P_SameSort2_s8(Sink,Term);

/* FUNCTION Prep-P-SameSort2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s7 struct _Con_M_P_SameSort2_s7
struct _Con_M_P_SameSort2_s7 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s7;
extern int step_M_P_SameSort2_s7(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRuleOption-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRuleOption struct _Con_M_C_CrsxifyRuleOption
struct _Con_M_C_CrsxifyRuleOption {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRuleOption;
extern int step_M_C_CrsxifyRuleOption(Sink,Term);

/* FUNCTION Prelude-NoNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_NoNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_NoNames;
extern int step_M_NoNames(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2_s10 struct _Con_M_U_NonMainSymbols2_s10
struct _Con_M_U_NonMainSymbols2_s10 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2_s10;
extern int step_M_U_NonMainSymbols2_s10(Sink,Term);

/* FUNCTION Cook-C-Crsxify-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Crsxify_s1 struct _Con_M_C_Crsxify_s1
struct _Con_M_C_Crsxify_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Crsxify_s1;
extern int step_M_C_Crsxify_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRule2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRule2_s2 struct _Con_M_C_CrsxifyRule2_s2
struct _Con_M_C_CrsxifyRule2_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRule2_s2;
extern int step_M_C_CrsxifyRule2_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifySortWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifySortWhen_s3 struct _Con_M_C_CrsxifySortWhen_s3
struct _Con_M_C_CrsxifySortWhen_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifySortWhen_s3;
extern int step_M_C_CrsxifySortWhen_s3(Sink,Term);

/* FUNCTION Cook-C-CrsxifySortWhen-1$C-CrsxifySortWhen$2$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifySortWhen_s2 struct _Con_M_C_CrsxifySortWhen_s2
struct _Con_M_C_CrsxifySortWhen_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifySortWhen_s2;
extern int step_M_C_CrsxifySortWhen_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue struct _Con_M_C_UnsynthesizeAttributeValue
struct _Con_M_C_UnsynthesizeAttributeValue {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue;
extern int step_M_C_UnsynthesizeAttributeValue(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRule2-1$C-CrsxifyRule2$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRule2_s1 struct _Con_M_C_CrsxifyRule2_s1
struct _Con_M_C_CrsxifyRule2_s1 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRule2_s1;
extern int step_M_C_CrsxifyRule2_s1(Sink,Term);

/* FUNCTION Prep-Prep3-1$Prep3$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_Prep3 struct _Con_M_Prep3
struct _Con_M_Prep3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Prep3;
extern int step_M_Prep3(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry_s1 struct _Con_M_U_KeepSynthesizedEntry_s1
struct _Con_M_U_KeepSynthesizedEntry_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry_s1;
extern int step_M_U_KeepSynthesizedEntry_s1(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpClass1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpClass1_s4 struct _Con_M_P_InlineRegExpClass1_s4
struct _Con_M_P_InlineRegExpClass1_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpClass1_s4;
extern int step_M_P_InlineRegExpClass1_s4(Sink,Term);

/* FUNCTION Prep-Prep1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Prep1 struct _Con_M_Prep1
struct _Con_M_Prep1 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_Prep1;
extern int step_M_Prep1(Sink,Term);

/* FUNCTION Prep-Prep2-1$Prep2$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_Prep2 struct _Con_M_Prep2
struct _Con_M_Prep2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Prep2;
extern int step_M_Prep2(Sink,Term);

/* FUNCTION Util-U-LN-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_LN struct _Con_M_U_LN
struct _Con_M_U_LN {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_LN;
extern int step_M_U_LN(Sink,Term);

/* FUNCTION Prep-P-Embed-Head-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Embed_Head_s1 struct _Con_M_P_Embed_Head_s1
struct _Con_M_P_Embed_Head_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Embed_Head_s1;
extern int step_M_P_Embed_Head_s1(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpClass1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpClass1_s1 struct _Con_M_P_InlineRegExpClass1_s1
struct _Con_M_P_InlineRegExpClass1_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpClass1_s1;
extern int step_M_P_InlineRegExpClass1_s1(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpClass1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpClass1_s3 struct _Con_M_P_InlineRegExpClass1_s3
struct _Con_M_P_InlineRegExpClass1_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpClass1_s3;
extern int step_M_P_InlineRegExpClass1_s3(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpClass1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpClass1_s2 struct _Con_M_P_InlineRegExpClass1_s2
struct _Con_M_P_InlineRegExpClass1_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpClass1_s2;
extern int step_M_P_InlineRegExpClass1_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRulePrefix-1$C-CrsxifyRulePrefix$Hx_RulePrefix HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRulePrefix struct _Con_M_C_CrsxifyRulePrefix
struct _Con_M_C_CrsxifyRulePrefix {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRulePrefix;
extern int step_M_C_CrsxifyRulePrefix(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-6$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s13 struct _Con_M_C_AddTermSynthesized_s13
struct _Con_M_C_AddTermSynthesized_s13 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s13;
extern int step_M_C_AddTermSynthesized_s13(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-5$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s10 struct _Con_M_C_AddTermSynthesized_s10
struct _Con_M_C_AddTermSynthesized_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s10;
extern int step_M_C_AddTermSynthesized_s10(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s11 struct _Con_M_C_AddTermSynthesized_s11
struct _Con_M_C_AddTermSynthesized_s11 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s11;
extern int step_M_C_AddTermSynthesized_s11(Sink,Term);

/* FUNCTION Prelude-Filter2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Filter2_s1 struct _Con_M_Filter2_s1
struct _Con_M_Filter2_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Filter2_s1;
extern int step_M_Filter2_s1(Sink,Term);

/* FUNCTION Cook-C-AttributeWrapperSorted-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AttributeWrapperSorted struct _Con_M_C_AttributeWrapperSorted
struct _Con_M_C_AttributeWrapperSorted {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AttributeWrapperSorted;
extern int step_M_C_AttributeWrapperSorted(Sink,Term);

/* FUNCTION Prelude-Filter2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Filter2_s2 struct _Con_M_Filter2_s2
struct _Con_M_Filter2_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Filter2_s2;
extern int step_M_Filter2_s2(Sink,Term);

/* FUNCTION Prelude-RemoveName-1$RemoveName$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M_RemoveName struct _Con_M_RemoveName
struct _Con_M_RemoveName {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_RemoveName;
extern int step_M_RemoveName(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeMapValue- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeMapValue struct _Con_M_C_CrsxifyAttributeMapValue
struct _Con_M_C_CrsxifyAttributeMapValue {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeMapValue;
extern int step_M_C_CrsxifyAttributeMapValue(Sink,Term);

/* FUNCTION Cook-C-Unparse-Abstraction- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Abstraction struct _Con_M_C_Unparse_Abstraction
struct _Con_M_C_Unparse_Abstraction {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Abstraction;
extern int step_M_C_Unparse_Abstraction(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized_s14 struct _Con_M_C_AddTermSynthesized_s14
struct _Con_M_C_AddTermSynthesized_s14 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized_s14;
extern int step_M_C_AddTermSynthesized_s14(Sink,Term);

/* FUNCTION Util-U-SortName-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SortName struct _Con_M_U_SortName
struct _Con_M_U_SortName {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SortName;
extern int step_M_U_SortName(Sink,Term);

/* FUNCTION Util-U-InsertDefine2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine2_s1 struct _Con_M_U_InsertDefine2_s1
struct _Con_M_U_InsertDefine2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine2_s1;
extern int step_M_U_InsertDefine2_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue-2$C-UnsynthesizeAttributeValue$5$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue_s5 struct _Con_M_C_UnsynthesizeAttributeValue_s5
struct _Con_M_C_UnsynthesizeAttributeValue_s5 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue_s5;
extern int step_M_C_UnsynthesizeAttributeValue_s5(Sink,Term);

/* FUNCTION Prelude-MapWhen- HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapWhen_s1 struct _Con_M_MapWhen_s1
struct _Con_M_MapWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapWhen_s1;
extern int step_M_MapWhen_s1(Sink,Term);

/* FUNCTION Prelude-Special_message-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Special_xmessage struct _Con_M_Special_xmessage
struct _Con_M_Special_xmessage {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Special_xmessage;
extern int step_M_Special_xmessage(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue_s3 struct _Con_M_C_UnsynthesizeAttributeValue_s3
struct _Con_M_C_UnsynthesizeAttributeValue_s3 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue_s3;
extern int step_M_C_UnsynthesizeAttributeValue_s3(Sink,Term);

/* FUNCTION Util-U-AllNames-1$U-AllNames HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_AllNames;
extern int step_M_U_AllNames(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue-5$C-UnsynthesizeAttributeValue$2$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue_s2 struct _Con_M_C_UnsynthesizeAttributeValue_s2
struct _Con_M_C_UnsynthesizeAttributeValue_s2 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue_s2;
extern int step_M_C_UnsynthesizeAttributeValue_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue_s9 struct _Con_M_C_UnsynthesizeAttributeValue_s9
struct _Con_M_C_UnsynthesizeAttributeValue_s9 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue_s9;
extern int step_M_C_UnsynthesizeAttributeValue_s9(Sink,Term);

/* FUNCTION Prep-P-user-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__user struct _Con_M_P__user
struct _Con_M_P__user {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__user;
extern int step_M_P__user(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue-4$C-UnsynthesizeAttributeValue$8$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue_s8 struct _Con_M_C_UnsynthesizeAttributeValue_s8
struct _Con_M_C_UnsynthesizeAttributeValue_s8 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue_s8;
extern int step_M_C_UnsynthesizeAttributeValue_s8(Sink,Term);

/* FUNCTION Prelude-MapWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapWhen_s3 struct _Con_M_MapWhen_s3
struct _Con_M_MapWhen_s3 {struct _Construction construction; Term sub[1]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapWhen_s3;
extern int step_M_MapWhen_s3(Sink,Term);

/* FUNCTION Util-U-InsertDefine2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefine2_s2 struct _Con_M_U_InsertDefine2_s2
struct _Con_M_U_InsertDefine2_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefine2_s2;
extern int step_M_U_InsertDefine2_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributeValue-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributeValue_s6 struct _Con_M_C_UnsynthesizeAttributeValue_s6
struct _Con_M_C_UnsynthesizeAttributeValue_s6 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributeValue_s6;
extern int step_M_C_UnsynthesizeAttributeValue_s6(Sink,Term);

/* FUNCTION Prelude-MapWhen-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapWhen_s2 struct _Con_M_MapWhen_s2
struct _Con_M_MapWhen_s2 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapWhen_s2;
extern int step_M_MapWhen_s2(Sink,Term);

/* FUNCTION Prelude-StringContainsWhen-1$StringContainsWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringContainsWhen struct _Con_M_StringContainsWhen
struct _Con_M_StringContainsWhen {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringContainsWhen;
extern int step_M_StringContainsWhen(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes2_s2 struct _Con_M_C_UnsynthesizeAttributes2_s2
struct _Con_M_C_UnsynthesizeAttributes2_s2 {struct _Construction construction; Term sub[11]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes2_s2;
extern int step_M_C_UnsynthesizeAttributes2_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes2-1$C-UnsynthesizeAttributes2$1$LOC HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes2_s1 struct _Con_M_C_UnsynthesizeAttributes2_s1
struct _Con_M_C_UnsynthesizeAttributes2_s1 {struct _Construction construction; Term sub[11]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes2_s1;
extern int step_M_C_UnsynthesizeAttributes2_s1(Sink,Term);

/* FUNCTION Cook-C-ReabstractDefine- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ReabstractDefine struct _Con_M_C_ReabstractDefine
struct _Con_M_C_ReabstractDefine {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ReabstractDefine;
extern int step_M_C_ReabstractDefine(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeSimpleValue-1$C-CrsxifyAttributeSimpleValue$Hx_AttributeValue HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeSimpleValue struct _Con_M_C_CrsxifyAttributeSimpleValue
struct _Con_M_C_CrsxifyAttributeSimpleValue {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeSimpleValue;
extern int step_M_C_CrsxifyAttributeSimpleValue(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts2_s2 struct _Con_M_C_GetConstructorScopeSorts2_s2
struct _Con_M_C_GetConstructorScopeSorts2_s2 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts2_s2;
extern int step_M_C_GetConstructorScopeSorts2_s2(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts2_s1 struct _Con_M_C_GetConstructorScopeSorts2_s1
struct _Con_M_C_GetConstructorScopeSorts2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts2_s1;
extern int step_M_C_GetConstructorScopeSorts2_s1(Sink,Term);

/* FUNCTION Prep-P-Embed-Head-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Embed_Head_s5 struct _Con_M_P_Embed_Head_s5
struct _Con_M_P_Embed_Head_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Embed_Head_s5;
extern int step_M_P_Embed_Head_s5(Sink,Term);

/* FUNCTION Prep-P-Embed-Head-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Embed_Head_s4 struct _Con_M_P_Embed_Head_s4
struct _Con_M_P_Embed_Head_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Embed_Head_s4;
extern int step_M_P_Embed_Head_s4(Sink,Term);

/* FUNCTION Prep-P-Embed-Head- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Embed_Head_s3 struct _Con_M_P_Embed_Head_s3
struct _Con_M_P_Embed_Head_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Embed_Head_s3;
extern int step_M_P_Embed_Head_s3(Sink,Term);

/* FUNCTION Prelude-StringConcatWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringConcatWhen_s1 struct _Con_M_StringConcatWhen_s1
struct _Con_M_StringConcatWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringConcatWhen_s1;
extern int step_M_StringConcatWhen_s1(Sink,Term);

/* FUNCTION Cook-C-Unparse-Alternatives-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Alternatives_s8 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Alternatives_s8;
extern int step_M_C_Unparse_Alternatives_s8(Sink,Term);

/* FUNCTION Cook-C-Unparse-Alternatives-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Alternatives_s7 struct _Con_M_C_Unparse_Alternatives_s7
struct _Con_M_C_Unparse_Alternatives_s7 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Alternatives_s7;
extern int step_M_C_Unparse_Alternatives_s7(Sink,Term);

/* FUNCTION Cook-C-Unparse-Alternatives-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Alternatives_s6 struct _Con_M_C_Unparse_Alternatives_s6
struct _Con_M_C_Unparse_Alternatives_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Alternatives_s6;
extern int step_M_C_Unparse_Alternatives_s6(Sink,Term);

/* FUNCTION Cook-C-Unparse-Alternatives-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Alternatives_s5 struct _Con_M_C_Unparse_Alternatives_s5
struct _Con_M_C_Unparse_Alternatives_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Alternatives_s5;
extern int step_M_C_Unparse_Alternatives_s5(Sink,Term);

/* FUNCTION Cook-C-Unparse-Alternatives-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Alternatives_s4 struct _Con_M_C_Unparse_Alternatives_s4
struct _Con_M_C_Unparse_Alternatives_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Alternatives_s4;
extern int step_M_C_Unparse_Alternatives_s4(Sink,Term);

/* FUNCTION Cook-C-Unparse-Alternatives-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Alternatives_s3 struct _Con_M_C_Unparse_Alternatives_s3
struct _Con_M_C_Unparse_Alternatives_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Alternatives_s3;
extern int step_M_C_Unparse_Alternatives_s3(Sink,Term);

/* FUNCTION Cook-C-Unparse-Alternatives-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Alternatives_s2 struct _Con_M_C_Unparse_Alternatives_s2
struct _Con_M_C_Unparse_Alternatives_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Alternatives_s2;
extern int step_M_C_Unparse_Alternatives_s2(Sink,Term);

/* FUNCTION Cook-C-Unparse-Alternatives- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse_Alternatives_s1 struct _Con_M_C_Unparse_Alternatives_s1
struct _Con_M_C_Unparse_Alternatives_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse_Alternatives_s1;
extern int step_M_C_Unparse_Alternatives_s1(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s14 struct _Con_M_C_AddTermTopInherited_s14
struct _Con_M_C_AddTermTopInherited_s14 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s14;
extern int step_M_C_AddTermTopInherited_s14(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-6$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s13 struct _Con_M_C_AddTermTopInherited_s13
struct _Con_M_C_AddTermTopInherited_s13 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s13;
extern int step_M_C_AddTermTopInherited_s13(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s11 struct _Con_M_C_AddTermTopInherited_s11
struct _Con_M_C_AddTermTopInherited_s11 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s11;
extern int step_M_C_AddTermTopInherited_s11(Sink,Term);

/* FUNCTION Prelude-StringToNumeric-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringToNumeric struct _Con_M_StringToNumeric
struct _Con_M_StringToNumeric {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringToNumeric;
extern int step_M_StringToNumeric(Sink,Term);

/* FUNCTION Cook-C-AddTermTopInherited-5$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopInherited_s10 struct _Con_M_C_AddTermTopInherited_s10
struct _Con_M_C_AddTermTopInherited_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopInherited_s10;
extern int step_M_C_AddTermTopInherited_s10(Sink,Term);

/* FUNCTION Prep-IfSingletonRepeat-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfSingletonRepeat_s5 struct _Con_M_IfSingletonRepeat_s5
struct _Con_M_IfSingletonRepeat_s5 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfSingletonRepeat_s5;
extern int step_M_IfSingletonRepeat_s5(Sink,Term);

/* FUNCTION Prep-IfSingletonRepeat-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfSingletonRepeat_s3 struct _Con_M_IfSingletonRepeat_s3
struct _Con_M_IfSingletonRepeat_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfSingletonRepeat_s3;
extern int step_M_IfSingletonRepeat_s3(Sink,Term);

/* FUNCTION Prep-IfSingletonRepeat-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfSingletonRepeat_s4 struct _Con_M_IfSingletonRepeat_s4
struct _Con_M_IfSingletonRepeat_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfSingletonRepeat_s4;
extern int step_M_IfSingletonRepeat_s4(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication1_s2 struct _Con_M_C_ExtendSortMap_MetaApplication1_s2
struct _Con_M_C_ExtendSortMap_MetaApplication1_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication1_s2;
extern int step_M_C_ExtendSortMap_MetaApplication1_s2(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-MetaApplication1-1$C-ExtendSortMap-MetaApplication1$1$SM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_MetaApplication1_s1 struct _Con_M_C_ExtendSortMap_MetaApplication1_s1
struct _Con_M_C_ExtendSortMap_MetaApplication1_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_MetaApplication1_s1;
extern int step_M_C_ExtendSortMap_MetaApplication1_s1(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors4- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors4_s1 struct _Con_M_U_MakeSort2UserConstructors4_s1
struct _Con_M_U_MakeSort2UserConstructors4_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors4_s1;
extern int step_M_U_MakeSort2UserConstructors4_s1(Sink,Term);

/* FUNCTION Prep-P-SameSort2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s2 struct _Con_M_P_SameSort2_s2
struct _Con_M_P_SameSort2_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s2;
extern int step_M_P_SameSort2_s2(Sink,Term);

/* FUNCTION Prep-P-SameSort2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s1 struct _Con_M_P_SameSort2_s1
struct _Con_M_P_SameSort2_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s1;
extern int step_M_P_SameSort2_s1(Sink,Term);

/* FUNCTION Prep-IfSingletonRepeat-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfSingletonRepeat_s1 struct _Con_M_IfSingletonRepeat_s1
struct _Con_M_IfSingletonRepeat_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfSingletonRepeat_s1;
extern int step_M_IfSingletonRepeat_s1(Sink,Term);

/* FUNCTION Prep-IfSingletonRepeat-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfSingletonRepeat_s2 struct _Con_M_IfSingletonRepeat_s2
struct _Con_M_IfSingletonRepeat_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfSingletonRepeat_s2;
extern int step_M_IfSingletonRepeat_s2(Sink,Term);

/* FUNCTION Prelude-FilterWhen- HEADER DECLARATIONS. */
#define STRUCT_Con_M_FilterWhen_s1 struct _Con_M_FilterWhen_s1
struct _Con_M_FilterWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_FilterWhen_s1;
extern int step_M_FilterWhen_s1(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors4-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors4_s2 struct _Con_M_U_MakeSort2UserConstructors4_s2
struct _Con_M_U_MakeSort2UserConstructors4_s2 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors4_s2;
extern int step_M_U_MakeSort2UserConstructors4_s2(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors4- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors4_s3 struct _Con_M_U_MakeSort2UserConstructors4_s3
struct _Con_M_U_MakeSort2UserConstructors4_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors4_s3;
extern int step_M_U_MakeSort2UserConstructors4_s3(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Error-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Error_s1 struct _Con_M_C_ExtendSortMap_Error_s1
struct _Con_M_C_ExtendSortMap_Error_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Error_s1;
extern int step_M_C_ExtendSortMap_Error_s1(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors4-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors4_s4 struct _Con_M_U_MakeSort2UserConstructors4_s4
struct _Con_M_U_MakeSort2UserConstructors4_s4 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors4_s4;
extern int step_M_U_MakeSort2UserConstructors4_s4(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors4-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors4_s5 struct _Con_M_U_MakeSort2UserConstructors4_s5
struct _Con_M_U_MakeSort2UserConstructors4_s5 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors4_s5;
extern int step_M_U_MakeSort2UserConstructors4_s5(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors4-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors4_s6 struct _Con_M_U_MakeSort2UserConstructors4_s6
struct _Con_M_U_MakeSort2UserConstructors4_s6 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors4_s6;
extern int step_M_U_MakeSort2UserConstructors4_s6(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors4-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors4_s7 struct _Con_M_U_MakeSort2UserConstructors4_s7
struct _Con_M_U_MakeSort2UserConstructors4_s7 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors4_s7;
extern int step_M_U_MakeSort2UserConstructors4_s7(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors4-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors4_s8 struct _Con_M_U_MakeSort2UserConstructors4_s8
struct _Con_M_U_MakeSort2UserConstructors4_s8 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors4_s8;
extern int step_M_U_MakeSort2UserConstructors4_s8(Sink,Term);

/* FUNCTION Util-U-MakeSort2UserConstructors4-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2UserConstructors4_s9 struct _Con_M_U_MakeSort2UserConstructors4_s9
struct _Con_M_U_MakeSort2UserConstructors4_s9 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2UserConstructors4_s9;
extern int step_M_U_MakeSort2UserConstructors4_s9(Sink,Term);

/* FUNCTION Util-U-RuleString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RuleString_s1 struct _Con_M_U_RuleString_s1
struct _Con_M_U_RuleString_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RuleString_s1;
extern int step_M_U_RuleString_s1(Sink,Term);

/* FUNCTION Prep-P-SameSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort struct _Con_M_P_SameSort
struct _Con_M_P_SameSort {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort;
extern int step_M_P_SameSort(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Defines1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Defines1_s1 struct _Con_M_P_MetaJJ_Production_Defines1_s1
struct _Con_M_P_MetaJJ_Production_Defines1_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Defines1_s1;
extern int step_M_P_MetaJJ_Production_Defines1_s1(Sink,Term);

/* FUNCTION Prep-P-Production-Defines2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines2_s3 struct _Con_M_P_Production_Defines2_s3
struct _Con_M_P_Production_Defines2_s3 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines2_s3;
extern int step_M_P_Production_Defines2_s3(Sink,Term);

/* FUNCTION Cook-C-SortMap-then-GetFreeVariableSort-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap__then_GetFreeVariableSort_s3 struct _Con_M_C_SortMap__then_GetFreeVariableSort_s3
struct _Con_M_C_SortMap__then_GetFreeVariableSort_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap__then_GetFreeVariableSort_s3;
extern int step_M_C_SortMap__then_GetFreeVariableSort_s3(Sink,Term);

/* FUNCTION Cook-C-SortMap-then-GetFreeVariableSort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap__then_GetFreeVariableSort_s4 struct _Con_M_C_SortMap__then_GetFreeVariableSort_s4
struct _Con_M_C_SortMap__then_GetFreeVariableSort_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap__then_GetFreeVariableSort_s4;
extern int step_M_C_SortMap__then_GetFreeVariableSort_s4(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm3_s1 struct _Con_M_P_ProduceBodyTerm3_s1
struct _Con_M_P_ProduceBodyTerm3_s1 {struct _Construction construction; Term sub[11]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm3_s1;
extern int step_M_P_ProduceBodyTerm3_s1(Sink,Term);

/* FUNCTION Cook-C-SortMap-then-GetFreeVariableSort-1$C-SortMap-then-GetFreeVariableSort$1$SM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap__then_GetFreeVariableSort_s1 struct _Con_M_C_SortMap__then_GetFreeVariableSort_s1
struct _Con_M_C_SortMap__then_GetFreeVariableSort_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap__then_GetFreeVariableSort_s1;
extern int step_M_C_SortMap__then_GetFreeVariableSort_s1(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm3_s7 struct _Con_M_P_ProduceBodyTerm3_s7
struct _Con_M_P_ProduceBodyTerm3_s7 {struct _Construction construction; Term sub[16]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm3_s7;
extern int step_M_P_ProduceBodyTerm3_s7(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm3-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm3_s6 struct _Con_M_P_ProduceBodyTerm3_s6
struct _Con_M_P_ProduceBodyTerm3_s6 {struct _Construction construction; Term sub[16]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm3_s6;
extern int step_M_P_ProduceBodyTerm3_s6(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Defines1-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Defines1_s7 struct _Con_M_P_MetaJJ_Production_Defines1_s7
struct _Con_M_P_MetaJJ_Production_Defines1_s7 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Defines1_s7;
extern int step_M_P_MetaJJ_Production_Defines1_s7(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Defines1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Defines1_s6 struct _Con_M_P_MetaJJ_Production_Defines1_s6
struct _Con_M_P_MetaJJ_Production_Defines1_s6 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Defines1_s6;
extern int step_M_P_MetaJJ_Production_Defines1_s6(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Defines1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Defines1_s5 struct _Con_M_P_MetaJJ_Production_Defines1_s5
struct _Con_M_P_MetaJJ_Production_Defines1_s5 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Defines1_s5;
extern int step_M_P_MetaJJ_Production_Defines1_s5(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm3_s3 struct _Con_M_P_ProduceBodyTerm3_s3
struct _Con_M_P_ProduceBodyTerm3_s3 {struct _Construction construction; Term sub[16]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm3_s3;
extern int step_M_P_ProduceBodyTerm3_s3(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Defines1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Defines1_s4 struct _Con_M_P_MetaJJ_Production_Defines1_s4
struct _Con_M_P_MetaJJ_Production_Defines1_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Defines1_s4;
extern int step_M_P_MetaJJ_Production_Defines1_s4(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm3-1$P-ProduceBodyTerm3$2$Hx_ScopeSort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm3_s2 struct _Con_M_P_ProduceBodyTerm3_s2
struct _Con_M_P_ProduceBodyTerm3_s2 {struct _Construction construction; Term sub[13]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm3_s2;
extern int step_M_P_ProduceBodyTerm3_s2(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Defines1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Defines1_s3 struct _Con_M_P_MetaJJ_Production_Defines1_s3
struct _Con_M_P_MetaJJ_Production_Defines1_s3 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Defines1_s3;
extern int step_M_P_MetaJJ_Production_Defines1_s3(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Defines1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Defines1_s2 struct _Con_M_P_MetaJJ_Production_Defines1_s2
struct _Con_M_P_MetaJJ_Production_Defines1_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Defines1_s2;
extern int step_M_P_MetaJJ_Production_Defines1_s2(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm3-2$P-ProduceBodyTerm3$4$Hx_ScopeSort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm3_s4 struct _Con_M_P_ProduceBodyTerm3_s4
struct _Con_M_P_ProduceBodyTerm3_s4 {struct _Construction construction; Term sub[13]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm3_s4;
extern int step_M_P_ProduceBodyTerm3_s4(Sink,Term);

/* FUNCTION Prelude-MapIndex-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapIndex struct _Con_M_MapIndex
struct _Con_M_MapIndex {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_MapIndex;
extern int step_M_MapIndex(Sink,Term);

/* FUNCTION Prep-P-Production-Defines2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines2_s2 struct _Con_M_P_Production_Defines2_s2
struct _Con_M_P_Production_Defines2_s2 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines2_s2;
extern int step_M_P_Production_Defines2_s2(Sink,Term);

/* FUNCTION Prep-P-Production-Defines2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Production_Defines2_s1 struct _Con_M_P_Production_Defines2_s1
struct _Con_M_P_Production_Defines2_s1 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Production_Defines2_s1;
extern int step_M_P_Production_Defines2_s1(Sink,Term);

/* FUNCTION Prelude-TextLookup-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextLookup_s1 struct _Con_M_TextLookup_s1
struct _Con_M_TextLookup_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextLookup_s1;
extern int step_M_TextLookup_s1(Sink,Term);

/* FUNCTION Cook-C-Scheme-Form-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Scheme_Form_s4 struct _Con_M_C_Scheme_Form_s4
struct _Con_M_C_Scheme_Form_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Scheme_Form_s4;
extern int step_M_C_Scheme_Form_s4(Sink,Term);

/* FUNCTION Util-U-GetFunctionInherited-1$U-GetFunctionInherited HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetFunctionInherited struct _Con_M_U_GetFunctionInherited
struct _Con_M_U_GetFunctionInherited {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetFunctionInherited;
extern int step_M_U_GetFunctionInherited(Sink,Term);

/* FUNCTION Cook-C-Scheme-Form-1$C-Scheme-Form$2$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Scheme_Form_s2 struct _Con_M_C_Scheme_Form_s2
struct _Con_M_C_Scheme_Form_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Scheme_Form_s2;
extern int step_M_C_Scheme_Form_s2(Sink,Term);

/* FUNCTION Cook-C-Scheme-Form-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Scheme_Form_s3 struct _Con_M_C_Scheme_Form_s3
struct _Con_M_C_Scheme_Form_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Scheme_Form_s3;
extern int step_M_C_Scheme_Form_s3(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Error-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Error struct _Con_M_C_ExtendSortMap_Error
struct _Con_M_C_ExtendSortMap_Error {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Error;
extern int step_M_C_ExtendSortMap_Error(Sink,Term);

/* FUNCTION Prelude-StringEndsWithWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringEndsWithWhen_s1 struct _Con_M_StringEndsWithWhen_s1
struct _Con_M_StringEndsWithWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringEndsWithWhen_s1;
extern int step_M_StringEndsWithWhen_s1(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-Production-Attribute-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_Production_Attribute struct _Con_M_P_MetaJJ_Production_Attribute
struct _Con_M_P_MetaJJ_Production_Attribute {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_Production_Attribute;
extern int step_M_P_MetaJJ_Production_Attribute(Sink,Term);

/* FUNCTION Util-U-KeepSynthesizedEntry-1$U-KeepSynthesizedEntry$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepSynthesizedEntry struct _Con_M_U_KeepSynthesizedEntry
struct _Con_M_U_KeepSynthesizedEntry {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepSynthesizedEntry;
extern int step_M_U_KeepSynthesizedEntry(Sink,Term);

/* FUNCTION Prelude-FilterNamesWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_FilterNamesWhen struct _Con_M_FilterNamesWhen
struct _Con_M_FilterNamesWhen {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_FilterNamesWhen;
extern int step_M_FilterNamesWhen(Sink,Term);

/* FUNCTION Cook-C-Print-Alternatives- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Alternatives struct _Con_M_C_Print_Alternatives
struct _Con_M_C_Print_Alternatives {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Alternatives;
extern int step_M_C_Print_Alternatives(Sink,Term);

/* FUNCTION Prelude-FilterWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_FilterWhen_s3 struct _Con_M_FilterWhen_s3
struct _Con_M_FilterWhen_s3 {struct _Construction construction; Term sub[1]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_FilterWhen_s3;
extern int step_M_FilterWhen_s3(Sink,Term);

/* FUNCTION Prelude-FilterWhen-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_FilterWhen_s2 struct _Con_M_FilterWhen_s2
struct _Con_M_FilterWhen_s2 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_FilterWhen_s2;
extern int step_M_FilterWhen_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyTerm- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyTerm struct _Con_M_C_CrsxifyTerm
struct _Con_M_C_CrsxifyTerm {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyTerm;
extern int step_M_C_CrsxifyTerm(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpSimple-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpSimple_s1 struct _Con_M_P_DeclareRegExpSimple_s1
struct _Con_M_P_DeclareRegExpSimple_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpSimple_s1;
extern int step_M_P_DeclareRegExpSimple_s1(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpSimple-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpSimple_s3 struct _Con_M_P_DeclareRegExpSimple_s3
struct _Con_M_P_DeclareRegExpSimple_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpSimple_s3;
extern int step_M_P_DeclareRegExpSimple_s3(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpSimple-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpSimple_s2 struct _Con_M_P_DeclareRegExpSimple_s2
struct _Con_M_P_DeclareRegExpSimple_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpSimple_s2;
extern int step_M_P_DeclareRegExpSimple_s2(Sink,Term);

/* FUNCTION Util-U-GetAttributeForm-1$U-GetAttributeForm HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetAttributeForm struct _Con_M_U_GetAttributeForm
struct _Con_M_U_GetAttributeForm {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetAttributeForm;
extern int step_M_U_GetAttributeForm(Sink,Term);

/* FUNCTION Prelude-RemoveName2Name-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_RemoveName2Name_s1 struct _Con_M_RemoveName2Name_s1
struct _Con_M_RemoveName2Name_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_RemoveName2Name_s1;
extern int step_M_RemoveName2Name_s1(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpSimple-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpSimple_s5 struct _Con_M_P_DeclareRegExpSimple_s5
struct _Con_M_P_DeclareRegExpSimple_s5 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpSimple_s5;
extern int step_M_P_DeclareRegExpSimple_s5(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpSimple-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpSimple_s4 struct _Con_M_P_DeclareRegExpSimple_s4
struct _Con_M_P_DeclareRegExpSimple_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpSimple_s4;
extern int step_M_P_DeclareRegExpSimple_s4(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpSimple-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpSimple_s6 struct _Con_M_P_DeclareRegExpSimple_s6
struct _Con_M_P_DeclareRegExpSimple_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpSimple_s6;
extern int step_M_P_DeclareRegExpSimple_s6(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Attributes-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Attributes_s6 struct _Con_M_C_ExtendSortMap_Attributes_s6
struct _Con_M_C_ExtendSortMap_Attributes_s6 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Attributes_s6;
extern int step_M_C_ExtendSortMap_Attributes_s6(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Attributes-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Attributes_s7 struct _Con_M_C_ExtendSortMap_Attributes_s7
struct _Con_M_C_ExtendSortMap_Attributes_s7 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Attributes_s7;
extern int step_M_C_ExtendSortMap_Attributes_s7(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Attributes-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Attributes_s8 struct _Con_M_C_ExtendSortMap_Attributes_s8
struct _Con_M_C_ExtendSortMap_Attributes_s8 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Attributes_s8;
extern int step_M_C_ExtendSortMap_Attributes_s8(Sink,Term);

/* FUNCTION Text-Text-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Text struct _Con_M_Text_Text
struct _Con_M_Text_Text {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Text;
extern int step_M_Text_Text(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Attributes-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Attributes_s9 struct _Con_M_C_ExtendSortMap_Attributes_s9
struct _Con_M_C_ExtendSortMap_Attributes_s9 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Attributes_s9;
extern int step_M_C_ExtendSortMap_Attributes_s9(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Attributes- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Attributes_s3 struct _Con_M_C_ExtendSortMap_Attributes_s3
struct _Con_M_C_ExtendSortMap_Attributes_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Attributes_s3;
extern int step_M_C_ExtendSortMap_Attributes_s3(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Attributes-6 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Attributes_s4 struct _Con_M_C_ExtendSortMap_Attributes_s4
struct _Con_M_C_ExtendSortMap_Attributes_s4 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Attributes_s4;
extern int step_M_C_ExtendSortMap_Attributes_s4(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Attributes-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Attributes_s5 struct _Con_M_C_ExtendSortMap_Attributes_s5
struct _Con_M_C_ExtendSortMap_Attributes_s5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Attributes_s5;
extern int step_M_C_ExtendSortMap_Attributes_s5(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-Attributes-2$C-ExtendSortMap-Attributes$1$Hx_Attribute HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap_Attributes_s1 struct _Con_M_C_ExtendSortMap_Attributes_s1
struct _Con_M_C_ExtendSortMap_Attributes_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap_Attributes_s1;
extern int step_M_C_ExtendSortMap_Attributes_s1(Sink,Term);

/* FUNCTION Util-U-Qualify-AttributeForm- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Qualify_AttributeForm struct _Con_M_U_Qualify_AttributeForm
struct _Con_M_U_Qualify_AttributeForm {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Qualify_AttributeForm;
extern int step_M_U_Qualify_AttributeForm(Sink,Term);

/* FUNCTION Prelude-TextJoin1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextJoin1 struct _Con_M_TextJoin1
struct _Con_M_TextJoin1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextJoin1;
extern int step_M_TextJoin1(Sink,Term);

/* FUNCTION Prelude-Special_error-2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Special_xerror__2 struct _Con_M_Special_xerror__2
struct _Con_M_Special_xerror__2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Special_xerror__2;
extern int step_M_Special_xerror__2(Sink,Term);

/* FUNCTION Prelude-Fold-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold_s3 struct _Con_M_Fold_s3
struct _Con_M_Fold_s3 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_Fold_s3;
extern int step_M_Fold_s3(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar struct _Con_M_P_SortMetaVar
struct _Con_M_P_SortMetaVar {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar;
extern int step_M_P_SortMetaVar(Sink,Term);

/* FUNCTION Util-U-ExtractFormFirstSort-1$U-ExtractFormFirstSort$Hx_FormParsed HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ExtractFormFirstSort struct _Con_M_U_ExtractFormFirstSort
struct _Con_M_U_ExtractFormFirstSort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ExtractFormFirstSort;
extern int step_M_U_ExtractFormFirstSort(Sink,Term);

/* FUNCTION Util-U-IsFunction-1$U-IsFunction$2$DME_N2NM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsFunction_s2 struct _Con_M_U_IsFunction_s2
struct _Con_M_U_IsFunction_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsFunction_s2;
extern int step_M_U_IsFunction_s2(Sink,Term);

/* FUNCTION Util-U-IsFunction-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsFunction_s3 struct _Con_M_U_IsFunction_s3
struct _Con_M_U_IsFunction_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsFunction_s3;
extern int step_M_U_IsFunction_s3(Sink,Term);

/* FUNCTION Prep-P-Prefix-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Prefix struct _Con_M_P_Prefix
struct _Con_M_P_Prefix {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Prefix;
extern int step_M_P_Prefix(Sink,Term);

/* FUNCTION Prelude-Fold- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold_s1 struct _Con_M_Fold_s1
struct _Con_M_Fold_s1 {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_Fold_s1;
extern int step_M_Fold_s1(Sink,Term);

/* FUNCTION Prelude-Fold-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Fold_s2 struct _Con_M_Fold_s2
struct _Con_M_Fold_s2 {struct _Construction construction; Term sub[4]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_Fold_s2;
extern int step_M_Fold_s2(Sink,Term);

/* FUNCTION Text-Indent-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Indent struct _Con_M_Text_Indent
struct _Con_M_Text_Indent {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Indent;
extern int step_M_Text_Indent(Sink,Term);

/* FUNCTION Util-U-MakeSortNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSortNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MakeSortNames;
extern int step_M_U_MakeSortNames(Sink,Term);

/* FUNCTION Cook-C-Print-Abstraction-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Abstraction_s2 struct _Con_M_C_Print_Abstraction_s2
struct _Con_M_C_Print_Abstraction_s2 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Abstraction_s2;
extern int step_M_C_Print_Abstraction_s2(Sink,Term);

/* FUNCTION Cook-C-Print-Abstraction-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_Abstraction_s1 struct _Con_M_C_Print_Abstraction_s1
struct _Con_M_C_Print_Abstraction_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_Abstraction_s1;
extern int step_M_C_Print_Abstraction_s1(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeFormSyntax-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeFormSyntax_s4 struct _Con_M_P_MetaJJ_AttributeFormSyntax_s4
struct _Con_M_P_MetaJJ_AttributeFormSyntax_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeFormSyntax_s4;
extern int step_M_P_MetaJJ_AttributeFormSyntax_s4(Sink,Term);

/* FUNCTION Util-U-ParsedFormTag1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormTag1_s4 struct _Con_M_U_ParsedFormTag1_s4
struct _Con_M_U_ParsedFormTag1_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormTag1_s4;
extern int step_M_U_ParsedFormTag1_s4(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeFormSyntax-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeFormSyntax_s2 struct _Con_M_P_MetaJJ_AttributeFormSyntax_s2
struct _Con_M_P_MetaJJ_AttributeFormSyntax_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeFormSyntax_s2;
extern int step_M_P_MetaJJ_AttributeFormSyntax_s2(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeFormSyntax-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeFormSyntax_s3 struct _Con_M_P_MetaJJ_AttributeFormSyntax_s3
struct _Con_M_P_MetaJJ_AttributeFormSyntax_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeFormSyntax_s3;
extern int step_M_P_MetaJJ_AttributeFormSyntax_s3(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeFormSyntax- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeFormSyntax_s1 struct _Con_M_P_MetaJJ_AttributeFormSyntax_s1
struct _Con_M_P_MetaJJ_AttributeFormSyntax_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeFormSyntax_s1;
extern int step_M_P_MetaJJ_AttributeFormSyntax_s1(Sink,Term);

/* FUNCTION Util-U-ParsedFormTag1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormTag1_s1 struct _Con_M_U_ParsedFormTag1_s1
struct _Con_M_U_ParsedFormTag1_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormTag1_s1;
extern int step_M_U_ParsedFormTag1_s1(Sink,Term);

/* FUNCTION Util-U-ParsedFormTag1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormTag1_s2 struct _Con_M_U_ParsedFormTag1_s2
struct _Con_M_U_ParsedFormTag1_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormTag1_s2;
extern int step_M_U_ParsedFormTag1_s2(Sink,Term);

/* FUNCTION Util-U-ParsedFormTag1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormTag1_s3 struct _Con_M_U_ParsedFormTag1_s3
struct _Con_M_U_ParsedFormTag1_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormTag1_s3;
extern int step_M_U_ParsedFormTag1_s3(Sink,Term);

/* FUNCTION Cook-C-GetConstructorScopeSorts-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_GetConstructorScopeSorts struct _Con_M_C_GetConstructorScopeSorts
struct _Con_M_C_GetConstructorScopeSorts {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_GetConstructorScopeSorts;
extern int step_M_C_GetConstructorScopeSorts(Sink,Term);

/* FUNCTION Cook-C-AddScopeSynthesized-1$C-AddScopeSynthesized$Hx_Scope HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddScopeSynthesized struct _Con_M_C_AddScopeSynthesized
struct _Con_M_C_AddScopeSynthesized {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddScopeSynthesized;
extern int step_M_C_AddScopeSynthesized(Sink,Term);

/* FUNCTION Cook-C-SortMap-then-GetFreeVariableSort-1$C-SortMap-then-GetFreeVariableSort$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap__then_GetFreeVariableSort struct _Con_M_C_SortMap__then_GetFreeVariableSort
struct _Con_M_C_SortMap__then_GetFreeVariableSort {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap__then_GetFreeVariableSort;
extern int step_M_C_SortMap__then_GetFreeVariableSort(Sink,Term);

/* FUNCTION Prelude-ThenFilter- HEADER DECLARATIONS. */
#define STRUCT_Con_M_ThenFilter_s2 struct _Con_M_ThenFilter_s2
struct _Con_M_ThenFilter_s2 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_ThenFilter_s2;
extern int step_M_ThenFilter_s2(Sink,Term);

/* FUNCTION Prelude-ThenFilter-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_ThenFilter_s4 struct _Con_M_ThenFilter_s4
struct _Con_M_ThenFilter_s4 {struct _Construction construction; Term sub[1]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_ThenFilter_s4;
extern int step_M_ThenFilter_s4(Sink,Term);

/* FUNCTION Prep-P-SameScopeSort-1$P-SameScopeSort$Hx_ScopeSort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameScopeSort struct _Con_M_P_SameScopeSort
struct _Con_M_P_SameScopeSort {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameScopeSort;
extern int step_M_P_SameScopeSort(Sink,Term);

/* FUNCTION Prelude-ThenFilter-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_ThenFilter_s3 struct _Con_M_ThenFilter_s3
struct _Con_M_ThenFilter_s3 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_ThenFilter_s3;
extern int step_M_ThenFilter_s3(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar2_s11 struct _Con_M_P_SortMetaVar2_s11
struct _Con_M_P_SortMetaVar2_s11 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar2_s11;
extern int step_M_P_SortMetaVar2_s11(Sink,Term);

/* FUNCTION Prep-P-SortMetaVar2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SortMetaVar2_s10 struct _Con_M_P_SortMetaVar2_s10
struct _Con_M_P_SortMetaVar2_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SortMetaVar2_s10;
extern int step_M_P_SortMetaVar2_s10(Sink,Term);

/* FUNCTION Util-U-AllTokenNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllTokenNames_s2 struct _Con_M_U_AllTokenNames_s2
struct _Con_M_U_AllTokenNames_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllTokenNames_s2;
extern int step_M_U_AllTokenNames_s2(Sink,Term);

/* FUNCTION Util-U-AllTokenNames-1$U-AllTokenNames$1$DME_NAMES HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllTokenNames_s1 struct _Con_M_U_AllTokenNames_s1
struct _Con_M_U_AllTokenNames_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllTokenNames_s1;
extern int step_M_U_AllTokenNames_s1(Sink,Term);

/* FUNCTION Prelude-Name2NamesClosure7-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Name2NamesClosure7_s1 struct _Con_M_Name2NamesClosure7_s1
struct _Con_M_Name2NamesClosure7_s1 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Name2NamesClosure7_s1;
extern int step_M_Name2NamesClosure7_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s178 struct _Con_M_C_UnsynthesizeRule_s178
struct _Con_M_C_UnsynthesizeRule_s178 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s178;
extern int step_M_C_UnsynthesizeRule_s178(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s11 struct _Con_M_C_UnsynthesizeRule_s11
struct _Con_M_C_UnsynthesizeRule_s11 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s11;
extern int step_M_C_UnsynthesizeRule_s11(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-1$C-UnsynthesizeTerm$2$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s2 struct _Con_M_C_UnsynthesizeTerm_s2
struct _Con_M_C_UnsynthesizeTerm_s2 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s2;
extern int step_M_C_UnsynthesizeTerm_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s177 struct _Con_M_C_UnsynthesizeRule_s177
struct _Con_M_C_UnsynthesizeRule_s177 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s177;
extern int step_M_C_UnsynthesizeRule_s177(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s10 struct _Con_M_C_UnsynthesizeRule_s10
struct _Con_M_C_UnsynthesizeRule_s10 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s10;
extern int step_M_C_UnsynthesizeRule_s10(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s176 struct _Con_M_C_UnsynthesizeRule_s176
struct _Con_M_C_UnsynthesizeRule_s176 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s176;
extern int step_M_C_UnsynthesizeRule_s176(Sink,Term);

/* FUNCTION Prelude-Not-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Not_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Not_s2;
extern int step_M_Not_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s175 struct _Con_M_C_UnsynthesizeRule_s175
struct _Con_M_C_UnsynthesizeRule_s175 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s175;
extern int step_M_C_UnsynthesizeRule_s175(Sink,Term);

/* FUNCTION Prelude-Not-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Not_s1 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Not_s1;
extern int step_M_Not_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s174 struct _Con_M_C_UnsynthesizeRule_s174
struct _Con_M_C_UnsynthesizeRule_s174 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s174;
extern int step_M_C_UnsynthesizeRule_s174(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s15 struct _Con_M_C_UnsynthesizeRule_s15
struct _Con_M_C_UnsynthesizeRule_s15 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s15;
extern int step_M_C_UnsynthesizeRule_s15(Sink,Term);

/* FUNCTION Prelude-RemoveName2Name1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_RemoveName2Name1 struct _Con_M_RemoveName2Name1
struct _Con_M_RemoveName2Name1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_RemoveName2Name1;
extern int step_M_RemoveName2Name1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s173 struct _Con_M_C_UnsynthesizeRule_s173
struct _Con_M_C_UnsynthesizeRule_s173 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s173;
extern int step_M_C_UnsynthesizeRule_s173(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s14 struct _Con_M_C_UnsynthesizeRule_s14
struct _Con_M_C_UnsynthesizeRule_s14 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s14;
extern int step_M_C_UnsynthesizeRule_s14(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s172 struct _Con_M_C_UnsynthesizeRule_s172
struct _Con_M_C_UnsynthesizeRule_s172 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s172;
extern int step_M_C_UnsynthesizeRule_s172(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s13 struct _Con_M_C_UnsynthesizeRule_s13
struct _Con_M_C_UnsynthesizeRule_s13 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s13;
extern int step_M_C_UnsynthesizeRule_s13(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s12 struct _Con_M_C_UnsynthesizeRule_s12
struct _Con_M_C_UnsynthesizeRule_s12 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s12;
extern int step_M_C_UnsynthesizeRule_s12(Sink,Term);

/* FUNCTION Prelude-TraceWhen-1$TraceWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_TraceWhen struct _Con_M_TraceWhen
struct _Con_M_TraceWhen {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TraceWhen;
extern int step_M_TraceWhen(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s9 struct _Con_M_C_UnsynthesizeTerm_s9
struct _Con_M_C_UnsynthesizeTerm_s9 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s9;
extern int step_M_C_UnsynthesizeTerm_s9(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s8 struct _Con_M_C_UnsynthesizeTerm_s8
struct _Con_M_C_UnsynthesizeTerm_s8 {struct _Construction construction; Term sub[11]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s8;
extern int step_M_C_UnsynthesizeTerm_s8(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s7 struct _Con_M_C_UnsynthesizeTerm_s7
struct _Con_M_C_UnsynthesizeTerm_s7 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s7;
extern int step_M_C_UnsynthesizeTerm_s7(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s6 struct _Con_M_C_UnsynthesizeTerm_s6
struct _Con_M_C_UnsynthesizeTerm_s6 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s6;
extern int step_M_C_UnsynthesizeTerm_s6(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-2$C-UnsynthesizeTerm$5$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s5 struct _Con_M_C_UnsynthesizeTerm_s5
struct _Con_M_C_UnsynthesizeTerm_s5 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s5;
extern int step_M_C_UnsynthesizeTerm_s5(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s179 struct _Con_M_C_UnsynthesizeRule_s179
struct _Con_M_C_UnsynthesizeRule_s179 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s179;
extern int step_M_C_UnsynthesizeRule_s179(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm_s3 struct _Con_M_C_UnsynthesizeTerm_s3
struct _Con_M_C_UnsynthesizeTerm_s3 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm_s3;
extern int step_M_C_UnsynthesizeTerm_s3(Sink,Term);

/* FUNCTION Util-U-MakeInheritedNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeInheritedNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MakeInheritedNames;
extern int step_M_U_MakeInheritedNames(Sink,Term);

/* FUNCTION Cook-C-HashWhen-1$C-HashWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_HashWhen struct _Con_M_C_HashWhen
struct _Con_M_C_HashWhen {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_HashWhen;
extern int step_M_C_HashWhen(Sink,Term);

/* FUNCTION Text-Print-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Text_Print struct _Con_M_Text_Print
struct _Con_M_Text_Print {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Text_Print;
extern int step_M_Text_Print(Sink,Term);

/* FUNCTION Util-U-then-InsertDefines-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_InsertDefines_s1 struct _Con_M_U__then_InsertDefines_s1
struct _Con_M_U__then_InsertDefines_s1 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U__then_InsertDefines_s1;
extern int step_M_U__then_InsertDefines_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s170 struct _Con_M_C_UnsynthesizeRule_s170
struct _Con_M_C_UnsynthesizeRule_s170 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s170;
extern int step_M_C_UnsynthesizeRule_s170(Sink,Term);

/* FUNCTION Prelude-AsTextWhen-1$AsTextWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_AsTextWhen struct _Con_M_AsTextWhen
struct _Con_M_AsTextWhen {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AsTextWhen;
extern int step_M_AsTextWhen(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2_s4 struct _Con_M_U_NonMainSyntacticSymbols2_s4
struct _Con_M_U_NonMainSyntacticSymbols2_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2_s4;
extern int step_M_U_NonMainSyntacticSymbols2_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s165 struct _Con_M_C_UnsynthesizeRule_s165
struct _Con_M_C_UnsynthesizeRule_s165 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s165;
extern int step_M_C_UnsynthesizeRule_s165(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2_s3 struct _Con_M_U_NonMainSyntacticSymbols2_s3
struct _Con_M_U_NonMainSyntacticSymbols2_s3 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2_s3;
extern int step_M_U_NonMainSyntacticSymbols2_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s164 struct _Con_M_C_UnsynthesizeRule_s164
struct _Con_M_C_UnsynthesizeRule_s164 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s164;
extern int step_M_C_UnsynthesizeRule_s164(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2_s6 struct _Con_M_U_NonMainSyntacticSymbols2_s6
struct _Con_M_U_NonMainSyntacticSymbols2_s6 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2_s6;
extern int step_M_U_NonMainSyntacticSymbols2_s6(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s167 struct _Con_M_C_UnsynthesizeRule_s167
struct _Con_M_C_UnsynthesizeRule_s167 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s167;
extern int step_M_C_UnsynthesizeRule_s167(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2_s5 struct _Con_M_U_NonMainSyntacticSymbols2_s5
struct _Con_M_U_NonMainSyntacticSymbols2_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2_s5;
extern int step_M_U_NonMainSyntacticSymbols2_s5(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s21 struct _Con_M_C_UnsynthesizeRule_s21
struct _Con_M_C_UnsynthesizeRule_s21 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s21;
extern int step_M_C_UnsynthesizeRule_s21(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s166 struct _Con_M_C_UnsynthesizeRule_s166
struct _Con_M_C_UnsynthesizeRule_s166 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s166;
extern int step_M_C_UnsynthesizeRule_s166(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2_s8 struct _Con_M_U_NonMainSyntacticSymbols2_s8
struct _Con_M_U_NonMainSyntacticSymbols2_s8 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2_s8;
extern int step_M_U_NonMainSyntacticSymbols2_s8(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s24 struct _Con_M_C_UnsynthesizeRule_s24
struct _Con_M_C_UnsynthesizeRule_s24 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s24;
extern int step_M_C_UnsynthesizeRule_s24(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s161 struct _Con_M_C_UnsynthesizeRule_s161
struct _Con_M_C_UnsynthesizeRule_s161 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s161;
extern int step_M_C_UnsynthesizeRule_s161(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2_s7 struct _Con_M_U_NonMainSyntacticSymbols2_s7
struct _Con_M_U_NonMainSyntacticSymbols2_s7 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2_s7;
extern int step_M_U_NonMainSyntacticSymbols2_s7(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s23 struct _Con_M_C_UnsynthesizeRule_s23
struct _Con_M_C_UnsynthesizeRule_s23 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s23;
extern int step_M_C_UnsynthesizeRule_s23(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s160 struct _Con_M_C_UnsynthesizeRule_s160
struct _Con_M_C_UnsynthesizeRule_s160 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s160;
extern int step_M_C_UnsynthesizeRule_s160(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s26 struct _Con_M_C_UnsynthesizeRule_s26
struct _Con_M_C_UnsynthesizeRule_s26 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s26;
extern int step_M_C_UnsynthesizeRule_s26(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s163 struct _Con_M_C_UnsynthesizeRule_s163
struct _Con_M_C_UnsynthesizeRule_s163 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s163;
extern int step_M_C_UnsynthesizeRule_s163(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2_s9 struct _Con_M_U_NonMainSyntacticSymbols2_s9
struct _Con_M_U_NonMainSyntacticSymbols2_s9 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2_s9;
extern int step_M_U_NonMainSyntacticSymbols2_s9(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s25 struct _Con_M_C_UnsynthesizeRule_s25
struct _Con_M_C_UnsynthesizeRule_s25 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s25;
extern int step_M_C_UnsynthesizeRule_s25(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s162 struct _Con_M_C_UnsynthesizeRule_s162
struct _Con_M_C_UnsynthesizeRule_s162 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s162;
extern int step_M_C_UnsynthesizeRule_s162(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s169 struct _Con_M_C_UnsynthesizeRule_s169
struct _Con_M_C_UnsynthesizeRule_s169 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s169;
extern int step_M_C_UnsynthesizeRule_s169(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s168 struct _Con_M_C_UnsynthesizeRule_s168
struct _Con_M_C_UnsynthesizeRule_s168 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s168;
extern int step_M_C_UnsynthesizeRule_s168(Sink,Term);

/* FUNCTION Prelude-When-1$When$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_When struct _Con_M_When
struct _Con_M_When {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_When;
extern int step_M_When(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2_s2 struct _Con_M_U_NonMainSyntacticSymbols2_s2
struct _Con_M_U_NonMainSyntacticSymbols2_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2_s2;
extern int step_M_U_NonMainSyntacticSymbols2_s2(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2_s1 struct _Con_M_U_NonMainSyntacticSymbols2_s1
struct _Con_M_U_NonMainSyntacticSymbols2_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2_s1;
extern int step_M_U_NonMainSyntacticSymbols2_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s16 struct _Con_M_C_UnsynthesizeRule_s16
struct _Con_M_C_UnsynthesizeRule_s16 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s16;
extern int step_M_C_UnsynthesizeRule_s16(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s17 struct _Con_M_C_UnsynthesizeRule_s17
struct _Con_M_C_UnsynthesizeRule_s17 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s17;
extern int step_M_C_UnsynthesizeRule_s17(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeAttributes- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeAttributes struct _Con_M_C_UnsynthesizeAttributes
struct _Con_M_C_UnsynthesizeAttributes {struct _Construction construction; Term sub[8]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeAttributes;
extern int step_M_C_UnsynthesizeAttributes(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s18 struct _Con_M_C_UnsynthesizeRule_s18
struct _Con_M_C_UnsynthesizeRule_s18 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s18;
extern int step_M_C_UnsynthesizeRule_s18(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s19 struct _Con_M_C_UnsynthesizeRule_s19
struct _Con_M_C_UnsynthesizeRule_s19 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s19;
extern int step_M_C_UnsynthesizeRule_s19(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s37 struct _Con_M_C_UnsynthesizeRule_s37
struct _Con_M_C_UnsynthesizeRule_s37 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s37;
extern int step_M_C_UnsynthesizeRule_s37(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s196 struct _Con_M_C_UnsynthesizeRule_s196
struct _Con_M_C_UnsynthesizeRule_s196 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s196;
extern int step_M_C_UnsynthesizeRule_s196(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s195 struct _Con_M_C_UnsynthesizeRule_s195
struct _Con_M_C_UnsynthesizeRule_s195 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s195;
extern int step_M_C_UnsynthesizeRule_s195(Sink,Term);

/* FUNCTION Util-U-AttributeFormString- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AttributeFormString struct _Con_M_U_AttributeFormString
struct _Con_M_U_AttributeFormString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AttributeFormString;
extern int step_M_U_AttributeFormString(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s35 struct _Con_M_C_UnsynthesizeRule_s35
struct _Con_M_C_UnsynthesizeRule_s35 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s35;
extern int step_M_C_UnsynthesizeRule_s35(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s194 struct _Con_M_C_UnsynthesizeRule_s194
struct _Con_M_C_UnsynthesizeRule_s194 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s194;
extern int step_M_C_UnsynthesizeRule_s194(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s34 struct _Con_M_C_UnsynthesizeRule_s34
struct _Con_M_C_UnsynthesizeRule_s34 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s34;
extern int step_M_C_UnsynthesizeRule_s34(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s193 struct _Con_M_C_UnsynthesizeRule_s193
struct _Con_M_C_UnsynthesizeRule_s193 {struct _Construction construction; Term sub[24]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s193;
extern int step_M_C_UnsynthesizeRule_s193(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s33 struct _Con_M_C_UnsynthesizeRule_s33
struct _Con_M_C_UnsynthesizeRule_s33 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s33;
extern int step_M_C_UnsynthesizeRule_s33(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s32 struct _Con_M_C_UnsynthesizeRule_s32
struct _Con_M_C_UnsynthesizeRule_s32 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s32;
extern int step_M_C_UnsynthesizeRule_s32(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s31 struct _Con_M_C_UnsynthesizeRule_s31
struct _Con_M_C_UnsynthesizeRule_s31 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s31;
extern int step_M_C_UnsynthesizeRule_s31(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s198 struct _Con_M_C_UnsynthesizeRule_s198
struct _Con_M_C_UnsynthesizeRule_s198 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s198;
extern int step_M_C_UnsynthesizeRule_s198(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s30 struct _Con_M_C_UnsynthesizeRule_s30
struct _Con_M_C_UnsynthesizeRule_s30 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s30;
extern int step_M_C_UnsynthesizeRule_s30(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s197 struct _Con_M_C_UnsynthesizeRule_s197
struct _Con_M_C_UnsynthesizeRule_s197 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s197;
extern int step_M_C_UnsynthesizeRule_s197(Sink,Term);

/* FUNCTION Prelude-_NameSetString-1$_NameSetString$NAME_SET HEADER DECLARATIONS. */
#define STRUCT_Con_M__xNameSetString struct _Con_M__xNameSetString
struct _Con_M__xNameSetString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M__xNameSetString;
extern int step_M__xNameSetString(Sink,Term);

/* FUNCTION Util-U-TermString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_TermString struct _Con_M_U_TermString
struct _Con_M_U_TermString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_TermString;
extern int step_M_U_TermString(Sink,Term);

/* FUNCTION Cook-C-SubstituteSort-Pattern-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SubstituteSort_Pattern_s2 struct _Con_M_C_SubstituteSort_Pattern_s2
struct _Con_M_C_SubstituteSort_Pattern_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SubstituteSort_Pattern_s2;
extern int step_M_C_SubstituteSort_Pattern_s2(Sink,Term);

/* FUNCTION Cook-C-SubstituteSort-Pattern-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SubstituteSort_Pattern_s1 struct _Con_M_C_SubstituteSort_Pattern_s1
struct _Con_M_C_SubstituteSort_Pattern_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SubstituteSort_Pattern_s1;
extern int step_M_C_SubstituteSort_Pattern_s1(Sink,Term);

/* FUNCTION Cook-C-SubstituteSort-Pattern-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SubstituteSort_Pattern_s4 struct _Con_M_C_SubstituteSort_Pattern_s4
struct _Con_M_C_SubstituteSort_Pattern_s4 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SubstituteSort_Pattern_s4;
extern int step_M_C_SubstituteSort_Pattern_s4(Sink,Term);

/* FUNCTION Prelude-StringContainsWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringContainsWhen_s1 struct _Con_M_StringContainsWhen_s1
struct _Con_M_StringContainsWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringContainsWhen_s1;
extern int step_M_StringContainsWhen_s1(Sink,Term);

/* FUNCTION Cook-C-SubstituteSort-Pattern-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SubstituteSort_Pattern_s3 struct _Con_M_C_SubstituteSort_Pattern_s3
struct _Con_M_C_SubstituteSort_Pattern_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SubstituteSort_Pattern_s3;
extern int step_M_C_SubstituteSort_Pattern_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeTerm- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeTerm struct _Con_M_C_UnsynthesizeTerm
struct _Con_M_C_UnsynthesizeTerm {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeTerm;
extern int step_M_C_UnsynthesizeTerm(Sink,Term);

/* FUNCTION Util-U-MakeDM-ExtraInformation2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_ExtraInformation2 struct _Con_M_U_MakeDM_ExtraInformation2
struct _Con_M_U_MakeDM_ExtraInformation2 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_ExtraInformation2;
extern int step_M_U_MakeDM_ExtraInformation2(Sink,Term);

/* FUNCTION Util-U-MakeDM-ExtraInformation3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_ExtraInformation3 struct _Con_M_U_MakeDM_ExtraInformation3
struct _Con_M_U_MakeDM_ExtraInformation3 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_ExtraInformation3;
extern int step_M_U_MakeDM_ExtraInformation3(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry-1$U-KeepInheritedEntry$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry struct _Con_M_U_KeepInheritedEntry
struct _Con_M_U_KeepInheritedEntry {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry;
extern int step_M_U_KeepInheritedEntry(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeMapValue-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeMapValue_s2 struct _Con_M_C_CrsxifyAttributeMapValue_s2
struct _Con_M_C_CrsxifyAttributeMapValue_s2 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeMapValue_s2;
extern int step_M_C_CrsxifyAttributeMapValue_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeMapValue-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeMapValue_s1 struct _Con_M_C_CrsxifyAttributeMapValue_s1
struct _Con_M_C_CrsxifyAttributeMapValue_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeMapValue_s1;
extern int step_M_C_CrsxifyAttributeMapValue_s1(Sink,Term);

/* FUNCTION Prep-P-SameSort2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s13 struct _Con_M_P_SameSort2_s13
struct _Con_M_P_SameSort2_s13 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s13;
extern int step_M_P_SameSort2_s13(Sink,Term);

/* FUNCTION Cook-C-CrsxifyAttributeMapValue-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyAttributeMapValue_s3 struct _Con_M_C_CrsxifyAttributeMapValue_s3
struct _Con_M_C_CrsxifyAttributeMapValue_s3 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyAttributeMapValue_s3;
extern int step_M_C_CrsxifyAttributeMapValue_s3(Sink,Term);

/* FUNCTION Prep-P-SameSort2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s12 struct _Con_M_P_SameSort2_s12
struct _Con_M_P_SameSort2_s12 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s12;
extern int step_M_P_SameSort2_s12(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s29 struct _Con_M_C_UnsynthesizeRule_s29
struct _Con_M_C_UnsynthesizeRule_s29 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s29;
extern int step_M_C_UnsynthesizeRule_s29(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s191 struct _Con_M_C_UnsynthesizeRule_s191
struct _Con_M_C_UnsynthesizeRule_s191 {struct _Construction construction; Term sub[23]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s191;
extern int step_M_C_UnsynthesizeRule_s191(Sink,Term);

/* FUNCTION Prep-P-SameSort2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s11 struct _Con_M_P_SameSort2_s11
struct _Con_M_P_SameSort2_s11 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s11;
extern int step_M_P_SameSort2_s11(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain1 struct _Con_M_U_InsertDefinesMain1
struct _Con_M_U_InsertDefinesMain1 {struct _Construction construction; Term sub[8]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain1;
extern int step_M_U_InsertDefinesMain1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s192 struct _Con_M_C_UnsynthesizeRule_s192
struct _Con_M_C_UnsynthesizeRule_s192 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s192;
extern int step_M_C_UnsynthesizeRule_s192(Sink,Term);

/* FUNCTION Prep-P-SameSort2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SameSort2_s10 struct _Con_M_P_SameSort2_s10
struct _Con_M_P_SameSort2_s10 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SameSort2_s10;
extern int step_M_P_SameSort2_s10(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s27 struct _Con_M_C_UnsynthesizeRule_s27
struct _Con_M_C_UnsynthesizeRule_s27 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s27;
extern int step_M_C_UnsynthesizeRule_s27(Sink,Term);

/* FUNCTION Util-U-MakeConstructor2Sort-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeConstructor2Sort struct _Con_M_U_MakeConstructor2Sort
struct _Con_M_U_MakeConstructor2Sort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeConstructor2Sort;
extern int step_M_U_MakeConstructor2Sort(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s28 struct _Con_M_C_UnsynthesizeRule_s28
struct _Con_M_C_UnsynthesizeRule_s28 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s28;
extern int step_M_C_UnsynthesizeRule_s28(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s190 struct _Con_M_C_UnsynthesizeRule_s190
struct _Con_M_C_UnsynthesizeRule_s190 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s190;
extern int step_M_C_UnsynthesizeRule_s190(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s46 struct _Con_M_C_UnsynthesizeRule_s46
struct _Con_M_C_UnsynthesizeRule_s46 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s46;
extern int step_M_C_UnsynthesizeRule_s46(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s183 struct _Con_M_C_UnsynthesizeRule_s183
struct _Con_M_C_UnsynthesizeRule_s183 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s183;
extern int step_M_C_UnsynthesizeRule_s183(Sink,Term);

/* FUNCTION Util-U-FormTag-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormTag_s2 struct _Con_M_U_FormTag_s2
struct _Con_M_U_FormTag_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormTag_s2;
extern int step_M_U_FormTag_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s45 struct _Con_M_C_UnsynthesizeRule_s45
struct _Con_M_C_UnsynthesizeRule_s45 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s45;
extern int step_M_C_UnsynthesizeRule_s45(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s182 struct _Con_M_C_UnsynthesizeRule_s182
struct _Con_M_C_UnsynthesizeRule_s182 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s182;
extern int step_M_C_UnsynthesizeRule_s182(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s48 struct _Con_M_C_UnsynthesizeRule_s48
struct _Con_M_C_UnsynthesizeRule_s48 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s48;
extern int step_M_C_UnsynthesizeRule_s48(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s47 struct _Con_M_C_UnsynthesizeRule_s47
struct _Con_M_C_UnsynthesizeRule_s47 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s47;
extern int step_M_C_UnsynthesizeRule_s47(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s184 struct _Con_M_C_UnsynthesizeRule_s184
struct _Con_M_C_UnsynthesizeRule_s184 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s184;
extern int step_M_C_UnsynthesizeRule_s184(Sink,Term);

/* FUNCTION Prelude-TextToString- HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextToString struct _Con_M_TextToString
struct _Con_M_TextToString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextToString;
extern int step_M_TextToString(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s42 struct _Con_M_C_UnsynthesizeRule_s42
struct _Con_M_C_UnsynthesizeRule_s42 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s42;
extern int step_M_C_UnsynthesizeRule_s42(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s187 struct _Con_M_C_UnsynthesizeRule_s187
struct _Con_M_C_UnsynthesizeRule_s187 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s187;
extern int step_M_C_UnsynthesizeRule_s187(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s41 struct _Con_M_C_UnsynthesizeRule_s41
struct _Con_M_C_UnsynthesizeRule_s41 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s41;
extern int step_M_C_UnsynthesizeRule_s41(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s186 struct _Con_M_C_UnsynthesizeRule_s186
struct _Con_M_C_UnsynthesizeRule_s186 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s186;
extern int step_M_C_UnsynthesizeRule_s186(Sink,Term);

/* FUNCTION Util-U-FormTag-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_FormTag_s1 struct _Con_M_U_FormTag_s1
struct _Con_M_U_FormTag_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_FormTag_s1;
extern int step_M_U_FormTag_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s44 struct _Con_M_C_UnsynthesizeRule_s44
struct _Con_M_C_UnsynthesizeRule_s44 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s44;
extern int step_M_C_UnsynthesizeRule_s44(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s189 struct _Con_M_C_UnsynthesizeRule_s189
struct _Con_M_C_UnsynthesizeRule_s189 {struct _Construction construction; Term sub[24]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s189;
extern int step_M_C_UnsynthesizeRule_s189(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s43 struct _Con_M_C_UnsynthesizeRule_s43
struct _Con_M_C_UnsynthesizeRule_s43 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s43;
extern int step_M_C_UnsynthesizeRule_s43(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s188 struct _Con_M_C_UnsynthesizeRule_s188
struct _Con_M_C_UnsynthesizeRule_s188 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s188;
extern int step_M_C_UnsynthesizeRule_s188(Sink,Term);

/* FUNCTION Cook-Unparse- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unparse struct _Con_M_C_Unparse
struct _Con_M_C_Unparse {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Unparse;
extern int step_M_C_Unparse(Sink,Term);

/* FUNCTION Util-U-AttributeKindString-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AttributeKindString_s1 struct _Con_M_U_AttributeKindString_s1
struct _Con_M_U_AttributeKindString_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AttributeKindString_s1;
extern int step_M_U_AttributeKindString_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s40 struct _Con_M_C_UnsynthesizeRule_s40
struct _Con_M_C_UnsynthesizeRule_s40 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s40;
extern int step_M_C_UnsynthesizeRule_s40(Sink,Term);

/* FUNCTION Util-U-AttributeKindString-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AttributeKindString_s2 struct _Con_M_U_AttributeKindString_s2
struct _Con_M_U_AttributeKindString_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AttributeKindString_s2;
extern int step_M_U_AttributeKindString_s2(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpChoice-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpChoice_s2 struct _Con_M_P_DeclareRegExpChoice_s2
struct _Con_M_P_DeclareRegExpChoice_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpChoice_s2;
extern int step_M_P_DeclareRegExpChoice_s2(Sink,Term);

/* FUNCTION Prep-P-DeclareRegExpChoice-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_DeclareRegExpChoice_s1 struct _Con_M_P_DeclareRegExpChoice_s1
struct _Con_M_P_DeclareRegExpChoice_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_DeclareRegExpChoice_s1;
extern int step_M_P_DeclareRegExpChoice_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s38 struct _Con_M_C_UnsynthesizeRule_s38
struct _Con_M_C_UnsynthesizeRule_s38 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s38;
extern int step_M_C_UnsynthesizeRule_s38(Sink,Term);

/* FUNCTION Cook-C-UnravelScope_10-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnravelScope_x10 struct _Con_M_C_UnravelScope_x10
struct _Con_M_C_UnravelScope_x10 {struct _Construction construction; Term sub[1]; Variable binder[10];};
extern struct _ConstructionDescriptor descriptor_M_C_UnravelScope_x10;
extern int step_M_C_UnravelScope_x10(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s39 struct _Con_M_C_UnsynthesizeRule_s39
struct _Con_M_C_UnsynthesizeRule_s39 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s39;
extern int step_M_C_UnsynthesizeRule_s39(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s180 struct _Con_M_C_UnsynthesizeRule_s180
struct _Con_M_C_UnsynthesizeRule_s180 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s180;
extern int step_M_C_UnsynthesizeRule_s180(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s181 struct _Con_M_C_UnsynthesizeRule_s181
struct _Con_M_C_UnsynthesizeRule_s181 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s181;
extern int step_M_C_UnsynthesizeRule_s181(Sink,Term);

/* FUNCTION Util-U-ParsedFormWordTag-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormWordTag struct _Con_M_U_ParsedFormWordTag
struct _Con_M_U_ParsedFormWordTag {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormWordTag;
extern int step_M_U_ParsedFormWordTag(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s51 struct _Con_M_C_UnsynthesizeRule_s51
struct _Con_M_C_UnsynthesizeRule_s51 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s51;
extern int step_M_C_UnsynthesizeRule_s51(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s54 struct _Con_M_C_UnsynthesizeRule_s54
struct _Con_M_C_UnsynthesizeRule_s54 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s54;
extern int step_M_C_UnsynthesizeRule_s54(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s55 struct _Con_M_C_UnsynthesizeRule_s55
struct _Con_M_C_UnsynthesizeRule_s55 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s55;
extern int step_M_C_UnsynthesizeRule_s55(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s52 struct _Con_M_C_UnsynthesizeRule_s52
struct _Con_M_C_UnsynthesizeRule_s52 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s52;
extern int step_M_C_UnsynthesizeRule_s52(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s53 struct _Con_M_C_UnsynthesizeRule_s53
struct _Con_M_C_UnsynthesizeRule_s53 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s53;
extern int step_M_C_UnsynthesizeRule_s53(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s58 struct _Con_M_C_UnsynthesizeRule_s58
struct _Con_M_C_UnsynthesizeRule_s58 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s58;
extern int step_M_C_UnsynthesizeRule_s58(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s59 struct _Con_M_C_UnsynthesizeRule_s59
struct _Con_M_C_UnsynthesizeRule_s59 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s59;
extern int step_M_C_UnsynthesizeRule_s59(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s56 struct _Con_M_C_UnsynthesizeRule_s56
struct _Con_M_C_UnsynthesizeRule_s56 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s56;
extern int step_M_C_UnsynthesizeRule_s56(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s57 struct _Con_M_C_UnsynthesizeRule_s57
struct _Con_M_C_UnsynthesizeRule_s57 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s57;
extern int step_M_C_UnsynthesizeRule_s57(Sink,Term);

/* FUNCTION Prelude-StringToNumericWhen-1$StringToNumericWhen$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringToNumericWhen struct _Con_M_StringToNumericWhen
struct _Con_M_StringToNumericWhen {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringToNumericWhen;
extern int step_M_StringToNumericWhen(Sink,Term);

/* FUNCTION Util-U-RuleString-1$U-RuleString$Hx_Rule HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RuleString struct _Con_M_U_RuleString
struct _Con_M_U_RuleString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RuleString;
extern int step_M_U_RuleString(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s49 struct _Con_M_C_UnsynthesizeRule_s49
struct _Con_M_C_UnsynthesizeRule_s49 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s49;
extern int step_M_C_UnsynthesizeRule_s49(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s2 struct _Con_M_U_MainSymbol2_s2
struct _Con_M_U_MainSymbol2_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s2;
extern int step_M_U_MainSymbol2_s2(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s1 struct _Con_M_U_MainSymbol2_s1
struct _Con_M_U_MainSymbol2_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s1;
extern int step_M_U_MainSymbol2_s1(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s4 struct _Con_M_U_MainSymbol2_s4
struct _Con_M_U_MainSymbol2_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s4;
extern int step_M_U_MainSymbol2_s4(Sink,Term);

/* FUNCTION Prep-P-ProductionNameWithPrecText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionNameWithPrecText struct _Con_M_P_ProductionNameWithPrecText
struct _Con_M_P_ProductionNameWithPrecText {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionNameWithPrecText;
extern int step_M_P_ProductionNameWithPrecText(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s3 struct _Con_M_U_MainSymbol2_s3
struct _Con_M_U_MainSymbol2_s3 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s3;
extern int step_M_U_MainSymbol2_s3(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s6 struct _Con_M_U_MainSymbol2_s6
struct _Con_M_U_MainSymbol2_s6 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s6;
extern int step_M_U_MainSymbol2_s6(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s5 struct _Con_M_U_MainSymbol2_s5
struct _Con_M_U_MainSymbol2_s5 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s5;
extern int step_M_U_MainSymbol2_s5(Sink,Term);

/* FUNCTION Util-U-DefineString2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString2_s1 struct _Con_M_U_DefineString2_s1
struct _Con_M_U_DefineString2_s1 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString2_s1;
extern int step_M_U_DefineString2_s1(Sink,Term);

/* FUNCTION Util-U-DefineString2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString2_s2 struct _Con_M_U_DefineString2_s2
struct _Con_M_U_DefineString2_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString2_s2;
extern int step_M_U_DefineString2_s2(Sink,Term);

/* FUNCTION Util-U-MainSymbol2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s7 struct _Con_M_U_MainSymbol2_s7
struct _Con_M_U_MainSymbol2_s7 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s7;
extern int step_M_U_MainSymbol2_s7(Sink,Term);

/* FUNCTION Util-U-DefineString2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString2_s3 struct _Con_M_U_DefineString2_s3
struct _Con_M_U_DefineString2_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString2_s3;
extern int step_M_U_DefineString2_s3(Sink,Term);

/* FUNCTION Util-U-DefineString2-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString2_s4 struct _Con_M_U_DefineString2_s4
struct _Con_M_U_DefineString2_s4 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString2_s4;
extern int step_M_U_DefineString2_s4(Sink,Term);

/* FUNCTION Util-U-MainSymbol2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MainSymbol2_s9 struct _Con_M_U_MainSymbol2_s9
struct _Con_M_U_MainSymbol2_s9 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MainSymbol2_s9;
extern int step_M_U_MainSymbol2_s9(Sink,Term);

/* FUNCTION Util-U-DefineString2-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DefineString2_s5 struct _Con_M_U_DefineString2_s5
struct _Con_M_U_DefineString2_s5 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DefineString2_s5;
extern int step_M_U_DefineString2_s5(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-7 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s5 struct _Con_M_C_AddTermTopSynthesized_s5
struct _Con_M_C_AddTermTopSynthesized_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s5;
extern int step_M_C_AddTermTopSynthesized_s5(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s4 struct _Con_M_C_AddTermTopSynthesized_s4
struct _Con_M_C_AddTermTopSynthesized_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s4;
extern int step_M_C_AddTermTopSynthesized_s4(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-10 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s7 struct _Con_M_C_AddTermTopSynthesized_s7
struct _Con_M_C_AddTermTopSynthesized_s7 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s7;
extern int step_M_C_AddTermTopSynthesized_s7(Sink,Term);

/* FUNCTION Prep-P-Productions-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Productions struct _Con_M_P_Productions
struct _Con_M_P_Productions {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Productions;
extern int step_M_P_Productions(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-8 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s6 struct _Con_M_C_AddTermTopSynthesized_s6
struct _Con_M_C_AddTermTopSynthesized_s6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s6;
extern int step_M_C_AddTermTopSynthesized_s6(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-9 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s9 struct _Con_M_C_AddTermTopSynthesized_s9
struct _Con_M_C_AddTermTopSynthesized_s9 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s9;
extern int step_M_C_AddTermTopSynthesized_s9(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s60 struct _Con_M_C_UnsynthesizeRule_s60
struct _Con_M_C_UnsynthesizeRule_s60 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s60;
extern int step_M_C_UnsynthesizeRule_s60(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-9$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s8 struct _Con_M_C_AddTermTopSynthesized_s8
struct _Con_M_C_AddTermTopSynthesized_s8 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s8;
extern int step_M_C_AddTermTopSynthesized_s8(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s61 struct _Con_M_C_UnsynthesizeRule_s61
struct _Con_M_C_UnsynthesizeRule_s61 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s61;
extern int step_M_C_UnsynthesizeRule_s61(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s62 struct _Con_M_C_UnsynthesizeRule_s62
struct _Con_M_C_UnsynthesizeRule_s62 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s62;
extern int step_M_C_UnsynthesizeRule_s62(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort2_s1 struct _Con_M_U_MakeAttribute2ValueSort2_s1
struct _Con_M_U_MakeAttribute2ValueSort2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort2_s1;
extern int step_M_U_MakeAttribute2ValueSort2_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s63 struct _Con_M_C_UnsynthesizeRule_s63
struct _Con_M_C_UnsynthesizeRule_s63 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s63;
extern int step_M_C_UnsynthesizeRule_s63(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort2_s2 struct _Con_M_U_MakeAttribute2ValueSort2_s2
struct _Con_M_U_MakeAttribute2ValueSort2_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort2_s2;
extern int step_M_U_MakeAttribute2ValueSort2_s2(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort2_s3 struct _Con_M_U_MakeAttribute2ValueSort2_s3
struct _Con_M_U_MakeAttribute2ValueSort2_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort2_s3;
extern int step_M_U_MakeAttribute2ValueSort2_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s65 struct _Con_M_C_UnsynthesizeRule_s65
struct _Con_M_C_UnsynthesizeRule_s65 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s65;
extern int step_M_C_UnsynthesizeRule_s65(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s66 struct _Con_M_C_UnsynthesizeRule_s66
struct _Con_M_C_UnsynthesizeRule_s66 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s66;
extern int step_M_C_UnsynthesizeRule_s66(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s67 struct _Con_M_C_UnsynthesizeRule_s67
struct _Con_M_C_UnsynthesizeRule_s67 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s67;
extern int step_M_C_UnsynthesizeRule_s67(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s1 struct _Con_M_C_AddTermTopSynthesized_s1
struct _Con_M_C_AddTermTopSynthesized_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s1;
extern int step_M_C_AddTermTopSynthesized_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s68 struct _Con_M_C_UnsynthesizeRule_s68
struct _Con_M_C_UnsynthesizeRule_s68 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s68;
extern int step_M_C_UnsynthesizeRule_s68(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s69 struct _Con_M_C_UnsynthesizeRule_s69
struct _Con_M_C_UnsynthesizeRule_s69 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s69;
extern int step_M_C_UnsynthesizeRule_s69(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s3 struct _Con_M_C_AddTermTopSynthesized_s3
struct _Con_M_C_AddTermTopSynthesized_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s3;
extern int step_M_C_AddTermTopSynthesized_s3(Sink,Term);

/* FUNCTION Cook-C-AddTermTopSynthesized-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermTopSynthesized_s2 struct _Con_M_C_AddTermTopSynthesized_s2
struct _Con_M_C_AddTermTopSynthesized_s2 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermTopSynthesized_s2;
extern int step_M_C_AddTermTopSynthesized_s2(Sink,Term);

/* FUNCTION Prep-P-ProductionNameWithPrec-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProductionNameWithPrec struct _Con_M_P_ProductionNameWithPrec
struct _Con_M_P_ProductionNameWithPrec {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ProductionNameWithPrec;
extern int step_M_P_ProductionNameWithPrec(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s72 struct _Con_M_C_UnsynthesizeRule_s72
struct _Con_M_C_UnsynthesizeRule_s72 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s72;
extern int step_M_C_UnsynthesizeRule_s72(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s73 struct _Con_M_C_UnsynthesizeRule_s73
struct _Con_M_C_UnsynthesizeRule_s73 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s73;
extern int step_M_C_UnsynthesizeRule_s73(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s70 struct _Con_M_C_UnsynthesizeRule_s70
struct _Con_M_C_UnsynthesizeRule_s70 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s70;
extern int step_M_C_UnsynthesizeRule_s70(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s71 struct _Con_M_C_UnsynthesizeRule_s71
struct _Con_M_C_UnsynthesizeRule_s71 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s71;
extern int step_M_C_UnsynthesizeRule_s71(Sink,Term);

/* FUNCTION Util-U-SymbolSortTokenName2-2$U-SymbolSortTokenName2$DME_ HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_SymbolSortTokenName2 struct _Con_M_U_SymbolSortTokenName2
struct _Con_M_U_SymbolSortTokenName2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_SymbolSortTokenName2;
extern int step_M_U_SymbolSortTokenName2(Sink,Term);

/* FUNCTION Prelude-CheckName2Name-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_CheckName2Name_s1 struct _Con_M_CheckName2Name_s1
struct _Con_M_CheckName2Name_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_CheckName2Name_s1;
extern int step_M_CheckName2Name_s1(Sink,Term);

/* FUNCTION Prelude-If-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_If_s1 struct _Con_M_If_s1
struct _Con_M_If_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_If_s1;
extern int step_M_If_s1(Sink,Term);

/* FUNCTION Prelude-If-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_If_s2 struct _Con_M_If_s2
struct _Con_M_If_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_If_s2;
extern int step_M_If_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeSortEntry-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeSortEntry_s2 struct _Con_M_C_UnsynthesizeSortEntry_s2
struct _Con_M_C_UnsynthesizeSortEntry_s2 {struct _Construction construction; Term sub[4]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeSortEntry_s2;
extern int step_M_C_UnsynthesizeSortEntry_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$C-UnsynthesizeRule$79$$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s79 struct _Con_M_C_UnsynthesizeRule_s79
struct _Con_M_C_UnsynthesizeRule_s79 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s79;
extern int step_M_C_UnsynthesizeRule_s79(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeSortEntry-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeSortEntry_s1 struct _Con_M_C_UnsynthesizeSortEntry_s1
struct _Con_M_C_UnsynthesizeSortEntry_s1 {struct _Construction construction; Term sub[6]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeSortEntry_s1;
extern int step_M_C_UnsynthesizeSortEntry_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s76 struct _Con_M_C_UnsynthesizeRule_s76
struct _Con_M_C_UnsynthesizeRule_s76 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s76;
extern int step_M_C_UnsynthesizeRule_s76(Sink,Term);

/* FUNCTION Prelude-AddName2Names1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AddName2Names1 struct _Con_M_AddName2Names1
struct _Con_M_AddName2Names1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AddName2Names1;
extern int step_M_AddName2Names1(Sink,Term);

/* FUNCTION Prep-P-ExtractSubstitutedSort-1$P-ExtractSubstitutedSort$Hx_SubstituteSort HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ExtractSubstitutedSort struct _Con_M_P_ExtractSubstitutedSort
struct _Con_M_P_ExtractSubstitutedSort {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_ExtractSubstitutedSort;
extern int step_M_P_ExtractSubstitutedSort(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s77 struct _Con_M_C_UnsynthesizeRule_s77
struct _Con_M_C_UnsynthesizeRule_s77 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s77;
extern int step_M_C_UnsynthesizeRule_s77(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s74 struct _Con_M_C_UnsynthesizeRule_s74
struct _Con_M_C_UnsynthesizeRule_s74 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s74;
extern int step_M_C_UnsynthesizeRule_s74(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s75 struct _Con_M_C_UnsynthesizeRule_s75
struct _Con_M_C_UnsynthesizeRule_s75 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s75;
extern int step_M_C_UnsynthesizeRule_s75(Sink,Term);

/* FUNCTION Util-U-InsertDefinesMain- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefinesMain struct _Con_M_U_InsertDefinesMain
struct _Con_M_U_InsertDefinesMain {struct _Construction construction; Term sub[5]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefinesMain;
extern int step_M_U_InsertDefinesMain(Sink,Term);

/* FUNCTION Util-U-MakeSort2Synthesized4- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeSort2Synthesized4 struct _Con_M_U_MakeSort2Synthesized4
struct _Con_M_U_MakeSort2Synthesized4 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeSort2Synthesized4;
extern int step_M_U_MakeSort2Synthesized4(Sink,Term);

/* FUNCTION Util-U-AllSynthesizedNames-1$U-AllSynthesizedNames HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllSynthesizedNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_AllSynthesizedNames;
extern int step_M_U_AllSynthesizedNames(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2_s10 struct _Con_M_U_NonMainSyntacticSymbols2_s10
struct _Con_M_U_NonMainSyntacticSymbols2_s10 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2_s10;
extern int step_M_U_NonMainSyntacticSymbols2_s10(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s81 struct _Con_M_C_UnsynthesizeRule_s81
struct _Con_M_C_UnsynthesizeRule_s81 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s81;
extern int step_M_C_UnsynthesizeRule_s81(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s82 struct _Con_M_C_UnsynthesizeRule_s82
struct _Con_M_C_UnsynthesizeRule_s82 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s82;
extern int step_M_C_UnsynthesizeRule_s82(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s83 struct _Con_M_C_UnsynthesizeRule_s83
struct _Con_M_C_UnsynthesizeRule_s83 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s83;
extern int step_M_C_UnsynthesizeRule_s83(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s84 struct _Con_M_C_UnsynthesizeRule_s84
struct _Con_M_C_UnsynthesizeRule_s84 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s84;
extern int step_M_C_UnsynthesizeRule_s84(Sink,Term);

/* FUNCTION Cook-C-AddTermSynthesized- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddTermSynthesized struct _Con_M_C_AddTermSynthesized
struct _Con_M_C_AddTermSynthesized {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddTermSynthesized;
extern int step_M_C_AddTermSynthesized(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s89 struct _Con_M_C_UnsynthesizeRule_s89
struct _Con_M_C_UnsynthesizeRule_s89 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s89;
extern int step_M_C_UnsynthesizeRule_s89(Sink,Term);

/* FUNCTION Prelude-Concat- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Concat_s1 struct _Con_M_Concat_s1
struct _Con_M_Concat_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Concat_s1;
extern int step_M_Concat_s1(Sink,Term);

/* FUNCTION Prelude-Concat-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Concat_s2 struct _Con_M_Concat_s2
struct _Con_M_Concat_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Concat_s2;
extern int step_M_Concat_s2(Sink,Term);

/* FUNCTION Prelude-Concat-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Concat_s3 struct _Con_M_Concat_s3
struct _Con_M_Concat_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Concat_s3;
extern int step_M_Concat_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s85 struct _Con_M_C_UnsynthesizeRule_s85
struct _Con_M_C_UnsynthesizeRule_s85 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s85;
extern int step_M_C_UnsynthesizeRule_s85(Sink,Term);

/* FUNCTION Prelude-Concat-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Concat_s4 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Concat_s4;
extern int step_M_Concat_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s86 struct _Con_M_C_UnsynthesizeRule_s86
struct _Con_M_C_UnsynthesizeRule_s86 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s86;
extern int step_M_C_UnsynthesizeRule_s86(Sink,Term);

/* FUNCTION Util-U-GetSortSynthesized-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetSortSynthesized_s3 struct _Con_M_U_GetSortSynthesized_s3
struct _Con_M_U_GetSortSynthesized_s3 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetSortSynthesized_s3;
extern int step_M_U_GetSortSynthesized_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s87 struct _Con_M_C_UnsynthesizeRule_s87
struct _Con_M_C_UnsynthesizeRule_s87 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s87;
extern int step_M_C_UnsynthesizeRule_s87(Sink,Term);

/* FUNCTION Util-U-GetSortSynthesized-1$U-GetSortSynthesized$2$DME_N2NM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetSortSynthesized_s2 struct _Con_M_U_GetSortSynthesized_s2
struct _Con_M_U_GetSortSynthesized_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetSortSynthesized_s2;
extern int step_M_U_GetSortSynthesized_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s88 struct _Con_M_C_UnsynthesizeRule_s88
struct _Con_M_C_UnsynthesizeRule_s88 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s88;
extern int step_M_C_UnsynthesizeRule_s88(Sink,Term);

/* FUNCTION Util-U-MakeDM-SortAlternativesDefines- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeDM_SortAlternativesDefines struct _Con_M_U_MakeDM_SortAlternativesDefines
struct _Con_M_U_MakeDM_SortAlternativesDefines {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeDM_SortAlternativesDefines;
extern int step_M_U_MakeDM_SortAlternativesDefines(Sink,Term);

/* FUNCTION Prelude-StringJoin-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringJoin_s2 struct _Con_M_StringJoin_s2
struct _Con_M_StringJoin_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringJoin_s2;
extern int step_M_StringJoin_s2(Sink,Term);

/* FUNCTION Prelude-StringJoin-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringJoin_s1 struct _Con_M_StringJoin_s1
struct _Con_M_StringJoin_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringJoin_s1;
extern int step_M_StringJoin_s1(Sink,Term);

/* FUNCTION Prelude-SetName-1$SetName$N2N HEADER DECLARATIONS. */
#define STRUCT_Con_M_SetName struct _Con_M_SetName
struct _Con_M_SetName {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SetName;
extern int step_M_SetName(Sink,Term);

/* FUNCTION Util-U-AllSynthesizedNames-1$U-AllSynthesizedNames$1$DME_NAMES HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllSynthesizedNames_s1 struct _Con_M_U_AllSynthesizedNames_s1
struct _Con_M_U_AllSynthesizedNames_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllSynthesizedNames_s1;
extern int step_M_U_AllSynthesizedNames_s1(Sink,Term);

/* FUNCTION Util-U-AllSynthesizedNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllSynthesizedNames_s2 struct _Con_M_U_AllSynthesizedNames_s2
struct _Con_M_U_AllSynthesizedNames_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllSynthesizedNames_s2;
extern int step_M_U_AllSynthesizedNames_s2(Sink,Term);

/* FUNCTION Util-U-ParsedFormTag-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ParsedFormTag struct _Con_M_U_ParsedFormTag
struct _Con_M_U_ParsedFormTag {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ParsedFormTag;
extern int step_M_U_ParsedFormTag(Sink,Term);

/* FUNCTION Util-U-Local2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_Local2 struct _Con_M_U_Local2
struct _Con_M_U_Local2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_Local2;
extern int step_M_U_Local2(Sink,Term);

/* FUNCTION Util-U-QN-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_QN struct _Con_M_U_QN
struct _Con_M_U_QN {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_QN;
extern int step_M_U_QN(Sink,Term);

/* FUNCTION Util-U-GetSortSynthesized-1$U-GetSortSynthesized HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_GetSortSynthesized struct _Con_M_U_GetSortSynthesized
struct _Con_M_U_GetSortSynthesized {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_GetSortSynthesized;
extern int step_M_U_GetSortSynthesized(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s6 struct _Con_M_U_KeepInheritedEntry2_s6
struct _Con_M_U_KeepInheritedEntry2_s6 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s6;
extern int step_M_U_KeepInheritedEntry2_s6(Sink,Term);

/* FUNCTION Prep-P-TokenNameText-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_TokenNameText struct _Con_M_P_TokenNameText
struct _Con_M_P_TokenNameText {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_TokenNameText;
extern int step_M_P_TokenNameText(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s5 struct _Con_M_U_KeepInheritedEntry2_s5
struct _Con_M_U_KeepInheritedEntry2_s5 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s5;
extern int step_M_U_KeepInheritedEntry2_s5(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s4 struct _Con_M_U_KeepInheritedEntry2_s4
struct _Con_M_U_KeepInheritedEntry2_s4 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s4;
extern int step_M_U_KeepInheritedEntry2_s4(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s3 struct _Con_M_U_KeepInheritedEntry2_s3
struct _Con_M_U_KeepInheritedEntry2_s3 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s3;
extern int step_M_U_KeepInheritedEntry2_s3(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s2 struct _Con_M_U_KeepInheritedEntry2_s2
struct _Con_M_U_KeepInheritedEntry2_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s2;
extern int step_M_U_KeepInheritedEntry2_s2(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s1 struct _Con_M_U_KeepInheritedEntry2_s1
struct _Con_M_U_KeepInheritedEntry2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s1;
extern int step_M_U_KeepInheritedEntry2_s1(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm2_s3 struct _Con_M_P_ProduceBodyTerm2_s3
struct _Con_M_P_ProduceBodyTerm2_s3 {struct _Construction construction; Term sub[11]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm2_s3;
extern int step_M_P_ProduceBodyTerm2_s3(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort2_s2 struct _Con_M_U_MakeAttribute2KeySort2_s2
struct _Con_M_U_MakeAttribute2KeySort2_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort2_s2;
extern int step_M_U_MakeAttribute2KeySort2_s2(Sink,Term);

/* FUNCTION Prelude-Empty- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Empty struct _Con_M_Empty
struct _Con_M_Empty {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Empty;
extern int step_M_Empty(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm2_s2 struct _Con_M_P_ProduceBodyTerm2_s2
struct _Con_M_P_ProduceBodyTerm2_s2 {struct _Construction construction; Term sub[13]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm2_s2;
extern int step_M_P_ProduceBodyTerm2_s2(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort2_s1 struct _Con_M_U_MakeAttribute2KeySort2_s1
struct _Con_M_U_MakeAttribute2KeySort2_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort2_s1;
extern int step_M_U_MakeAttribute2KeySort2_s1(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyTerm2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyTerm2_s1 struct _Con_M_P_ProduceBodyTerm2_s1
struct _Con_M_P_ProduceBodyTerm2_s1 {struct _Construction construction; Term sub[12]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyTerm2_s1;
extern int step_M_P_ProduceBodyTerm2_s1(Sink,Term);

/* FUNCTION Prelude-Any-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Any_s4 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Any_s4;
extern int step_M_Any_s4(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s9 struct _Con_M_U_KeepInheritedEntry2_s9
struct _Con_M_U_KeepInheritedEntry2_s9 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s9;
extern int step_M_U_KeepInheritedEntry2_s9(Sink,Term);

/* FUNCTION Prelude-Any-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Any_s3 struct _Con_M_Any_s3
struct _Con_M_Any_s3 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Any_s3;
extern int step_M_Any_s3(Sink,Term);

/* FUNCTION Prelude-Any-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Any_s2 struct _Con_M_Any_s2
struct _Con_M_Any_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Any_s2;
extern int step_M_Any_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRuleOptions-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRuleOptions_s2 struct _Con_M_C_CrsxifyRuleOptions_s2
struct _Con_M_C_CrsxifyRuleOptions_s2 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRuleOptions_s2;
extern int step_M_C_CrsxifyRuleOptions_s2(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s7 struct _Con_M_U_KeepInheritedEntry2_s7
struct _Con_M_U_KeepInheritedEntry2_s7 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s7;
extern int step_M_U_KeepInheritedEntry2_s7(Sink,Term);

/* FUNCTION Prelude-Any- HEADER DECLARATIONS. */
#define STRUCT_Con_M_Any_s1 struct _Con_M_Any_s1
struct _Con_M_Any_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Any_s1;
extern int step_M_Any_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRuleOptions-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRuleOptions_s1 struct _Con_M_C_CrsxifyRuleOptions_s1
struct _Con_M_C_CrsxifyRuleOptions_s1 {struct _Construction construction; Term sub[8]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRuleOptions_s1;
extern int step_M_C_CrsxifyRuleOptions_s1(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s8 struct _Con_M_U_KeepInheritedEntry2_s8
struct _Con_M_U_KeepInheritedEntry2_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s8;
extern int step_M_U_KeepInheritedEntry2_s8(Sink,Term);

/* FUNCTION Util-U-InsertDefines-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefines_s2 struct _Con_M_U_InsertDefines_s2
struct _Con_M_U_InsertDefines_s2 {struct _Construction construction; Term sub[4]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefines_s2;
extern int step_M_U_InsertDefines_s2(Sink,Term);

/* FUNCTION Prep-P-ProduceBody1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody1_s8 struct _Con_M_P_ProduceBody1_s8
struct _Con_M_P_ProduceBody1_s8 {struct _Construction construction; Term sub[13]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody1_s8;
extern int step_M_P_ProduceBody1_s8(Sink,Term);

/* FUNCTION Util-U-RulePriorityString- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RulePriorityString struct _Con_M_U_RulePriorityString
struct _Con_M_U_RulePriorityString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RulePriorityString;
extern int step_M_U_RulePriorityString(Sink,Term);

/* FUNCTION Util-U-InsertDefines-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_InsertDefines_s1 struct _Con_M_U_InsertDefines_s1
struct _Con_M_U_InsertDefines_s1 {struct _Construction construction; Term sub[6]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_U_InsertDefines_s1;
extern int step_M_U_InsertDefines_s1(Sink,Term);

/* FUNCTION Prep-P-ProduceBody1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody1_s3 struct _Con_M_P_ProduceBody1_s3
struct _Con_M_P_ProduceBody1_s3 {struct _Construction construction; Term sub[11]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody1_s3;
extern int step_M_P_ProduceBody1_s3(Sink,Term);

/* FUNCTION Prep-P-ProduceBody1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody1_s1 struct _Con_M_P_ProduceBody1_s1
struct _Con_M_P_ProduceBody1_s1 {struct _Construction construction; Term sub[11]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody1_s1;
extern int step_M_P_ProduceBody1_s1(Sink,Term);

/* FUNCTION Prep-P-ProduceBody1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody1_s7 struct _Con_M_P_ProduceBody1_s7
struct _Con_M_P_ProduceBody1_s7 {struct _Construction construction; Term sub[13]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody1_s7;
extern int step_M_P_ProduceBody1_s7(Sink,Term);

/* FUNCTION Prep-P-ProduceBody1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody1_s6 struct _Con_M_P_ProduceBody1_s6
struct _Con_M_P_ProduceBody1_s6 {struct _Construction construction; Term sub[13]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody1_s6;
extern int step_M_P_ProduceBody1_s6(Sink,Term);

/* FUNCTION Prelude-MapIndexFromWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapIndexFromWhen_s3 struct _Con_M_MapIndexFromWhen_s3
struct _Con_M_MapIndexFromWhen_s3 {struct _Construction construction; Term sub[2]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_MapIndexFromWhen_s3;
extern int step_M_MapIndexFromWhen_s3(Sink,Term);

/* FUNCTION Prep-P-ProduceBody1-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody1_s5 struct _Con_M_P_ProduceBody1_s5
struct _Con_M_P_ProduceBody1_s5 {struct _Construction construction; Term sub[12]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody1_s5;
extern int step_M_P_ProduceBody1_s5(Sink,Term);

/* FUNCTION Prelude-MapIndexFromWhen-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapIndexFromWhen_s2 struct _Con_M_MapIndexFromWhen_s2
struct _Con_M_MapIndexFromWhen_s2 {struct _Construction construction; Term sub[4]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_MapIndexFromWhen_s2;
extern int step_M_MapIndexFromWhen_s2(Sink,Term);

/* FUNCTION Prep-P-ProduceBody1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBody1_s4 struct _Con_M_P_ProduceBody1_s4
struct _Con_M_P_ProduceBody1_s4 {struct _Construction construction; Term sub[12]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBody1_s4;
extern int step_M_P_ProduceBody1_s4(Sink,Term);

/* FUNCTION Prelude-MapIndexFromWhen- HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapIndexFromWhen_s1 struct _Con_M_MapIndexFromWhen_s1
struct _Con_M_MapIndexFromWhen_s1 {struct _Construction construction; Term sub[3]; Variable binder[3];};
extern struct _ConstructionDescriptor descriptor_M_MapIndexFromWhen_s1;
extern int step_M_MapIndexFromWhen_s1(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2KeySort2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2KeySort2_s3 struct _Con_M_U_MakeAttribute2KeySort2_s3
struct _Con_M_U_MakeAttribute2KeySort2_s3 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2KeySort2_s3;
extern int step_M_U_MakeAttribute2KeySort2_s3(Sink,Term);

/* FUNCTION Util-U-DeclarationMapString1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_DeclarationMapString1_s1 struct _Con_M_U_DeclarationMapString1_s1
struct _Con_M_U_DeclarationMapString1_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_DeclarationMapString1_s1;
extern int step_M_U_DeclarationMapString1_s1(Sink,Term);

/* FUNCTION Prelude-TextPartToString- HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextPartToString struct _Con_M_TextPartToString
struct _Con_M_TextPartToString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextPartToString;
extern int step_M_TextPartToString(Sink,Term);

/* FUNCTION Util-U-AllSortNames-1$U-AllSortNames HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllSortNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_AllSortNames;
extern int step_M_U_AllSortNames(Sink,Term);

/* FUNCTION Prelude-Special_message-2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Special_xmessage__2 struct _Con_M_Special_xmessage__2
struct _Con_M_Special_xmessage__2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Special_xmessage__2;
extern int step_M_Special_xmessage__2(Sink,Term);

/* FUNCTION Prep-P-SubRepeat- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SubRepeat struct _Con_M_P_SubRepeat
struct _Con_M_P_SubRepeat {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SubRepeat;
extern int step_M_P_SubRepeat(Sink,Term);

/* FUNCTION Prelude-StringToNumericDefaultWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_StringToNumericDefaultWhen_s1 struct _Con_M_StringToNumericDefaultWhen_s1
struct _Con_M_StringToNumericDefaultWhen_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_StringToNumericDefaultWhen_s1;
extern int step_M_StringToNumericDefaultWhen_s1(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpUnit-2$P-InlineRegExpUnit$Hx_RegExpUnit HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpUnit struct _Con_M_P_InlineRegExpUnit
struct _Con_M_P_InlineRegExpUnit {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpUnit;
extern int step_M_P_InlineRegExpUnit(Sink,Term);

/* FUNCTION Util-U-IsSynthesizedAttribute-1$U-IsSynthesizedAttribute HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_IsSynthesizedAttribute struct _Con_M_U_IsSynthesizedAttribute
struct _Con_M_U_IsSynthesizedAttribute {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_IsSynthesizedAttribute;
extern int step_M_U_IsSynthesizedAttribute(Sink,Term);

/* FUNCTION Prelude-Singleton-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Singleton_s1 struct _Con_M_Singleton_s1
struct _Con_M_Singleton_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_Singleton_s1;
extern int step_M_Singleton_s1(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRule-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRule_s2 struct _Con_M_C_CrsxifyRule_s2
struct _Con_M_C_CrsxifyRule_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRule_s2;
extern int step_M_C_CrsxifyRule_s2(Sink,Term);

/* FUNCTION Prelude-Singleton-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_Singleton_s2 struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_Singleton_s2;
extern int step_M_Singleton_s2(Sink,Term);

/* FUNCTION Cook-C-CrsxifyRule-1$C-CrsxifyRule$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifyRule_s1 struct _Con_M_C_CrsxifyRule_s1
struct _Con_M_C_CrsxifyRule_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifyRule_s1;
extern int step_M_C_CrsxifyRule_s1(Sink,Term);

/* FUNCTION Prep-P-isLeftRecursive1b-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__isLeftRecursive1b struct _Con_M_P__isLeftRecursive1b
struct _Con_M_P__isLeftRecursive1b {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__isLeftRecursive1b;
extern int step_M_P__isLeftRecursive1b(Sink,Term);

/* FUNCTION Prep-P-CRSX-GenerateConstructionTerm-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_CRSX_GenerateConstructionTerm struct _Con_M_P_CRSX_GenerateConstructionTerm
struct _Con_M_P_CRSX_GenerateConstructionTerm {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_CRSX_GenerateConstructionTerm;
extern int step_M_P_CRSX_GenerateConstructionTerm(Sink,Term);

/* FUNCTION Cook-C-ParsedForm-TextFrom- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ParsedForm_TextFrom struct _Con_M_C_ParsedForm_TextFrom
struct _Con_M_C_ParsedForm_TextFrom {struct _Construction construction; Term sub[5]; Variable binder[9];};
extern struct _ConstructionDescriptor descriptor_M_C_ParsedForm_TextFrom;
extern int step_M_C_ParsedForm_TextFrom(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s15 struct _Con_M_U_MakeAttribute2ValueSort3_s15
struct _Con_M_U_MakeAttribute2ValueSort3_s15 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s15;
extern int step_M_U_MakeAttribute2ValueSort3_s15(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s12 struct _Con_M_U_KeepInheritedEntry2_s12
struct _Con_M_U_KeepInheritedEntry2_s12 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s12;
extern int step_M_U_KeepInheritedEntry2_s12(Sink,Term);

/* FUNCTION Util-U-then-NonMainSyntacticSymbols1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_NonMainSyntacticSymbols1_s1 struct _Con_M_U__then_NonMainSyntacticSymbols1_s1
struct _Con_M_U__then_NonMainSyntacticSymbols1_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_NonMainSyntacticSymbols1_s1;
extern int step_M_U__then_NonMainSyntacticSymbols1_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s110 struct _Con_M_C_UnsynthesizeRule_s110
struct _Con_M_C_UnsynthesizeRule_s110 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s110;
extern int step_M_C_UnsynthesizeRule_s110(Sink,Term);

/* FUNCTION Util-LookupAttributeForm-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_LookupAttributeForm_s1 struct _Con_M_LookupAttributeForm_s1
struct _Con_M_LookupAttributeForm_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_LookupAttributeForm_s1;
extern int step_M_LookupAttributeForm_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s112 struct _Con_M_C_UnsynthesizeRule_s112
struct _Con_M_C_UnsynthesizeRule_s112 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s112;
extern int step_M_C_UnsynthesizeRule_s112(Sink,Term);

/* FUNCTION Cook-C-SortMap-GetFreeVariables-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap_GetFreeVariables_s1 struct _Con_M_C_SortMap_GetFreeVariables_s1
struct _Con_M_C_SortMap_GetFreeVariables_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap_GetFreeVariables_s1;
extern int step_M_C_SortMap_GetFreeVariables_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s111 struct _Con_M_C_UnsynthesizeRule_s111
struct _Con_M_C_UnsynthesizeRule_s111 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s111;
extern int step_M_C_UnsynthesizeRule_s111(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s114 struct _Con_M_C_UnsynthesizeRule_s114
struct _Con_M_C_UnsynthesizeRule_s114 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s114;
extern int step_M_C_UnsynthesizeRule_s114(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s113 struct _Con_M_C_UnsynthesizeRule_s113
struct _Con_M_C_UnsynthesizeRule_s113 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s113;
extern int step_M_C_UnsynthesizeRule_s113(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s116 struct _Con_M_C_UnsynthesizeRule_s116
struct _Con_M_C_UnsynthesizeRule_s116 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s116;
extern int step_M_C_UnsynthesizeRule_s116(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s10 struct _Con_M_U_MakeAttribute2ValueSort3_s10
struct _Con_M_U_MakeAttribute2ValueSort3_s10 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s10;
extern int step_M_U_MakeAttribute2ValueSort3_s10(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s115 struct _Con_M_C_UnsynthesizeRule_s115
struct _Con_M_C_UnsynthesizeRule_s115 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s115;
extern int step_M_C_UnsynthesizeRule_s115(Sink,Term);

/* FUNCTION Util-U-RegExpSubSuffix- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RegExpSubSuffix struct _Con_M_U_RegExpSubSuffix
struct _Con_M_U_RegExpSubSuffix {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RegExpSubSuffix;
extern int step_M_U_RegExpSubSuffix(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s11 struct _Con_M_U_MakeAttribute2ValueSort3_s11
struct _Con_M_U_MakeAttribute2ValueSort3_s11 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s11;
extern int step_M_U_MakeAttribute2ValueSort3_s11(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s10 struct _Con_M_U_KeepInheritedEntry2_s10
struct _Con_M_U_KeepInheritedEntry2_s10 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s10;
extern int step_M_U_KeepInheritedEntry2_s10(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s118 struct _Con_M_C_UnsynthesizeRule_s118
struct _Con_M_C_UnsynthesizeRule_s118 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s118;
extern int step_M_C_UnsynthesizeRule_s118(Sink,Term);

/* FUNCTION Prep-P-then-Construction-1$P-then-Construction$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_P__then_Construction struct _Con_M_P__then_Construction
struct _Con_M_P__then_Construction {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P__then_Construction;
extern int step_M_P__then_Construction(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s12 struct _Con_M_U_MakeAttribute2ValueSort3_s12
struct _Con_M_U_MakeAttribute2ValueSort3_s12 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s12;
extern int step_M_U_MakeAttribute2ValueSort3_s12(Sink,Term);

/* FUNCTION Util-U-KeepInheritedEntry2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_KeepInheritedEntry2_s11 struct _Con_M_U_KeepInheritedEntry2_s11
struct _Con_M_U_KeepInheritedEntry2_s11 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_KeepInheritedEntry2_s11;
extern int step_M_U_KeepInheritedEntry2_s11(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s117 struct _Con_M_C_UnsynthesizeRule_s117
struct _Con_M_C_UnsynthesizeRule_s117 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s117;
extern int step_M_C_UnsynthesizeRule_s117(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s13 struct _Con_M_U_MakeAttribute2ValueSort3_s13
struct _Con_M_U_MakeAttribute2ValueSort3_s13 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s13;
extern int step_M_U_MakeAttribute2ValueSort3_s13(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2ValueSort3-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2ValueSort3_s14 struct _Con_M_U_MakeAttribute2ValueSort3_s14
struct _Con_M_U_MakeAttribute2ValueSort3_s14 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2ValueSort3_s14;
extern int step_M_U_MakeAttribute2ValueSort3_s14(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s119 struct _Con_M_C_UnsynthesizeRule_s119
struct _Con_M_C_UnsynthesizeRule_s119 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s119;
extern int step_M_C_UnsynthesizeRule_s119(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize1-2$C-Unsynthesize1$2$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize1_s2 struct _Con_M_C_Unsynthesize1_s2
struct _Con_M_C_Unsynthesize1_s2 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize1_s2;
extern int step_M_C_Unsynthesize1_s2(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize1_s3 struct _Con_M_C_Unsynthesize1_s3
struct _Con_M_C_Unsynthesize1_s3 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize1_s3;
extern int step_M_C_Unsynthesize1_s3(Sink,Term);

/* FUNCTION Cook-C-Unsynthesize1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Unsynthesize1_s4 struct _Con_M_C_Unsynthesize1_s4
struct _Con_M_C_Unsynthesize1_s4 {struct _Construction construction; Term sub[3]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_Unsynthesize1_s4;
extern int step_M_C_Unsynthesize1_s4(Sink,Term);

/* FUNCTION Util-U-AllInheritedMapNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllInheritedMapNames_s2 struct _Con_M_U_AllInheritedMapNames_s2
struct _Con_M_U_AllInheritedMapNames_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllInheritedMapNames_s2;
extern int step_M_U_AllInheritedMapNames_s2(Sink,Term);

/* FUNCTION Util-U-AllInheritedMapNames-1$U-AllInheritedMapNames$1$DME_NAMES HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_AllInheritedMapNames_s1 struct _Con_M_U_AllInheritedMapNames_s1
struct _Con_M_U_AllInheritedMapNames_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_AllInheritedMapNames_s1;
extern int step_M_U_AllInheritedMapNames_s1(Sink,Term);

/* FUNCTION Prelude-SetName2Names-1$SetName2Names$N2Ns HEADER DECLARATIONS. */
#define STRUCT_Con_M_SetName2Names struct _Con_M_SetName2Names
struct _Con_M_SetName2Names {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_SetName2Names;
extern int step_M_SetName2Names(Sink,Term);

/* FUNCTION Cook-C-AddAttributeTopInherited- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_AddAttributeTopInherited struct _Con_M_C_AddAttributeTopInherited
struct _Con_M_C_AddAttributeTopInherited {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_AddAttributeTopInherited;
extern int step_M_C_AddAttributeTopInherited(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s101 struct _Con_M_C_UnsynthesizeRule_s101
struct _Con_M_C_UnsynthesizeRule_s101 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s101;
extern int step_M_C_UnsynthesizeRule_s101(Sink,Term);

/* FUNCTION Util-U-then-SortNameWithRepeat2-5$U-then-SortNameWithRepeat2$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_SortNameWithRepeat2 struct _Con_M_U__then_SortNameWithRepeat2
struct _Con_M_U__then_SortNameWithRepeat2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_SortNameWithRepeat2;
extern int step_M_U__then_SortNameWithRepeat2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s100 struct _Con_M_C_UnsynthesizeRule_s100
struct _Con_M_C_UnsynthesizeRule_s100 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s100;
extern int step_M_C_UnsynthesizeRule_s100(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s105 struct _Con_M_C_UnsynthesizeRule_s105
struct _Con_M_C_UnsynthesizeRule_s105 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s105;
extern int step_M_C_UnsynthesizeRule_s105(Sink,Term);

/* FUNCTION Util-Resolve- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s10 struct _Con_M_U_ResolveImports_s10
struct _Con_M_U_ResolveImports_s10 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s10;
extern int step_M_U_ResolveImports_s10(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s104 struct _Con_M_C_UnsynthesizeRule_s104
struct _Con_M_C_UnsynthesizeRule_s104 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s104;
extern int step_M_C_UnsynthesizeRule_s104(Sink,Term);

/* FUNCTION Util-U-then-NonMainSyntacticSymbols1-1$U-then-NonMainSyntacticSymbols1$OK HEADER DECLARATIONS. */
#define STRUCT_Con_M_U__then_NonMainSyntacticSymbols1 struct _Con_M_U__then_NonMainSyntacticSymbols1
struct _Con_M_U__then_NonMainSyntacticSymbols1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U__then_NonMainSyntacticSymbols1;
extern int step_M_U__then_NonMainSyntacticSymbols1(Sink,Term);

/* FUNCTION Util-Resolve-Main-Sort HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s11 struct _Con_M_U_ResolveImports_s11
struct _Con_M_U_ResolveImports_s11 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s11;
extern int step_M_U_ResolveImports_s11(Sink,Term);

/* FUNCTION Util-U-MakeInheritedMapNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeInheritedMapNames struct _ConstantConstruction
extern struct _ConstructionDescriptor descriptor_M_U_MakeInheritedMapNames;
extern int step_M_U_MakeInheritedMapNames(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s103 struct _Con_M_C_UnsynthesizeRule_s103
struct _Con_M_C_UnsynthesizeRule_s103 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s103;
extern int step_M_C_UnsynthesizeRule_s103(Sink,Term);

/* FUNCTION Util-Resolve-Sort HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s12 struct _Con_M_U_ResolveImports_s12
struct _Con_M_U_ResolveImports_s12 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s12;
extern int step_M_U_ResolveImports_s12(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s102 struct _Con_M_C_UnsynthesizeRule_s102
struct _Con_M_C_UnsynthesizeRule_s102 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s102;
extern int step_M_C_UnsynthesizeRule_s102(Sink,Term);

/* FUNCTION Util-Resolve-Space HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s13 struct _Con_M_U_ResolveImports_s13
struct _Con_M_U_ResolveImports_s13 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s13;
extern int step_M_U_ResolveImports_s13(Sink,Term);

/* FUNCTION Util-Resolve-Token HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s14 struct _Con_M_U_ResolveImports_s14
struct _Con_M_U_ResolveImports_s14 {struct _Construction construction; Term sub[6]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s14;
extern int step_M_U_ResolveImports_s14(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s108 struct _Con_M_C_UnsynthesizeRule_s108
struct _Con_M_C_UnsynthesizeRule_s108 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s108;
extern int step_M_C_UnsynthesizeRule_s108(Sink,Term);

/* FUNCTION Util-ResolveDone HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_ResolveImports_s15 struct _Con_M_U_ResolveImports_s15
struct _Con_M_U_ResolveImports_s15 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_ResolveImports_s15;
extern int step_M_U_ResolveImports_s15(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s107 struct _Con_M_C_UnsynthesizeRule_s107
struct _Con_M_C_UnsynthesizeRule_s107 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s107;
extern int step_M_C_UnsynthesizeRule_s107(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s106 struct _Con_M_C_UnsynthesizeRule_s106
struct _Con_M_C_UnsynthesizeRule_s106 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s106;
extern int step_M_C_UnsynthesizeRule_s106(Sink,Term);

/* FUNCTION Prelude-AsTextWhen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AsTextWhen_s1 struct _Con_M_AsTextWhen_s1
struct _Con_M_AsTextWhen_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AsTextWhen_s1;
extern int step_M_AsTextWhen_s1(Sink,Term);

/* FUNCTION Cook-C-Print-SymbolForm-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print_SymbolForm_s1 struct _Con_M_C_Print_SymbolForm_s1
struct _Con_M_C_Print_SymbolForm_s1 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print_SymbolForm_s1;
extern int step_M_C_Print_SymbolForm_s1(Sink,Term);

/* FUNCTION Prelude-TextJoin- HEADER DECLARATIONS. */
#define STRUCT_Con_M_TextJoin struct _Con_M_TextJoin
struct _Con_M_TextJoin {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_TextJoin;
extern int step_M_TextJoin(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders struct _Con_M_C_ScopeSort_AddBinders
struct _Con_M_C_ScopeSort_AddBinders {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders;
extern int step_M_C_ScopeSort_AddBinders(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$C-UnsynthesizeRule$139$Hx_ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s139 struct _Con_M_C_UnsynthesizeRule_s139
struct _Con_M_C_UnsynthesizeRule_s139 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s139;
extern int step_M_C_UnsynthesizeRule_s139(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s9 struct _Con_M_U_MakeAttribute2Form3_s9
struct _Con_M_U_MakeAttribute2Form3_s9 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s9;
extern int step_M_U_MakeAttribute2Form3_s9(Sink,Term);

/* FUNCTION Cook-C-CrsxifySpecial-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_CrsxifySpecial_s1 struct _Con_M_C_CrsxifySpecial_s1
struct _Con_M_C_CrsxifySpecial_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_CrsxifySpecial_s1;
extern int step_M_C_CrsxifySpecial_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s135 struct _Con_M_C_UnsynthesizeRule_s135
struct _Con_M_C_UnsynthesizeRule_s135 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s135;
extern int step_M_C_UnsynthesizeRule_s135(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s136 struct _Con_M_C_UnsynthesizeRule_s136
struct _Con_M_C_UnsynthesizeRule_s136 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s136;
extern int step_M_C_UnsynthesizeRule_s136(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$C-UnsynthesizeRule$138$$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s138 struct _Con_M_C_UnsynthesizeRule_s138
struct _Con_M_C_UnsynthesizeRule_s138 {struct _Construction construction; Term sub[13]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s138;
extern int step_M_C_UnsynthesizeRule_s138(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s3 struct _Con_M_U_MakeAttribute2Form3_s3
struct _Con_M_U_MakeAttribute2Form3_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s3;
extern int step_M_U_MakeAttribute2Form3_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s131 struct _Con_M_C_UnsynthesizeRule_s131
struct _Con_M_C_UnsynthesizeRule_s131 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s131;
extern int step_M_C_UnsynthesizeRule_s131(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s132 struct _Con_M_C_UnsynthesizeRule_s132
struct _Con_M_C_UnsynthesizeRule_s132 {struct _Construction construction; Term sub[13]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s132;
extern int step_M_C_UnsynthesizeRule_s132(Sink,Term);

/* FUNCTION Prep-P-Productions1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Productions1 struct _Con_M_P_Productions1
struct _Con_M_P_Productions1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Productions1;
extern int step_M_P_Productions1(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s1 struct _Con_M_U_MakeAttribute2Form3_s1
struct _Con_M_U_MakeAttribute2Form3_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s1;
extern int step_M_U_MakeAttribute2Form3_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s133 struct _Con_M_C_UnsynthesizeRule_s133
struct _Con_M_C_UnsynthesizeRule_s133 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s133;
extern int step_M_C_UnsynthesizeRule_s133(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s2 struct _Con_M_U_MakeAttribute2Form3_s2
struct _Con_M_U_MakeAttribute2Form3_s2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s2;
extern int step_M_U_MakeAttribute2Form3_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s134 struct _Con_M_C_UnsynthesizeRule_s134
struct _Con_M_C_UnsynthesizeRule_s134 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s134;
extern int step_M_C_UnsynthesizeRule_s134(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s7 struct _Con_M_U_MakeAttribute2Form3_s7
struct _Con_M_U_MakeAttribute2Form3_s7 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s7;
extern int step_M_U_MakeAttribute2Form3_s7(Sink,Term);

/* FUNCTION Prep-P-Embed-Tail-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Embed_Tail_s1 struct _Con_M_P_Embed_Tail_s1
struct _Con_M_P_Embed_Tail_s1 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Embed_Tail_s1;
extern int step_M_P_Embed_Tail_s1(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s8 struct _Con_M_U_MakeAttribute2Form3_s8
struct _Con_M_U_MakeAttribute2Form3_s8 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s8;
extern int step_M_U_MakeAttribute2Form3_s8(Sink,Term);

/* FUNCTION Prep-P-Embed-Tail-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Embed_Tail_s2 struct _Con_M_P_Embed_Tail_s2
struct _Con_M_P_Embed_Tail_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Embed_Tail_s2;
extern int step_M_P_Embed_Tail_s2(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-1$U-MakeAttribute2Form3$5$AFM HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s5 struct _Con_M_U_MakeAttribute2Form3_s5
struct _Con_M_U_MakeAttribute2Form3_s5 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s5;
extern int step_M_U_MakeAttribute2Form3_s5(Sink,Term);

/* FUNCTION Prep-P-Productions0-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_Productions0 struct _Con_M_P_Productions0
struct _Con_M_P_Productions0 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_Productions0;
extern int step_M_P_Productions0(Sink,Term);

/* FUNCTION Util-U-MakeAttribute2Form3-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_MakeAttribute2Form3_s6 struct _Con_M_U_MakeAttribute2Form3_s6
struct _Con_M_U_MakeAttribute2Form3_s6 {struct _Construction construction; Term sub[7]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_MakeAttribute2Form3_s6;
extern int step_M_U_MakeAttribute2Form3_s6(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s130 struct _Con_M_C_UnsynthesizeRule_s130
struct _Con_M_C_UnsynthesizeRule_s130 {struct _Construction construction; Term sub[13]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s130;
extern int step_M_C_UnsynthesizeRule_s130(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeAlternatives-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeAlternatives_s5 struct _Con_M_P_MetaJJ_AttributeAlternatives_s5
struct _Con_M_P_MetaJJ_AttributeAlternatives_s5 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeAlternatives_s5;
extern int step_M_P_MetaJJ_AttributeAlternatives_s5(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord1-5 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord1_s8 struct _Con_M_P_ProduceBodyWord1_s8
struct _Con_M_P_ProduceBodyWord1_s8 {struct _Construction construction; Term sub[11]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord1_s8;
extern int step_M_P_ProduceBodyWord1_s8(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeAlternatives-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeAlternatives_s8 struct _Con_M_P_MetaJJ_AttributeAlternatives_s8
struct _Con_M_P_MetaJJ_AttributeAlternatives_s8 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeAlternatives_s8;
extern int step_M_P_MetaJJ_AttributeAlternatives_s8(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord1_s7 struct _Con_M_P_ProduceBodyWord1_s7
struct _Con_M_P_ProduceBodyWord1_s7 {struct _Construction construction; Term sub[16]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord1_s7;
extern int step_M_P_ProduceBodyWord1_s7(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeAlternatives- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeAlternatives_s7 struct _Con_M_P_MetaJJ_AttributeAlternatives_s7
struct _Con_M_P_MetaJJ_AttributeAlternatives_s7 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeAlternatives_s7;
extern int step_M_P_MetaJJ_AttributeAlternatives_s7(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord1-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord1_s6 struct _Con_M_P_ProduceBodyWord1_s6
struct _Con_M_P_ProduceBodyWord1_s6 {struct _Construction construction; Term sub[16]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord1_s6;
extern int step_M_P_ProduceBodyWord1_s6(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord1-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord1_s5 struct _Con_M_P_ProduceBodyWord1_s5
struct _Con_M_P_ProduceBodyWord1_s5 {struct _Construction construction; Term sub[16]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord1_s5;
extern int step_M_P_ProduceBodyWord1_s5(Sink,Term);

/* FUNCTION Util-U-RulePrefixString-1$U-RulePrefixString$Hx_RulePrefix HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_RulePrefixString struct _Con_M_U_RulePrefixString
struct _Con_M_U_RulePrefixString {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_RulePrefixString;
extern int step_M_U_RulePrefixString(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeAlternatives-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeAlternatives_s9 struct _Con_M_P_MetaJJ_AttributeAlternatives_s9
struct _Con_M_P_MetaJJ_AttributeAlternatives_s9 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeAlternatives_s9;
extern int step_M_P_MetaJJ_AttributeAlternatives_s9(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord1-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord1_s4 struct _Con_M_P_ProduceBodyWord1_s4
struct _Con_M_P_ProduceBodyWord1_s4 {struct _Construction construction; Term sub[14]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord1_s4;
extern int step_M_P_ProduceBodyWord1_s4(Sink,Term);

/* FUNCTION Prelude-MapNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_MapNames struct _Con_M_MapNames
struct _Con_M_MapNames {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_MapNames;
extern int step_M_MapNames(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord1_s3 struct _Con_M_P_ProduceBodyWord1_s3
struct _Con_M_P_ProduceBodyWord1_s3 {struct _Construction construction; Term sub[14]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord1_s3;
extern int step_M_P_ProduceBodyWord1_s3(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord1-2$P-ProduceBodyWord1$2$PFK HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord1_s2 struct _Con_M_P_ProduceBodyWord1_s2
struct _Con_M_P_ProduceBodyWord1_s2 {struct _Construction construction; Term sub[13]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord1_s2;
extern int step_M_P_ProduceBodyWord1_s2(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols1 struct _Con_M_U_NonMainSyntacticSymbols1
struct _Con_M_U_NonMainSyntacticSymbols1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols1;
extern int step_M_U_NonMainSyntacticSymbols1(Sink,Term);

/* FUNCTION Util-U-NonMainSyntacticSymbols2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSyntacticSymbols2 struct _Con_M_U_NonMainSyntacticSymbols2
struct _Con_M_U_NonMainSyntacticSymbols2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSyntacticSymbols2;
extern int step_M_U_NonMainSyntacticSymbols2(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeAlternatives- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeAlternatives_s1 struct _Con_M_P_MetaJJ_AttributeAlternatives_s1
struct _Con_M_P_MetaJJ_AttributeAlternatives_s1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeAlternatives_s1;
extern int step_M_P_MetaJJ_AttributeAlternatives_s1(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeAlternatives-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeAlternatives_s4 struct _Con_M_P_MetaJJ_AttributeAlternatives_s4
struct _Con_M_P_MetaJJ_AttributeAlternatives_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeAlternatives_s4;
extern int step_M_P_MetaJJ_AttributeAlternatives_s4(Sink,Term);

/* FUNCTION Prep-P-MetaJJ-AttributeAlternatives- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_MetaJJ_AttributeAlternatives_s3 struct _Con_M_P_MetaJJ_AttributeAlternatives_s3
struct _Con_M_P_MetaJJ_AttributeAlternatives_s3 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_MetaJJ_AttributeAlternatives_s3;
extern int step_M_P_MetaJJ_AttributeAlternatives_s3(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2_s6 struct _Con_M_U_NonMainSymbols2_s6
struct _Con_M_U_NonMainSymbols2_s6 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2_s6;
extern int step_M_U_NonMainSymbols2_s6(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2_s5 struct _Con_M_U_NonMainSymbols2_s5
struct _Con_M_U_NonMainSymbols2_s5 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2_s5;
extern int step_M_U_NonMainSymbols2_s5(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2_s4 struct _Con_M_U_NonMainSymbols2_s4
struct _Con_M_U_NonMainSymbols2_s4 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2_s4;
extern int step_M_U_NonMainSymbols2_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s128 struct _Con_M_C_UnsynthesizeRule_s128
struct _Con_M_C_UnsynthesizeRule_s128 {struct _Construction construction; Term sub[12]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s128;
extern int step_M_C_UnsynthesizeRule_s128(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2_s3 struct _Con_M_U_NonMainSymbols2_s3
struct _Con_M_U_NonMainSymbols2_s3 {struct _Construction construction; Term sub[8]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2_s3;
extern int step_M_U_NonMainSymbols2_s3(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s129 struct _Con_M_C_UnsynthesizeRule_s129
struct _Con_M_C_UnsynthesizeRule_s129 {struct _Construction construction; Term sub[14]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s129;
extern int step_M_C_UnsynthesizeRule_s129(Sink,Term);

/* FUNCTION Prep-P-SamePrec2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_SamePrec2 struct _Con_M_P_SamePrec2
struct _Con_M_P_SamePrec2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_SamePrec2;
extern int step_M_P_SamePrec2(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2_s2 struct _Con_M_U_NonMainSymbols2_s2
struct _Con_M_U_NonMainSymbols2_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2_s2;
extern int step_M_U_NonMainSymbols2_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s126 struct _Con_M_C_UnsynthesizeRule_s126
struct _Con_M_C_UnsynthesizeRule_s126 {struct _Construction construction; Term sub[13]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s126;
extern int step_M_C_UnsynthesizeRule_s126(Sink,Term);

/* FUNCTION Prelude-FoldNames-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_FoldNames struct _Con_M_FoldNames
struct _Con_M_FoldNames {struct _Construction construction; Term sub[3]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_FoldNames;
extern int step_M_FoldNames(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2_s1 struct _Con_M_U_NonMainSymbols2_s1
struct _Con_M_U_NonMainSymbols2_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2_s1;
extern int step_M_U_NonMainSymbols2_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s127 struct _Con_M_C_UnsynthesizeRule_s127
struct _Con_M_C_UnsynthesizeRule_s127 {struct _Construction construction; Term sub[15]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s127;
extern int step_M_C_UnsynthesizeRule_s127(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s124 struct _Con_M_C_UnsynthesizeRule_s124
struct _Con_M_C_UnsynthesizeRule_s124 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s124;
extern int step_M_C_UnsynthesizeRule_s124(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s125 struct _Con_M_C_UnsynthesizeRule_s125
struct _Con_M_C_UnsynthesizeRule_s125 {struct _Construction construction; Term sub[10]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s125;
extern int step_M_C_UnsynthesizeRule_s125(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s122 struct _Con_M_C_UnsynthesizeRule_s122
struct _Con_M_C_UnsynthesizeRule_s122 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s122;
extern int step_M_C_UnsynthesizeRule_s122(Sink,Term);

/* FUNCTION Prep-P-ProduceBodyWord1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_ProduceBodyWord1_s1 struct _Con_M_P_ProduceBodyWord1_s1
struct _Con_M_P_ProduceBodyWord1_s1 {struct _Construction construction; Term sub[12]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_P_ProduceBodyWord1_s1;
extern int step_M_P_ProduceBodyWord1_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s120 struct _Con_M_C_UnsynthesizeRule_s120
struct _Con_M_C_UnsynthesizeRule_s120 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s120;
extern int step_M_C_UnsynthesizeRule_s120(Sink,Term);

/* FUNCTION Prep-AttributeKindCategory-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AttributeKindCategory_s2 struct _Con_M_AttributeKindCategory_s2
struct _Con_M_AttributeKindCategory_s2 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AttributeKindCategory_s2;
extern int step_M_AttributeKindCategory_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s121 struct _Con_M_C_UnsynthesizeRule_s121
struct _Con_M_C_UnsynthesizeRule_s121 {struct _Construction construction; Term sub[16]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s121;
extern int step_M_C_UnsynthesizeRule_s121(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2_s9 struct _Con_M_U_NonMainSymbols2_s9
struct _Con_M_U_NonMainSymbols2_s9 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2_s9;
extern int step_M_U_NonMainSymbols2_s9(Sink,Term);

/* FUNCTION Prep-AttributeKindCategory-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_AttributeKindCategory_s1 struct _Con_M_AttributeKindCategory_s1
struct _Con_M_AttributeKindCategory_s1 {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_AttributeKindCategory_s1;
extern int step_M_AttributeKindCategory_s1(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2_s8 struct _Con_M_U_NonMainSymbols2_s8
struct _Con_M_U_NonMainSymbols2_s8 {struct _Construction construction; Term sub[9]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2_s8;
extern int step_M_U_NonMainSymbols2_s8(Sink,Term);

/* FUNCTION Util-U-NonMainSymbols2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_U_NonMainSymbols2_s7 struct _Con_M_U_NonMainSymbols2_s7
struct _Con_M_U_NonMainSymbols2_s7 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_U_NonMainSymbols2_s7;
extern int step_M_U_NonMainSymbols2_s7(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpClass1- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpClass1 struct _Con_M_P_InlineRegExpClass1
struct _Con_M_P_InlineRegExpClass1 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpClass1;
extern int step_M_P_InlineRegExpClass1(Sink,Term);

/* FUNCTION Prelude-WrappedStringJoin-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_WrappedStringJoin_s2 struct _Con_M_WrappedStringJoin_s2
struct _Con_M_WrappedStringJoin_s2 {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_WrappedStringJoin_s2;
extern int step_M_WrappedStringJoin_s2(Sink,Term);

/* FUNCTION Prep-P-InlineRegExpClass2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_P_InlineRegExpClass2 struct _Con_M_P_InlineRegExpClass2
struct _Con_M_P_InlineRegExpClass2 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_P_InlineRegExpClass2;
extern int step_M_P_InlineRegExpClass2(Sink,Term);

/* FUNCTION Prelude-WrappedStringJoin-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_WrappedStringJoin_s1 struct _Con_M_WrappedStringJoin_s1
struct _Con_M_WrappedStringJoin_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_WrappedStringJoin_s1;
extern int step_M_WrappedStringJoin_s1(Sink,Term);

/* FUNCTION Cook-C-SortMap-GetFreeVariables-1$C-SortMap-GetFreeVariables$SM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap_GetFreeVariables struct _Con_M_C_SortMap_GetFreeVariables
struct _Con_M_C_SortMap_GetFreeVariables {struct _Construction construction; Term sub[1]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap_GetFreeVariables;
extern int step_M_C_SortMap_GetFreeVariables(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s158 struct _Con_M_C_UnsynthesizeRule_s158
struct _Con_M_C_UnsynthesizeRule_s158 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s158;
extern int step_M_C_UnsynthesizeRule_s158(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s159 struct _Con_M_C_UnsynthesizeRule_s159
struct _Con_M_C_UnsynthesizeRule_s159 {struct _Construction construction; Term sub[18]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s159;
extern int step_M_C_UnsynthesizeRule_s159(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s150 struct _Con_M_C_UnsynthesizeRule_s150
struct _Con_M_C_UnsynthesizeRule_s150 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s150;
extern int step_M_C_UnsynthesizeRule_s150(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s151 struct _Con_M_C_UnsynthesizeRule_s151
struct _Con_M_C_UnsynthesizeRule_s151 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s151;
extern int step_M_C_UnsynthesizeRule_s151(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s152 struct _Con_M_C_UnsynthesizeRule_s152
struct _Con_M_C_UnsynthesizeRule_s152 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s152;
extern int step_M_C_UnsynthesizeRule_s152(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s153 struct _Con_M_C_UnsynthesizeRule_s153
struct _Con_M_C_UnsynthesizeRule_s153 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s153;
extern int step_M_C_UnsynthesizeRule_s153(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s154 struct _Con_M_C_UnsynthesizeRule_s154
struct _Con_M_C_UnsynthesizeRule_s154 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s154;
extern int step_M_C_UnsynthesizeRule_s154(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s156 struct _Con_M_C_UnsynthesizeRule_s156
struct _Con_M_C_UnsynthesizeRule_s156 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s156;
extern int step_M_C_UnsynthesizeRule_s156(Sink,Term);

/* FUNCTION Prelude-WrappedTextJoin- HEADER DECLARATIONS. */
#define STRUCT_Con_M_WrappedTextJoin struct _Con_M_WrappedTextJoin
struct _Con_M_WrappedTextJoin {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_WrappedTextJoin;
extern int step_M_WrappedTextJoin(Sink,Term);

/* FUNCTION Cook-C-SortMap-ContainsFreeVariable-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_SortMap_ContainsFreeVariable_s1 struct _Con_M_C_SortMap_ContainsFreeVariable_s1
struct _Con_M_C_SortMap_ContainsFreeVariable_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_SortMap_ContainsFreeVariable_s1;
extern int step_M_C_SortMap_ContainsFreeVariable_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s148 struct _Con_M_C_UnsynthesizeRule_s148
struct _Con_M_C_UnsynthesizeRule_s148 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s148;
extern int step_M_C_UnsynthesizeRule_s148(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s149 struct _Con_M_C_UnsynthesizeRule_s149
struct _Con_M_C_UnsynthesizeRule_s149 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s149;
extern int step_M_C_UnsynthesizeRule_s149(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s146 struct _Con_M_C_UnsynthesizeRule_s146
struct _Con_M_C_UnsynthesizeRule_s146 {struct _Construction construction; Term sub[19]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s146;
extern int step_M_C_UnsynthesizeRule_s146(Sink,Term);

/* FUNCTION Cook-C-Print1-1$C-Print1$1$DM HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print1_s1 struct _Con_M_C_Print1_s1
struct _Con_M_C_Print1_s1 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print1_s1;
extern int step_M_C_Print1_s1(Sink,Term);

/* FUNCTION Prelude-IfThen-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfThen_s2 struct _Con_M_IfThen_s2
struct _Con_M_IfThen_s2 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_IfThen_s2;
extern int step_M_IfThen_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s147 struct _Con_M_C_UnsynthesizeRule_s147
struct _Con_M_C_UnsynthesizeRule_s147 {struct _Construction construction; Term sub[21]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s147;
extern int step_M_C_UnsynthesizeRule_s147(Sink,Term);

/* FUNCTION Prelude-IfEmpty-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfEmpty_s1 struct _Con_M_IfEmpty_s1
struct _Con_M_IfEmpty_s1 {struct _Construction construction; Term sub[4]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfEmpty_s1;
extern int step_M_IfEmpty_s1(Sink,Term);

/* FUNCTION Cook-C-Print1-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_Print1_s2 struct _Con_M_C_Print1_s2
struct _Con_M_C_Print1_s2 {struct _Construction construction; Term sub[5]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_Print1_s2;
extern int step_M_C_Print1_s2(Sink,Term);

/* FUNCTION Cook-C-ExtendSortMap-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ExtendSortMap struct _Con_M_C_ExtendSortMap
struct _Con_M_C_ExtendSortMap {struct _Construction construction; Term sub[3]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_ExtendSortMap;
extern int step_M_C_ExtendSortMap(Sink,Term);

/* FUNCTION Prelude-IfEmpty-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfEmpty_s2 struct _Con_M_IfEmpty_s2
struct _Con_M_IfEmpty_s2 {struct _Construction construction; Term sub[2]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_IfEmpty_s2;
extern int step_M_IfEmpty_s2(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s140 struct _Con_M_C_UnsynthesizeRule_s140
struct _Con_M_C_UnsynthesizeRule_s140 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s140;
extern int step_M_C_UnsynthesizeRule_s140(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders2-1 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders2_s5 struct _Con_M_C_ScopeSort_AddBinders2_s5
struct _Con_M_C_ScopeSort_AddBinders2_s5 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders2_s5;
extern int step_M_C_ScopeSort_AddBinders2_s5(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders2-3 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders2_s6 struct _Con_M_C_ScopeSort_AddBinders2_s6
struct _Con_M_C_ScopeSort_AddBinders2_s6 {struct _Construction construction; Term sub[2]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders2_s6;
extern int step_M_C_ScopeSort_AddBinders2_s6(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders2-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders2_s3 struct _Con_M_C_ScopeSort_AddBinders2_s3
struct _Con_M_C_ScopeSort_AddBinders2_s3 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders2_s3;
extern int step_M_C_ScopeSort_AddBinders2_s3(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders2-1$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders2_s4 struct _Con_M_C_ScopeSort_AddBinders2_s4
struct _Con_M_C_ScopeSort_AddBinders2_s4 {struct _Construction construction; Term sub[6]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders2_s4;
extern int step_M_C_ScopeSort_AddBinders2_s4(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s144 struct _Con_M_C_UnsynthesizeRule_s144
struct _Con_M_C_UnsynthesizeRule_s144 {struct _Construction construction; Term sub[20]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s144;
extern int step_M_C_UnsynthesizeRule_s144(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders2- HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders2_s1 struct _Con_M_C_ScopeSort_AddBinders2_s1
struct _Con_M_C_ScopeSort_AddBinders2_s1 {struct _Construction construction; Term sub[4]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders2_s1;
extern int step_M_C_ScopeSort_AddBinders2_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s145 struct _Con_M_C_UnsynthesizeRule_s145
struct _Con_M_C_UnsynthesizeRule_s145 {struct _Construction construction; Term sub[22]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s145;
extern int step_M_C_UnsynthesizeRule_s145(Sink,Term);

/* FUNCTION Cook-C-ScopeSort-AddBinders2-2$vFree HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_ScopeSort_AddBinders2_s2 struct _Con_M_C_ScopeSort_AddBinders2_s2
struct _Con_M_C_ScopeSort_AddBinders2_s2 {struct _Construction construction; Term sub[5]; Variable binder[1];};
extern struct _ConstructionDescriptor descriptor_M_C_ScopeSort_AddBinders2_s2;
extern int step_M_C_ScopeSort_AddBinders2_s2(Sink,Term);

/* FUNCTION Prelude-IfThen-2 HEADER DECLARATIONS. */
#define STRUCT_Con_M_IfThen_s1 struct _Con_M_IfThen_s1
struct _Con_M_IfThen_s1 {struct _Construction construction; Term sub[2]; Variable binder[2];};
extern struct _ConstructionDescriptor descriptor_M_IfThen_s1;
extern int step_M_IfThen_s1(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4$ HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s142 struct _Con_M_C_UnsynthesizeRule_s142
struct _Con_M_C_UnsynthesizeRule_s142 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s142;
extern int step_M_C_UnsynthesizeRule_s142(Sink,Term);

/* FUNCTION Cook-C-UnsynthesizeRule-4 HEADER DECLARATIONS. */
#define STRUCT_Con_M_C_UnsynthesizeRule_s143 struct _Con_M_C_UnsynthesizeRule_s143
struct _Con_M_C_UnsynthesizeRule_s143 {struct _Construction construction; Term sub[17]; Variable binder[0];};
extern struct _ConstructionDescriptor descriptor_M_C_UnsynthesizeRule_s143;
extern int step_M_C_UnsynthesizeRule_s143(Sink,Term);

#ifdef __cplusplus
}
#endif
/* END OF C HEADER FOR CRSX Main MODULE . */
#endif

