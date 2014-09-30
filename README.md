compiler
========

My compiler construction project repository. This will be trying to create a simpler compiler for a JST language: Javascript with Type (.jst).

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
