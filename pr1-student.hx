/*
	* Compiler Construction Fall 2014
	* Javascript with Type (.jst)
	* Abhi Mangal Agarwal (ama684@nyu.edu)
	* Keywords:
		- ⟦ ⟧ @ ⟨ ⟩ # → ( ) | & ! ;
	* Statues:
		- 2.1, 2.3, 2.6: Done
		- 2.2: None
		- 2.4: Statement 4
		- 2.5: ArgumentSignature left
*/

module "edu.nyu.cs.cc.JST" {
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
		| Letter
		| [$_] ;
	token fragment Digit
		| [0-9] ;
	token fragment Hexadecimal
		| [0-9A-F] ;
	token fragment Escapes
		| "\n"
		| [nt]
		| 'x' ⟨Hexadecimal⟩ ⟨Hexadecimal⟩
		| ['' "" \\];

	// 2.1.1: Identifier tokens: start with ⟨OtherLetter⟩ followed by more of the same as well as digits
	token Identifier
		| ⟨OtherLetter⟩ (⟨OtherLetter⟩ | ⟨Digit⟩)* ;

	// 2.1.2: Integer tokens are sequences of digits
	token Integer
		| ⟨Digit⟩+ ;

	// 2.1.3: String: sequences of characters enclosed in either ’ (single quote) or " (double quote), empty string possible
	// Does not: quote used for closing, ' or ", or backslash \, or newline. 
	token String
		| ['] ([^ '' \\ \n] | \\ ⟨Escapes⟩)* [']
		| ["] ([^ "" \\ \n] | \\ ⟨Escapes⟩)* ["] ;

	// 2.2:: Expression: non-terminal of JST is either a Literal or an Operation.
	sort Expression

	sort Literal

	// 2.3:: Type: captures the notation for structural types.
	// Types are: boolean, int, string, void or Identifier
	sort Type
		| ⟦ boolean ⟧
		| ⟦ int ⟧
		| ⟦ string ⟧
		| ⟦ void ⟧
		| ⟦ Identifier ⟧ ;

	// 2.4:: Statement: statements that are permitted by JST
	// 1. Statement: ... implies zero or more -> *
	// 2. var Type and Identifier ;
	// 3. Empty Expression or Expression by using ? (; or an Expression)
	// 4. if Expression -> Statement or if Expression -> Statement else Statement
	// 5. while Expression -> Statement
	// 6. return Expression and return together by optional +
	sort Statement
		| ⟦ ⟨Statement*⟩ ; ⟧
		| ⟦ var ⟨Type⟩ ⟨Identifier⟩ ; ⟧
		| ⟦ ⟨Expression?⟩ ; ⟧
		| ⟦ if ( ⟨Expression⟩ ) (Statement) ; ⟧
		| ⟦ while ( ⟨Expression⟩ ) (Statement) ; ⟧
		| ⟦ return ⟨Expression?⟩ ; ⟧ ;

	// 2.5:: Decleration: ClassDeclaration or a FunctionDeclaration.
	// Member form:
	sort Member
		| ⟦ ⟨Type⟩ ⟨Identifier⟩ ; ⟧
		| ⟦ ⟨Type⟩ ⟨Identifier⟩ ⟨ArgumentSignature⟩ { ⟨Statement*⟩ } ; ⟧ ;

	// Argument Signature:
	sort ArgumentSignature
		| ;

	// Class Decleration and Function Decleration
	sort Decleration
		| ⟦ class ⟨Identifier⟩ { ⟨Member*⟩ } ; ⟧
		| ⟦ function ⟨Type⟩ ⟨Identifier⟩ ⟨ArgumentSignature⟩ { ⟨Statement*⟩ } ; ⟧ ;

	// 2.6:: Program: sequence of Declerations with at least one decleration
	sort Program
		| ⟦ ⟨Decleration+⟩ ⟧ ;
}