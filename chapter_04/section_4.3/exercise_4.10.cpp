#include <iostream>


int main()
{
    int i = 0;

    while(std::cin >> i && i != 42)
    {
        std::cout << i << " is not 42" << std::endl;
    }
}
