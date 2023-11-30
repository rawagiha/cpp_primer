#include <iostream>

int main()
{
    float fval = 0.2;
    //bool true
    if (fval)
    {
        std::cout << fval << std::endl;
    }
    
    int ival = 3;
    // fval + ival -> float
    // dval = fval -> double
    double dval = fval + ival;
    std::cout << dval << std::endl; 
      
    char cval = 'q';
    std::cout << static_cast<int>(cval) << std::endl;
    
    //ival * cval -> int
    //dval + int -> double
    std::cout << (dval + ival * cval) << std::endl;
}
