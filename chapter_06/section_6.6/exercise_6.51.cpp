#include <iostream>

void f()
{
    std::cout << "version 1 called" << std::endl;
}

void f(int i)
{
    std::cout << "version 2 called" << std::endl;
}

void f(int i, int j)
{
    std::cout << "version 3 called" << std::endl;
}

void f(double x, double y = 3.14)
{
    std::cout << "version 4 called" << std::endl;
}

int main()
{
    //f(2.56, 42); ambiguous
    f(42);
    f(42, 0);
    f(2.56, 3.14);
}
