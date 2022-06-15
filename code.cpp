#include <iostream>
#define P(x) std::cout << x;

struct Foo {

};

struct Bar {
	void baz(Foo) { P('a') }
	void baz(Foo) const { P('b') }
	void baz(Foo*) { P('c') }
	void baz(Foo*) const { P('d') }
	void baz(const Foo*) { P('e') }
	void baz(const Foo*) const { P('f') }
};

int main()
{
	const Foo foo;
	const Bar bar;
	bar.baz(foo);
}
