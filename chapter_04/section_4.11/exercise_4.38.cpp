#include <iostream>

int main()
{
    int i = 4, j = 3;

    double slope = static_cast<double>(j / i); // 0.75 -> 0 
    std::cout << slope << std::endl;

    slope = static_cast<double>(j)/ i; // j -> 4.0 first then 4.0 / 3
    std::cout << slope << std::endl;
}
