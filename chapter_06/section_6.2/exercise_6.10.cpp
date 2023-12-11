#include <iostream>

void swap_ints(int* p, int* q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}


int main()
{
    int i, j;
    
    std::cout << "Enter two ints:" << std::endl;
    std::cin >> i >> j;
    
    std::cout << i << " " << &i << " " << j << " " << &j <<std::endl;
    
    if (std::cin)
    {
        swap_ints(&i, &j);
    }
    else
    {
        std::cout << "Invalid input. No swapping" << std::endl;
    }

    std::cout << i << " " << &i << " " << j << " " << &j <<std::endl;
}
