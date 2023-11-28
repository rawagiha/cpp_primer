#include <iostream>

int main()
{
    unsigned long ul1= 3, ul2 = 7;
    
    //ul1 = 011, ul2 = 111

    // ul1 & ul2 -> 011
    std::cout << (ul1 & ul2) << std::endl; 

    //ul1 | ul2 -> 111
    std::cout << (ul1 | ul2) << std::endl;

    //ul1 || ul2 -> true
    std::cout << (ul1 || ul2) << std::endl;

    //ul1 && ul2 -> true
    std::cout << (ul1 && ul2) << std::endl;
}
