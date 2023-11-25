#include <iostream>

int main()
{
    int a = 1, b = 2, c = 3, d = 4;

    if (a < b && b < c && c < d)
    {
        std::cout << a << " < " 
                  << b << " < " 
                  << c << " < " 
                  << d << std::endl;
    }
}
