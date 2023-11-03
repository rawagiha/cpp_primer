#include <iostream>

int main()
{   
    // char literal 
    std::cout << 'a' << std::endl;
    // wide char literal
    std::cout << L'a' << std::endl;
    // string literal
    std::cout << "a" << std::endl;
    // string wide char literal
    std::cout << L"a" << std::endl;

    //decimal
    std::cout << 10 << std::endl;
    //unsigned decimal
    std::cout << 10u << std::endl;
    //long decimal
    std::cout << 10L << std::endl;
    //unsigned long decimal 
    std::cout << 10uL << std::endl;
    //octal
    std::cout << 012 << std::endl;
    //hexadecimal
    std::cout << 0xA << std::endl;
}
