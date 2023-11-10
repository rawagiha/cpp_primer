#include <iostream>

struct Foo {};

int main()
{
    std::cout << "if forget ; " << std::endl; 
    std::cout << "expected ‘;’ after struct definition" << std::endl;

    return 0;
}
