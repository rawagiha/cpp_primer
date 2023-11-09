#include <iostream>

int main()
{
    int a = 9;
    int& b = a;

    auto c = b; // c is int
    decltype(b) d = b; // d is int&
    
    std::cout << a << " " << b << " " << c << " " << d << std::endl;
    
    ++c;
    std::cout << a << " " << b << " " << c << " " << d << std::endl;  
    
    ++d;
    std::cout << a << " " << b << " " << c << " " << d << std::endl; 
}
