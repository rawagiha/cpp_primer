#include <iostream>

int main()
{
    unsigned char q = 0161;
    std::cout << q << std::endl;
    std::cout << (~q << 6) << std::endl;  
}
