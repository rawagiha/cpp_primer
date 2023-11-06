#include <iostream>

int i = 42;
int main()
{
    std::cout << i << std::endl;
    int i = 100;
    int j = i;
    std::cout << i << " " << j << std::endl;
}
