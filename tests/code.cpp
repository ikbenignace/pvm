#include <iostream>
#define P(x) std::cout << x;

struct Foo
{
};

// struct Bar {
// 	void baz(Foo) { P('a') }
// 	void baz(Foo) const { P('b') }
// 	void baz(Foo*) { P('c') }
// 	void baz(Foo*) const { P('d') }
// 	void baz(const Foo*) { P('e') }
// 	void baz(const Foo*) const { P('f') }
// };

struct Bar
{
    void baz(Foo &) { P('a') }
    void baz(Foo &) const { P('b') }
    void baz(const Foo &) { P('c') }
    void baz(const Foo &) const { P('d') }
    void baz(Foo *) { P('e') }
    void baz(Foo *) const { P('f') }
    void baz(const Foo *) { P('g') }
    void baz(const Foo *) const { P('h') }
};

int main()
{
    const Foo foo;
    Bar bar;
    bar.baz(&foo);
}
