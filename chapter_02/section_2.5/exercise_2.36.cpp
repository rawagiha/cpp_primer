#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a; // c int init with a
    decltype((b)) d = a; // d int& initi with a
    
    std::cout << a << " " << b << " " << c << " " << d << std::endl;
    
    ++c; 
    std::cout << a << " " << b << " " << c << " " << d << std::endl;
    
    ++d;
    std::cout << a << " " << b << " " << c << " " << d << std::endl;  
}
