#include <iostream>
#include <cmath>

double get_abs(double x)
{
    return std::abs(x);    
}


int main()
{
    std::cout << get_abs(-8.345) << std::endl;
    std::cout << get_abs(8.345) << std::endl;
    std::cout << get_abs(-0.0) << std::endl;
}
