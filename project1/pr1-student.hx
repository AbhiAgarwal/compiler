/*
	* Compiler Construction Fall 2014
	* Javascript with Type (.jst)
	* Abhi Mangal Agarwal (ama684@nyu.edu)
	* Keywords:
		- ⟦ ⟧ @ ⟨ ⟩ # → ( ) | & ! ;
	* Statues:
		- 2.1, 2.3, 2.4, 2.5, 2.6, 2.4: Done
		- 2.2 and Comments: Not Completely Done
*/

module "edu.nyu.cs.cc.JST" {
	// Comments of two forms are ignored - referencing number 11 of HX2 Handout
	// Not allowed to use nested, and . is [^\n]
	// Using the observation that longer one should be first - /* */ before //
	// the // comment is just '//' then [^\n]*
	// the /* */ comment is just '/*'
	space [ \t\n\r]
		  |'//' [^\\n]*
		  |'/*' ([^*])* '*/' ;
	/*
		* 2.1: Lexial grammar of JST
		* Tokens -> Letter: A-Z or a-z,
		* OtherLetter: $ or _, Digit: 0-9,
		* Hex: 0-9 or A-F
		* Escapes:
			- newline,
			- single nt,
			- x followed by 2 hex digits,
			- one of the characters '' "" \\ stands for that character
	*/
	token fragment Letter
		| [A-Za-z] ;
	token fragment OtherLetter
		| ⟨Letter⟩
		| [$_] ;
	token fragment Digit
		| [0-9] ;
	token fragment Hexadecimal
		| [0-9A-F] ;
	token fragment Escapes
		| "\n"
		| [nt]
		| "x" ⟨Hexadecimal⟩ ⟨Hexadecimal⟩
		| ['"\\] ;

	// 2.1.1: Identifier tokens: start with ⟨OtherLetter⟩ followed by more of the same as well as digits
	token Identifier
		| ⟨OtherLetter⟩ (⟨OtherLetter⟩ | ⟨Digit⟩)* ;

	// 2.1.2: Integer tokens are sequences of digits
	token Integer
		| ⟨Digit⟩+ ;

	/*
		* 2.1.3: String: sequences of characters enclosed in either ’ (single quote) or " (double quote), empty string possible
		* Any character but: quote used for closing, ' or ", or backslash \, or newline. 
		* If the first character is ^ then the character class is negated
		* I've given them in order of how they are described on the sheet
	*/
	token String
		| ['] ([^'\\\\n] | \\ ⟨Escapes⟩)* [']
		| ["] ([^"\\\\n] | \\ ⟨Escapes⟩)* ["] ;

	// 2.2:
	// literalTwoKey: Key is an Identifier
	// eachLiteraltwo: key, which is an Identifier and Literal
	// LiteralOne: Integer or String;
	// LiteralTwo: an object literal {k1:Literal1, . . . ,kn:Literaln} for n ≥ 1 with each key ki an Identifier (also called “field name”).
	// Literal: Integer or String or an object literal

	sort EachLiteralTwo
		| ⟦ ⟨Identifier⟩ : ⟨Literal⟩ ⟧ ;

	sort LiteralOne
		| ⟦ ⟨Integer⟩ ⟧
		| ⟦ ⟨String⟩ ⟧ ;

	sort LiteralTwo
		| ⟦ { ⟨EachLiteralTwo+⟩ } ⟧ ;

	sort Literal
		| ⟦ ⟨LiteralOne⟩ ⟧
		| ⟦ ⟨LiteralTwo⟩ ⟧ ;

	// Expression: non-terminal of JST is either a Literal or an Operation.
	// 	- Higher numbers indicate higher precedence
	sort E
		| ⟦ ⟨E@1⟩ , ⟨E⟩ ⟧
		| ⟦ ⟨E@2⟩ += ⟨E@1⟩ ⟧@1
		| ⟦ ⟨E@2⟩ = ⟨LiteralTwo⟩ ⟧@1
		| ⟦ ⟨E@2⟩ = ⟨E@1⟩ ⟧@1
		| ⟦ ⟨E@2⟩ || ⟨E@3⟩ ⟧@2
		| ⟦ ⟨E@3⟩ && ⟨E@4⟩ ⟧@3
		| ⟦ ⟨E@5⟩ == ⟨E@5⟩ ⟧@4
		| ⟦ ⟨E@5⟩ != ⟨E@5⟩ ⟧@4
		| ⟦ ⟨E@6⟩ < ⟨E@6⟩ ⟧@5
		| ⟦ ⟨E@6⟩ > ⟨E@6⟩ ⟧@5
		| ⟦ ⟨E@6⟩ <= ⟨E@6⟩ ⟧@5
		| ⟦ ⟨E@6⟩ >= ⟨E@6⟩ ⟧@5
		| ⟦ ⟨E@6⟩ + ⟨E@7⟩ ⟧@6
		| ⟦ ⟨E@6⟩ - ⟨E@7⟩ ⟧@6
		| ⟦ ⟨E@7⟩ * ⟨E@8⟩ ⟧@7
		| ⟦ ⟨E@7⟩ / ⟨E@8⟩ ⟧@7
		| ⟦ ⟨E@7⟩ % ⟨E@8⟩ ⟧@7
		| ⟦ ! ⟨E@8⟩ ⟧@8
		| ⟦ ~ ⟨E@8⟩ ⟧@8
		| ⟦ + ⟨E@8⟩ ⟧@8
		| ⟦ ⟨E@9⟩ . ⟨Identifier⟩ ⟧@9
		| ⟦ ⟨E@9⟩ ( ) ⟧@9
		| ⟦ ⟨E@9⟩ ( ⟨E⟩ ) ⟧@9
		| sugar⟦( ⟨E#exp⟩ )⟧@10 → #exp
		| ⟦ ⟨LiteralOne⟩ ⟧@10
		| ⟦ ⟨Identifier⟩ ⟧@10
		| ⟦ this ⟧@10
		| ⟦ new ⟨Identifier⟩ ( ) ⟧@10 ;

	// 2.3:: Type: captures the notation for structural types.
	// Types are: boolean, int, string, void or Identifier
	sort Type
		| ⟦ boolean ⟧
		| ⟦ int ⟧
		| ⟦ string ⟧
		| ⟦ void ⟧
		| ⟦ ⟨Identifier⟩ ⟧ ;

	/*
		* 2.4:: Statement: statements that are permitted by JST
		* 1. Statement: ... implies zero or more -> *
		* 2. var Type and Identifier ;
		* 3. Empty Expression or Expression by using ? (; or an Expression)
		* 4. if Expression -> Statement or if Expression -> Statement else Statement
		* 5. while Expression -> Statement
		* 6. return Expression and return together by optional +
	*/
	sort Statement
		| ⟦ { ⟨Statement*⟩ } ⟧
		| ⟦ var ⟨Type⟩ ⟨Identifier⟩ ; ⟧
		| ⟦ ⟨E?⟩ ; ⟧
		| ⟦ if( ⟨E⟩ ) ⟨Statement⟩ else ⟨Statement⟩ ; ⟧
		| ⟦ if( ⟨E⟩ ) ⟨Statement⟩ ; ⟧
		| ⟦ while ( ⟨E⟩ ) ⟨Statement⟩ ; ⟧
		| ⟦ return ⟨E?⟩ ; ⟧ ;

	// 2.5:: Decleration: ClassDeclaration or a FunctionDeclaration.
	// Important to structure it this way or it doesn't work.
	// Argument Signature:
	sort SingleArgumentTypes
		|  ⟦ ⟨Type⟩ ⟨Identifier⟩ ⟧ ;
	sort ArgumenetTypes
		| ⟦ ⟨SingleArgumentTypes⟩ , ⟨ArgumenetTypes⟩ ⟧
		| ⟦ ⟨SingleArgumentTypes⟩ ⟧ ;
	sort ArgumentSignature
		| ⟦ (⟨ArgumenetTypes?⟩) ⟧ ;

	// Member form:
	sort Member
		| ⟦ ⟨Type⟩ ⟨Identifier⟩ ⟨ArgumentSignature⟩ { ⟨Statement*⟩ } ⟧
		| ⟦ ⟨Type⟩ ⟨Identifier⟩ ; ⟧ ;

	// Decleration: Class Decleration or Function Decleration
	sort Decleration
		| ⟦ class ⟨Identifier⟩ { ⟨Member*⟩ } ⟧
		| ⟦ function ⟨Type⟩ ⟨Identifier⟩ ⟨ArgumentSignature⟩ { ⟨Statement*⟩ } ⟧ ;

	// 2.6:: Program: sequence of Declerations with at least one decleration
	sort Program
		| ⟦ ⟨Decleration+⟩ ⟧ ;
}