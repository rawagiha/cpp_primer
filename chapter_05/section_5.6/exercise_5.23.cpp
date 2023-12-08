#include <iostream>

int main()
{
    int i = 0, j = 0;

    if (std::cin >> i >> j)
        std::cout << i / j << std::endl;
    
    //Floating point exception (core dumped) if j = 0
}
