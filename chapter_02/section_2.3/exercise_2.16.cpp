#include <iostream>

int main()
{
    int i = 0;
    int& r1 = i;

    double d = 0;
    double& r2 = d;

    r2 = 3.14159; // d = 3.14159
    std::cout << d << std::endl;

    r2 = r1; //same as d = i auto coversion
    std::cout << d << std::endl;
    
    r2 = 3.14159;
    i = r2; // same as i = d  will truncate to 3
    std::cout << i << std::endl;
    
    r1 = d; // same as i = d will truncate to 3
    std::cout << i << std::endl;
}
