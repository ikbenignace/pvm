#include <stdio.h>
#include <iostream>

void foo(int* x);
std::unique_ptr<int> x;

int main()
{
    foo(&x);
    foo(*x);
    foo(const x);
    foo(x&);
    foo(x);
    foo(&&x);
    foo(x) const;
    foo(x*);
    foo(**x);
    foo(&*x);
}