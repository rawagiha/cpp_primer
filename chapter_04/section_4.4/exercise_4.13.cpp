#include <iostream>

int main()
{
    int i; 
    double d;

    d = i = 3.5;
    // 3.5 truncated to 3 (i) and d = 3
    std::cout << i << " " << d << std::endl;

    i = d = 3.5;
    std::cout << i << " " << d << std::endl;
}
