#include <stdio.h>
#include <iostream>

void foo(std::unique_ptr<T> x);
const T& x;
int main()
{
    foo(&x);
    foo(*x);
    foo(const x);
    foo(x&);
    foo(x);
    foo(x) const;
    foo(&&x);
    foo(x) const;
    foo(x*);
    foo(**x);
    foo(&*x);
}