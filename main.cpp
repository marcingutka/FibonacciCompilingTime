#include <iostream>
#include "main.hpp"

int main()
{
    const int liczba = 6;

    std::cout<<liczba<<" liczba Fibonacciego to: "<<Fib<liczba>::value<<'\n';

    return 0;
}
