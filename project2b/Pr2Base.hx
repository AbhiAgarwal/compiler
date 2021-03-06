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
	space [ \t\n\r] | '//' [^\n]* | '/*' ( [^*] | '*' [^/] )* '*/'  ;

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
	// 1.3

	sort TrueFalse
		|	⟦True⟧
		|	⟦False⟧

	// TYPES
	sort Boolean
		|	⟦True⟧
		|	⟦False⟧
		|	TypeError
		|	scheme CheckOk(TrueFalse)
		|	scheme SingleIntType(Type)
		|	scheme SingleBooleanType(Type)
		|	scheme SameType(Type, Type)
		|	scheme SameNoVoid(Type, Type)
		|	scheme IntType(Type, Type)
		|	scheme BooleanType(Type, Type)
		|	scheme StingIntType(Type, Type)
		|	scheme IsIdentifier(Type)
		|	scheme checkIfInt(Type)
		|	scheme checkIfString(Type)
		|	scheme IsAny(Type,Type) ;

	CheckOk(⟦True⟧) → ⟦True⟧ ;
	CheckOk(⟦False⟧) → error ⟦Type Error⟧ ;

	SingleBooleanType(⟦boolean⟧) → ⟦True⟧ ;
	default SingleBooleanType(#) → TypeError ;

	SingleIntType(⟦int⟧) → ⟦True⟧ ;
	default SingleIntType(#) → TypeError ;

	// To see if the types are the same
	SameType(#, #) → ⟦True⟧ ;
	default SameType(#1, #2) → TypeError ;

	SameNoVoid(⟦void⟧, ⟦void⟧) → TypeError ;
	SameNoVoid(⟦void⟧, #2) → TypeError ;
	SameNoVoid(#1, ⟦void⟧) → TypeError ;
	SameNoVoid(#, #) → ⟦True⟧ ;
	default SameNoVoid(#1, #2) → TypeError ;

	IntType(⟦int⟧, ⟦int⟧) → ⟦True⟧ ;
	default IntType(#1, #2) → TypeError ;

	default checkIfInt(⟦int⟧) → ⟦True⟧ ;
	default checkIfString(⟦string⟧) → ⟦True⟧ ;

	BooleanType(⟦boolean⟧, ⟦boolean⟧) → ⟦True⟧ ;
	default BooleanType(#1, #2) → TypeError ;

	StingIntType(⟦string⟧, ⟦string⟧) → ⟦True⟧ ;
	StingIntType(⟦int⟧, ⟦int⟧) → ⟦True⟧ ;
	default StingIntType(#1, #2) → TypeError ;

	IsIdentifier(⟨Identifier⟩) → True ;
	default IsIdentifier(#1) → TypeError ;

	IsAny(any, #2) → ⟦True⟧ ;
	IsAny(#1, any) → ⟦True⟧ ;
	default IsAny(#1) → TypeError ;

	// MAP DECLAREATION
	sort Name
		|	symbol ⟦ ⟨Identifier⟩ ⟧ ;

	sort TD
		|	Type
		|	⟦ Class ⟧ ( ⟨Members⟩ )
		|	⟦ Call ⟧ ⟨Type⟩ ⟨ArgumentSignature⟩
		|	TypeError ;

	sort Map
		|	Map(Name, TD)

	sort Maps
		|	MoreMaps(Map, Maps)
		|	NoMaps ;

	sort Type
		|	⟦True⟧
		|	⟦False⟧
		|	scheme Defined(Maps, Name)
		|	scheme Lookup(Maps, Name)
		|	scheme Extend(Maps, Name, Type)
		|	scheme AssignCompat(Maps, Type, Type)
		|	scheme If(b, x, y)
		|	TypeError ;

	// whether m has a value for key k
	Defined(NoMaps, #Name) → ⟦False⟧ ;
	Defined(MoreMaps(Map(#Name, #Type), #Maps), #Name) → ⟦True⟧ ;
	default Defined(MoreMaps(Map(#Name1, #Type), #Maps), #Name2) → Defined(#Maps, #Name2) ;

	// the value v that m has for key k, or default to error
	Lookup(NoMaps, #Name) → TypeError ;
	Lookup(MoreMaps(Map(#Name, #Type), #Maps), #Name) → #Type ;
	default Lookup(MoreMaps(Map(#Name1, #Type), #Maps), #Name2) → Lookup(#Maps, #Name2) ;

	// a new map which adds the mapping k → v to those of m
	default Extend(#Maps, #Name, #Type) → MoreMaps(Map(#Name, #Type), #Maps) ;

	// Assignment Compatible
	AssignCompat(#Maps, #Type1, #Type2) → SameNoVoid(#Type1, #Type2) ;
	AssignCompat(#Maps, #Type1, #Type2) → IsAny(#Type1, #Type2) ;
	AssignCompat(NoMaps, #Type1, #Type2) → TypeError ;

	// If Statement
	If(#b, ⟦True⟧, #y) → ⟦True⟧ ;
	If(#b, ⟦False⟧, #y) → ⟦False⟧ ;
	default If(#b, #x, #y) → If(#b, ⟨Expression #x⟩ ,#y) ;

	attribute ↑dl(Maps);
	attribute ↑ok(Boolean);
	attribute ↑t(Type);

	sort Expression
		|	↑ok
		|	↑t ;

	// Single Boolean
	⟦ ! ⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ ⟧↑ok(SingleBooleanType(#t1)) ↑t(#1) ;

	// Single Integer
	⟦ - ⟨Expression#1 ↑ok(#t1)⟩ ↑t(#t1) ⟧↑ok(SingleIntType(#t1)) ↑t(#1) ;
	⟦ + ⟨Expression#1 ↑ok(#t1)⟩ ↑t(#t1) ⟧↑ok(SingleIntType(#t1)) ↑t(#1) ;

	// Integer Only
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ * ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(IntType(#t1,#t2)) ↑t(#1) ;
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ / ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(IntType(#t1,#t2)) ↑t(#1) ;
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ % ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(IntType(#t1,#t2)) ↑t(#1) ;

	// Integer or String
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ + ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(StingIntType(#t1,#t2)) ↑t(#1) ;

	// Integer Only
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ - ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(IntType(#t1,#t2)) ↑t(#1) ;
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ < ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(IntType(#t1,#t2)) ↑t(#1) ;
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ > ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(IntType(#t1,#t2)) ↑t(#1) ;
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ <= ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(IntType(#t1,#t2)) ↑t(#1) ;
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ >= ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(IntType(#t1,#t2)) ↑t(#1) ;

	// Same Types
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ == ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(SameType(#t1,#t2)) ↑t(⟦boolean⟧) ;

	// Boolean Only
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ && ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(BooleanType(#t1,#t2)) ↑t(#1) ;
	⟦⟨Expression#1 ↑ok(#t1) ↑t(#t1)⟩ || ⟨Expression#2 ↑ok(#t2) ↑t(#t2)⟩⟧↑ok(BooleanType(#t1,#t2)) ↑t(#1) ;

	// LValue

	sort Literal
		|	↑ok ;

	⟦ ⟨SimpleLiteral⟩ ⟧ ;
	⟦ ⟨ObjectLiteral⟩ ⟧ ;

	SimpleLiteral
		|	↑ok 
		|	↑t ;

	⟦ ⟨String ↑ok(#t1)⟩ ⟧↑ok(checkIfInt(#t1)) ↑t(#1) ;
	⟦ ⟨Integer ↑ok(#t1)⟩ ⟧↑ok(checkIfString(#t1)) ↑t(#1) ;

	sort ObjectLiteral
		|	↑ok ;

	⟦ { } ⟧ ;
	⟦ { ⟨KeyValue⟩ ⟨KeyValueTail⟩ } ⟧ ;

	KeyValueTail
		|	↑ok ;

	⟦ , ⟨KeyValue⟩ ⟨KeyValueTail⟩ ⟧ ;
	⟦ ⟧ ;

	KeyValue
		|	↑ok 
		|	↑keyValue ;

	attribute ↑keyValue(Map) ;
	⟦ ⟨Identifier#1⟩ : ⟨Literal#2⟩ ⟧↑keyValue(Map(#1, #2)) ;

	attribute ↓e(Maps) ;
	sort Expression
		|	scheme Ee(Expression) ↓e ;

	Ee(⟦Identifier⟧) ↓e{⟦Identifier⟧ : #t} → ⟦Identifier⟧ ↑t(#t) ;
	Ee(⟦Identifier⟧) ↓e{¬⟦Identifier⟧} → error ⟦Undefined identifier ⟨Identifier⟩⟧ ;

	Ee(⟦⟨Expression#1⟩ * ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) * ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ / ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) / ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ % ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) % ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ + ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) + ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ - ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) - ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ < ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) < ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ > ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) > ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ <= ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) <= ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ >= ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) >= ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ == ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) == ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ && ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) && ⟨Expression Ee(#2))⟧ ↑#syn ;
	Ee(⟦⟨Expression#1⟩ || ⟨Expression#2⟩⟧ ↑#syn) → ⟦⟨Expression Ee(#1)) || ⟨Expression Ee(#2))⟧ ↑#syn ;

	// Statement
	sort Statement
		|	scheme Se(S) ↓e
		|	scheme SeB(S) ↓e ;

	Se(⟦var ⟨Type#1⟩ ⟨Identifier#1⟩ ; ↑#syn⟧) → SeB() ;
	Se(⟨Expression⟩ ; ↑#syn⟧) → SeB() ;
	Se(⟦if ( ⟨Expression⟩ ) ⟨IfTail⟩ ⟧) → SeB() ;
	Se(⟦while ( ⟨Expression⟩ ) ⟨Statement⟩ ⟧) → SeB() ;
	Se(⟦return ⟨Expression⟩ ; ⟧) → SeB() ;
	Se(⟦return ; ⟧) → SeB() ;

	// Dummy scheme to avoid 0.9.0 bug.
	sort Program
		|	scheme D(Program) ↓e
		|	scheme S(Program) ↓e ;

}