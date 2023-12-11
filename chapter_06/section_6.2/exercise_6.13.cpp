#include <iostream>

void f(int i)
{
    i += 7;
}

void f2(int& i)
{
    i += 7;    
}

int main()
{
    int i = 1;
    
    f(i);
    std::cout << i << std::endl;
    
    f2(i);
    std::cout << i << std::endl;
}
