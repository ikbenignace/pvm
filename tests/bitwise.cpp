#include <stdio.h>
#include <iostream>

int main()
{
    int x = 0x12345678 | 0xD000000;
    std::cout << std::hex << x;
    return 0;
}