// [NYU Courant Institute] Compiler Construction/Fall 2014/Project Milestone 3
//
// Skeleton 
// 1. Lexical analysis
// 2. JST Grammar
// 3. MinARM32 assembler grammar
// 4. Compiler (To Be done)
// 5. Instructions
// See http://cs.nyu.edu/courses/fall14/CSCI-GA.2130-001/pr3/pr3.pdf


// STEPS
// NEXT STEPS IS TO SYNTHESIZE REGISTER TO USE

module edu.nyu.csci.cc.fall14.Pr3Base {

	////////////////////////////////////////////////////////////////////////
	// 1. LEXICAL ANALYSIS
	////////////////////////////////////////////////////////////////////////

	space [ \t\n\r] | '//' [^\n]* | '/*' ( [^*] | '*' [^/] )* '*/'  ; // Inner /* ignored

	token IDENTIFIER
		|	⟨LetterEtc⟩ (⟨LetterEtc⟩ | ⟨Digit⟩)* ;

	sort Identifier
		|	symbol ⟦⟨IDENTIFIER⟩⟧ ;

	token INTEGER
		|	⟨Digit⟩+ ;

	token fragment Letter
		|	[A-Za-z] ;

	token fragment LetterEtc
		|	⟨Letter⟩
		|	[$_] ;

	token fragment Digit
		|	[0-9] ;

	////////////////////////////////////////////////////////////////////////
	// 2. JST GRAMMAR
	////////////////////////////////////////////////////////////////////////

	// PROGRAM
	main sort Program
		|	⟦ ⟨Declarations⟩ ⟧ ;

	// DECLARATIONS
	sort Declarations
		|	⟦ ⟨Declaration⟩ ⟨Declarations⟩ ⟧
		|	⟦⟧ ;

	sort ArgState 
		|	⟦ ⟨ArgumentSignature⟩ { ⟨Statements⟩ } ⟧ ;

	sort Declaration
		|	⟦ function ⟨Type⟩ ⟨Identifier⟩ ⟨ArgState⟩ ⟧ ;

	sort ArgumentSignature
		|	⟦ ( ) ⟧
		|	⟦ ( ⟨Type⟩ ⟨Identifier⟩ ⟨TypeIdentifierTail⟩ ) ⟧ ;

	sort TypeIdentifierTail
		|	⟦ , ⟨Type⟩ ⟨Identifier⟩ ⟨TypeIdentifierTail⟩ ⟧
		|	⟦ ⟧ ;

	// STATEMENTS
	sort Statements
		|	⟦ ⟨Statement⟩ ⟨Statements⟩ ⟧
		|	⟦⟧ ;

	sort Statement
		|	⟦ { ⟨Statements⟩ } ⟧
		|	⟦ var ⟨Type⟩ ⟨Identifier⟩ ; ⟧
		|	⟦ ; ⟧
		|	⟦ ⟨Expression⟩ ; ⟧
		|	⟦ if ( ⟨Expression⟩ ) ⟨IfTail⟩ ⟧
		|	⟦ while ( ⟨Expression⟩ ) ⟨Statement⟩ ⟧
		|	⟦ return ⟨Expression⟩ ; ⟧
		|	⟦ return ; ⟧ ;

	sort IfTail
		|	⟦ ⟨Statement⟩ else ⟨Statement⟩ ⟧
		|	⟦ ⟨Statement⟩ ⟧ ;

	// TYPES
	sort Type
		|	⟦ boolean ⟧
		|	⟦ int ⟧ ;

	sort Boolean
		|	⟦ trueBool ⟧
		|	⟦ falseBool ⟧ ;

