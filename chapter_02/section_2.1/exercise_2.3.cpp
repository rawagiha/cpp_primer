#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    
    // 42 - 10 = 32
    std::cout << u2 - u << std::endl;
    
    // 10 - 42 -> wrap around 
    std::cout << u - u2 << std::endl; 
    std::cout << std::endl;
    
    int i = 10, i2 = 42;
    // 42 - 10 = 32
    std::cout << i2 -i << std::endl; 
    
    // 10 -42 = -32
    std::cout << i - i2 << std::endl;
    
    // 10(int) - 10 (unsigned) 
    // -> 10 (unsigned) - 10 (unsigned) = 0 (unsigned)
    std::cout << i - u << std::endl;
    
    //same
    std::cout << u - i << std::endl;
     
}
