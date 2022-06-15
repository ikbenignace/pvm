#include <iostream>
#define P(x) std::cout << x;

struct Foo
{
    Foo() { P('a'); }
    Foo(const Foo &) { P('b'); }
    ~Foo() { P('c'); }
};

// Foo* bar(Foo& foo) {
//     return &foo;
// };

// Foo* bar(Foo* foo) {
//     return foo;
// };


// Foo& bar(Foo foo) {
//     return foo;
// };

void bar(Foo* foo) {}

//void bar() {Foo foo;}

int main()

{
    P('[');
    Foo* p = new Foo;
    bar(p);
    P(']');
}

// void bar(Foo *foo){};

// void bar() {
//     Foo foo;
// }

// int main()
//
//{
//     P('[');
//     Foo foo;
//     bar(&foo);
//     //Foo foo;
//     //Foo foo;
//     //Foo* p = bar(foo);
//     P(']');
// }