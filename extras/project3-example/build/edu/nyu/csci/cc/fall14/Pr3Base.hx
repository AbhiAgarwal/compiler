// [NYU Courant Institute] Compiler Construction/Fall 2014/Project Milestone 3
//
// Skeleton 
// 1. Lexical analysis
// 2. JST Grammar
// 3. MinARM32 assembler grammar
// 4. Compiler (To Be Done)
//
// See http://cs.nyu.edu/courses/fall14/CSCI-GA.2130-001/pr3/pr3.pdf

module edu.nyu.csci.cc.fall14.Pr3Base {

////////////////////////////////////////////////////////////////////////
// 1. LEXICAL ANALYSIS
////////////////////////////////////////////////////////////////////////

space [ \t\n\r] | '//' [^\n]* | '/*' ( [^*] | '*' [^/] )* '*/'  ; // Inner /* ignored

token IDENTIFIER  | ⟨LetterEtc⟩ (⟨LetterEtc⟩ | ⟨Digit⟩)* ;

token INTEGER     | ⟨Digit⟩+ ;

token fragment Letter     | [A-Za-z] ;
token fragment LetterEtc  | ⟨Letter⟩ | [$_] ;
token fragment Digit      | [0-9] ;

////////////////////////////////////////////////////////////////////////
// 2. JST GRAMMAR
////////////////////////////////////////////////////////////////////////

// PROGRAM

main sort Program  |  ⟦ ⟨Declarations⟩ ⟧ ;

// DECLARATIONS

sort Declarations | ⟦ ⟨Declaration⟩ ⟨Declarations⟩ ⟧ | ⟦⟧ ;

sort Declaration
|  ⟦ function ⟨Type⟩ ⟨Identifier⟩ ⟨ArgumentSignature⟩ { ⟨Statements⟩ } ⟧
;

sort ArgumentSignature
|  ⟦ ( ) ⟧
|  ⟦ ( ⟨Type⟩ ⟨Identifier⟩ ⟨TypeIdentifierTail⟩ ) ⟧
;
sort TypeIdentifierTail |  ⟦ , ⟨Type⟩ ⟨Identifier⟩ ⟨TypeIdentifierTail⟩ ⟧  |  ⟦ ⟧ ;

// STATEMENTS

sort Statements | ⟦ ⟨Statement⟩ ⟨Statements⟩ ⟧ | ⟦⟧ ;

sort Statement
|  ⟦ { ⟨Statements⟩ } ⟧
|  ⟦ var ⟨Type⟩ ⟨Identifier⟩ ; ⟧
|  ⟦ ; ⟧
|  ⟦ ⟨Expression⟩ ; ⟧
|  ⟦ if ( ⟨Expression⟩ ) ⟨IfTail⟩ ⟧
|  ⟦ while ( ⟨Expression⟩ ) ⟨Statement⟩ ⟧
|  ⟦ return ⟨Expression⟩ ; ⟧
|  ⟦ return ; ⟧
;

sort IfTail | ⟦ ⟨Statement⟩ else ⟨Statement⟩ ⟧ | ⟦ ⟨Statement⟩ ⟧ ;

// TYPES

sort Type
|  ⟦ boolean ⟧
|  ⟦ int ⟧
;

// EXPRESSIONS

sort Expression

|  sugar ⟦ ( ⟨Expression#e⟩ ) ⟧@10 → #e

|  ⟦ ⟨Integer⟩ ⟧@10
|  ⟦ ⟨Identifier⟩ ⟧@10

|  ⟦ ⟨Expression@9⟩ ( ) ⟧@9
|  ⟦ ⟨Expression@9⟩ ( ⟨Expression⟩ ) ⟧@9

|  ⟦ ! ⟨Expression@8⟩ ⟧@8
|  ⟦ - ⟨Expression@8⟩ ⟧@8
|  ⟦ + ⟨Expression@8⟩ ⟧@8

|  ⟦ ⟨Expression@7⟩ * ⟨Expression@8⟩ ⟧@7

|  ⟦ ⟨Expression@6⟩ + ⟨Expression@7⟩ ⟧@6
|  ⟦ ⟨Expression@6⟩ - ⟨Expression@7⟩ ⟧@6

|  ⟦ ⟨Expression@6⟩ < ⟨Expression@6⟩ ⟧@5
|  ⟦ ⟨Expression@6⟩ > ⟨Expression@6⟩ ⟧@5
|  ⟦ ⟨Expression@6⟩ <= ⟨Expression@6⟩ ⟧@5
|  ⟦ ⟨Expression@6⟩ >= ⟨Expression@6⟩ ⟧@5

|  ⟦ ⟨Expression@5⟩ == ⟨Expression@5⟩ ⟧@4
|  ⟦ ⟨Expression@5⟩ != ⟨Expression@5⟩ ⟧@4

|  ⟦ ⟨Expression@3⟩ && ⟨Expression@4⟩ ⟧@3

|  ⟦ ⟨Expression@2⟩ || ⟨Expression@3⟩ ⟧@2

|  ⟦ ⟨Expression@2⟩ = ⟨Expression@1⟩ ⟧@1

|  ⟦ ⟨Expression@1⟩ , ⟨Expression⟩ ⟧
;

sort Integer  |   ⟦ ⟨INTEGER⟩ ⟧ ;
sort Identifier  |  symbol ⟦⟨IDENTIFIER⟩⟧ ;

////////////////////////////////////////////////////////////////////////
// 3. MinARM32 ASSEMBLER GRAMMAR
////////////////////////////////////////////////////////////////////////

// Instructions.
sort Instructions | ⟦ ⟨Instruction⟩ ⟨Instructions⟩ ⟧ | ⟦⟧ ;

sort Instruction
| ⟦ ⟨Identifier⟩ = ⟨Integer⟩ ¶⟧		// define identifier
| ⟦ ⟨Identifier⟩ ⟧ 		 		// label
| ⟦ DCI ⟨Integers⟩ ¶⟧			// allocate integers
| ⟦ ⟨Op⟩ ¶⟧	  			// machine instruction
;

sort Integers | ⟦ ⟨Integer⟩, ⟨Integers⟩ ⟧ | ⟦ ⟨Integer⟩ ⟧ ;

// Syntax of individual machine instructions.
sort Op

| ⟦ MOV ⟨Reg⟩, ⟨Arg⟩ ⟧			// move
| ⟦ MVN ⟨Reg⟩, ⟨Arg⟩ ⟧			// move not
| ⟦ ADD ⟨Reg⟩, ⟨Reg⟩, ⟨Arg⟩ ⟧		// add
| ⟦ SUB ⟨Reg⟩, ⟨Reg⟩, ⟨Arg⟩ ⟧		// subtract
| ⟦ AND ⟨Reg⟩, ⟨Reg⟩, ⟨Arg⟩ ⟧		// bitwise and
| ⟦ ORR ⟨Reg⟩, ⟨Reg⟩, ⟨Arg⟩ ⟧		// bitwise or
| ⟦ EOR ⟨Reg⟩, ⟨Reg⟩, ⟨Arg⟩ ⟧		// bitwise exclusive or
| ⟦ CMP ⟨Reg⟩, ⟨Arg⟩ ⟧	    		// compare
| ⟦ MUL ⟨Reg⟩, ⟨Reg⟩, ⟨Reg⟩ ⟧		// multiply

| ⟦ B ⟨Identifier⟩ ⟧			// branch always
| ⟦ BEQ ⟨Identifier⟩ ⟧			// branch if equal
| ⟦ BNE ⟨Identifier⟩ ⟧			// branch if not equal
| ⟦ BGT ⟨Identifier⟩ ⟧			// branch if greater than
| ⟦ BLT ⟨Identifier⟩ ⟧			// branch if less than
| ⟦ BGE ⟨Identifier⟩ ⟧			// branch if greater than or equal
| ⟦ BLE ⟨Identifier⟩ ⟧			// branch if less than or equal
| ⟦ BL ⟨Identifier⟩ ⟧			// branch and link

| ⟦ LDR ⟨Reg⟩, ⟨Mem⟩ ⟧			// load register from memory
| ⟦ STR ⟨Reg⟩, ⟨Mem⟩ ⟧			// store register to memory

| ⟦ LDMFD ⟨Reg⟩! , {⟨Regs⟩} ⟧ 		// load multiple fully descending (pop)
| ⟦ STMFD ⟨Reg⟩! , {⟨Regs⟩} ⟧		// store multiple fully descending (push)
;

// Arguments.

sort Reg	| ⟦R0⟧ | ⟦R1⟧ | ⟦R2⟧ | ⟦R3⟧ | ⟦R4⟧ | ⟦R5⟧ | ⟦R6⟧ | ⟦R7⟧
     		| ⟦R8⟧ | ⟦R9⟧ | ⟦R10⟧ | ⟦R11⟧ | ⟦R12⟧ | ⟦SP⟧ | ⟦LR⟧ | ⟦PC⟧ ;

sort Arg | ⟦⟨Constant⟩⟧ | ⟦⟨Reg⟩⟧ | ⟦⟨Reg⟩, LSL ⟨Constant⟩⟧ | ⟦⟨Reg⟩, LSR ⟨Constant⟩⟧ ;

sort Mem | ⟦ [ ⟨Reg⟩, ⟨Sign⟩ ⟨Arg⟩ ] ⟧ ;
sort Sign | ⟦+⟧ | ⟦-⟧ | ⟦⟧ ;

sort Regs | ⟦⟨Reg⟩⟧ | ⟦⟨Reg⟩, ⟨Regs⟩⟧ ;

sort Constant | ⟦#⟨Integer⟩⟧ | ⟦&⟨Identifier⟩⟧ ;

// Assembler helper: concatenation/flattening of code:

sort Instructions | scheme ⟦ { ⟨Instructions⟩ } ⟨Instructions⟩ ⟧ ;
⟦ {} ⟨Instructions#⟩ ⟧ → # ;
⟦ {⟨Instruction#1⟩ ⟨Instructions#2⟩} ⟨Instructions#3⟩ ⟧ → ⟦ ⟨Instruction#1⟩ {⟨Instructions#2⟩} ⟨Instructions#3⟩ ⟧ ;


////////////////////////////////////////////////////////////////////////
// 4. COMPILER
////////////////////////////////////////////////////////////////////////

sort Instructions
	|	scheme Compile(Program) ;

Compile( ⟦ ⟨Declarations#1⟩ ⟧ )
	→	CompileDeclarations(#1) ;

sort Instructions
	|	scheme CompileDeclarations(Declarations) ;

CompileDeclarations( ⟦ ⟨Declaration#1⟩ ⟨Declarations#2⟩ ⟧ )
	→	⟦ {⟨Instructions CompileDeclaration(#1)⟩} ⟨Instructions CompileDeclarations(#2)⟩ ⟧;

CompileDeclarations( ⟦ ⟧ )
	→	⟦ ⟧ ;

sort Instructions
	|	scheme CompileDeclaration(Declaration) ;

CompileDeclaration( ⟦ function ⟨Type#1⟩ name2 ⟨ArgumentSignature#3⟩ { ⟨Statements#4⟩ } ⟧ )
	→	⟦ name2 MOV PC,LR ⟧ ;

}
