compiler
========

My compiler construction project repository. This will be trying to create a simpler compiler for a JST language: Javascript with Type (.jst).

This build blocks out `Cook.dr` so you must re-build it yourself. You can also install a fresh version of hacs (http://crsx.org/hacs-0-8-nyu2.zip)

To run on debian:

1. `apt-get install openjdk-7-jdk`
2. `update-alternatives --config java`
3. `apt-get install javacc`
4. `apt-get install libicu-dev`
5. `apt-get install flex`
6. Check in `Makefile` if your setup is correct.

```
class Greeter {
	string greeting;
		void set(string g) {
		this.greeting = g;
	}
	string greet() {
		return "Hello, " + this.greeting + "!";
	}
}
function string main() {
	var Greeter g;
	g = new Greeter();
	g.set("World");
	return g.greet();
}
```
