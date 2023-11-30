#include <iostream>

int main()
{
    char cval = '\0';

    cval = 'a' + 3;
    // 'a' -> int
    // ('a' + 3) -> converted to char
    std::cout << cval << std::endl;

    int ival = 5;
    unsigned int ui = 1;
    
    //ival * 1.0 -> double 1.0 is double-literal
    //unsigned int - signed float -> unsigned float + unsigned float 
    //double is larger than uint
    //-> ui is converted to double -> truncated to float
    float fval = ui - ival * 1.0;
    std::cout << fval << std::endl;
   
    //ui -> float -> double
    double dval = ui * fval;
    std::cout << dval << std::endl;
    
    // (ivalv + fval) -> float
    // float + dval -> double
    // -> truncate to char
    cval = ival + fval + dval;
    std::cout << cval << std::endl;
}
