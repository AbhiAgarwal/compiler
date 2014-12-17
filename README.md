compiler
========

Compiler Construction labs:

The descriptions, and percentages are made up by me. The three labs are worth 45% so it's my prediction.

1. Project 1 (15%): Lexical analysis, Top-down syntax analysis in HACS (v0.9.0)
2. Project 2a (10%): Outling Syntax-directed translation (SDT), Name analysis, Type analysis
3. Project 2b (5%): Implementing 2a into HACS (v0.9.5)
4. Project 3 (15%): Direct code generator - ARM32 assembly subset

Compiler Construction homework:
	- There are 11 homeworks that I have done.
	- https://github.com/AbhiAgarwal/classes/tree/master/Compiler%20Construction

There is a Sublime Text page for HACS:
	- https://github.com/tpalsulich/hacs_sublime_text_theme

Sample code for Project 3

```
function int div(int nominator, int divisor) {
  // Extract sign of result.
  var int sign;
  sign = 1;
  if (nominator < 0) {
    nominator = -nominator;
    sign = - sign;
  }
  if (divisor < 0) {
    divisor = -divisor;
    sign = -sign;
  }

  // Accumulate result.
  var int result;
  result = 0;

  // The highest value that we cannot safely multiply by 2 is 2^30
  var int halfmax;
  halfmax = 1073741824;

  // Find result by binary long division.
  while (nominator >= divisor) {

    // Find largest factor = 2^n such that factor*divisor <= nominator
    var int factor;
    var int product; // factor*divisor
    factor = 1;
    product = divisor;
    while (product < halfmax && product*2 <= nominator) {
      factor = factor*2;
      product = product*2;
    }
    
    // Record finding in result and reduce problem.
    nominator = nominator - product;
    result = result + factor;
  }
  
  return sign * result;
}
```