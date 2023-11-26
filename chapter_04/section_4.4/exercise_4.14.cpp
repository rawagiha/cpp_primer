#include <iostream>

int main()
{
    int i; 
    //42 (literal) is rvalue
    //if (42 = i) { };
    
    // this is legal. test if i is zero (false) or not
    // true in this case (i = 42)
    if (i = 42)
    {
        std::cout << i << std::endl;
    }
}
