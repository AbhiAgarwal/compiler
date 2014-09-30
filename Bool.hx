module "edu.nyu.cs.cc.Bool" {

  // Syntax.
  sort B
  | ⟦ T ⟧@4 | ⟦ F ⟧@4                 // constants
  | sugar ⟦ ( ⟨B#⟩ ) ⟧@4 → B#        // parenthesis
  | ⟦ ⟨B@2⟩ | ⟨B@1⟩ ⟧@1               // disjunction
  | ⟦ ⟨B@3⟩ & ⟨B@2⟩ ⟧@2               // conjunction
  | ⟦ ! ⟨B@3⟩ ⟧@3                     // negation
  ;

  // Semantic operations.
  sort B;
  | scheme And(B,B) ;
  And(⟦T⟧, #2) → #2 ;
  And(⟦F⟧, #2) → ⟦F⟧ ;

  | scheme Or(B,B) ;
  //MISSING: rules for Or

  | scheme Not(B) ;
  Not(⟦F⟧) → ⟦T⟧ ;
  Not(⟦T⟧) → ⟦F⟧ ;

  // Propagation.
  attribute ↑b(B);
  sort B;
  ↑b;        // associate b attribute to (current) E sort

  // Evaluation scheme
  sort B;
  | scheme Evaluate(B) ;
  Evaluate(B# ↑b(#b)) → #b ;

  ⟦ ⟨B#1 ↑b(#b1)⟩ & ⟨B#2 ↑b(#b2)⟩ ⟧ ↑b( And(#b1, #b2) ) ;
  //MISSING: synthesis for |-expression.
  ⟦ ! ⟨B# ↑b(#b)⟩ ⟧ ↑b( Not(#b) ) ;
  ⟦ T ⟧ ↑b(⟦T⟧);
  ⟦ F ⟧ ↑b(⟦F⟧);
}
