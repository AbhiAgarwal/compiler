// [NYU Courant Institute] Compiler Construction/Fall 2014/Project Milestone 2
//
// Base parser.
//
// All references are to the problem text,
// http://cs.nyu.edu/courses/fall14/CSCI-GA.2130-001/pr2/pr2.pdf

module edu.nyu.csci.cc.fall14.Pr2Base {

// PROGRAM
sort Program
	|	⟦ ⟨Declarations⟩ ⟧ ;

// DECLARATIONS
sort Declarations
	|	⟦ ⟨Declaration⟩ ⟨Declarations⟩ ⟧
	|	⟦⟧ ;

sort Declaration
	|	⟦ class ⟨Identifier⟩ { ⟨Members⟩ } ⟧
	|	⟦ function ⟨Type⟩ ⟨Identifier⟩ ⟨ArgumentSignature⟩ { ⟨Statements⟩ } ⟧ ;

sort Members
	|	⟦ ⟨Member⟩ ⟨Members⟩ ⟧
	|	⟦⟧ ;

sort Member
	|	⟦ ⟨Type⟩ ⟨Identifier⟩ ; ⟧
	|	⟦ ⟨Type⟩ ⟨Identifier⟩ ⟨ArgumentSignature⟩ { ⟨Statements⟩ } ⟧ ;

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
	|	⟦ int ⟧
	|	⟦ string ⟧
	|	⟦ void ⟧
	|	⟦ ⟨Identifier⟩ ⟧ ;

// EXPRESSIONS
sort Expression
	|	sugar ⟦ ( ⟨Expression#e⟩ ) ⟧@10 → #e

	|	⟦ ⟨SimpleLiteral⟩ ⟧@10
	|	⟦ ⟨Identifier⟩ ⟧@10
	|	⟦ this ⟧@10

	|	⟦ ⟨Expression@9⟩ ( ⟨Expression⟩ ) ⟧@9
	|	⟦ ⟨Expression@9⟩ ( ) ⟧@9
	|	⟦ ⟨Expression@9⟩ . ⟨Identifier⟩ ⟧@9

	|	⟦ ! ⟨Expression@8⟩ ⟧@8
	|	⟦ - ⟨Expression@8⟩ ⟧@8
	|	⟦ + ⟨Expression@8⟩ ⟧@8

	|	⟦ ⟨Expression@7⟩ * ⟨Expression@8⟩ ⟧@7
	|	⟦ ⟨Expression@7⟩ / ⟨Expression@8⟩ ⟧@7
	|	⟦ ⟨Expression@7⟩ % ⟨Expression@8⟩ ⟧@7

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
	|	⟦ ⟨Expression@2⟩ = ⟨ObjectLiteral⟩ ⟧@1
	|	⟦ ⟨Expression@2⟩ += ⟨Expression@1⟩ ⟧@1

	|	⟦ ⟨Expression@1⟩ , ⟨Expression⟩ ⟧ ;

sort Literal
	|	⟦ ⟨SimpleLiteral⟩ ⟧
	|	⟦ ⟨ObjectLiteral⟩ ⟧ ;

sort SimpleLiteral
	|	⟦ ⟨String⟩ ⟧
	|	⟦ ⟨Integer⟩ ⟧ ;

sort ObjectLiteral
	|	⟦ { } ⟧
	|	⟦ { ⟨KeyValue⟩ ⟨KeyValueTail⟩ } ⟧ ;

sort KeyValueTail   
	|	⟦ , ⟨KeyValue⟩ ⟨KeyValueTail⟩ ⟧
	|	⟦ ⟧ ;

sort KeyValue
	|	⟦ ⟨Identifier⟩ : ⟨Literal⟩ ⟧ ;

// LEXICAL CONVENTIONS
space [ \t\n\r]
	|	'//' [^\n]*
	|	'/*' ( [^*]
	|	'*' [^/] )* '*/' ;

token Identifier
	|	⟨LetterEtc⟩ (⟨LetterEtc⟩
	|	⟨Digit⟩)* ;

token Integer
	|	⟨Digit⟩+ ;

token String
	|	\' ( [^\'\\\n] | \\ ⟨Escape⟩ )* \'
	|	\" ( [^\"\\\n] | \\ ⟨Escape⟩ )* \" ;

token fragment Letter
	|	[A-Za-z] ;
token fragment LetterEtc
	|	⟨Letter⟩
	|	[$_] ;
token fragment Digit
	|	[0-9] ;

token fragment Escape
	|	"\n"
	|	\'
	|	\"
	|	\\
	|	[nt]
	|	'x' ⟨Hex⟩ ⟨Hex⟩ ;

token fragment Hex
	|	[0-9A-Fa-f] ;

// 1.1, 1.2 is covered
// 1.3 - Implementing a map

// TYPES
sort Boolean
	| True
	| False
	| TypeError
	| scheme SameType(Type,Type) ;

// To see if the types are the same
SameType(⟦int⟧, ⟦int⟧) → True ;
SameType(⟦string⟧, ⟦string⟧) → True ;
SameType(⟦boolean⟧, ⟦boolean⟧) → True ;
default SameType(#1,#2) → TypeError ;

// MAP DECLAREATION
sort Name
	|	symbol ⟦ ⟨Identifier⟩ ⟧ ;

sort MAP
	|	Map(Name, Type)

sort Maps
	|	MoreMaps(MAP, Maps)
	|	NoMaps ;

sort Type
	|	scheme Lookup(Maps, Name) 
	|	TypeError ;

Lookup(NoMaps, #Name) → TypeError ;
Lookup(MoreMaps(Map(#Name, #Type), #Maps), #Name) → #Type ;
default Lookup(MoreMaps(Map(#Name1, #Type), #Maps), #Name2) → Lookup(#Maps, #Name2) ;


attribute ↑dl(Maps);


attribute ↑ok();

attribute ↑t(Type);
sort Expression | ↑t;
⟦⟨Expression#1 ↑t(#t1)⟩ + ⟨Expression#2 ↑t(#t2)⟩⟧↑t(SameType(#t1,#t2)) ;




attribute ↓e{Name:Type};
sort Expression | scheme Ee(Expression) ↓e ;
Ee(⟦Identifier⟧) ↓e{⟦Identifier⟧ : #t} → ⟦Identifier⟧ ↑t(#t) ;
Ee(⟦Identifier⟧) ↓e{¬⟦Identifier⟧} → error ⟦Undefined identifier ⟨Identifier⟩⟧ ;

Ee(⟦⟨Expression#1⟩ + ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) + ⟨Expression Ee(#2))⟧ ↑#syn;




sort Statement | scheme Se(S) ↓e | scheme SeB(S) ↓e ;



// Dummy scheme to avoid 0.9.0 bug.
sort Program | scheme Compile(Program);
Compile(#) → #;

}