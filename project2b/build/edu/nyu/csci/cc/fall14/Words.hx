module edu.nyu.csci.cc.fall14.Words {

	// Simple word membership query.
	main sort Query 
		| ⟦ ⟨WORD⟩ in ⟨List⟩ ⟧ ;

	sort List
		| ⟦ ⟨WORD⟩, ⟨List⟩ ⟧
		| ⟦ ⟨WORD⟩ ⟧ ;

	token WORD
		| [A-Za-z0-9]+ ;

	// Helper 'list' data structure sort to collect words.
	sort Words
		| MoreWords(WORD, Words)
		| NoWords ;

	// Snythesize helper list that collects all the words in the list.
	attribute ↑z(Words);
	sort List
		| ↑z;
	⟦ ⟨WORD#w⟩, ⟨List#ws ↑z(#zs)⟩ ⟧↑z(MoreWords(#w, #zs));
	⟦ ⟨WORD#w⟩ ⟧↑z(MoreWords(#w, NoWords));

	// We'll provide the answer in clear text
	sort Answer
		| ⟦Yes, the list contains ⟨WORD⟩.⟧
		| ⟦No, the list does not contain ⟨WORD⟩.⟧ ;

	// Helper scheme to check if a word is in a (helper) list.
	sort Answer
		| scheme CheckMember(WORD, Words) ;

	// If the word and the first member of the list are the same, then we succeed!
	CheckMember(#w, MoreWords(#w, #zs)) → ⟦Yes, the list contains ⟨WORD#w⟩.⟧;

	CheckMember(#w, NoWords) → ⟦No, the list does not contain ⟨WORD#w⟩.⟧ ;

	// If the word was not the same, fall back to a default recursive case
	default CheckMember(#w, MoreWords(#z, #zs)) → CheckMember(#w, #zs) ;

	sort Answer
		| scheme Check(Query) ;

	Check( ⟦⟨WORD#w⟩ in ⟨List#ws ↑z(#zs)⟩⟧ ) → CheckMember(#w, #zs) ;
}
