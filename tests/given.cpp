#include <stdio.h>
#include <iostream>

void foo(const int& x);
std::shared_ptr<int> x;
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