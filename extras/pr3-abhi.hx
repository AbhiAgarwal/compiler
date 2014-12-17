// ##################
	// Handling Declerations of Functions: D
	Compile(⟦ function ⟨Type#t⟩ ⟨Identifier#i⟩ ⟨ArgumentSignature#as⟩ { ⟨Statements#s⟩ } ⟧)
		→ ⟦ D ⟨Type#t⟩ ⟨Identifier#i⟩ ⟨ArgumentSignature#as⟩ { ⟨Statements#s⟩ } ⟧ ;

	// Now looking through the function. We know it's a decleration now.
	sort Instructions
		|	scheme ⟦ D ⟨Type⟩ ⟨Identifier⟩ ⟨ArgumentSignature⟩ { ⟨Statements⟩ } ⟧ ;

	// Empty ArgumentSignature
	⟦ D ⟨Type#t⟩ ⟨Identifier#i⟩ ( ) { ⟨Statements#s⟩ } ⟧
		→ ⟦ ⟧ ;

	// With ArgumentSignature present
	// Here we are opening up the bracket so allo for ArgumentSignature to begin handling
	⟦ D ⟨Type#t⟩ ⟨Identifier#i⟩ ( ⟨ArgumentSignature#as⟩ ⟧
		→ ⟦ A ⟨Type#t⟩ ⟨Identifier#i⟩ ⟨ArgumentSignature#as⟩ { ⟨Statements#s⟩ } ⟧ ;

	// ##################
	// Handling Arguments: A
	sort Instructions
		|	scheme ⟦ A ⟨Type⟩ ⟨Identifier⟩ ⟨ArgumentSignature⟩ ⟧ ;

	⟦ A ⟨Type#t⟩ ⟨Identifier#i⟩ ⟨ArgumentSignature#as⟩ ⟧
		→ ⟦ ⟧ ;

	// ##################
	// Handling Expressions: E
	sort Instructions
		|	scheme ⟦ E ⟨Expression⟩ ⟧ ↓idToReg ;

	⟦ E ⟨Expression#1⟩  ⟨Expression#2⟩ ⟧
		→ ⟦ ⟧;

	⟦ E ⟨Expression#1⟩ ( ) ⟧
		→ ⟦ ⟧;
	
	⟦ E ⟨Expression#1⟩ ( ⟨Expression#1⟩ ) ⟧
		→ ⟦ ⟧;

	⟦ E ! ⟨Expression#1⟩ ⟧
		→ ⟦ ⟧;

	⟦ E - ⟨Expression#1⟩ ⟧
		→ ⟦ ⟧;

	⟦ E + ⟨Expression#1⟩ ⟧
		→ ⟦ ⟧;

	⟦ E ⟨Expression#1⟩ * ⟨Expression#2⟩ ⟧
		→ ⟦ MOV R0, R0 ⟧ ;

	⟦ E ⟨Expression#1⟩ + ⟨Expression#2⟩ ⟧
		→ ⟦ 
			ADD
		⟧;

	⟦ E ⟨Expression#1⟩ - ⟨Expression#2⟩ ⟧
		→ ⟦ 
			SUB
		⟧;

	⟦ E ⟨Expression#1⟩ < ⟨Expression#2⟩ ⟧
		→ ⟦ ⟧;

	⟦ E ⟨Expression#1⟩ > ⟨Expression#2⟩ ⟧
		→ ⟦ ⟧;

	⟦ E ⟨Expression#1⟩ <= ⟨Expression#2⟩ ⟧
		→ ⟦ ⟧;

	⟦ E ⟨Expression#1⟩ >= ⟨Expression#2⟩ ⟧
		→ ⟦ ⟧;

	⟦ E ⟨Expression#1⟩ == ⟨Expression#2⟩ ⟧
		→ ⟦ ⟧;

	⟦ E ⟨Expression#1⟩ != ⟨Expression#2⟩ ⟧
		→ ⟦ ⟧;

	⟦ E ⟨Expression#1⟩ && ⟨Expression#2⟩ ⟧
		→ ⟦ ⟧;

	⟦ E ⟨Expression#1⟩ || ⟨Expression#2⟩ ⟧
		→ ⟦ ⟧;

	⟦ E ⟨Expression#1⟩ = ⟨Expression#2⟩ ⟧
		→ ⟦ ⟧;