	// EXPRESSIONS
	sort Expression
		|	sugar ⟦ ( ⟨Expression#e⟩ ) ⟧@10 → #e
		|	⟦ ⟨Integer⟩ ⟧@10
		|	⟦ ⟨Identifier⟩ ⟧@10
		|	⟦ ⟨Expression@9⟩ ( ) ⟧@9
		|	⟦ ⟨Expression@9⟩ ( ⟨Integers⟩ ) ⟧@9
		|	⟦ ⟨Expression@9⟩ ( ⟨Identifiers⟩ ) ⟧@9

		|	⟦ ! ⟨Expression@8⟩ ⟧@8
		|	⟦ - ⟨Expression@8⟩ ⟧@8
		|	⟦ + ⟨Expression@8⟩ ⟧@8

		|	⟦ ⟨Expression@7⟩ * ⟨Expression@8⟩ ⟧@7
		|	⟦ ⟨Expression@6⟩ + ⟨Expression@7⟩ ⟧@6
		|	⟦ ⟨Expression@6⟩ - ⟨Expression@7⟩ ⟧@6

		|	⟦ ⟨Expression@6⟩ < ⟨Expression@6⟩ ⟧@5
		|	⟦ ⟨Expression@6⟩ > ⟨Expression@6⟩ ⟧@5
		|	⟦ ⟨Expression@6⟩ <= ⟨Expression@6⟩ ⟧@5
		|	⟦ ⟨Expression@6⟩ >= ⟨Expression@6⟩ ⟧@5
		|	⟦ ⟨Expression@5⟩ == ⟨Expression@5⟩ ⟧@4
		|	⟦ ⟨Expression@5⟩ != ⟨Expression@5⟩ ⟧@4

		|	⟦ ⟨Expression@3⟩ && ⟨Expression@4⟩ ⟧@3
		|	⟦ ⟨Expression@2⟩ || ⟨Expression@3⟩ ⟧@2
		|	⟦ ⟨Expression@2⟩ = ⟨Expression@1⟩ ⟧@1
		|	⟦ ⟨Expression@1⟩ , ⟨Expression⟩ ⟧ ;

	sort Integer
		|	⟦ ⟨INTEGER⟩ ⟧ ;

	////////////////////////////////////////////////////////////////////////
	// 3. MinARM32 ASSEMBLER GRAMMAR
	////////////////////////////////////////////////////////////////////////

	// Instructions.
	sort Instructions
		|	⟦ ⟨Instruction⟩ ⟨Instructions⟩ ⟧
		|	⟦⟧ ;

	sort Instruction
		|	⟦ ⟨Identifier⟩ = ⟨Integer⟩ ¶⟧ // define identifier
		|	⟦ ⟨Identifier⟩ ⟧ // label
		|	⟦ DCI ⟨Integers⟩ ¶⟧ // allocate integers
		|	⟦ ⟨Op⟩ ¶⟧ ; // machine instruction

	sort Integers
		|	⟦ ⟨Integer⟩, ⟨Integers⟩ ⟧
		|	⟦ ⟨Integer⟩ ⟧ ;

	sort Identifiers
		|	⟦ ⟨Identifier⟩, ⟨Identifiers⟩ ⟧
		|	⟦ ⟨Identifier⟩ ⟧ 
		|	⟦ ⟧ ;

	// Syntax of individual machine instructions.
	sort Op
		|	⟦ MOV ⟨Reg⟩, ⟨Arg⟩ ⟧ // move
		|	⟦ MVN ⟨Reg⟩, ⟨Arg⟩ ⟧ // move not
		|	⟦ ADD ⟨Reg⟩, ⟨Reg⟩, ⟨Arg⟩ ⟧ // add
		|	⟦ SUB ⟨Reg⟩, ⟨Reg⟩, ⟨Arg⟩ ⟧ // subtract
		|	⟦ AND ⟨Reg⟩, ⟨Reg⟩, ⟨Arg⟩ ⟧ // bitwise and
		|	⟦ ORR ⟨Reg⟩, ⟨Reg⟩, ⟨Arg⟩ ⟧ // bitwise or
		|	⟦ EOR ⟨Reg⟩, ⟨Reg⟩, ⟨Arg⟩ ⟧ // bitwise exclusive or
		|	⟦ CMP ⟨Reg⟩, ⟨Arg⟩ ⟧ // compare
		|	⟦ MUL ⟨Reg⟩, ⟨Reg⟩, ⟨Reg⟩ ⟧ // multiply

		|	⟦ B ⟨Identifier⟩ ⟧ // branch always
		|	⟦ BEQ ⟨Identifier⟩ ⟧ // branch if equal
		|	⟦ BNE ⟨Identifier⟩ ⟧ // branch if not equal
		|	⟦ BGT ⟨Identifier⟩ ⟧ // branch if greater than
		|	⟦ BLT ⟨Identifier⟩ ⟧ // branch if less than
		|	⟦ BGE ⟨Identifier⟩ ⟧ // branch if greater than or equal
		|	⟦ BLE ⟨Identifier⟩ ⟧ // branch if less than or equal
		|	⟦ BL ⟨Identifier⟩ ⟧ // branch and link

		|	⟦ LDR ⟨Reg⟩, ⟨Mem⟩ ⟧ // load register from memory
		|	⟦ STR ⟨Reg⟩, ⟨Mem⟩ ⟧ // store register to memory
		|	⟦ LDRB ⟨Reg⟩, ⟨Mem⟩ ⟧ // load byte into register from memory
		|	⟦ STRB ⟨Reg⟩, ⟨Mem⟩ ⟧ // store byte from register into memory
		|	⟦ LDMFD ⟨Reg⟩! , {⟨Regs⟩} ⟧ // load multiple fully descending (pop)
		|	⟦ STMFD ⟨Reg⟩! , {⟨Regs⟩} ⟧ ; // store multiple fully descending (push)

	// Arguments.
	sort Reg
		|	⟦R0⟧ |	⟦R1⟧ |	⟦R2⟧ |	⟦R3⟧ |	⟦R4⟧ |	⟦R5⟧ |	⟦R6⟧ |	⟦R7⟧
		|	⟦R8⟧ |	⟦R9⟧ |	⟦R10⟧ |	⟦R11⟧ |	⟦R12⟧ |	⟦SP⟧ |	⟦LR⟧ |	⟦PC⟧ ;

	sort Regs
		|	⟦⟨Reg⟩⟧
		|	⟦⟨Reg⟩, ⟨Regs⟩⟧ ;

	sort Arg
		|	⟦⟨Constant⟩⟧
		|	⟦⟨Reg⟩⟧
		|	⟦⟨Reg⟩, LSL ⟨Constant⟩⟧
		|	⟦⟨Reg⟩, LSR ⟨Constant⟩⟧ ;

	sort Mem
		|	⟦ [ ⟨Reg⟩, ⟨Sign⟩ ⟨Arg⟩ ] ⟧ ;

	sort Sign
		|	⟦+⟧
		|	⟦-⟧
		|	⟦⟧ ;

	sort Constant
		|	⟦# ⟨Sign⟩ ⟨Integer⟩⟧
		|	⟦&⟨Identifier⟩⟧ ;

		// Assembler helper: concatenation/flattening of code:

	sort Instructions
		|	scheme ⟦ { ⟨Instructions⟩ } ⟨Instructions⟩ ⟧ ;
	
	⟦ {} ⟨Instructions#⟩ ⟧ → # ;
	⟦ {⟨Instruction#1⟩ ⟨Instructions#2⟩} ⟨Instructions#3⟩ ⟧ → ⟦ ⟨Instruction#1⟩ {⟨Instructions#2⟩} ⟨Instructions#3⟩ ⟧ ;

	////////////////////////////////////////////////////////////////////////
	// 4. COMPILER
	////////////////////////////////////////////////////////////////////////

	token SYMBOL
		|	[a-z]+ ('_' [0-9]+)* ;

	sort Symbol
		|	symbol ⟦⟨SYMBOL⟩⟧ ;

	////////////////////////////////////////////////////////////////////////
	// 5. INSTRUCTIONS
	// ↓idToReg answers the question of Allocation: what variables are in registers?
	// ↓regAval answers the question of Assignment: which specific registers are free?
	// LDMFD, and STMFD to save registers r4-r11. For each function do:
	// STMFD sp!, {r4-r11, lr}
	// LDMFD sp!, {r4-r11, pc}
	////////////////////////////////////////////////////////////////////////

	attribute ↓e { Identifier : Reg } ;
	attribute ↓r { Reg : Boolean } ;

	sort Instructions
		|	scheme Compile(Program) ;

	Compile( ⟦ ⟨Declarations#1⟩ ⟧ )
		→	
		⟦ 
				{⟨Instructions CompileDeclarations(#1)⟩}
			{BL main}
		⟧ ;

	sort Instructions
		|	scheme CompileDeclarations(Declarations) ↓e ↓regAval ;

	CompileDeclarations( ⟦ ⟨Declaration#1⟩ ⟨Declarations#2⟩ ⟧ )
		→	
		⟦ 
			{⟨Instructions CompileDeclaration(#1)⟩}
			⟨Instructions CompileDeclarations(#2)⟩ 
		⟧ ;

	CompileDeclarations( ⟦ ⟧ )
		→	⟦ ⟧ ;

	sort Instructions
		|	scheme CompileDeclaration(Declaration) ↓e ↓r ;

	CompileDeclaration( ⟦ function ⟨Type#1⟩ name2 ⟨ArgState#3⟩ ⟧ ) 
		→	
		⟦
			name2
			{
				{STMFD SP! , {R4, R5, R6, R7, R8, R9, R10, R11, LR}}
				⟨Instructions Argument(#3)⟩
			}
			{
				LDMFD SP! , {R4, R5, R6, R7, R8, R9, R10, R11, PC}
			}
		⟧
			↓r{⟦R0⟧: ⟦falseBool⟧} 
			↓r{⟦R1⟧: ⟦falseBool⟧} 
			↓r{⟦R2⟧: ⟦falseBool⟧}
			↓r{⟦R3⟧: ⟦falseBool⟧}
			↓r{⟦R4⟧: ⟦falseBool⟧}
			↓r{⟦R5⟧: ⟦falseBool⟧}
			↓r{⟦R6⟧: ⟦falseBool⟧}
			↓r{⟦R7⟧: ⟦falseBool⟧}
			↓r{⟦R8⟧: ⟦falseBool⟧}
			↓r{⟦R9⟧: ⟦falseBool⟧}
			↓r{⟦R10⟧: ⟦falseBool⟧}
			↓r{⟦R11⟧: ⟦falseBool⟧}
			↓r{⟦R12⟧: ⟦falseBool⟧} ;

	// HANDLING ARGUMENTS
	sort Instructions
		|	scheme Argument(ArgState) ↓e ↓r ;

	// No Arguments Handling
	Argument( ⟦ ( ) { ⟨Statements#1⟩ } ⟧ )
		→ 
		⟦
			{⟨Instructions AllStatements(#1)⟩}
		⟧ ;

	// 1 Argument Handling
	Argument( ⟦ ( ⟨Type#1⟩ name1 ) { ⟨Statements#3⟩ } ⟧ )
		→ 
		⟦ 
			{⟨Instructions AllStatements(#3)⟩}
		⟧ 
			↓e{name1: ⟦R0⟧} 
			↓r{⟦R0⟧: ⟦trueBool⟧} ;

	// 2
	Argument( ⟦ ( ⟨Type#1⟩ name1, ⟨Type#2⟩ name2 ) { ⟨Statements#3⟩ } ⟧ )
		→ 
		⟦ 
			{⟨Instructions AllStatements(#3)⟩}
		⟧ 
			↓e{name1: ⟦R0⟧} 
			↓r{⟦R0⟧: ⟦trueBool⟧}
			↓e{name2: ⟦R1⟧} 
			↓r{⟦R1⟧: ⟦trueBool⟧} ;

	// 3
	Argument( ⟦ ( ⟨Type#1⟩ name1, ⟨Type#2⟩ name2, ⟨Type#3⟩ name3 ) { ⟨Statements#3⟩ } ⟧ )
		→ 
		⟦ 
			{⟨Instructions AllStatements(#3)⟩}
		⟧ 
			↓e{name1: ⟦R0⟧} 
			↓r{⟦R0⟧: ⟦trueBool⟧}
			↓e{name2: ⟦R1⟧} 
			↓r{⟦R1⟧: ⟦trueBool⟧}
			↓e{name3: ⟦R2⟧} 
			↓r{⟦R2⟧: ⟦trueBool⟧} ;

	// 4
	Argument( ⟦ ( ⟨Type#1⟩ name1, ⟨Type#2⟩ name2, ⟨Type#3⟩ name3, ⟨Type#4⟩ name4 ) { ⟨Statements#3⟩ } ⟧ )
		→ 
		⟦ 
			{⟨Instructions AllStatements(#3)⟩}
		⟧ 
			↓e{name1: ⟦R0⟧} 
			↓r{⟦R0⟧: ⟦trueBool⟧}
			↓e{name2: ⟦R1⟧} 
			↓r{⟦R1⟧: ⟦trueBool⟧}
			↓e{name3: ⟦R2⟧} 
			↓r{⟦R2⟧: ⟦trueBool⟧}
			↓e{name4: ⟦R3⟧}
			↓r{⟦R3⟧: ⟦trueBool⟧} ;

	sort Instructions
		|	scheme AllStatements(Statements) ↓e ↓r ;

	AllStatements(⟦ ⟨Statement#1⟩ ⟨Statements#2⟩ ⟧)
		→
		⟦
			{⟨Instructions SingleStatement(#1)⟩}
			⟨Instructions AllStatements(#2)⟩
		⟧ ;

	AllStatements(⟦ ⟧)
		→ ⟦ ⟧ ;

	sort Instructions
		|	scheme SingleStatement(Statement) ↓e ↓r ;

	SingleStatement(⟦ { ⟨Statements#1⟩ } ⟧)
		→ 
		⟦
			⟨Instructions AllStatements(#1)⟩
		⟧ ;

	SingleStatement(⟦ ⟨Expression#1⟩ ; ⟧)
		→ 
		⟦
			⟨Instructions SingleExpression(#1)⟩
		⟧ ;

	SingleStatement(⟦ var ⟨Type#1⟩ name2 ; ⟧) ↓r{#regName: ⟦falseBool⟧}
		→ ⟦ ⟧ ↓e{name2: #regName} ↓r{#regName: ⟦trueBool⟧} ;

	SingleStatement(⟦ if ( ⟨Expression#1⟩ ) ⟨Statement#2⟩ else ⟨Statement#3⟩ ⟧)
		→ 
		⟦
			{ ⟨ Instructions T(⟦ true ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
        	t { ⟨ Instructions SingleStatement(#2) ⟩ }
        	B l3
        	f { ⟨ Instructions SingleStatement(#3) ⟩ }
        	l3
		⟧ ;

	SingleStatement(⟦ if ( ⟨Expression#1⟩ ) ⟨Statement#2⟩ ⟧)
		→ 
		⟦
			{ ⟨ Instructions T(⟦ true ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
        	t { ⟨ Instructions SingleStatement(#2) ⟩ }
		⟧ ;

	SingleStatement(⟦ while ( ⟨Expression#1⟩ ) ⟨Statement#2⟩ ⟧)
		→ 
		⟦
			B test
			t   { ⟨ Instructions SingleStatement(#2) ⟩ }
			test   { ⟨ Instructions T(⟦ true ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
		⟧ ;

	SingleStatement(⟦ return ⟨Expression#1⟩ ; ⟧)
		→ 
		⟦
			{⟨Instructions SingleExpression(#1)⟩}
			{MOV R0, R4}
		⟧ ;

	SingleStatement(⟦ return ; ⟧)
		→ ⟦ ⟧ ;

	// This shouldn't have to be dealt with.
	SingleStatement(⟦ { ⟨Statements#1⟩ } ⟧)
		→ 
		⟦
			⟨Instructions AllStatements(#1)⟩
		⟧ ;

	SingleStatement(⟦ ; ⟧)
		→ ⟦ ⟧ ;

	sort Instructions
		|	scheme SingleExpression(Expression) ↓e ↓r ;

	SingleExpression(⟦ ⟨Integer#i⟩ ⟧) 
		→ 
		⟦
			{MOV R0, #⟨Integer#i⟩}
		⟧ ;

	SingleExpression(⟦ ⟨Identifier#i⟩ ⟧) ↓e{#i:#reg}
		→ 
		⟦
			{MOV R0, ⟨Reg#reg⟩}
		⟧ ;	

	SingleExpression(⟦ ⟨Identifier#i⟩ ( ) ⟧)
		→ 
		⟦ 
			{BL ⟨Identifier#i⟩}
		⟧ ;
	
	SingleExpression(⟦ ⟨Identifier#i⟩ ( ⟨Identifiers#1⟩ ) ⟧)
		→ 
		⟦ 
			{⟨Instructions ArgumentIDSearching(#1)⟩}
			{BL ⟨Identifier#i⟩}
		⟧ ;

	SingleExpression(⟦ ⟨Identifier#i⟩ ( ⟨Integers#1⟩ ) ⟧)
		→ 
		⟦ 
			{⟨Instructions ArgumentIntSearching(#1)⟩}
			{BL ⟨Identifier#i⟩}
		⟧ ;


	SingleExpression(⟦ ! ⟨Expression#1⟩ ⟧)
		→ 
		⟦ 
			{ ⟨Instructions T(⟦ false ⟧, ⟦ t ⟧, ⟦ f ⟧)⟩ }
	        MOV R4, #1
	        B l3
			f  MOV R4, #0
			l3
		⟧ ;

	SingleExpression(⟦ - ⟨Expression#1⟩ ⟧)
		→ 
		⟦ 
			{MOV R5, #-1}
			{MUL R4, R4, R5}
		⟧ ;

	SingleExpression(⟦ + ⟨Expression#1⟩ ⟧)
		→ 
		⟦
			{ ⟨Instructions SingleExpression(#1)⟩ }
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ * ⟨Expression#2⟩ ⟧)
		→
		⟦
			{
				{⟨Instructions SingleExpression(#1)⟩}
				⟨Instructions SingleExpression(#2)⟩
			}
			{MUL R4,R4,R5}
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ + ⟨Expression#2⟩ ⟧)
		→ 
		⟦
        	{
				{⟨Instructions SingleExpression(#1)⟩}
				⟨Instructions SingleExpression(#2)⟩
			}
        	{ADD R4,R4,R5}
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ - ⟨Expression#2⟩ ⟧)
		→ 
		⟦ 
			{
				{⟨Instructions SingleExpression(#1)⟩}
				⟨Instructions SingleExpression(#2)⟩
			}
        	{SUB R4,R4,R5}
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ < ⟨Expression#2⟩ ⟧)
		→ 
		⟦ 
			{ ⟨ Instructions T(⟦ false ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
	        MOV R4, #1
	        B l3
			f  MOV R4, #0
			l3
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ > ⟨Expression#2⟩ ⟧)
		→ 
		⟦ 
			{ ⟨ Instructions T(⟦ false ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
			MOV R4,#1
			B l3
			false  MOV R4,#0
			l3
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ <= ⟨Expression#2⟩ ⟧)
		→ 
		⟦ 
			{ ⟨ Instructions T(⟦ false ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
			MOV R4,#1
			B l3
			false  MOV R4,#0
			l3
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ >= ⟨Expression#2⟩ ⟧)
		→ 
		⟦ 
			{ ⟨ Instructions T(⟦ false ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
			MOV R4,#1
			B l3
			false  MOV R4,#0
			l3
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ == ⟨Expression#2⟩ ⟧)
		→ 
		⟦ 
			{ ⟨ Instructions T(⟦ false ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
			MOV R4,#1
			B l3
			false  MOV R4,#0
			l3
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ != ⟨Expression#2⟩ ⟧)
		→ 
		⟦ 
			{ ⟨ Instructions T(⟦ false ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
			MOV R4,#1
			B l3
			false  MOV R4,#0
			l3
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ && ⟨Expression#2⟩ ⟧)
		→ 
		⟦ 
			{ ⟨ Instructions T(⟦ false ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
			MOV R4,#1
			B l3
			false  MOV R4,#0
			l3
		⟧ ;

	SingleExpression(⟦ ⟨Expression#1⟩ || ⟨Expression#2⟩ ⟧)
		→ 
		⟦ 
			{ ⟨ Instructions T(⟦ false ⟧, ⟦ t ⟧, ⟦ f ⟧) ⟩ }
			MOV R4,#1
			B l3
			false  MOV R4,#0
			l3
		⟧ ;

	// ⟨Reg RegsGivenIdentifier(⟦arg⟧)⟩ 
	SingleExpression(⟦ ⟨Expression#1⟩ = ⟨Expression#2⟩ ⟧)
		→ 
		⟦ 
			{ ⟨ Instructions SingleExpression(#2) ⟩ }
			{ ⟨ Instructions SingleExpression(#1) ⟩ }
		⟧ ;

	sort Instructions
		|	scheme T(Identifier, Identifier, Identifier) ;

	T(⟦ true ⟧, ⟦ t ⟧, ⟦ f ⟧) → ⟦ B t ⟧ ;
	T(⟦ false ⟧, ⟦ t ⟧, ⟦ f ⟧) → ⟦ B f ⟧ ;

	sort Instructions
		|	scheme ArgumentIDSearching(Identifiers) ↓e ;

	ArgumentIDSearching(⟦ ⟨Identifier#1⟩ ⟧) ↓e{#1:#reg1}
		→ 
		⟦
			{MOV R0, ⟨Reg#reg1⟩}
		⟧ ;

	ArgumentIDSearching(⟦ ⟨Identifier#1⟩, ⟨Identifier#2⟩ ⟧) ↓e{#1:#reg1} ↓e{#2:#reg2}
		→ 
		⟦
			{MOV R0, ⟨Reg#reg1⟩}
			{MOV R1, ⟨Reg#reg2⟩}
		⟧ ;

	ArgumentIDSearching(⟦ ⟨Identifier#1⟩, ⟨Identifier#2⟩, ⟨Identifier#3⟩ ⟧) ↓e{#1:#reg1} ↓e{#2:#reg2} ↓e{#3:#reg3}
		→ 
		⟦
			{MOV R0, ⟨Reg#reg1⟩}
			{MOV R1, ⟨Reg#reg2⟩}
			{MOV R2, ⟨Reg#reg3⟩}
		⟧ ;

	ArgumentIDSearching(⟦ ⟨Identifier#1⟩, ⟨Identifier#2⟩, ⟨Identifier#3⟩, ⟨Identifier#4⟩ ⟧) ↓e{#1:#reg1} ↓e{#2:#reg2} ↓e{#3:#reg3} ↓e{#4:#reg4}
		→ 
		⟦
			{MOV R0, ⟨Reg#reg1⟩}
			{MOV R1, ⟨Reg#reg2⟩}
			{MOV R2, ⟨Reg#reg3⟩}
			{MOV R3, ⟨Reg#reg4⟩}
		⟧ ;

	sort Instructions
		|	scheme ArgumentIntSearching(Integers) ↓e ;

	ArgumentIntSearching(⟦ ⟨Integer#1⟩ ⟧)
		→ 
		⟦
			{MOV R0, #⟨Integer#1⟩}
		⟧ ;

	ArgumentIntSearching(⟦ ⟨Integer#1⟩, ⟨Integer#2⟩ ⟧)
		→ 
		⟦
			{MOV R0, #⟨Integer#1⟩}
			{MOV R1, #⟨Integer#2⟩}
		⟧ ;

	ArgumentIntSearching(⟦ ⟨Integer#1⟩, ⟨Integer#2⟩, ⟨Integer#3⟩ ⟧)
		→ 
		⟦
			{MOV R0, #⟨Integer#1⟩}
			{MOV R1, #⟨Integer#2⟩}
			{MOV R2, #⟨Integer#3⟩}
		⟧ ;

	ArgumentIntSearching(⟦ ⟨Integer#1⟩, ⟨Integer#2⟩, ⟨Integer#3⟩, ⟨Integer#4⟩ ⟧)
		→ 
		⟦
			{MOV R0, #⟨Integer#1⟩}
			{MOV R1, #⟨Integer#2⟩}
			{MOV R2, #⟨Integer#3⟩}
			{MOV R3, #⟨Integer#4⟩}
		⟧ ;

}