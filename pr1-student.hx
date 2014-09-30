/*
	* Compiler Construction Fall 2014
	* Javascript with Type (.jst)
	* Abhi Mangal Agarwal (ama684@nyu.edu)
	* Keywords:
		⟦ ⟧ @ ⟨ ⟩ # → ( ) | & ! ;

*/

module "edu.nyu.cs.cc.JST" {
	// 2.1: Lexial grammar of JST 
	// Identifier tokens: start with ⟨OtherLetter⟩ followed by more of the same as well as digits
	// Letter: A-Z or a-z, OtherLetter: $ or _, Digit 0-9

	token fragment Letter
		| [A-Za-z] ;
	token fragment OtherLetter
		| Letter 
		| [$_] ;
	token fragment Digit
		| [0-9] ;
	token Identifier
		| ⟨OtherLetter⟩ (⟨OtherLetter⟩ | ⟨Digit⟩)* ;

	// Integer tokens are sequences of digits
	// Including both Digit and Decimal
	// Digit: 0-9, Decimal Number: Digit+ '.' Digit+

	token Decimal
		| ⟨Digit⟩+ '.' + ⟨Digit⟩+ ;

	// String: sequences of characters enclosed in either ’ (single quote) or " (double quote)
	// ['] means: one character position once and only once
	// Empty string is a possibility
	token String 
		| ['] ⟨Letter⟩+ [']
		| ["] ⟨Letter⟩+ ["] ;

	sort Type
		| ⟦ boolean ⟧
		| ⟦ int ⟧
		| ⟦ string ⟧
		| ⟦ void ⟧
		| ⟦ Identifier ⟧ ;

}