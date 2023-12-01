#include <iostream>

int main()
{
    int i = 99;
    double d = 4.0;

    std::cout << (i *= static_cast<int>(d)) << std::endl;
}
