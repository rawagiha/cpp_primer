#include <iostream>

int main()
{
    int ival = 1.01; //will truncate
    std::cout << ival << std::endl;
    
    //int& ref_val = 1.01; ERROR, initializer must be obj.
    
    int& ref_val2 = ival; 
    std::cout << ref_val2 << std::endl;

    //int& ref_val3; ERROR, needs initializing obj
}
